
//{{BLOCK(bg2)

//======================================================================
//
//	bg2, 512x256@4, 
//	+ palette 256 entries, not compressed
//	+ 158 tiles (t|f|p reduced) not compressed
//	+ regular map (in SBBs), not compressed, 64x32 
//	Total size: 512 + 5056 + 4096 = 9664
//
//	Time-stamp: 2018-12-04, 19:34:58
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.3
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_BG2_H
#define GRIT_BG2_H

#define bg2TilesLen 5056
extern const unsigned short bg2Tiles[2528];

#define bg2MapLen 4096
extern const unsigned short bg2Map[2048];

#define bg2PalLen 512
extern const unsigned short bg2Pal[256];

#endif // GRIT_BG2_H

//}}BLOCK(bg2)
