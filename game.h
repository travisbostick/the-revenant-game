typedef struct {
	int screenRow;
	int screenCol;
	int worldRow;
	int worldCol;
	int oldRow;
	int oldCol;
	int state;
	int health;
} ANISPRITE;

// Constants
#define MAPWIDTH 256

// Prototypes
void initGame();
void updateGame();
void drawGame();

void initLeo();
void updateLeo();
void drawLeo();
void leoBreath();
void leoRun();
void leoPunch();

void initBear();
void updateBear();
void drawBear();
void bearWalk();
void bearStand();

void drawHealth();
void drawBlood();

int winner;
int loser;

int cheat;