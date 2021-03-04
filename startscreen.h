
//{{BLOCK(startscreen)

//======================================================================
//
//	startscreen, 256x256@8, 
//	+ palette 256 entries, not compressed
//	+ 548 tiles (t|f|p reduced) not compressed
//	+ regular map (in SBBs), not compressed, 32x32 
//	Total size: 512 + 35072 + 2048 = 37632
//
//	Time-stamp: 2018-11-29, 16:52:32
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.3
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_STARTSCREEN_H
#define GRIT_STARTSCREEN_H

#define startscreenTilesLen 35072
extern const unsigned short startscreenTiles[17536];

#define startscreenMapLen 2048
extern const unsigned short startscreenMap[1024];

#define startscreenPalLen 512
extern const unsigned short startscreenPal[256];

#endif // GRIT_STARTSCREEN_H

//}}BLOCK(startscreen)
