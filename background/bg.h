
//{{BLOCK(bg)

//======================================================================
//
//	bg, 256x256@8, 
//	+ palette 256 entries, not compressed
//	+ 632 tiles (t|f|p reduced) not compressed
//	+ regular map (in SBBs), not compressed, 32x32 
//	Total size: 512 + 40448 + 2048 = 43008
//
//	Time-stamp: 2018-11-29, 17:01:38
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.3
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_BG_H
#define GRIT_BG_H

#define bgTilesLen 40448
extern const unsigned short bgTiles[20224];

#define bgMapLen 2048
extern const unsigned short bgMap[1024];

#define bgPalLen 512
extern const unsigned short bgPal[256];

#endif // GRIT_BG_H

//}}BLOCK(bg)
