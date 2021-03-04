
//{{BLOCK(losescreen)

//======================================================================
//
//	losescreen, 256x256@8, 
//	+ palette 256 entries, not compressed
//	+ 588 tiles (t|f|p reduced) not compressed
//	+ regular map (in SBBs), not compressed, 32x32 
//	Total size: 512 + 37632 + 2048 = 40192
//
//	Time-stamp: 2018-12-04, 14:21:21
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.3
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_LOSESCREEN_H
#define GRIT_LOSESCREEN_H

#define losescreenTilesLen 37632
extern const unsigned short losescreenTiles[18816];

#define losescreenMapLen 2048
extern const unsigned short losescreenMap[1024];

#define losescreenPalLen 512
extern const unsigned short losescreenPal[256];

#endif // GRIT_LOSESCREEN_H

//}}BLOCK(losescreen)
