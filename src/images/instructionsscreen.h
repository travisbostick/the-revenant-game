
//{{BLOCK(instructionsscreen)

//======================================================================
//
//	instructionsscreen, 256x256@8, 
//	+ palette 256 entries, not compressed
//	+ 552 tiles (t|f|p reduced) not compressed
//	+ regular map (in SBBs), not compressed, 32x32 
//	Total size: 512 + 35328 + 2048 = 37888
//
//	Time-stamp: 2018-11-29, 18:26:33
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.3
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_INSTRUCTIONSSCREEN_H
#define GRIT_INSTRUCTIONSSCREEN_H

#define instructionsscreenTilesLen 35328
extern const unsigned short instructionsscreenTiles[17664];

#define instructionsscreenMapLen 2048
extern const unsigned short instructionsscreenMap[1024];

#define instructionsscreenPalLen 512
extern const unsigned short instructionsscreenPal[256];

#endif // GRIT_INSTRUCTIONSSCREEN_H

//}}BLOCK(instructionsscreen)
