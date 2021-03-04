#include <stdlib.h>
#include "myLib.h"
#include "game.h"
#include "sound.h"
#include "punchsound.h"
#include "knifesound.h"
#include "spritesheet1.h"
#include "spritesheet2.h"
#include "spritesheet3.h"
#include "spritesheet4.h"
#include "spritesheet5.h"

int hOff;

OBJ_ATTR shadowOAM[128];

ANISPRITE leo;

ANISPRITE bear;

enum {STANDING, BREATHING, RUNNING, WALKING, PUNCHING, PUNCHED};

int lTimer;
int bTimer;

int lRow;
int lCol;

int bRow;
int bCol;

int fire;
int punched;
int dead;

int blTimer;

int newTimer;

SOUND soundB;

void initGame() {

	// soundB.loops = 0;

	hOff = 16;

	initLeo();

	initBear();

	winner = 0;

	loser = 0;

	dead = 0;

}

void initLeo() {

	leo.worldRow = 99;
	leo.worldCol = 30 + hOff;
	leo.state = BREATHING;
	leo.health = 8;
	lRow = 0;
	lCol = 4;
	lTimer = 0;
	fire = 0;

}

void initBear() {

	bear.worldRow = 105;
	bear.worldCol = 150;
	bear.state = WALKING;
	bear.health = 8;
	bRow = 8;
	bCol = 12;
	bTimer = 0;

}

void updateGame() {

	updateLeo();

	updateBear();

}

void updateLeo() {

	if (!fire && !punched && !dead) {

		if (BUTTON_PRESSED(BUTTON_A)) {
			lTimer = 0;
			leoPunch();
			lRow = 0;
			lCol = 20;
			leo.state = PUNCHING;
		} else if (BUTTON_HELD(BUTTON_RIGHT) && !(leo.state == PUNCHING)) {
			if (leo.worldCol < bear.worldCol) {
				leo.worldCol++;
			}
			if (lCol == 0) {
				lCol = 4;
			}
			leoRun();
			leo.state = RUNNING;
			// if ((hOff < MAPWIDTH-SCREENWIDTH)
			// 	&& (leo.screenCol >= (SCREENWIDTH * 0.45))) {
				hOff++;
			// }
		} else if (BUTTON_HELD(BUTTON_LEFT) && !(leo.state == PUNCHING)) {
			leo.worldCol--;
			if (lCol == 0) {
				lCol = 4;
			}
			leoRun();
			leo.state = RUNNING;
			// leo.state = RUNNING;
			// if ((hOff > 0 && (leo.screenCol <= SCREENWIDTH*0.55))) {
				hOff--;
			// }
		// } else if (BUTTON_PRESSED(BUTTON_B)) {
		// 	DMANow(3, spritesheet3Pal, SPRITEPALETTE, spritesheet3PalLen / 2);
		// 	DMANow(3, spritesheet3Tiles, &CHARBLOCK[4], spritesheet3TilesLen / 2);
		// 	lRow = 0;
		// 	lCol = 0;
		// 	fire = 1;
		// 	newTimer = 0;
		} else if (leo.state == PUNCHING) {
			leoPunch();
		} else {
			leoBreath();
			leo.state = BREATHING;
		}
	} else if (fire || dead){
		newTimer++;
		if (newTimer > 200) {
			winner = 1;
		}
	} else if (punched) {
		if (lTimer > 20) {
			leo.worldCol -= 6;
			hOff -= 4;
			punched = 0;
			leo.state = RUNNING;
		}
	}

	if (leo.health == 0) {
		loser = 1;
	}
	if (bear.health == 0) {
		dead = 1;
		lRow = 0;
		lCol = 0;
	}

	lTimer++;


	// if (leo.worldCol <= 0) {
	// 	leo.worldCol = 0;
	// }
	// if (leo.worldCol >= (MAPWIDTH - 64)) {
	// 	leo.worldCol = MAPWIDTH - 64;
	// }


	leo.screenRow = leo.worldRow;
	leo.screenCol = leo.worldCol - hOff;

}

