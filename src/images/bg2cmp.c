
//{{BLOCK(bg2cmp)

//======================================================================
//
//	bg2cmp, 512x256@4, 
//	+ palette 256 entries, not compressed
//	+ 158 tiles (t|f|p reduced) not compressed
//	+ regular map (in SBBs), not compressed, 64x32 
//	Total size: 512 + 5056 + 4096 = 9664
//
//	Time-stamp: 2018-12-04, 19:16:35
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.3
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

const unsigned short bg2cmpTiles[2528] __attribute__((aligned(4)))=
{
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xEEEE,0xEEEB,0xEEBB,0xEEE9,0x8BBB,0x988D,0xBEBB,0x8877,
	0xBB8B,0x8BBB,0xBBBB,0x9A7B,0xEEEE,0x88BB,0xBBBB,0x88B7,
	0xCDBB,0xBEEC,0xCBBE,0xCDD9,0xEEB9,0xBDDE,0xDC99,0xCCBE,
	0xEC99,0xCDEE,0xEC98,0xCDEB,0xBC99,0xDEDB,0xBC99,0xDDDD,
	0x7DED,0x9CDD,0xDCDD,0x99DE,0x8DDD,0xEEDC,0xDCEB,0xBBDD,
	0x9DEE,0xECDC,0xCDDE,0xEAC9,0xDDED,0xBDD9,0xCDDD,0xBCD9,

	0xBEED,0xBBDE,0xEBBD,0xCDDB,0xABDE,0xEDBE,0xA6AB,0xBEAA,
	0x66AB,0xAEAB,0x6ABD,0xABDA,0xA6DB,0xA6A9,0xBBDB,0xCCCC,
	0xAD9E,0xABDE,0xCCCC,0xDD7D,0xCDBB,0xEEB9,0xCDDB,0xEBBA,
	0xDDBB,0xEC9D,0xDCBE,0xE9CB,0xBBAA,0x9ACD,0xB9A9,0x8CDB,
	0xBDAA,0xCACD,0xDDAD,0xCCDD,0xBDDD,0xACDB,0xCDDD,0x9EDA,
	0xDEEE,0x9EDD,0xEBBE,0xDBDD,0xEBBB,0xDDDE,0xDDD9,0xEEEE,
	0xEE8D,0xDEEB,0xEEEC,0xEEEE,0xED89,0xEBBB,0xEDD9,0xEEEE,
	0xDC98,0xBEED,0xD99C,0x9BDC,0xD9CC,0x99CC,0xCCCC,0xBBDC,

	0xDDDD,0xC9EE,0xDCDE,0x9CDD,0xCDEE,0x9CDC,0xDEEE,0x9CDD,
	0xDEEB,0x9CCD,0xDDEE,0x9CCD,0xDEED,0x9CCC,0xDEEB,0xCCCC,
	0xEEDA,0xEEBE,0xDD98,0xBEEE,0xCC89,0xEEBB,0x8889,0xEEEB,
	0x7789,0xEBCC,0x8889,0xEED8,0x8899,0xBEBD,0x8899,0xD8BB,
	0xEBBB,0xD9CC,0xEBBB,0xD9CC,0xDBEE,0xDEDD,0xCCEE,0xBEDD,
	0xDEEB,0xEEEE,0xEEEE,0xEBEE,0xEBEE,0xDBDD,0xE9EE,0xDBBB,
	0xD7DE,0xD9CD,0xEDCD,0xD99D,0xC8DD,0xEEED,0xDDCE,0xBBBD,
	0xC9DE,0xBECD,0x9CDD,0xDEAC,0x9DDE,0xBBDD,0x9CDD,0xBBCD,

	0xEBEE,0xEEBB,0xB7DB,0xBBBB,0xBBBD,0xBBEE,0xBBBA,0xEBBE,
	0xBBBA,0xBEBE,0xEDDB,0xEBBE,0xBBBD,0xBBEE,0xDBBD,0xB8BE,
	0xBED8,0x9A8B,0xBD98,0x98BB,0x8888,0xECEC,0x8787,0xDDEB,
	0x7797,0x99C8,0x8887,0xC988,0x8888,0xD999,0x7889,0xC998,
	0xEC99,0xDDDE,0xBDC9,0xCDDB,0xDDBD,0x9DDD,0x9BBD,0x9DDD,
	0x9BBB,0x9CDD,0x9DED,0x89DC,0xCDDD,0x89DC,0xDDDD,0x99C9,
	0xCDDD,0xDDDC,0xCDDD,0xCDDC,0x8CDD,0x9CDD,0x8CDD,0xDDDD,
	0x9CDD,0xDDDD,0xC8CD,0xBDDD,0xD8CD,0xEBDD,0xD9CD,0xEBDD,

	0xDBDA,0xBAEA,0x9BDD,0xEEE8,0xBBDD,0xDEEE,0xBBDB,0xD989,
	0xDDEB,0xD999,0xBBBB,0xCC99,0xDCBB,0xCC98,0xDEEE,0xCCC8,
	0xACDB,0xCC9A,0xBBBE,0x99DB,0xBBBB,0xCDBD,0xBDBB,0xBDBC,
	0xBDDE,0xDDDD,0xBB9D,0xBDCE,0xCD9C,0xEBBD,0xBD99,0xEBBE,
	0xD999,0xEEED,0x99AC,0xECE8,0x99CC,0xDEEC,0xCCDB,0xDCC9,
	0xDDEB,0xC9C9,0xDDBB,0x9C99,0xCCBB,0xCC99,0xCEEE,0x9CC9,
	0xDCCD,0xDDCC,0xDDCE,0xDDCB,0xDD8E,0xD9AB,0xDD8B,0xC89D,
	0xDDCC,0x89CD,0xDDD9,0x9CDD,0xDDD9,0xCCDD,0xDDD9,0xCDDD,

	0xCDED,0xCCCC,0xDDDD,0xCCCC,0xDDDD,0xCCCC,0xDDDD,0xCDCC,
	0xDDDD,0xCDCC,0xDDC8,0xCDCC,0xDDC9,0xCDCD,0xDC99,0xDCCC,
	0x8899,0xBD8A,0x8899,0xD889,0x8899,0xCD88,0x8899,0xEEC8,
	0x889C,0xCD87,0x8899,0x9888,0x889C,0x9987,0x88CC,0x9988,
	0xBBDE,0xDEDD,0xE9DB,0xDBBB,0xDBEE,0xDDEE,0xBBDE,0xDDD9,
	0xBBB9,0xDDC9,0xBBD9,0xCD9C,0xDDDC,0xCD9C,0xDDCC,0xCD9D,
	0xCCDD,0xADDD,0xCCDD,0xDCDD,0xD8CD,0xD9CD,0x9D8C,0xDDEC,
	0xCD9C,0xDCDC,0xCDC8,0xD9DC,0xDED8,0xD9CD,0xDED9,0xC99C,

	0xDBBD,0xB8CD,0xBBBD,0x99CD,0xCBBD,0x9CC9,0x9BCE,0x9CC8,
	0x7BDB,0x9C98,0x7CEB,0x9C97,0x7BDC,0x8997,0x8BED,0x9997,
	0x7789,0xC987,0x7788,0xC987,0x7798,0xCC97,0x7788,0xCC97,
	0x7789,0xC998,0x7889,0xC988,0x7899,0x9888,0x7899,0x9888,
	0xDDDD,0xDA99,0xDDDD,0xD999,0xDDDD,0xDC89,0xDDDC,0xDD99,
	0xCDDD,0xDDC8,0x9DDD,0xDDD9,0x9CDC,0xDDD9,0x98CC,0xDDDC,
	0xDD89,0xEDDD,0xDD89,0xBDDD,0xDD98,0xDDDD,0xDDC8,0xDDDD,
	0xDDDC,0xDDDD,0xDDDC,0xDDDD,0xDDDC,0xDDDD,0xDDDD,0xDDDD,

	0xCDDD,0xCCC9,0x99DE,0x9C99,0x9C9C,0x9999,0x99CD,0x9999,
	0x9CCC,0xCC98,0x9CCC,0xCC98,0xCCCC,0xCC89,0xCCCD,0x9C89,
	0xEDD9,0xEDEE,0xEEB9,0xDDDE,0xEEDC,0xDDED,0xDEDC,0xDDED,
	0xDDCC,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xCDDD,0xDDDD,0x9CDD,
	0x9CDE,0x9CC9,0x99CE,0x9CC9,0x999D,0x9999,0x999D,0xC999,
	0x8C9D,0x9C98,0x9C9C,0xCC98,0xCC9C,0xCC89,0xCCC9,0xCC89,
	0xCDDC,0xDDD9,0xDDDC,0xDDC9,0xDDDC,0xD89D,0xDDDC,0xC89D,
	0xDDD9,0x9CDD,0xDDD9,0x9CDD,0xDDDC,0xCDDD,0xDDDC,0xDDDD,

	0xCC9C,0xCCCC,0xC99C,0xCCCC,0xC9CD,0xC99C,0xC9DD,0xC89C,
	0x99DD,0x9999,0x9CDC,0x9899,0x8CCC,0x9888,0x8CCC,0x9888,
	0x888C,0x9877,0x888C,0x9877,0x887C,0x9877,0x8879,0xC977,
	0x7879,0xC887,0x7888,0xC987,0x7899,0x9887,0x7799,0x9887,
	0xDDCC,0x899D,0xDDCC,0x89CD,0xDCCC,0x98CD,0xDCCC,0xC8CD,
	0xCDCC,0xCC87,0x9DCC,0x9C98,0x9DCC,0x9CC8,0x99DC,0x9CC8,
	0xDDDD,0xEB9C,0xCCDD,0xED99,0x99DD,0xEDC9,0x99DD,0xDCC9,
	0xC999,0xDCCC,0x9899,0xDDDC,0xC899,0xDDCC,0xC899,0xDDCC,

	0x8BEE,0x9998,0x9BEE,0x9999,0xCEDE,0xC999,0xDEDD,0x9C99,
	0xDDDD,0xCCCC,0xDDDD,0xCCCC,0xDDDD,0xCCCD,0xDDDD,0x9CCD,
	0x7889,0x9C87,0x8889,0x8997,0x7999,0x9988,0x8999,0x9988,
	0x7989,0xC998,0x7889,0xC988,0x7789,0xD988,0x7799,0xC998,
	0x979C,0xDDDD,0x9999,0xDDDD,0xCCC9,0xDDDD,0xDCC9,0xDDDD,
	0xDD9C,0xDDDD,0xDD9C,0xDDDD,0xDD9C,0xDDDD,0xDDCC,0xDDDD,
	0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,
	0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,

	0xDCCD,0xCC99,0xCDDD,0xC999,0xC9CD,0xDC99,0xC9CD,0xDC98,
	0xC9CD,0xCC98,0x99CD,0xCC98,0x99DD,0x9C98,0x89DD,0x9998,
	0xDDDD,0xCDDD,0xDDDD,0xDDDD,0xDDDC,0xDDDD,0xDDDC,0xDDDD,
	0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,
	0xCCA9,0xCC99,0xC8AC,0xD999,0x7ACD,0xCC99,0xA9CD,0xCC98,
	0x99CD,0xCC8A,0x99CD,0xC789,0x99CD,0xAA98,0x89CD,0xA998,
	0xDDDD,0xDDDD,0xDDDC,0xDDDD,0xDDDC,0xDDDD,0xC9DC,0xDDDD,
	0xCCDD,0xDDDD,0x9DDD,0xDDDD,0x9DDD,0xDDC9,0xCDDC,0xDD9C,

	0x89CC,0x9987,0x9CCD,0x9988,0x9CCD,0xC988,0xCCDD,0xC989,
	0xCDDD,0xC999,0xCCDD,0xCCC9,0xDDDD,0xCCCC,0xDDDD,0xCDCC,
	0x7899,0x9987,0x8899,0x9987,0x7889,0x8987,0x8789,0x9877,
	0x8789,0x9888,0x878C,0x9877,0x8899,0x9878,0x8899,0x9888,
	0x979C,0x9CC9,0x9899,0x9CC9,0xC9C9,0x9CC9,0xCCC9,0x9CCC,
	0xCCC9,0x9CCC,0xD99C,0x9CCC,0xDC9C,0x9CDC,0xCCC9,0xCCCC,
	0x9989,0xDDCC,0x9889,0xDDCC,0xC889,0xDDCC,0xC989,0xDDCC,
	0xC989,0xDDCC,0xC899,0xDDC9,0x9899,0xDDC9,0x9999,0xDDC9,

	0xDDDD,0x9CCC,0xDDDD,0x99CC,0xDDDD,0x99CC,0xDDDD,0x99DC,
	0xDDDD,0x99CC,0xDDDD,0x99CC,0xDDDD,0x99DD,0xDDDD,0x99DD,
	0x8788,0xC988,0x8899,0xC988,0x8989,0x9987,0x8989,0x9987,
	0x9989,0x9887,0x8999,0x9977,0x9798,0x9978,0x8899,0x9998,
	0xDDDD,0xDDDD,0xDC9C,0xDDDD,0xD9C9,0xDDDD,0xDDD9,0xDDDD,
	0xDDCC,0xDDDD,0xDD9C,0xDDDD,0xDD9C,0xDDAB,0xDCCC,0xABDD,
	0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,
	0xDDDD,0xDADD,0xDDDD,0xDBDD,0xADDA,0xAADD,0xBADD,0xDDAD,

	0x89CD,0xC999,0x9CCC,0xC999,0xC9CD,0xCC99,0xC9CD,0xCC98,
	0x99CC,0xCC98,0x99CC,0x9C98,0x999D,0x9C98,0x899D,0x9998,
	0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDC,0xDDDD,0xDDDC,0xDDDA,
	0xAADD,0xDADD,0xDBDC,0xDDDA,0xAADD,0xAADD,0xADAD,0xDDAA,
	0x89CD,0xC999,0xCCCD,0xD999,0xC9CD,0xCC99,0xC9CD,0xCD98,
	0x99CD,0xCC98,0x99CD,0xCC98,0x999D,0xC998,0x899D,0xC998,
	0xD9A9,0xD99D,0x9CCC,0xCA89,0xCDDC,0x999C,0xCDDC,0x9CCA,
	0xBABD,0x9DDD,0xBDDD,0xCDDA,0xBABD,0xBDDD,0xADBC,0xDDBA,

	0xCDDD,0xCCCC,0xCDDD,0x99CC,0xDDDD,0x99CC,0xDDDD,0x99CC,
	0xDDDD,0x99CD,0xDDDD,0xC9CD,0xDDAD,0x9CCD,0xCDDA,0x9CCC,
	0x8899,0x9878,0x8999,0x9987,0x8889,0xC998,0x8889,0xC987,
	0x8889,0xC998,0x9999,0xCC99,0x8899,0xCC99,0x9899,0xC999,
	0xCCC9,0xCCCC,0xDDCC,0xCCCC,0xDCCC,0x9CCD,0xDDCC,0x9CDD,
	0xDCDC,0x9CCD,0xCCCC,0x9CCD,0xCCCC,0x9CDD,0xCCCC,0x9CDD,
	0x9999,0xDDDC,0x9999,0xDDDC,0xC999,0xDDCC,0xC989,0xDDCC,
	0xC989,0xADDC,0xC989,0xDDCC,0x9989,0xADCC,0x9988,0xDAC9,

	0xDDDD,0x99CD,0xCDDD,0x999C,0x9DDD,0x999C,0xCDAD,0x999C,
	0xDDDA,0x999C,0xDDAD,0x9C9D,0xDDDA,0x99CC,0xCAAA,0x99C9,
	0x8799,0x9978,0x8798,0x9997,0x8899,0xC999,0x8799,0xC997,
	0x8798,0xC999,0x9888,0xCC99,0x9997,0xDC99,0x9997,0xCC99,
	0xDDDC,0xAAAA,0xDDDC,0xABDB,0xAACC,0xDBAB,0xADDC,0xAAAA,
	0xAADD,0xAAAA,0xACCD,0xAAAA,0xACCC,0xAAAA,0xDCCC,0xAAAA,
	0xAAAA,0xADDA,0xAAAA,0xDAAA,0xAADA,0xDDAA,0xAAAA,0xDAAA,
	0xAAAA,0xDDAA,0xAAAA,0xCCDA,0xAAAA,0xCCDD,0xCAAA,0x999C,

	0x899D,0xC999,0x999D,0xC999,0x9CCD,0x9C99,0x9CDD,0xCC98,
	0x9DDD,0x9989,0xCDCC,0xC9C9,0x9CCC,0x998C,0xDCCC,0xADAA,
	0xAAAD,0xADAA,0xDACC,0xDAAA,0xDC99,0xDDDD,0xC9CC,0xDAAD,
	0x9CDA,0xDDDD,0xDAAA,0xDDC9,0xAAAC,0xDD7A,0xAAAC,0x9997,
	0x899D,0xC999,0x999D,0xC999,0x9CCC,0x9CC9,0x9CCD,0xCC98,
	0x9CCD,0x9989,0xCCCD,0xC9C9,0x9CCD,0x99AC,0xDDCC,0x9DAA,
	0xAAAC,0xADBA,0xBABC,0xBDBA,0xDD99,0xBABD,0xD9CD,0xBDBD,
	0xCDDA,0xAABD,0xCAAA,0xDACC,0xAAAC,0xBA88,0x8AAC,0xAA97,

	0xDAAA,0x9CDD,0xDDAD,0x99C9,0xDABA,0x99CC,0xCDAA,0x999C,
	0xCAAD,0x99CD,0xCABA,0x99CC,0xCDAD,0x9CCC,0xCCCA,0x9CCC,
	0x9899,0xCC9C,0x8999,0x8988,0x7889,0x9887,0x8889,0x9998,
	0x7889,0xC987,0x7999,0xC887,0x7899,0xC887,0x7899,0xC987,
	0xCCCC,0x9CDD,0x8999,0x9CCC,0xDCC9,0xCCCD,0x8C99,0xCDCD,
	0xDC9C,0xDDDD,0xDCCD,0xDDDD,0xDCCC,0xCCDD,0xCDDC,0xCCC9,
	0x9998,0xAACC,0x9999,0xADC9,0xC999,0xC9CC,0x9989,0x8CCC,
	0x989C,0xDDA9,0x9C9C,0xAAAC,0xCAC9,0xAAD9,0xDAAD,0xAACA,

	0xDAAA,0x99CC,0xDAAD,0x99CC,0xDDDD,0x99CC,0xDADC,0x99CC,
	0xDDCC,0x99CC,0x9CCD,0x99CC,0x97AA,0x99C9,0x997A,0x8999,
	0xC889,0xCCC9,0x9777,0x9CC9,0x7877,0x7C9C,0x7999,0x7899,
	0x8999,0x8998,0x8997,0x8998,0x7776,0x7989,0x7761,0x9877,
	0xCCCC,0xAAAC,0x88CC,0x87CC,0x8899,0xA998,0x9998,0x9878,
	0x9987,0x9999,0xAC88,0x89CA,0xA887,0x9CAA,0xA878,0x9A88,
	0xCCAA,0xA99C,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAA7A,0xAAAA,
	0xAAA7,0xAAAA,0xA7AA,0xAAAA,0xA8DC,0xAA7A,0x77C9,0xAAAA,

	0xA69A,0xAA99,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,
	0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,
	0x7AAD,0xA999,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,
	0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,
	0xA69A,0xCA99,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,
	0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,
	0x8AAD,0xAA99,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,
	0xAAAA,0xCAAA,0xAAAA,0xCAAA,0xAAAA,0x9CCA,0xAAAA,0xCDCA,

	0xCCCC,0x9CDD,0xCAAA,0x9CDD,0xDAAA,0x9CCD,0xCCCA,0xCCCC,
	0xC999,0x99CC,0xCCCC,0x9999,0x9CCD,0x9999,0x99CC,0xCCC9,
	0x8899,0xC888,0x78CC,0x9887,0x79CC,0x9877,0x799C,0x9887,
	0x788C,0x9887,0x7789,0x9987,0x7789,0x9987,0x8889,0xC988,
	0xCCCC,0x6CA9,0xAC9C,0xAAAA,0xADCC,0xAAAA,0xADC9,0xA88A,
	0xCC99,0xAA7C,0x9998,0x8AC9,0x9889,0xACC9,0x89CC,0x8988,
	0xA9C8,0xAADA,0xAAAA,0xCDA7,0x7AAA,0x99CA,0xAAAA,0x8998,
	0x7AAA,0xC897,0xA8AA,0xAC8A,0xA7AA,0xAA7A,0xA887,0x787A,

	0x9997,0x9999,0x9899,0x889C,0x9C88,0x9989,0xAAC9,0x9998,
	0x7A7D,0x9999,0xA78A,0x6899,0x966A,0x66AA,0x3176,0x5168,
	0x7661,0x9776,0x5654,0x5513,0x2115,0x2125,0x3213,0x7635,
	0x2215,0x6667,0x3654,0x5332,0x6663,0x1511,0x6223,0x5335,
	0xAA78,0x7877,0x5252,0x8856,0x1121,0x6636,0x5665,0x7767,
	0x6663,0x7677,0x6666,0x6535,0x5566,0x5515,0x2233,0x3533,
	0x7C88,0xAA77,0x88CD,0x6AA7,0x89DA,0xA67D,0xCC87,0x6789,
	0xC676,0x777A,0xA776,0xA66D,0x8666,0xAAAA,0x6677,0x6A86,

	0xAAAA,0xAAAA,0xAA6A,0x6AA7,0x67A7,0xA67A,0x8766,0x6767,
	0x777A,0x7777,0x7767,0x8667,0x6677,0x7766,0x6867,0x6636,
	0xAAAA,0xAAAA,0xAA6A,0x6AA7,0x67A7,0xA67A,0x8766,0x6767,
	0x7778,0x7777,0x7767,0x8666,0x6677,0x6766,0x6867,0x7666,
	0xAAAA,0xAAAA,0x8A6A,0x78A7,0x67A7,0x867A,0x8766,0x6767,
	0x7778,0x8777,0x7767,0x8667,0x6677,0x6776,0x6866,0x7667,
	0xAAAA,0x78AA,0x8A88,0x8787,0x7787,0x877A,0x8766,0x8767,
	0x7778,0xC777,0x7767,0x8766,0x6667,0x8666,0x6876,0x6666,

	0x988C,0x9CCC,0xC989,0x9CCC,0x9CC9,0x9999,0x9899,0x8999,
	0x988C,0x8999,0x9877,0x88C9,0xC776,0x89C9,0x7666,0x99C8,
	0x8889,0xC888,0x9988,0x9878,0xC988,0x9879,0xCC98,0x8789,
	0xDDD9,0x878C,0xAACC,0x789C,0xA88D,0x789C,0xA88C,0x79CA,
	0x9CDC,0xC889,0xDCCC,0x8CCC,0xAAAC,0x9DAA,0x7AA9,0x8878,
	0x8AA9,0x6767,0x8AA8,0x6668,0x78A8,0x6667,0x68A8,0x6666,
	0xA777,0x777A,0x688A,0x6666,0x77D8,0x6567,0x689C,0x6356,
	0x77AC,0x5667,0x67C8,0x5766,0x6A88,0x7777,0x7766,0x5667,

	0x7157,0x4255,0x5324,0x5311,0x6116,0x7741,0x7566,0x1153,
	0x5356,0x1111,0x2333,0x1212,0x1451,0x2141,0x4533,0x2252,
	0x3331,0x4135,0x5315,0x6611,0x6115,0x6531,0x6115,0x5211,
	0x3313,0x2112,0x2752,0x1111,0x1332,0x1221,0x1112,0x2221,
	0x1333,0x2322,0x2235,0x1212,0x3213,0x4353,0x5325,0x6533,
	0x3533,0x3332,0x2553,0x2222,0x2331,0x2212,0x2222,0xAA32,
	0x6666,0xAA66,0x6757,0x5665,0x6677,0x6666,0x6776,0x7666,
	0x5355,0x5666,0x3663,0x2334,0x3565,0x2214,0x3153,0x4534,

	0x66AA,0x8536,0x6757,0x7355,0x6667,0x7776,0x6676,0x6766,
	0x5676,0x6763,0x1532,0x5771,0x1311,0x1651,0x1114,0x6362,
	0x6666,0x8666,0x5676,0x6777,0x6667,0x7766,0x6676,0x6776,
	0x6666,0x5676,0x3777,0x5122,0x3663,0x5111,0x8537,0x5223,
	0x6666,0x7666,0x7766,0x6756,0x5377,0x1323,0x5356,0x2225,
	0x5145,0x1116,0x3367,0x1155,0x3355,0x3466,0x1114,0x1465,
	0x6666,0x6666,0x7556,0x5777,0x5112,0x1167,0x2221,0x3351,
	0x3111,0x3333,0x3565,0x3253,0x3555,0x5262,0x2513,0x3363,

	0x6766,0x99A7,0x3167,0x8A87,0x2366,0x8885,0x1753,0x6631,
	0x2333,0x6652,0x2222,0x6631,0x1222,0x3321,0x1122,0x1521,
	0x888C,0x8CD8,0x7777,0x8CA8,0x6677,0x8C87,0x6316,0x8AA7,
	0x6315,0x8886,0x3635,0xA763,0x3533,0x7553,0x2211,0x6312,
	0x6788,0x6666,0x7678,0x7375,0x6678,0x5573,0x4667,0x2133,
	0x1668,0x2214,0x2158,0x2111,0x4146,0x1111,0x5345,0x4211,
	0x7666,0x2356,0x3237,0x6651,0x1315,0x5551,0x2518,0x3351,
	0x3325,0x2153,0x7212,0x1156,0x5114,0x4213,0x2114,0x4212,

	0x4532,0x1132,0x5511,0x6621,0x6613,0x5531,0x6533,0x3234,
	0x5332,0x2224,0x2322,0x2222,0x3211,0x2225,0x3224,0x2126,
	0x2243,0x4122,0x2255,0x1422,0x2253,0x1412,0x4422,0x1242,
	0x5422,0x4243,0x2432,0x4321,0x2222,0x4422,0x4222,0x3422,
	0x1112,0x1122,0x1122,0x1211,0x4122,0x1211,0x5122,0x2151,
	0x3324,0x1133,0x1224,0x5111,0x2442,0x5311,0x2413,0x2111,
	0x2112,0x2112,0x1111,0x1112,0x2221,0x1133,0x1422,0x1244,
	0x3422,0x1114,0x3431,0x1233,0x2221,0x3111,0x2332,0x1144,

	0x2212,0x1112,0x4111,0x4122,0x1543,0x3412,0x1111,0x3411,
	0x1122,0x3111,0x1112,0x1332,0x1123,0x1222,0x2121,0x4421,
	0x2322,0x2533,0x2222,0x2341,0x2514,0x4243,0x2113,0x4113,
	0x2243,0x4322,0x4222,0x2222,0x4222,0x2442,0x2321,0x3432,
	0x3222,0x3243,0x4242,0x2224,0x4311,0x2221,0x3113,0x2211,
	0x2222,0x3323,0x4233,0x2224,0x4322,0x2224,0x2223,0x1222,
	0x5222,0x2222,0x2211,0x2422,0x1211,0x3421,0x1111,0x3431,
	0x2211,0x1211,0x1111,0x1112,0x1141,0x2112,0x5151,0x2221,

	0x2413,0x5513,0x2244,0x1132,0x2144,0x1122,0x2233,0x4222,
	0x1221,0x1221,0x1211,0x1111,0x3322,0x4311,0x4414,0x1112,
	0x3452,0x2514,0x3411,0x2243,0x3421,0x4243,0x3332,0x4221,
	0x1222,0x2211,0x2241,0x2241,0x1215,0x1434,0x1111,0x1334,
	0x2212,0x1522,0x4332,0x5432,0x1442,0x1122,0x2443,0x1122,
	0x3323,0x2225,0x4122,0x4223,0x4325,0x1142,0x1321,0x1341,
	0x1221,0x1222,0x2525,0x3312,0x2111,0x4414,0x2211,0x1134,
	0x4332,0x1432,0x2442,0x1322,0x2143,0x1222,0x1131,0x1222,

	0x1122,0x2211,0x1111,0x5151,0x3222,0x1111,0x2222,0x1111,
	0x4525,0x1443,0x4111,0x2133,0x4211,0x2133,0x3314,0x2123,
	0x3333,0x2211,0x1112,0x3151,0x1124,0x2153,0x1124,0x3221,
	0x1324,0x5255,0x3222,0x1111,0x2221,0x2111,0x2222,0x3242,
	0x1434,0x2211,0x3334,0x1212,0x1122,0x2331,0x4423,0x2111,
	0x1434,0x1225,0x4334,0x3222,0x4334,0x4242,0x2133,0x4342,
	0x1111,0x4331,0x3211,0x2213,0x2211,0x2212,0x2121,0x2144,
	0x3122,0x2115,0x3243,0x2554,0x2224,0x1111,0x2224,0x1111,

	0x2222,0x2243,0x2242,0x3322,0x4242,0x2224,0x3223,0x2334,
	0x2212,0x2212,0x1225,0x1133,0x1421,0x2244,0x3422,0x2214,
	0x2322,0x1233,0x2442,0x1222,0x2443,0x1122,0x2222,0x1212,
	0x1111,0x2222,0x5111,0x3451,0x1132,0x3411,0x1122,0x3121,
	0x2224,0x4422,0x4212,0x4424,0x5412,0x2424,0x2212,0x3322,
	0x1222,0x3222,0x2514,0x4211,0x1243,0x4311,0x2243,0x3342,
	0x1332,0x2243,0x1222,0x2111,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x2222,0x3343,0x2244,0x2222,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x2223,0x2422,0x3323,0x2432,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x3433,0x2231,0x1222,0x3232,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x4222,0x3332,0x4323,0x2222,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x2222,0x2122,0x1222,0x4211,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xDCDD,0x99DE,0x8DDD,0xEEDC,0xDCEB,0xBBDD,0x9DEE,0xECDC,
	0xCDDE,0xEAC9,0xDDED,0xBDD9,0xCDDD,0xBCD9,0xCDDD,0xDDDC,
	0xEBBD,0xCDDB,0xABDE,0xEDBE,0xA6AB,0xBEAA,0x66AB,0xAEAB,
	0x6ABD,0xABDA,0xA6DB,0xA6A9,0xBBDB,0xCCCC,0xDBDA,0xBAEA,
	0xCDDD,0xCDDC,0x8CDD,0x9CDD,0x8CDD,0xDDDD,0x9CDD,0xDDDD,
	0xC8CD,0xBDDD,0xD8CD,0xEBDD,0xD9CD,0xEBDD,0xDD89,0xEDDD,

	0x9BDD,0xEEE8,0xBBDD,0xDEEE,0xBBDB,0xD989,0xDDEB,0xD999,
	0xBBBB,0xCC99,0xDCBB,0xCC98,0xDEEE,0xCCC8,0xCDDD,0xCCC9,
	0xDD89,0xBDDD,0xDD98,0xDDDD,0xDDC8,0xDDDD,0xDDDC,0xDDDD,
	0xDDDC,0xDDDD,0xDDDC,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,
	0x99DE,0x9C99,0x9C9C,0x9999,0x99CD,0x9999,0x9CCC,0xCC98,
	0x9CCC,0xCC98,0xCCCC,0xCC89,0xCCCD,0x9C89,0xDCCD,0xCC99,
	0xCDDD,0xC999,0xC9CD,0xDC99,0xC9CD,0xDC98,0xC9CD,0xCC98,
	0x99CD,0xCC98,0x99DD,0x9C98,0x89DD,0x9998,0x89CD,0xC999,

	0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDADD,
	0xDDDD,0xDBDD,0xADDA,0xAADD,0xBADD,0xDDAD,0xAAAA,0xADDA,
	0x9CCC,0xC999,0xC9CD,0xCC99,0xC9CD,0xCC98,0x99CC,0xCC98,
	0x99CC,0x9C98,0x999D,0x9C98,0x899D,0x9998,0x899D,0xC999,
	0xAAAA,0xDAAA,0xAADA,0xDDAA,0xAAAA,0xDAAA,0xAAAA,0xDDAA,
	0xAAAA,0xCCDA,0xAAAA,0xCCDD,0xCAAA,0x999C,0xCCAA,0xA99C,
	0x999D,0xC999,0x9CCD,0x9C99,0x9CDD,0xCC98,0x9DDD,0x9989,
	0xCDCC,0xC9C9,0x9CCC,0x998C,0xDCCC,0xADAA,0xA69A,0xAA99,

	0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAA7A,0xAAAA,0xAAA7,0xAAAA,
	0xA7AA,0xAAAA,0xA8DC,0xAA7A,0x77C9,0xAAAA,0x7C88,0xAA77,
	0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,
	0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,
	0x88CD,0x6AA7,0x89DA,0xA67D,0xCC87,0x6789,0xC676,0x777A,
	0xA776,0xA66D,0x8666,0xAAAA,0x6677,0x6A86,0x6666,0xAA66,
	0xAA6A,0x6AA7,0x67A7,0xA67A,0x8766,0x6767,0x777A,0x7777,
	0x7767,0x8667,0x6677,0x7766,0x6867,0x6636,0x66AA,0x8536,

	0x6757,0x5665,0x6677,0x6666,0x6776,0x7666,0x5355,0x5666,
	0x3663,0x2334,0x3565,0x2214,0x3153,0x4534,0x2112,0x2112,
	0x6757,0x7355,0x6667,0x7776,0x6676,0x6766,0x5676,0x6763,
	0x1532,0x5771,0x1311,0x1651,0x1114,0x6362,0x2212,0x1112,
	0x1111,0x1112,0x2221,0x1133,0x1422,0x1244,0x3422,0x1114,
	0x3431,0x1233,0x2221,0x3111,0x2332,0x1144,0x3452,0x2514,
	0x4111,0x4122,0x1543,0x3412,0x1111,0x3411,0x1122,0x3111,
	0x1112,0x1332,0x1123,0x1222,0x2121,0x4421,0x2212,0x1522,

	0x3411,0x2243,0x3421,0x4243,0x3332,0x4221,0x1222,0x2211,
	0x2241,0x2241,0x1215,0x1434,0x1111,0x1334,0x1111,0x4331,
	0x4332,0x5432,0x1442,0x1122,0x2443,0x1122,0x3323,0x2225,
	0x4122,0x4223,0x4325,0x1142,0x1321,0x1341,0x2222,0x2243,
	0x3211,0x2213,0x2211,0x2212,0x2121,0x2144,0x3122,0x2115,
	0x3243,0x2554,0x2224,0x1111,0x2224,0x1111,0x2223,0x2422,
	0x2242,0x3322,0x4242,0x2224,0x3223,0x2334,0x2212,0x2212,
	0x1225,0x1133,0x1421,0x2244,0x3422,0x2214,0x3433,0x2231,

	0x3323,0x2432,0x3323,0x2432,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x1222,0x3232,0x1222,0x3232,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
};

