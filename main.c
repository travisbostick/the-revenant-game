#include <stdlib.h>
#include "myLib.h"
#include "game.h"
#include "sound.h"

#include "spritesheet1.h"
#include "spritesheet2.h"
#include "spritesheet3.h"
#include "spritesheet4.h"
#include "spritesheet5.h"

#include "bg.h"
#include "bg1.h"
#include "bg2.h"

#include "startscreen.h"
#include "startscreen1.h"
#include "startscreen2.h"
#include "startscreen3.h"
#include "winscreen.h"
#include "losescreen.h"
#include "instructionsscreen.h"
#include "instructionstext.h"
#include "pausescreen.h"

#include "startsound.h"
#include "fightsound.h"
#include "punchsound.h"

void initialize();

void start();
void goToStart();
void instructions();
void goToInstructions();
void game();
void goToGame();
void pause();
void goToPause();
void win();
void goToWin();
void lose();
void goToLose();

SOUND soundA;

unsigned short buttons;
unsigned short oldButtons;

int state;

int startHOff;

int dontplay;

enum {START, INSTRUCTIONS, GAME, PAUSE, WIN, LOSE};

int main() {

	initialize();

	while(1) {

		oldButtons = buttons;
		buttons = BUTTONS;

		switch (state) {
			case START:
				start();
				break;
			case INSTRUCTIONS:
				instructions();
				break;
			case GAME:
				game();
				break;
			case PAUSE:
				pause();
				break;
			case WIN:
				win();
				break;
			case LOSE:
				lose();
				break;
		}

	}
}

void initialize() {

	REG_BG0CNT = BG_CHARBLOCK(0) | BG_8BPP | BG_SCREENBLOCK(31) | BG_SIZE_SMALL;

	REG_BG1CNT = BG_CHARBLOCK(1) | BG_4BPP | BG_SCREENBLOCK(30) | BG_SIZE_WIDE;

	REG_BG2CNT = BG_CHARBLOCK(2) | BG_4BPP | BG_SCREENBLOCK(28) | BG_SIZE_WIDE;

	hideSprites();

	REG_DISPCTL = MODE0 | BG0_ENABLE | SPRITE_ENABLE;

	setupSounds();
	setupInterrupts();

	cheat = 0;

	goToStart();

	startHOff = 0;

	dontplay = 0;
}

void start() {

	if (BUTTON_PRESSED(BUTTON_START)) {
		initGame();
		goToGame();
	}
	if (BUTTON_PRESSED(BUTTON_B)) {
		goToInstructions();
	}
	if (BUTTON_PRESSED(BUTTON_UP)) {
		if (cheat == 0) {
			cheat = 1;
			DMANow(3, startscreen3Tiles, &CHARBLOCK[1], startscreen3TilesLen / 2);
			DMANow(3, startscreen3Map, &SCREENBLOCK[30], startscreen3MapLen / 2);
			DMANow(3, startscreen3Pal, PALETTE, startscreen3PalLen / 2);
		} else {
			cheat = 0;
			DMANow(3, startscreen1Tiles, &CHARBLOCK[1], startscreen1TilesLen / 2);
			DMANow(3, startscreen1Map, &SCREENBLOCK[30], startscreen1MapLen / 2);
			DMANow(3, startscreen1Pal, PALETTE, startscreen1PalLen / 2);
		}
	}
	startHOff++;
	REG_BG2HOFF = startHOff / 2000;
}

void instructions() {
	if (BUTTON_PRESSED(BUTTON_B)) {
		dontplay = 1;
		goToStart();
	}
	startHOff++;
	REG_BG2HOFF = startHOff / 2000;
}

void game() {

	updateGame();

	drawGame();

	waitForVBlank();

	if (BUTTON_PRESSED(BUTTON_START)) {
		goToPause();
	}
	if (BUTTON_PRESSED(BUTTON_L)) {
		goToLose();
	}
	if (BUTTON_PRESSED(BUTTON_R)) {
		goToWin();
	}

	if (winner == 1) {
		goToWin();
	}
	if (loser == 1) {
		goToLose();
	}
}


void pause() {
	if (BUTTON_PRESSED(BUTTON_START)) {
		goToGame();
		dontplay = 1;
	}
	if (BUTTON_PRESSED(BUTTON_SELECT)) {
		goToStart();
	}
}

void win() {
	if (BUTTON_PRESSED(BUTTON_START)) {
		dontplay = 1;
		goToStart();
	}
}

void lose() {
	if (BUTTON_PRESSED(BUTTON_START)) {
		goToStart();
	}
}

