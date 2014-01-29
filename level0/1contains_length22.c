#include <stdint.h>
unsigned int contains22(uint64_t * wp) {
	switch(wp[0] | (uint64_t)(0x2020202020202020)){
	case 0x6369676F6C6F6F7A:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6F6561686372616F:
			switch(wp[2] | (uint64_t)(0x0000202020202020)){
			case 0x0000747369676F6C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x63696D6F74616E61:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6C6F69737968706F:
			switch(wp[2] | (uint64_t)(0x0000202020202020)){
			case 0x00006C616369676F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6369726F74736968:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x696C61626261636F:
			switch(wp[2] | (uint64_t)(0x0000202020202020)){
			case 0x00006C6163697473:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636E656F696C6F70:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x796D6F6C61687065:
			switch(wp[2] | (uint64_t)(0x0000202020202020)){
			case 0x0000736974696C65:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636F64656C6F6863:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E65646F75646F68:
			switch(wp[2] | (uint64_t)(0x0000202020202020)){
			case 0x0000796D6F74736F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636F6E65646F7564:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x74737963656C6F68:
			switch(wp[2] | (uint64_t)(0x0000202020202020)){
			case 0x0000796D6F74736F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636F726574657275:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x7473616E61747379:
			switch(wp[2] | (uint64_t)(0x0000202020202020)){
			case 0x00007369736F6D6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656E706F72647968:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x63697265706F6D75:
			switch(wp[2] | (uint64_t)(0x0000202020202020)){
			case 0x00006D7569647261:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656F727463656C65:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6F6C61687065636E:
			switch(wp[2] | (uint64_t)(0x0000202020202020)){
			case 0x0000796870617267:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6570736F746F6870:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x696C65686F727463:
			switch(wp[2] | (uint64_t)(0x0000202020202020)){
			case 0x000068706172676F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x657265746E756F63:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x696E756D6D6F6378:
			switch(wp[2] | (uint64_t)(0x0000202020202020)){
			case 0x00006E6F69746163:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65727065726E6F6E:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6F697461746E6573:
			switch(wp[2] | (uint64_t)(0x0000202020202020)){
			case 0x00006D73696C616E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65766F6D75656E70:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6F6C75636972746E:
			switch(wp[2] | (uint64_t)(0x0000202020202020)){
			case 0x0000796870617267:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x676E6168706D796C:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x68746F646E656F69:
			switch(wp[2] | (uint64_t)(0x0000202020202020)){
			case 0x0000616D6F696C65:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68706F6572657473:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6F7263696D6F746F:
			switch(wp[2] | (uint64_t)(0x0000202020202020)){
			case 0x0000796870617267:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6874656D61786568:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x746574656E656C79:
			switch(wp[2] | (uint64_t)(0x0000202020202020)){
			case 0x0000656E696D6172:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x69676F6C6F656874:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x68706174656D6F63:
			switch(wp[2] | (uint64_t)(0x0000202020202020)){
			case 0x00006C6163697379:return 1;
			default:return 0;
			}
		case 0x6E6F727473616F63:
			switch(wp[2] | (uint64_t)(0x0000202020202020)){
			case 0x00006C6163696D6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x69746F72656C6373:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6F69726F68636F63:
			switch(wp[2] | (uint64_t)(0x0000202020202020)){
			case 0x0000736974696469:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C7968746870616E:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6C7573656E696D61:
			switch(wp[2] | (uint64_t)(0x0000202020202020)){
			case 0x000063696E6F6870:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D75656E706F7970:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x7963656C6F68636F:
			switch(wp[2] | (uint64_t)(0x0000202020202020)){
			case 0x0000736974697473:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6F637265707968:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6F69746E65696373:
			switch(wp[2] | (uint64_t)(0x0000202020202020)){
			case 0x00007373656E7375:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F636F726170616C:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x65747379686F706C:
			switch(wp[2] | (uint64_t)(0x0000202020202020)){
			case 0x0000796D6F746F72:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6D6F6475657370:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x656C79746F636F6E:
			switch(wp[2] | (uint64_t)(0x0000202020202020)){
			case 0x000073756F6E6F64:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F72616870656C62:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x74636E756A6E6F63:
			switch(wp[2] | (uint64_t)(0x0000202020202020)){
			case 0x0000736974697669:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F7268746E616564:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x696870726F6D6F70:
			switch(wp[2] | (uint64_t)(0x0000202020202020)){
			case 0x00006E6F6974617A:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F736F6C696870:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x747369686F636968:
			switch(wp[2] | (uint64_t)(0x0000202020202020)){
			case 0x00006C616369726F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7261706F72796874:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x64696F7279687461:
			switch(wp[2] | (uint64_t)(0x0000202020202020)){
			case 0x0000796D6F746365:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7268636F746F6870:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x68706172676F6E6F:
			switch(wp[2] | (uint64_t)(0x0000202020202020)){
			case 0x0000796C6C616369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x72706572696E6D6F:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x697461746E657365:
			switch(wp[2] | (uint64_t)(0x0000202020202020)){
			case 0x00007373656E6576:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7274696E61786568:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x796E65687069646F:
			switch(wp[2] | (uint64_t)(0x0000202020202020)){
			case 0x0000656E696D616C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x737963656C6F6863:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E65646F75646F74:
			switch(wp[2] | (uint64_t)(0x0000202020202020)){
			case 0x0000796D6F74736F:return 1;
			default:return 0;
			}
		case 0x726F7265746E6574:
			switch(wp[2] | (uint64_t)(0x0000202020202020)){
			case 0x0000796870616872:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74616572636E6170:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x72747361676F6369:
			switch(wp[2] | (uint64_t)(0x0000202020202020)){
			case 0x0000796D6F74736F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746E65706F757161:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6F63656E696D6D61:
			switch(wp[2] | (uint64_t)(0x0000202020202020)){
			case 0x00006369746C6162:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746F727463656C65:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6D72656874656C65:
			switch(wp[2] | (uint64_t)(0x0000202020202020)){
			case 0x0000726574656D6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x79636F7972636164:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E697279736F7473:
			switch(wp[2] | (uint64_t)(0x0000202020202020)){
			case 0x0000796D6F746F67:return 1;
			default:return 0;
			}
		case 0x6E6E656C626F7473:
			switch(wp[2] | (uint64_t)(0x0000202020202020)){
			case 0x000061656872726F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x79686F6D75656E70:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x63697265706F7264:
			switch(wp[2] | (uint64_t)(0x0000202020202020)){
			case 0x00006D7569647261:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7972636F7263696D:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x74737972636F7470:
			switch(wp[2] | (uint64_t)(0x0000202020202020)){
			case 0x0000656E696C6C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	default:return 0;
	}
}