const unsigned short bg2cmpMap[2048] __attribute__((aligned(4)))=
{
	0x0001,0x0002,0x0003,0x0004,0x0005,0x0006,0x0007,0x0008,
	0x0009,0x000A,0x000B,0x000C,0x0001,0x0002,0x0003,0x0004,
	0x0005,0x0006,0x0007,0x0008,0x0009,0x000A,0x000B,0x000C,
	0x0001,0x0002,0x0003,0x0004,0x0005,0x0006,0x0007,0x0008,
	0x000D,0x000E,0x000F,0x0010,0x0011,0x0012,0x0013,0x0014,
	0x0015,0x0016,0x0017,0x0018,0x000D,0x000E,0x000F,0x0010,
	0x0011,0x0012,0x0013,0x0014,0x0015,0x0016,0x0017,0x0018,
	0x000D,0x000E,0x000F,0x0010,0x0011,0x0012,0x0013,0x0014,

	0x0019,0x001A,0x001B,0x001C,0x001D,0x001E,0x001F,0x0020,
	0x0021,0x0022,0x0023,0x0024,0x0019,0x001A,0x001B,0x001C,
	0x001D,0x001E,0x001F,0x0020,0x0021,0x0022,0x0023,0x0024,
	0x0019,0x001A,0x001B,0x001C,0x001D,0x001E,0x001F,0x0020,
	0x0025,0x0026,0x0027,0x0028,0x0029,0x002A,0x002B,0x002C,
	0x002D,0x002E,0x002F,0x0030,0x0025,0x0026,0x0027,0x0028,
	0x0029,0x002A,0x002B,0x002C,0x002D,0x002E,0x002F,0x0030,
	0x0025,0x0026,0x0027,0x0028,0x0029,0x002A,0x002B,0x002C,

	0x0031,0x0032,0x0033,0x0034,0x0035,0x0036,0x0037,0x0038,
	0x0039,0x003A,0x003B,0x003C,0x0031,0x0032,0x0033,0x0034,
	0x0035,0x0036,0x0037,0x0038,0x0039,0x003A,0x003B,0x003C,
	0x0031,0x0032,0x0033,0x0034,0x0035,0x0036,0x0037,0x0038,
	0x003D,0x003E,0x003F,0x0040,0x0041,0x0042,0x0043,0x0044,
	0x0045,0x0046,0x0047,0x0048,0x003D,0x003E,0x003F,0x0040,
	0x0041,0x0042,0x0043,0x0044,0x0045,0x0046,0x0047,0x0048,
	0x003D,0x003E,0x003F,0x0040,0x0041,0x0042,0x0043,0x0044,

	0x0049,0x004A,0x004B,0x004C,0x004D,0x004E,0x004F,0x0050,
	0x0051,0x0052,0x0053,0x0054,0x0049,0x004A,0x004B,0x004C,
	0x004D,0x004E,0x004F,0x0050,0x0051,0x0052,0x0053,0x0054,
	0x0049,0x004A,0x004B,0x004C,0x004D,0x004E,0x004F,0x0050,
	0x0055,0x0056,0x0057,0x0058,0x0059,0x005A,0x005B,0x005C,
	0x005D,0x005E,0x005F,0x0060,0x0055,0x0056,0x0057,0x0058,
	0x0059,0x005A,0x005B,0x005C,0x005D,0x005E,0x005F,0x0060,
	0x0055,0x0056,0x0057,0x0058,0x0059,0x005A,0x005B,0x005C,

	0x0061,0x0062,0x0063,0x0064,0x0065,0x0066,0x0067,0x0068,
	0x0069,0x006A,0x006B,0x006C,0x0061,0x0062,0x0063,0x0064,
	0x0065,0x0066,0x0067,0x0068,0x0069,0x006A,0x006B,0x006C,
	0x0061,0x0062,0x0063,0x0064,0x0065,0x0066,0x0067,0x0068,
	0x006D,0x006E,0x006F,0x0070,0x0071,0x0072,0x006D,0x006E,
	0x006F,0x0070,0x0071,0x0072,0x006D,0x006E,0x006F,0x0070,
	0x0071,0x0072,0x006D,0x006E,0x006F,0x0070,0x0071,0x0072,
	0x006D,0x006E,0x006F,0x0070,0x0071,0x0072,0x006D,0x006E,

	0x0073,0x0074,0x0075,0x0076,0x0077,0x0078,0x0073,0x0074,
	0x0075,0x0076,0x0077,0x0078,0x0073,0x0074,0x0075,0x0076,
	0x0077,0x0078,0x0073,0x0074,0x0075,0x0076,0x0077,0x0078,
	0x0073,0x0074,0x0075,0x0076,0x0077,0x0078,0x0073,0x0074,
	0x0079,0x007A,0x007B,0x007C,0x007D,0x007E,0x0079,0x007A,
	0x007B,0x007C,0x007D,0x007E,0x0079,0x007A,0x007B,0x007C,
	0x007D,0x007E,0x0079,0x007A,0x007B,0x007C,0x007D,0x007E,
	0x0079,0x007A,0x007B,0x007C,0x007D,0x007E,0x0079,0x007A,

	0x007F,0x0080,0x0081,0x0082,0x0083,0x0084,0x007F,0x0080,
	0x0081,0x0082,0x0083,0x0084,0x007F,0x0080,0x0081,0x0082,
	0x0083,0x0084,0x007F,0x0080,0x0081,0x0082,0x0083,0x0084,
	0x007F,0x0080,0x0081,0x0082,0x0083,0x0084,0x007F,0x0080,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0009,0x000A,0x000B,0x000C,0x0001,0x0002,0x0003,0x0004,
	0x0005,0x0006,0x0007,0x0008,0x0009,0x000A,0x000B,0x000C,
	0x0001,0x0002,0x0003,0x0004,0x0005,0x0006,0x0007,0x0008,
	0x0009,0x000A,0x000B,0x000C,0x0001,0x0002,0x0085,0x0086,
	0x0015,0x0016,0x0017,0x0018,0x000D,0x000E,0x000F,0x0010,
	0x0011,0x0012,0x0013,0x0014,0x0015,0x0016,0x0017,0x0018,
	0x000D,0x000E,0x000F,0x0010,0x0011,0x0012,0x0013,0x0014,
	0x0015,0x0016,0x0017,0x0018,0x000D,0x000E,0x0087,0x0088,

	0x0021,0x0022,0x0023,0x0024,0x0019,0x001A,0x001B,0x001C,
	0x001D,0x001E,0x001F,0x0020,0x0021,0x0022,0x0023,0x0024,
	0x0019,0x001A,0x001B,0x001C,0x001D,0x001E,0x001F,0x0020,
	0x0021,0x0022,0x0023,0x0024,0x0019,0x001A,0x0089,0x008A,
	0x002D,0x002E,0x002F,0x0030,0x0025,0x0026,0x0027,0x0028,
	0x0029,0x002A,0x002B,0x002C,0x002D,0x002E,0x002F,0x0030,
	0x0025,0x0026,0x0027,0x0028,0x0029,0x002A,0x002B,0x002C,
	0x002D,0x002E,0x002F,0x0030,0x0025,0x0026,0x0027,0x008B,

	0x0039,0x003A,0x003B,0x003C,0x0031,0x0032,0x0033,0x0034,
	0x0035,0x0036,0x0037,0x0038,0x0039,0x003A,0x003B,0x003C,
	0x0031,0x0032,0x0033,0x0034,0x0035,0x0036,0x0037,0x0038,
	0x0039,0x003A,0x003B,0x003C,0x0031,0x0032,0x008C,0x008D,
	0x0045,0x0046,0x0047,0x0048,0x003D,0x003E,0x003F,0x0040,
	0x0041,0x0042,0x0043,0x0044,0x0045,0x0046,0x0047,0x0048,
	0x003D,0x003E,0x003F,0x0040,0x0041,0x0042,0x0043,0x0044,
	0x0045,0x0046,0x0047,0x0048,0x003D,0x003E,0x008E,0x008F,

	0x0051,0x0052,0x0053,0x0054,0x0049,0x004A,0x004B,0x004C,
	0x004D,0x004E,0x004F,0x0050,0x0051,0x0052,0x0053,0x0054,
	0x0049,0x004A,0x004B,0x004C,0x004D,0x004E,0x004F,0x0050,
	0x0051,0x0052,0x0053,0x0054,0x0049,0x004A,0x0090,0x0091,
	0x005D,0x005E,0x005F,0x0060,0x0055,0x0056,0x0057,0x0058,
	0x0059,0x005A,0x005B,0x005C,0x005D,0x005E,0x005F,0x0060,
	0x0055,0x0056,0x0057,0x0058,0x0059,0x005A,0x005B,0x005C,
	0x005D,0x005E,0x005F,0x0060,0x0055,0x0056,0x0092,0x0093,

	0x0069,0x006A,0x006B,0x006C,0x0061,0x0062,0x0063,0x0064,
	0x0065,0x0066,0x0067,0x0068,0x0069,0x006A,0x006B,0x006C,
	0x0061,0x0062,0x0063,0x0064,0x0065,0x0066,0x0067,0x0068,
	0x0069,0x006A,0x006B,0x006C,0x0061,0x0062,0x0094,0x0095,
	0x006F,0x0070,0x0071,0x0072,0x006D,0x006E,0x006F,0x0070,
	0x0071,0x0072,0x006D,0x006E,0x006F,0x0070,0x0071,0x0072,
	0x006D,0x006E,0x006F,0x0070,0x0071,0x0072,0x006D,0x006E,
	0x006F,0x0070,0x0071,0x0072,0x006D,0x006E,0x0096,0x0097,

	0x0075,0x0076,0x0077,0x0078,0x0073,0x0074,0x0075,0x0076,
	0x0077,0x0078,0x0073,0x0074,0x0075,0x0076,0x0077,0x0078,
	0x0073,0x0074,0x0075,0x0076,0x0077,0x0078,0x0073,0x0074,
	0x0075,0x0076,0x0077,0x0078,0x0073,0x0074,0x0098,0x0099,
	0x007B,0x007C,0x007D,0x007E,0x0079,0x007A,0x007B,0x007C,
	0x007D,0x007E,0x0079,0x007A,0x007B,0x007C,0x007D,0x007E,
	0x0079,0x007A,0x007B,0x007C,0x007D,0x007E,0x0079,0x007A,
	0x007B,0x007C,0x007D,0x007E,0x0079,0x007A,0x009A,0x009B,

	0x0081,0x0082,0x0083,0x0084,0x007F,0x0080,0x0081,0x0082,
	0x0083,0x0084,0x007F,0x0080,0x0081,0x0082,0x0083,0x0084,
	0x007F,0x0080,0x0081,0x0082,0x0083,0x0084,0x007F,0x0080,
	0x0081,0x0082,0x0083,0x0084,0x007F,0x0080,0x009C,0x009D,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
};

const unsigned short bg2cmpPal[256] __attribute__((aligned(4)))=
{
	0x7C1F,0x325B,0x2E1A,0x29F7,0x2E77,0x29F3,0x29AE,0x1D4C,
	0x14EA,0x0888,0x0CE6,0x04C2,0x0465,0x0063,0x0040,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
};

//}}BLOCK(bg2cmp)