void goToStart() {
	REG_DISPCTL = MODE0 | BG1_ENABLE | BG2_ENABLE | SPRITE_ENABLE;
	if (!dontplay) {
		playSoundA(startsound, STARTSOUNDLEN, STARTSOUNDFREQ, 1);
	}
	dontplay = 0;
	if (cheat) {
		DMANow(3, startscreen3Tiles, &CHARBLOCK[1], startscreen3TilesLen / 2);
		DMANow(3, startscreen3Map, &SCREENBLOCK[30], startscreen3MapLen / 2);
		DMANow(3, startscreen3Pal, PALETTE, startscreen3PalLen / 2);
	} else {
		DMANow(3, startscreen1Tiles, &CHARBLOCK[1], startscreen1TilesLen / 2);
		DMANow(3, startscreen1Map, &SCREENBLOCK[30], startscreen1MapLen / 2);
		DMANow(3, startscreen1Pal, PALETTE, startscreen1PalLen / 2);
	}
	DMANow(3, startscreen2Tiles, &CHARBLOCK[2], startscreen2TilesLen / 2);
	DMANow(3, startscreen2Map, &SCREENBLOCK[28], startscreen2MapLen / 2);
	DMANow(3, startscreen2Pal, PALETTE, startscreen2PalLen / 2);
	hideSprites();
	REG_BG1HOFF = 0;
	state = START;
}

void goToInstructions() {
	REG_DISPCTL = MODE0 | BG1_ENABLE | BG2_ENABLE | SPRITE_ENABLE;
	DMANow(3, instructionstextTiles, &CHARBLOCK[1], instructionstextTilesLen / 2);
	DMANow(3, instructionstextMap, &SCREENBLOCK[30], instructionstextMapLen / 2);
	DMANow(3, instructionstextPal, PALETTE, instructionstextPalLen / 2);
	hideSprites();
	state = INSTRUCTIONS;
}

void goToGame() {
	REG_DISPCTL = MODE0 | BG1_ENABLE | BG2_ENABLE | SPRITE_ENABLE;
	if (!dontplay) {
		playSoundA(fightsound, FIGHTSOUNDLEN, FIGHTSOUNDFREQ, 1);
	}
	dontplay = 0;
	// DMANow(3, bgTiles, &CHARBLOCK[0], bgTilesLen / 2);
	// DMANow(3, bgMap, &SCREENBLOCK[31], bgMapLen / 2);
	// DMANow(3, bgPal, PALETTE, bgPalLen / 2);
	if (!cheat) {
		DMANow(3, spritesheet1Pal, SPRITEPALETTE, spritesheet1PalLen / 2);
		DMANow(3, spritesheet1Tiles, &CHARBLOCK[4], spritesheet1TilesLen / 2);
	} else {
		DMANow(3, spritesheet4Pal, SPRITEPALETTE, spritesheet4PalLen / 2);
		DMANow(3, spritesheet4Tiles, &CHARBLOCK[4], spritesheet4TilesLen / 2);
	}
	DMANow(3, bg1Tiles, &CHARBLOCK[1], bg1TilesLen / 2);
	DMANow(3, bg1Map, &SCREENBLOCK[30], bg1MapLen / 2);
	DMANow(3, bg1Pal, PALETTE, bg1PalLen / 2);
	DMANow(3, bg2Tiles, &CHARBLOCK[2], bg2TilesLen / 2);
	DMANow(3, bg2Map, &SCREENBLOCK[28], bg2MapLen / 2);
	DMANow(3, bg2Pal, PALETTE, bg2PalLen / 2);
	state = GAME;
}

void goToPause() {
	REG_DISPCTL = MODE0 | BG0_ENABLE | SPRITE_ENABLE;
	REG_BG0HOFF = 0;
	DMANow(3, pausescreenTiles, &CHARBLOCK[0], pausescreenTilesLen / 2);
	DMANow(3, pausescreenMap, &SCREENBLOCK[31], pausescreenMapLen / 2);
	DMANow(3, pausescreenPal, PALETTE, pausescreenPalLen / 2);
	hideSprites();
	state = PAUSE;
}

void goToWin() {
	REG_DISPCTL = MODE0 | BG0_ENABLE | SPRITE_ENABLE;
	if (!dontplay) {
		playSoundA(startsound, STARTSOUNDLEN, STARTSOUNDFREQ, 1);
	}
	dontplay = 0;
	REG_BG0HOFF = 0;
	DMANow(3, winscreenTiles, &CHARBLOCK[0], winscreenTilesLen / 2);
	DMANow(3, winscreenMap, &SCREENBLOCK[31], winscreenMapLen / 2);
	DMANow(3, winscreenPal, PALETTE, winscreenPalLen / 2);
	hideSprites();
	state = WIN;
}

void goToLose() {
	REG_DISPCTL = MODE0 | BG0_ENABLE | SPRITE_ENABLE;
	REG_BG0HOFF = 0;
	DMANow(3, losescreenTiles, &CHARBLOCK[0], losescreenTilesLen / 2);
	DMANow(3, losescreenMap, &SCREENBLOCK[31], losescreenMapLen / 2);
	DMANow(3, losescreenPal, PALETTE, losescreenPalLen / 2);
	hideSprites();
	state = LOSE;
}