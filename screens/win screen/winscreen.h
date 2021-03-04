
//{{BLOCK(winscreen)

//======================================================================
//
//	winscreen, 256x256@8, 
//	+ palette 256 entries, not compressed
//	+ 597 tiles (t|f|p reduced) not compressed
//	+ regular map (in SBBs), not compressed, 32x32 
//	Total size: 512 + 38208 + 2048 = 40768
//
//	Time-stamp: 2018-12-03, 12:01:50
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.3
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_WINSCREEN_H
#define GRIT_WINSCREEN_H

#define winscreenTilesLen 38208
extern const unsigned short winscreenTiles[19104];

#define winscreenMapLen 2048
extern const unsigned short winscreenMap[1024];

#define winscreenPalLen 512
extern const unsigned short winscreenPal[256];

#endif // GRIT_WINSCREEN_H

//}}BLOCK(winscreen)