void updateBear() {


	if (!fire && !(bear.state == PUNCHED)) {

		if (bear.state == WALKING) {
			bearWalk();
		}
		if ((bear.worldCol - leo.worldCol) < 40) {
			if (bear.state != STANDING) {
				bear.worldRow -= 16;
				bear.state = STANDING;
				bRow = 8;
				if (!cheat) {
					DMANow(3, spritesheet2Pal, SPRITEPALETTE, spritesheet2PalLen / 2);
					DMANow(3, spritesheet2Tiles, &CHARBLOCK[4], spritesheet2TilesLen / 2);
				} else {
					DMANow(3, spritesheet5Pal, SPRITEPALETTE, spritesheet5PalLen / 2);
					DMANow(3, spritesheet5Tiles, &CHARBLOCK[4], spritesheet5TilesLen / 2);
				}
			}
			bearStand();
		} else {
			if (bear.state == STANDING) {
				bear.worldRow += 16;
				bear.state = WALKING;
				DMANow(3, spritesheet1Pal, SPRITEPALETTE, spritesheet1PalLen / 2);
				DMANow(3, spritesheet1Tiles, &CHARBLOCK[4], spritesheet1TilesLen / 2);
			}
		}

	} else if (bear.state == PUNCHED) {
		bCol = 20;
		if ((bTimer % 10) == 0) {
			if (bCol == 20) {
				bCol = 12;
			} else {
				bCol = 20;
			}
		}
		if (bTimer > 39) {
			bear.state = STANDING;
		}
		drawBlood();
	} else {
		bRow = 8;
		bCol = 12;
	}

	if (dead) {
		bRow = 16;
		bCol = 20;
	}

	bTimer++;

	bear.screenRow = bear.worldRow;
	bear.screenCol = bear.worldCol - hOff;

}

void drawGame() {

	drawBear();

	drawLeo();

	drawHealth();

	DMANow(3, shadowOAM, OAM, 128*4);

	REG_BG1HOFF = hOff;
	REG_BG2HOFF = hOff/2;

}

void drawLeo() {
	if ((((lRow != 0) || ((lRow == 0) && (lCol > 16))
		|| (leo.state == PUNCHED)) && !fire && !((lRow == 8) && (lCol == 20)))
		|| dead) {

		shadowOAM[0].attr0 = leo.screenRow | ATTR0_4BPP | ATTR0_TALL;
	
	} else {
		shadowOAM[0].attr0 = leo.screenRow | ATTR0_4BPP | ATTR0_SQUARE;
	}
	shadowOAM[0].attr1 = leo.screenCol | ATTR1_LARGE;
	shadowOAM[0].attr2 = ATTR2_PALROW(0) | ATTR2_TILEID(lRow, lCol);
}

void drawBear() {
	shadowOAM[1].attr0 = bear.screenRow | ATTR0_4BPP | ATTR0_SQUARE;
	shadowOAM[1].attr1 = bear.screenCol | ATTR1_LARGE;
	shadowOAM[1].attr2 = ATTR2_PALROW(1) | ATTR2_TILEID(bRow, bCol);

	if (bear.state == PUNCHED) {
		if (bCol == 20) {
			shadowOAM[1].attr2 = ATTR2_PALROW(4) | ATTR2_TILEID(bRow, bCol);
		}
	}

	if (dead) {
		shadowOAM[1].attr2 = ATTR2_PALROW(3) | ATTR2_TILEID(bRow, bCol);
	}
}

void drawHealth() {
	shadowOAM[2].attr0 = 10 | ATTR0_4BPP | ATTR0_WIDE;
	shadowOAM[2].attr1 = 10 | ATTR1_SMALL;
	shadowOAM[2].attr2 = ATTR2_PALROW(2) | ATTR2_TILEID(31-leo.health, 28);

	shadowOAM[3].attr0 = 10 | ATTR0_4BPP | ATTR0_WIDE;
	shadowOAM[3].attr1 = 198 | ATTR1_SMALL;
	shadowOAM[3].attr2 = ATTR2_PALROW(2) | ATTR2_TILEID(31-bear.health, 28);
}

