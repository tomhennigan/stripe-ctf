#include <stdint.h>
unsigned int contains23(uint64_t * wp) {
	switch(wp[0]){
	case 0x616C6F6475657370:
		switch(wp[1]){
		case 0x617262696C6C656D:
			switch(wp[2]){
			case 0x006574616968636E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6472616369726570:
		switch(wp[1]){
		case 0x73616964656D6F69:
			switch(wp[2]){
			case 0x00736974696E6974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65646C616D726F66:
		switch(wp[1]){
		case 0x706C757365647968:
			switch(wp[2]){
			case 0x0063696C79786F68:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6669746E65696373:
		switch(wp[1]){
		case 0x72676F65676F6369:
			switch(wp[2]){
			case 0x006C616369687061:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x676F6C6F68746170:
		switch(wp[1]){
		case 0x6F747369686F6369:
			switch(wp[2]){
			case 0x006C616369676F6C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D79646964697065:
		switch(wp[1]){
		case 0x6E6572656665646F:
			switch(wp[2]){
			case 0x00796D6F74636574:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6163617263616D:
		switch(wp[1]){
		case 0x6E7968726F726874:
			switch(wp[2]){
			case 0x0073697361696863:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E656F7274736167:
		switch(wp[1]){
		case 0x73616E616F726574:
			switch(wp[2]){
			case 0x007369736F6D6F74:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F706F7268746E61:
		switch(wp[1]){
		case 0x6F6C6F6870726F6D:
			switch(wp[2]){
			case 0x00796C6C61636967:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F72616870656C62:
		switch(wp[1]){
		case 0x6574636E69687073:
			switch(wp[2]){
			case 0x00796D6F74636572:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F736F6C696870:
		switch(wp[1]){
		case 0x6F6568746F636968:
			switch(wp[2]){
			case 0x006C616369676F6C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x70736F74616D6568:
		switch(wp[1]){
		case 0x6F68706F72746365:
			switch(wp[2]){
			case 0x00726574656D6F74:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x736275736E617274:
		switch(wp[1]){
		case 0x69746169746E6174:
			switch(wp[2]){
			case 0x007473696C616E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74616572636E6170:
		switch(wp[1]){
		case 0x65646F75646F6369:
			switch(wp[2]){
			case 0x00796D6F74736F6E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x75736C6F6D796874:
		switch(wp[1]){
		case 0x6870656E6F68706C:
			switch(wp[2]){
			case 0x006E69656C616874:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x75736C6F6E656870:
		switch(wp[1]){
		case 0x6870656E6F68706C:
			switch(wp[2]){
			case 0x006E69656C616874:return 1;
			default:return 0;
			}
		default:return 0;
		}
	default:return 0;
	}
}
