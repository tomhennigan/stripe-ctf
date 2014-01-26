#include <stdint.h>
unsigned int contains24(uint64_t * wp) {
	switch(wp[0]){
	case 0x646F696172746574:
		switch(wp[1]){
		case 0x706C6F6E6568706F:
			switch(wp[2]){
			case 0x6E69656C61687468:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65646C616D726F66:
		switch(wp[1]){
		case 0x706C757365647968:
			switch(wp[2]){
			case 0x6574616C79786F68:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6669746E65696373:
		switch(wp[1]){
		case 0x6F6C6968706F6369:
			switch(wp[2]){
			case 0x6C61636968706F73:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x676F6C6F68746170:
		switch(wp[1]){
		case 0x68637973706F6369:
			switch(wp[2]){
			case 0x6C616369676F6C6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7261706F72796874:
		switch(wp[1]){
		case 0x64696F7279687461:
			switch(wp[2]){
			case 0x657A696D6F746365:return 1;
			default:return 0;
			}
		default:return 0;
		}
	default:return 0;
	}
}