void drawBlood() {

	if (blTimer < 10) {
		shadowOAM[4].attr0 = 10 | ATTR0_4BPP | ATTR0_SQUARE;
		shadowOAM[4].attr1 = 198 | ATTR1_SMALL;
		shadowOAM[4].attr2 = ATTR2_PALROW(2) | ATTR2_TILEID(16, 28);
	} else if (blTimer < 20) {
		shadowOAM[4].attr0 = (leo.screenRow + 15) | ATTR0_4BPP | ATTR0_SQUARE;
		shadowOAM[4].attr1 = (leo.screenCol + 45) | ATTR1_SMALL;
		shadowOAM[4].attr2 = ATTR2_PALROW(2) | ATTR2_TILEID(16, 28);
	} else {
		shadowOAM[4].attr0 = (leo.screenRow + 15) | ATTR0_4BPP | ATTR0_SQUARE;
		shadowOAM[4].attr1 = (leo.screenCol + 45) | ATTR1_SMALL;
		shadowOAM[4].attr2 = ATTR2_PALROW(2) | ATTR2_TILEID(0, 30);
	}

	blTimer++;

}

void leoBreath() {
	lCol = 0;
	if (lRow == 0) {
		lRow = 8;
	}
	if (lTimer > 50) {
		lTimer = 0;
		if (lRow == 24) {
			lRow = 0;
		}
		lRow += 8;
	}
}

void leoRun() {
	if (lTimer > 10) {
		lTimer = 0;
		if (lRow == 24) {
			lRow = -8;
			if (lCol == 4) {
				lCol += 8;
			} else {
				lCol -= 4;
			}
		}
		lRow += 8;
	}
	if ((lRow != 0) && (lCol != 4)) {
		lCol = 8;
	}
}

void bearWalk() {
	if (bTimer > 20) {
		bTimer = 0;
		bear.worldCol -= 5;
		if (bRow == 24) {
			bRow = 0;
			bear.worldCol -= 4;
		} else {
			bear.worldCol -= 5;
		}
		bRow += 8;
	}
}

void leoPunch() {
	if (lTimer == 8) {
		lCol += 4;
	}
	if (lTimer > 20) {
		lTimer = 0;
		leoBreath();
		leo.state = BREATHING;
		if ((((bear.worldCol - leo.worldCol) < 20) && (bear.state != PUNCHED))
			|| (((bear.worldCol - leo.worldCol) < 23) && cheat)) {
			bTimer = 0;
			bRow = 24;
			bear.state = PUNCHED;
			bear.health--;
			if (!winner) {
				if (cheat) {
					playSoundB(knifesound, KNIFESOUNDLEN, KNIFESOUNDFREQ, 0);
				} else {
					playSoundB(punchsound, PUNCHSOUNDLEN, PUNCHSOUNDFREQ, 0);
				}
			}
		}
	}
}

void bearStand() {
	int time = 26;
	if (cheat) {
		time = 45;
	}
	if ((bear.worldCol - leo.worldCol) < 50) {
		if (bTimer > time) {
			bTimer = 0;
			if (bRow == 8) {
				bRow = 16;
				if (!punched) {
					bear.worldCol -= 9;
				}
			} else if (bRow == 16) {
				bRow = 24;
				if (!punched) {
					bear.worldCol -= 1;
				}
			} else {
				bRow = 8;
				if (!punched) {
					bear.worldCol -= 1;
				}
			}
			if (((bRow > 8) && (bear.worldCol - leo.worldCol) < 16) && !punched
				&& (bear.health > 0)) {
				leo.state = PUNCHED;
				leo.health--;
				if (!winner) {
					playSoundB(punchsound, PUNCHSOUNDLEN, PUNCHSOUNDFREQ, 0);
				}
				punched = 1;
				if (bRow == 16) {
					lCol = 20;
				} else {
					lCol = 28;
				}
				lRow = 8;
				lTimer = 0;
			}
		}
	}

	// if (((bRow > 8) && (bear.worldCol - leo.worldCol) < 16) && !punched) {
	// 	leo.state = PUNCHED;
	// 	leo.health--;
	// 	punched = 1;
	// 	if (bRow == 16) {
	// 		lCol = 20;
	// 	} else {
	// 		lCol = 28;
	// 	}
	// 	lRow = 8;
	// 	lTimer = 0;
	// }
}