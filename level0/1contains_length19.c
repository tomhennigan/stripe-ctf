#include <stdint.h>
unsigned int contains19(uint64_t * wp) {
	switch(wp[0] | (uint64_t)(0x2020202020202020)){
	case 0x61636F6475657370:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E6967616C697472:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x000000000073756F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6163736F69636166:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x656D75686F6C7570:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006C6172:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6168637265746E69:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E656C626165676E:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000737365:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x61686F6475657370:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x74616E6963756C6C:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006E6F69:return 1;
			case 0x000000000079726F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x616C756369746572:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6C756E6172676F74:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000657461:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x616D6C6F6F686373:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E68736972657473:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000737365:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x616D6F74706D7973:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x616369676F6C6F74:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000796C6C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x616E6F6D69746E61:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E6C616369686372:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000737365:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x616F63696D656863:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x69676F6C6F727473:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006C6163:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x616F636973796870:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x696D6F6E6F727473:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006C6163:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x616F6C6C69706170:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x747379636F6E6564:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000616D6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x616F6D6F72626964:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6865646C61746563:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000656479:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x616F727463656C65:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x74616D61676C616D:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006E6F69:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x61706172746E6F63:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x676F6C656C6C6172:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006D6172:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x61706D7563726963:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x676F6C656C6C6172:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006D6172:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x617261686373696D:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x74617A6972657463:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006E6F69:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6172626172746C75:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6168706563796863:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x000000000063696C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6172626973707968:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6168706563796863:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x000000000063696C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6172626F6874726F:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6168706563796863:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x000000000063696C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6172627265707968:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6168706563796863:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x000000000063696C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6172627974616C70:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6168706563796863:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x000000000063696C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x617265746E756F63:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6D65636E756F6E6E:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000746E65:return 1;
			default:return 0;
			}
		case 0x7669746361727474:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000796C65:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6172747265707573:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E65646E6563736E:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000796C74:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x61736F697261766F:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x746365676E69706C:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000796D6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x61736F726170616C:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x746365676E69706C:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000796D6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6174736F6E617275:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x616C706F6C796870:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000797473:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6174737972636E75:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6C6962617A696C6C:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000797469:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x626973736F706D69:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x7461636966696C69:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006E6F69:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x626F6874696E726F:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6968706172676F69:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006C6163:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6275737265707573:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6C6169746E617473:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000797469:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6363656172746E69:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x697473616973656C:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006C6163:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x63656C6C65746E69:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x74617A696C617574:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006E6F69:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6365786568736964:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x7264656861746E6F:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x000000000064696F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6369646E65707061:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x74736F636561636F:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000796D6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6369676F6C6F6962:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x73696E616D75686F:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000636974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x63696D6172746C75:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x73696D6568636F72:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000797274:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x63696D6F74616E61:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x69676F6C6F69626F:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006C6163:return 1;
			default:return 0;
			}
		case 0x6F6C6F687461706F:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000636967:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636E6F6365727269:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E656C6261696C69:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000737365:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636F64656C6F6863:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x61696874696C6F68:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000736973:return 1;
			default:return 0;
			}
		case 0x746F6874696C6F68:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000796D6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636F68636E6F7262:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x7463697274736E6F:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006E6F69:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636F72707265766F:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x74616E6974736172:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006E6F69:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636F727463656C65:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6172676F69647261:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000796870:return 1;
			default:return 0;
			}
		case 0x65726F6870617461:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000636974:return 1;
			case 0x0000000000736973:return 1;
			default:return 0;
			}
		case 0x74656D6F6E6F7268:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000636972:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636F736F74796870:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x616369676F6C6F69:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000796C6C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6372617265707968:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x69676F6C6F656168:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006C6163:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x637265746E756F63:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x74616E6D65646E6F:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006E6F69:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x64656D7265746E69:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E656D6F73656C64:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000737365:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x64656E61706F7270:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x79786F6272616369:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x000000000063696C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x646E7573696D6E75:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x61646E6174737265:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000656C62:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x646F6E6F67697274:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x646568616365646F:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006E6F72:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x646F726765746E69:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x746E657265666669:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006C6169:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x646F726874797265:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x746172656E656765:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000657669:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6472616369726570:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x657268706F636169:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x000000000063696E:return 1;
			default:return 0;
			}
		case 0x7968706D79736F69:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000736973:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6563796863617262:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x74617A696C616870:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006E6F69:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65646F65616C6170:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x69676F6C6F72646E:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006C6163:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65666E6F636F7270:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E6F697461726564:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000747369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65666F7265746568:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x74617A696C697472:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006E6F69:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656863736F747561:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6163697473616964:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000796C6C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65686F6475657370:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x646F726870616D72:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000657469:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65686F65616C6170:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x676F6C6F74657072:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000747369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6568706F7A6E6562:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6C6F7268746E616E:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000656E69:return 1;
			default:return 0;
			}
		case 0x7A617268746E616E:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000656E69:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656C6C6168636E75:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E656C626165676E:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000737365:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656C746E65676E75:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E656B696C6E616D:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000737365:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656D61696C726170:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x74617A697261746E:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006E6F69:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656D6F6D616E7964:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6F6870726F6D6174:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000646573:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656D747261706564:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x74617A696C61746E:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006E6F69:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656E6975676E6173:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x616D67656C68706F:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000636974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656E6F68706C7573:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6874656D6C796874:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000656E61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656F676E696E656D:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x696C61687065636E:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000736974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656F72646E6F6863:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x696C6568746F646E:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000616D6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6570736172746C75:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x74617A696C616963:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006E6F69:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6570757369746E61:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6C61727574616E72:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006D7369:return 1;
			case 0x0000000000747369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65726172746E6F63:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E6F6974756C6F76:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000797261:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6572636172746C75:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E61697261646970:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006D7369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x657265746E756F63:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x7461726567676178:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006E6F69:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65726F7473697261:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E6163696C627570:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006D7369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65727065726E6F6E:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6F697461746E6573:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006C616E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6572706D6F636E69:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6C696269736E6568:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000797469:return 1;
			default:return 0;
			}
		case 0x6E657669736E6568:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000737365:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6572706D6F636E75:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E657669736E6568:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000737365:return 1;
			default:return 0;
			}
		case 0x6E676E69646E6568:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000737365:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x657270706173696D:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E657669736E6568:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000737365:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6574616C69626D61:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x61726574616C6172:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000796C6C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65746E697265766F:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6C61757463656C6C:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000797469:return 1;
			default:return 0;
			}
		case 0x746163696669736E:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006E6F69:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65746F6863797370:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x69676F6C6F6E6863:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006C6163:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6574736973707968:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6C61687065636F6E:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006D7369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6574736F69726570:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x696C6C7564656D6F:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000736974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x657669647265766F:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x7461636966697372:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006E6F69:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6579706F74737963:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x69726870656E6F6C:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000736974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x666669646F747561:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x746169746E657265:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006E6F69:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6669746E65696373:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E616D6F726F6369:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000636974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x666F646F68746163:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x65637365726F756C:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x000000000065636E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x666F696863617262:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x676E696C6F696361:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006C6175:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x666F6E61766C6167:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x74617A6964617261:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006E6F69:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x67616C6974726163:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x7461636966696E69:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006E6F69:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x67616D697265766F:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E65766974616E69:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000737365:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x676E6170686D796C:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6962656C68706F69:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000736974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x676F636973796870:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6968706172676F65:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006C6163:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x676F6870736F6870:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x746F72706F63796C:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006E6965:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x676F6874696E726F:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6968706172676F65:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006C6163:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x676F6C6F68746170:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x696E696C636F6369:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006C6163:return 1;
			default:return 0;
			}
		case 0x6F74616E616F6369:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x000000000063696D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6775737265707968:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6C69626974736567:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000797469:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6863617069726570:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x69676E696E656D79:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000736974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6863696461726170:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x7A6E65626F726F6C:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000656E65:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68636F6475657370:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x65687473656D6F72:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000616973:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68636F6572657473:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x61636974616D6F72:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000796C6C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68636F6D6F726863:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x706172676F636C61:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000636968:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68636F72646E6564:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x69676F6C6F6E6F72:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006C6163:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6865727065727269:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E656C6269736E65:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000737365:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6865727070616E75:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E656C6261646E65:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000737365:return 1;
			default:return 0;
			}
		case 0x6E656C6269736E65:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000737365:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x686F727463656C65:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x746C75636974726F:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000657275:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x686F727463657073:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x706172676F696C65:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000636968:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x686F74616D726564:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x616C706F72657465:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000797473:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68706F636973756D:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6968706F736F6C69:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006C6163:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68706F6475657370:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6968706F736F6C69:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006C6163:return 1;
			default:return 0;
			}
		case 0x6F7268746E616C69:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000636970:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68706F6863797370:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x69676F6C6F697379:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006C6163:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68706F6973796870:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6968706F736F6C69:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006C6163:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68726F696E617263:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6968637369686361:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000736973:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68746E6169746E61:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x746E65636F706F72:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000636972:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68746E616F656874:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x70726F6D6F706F72:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000636968:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68746F6863797370:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6974756570617265:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006C6163:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68746F6973796870:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6974756570617265:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006C6163:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x69636F7369746E61:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6163697473696C61:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000796C6C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6963736E6F636E75:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E73756F69746E65:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000737365:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x69646172746E6F63:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x766974636E697473:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000796C65:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x69646E697265766F:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x73696C6175646976:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000636974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x69646F65616C6170:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x726574706F797463:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x000000000073756F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x69646F6863797370:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6F697469736F7073:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006C616E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x69646F7274736167:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x63736F6E61687061:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x000000000079706F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x69676F6C6F656874:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6974696C6F706F63:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006C6163:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x696C636F7263696D:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x69676F6C6F74616D:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006C6163:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x696D6F6E65646E75:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6C616E6F6974616E:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000657A69:return 1;
			case 0x00000000006D7369:return 1;
			case 0x0000000000747369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6970737265707968:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x7A696C6175746972:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000676E69:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x697265746E756F63:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6567696C6C65746E:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x000000000065636E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6972747265707968:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6F69736E656D6964:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006C616E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x697361626F747561:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x746563796D6F6964:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x000000000073756F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x69736F74636F7270:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x74636564696F6D67:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000796D6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x69737365666F7270:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x74617A696C616E6F:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006E6F69:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6973736572706D69:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6163697473696E6F:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000796C6C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6974616D6F67797A:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6C6C6978616D6F63:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000797261:return 1;
			default:return 0;
			}
		case 0x7563697275616F63:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x000000000072616C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6974616E696D6573:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x74617A696C616E6F:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006E6F69:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6974616E7265766F:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x74617A696C616E6F:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006E6F69:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6974636E61736E75:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E73756F696E6F6D:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000737365:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6974636E75666564:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x74617A696C616E6F:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006E6F69:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x697465726F656874:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6974636172706F63:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006C6163:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x69746E61696D6573:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x72657473696E696D:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006C6169:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x69746E65766E6F63:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x74617A696C616E6F:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006E6F69:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6974736E6F636E75:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6C616E6F69747574:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006D7369:return 1;
			case 0x0000000000797469:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x697669646E696564:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x74617A696C617564:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006E6F69:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6B63617265707573:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6D6764656C776F6E:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000746E65:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C61676F746F6870:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x706172676F6E6176:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000636968:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C61687065636E65:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x61706F6C65796D6F:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000796874:return 1;
			default:return 0;
			}
		case 0x69676E696E656D6F:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000736974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C616F7274736167:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x72726F6E696D7562:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000616568:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C61706F74796870:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x676F6C6F746E6F65:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000747369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C636F6E72657473:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x7473616D6F646965:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x000000000064696F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C656F6D72656874:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x746F6D6F72746365:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000657669:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C656F74636F7270:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x73616C706F727479:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000636974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C68636172746574:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6C796874656F726F:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000656E65:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C68636F72647968:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E6974616C70726F:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x000000000073756F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C68706F7A6E6562:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6963756C676F726F:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006C6F6E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C696E61666C7573:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x64696E6175676C79:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000656E69:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6F626D6F726874:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x69676E6168706D79:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000736974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6F63696D656863:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x656373656E696D75:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x000000000065636E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6F646172746C75:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x687065636F686369:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000796C61:return 1;
			default:return 0;
			}
		case 0x6E6172636F686369:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006C6169:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6F646973707968:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x687065636F686369:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000796C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6F646F68746163:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x656373656E696D75:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x000000000065636E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6F647265707968:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x687065636F686369:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000796C61:return 1;
			default:return 0;
			}
		case 0x6E6172636F686369:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006C6169:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6F68636F747561:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x7463657473796365:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000796D6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6F706F6D736F63:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x74617A696E617469:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006E6F69:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6F706F746F6870:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x74617A6972656D79:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006E6F69:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6F727463656C65:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x656373656E696D75:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x000000000065636E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C72617069746E61:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x7261746E656D6169:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000747369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C756269646E616D:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x676E79726168706F:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006C6165:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C75636974726170:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6163697473697261:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000796C6C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C75676E61697274:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x75676E616972746F:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x000000000072616C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D64617265707573:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x7461727473696E69:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006E6F69:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D65687265707968:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x656E69626F6C676F:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x000000000061696D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D69647265707968:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6C616E6F69736E65:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000797469:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6C61687468706F:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x63736F6375656C6F:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x000000000065706F:return 1;
			default:return 0;
			}
		case 0x656D6F706F72746F:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000726574:return 1;
			default:return 0;
			}
		case 0x656D6F746174736F:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000726574:return 1;
			default:return 0;
			}
		case 0x746F62656C68706F:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000796D6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6D6F6363616E75:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E676E697461646F:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000737365:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6F636973796870:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6974616D65687461:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006C6163:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6F676E696E656D:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x616872726F6C6579:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000796870:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6F68636E6F7262:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6F63796D726F6375:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000736973:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6F6E6F74756C70:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6870726F6D617465:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006D7369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6F727463656C65:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x61636974656E6761:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000796C6C:return 1;
			default:return 0;
			}
		case 0x6772756C6C617465:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000747369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D75637269636E75:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E64656269726373:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000737365:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D75656E706F7970:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E6F74697265706F:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006D7565:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E616C6968706E75:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x616369706F726874:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000796C6C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6172746F6D6F68:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x7461746E616C7073:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006E6F69:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6172746F747561:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x7461746E616C7073:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006E6F69:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6174736E696F63:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E73756F656E6174:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000737365:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6174736F747561:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x74617A6964726164:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006E6F69:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E61766461736964:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E73756F65676174:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000737365:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E65636172746C75:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E616972616E6574:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006D7369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6563736E617274:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x73696C61746E6564:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000636974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E65647265746E69:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6F6974616E696D6F:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006C616E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6568706174656D:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x616964656E656C79:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006E696D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E656D6572637865:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E73756F69746974:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000737365:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E656D6D6F636E69:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E656C6261727573:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000737365:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E656D6D6F636E75:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E656C6261727573:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000737365:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E656D6F6E656870:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6163697473696C61:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000796C6C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E656F7274736167:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x69676F6C6F726574:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006C6163:return 1;
			default:return 0;
			}
		case 0x696C6F636F726574:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000736974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E65736572706572:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6C616E6F69746174:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006D7369:return 1;
			case 0x0000000000747369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E69636F7263696D:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6172676F74616D65:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000796870:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6963726F736572:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6C61687468706C6F:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006E6965:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E696D65686F746F:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6568747361727565:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x000000000061696E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6F636172747865:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6F69747574697473:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006C616E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6F636F72746E69:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6C69626974726576:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000797469:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6F637265707573:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6F69747574697473:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006C616E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6F637265707968:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6F69747574697473:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006C616E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6F637265746E69:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6C69626974726576:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000797469:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6F63736974696C:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6F69746174736574:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006C616E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6F7073696D6573:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E73756F656E6174:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000737365:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6F726574737968:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6568747361727565:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x000000000061696E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E706F7461647968:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x796C6F74616D7565:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000636974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E726F65616C6170:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x69676F6C6F687469:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006C6163:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E756D6D6F636E69:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E65766974616369:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000737365:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E756D6D6F636E75:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E65766974616369:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000737365:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F63616D72616870:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x61636974736F6E67:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000796C6C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F63696E65726870:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6472616369726570:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000636169:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F63697265687073:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6465686172746574:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006C6172:return 1;
			default:return 0;
			}
		case 0x6972646E696C7963:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006C6163:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F63697461706568:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x74736F7265746E65:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000796D6F:return 1;
			default:return 0;
			}
		case 0x74736F7274736167:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000796D6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F636F6461726166:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6C6974636172746E:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000797469:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F636F6E65726461:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6F72746F63697472:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000636970:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F64696F6D676973:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x74736F74636F7270:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000796D6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F65676F6E687465:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6163696870617267:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000796C6C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F65676F74796870:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6163696870617267:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000796C6C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F656E61636C6163:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6C61676172747361:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x000000000064696F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F666E6F636E6F6E:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6163697473696D72:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000796C6C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F676168706F7365:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x63736F7274736167:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x000000000079706F:return 1;
			default:return 0;
			}
		case 0x74736F7274736167:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000796D6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F676E69706C6173:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x696E6F7469726570:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000736974:return 1;
			default:return 0;
			}
		case 0x6F68636F6E657473:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000616972:return 1;
			default:return 0;
			}
		case 0x7265746568746163:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006D7369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F676E7972616870:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x696C616467796D61:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000736974:return 1;
			default:return 0;
			}
		case 0x696C6C69736E6F74:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000736974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F68636F6574736F:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x637261736F72646E:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000616D6F:return 1;
			default:return 0;
			}
		case 0x726269666F72646E:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000616D6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F68636F6E656461:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x637261736F72646E:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000616D6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F68706F62697274:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x637365726F687073:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000746E65:return 1;
			default:return 0;
			}
		case 0x63736F726F687073:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x000000000065706F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F68706F746F6870:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x637365726F687073:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000746E65:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F69726574636162:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x7565706172656874:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000636974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F69726F74736968:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6163696870617267:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000796C6C:return 1;
			default:return 0;
			}
		case 0x7372656870617267:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000706968:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F69736968746870:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x7565706172656874:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000636974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6C68636F6E6F6D:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x63617268746E6172:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000656E65:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6C756369727561:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x75636972746E6576:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x000000000072616C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6C75666F726373:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6C75637265627574:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x000000000073756F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6D6C616874706F:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x656D6F6D72656874:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000726574:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6E656874726170:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x61636974656E6567:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000796C6C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6E6968726F746F:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6C6F676E7972616C:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x000000000079676F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6E696D6F646261:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x746F726574737968:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000796D6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F706D65746E6F63:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E73756F656E6172:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000737365:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F706F7268746E61:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6163696870726F6D:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000796C6C:return 1;
			default:return 0;
			}
		case 0x676F6C6F69636F73:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000747369:return 1;
			default:return 0;
			}
		case 0x6974696870726F6D:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006C6163:return 1;
			default:return 0;
			}
		case 0x6C6F74616D696C63:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x000000000079676F:return 1;
			default:return 0;
			}
		case 0x6F686379786F6564:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x000000000063696C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F706F7270736964:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E6C616E6F697472:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000737365:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F706F74616D6568:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x756E697279687072:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000616972:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F72616863636173:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6563616E69726166:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x000000000073756F:return 1;
			default:return 0;
			}
		case 0x656361746563796D:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x000000000073756F:return 1;
			default:return 0;
			}
		case 0x6F72746F6D656863:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000636970:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F72616870656C62:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x696D7365646E7973:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000736974:return 1;
			default:return 0;
			}
		case 0x72726F6E6E656C62:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000616568:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F7265746E756F63:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x74617A696E616772:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006E6F69:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F72686361726170:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x726F68706F74616D:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x000000000073756F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F726F6572657473:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x676F6E6567746E65:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006D6172:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F72746E6F636E69:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6C69626974726576:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000797469:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F74616D61757173:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6C75637265627574:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000657461:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F74616D65686373:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6163697465676F6C:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000796C6C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F74616D656E6963:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6163696870617267:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000796C6C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F746174736F7270:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x696C756369736576:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000736974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F7473696C6C6162:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x72676F6964726163:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000687061:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F7475616E6F6870:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6163696870617267:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000796C6C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F74796369736162:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x73616C7061726170:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006E6974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7061637265646E75:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x74617A696C617469:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006E6F69:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7065647265746E69:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x61746E656D747261:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000796C6C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x70656F73736F6C67:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x646974746F6C6769:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006E6165:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7065727265646E75:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x7461746E65736572:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006E6F69:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x70657273696D6572:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x7461746E65736572:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006E6F69:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7065737265707573:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x72616E6967617574:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006E6169:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706D797361726170:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x656D696D6F687461:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000636974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F63696E696C63:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x69676F6C6F687461:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006C6163:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F6C6C6978616D:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6C6C6978616D6572:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000797261:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F6D6F74616E61:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x69676F6C6F687461:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006C6163:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F6E6167657473:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x74616D6C61687468:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x000000000073756F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F727069757165:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6C616E6F6974726F:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000797469:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F72707265766F:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x74616E6F6974726F:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000796C65:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F727463656C65:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x656D6F7268637973:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000726574:return 1;
			default:return 0;
			}
		case 0x676F6C6F69737968:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000747369:return 1;
			default:return 0;
			}
		case 0x726568746F746F68:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000797061:return 1;
			default:return 0;
			}
		case 0x7461727574636E75:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006E6F69:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F796874686369:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6C6F746E6F656C61:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x000000000079676F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x707261636174656D:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x676E616C6168706F:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006C6165:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x707265746E756F63:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x646E616761706F72:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000657A69:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7075737265707573:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x61646E7562617265:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x000000000065636E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7079686F746F6870:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6163697473616E6F:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000796C6C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7079786F7A6E6562:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x7268746E616E6568:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000656E65:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7165736E6F636E75:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E6C6169746E6575:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000737365:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7261706172746E69:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x74616D7968636E65:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x000000000073756F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x72656F6475657370:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x74616C6570697379:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x000000000073756F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7265706F706C6F63:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x616872726F656E69:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000796870:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7265746172747865:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6C6169726F746972:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000797469:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7265766F6874726F:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6865646C61727461:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000656479:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x72676F6E6F726863:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x61636974616D6D61:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000796C6C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7268636F63796870:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x65637968706F6D6F:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x000000000073756F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7268636F6874696C:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6172676F74616D6F:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000796870:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x726F687475616E69:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E65766974617469:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000737365:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x726F687475616E75:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E65766974617469:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000737365:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x726F706F72706E75:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E6574616E6F6974:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000737365:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x72706D6974736F70:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x73696E6F69737365:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000636974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x727265746E696E75:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E656C6269747075:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000737365:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x72746F6964726163:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x726568746F68706F:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000797061:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7274737265746E69:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x7461636966697461:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006E6F69:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7279687461726170:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6D6F74636564696F:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000657A69:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7361706D6F636E69:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E6574616E6F6973:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000737365:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7361706D6F636E75:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E6574616E6F6973:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000737365:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x73656D7974616C70:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6168706563697461:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x000000000063696C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x73656F7274736167:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x74736F676168706F:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000796D6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7365727065727269:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E656C6261746E65:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000737365:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x736572706D696E75:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6C6962616E6F6973:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000797469:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7365727265746E69:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6C696269736E6F70:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000797469:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x73657369646E6F6E:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6D6873696C626174:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000746E65:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7369646F746F6870:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x7461726765746E69:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006E6F69:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x736968706F736E75:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E64657461636974:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000737365:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7369746173736964:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E69726F74636166:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000737365:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x736E697265707968:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x74617A696E696C75:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006E6F69:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x736E6F6D65646E75:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E65766974617274:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000737365:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x736F646972657470:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x796870616D726570:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000636974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x736F6C6968706E75:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E6C61636968706F:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000737365:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x736F706572706E75:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E676E6973736573:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000737365:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x736F727463656C65:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x7A69647261726568:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000676E69:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x73706F636964656D:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x69676F6C6F686379:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006C6163:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x73706F6475657370:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x69676F6C6F686379:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006C6163:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x73706F65616C6170:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x69676F6C6F686379:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006C6163:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x73706F6973796870:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x69676F6C6F686379:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006C6163:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x737261746174656D:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x676E616C6168706F:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006C6165:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7375737265707968:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6C69626974706563:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000797469:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x737963656C6F6863:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x61696874696C6F74:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000736973:return 1;
			default:return 0;
			}
		case 0x74736F656C696F74:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000796D6F:return 1;
			default:return 0;
			}
		case 0x74736F6C6F636F74:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000796D6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74616572636E6170:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x65646F75646F6369:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006C616E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74616E6974636570:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x636972626D69666F:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000657461:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746172636F707968:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6870726F6D697265:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x000000000073756F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7463656A626F6E75:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E656C62616E6F69:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000737365:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74656D61666C7573:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x7A616968746C7968:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000656C6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74656D6172746574:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E6F6D6D616C7968:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006D7569:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74656D6F656C6170:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x69676F6C6F726F65:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006C6163:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74656D6F6E617963:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6F6C676F6D656168:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006E6962:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74656D6F7263696D:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x706172676F6C6C61:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000726568:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74656D6F72647968:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x69676F6C6F726F65:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006C6163:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74656D6F72747361:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x69676F6C6F726F65:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006C6163:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7468676961727473:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E64726177726F66:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000737365:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7469737369636976:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E73756F6E696475:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000737365:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746E616F656C6170:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6172676F706F7268:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000796870:return 1;
			default:return 0;
			}
		case 0x676F6C6F706F7268:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000747369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746F636973796870:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x7475657061726568:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000736369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746F676E7972616C:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x63736F6568636172:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x000000000079706F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746F6C6168706563:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x61706F6361726F68:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000737567:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746F6E616863656D:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x7475657061726568:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000736369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746F70696E656C70:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x7379726169746E65:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000706968:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746F727463656C65:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6174736F6D726568:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000636974:return 1;
			default:return 0;
			}
		case 0x72676F72756C6C65:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000687061:return 1;
			default:return 0;
			}
		case 0x7475657061726568:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000736369:return 1;
			case 0x0000000000747369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746F74616D696C63:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x7475657061726568:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000736369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7470656378656E75:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E656C62616E6F69:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000737365:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7472656373616E75:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E656C62616E6961:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000737365:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x747265746E756F63:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x65726566736E6172:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x000000000065636E:return 1;
			default:return 0;
			}
		case 0x6C6163696E686365:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000797469:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x747365647265766F:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E65766974637572:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000737365:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74736D7563726963:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6C69626169746E61:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000797469:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74736F6475657370:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6974696D67616C61:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006C6163:return 1;
			default:return 0;
			}
		case 0x6974697463616C61:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006C6163:return 1;
			default:return 0;
			}
		case 0x706F63736F657265:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006D7369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x747375646E696564:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x74617A696C616972:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006E6F69:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x75626F73696F7A61:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x7274696E6F727974:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000656C69:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7564697669646E69:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6163697473696C61:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000796C6C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x75676E6974736964:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6E656C6261687369:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000737365:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x75736E6172746E75:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6169746E61747362:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000646574:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x766E6F6369746E61:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6C616E6F69746E65:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006D7369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x766F676E7972616C:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x696C756269747365:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000736974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x79686F6D72656874:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6568747365726570:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000616973:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x79686F746E6F646F:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6568747365726570:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x0000000000616973:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7968747265707968:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x74617A6964696F72:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006E6F69:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7972636F7263696D:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x63736F6C6C617473:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x000000000079706F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x79746F65616C6170:
		switch(wp[1] | (uint64_t)(0x2020202020202020)){
		case 0x6968706172676F70:
			switch(wp[2] | (uint64_t)(0x0000000000202020)){
			case 0x00000000006C6163:return 1;
			default:return 0;
			}
		default:return 0;
		}
	default:return 0;
	}
}
