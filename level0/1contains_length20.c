#include <stdint.h>
unsigned int contains20(uint64_t * wp) {
	switch(wp[0] | (uint64_t)(0x2020202020202020)){
	case 0x616C6F73736F6C67:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E7972616C6F6962:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006C616567:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x616C75636962726F:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x7470696C6C656F74:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006C616369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x616C756369746572:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x73656C616F636F74:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x00000000746E6563:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x616F68636E6F7262:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6C6C696772657073:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000007369736F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x61706F6475657370:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x616D7968636E6572:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x0000000073756F74:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6172626973707968:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6168706563796863:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006D73696C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6172627974616C70:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6168706563796863:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x0000000073756F6C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6172746E6F636E75:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x656C626174636964:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000007373656E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6172746F656D6F68:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x61746E616C70736E:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006E6F6974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6174736172746C75:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x617A69647261646E:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006E6F6974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6174736F6E617275:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6872726F6C796870:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x0000000079687061:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6179786F72647968:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x697571617268746E:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x00000000656E6F6E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6361726168636E75:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6369747369726574:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x00000000796C6C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x63696D6F74616E61:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x677275726968636F:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006C616369:return 1;
			default:return 0;
			}
		case 0x6C6F69737968706F:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006369676F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x63696E616863656D:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x63737570726F636F:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x0000000072616C75:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636974656E6F6870:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x74616D6D6172676F:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006C616369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636F6E61766C6167:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x617A697265747561:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006E6F6974:return 1;
			default:return 0;
			}
		case 0x6974636172746E6F:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000007974696C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636F727463656C65:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6172676F69647261:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x0000000063696870:return 1;
			default:return 0;
			}
		case 0x6172676F6E6F7268:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x0000000063696870:return 1;
			default:return 0;
			}
		case 0x617A697265747561:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006E6F6974:return 1;
			default:return 0;
			}
		case 0x6974636172746E6F:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000007974696C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6461736964657270:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6F656761746E6176:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x00000000796C7375:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x647265746E756F63:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x617274736E6F6D65:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006E6F6974:return 1;
			default:return 0;
			}
		case 0x656761676E657369:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x00000000746E656D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65686F6475657370:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x646F726870616D72:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x0000000063697469:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656D6C7974656361:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x627261636C796874:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006C6F6E69:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656D6F65616C6170:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x676F6C6F726F6574:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006C616369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656E6F7469726570:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x726163697265706F:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006C616964:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656F676E696E656D:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6F6C61687065636E:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x00000000656C6563:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656F68636E6F7262:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x736F676168706F73:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x0000000079706F63:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656F726F656C6574:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x72676F6E6567746E:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x0000000079687061:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656F727463656C65:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6F6C61687065636E:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006D617267:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6570736F746F6870:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x706F63736F727463:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006C616369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x657265746E756F63:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x616C7574736F7078:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006E6F6974:return 1;
			default:return 0;
			}
		case 0x6873696C62617473:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x00000000746E656D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6572706D6F636E69:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x656C6269736E6568:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000007373656E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x657273696D657270:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x61746E6573657270:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006E6F6974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6574636172616863:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6C61636974736972:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000007373656E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6669647265746E69:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6169746E65726566:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006E6F6974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6669746E65696373:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x67696C65726F6369:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x0000000073756F69:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x666E6F6369746E61:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6F69746172656465:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000007473696E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x666F7270696D6573:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6C616E6F69737365:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x0000000064657A69:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x67657461636E7973:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x636974616D65726F:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x00000000796C6C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x676E697478656E75:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x656C626168736975:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000007373656E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x676F6361726F6874:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6863736F72747361:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x0000000073697369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68636F726170616C:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6F74737963656C6F:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x00000000796D6F74:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68636F7265746568:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x617A6974616D6F72:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006E6F6974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68706F6475657370:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6F7268746E616E65:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x00000000656E696C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68706F6572657473:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6D6D6172676F746F:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x0000000079727465:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68746E6169746E61:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x70726F6D6F706F72:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006D736968:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68746E616F656874:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x70726F6D6F706F72:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006D736968:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x69636F6E6F726863:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x72676F74616D656E:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x0000000079687061:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6964726574657270:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x636974616D6F6C70:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x00000000796C6C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x69676F6C6F656874:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x726F747369686F63:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006C616369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x696F686372616E61:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x617564697669646E:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000007473696C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6972637369646E75:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x676E6974616E696D:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000007373656E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x697463656A627573:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x696C616564696F76:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x0000000063697473:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x69746F6769646E69:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x68706C757369646E:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x0000000063696E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C61687065636E65:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6F676E696E656D6F:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x00000000656C6563:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6168746870616E:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x68706C7573656E65:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x0000000063696E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C61706F74796870:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x676F6C6F746E6F65:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006C616369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C656C6C61726170:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x74616D6D6172676F:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006C616369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C65746F746F6870:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6369687061726765:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x00000000796C6C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C68707265707573:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x616369747369676F:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006E6F6974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6C617473797263:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x636968706172676F:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x00000000796C6C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6F646172746C75:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x687065636F686369:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x0000000063696C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6F646973707968:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x687065636F686369:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x0000000063696C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6F646F6874726F:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x687065636F686369:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x0000000063696C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6F647265707968:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x687065636F686369:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x0000000063696C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6F647974616C70:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x687065636F686369:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x0000000063696C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C796E6568706964:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x72616F726F6C6863:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x00000000656E6973:return 1;
			default:return 0;
			}
		case 0x74656D6F6E697571:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x00000000656E6168:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6C61687468706F:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6D6974736169646F:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x0000000072657465:return 1;
			default:return 0;
			}
		case 0x6D6F6D616E79646F:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x0000000072657465:return 1;
			default:return 0;
			}
		case 0x6D6F6D726568746F:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x0000000072657465:return 1;
			default:return 0;
			}
		case 0x726F6E6E656C626F:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x0000000061656872:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6F63696D656863:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x676F6C6172656E69:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006C616369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6F637265746E69:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x69626163696E756D:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000007974696C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6F6E65646E6F6E:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x616E6F6974616E69:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006D73696C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6F6E6564736964:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x616E6F6974616E69:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x00000000657A696C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6F72626F6E6F6D:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x696E61746563616F:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006564696C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6F727463656C65:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6772756C6C617465:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006C616369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6F727463657073:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x706F63736F726369:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006C616369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D73796874656C70:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x636968706172676F:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x00000000796C6C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D747261706D6F63:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x617A696C61746E65:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006E6F6974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D75656E706F7970:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E6F74697265706F:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x0000000073697469:return 1;
			default:return 0;
			}
		case 0x726163697265706F:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006D756964:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D79646964697065:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E6572656665646F:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006C616974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E616F65616C6170:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x72676F706F726874:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x0000000079687061:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E65646F656C6170:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6369676F6C6F7264:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x00000000796C6C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6567746E656F72:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x636968706172676F:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x00000000796C6C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E65687061726170:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x616964656E656C79:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x00000000656E696D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6568706174656D:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x616964656E656C79:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x00000000656E696D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E69636F7263696D:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6172676F74616D65:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x0000000063696870:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E69747369646E69:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6962616873697567:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000007974696C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F63697461706568:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x736F6E65646F7564:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x00000000796D6F74:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F636F6475657370:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6172656D6F6C676E:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006E6F6974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F636F72656C6373:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x766974636E756A6E:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x0000000073697469:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F636F746172656B:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x766974636E756A6E:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x0000000073697469:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6379786F736564:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6574736F63697472:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x00000000656E6F72:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F657261636C6163:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x63616C6C69677261:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x0000000073756F65:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F68636F7275656E:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E697465726F6972:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x0000000073697469:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F68637265707968:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6C6F72657473656C:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x0000000061696D65:return 1;
			default:return 0;
			}
		case 0x6E6972657473656C:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x0000000061696D65:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F686F7268746E61:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x676F6C6F69626F70:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006C616369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F68706172746C75:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x676F7263696D6F74:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x0000000068706172:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F68706F62697274:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x637365726F687073:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x0000000065636E65:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F68707265707968:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x637365726F687073:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x0000000065636E65:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6C676F6962616C:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E7972616C6F7373:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006C616567:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6C6F6973796870:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x74616E616F636967:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x0000000063696D6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6C79646E6F7073:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x7565706172656874:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x0000000073636974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6D65736F786568:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6870736F68706F6E:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006369726F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6E6968726F746F:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6C6F676E7972616C:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006369676F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6E696D6F646261:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6365726574737968:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x00000000796D6F74:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F7065646F747561:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x617A6972656D796C:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006E6F6974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F706F6D72656874:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x617A6972656D796C:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006E6F6974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F706F7268746E61:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x617A696870726F6D:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006E6F6974:return 1;
			default:return 0;
			}
		case 0x676F6C6F656C6574:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006C616369:return 1;
			default:return 0;
			}
		case 0x68706172676F6567:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006C616369:return 1;
			default:return 0;
			}
		case 0x68746F6870726F6D:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x0000000074736965:return 1;
			default:return 0;
			}
		case 0x72676F6973796870:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x0000000079687061:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F706F7270736964:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6574616E6F697472:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000007373656E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F72616863636173:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6967616C6963756D:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x0000000073756F6E:return 1;
			default:return 0;
			}
		case 0x726F7463616C6167:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x0000000061656872:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F72616870656C62:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x7264696D6F726863:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000007369736F:return 1;
			default:return 0;
			}
		case 0x72646974616D6568:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000007369736F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F726874656C7970:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x62656C68706F626D:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x0000000073697469:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F72706F6C696870:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x65766974696E6567:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000007373656E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F72746E6F636E69:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x656C626974726576:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000007373656E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F72746E6F636E75:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x656C626174726576:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000007373656E:return 1;
			default:return 0;
			}
		case 0x656C626974726576:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000007373656E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F74616D75656E70:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x7565706172656874:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x0000000073636974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F63696D656863:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x676F6C6F69737968:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006C616369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F636973796870:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x676F6C6F69737968:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006C616369:return 1;
			default:return 0;
			}
		case 0x68706F736F6C6968:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006C616369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F727463656C65:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x636974616D75656E:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x00000000796C6C61:return 1;
			default:return 0;
			}
		case 0x676F6C6F69737968:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006C616369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F727463657073:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x63656C656F746F68:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x0000000063697274:return 1;
			default:return 0;
			}
		case 0x6D6F696C65687279:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x0000000072657465:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F736F6C696870:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6972756A6F636968:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x0000000063697473:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7075737265707573:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x61646E7562617265:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x00000000796C746E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7261706F68637974:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E65676F6E656874:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x0000000073697365:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7261707265746E69:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6369746568746E65:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x00000000796C6C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7264796861636564:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6168746870616E6F:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x00000000656E656C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x726568746F726162:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x676F726779686F6D:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x0000000068706172:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7265737265707573:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x656C626165636976:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000007373656E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7265746E696E6F6E:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x616E6F69746E6576:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000007473696C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7268636F6874696C:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6172676F74616D6F:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x0000000063696870:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7268636F746F6870:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x68706172676F6E6F:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006C616369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x726F6D6F74736968:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6369676F6C6F6870:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x00000000796C6C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x726F706F72706E75:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x656C62616E6F6974:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000007373656E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x727265746E756F63:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6F6974756C6F7665:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x00000000657A696E:return 1;
			case 0x000000007473696E:return 1;
			case 0x000000007972616E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7275666F7A6E6562:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x61786F6E6975716F:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x00000000656E696C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7361626F746F7270:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6563796D6F696469:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x0000000073756F74:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x736275736E617274:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x69746169746E6174:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x00000000796C6576:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7365646F6C696870:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6576697463757274:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000007373656E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7365647265746E69:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6576697463757274:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000007373656E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7365727069746E61:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6174696769646974:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006E6F6974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x736E6F6369746E61:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E6F697475746974:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x00000000796C6C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x736F697265747261:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6365687461706D79:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x00000000796D6F74:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x736F6C676F676176:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E79726168706F73:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006C616567:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x736F6C756E697073:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x756369746E65646F:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006574616C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x736F726574657275:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x736F64696F6D6769:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x00000000796D6F74:return 1;
			default:return 0;
			}
		case 0x736F676E69706C61:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x00000000796D6F74:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x736F726F68706F6F:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6365676E69706C61:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x00000000796D6F74:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x736F727463656C65:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6369746568746E79:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x00000000796C6C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x737963656C6F6863:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x736F7265746E6574:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x00000000796D6F74:return 1;
			default:return 0;
			}
		case 0x736F726870656E74:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x00000000796D6F74:return 1;
			default:return 0;
			}
		case 0x736F727473616774:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x00000000796D6F74:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7461636F746F7270:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x65646C6175686365:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x0000000065647968:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74616572636E6170:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x736F7265746E656F:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x00000000796D6F74:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74616E6962727574:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x72646E696C79636F:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006C616369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74616E6974636570:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x756369746E65646F:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006574616C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74616E7265746E69:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x617A696C616E6F69:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006E6F6974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74656D6F72647968:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x63696772756C6C61:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x00000000796C6C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74696D6568697274:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6F6D657472617465:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006E6F6972:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746C757265707573:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6974736F72666172:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x0000000064656966:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746E616F656C6170:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x676F6C6F706F7268:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006C616369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746E69727962616C:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x68636E6172626968:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x0000000065746169:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746E697469746E61:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x616C7562616E6E69:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006E616972:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746F6870656E6963:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x72676F7263696D6F:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x0000000079687061:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746F727463656C65:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x7475657061726568:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006C616369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74726162656C6870:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6C6169646F697265:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x0000000073697379:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74736275736E6F63:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6F69746169746E61:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000007473696E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74736E6F636F7270:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x616E6F6974757469:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006D73696C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7475746974736E69:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x617A696C616E6F69:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006E6F6974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x79686F7274736167:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6872726F72657473:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x0000000079687061:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7972636F7263696D:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x72676F6C6C617473:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x0000000079687061:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7972636F7A656970:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x617A696C6C617473:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006E6F6974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7972637265746E69:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x617A696C6C617473:
			switch(wp[2] | (uint64_t)(0x0000000020202020)){
			case 0x000000006E6F6974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	default:return 0;
	}
}
