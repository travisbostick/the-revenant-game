
//{{BLOCK(pausescreen)

//======================================================================
//
//	pausescreen, 256x256@8, 
//	+ palette 256 entries, not compressed
//	+ 580 tiles (t|f|p reduced) not compressed
//	+ regular map (in SBBs), not compressed, 32x32 
//	Total size: 512 + 37120 + 2048 = 39680
//
//	Time-stamp: 2018-11-29, 16:52:22
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.3
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_PAUSESCREEN_H
#define GRIT_PAUSESCREEN_H

#define pausescreenTilesLen 37120
extern const unsigned short pausescreenTiles[18560];

#define pausescreenMapLen 2048
extern const unsigned short pausescreenMap[1024];

#define pausescreenPalLen 512
extern const unsigned short pausescreenPal[256];

#endif // GRIT_PAUSESCREEN_H

//}}BLOCK(pausescreen)
