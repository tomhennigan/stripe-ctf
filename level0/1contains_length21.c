#include <stdint.h>
unsigned int contains21(uint64_t * wp) {
	switch(wp[0]){
	case 0x616C6F73736F6C67:
		switch(wp[1]){
		case 0x79726168706F6962:
			switch(wp[2]){
			case 0x0000006C6165676E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x61706F6475657370:
		switch(wp[1]){
		case 0x65676F6E65687472:
			switch(wp[2]){
			case 0x000000736973656E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6172747265746E69:
		switch(wp[1]){
		case 0x62616D726F66736E:
			switch(wp[2]){
			case 0x0000007974696C69:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6261747365736964:
		switch(wp[1]){
		case 0x746E656D6873696C:
			switch(wp[2]){
			case 0x0000006E61697261:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x63656C6C65746E69:
		switch(wp[1]){
		case 0x697473696C617574:
			switch(wp[2]){
			case 0x000000796C6C6163:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x63696D6F74616E61:
		switch(wp[1]){
		case 0x6F6C6F687461706F:
			switch(wp[2]){
			case 0x0000006C61636967:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x63696E616863656D:
		switch(wp[1]){
		case 0x656C6C65746E696F:
			switch(wp[2]){
			case 0x0000006C61757463:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6369726F74736968:
		switch(wp[1]){
		case 0x6F736F6C6968706F:
			switch(wp[2]){
			case 0x0000006163696870:return 1;
			default:return 0;
			}
		case 0x706172676F65676F:
			switch(wp[2]){
			case 0x0000006C61636968:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636974656E6F6870:
		switch(wp[1]){
		case 0x6C676F726569686F:
			switch(wp[2]){
			case 0x0000006369687079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636E697265707573:
		switch(wp[1]){
		case 0x6E65686572706D6F:
			switch(wp[2]){
			case 0x000000656C626973:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636F64656C6F6863:
		switch(wp[1]){
		case 0x6F7265746E656F68:
			switch(wp[2]){
			case 0x000000796D6F7473:return 1;
			default:return 0;
			}
		case 0x746F6874696C6F68:
			switch(wp[2]){
			case 0x0000007973706972:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636F6E65646F7564:
		switch(wp[1]){
		case 0x68636F64656C6F68:
			switch(wp[2]){
			case 0x000000796D6F746F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6563616F6E696D61:
		switch(wp[1]){
		case 0x74656E6568706F74:
			switch(wp[2]){
			case 0x000000656E696469:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65636E65696C6F70:
		switch(wp[1]){
		case 0x65796D6F6C616870:
			switch(wp[2]){
			case 0x000000736974696C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65646F65616C6170:
		switch(wp[1]){
		case 0x69676F6C6F72646E:
			switch(wp[2]){
			case 0x000000796C6C6163:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65686F6475657370:
		switch(wp[1]){
		case 0x646F726870616D72:
			switch(wp[2]){
			case 0x0000006D73697469:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656F727463656C65:
		switch(wp[1]){
		case 0x6F6C61687065636E:
			switch(wp[2]){
			case 0x0000006870617267:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6669746E65696373:
		switch(wp[1]){
		case 0x6F747369686F6369:
			switch(wp[2]){
			case 0x0000006C61636972:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x676F6C6F68746170:
		switch(wp[1]){
		case 0x6F74616E616F6369:
			switch(wp[2]){
			case 0x0000006C6163696D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68636F7265746E65:
		switch(wp[1]){
		case 0x6F74737963656C6F:
			switch(wp[2]){
			case 0x000000796D6F7473:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68706C617A6E6562:
		switch(wp[1]){
		case 0x726479686C796E65:
			switch(wp[2]){
			case 0x000000656E6F7A61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68706C7974656361:
		switch(wp[1]){
		case 0x726479686C796E65:
			switch(wp[2]){
			case 0x000000656E697A61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68706F6572657473:
		switch(wp[1]){
		case 0x6F7263696D6F746F:
			switch(wp[2]){
			case 0x0000006870617267:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68706F6863797370:
		switch(wp[1]){
		case 0x69676F6C6F697379:
			switch(wp[2]){
			case 0x000000796C6C6163:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68706F6D6F726863:
		switch(wp[1]){
		case 0x6F6874696C6F746F:
			switch(wp[2]){
			case 0x0000006870617267:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68706F6D72656874:
		switch(wp[1]){
		case 0x7365726F6870736F:
			switch(wp[2]){
			case 0x00000065636E6563:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6965736F7263696D:
		switch(wp[1]){
		case 0x6F7274656D6F6D73:
			switch(wp[2]){
			case 0x0000006870617267:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x697265746E756F63:
		switch(wp[1]){
		case 0x746572707265746E:
			switch(wp[2]){
			case 0x0000006E6F697461:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6974616D6F67797A:
		switch(wp[1]){
		case 0x7563697275616F63:
			switch(wp[2]){
			case 0x000000736972616C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x69746F72656C6373:
		switch(wp[1]){
		case 0x696F726F68636F63:
			switch(wp[2]){
			case 0x0000007369746964:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6C617473797263:
		switch(wp[1]){
		case 0x73656E696D756C6F:
			switch(wp[2]){
			case 0x00000065636E6563:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6C65746E696564:
		switch(wp[1]){
		case 0x7A696C6175746365:
			switch(wp[2]){
			case 0x0000006E6F697461:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6F636F7263696D:
		switch(wp[1]){
		case 0x697274656D69726F:
			switch(wp[2]){
			case 0x000000796C6C6163:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6F646973707968:
		switch(wp[1]){
		case 0x687065636F686369:
			switch(wp[2]){
			case 0x0000006D73696C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6F647974616C70:
		switch(wp[1]){
		case 0x687065636F686369:
			switch(wp[2]){
			case 0x00000073756F6C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C756269646E616D:
		switch(wp[1]){
		case 0x736E65707375736F:
			switch(wp[2]){
			case 0x0000006C6169726F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E616F6475657370:
		switch(wp[1]){
		case 0x6F6C6F706F726874:
			switch(wp[2]){
			case 0x0000006C61636967:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E656F7274736167:
		switch(wp[1]){
		case 0x6F6C6F636F726574:
			switch(wp[2]){
			case 0x000000796D6F7473:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E69747369646E69:
		switch(wp[1]){
		case 0x6C62616873697567:
			switch(wp[2]){
			case 0x0000007373656E65:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E69747369646E75:
		switch(wp[1]){
		case 0x6C62616873697567:
			switch(wp[2]){
			case 0x0000007373656E65:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F63616D72616870:
		switch(wp[1]){
		case 0x6E6972636F646E65:
			switch(wp[2]){
			case 0x00000079676F6C6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F64796D616C6863:
		switch(wp[1]){
		case 0x6169726574636162:
			switch(wp[2]){
			case 0x00000073756F6563:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F676E7972616870:
		switch(wp[1]){
		case 0x74746F6C67697065:
			switch(wp[2]){
			case 0x0000006E61656469:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6C676F6962616C:
		switch(wp[1]){
		case 0x79726168706F7373:
			switch(wp[2]){
			case 0x0000006C6165676E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6C686361786568:
		switch(wp[1]){
		case 0x686F6C6379636F72:
			switch(wp[2]){
			case 0x000000656E617865:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6C6870756C6F70:
		switch(wp[1]){
		case 0x61746F696F627369:
			switch(wp[2]){
			case 0x0000006369746F74:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6E6172626D656D:
		switch(wp[1]){
		case 0x67616C6974726163:
			switch(wp[2]){
			case 0x00000073756F6E69:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6E6968726F746F:
		switch(wp[1]){
		case 0x6C6F676E7972616C:
			switch(wp[2]){
			case 0x000000747369676F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F706F7268746E61:
		switch(wp[1]){
		case 0x6C6F74616D696C63:
			switch(wp[2]){
			case 0x000000747369676F:return 1;
			default:return 0;
			}
		case 0x6F6C6F6870726F6D:
			switch(wp[2]){
			case 0x0000006C61636967:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F706F7270736964:
		switch(wp[1]){
		case 0x6C62616E6F697472:
			switch(wp[2]){
			case 0x0000007373656E65:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F726F6572657473:
		switch(wp[1]){
		case 0x676F6E6567746E65:
			switch(wp[2]){
			case 0x0000007968706172:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F746174736F7270:
		switch(wp[1]){
		case 0x656C756369736576:
			switch(wp[2]){
			case 0x000000796D6F7463:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F63696D656863:
		switch(wp[1]){
		case 0x756563616D726168:
			switch(wp[2]){
			case 0x0000006C61636974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F6E65646F7564:
		switch(wp[1]){
		case 0x6574616572636E61:
			switch(wp[2]){
			case 0x000000796D6F7463:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F726574657275:
		switch(wp[1]){
		case 0x6870656E6F6C6579:
			switch(wp[2]){
			case 0x0000007369746972:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F736F6C696870:
		switch(wp[1]){
		case 0x696C65726F636968:
			switch(wp[2]){
			case 0x00000073756F6967:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x707265746E756F63:
		switch(wp[1]){
		case 0x6169636E756E6F72:
			switch(wp[2]){
			case 0x0000006F746E656D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x72636F7470797263:
		switch(wp[1]){
		case 0x7A696C6C61747379:
			switch(wp[2]){
			case 0x0000006E6F697461:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7265746E696E6F6E:
		switch(wp[1]){
		case 0x626165676E616863:
			switch(wp[2]){
			case 0x0000007974696C69:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7268636F746F6870:
		switch(wp[1]){
		case 0x6F6874696C6F6D6F:
			switch(wp[2]){
			case 0x0000006870617267:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x726F646E65707061:
		switch(wp[1]){
		case 0x676F6E6567746E6F:
			switch(wp[2]){
			case 0x0000007968706172:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x727265746E756F63:
		switch(wp[1]){
		case 0x7369616E6E6F6365:
			switch(wp[2]){
			case 0x00000065636E6173:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x72746F7265746568:
		switch(wp[1]){
		case 0x746E616C70736E61:
			switch(wp[2]){
			case 0x0000006E6F697461:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x736275736E617274:
		switch(wp[1]){
		case 0x69746169746E6174:
			switch(wp[2]){
			case 0x0000006574696E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7365726173736574:
		switch(wp[1]){
		case 0x6861636564656163:
			switch(wp[2]){
			case 0x0000006E6F726465:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x73696C6261747365:
		switch(wp[1]){
		case 0x697261746E656D68:
			switch(wp[2]){
			case 0x0000006D73696E61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x736E6172746F7270:
		switch(wp[1]){
		case 0x69746E6174736275:
			switch(wp[2]){
			case 0x0000006E6F697461:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x736E6F6369746E61:
		switch(wp[1]){
		case 0x6E6F697475746974:
			switch(wp[2]){
			case 0x0000007473696C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x737963656C6F6863:
		switch(wp[1]){
		case 0x6F6E756A656A6F74:
			switch(wp[2]){
			case 0x000000796D6F7473:return 1;
			default:return 0;
			}
		case 0x6F726870656E6F74:
			switch(wp[2]){
			case 0x000000796D6F7473:return 1;
			default:return 0;
			}
		case 0x6F72747361676F74:
			switch(wp[2]){
			case 0x000000796D6F7473:return 1;
			default:return 0;
			}
		case 0x746F6874696C6F74:
			switch(wp[2]){
			case 0x0000007973706972:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74616572636E6170:
		switch(wp[1]){
		case 0x656E65646F75646F:
			switch(wp[2]){
			case 0x000000796D6F7463:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74656D61746E6570:
		switch(wp[1]){
		case 0x6964656E656C7968:
			switch(wp[2]){
			case 0x000000656E696D61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74656D6F6D656E61:
		switch(wp[1]){
		case 0x6968706172676F72:
			switch(wp[2]){
			case 0x000000796C6C6163:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x75646E697265766F:
		switch(wp[1]){
		case 0x7A696C6169727473:
			switch(wp[2]){
			case 0x0000006E6F697461:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x75746974736E6F63:
		switch(wp[1]){
		case 0x7A696C616E6F6974:
			switch(wp[2]){
			case 0x0000006E6F697461:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x79636F7972636164:
		switch(wp[1]){
		case 0x6F6E6968726F7473:
			switch(wp[2]){
			case 0x000000796D6F7473:return 1;
			default:return 0;
			}
		default:return 0;
		}
	default:return 0;
	}
}
