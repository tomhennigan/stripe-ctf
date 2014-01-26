#include <stdint.h>
unsigned int contains17(uint64_t * wp) {
	switch(wp[0]){
	case 0x61626F7470797263:
		switch(wp[1]){
		case 0x696874696C6F6874:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6163696666656E69:
		switch(wp[1]){
		case 0x73656E73756F6963:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6163697073726570:
		switch(wp[1]){
		case 0x73656E73756F6963:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x61636F68706C7573:
		switch(wp[1]){
		case 0x64696C696E616272:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x61646E6174736572:
		switch(wp[1]){
		case 0x6F6974617A696472:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6165636E6F636E75:
		switch(wp[1]){
		case 0x73656E656C62616C:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6165676E6F636E69:
		switch(wp[1]){
		case 0x73656E656C62616C:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6165727468637261:
		switch(wp[1]){
		case 0x6968737265727573:
			switch(wp[2]){
			case 0x0000000000000070:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x616574737265766F:
		switch(wp[1]){
		case 0x73656E7473616664:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x61676572676E6F63:
		switch(wp[1]){
		case 0x73696C616E6F6974:
			switch(wp[2]){
			case 0x000000000000006D:return 1;
			default:return 0;
			}
		case 0x7A696C616E6F6974:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x61676F726170616C:
		switch(wp[1]){
		case 0x706F63736F727473:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x61676F726F6C7970:
		switch(wp[1]){
		case 0x6D6F746365727473:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6167797A74736F70:
		switch(wp[1]){
		case 0x6169737968706F70:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6168636F72647968:
		switch(wp[1]){
		case 0x756F656361646972:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		case 0x756F656361746972:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6168637265707968:
		switch(wp[1]){
		case 0x6E6968727265616D:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6168706F74796870:
		switch(wp[1]){
		case 0x676F6C6F63616D72:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6168746F6C696870:
		switch(wp[1]){
		case 0x6967727574616D75:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6169647265707573:
		switch(wp[1]){
		case 0x6C6C6163696C6F62:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x61697272616D6E75:
		switch(wp[1]){
		case 0x74696C6962616567:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x616B6F6874616761:
		switch(wp[1]){
		case 0x616369676F6C6F6B:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x616C666E696E6F6E:
		switch(wp[1]){
		case 0x74696C6962616D6D:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x616C697264617571:
		switch(wp[1]){
		case 0x73656E6C61726574:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x616C6C656373696D:
		switch(wp[1]){
		case 0x73656E73756F656E:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x616C706D6F636E75:
		switch(wp[1]){
		case 0x73656E676E696E69:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x616C706F63736964:
		switch(wp[1]){
		case 0x61696C61746E6563:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x616C70736E617274:
		switch(wp[1]){
		case 0x74696C696261746E:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x616C75636962726F:
		switch(wp[1]){
		case 0x746164726F636F74:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x616C79646E6F7073:
		switch(wp[1]){
		case 0x6361636F72687472:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x616D656869746E61:
		switch(wp[1]){
		case 0x696E6974756C6767:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x616D656C746E6567:
		switch(wp[1]){
		case 0x73656E656B696C6E:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x616D6C6F6F686373:
		switch(wp[1]){
		case 0x6C68736972657473:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x616D6D6172676E75:
		switch(wp[1]){
		case 0x73656E6C61636974:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x616D6D6F6C797473:
		switch(wp[1]){
		case 0x756F726F68706F74:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x616D6F736F747561:
		switch(wp[1]){
		case 0x6974736F6E676F74:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x616D6F74706D7973:
		switch(wp[1]){
		case 0x616369676F6C6F74:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x616D7265676E756A:
		switch(wp[1]){
		case 0x756F656361696E6E:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x616E616F746F6870:
		switch(wp[1]){
		case 0x69736F6870726F6D:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x616E696D6F6E6564:
		switch(wp[1]){
		case 0x73696C616E6F6974:
			switch(wp[2]){
			case 0x000000000000006D:return 1;
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		case 0x7A696C616E6F6974:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x616E696F746F6870:
		switch(wp[1]){
		case 0x6F69746176697463:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x616E6C796874656D:
		switch(wp[1]){
		case 0x6E656C6168746870:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x616E6F6D69746E61:
		switch(wp[1]){
		case 0x6C6C616369686372:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x616E726574657270:
		switch(wp[1]){
		case 0x73656E6C61727574:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x616E79646F646E65:
		switch(wp[1]){
		case 0x696870726F6D6F6D:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x616E79646F746365:
		switch(wp[1]){
		case 0x696870726F6D6F6D:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x616F6C6C69677261:
		switch(wp[1]){
		case 0x756F6563616E6572:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x616F6E6972626966:
		switch(wp[1]){
		case 0x756F6E696D75626C:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x616F72646E6F6863:
		switch(wp[1]){
		case 0x696F6E696D75626C:
			switch(wp[2]){
			case 0x0000000000000064:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x616F727065727269:
		switch(wp[1]){
		case 0x74696C6962616863:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x616F727070616E69:
		switch(wp[1]){
		case 0x74696C6962616863:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x616F727070616E75:
		switch(wp[1]){
		case 0x74696C6962616863:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x616F727463656C65:
		switch(wp[1]){
		case 0x61636974796C616E:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		case 0x697365687473656E:
			switch(wp[2]){
			case 0x0000000000000061:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x616F746174706573:
		switch(wp[1]){
		case 0x74616C7563697472:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x61706F6863797370:
		switch(wp[1]){
		case 0x7369676F6C6F6874:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x61706F68706C7573:
		switch(wp[1]){
		case 0x64796865646C6172:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x61706F72706E6F6E:
		switch(wp[1]){
		case 0x69747369646E6167:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x61726168636E6F6E:
		switch(wp[1]){
		case 0x6974736972657463:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x61726170696D6568:
		switch(wp[1]){
		case 0x697365687473656E:
			switch(wp[2]){
			case 0x0000000000000061:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6172617069736162:
		switch(wp[1]){
		case 0x6974616D6F726863:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6172617069746E61:
		switch(wp[1]){
		case 0x6172676F6C656C6C:
			switch(wp[2]){
			case 0x000000000000006D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6172627265707968:
		switch(wp[1]){
		case 0x6168706563796863:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		case 0x696C656B73796863:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6172636173697274:
		switch(wp[1]){
		case 0x61697261746E656D:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x617265746E756F63:
		switch(wp[1]){
		case 0x6E656D6863756F76:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		case 0x6F69746173756363:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		case 0x6F69746361727474:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		case 0x7669746361727474:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6172676F746F6870:
		switch(wp[1]){
		case 0x6163697274656D6D:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6172677265646E75:
		switch(wp[1]){
		case 0x6968736574617564:
			switch(wp[2]){
			case 0x0000000000000070:return 1;
			default:return 0;
			}
		case 0x73656E6574617564:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x61726F6572657473:
		switch(wp[1]){
		case 0x68706172676F6964:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x61726F69766C6570:
		switch(wp[1]){
		case 0x68706172676F6964:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x61726F70736F6F7A:
		switch(wp[1]){
		case 0x726F68706F69676E:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6172726574627573:
		switch(wp[1]){
		case 0x73656E73756F656E:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6172746F69646172:
		switch(wp[1]){
		case 0x636E65726170736E:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6172746F72746572:
		switch(wp[1]){
		case 0x636E65726566736E:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6172746F74737963:
		switch(wp[1]){
		case 0x6D6F746F6C656863:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6172747265707573:
		switch(wp[1]){
		case 0x6E65646E6563736E:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6172747265707968:
		switch(wp[1]){
		case 0x6E65646E6563736E:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6172747265746E69:
		switch(wp[1]){
		case 0x6F697373696D736E:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		case 0x726173726576736E:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		case 0x756F75636970736E:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6173696D6F656874:
		switch(wp[1]){
		case 0x7369706F7268746E:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x61736F68706D796C:
		switch(wp[1]){
		case 0x756F74616D6F6372:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x61737265766E6F63:
		switch(wp[1]){
		case 0x73696C616E6F6974:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x617461636F747561:
		switch(wp[1]){
		case 0x6C6C61636974796C:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6174656D696D6568:
		switch(wp[1]){
		case 0x69736F6870726F6D:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6174656D696D6573:
		switch(wp[1]){
		case 0x69736F6870726F6D:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6174656D6F747561:
		switch(wp[1]){
		case 0x69736F6870726F6D:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x61746E6174736E69:
		switch(wp[1]){
		case 0x73656E73756F656E:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x61746E65736E6F63:
		switch(wp[1]){
		case 0x73656E73756F656E:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x61746E6573736964:
		switch(wp[1]){
		case 0x73656E73756F656E:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x61746E6F636E6F6E:
		switch(wp[1]){
		case 0x73656E73756F6967:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6174736275736E75:
		switch(wp[1]){
		case 0x73656E6C6169746E:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6174737265646E75:
		switch(wp[1]){
		case 0x73656E676E69646E:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		case 0x74696C696261646E:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6174737972636564:
		switch(wp[1]){
		case 0x6F6974617A696C6C:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6174737972636572:
		switch(wp[1]){
		case 0x6F6974617A696C6C:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6175716172707573:
		switch(wp[1]){
		case 0x6E656C617669746E:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x61757165736E6F6E:
		switch(wp[1]){
		case 0x73656E73756F6963:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6175716F7461766F:
		switch(wp[1]){
		case 0x616C75676E617264:
			switch(wp[2]){
			case 0x0000000000000072:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6175737265706D69:
		switch(wp[1]){
		case 0x73656E656C626164:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		case 0x73656E656C626973:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6175737265706E75:
		switch(wp[1]){
		case 0x73656E656C626164:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		case 0x73656E656C626973:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6176617265746E69:
		switch(wp[1]){
		case 0x74696C6962616C69:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x62616865726E6F6E:
		switch(wp[1]){
		case 0x6F69746174696C69:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x62616C6C79736572:
		switch(wp[1]){
		case 0x6F69746163696669:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x62616C6F72746572:
		switch(wp[1]){
		case 0x6E6968746E697279:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6269626F74726163:
		switch(wp[1]){
		case 0x68706172676F696C:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6269666F7275656E:
		switch(wp[1]){
		case 0x69736F74616D6F72:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x62696C6C656D616C:
		switch(wp[1]){
		case 0x74616968636E6172:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x62696E6974636570:
		switch(wp[1]){
		case 0x74616968636E6172:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x62696E6E65726570:
		switch(wp[1]){
		case 0x74616968636E6172:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6269736E65736E69:
		switch(wp[1]){
		case 0x6F6974617A696C69:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x626F636973796870:
		switch(wp[1]){
		case 0x616369676F6C6F69:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x626F656863617274:
		switch(wp[1]){
		case 0x69746968636E6F72:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x626F677972657470:
		switch(wp[1]){
		case 0x74616968636E6172:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x626F68747369706F:
		switch(wp[1]){
		case 0x74616968636E6172:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x626F6C6168706563:
		switch(wp[1]){
		case 0x74616968636E6172:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x626F6C676F6D6568:
		switch(wp[1]){
		case 0x696C6968706F6E69:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		case 0x696C6F68636F6E69:
			switch(wp[2]){
			case 0x0000000000000061:return 1;
			default:return 0;
			}
		case 0x756F726566696E69:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x626F6D65646E6F6E:
		switch(wp[1]){
		case 0x6F6974617A696C69:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x626F6E6F68706973:
		switch(wp[1]){
		case 0x74616968636E6172:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x626F70697372616D:
		switch(wp[1]){
		case 0x74616968636E6172:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x626F727463656C65:
		switch(wp[1]){
		case 0x616369676F6C6F69:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		case 0x63697473696C6C61:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x626F727463657073:
		switch(wp[1]){
		case 0x697274656D6F6C6F:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x626F74616D656168:
		switch(wp[1]){
		case 0x74616968636E6172:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x626F796874686369:
		switch(wp[1]){
		case 0x6169686361727461:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x627265746E756F63:
		switch(wp[1]){
		case 0x726F777473616572:
			switch(wp[2]){
			case 0x000000000000006B:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6275736172746574:
		switch(wp[1]){
		case 0x6F69747574697473:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6275737265707573:
		switch(wp[1]){
		case 0x746169746E617473:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6275737265746E69:
		switch(wp[1]){
		case 0x6F69747574697473:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x62757469746C756D:
		switch(wp[1]){
		case 0x6574616C75637265:
			switch(wp[2]){
			case 0x0000000000000064:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6275746F72626966:
		switch(wp[1]){
		case 0x69736F6C75637265:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6361626F74796870:
		switch(wp[1]){
		case 0x676F6C6F69726574:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636165706D696E75:
		switch(wp[1]){
		case 0x73656E656C626168:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x63616C796874656D:
		switch(wp[1]){
		case 0x64696C696E617465:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x63616F6964726163:
		switch(wp[1]){
		case 0x6F746172656C6563:
			switch(wp[2]){
			case 0x0000000000000072:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6361726169736162:
		switch(wp[1]){
		case 0x69746964696F6E68:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6361727474616E75:
		switch(wp[1]){
		case 0x73656E656C626174:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6363617265646E75:
		switch(wp[1]){
		case 0x657461646F6D6D6F:
			switch(wp[2]){
			case 0x0000000000000064:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6363617265707573:
		switch(wp[1]){
		case 0x656873696C706D6F:
			switch(wp[2]){
			case 0x0000000000000064:return 1;
			default:return 0;
			}
		case 0x6F6974616C756D75:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x63656461746E6570:
		switch(wp[1]){
		case 0x6574617264796861:
			switch(wp[2]){
			case 0x0000000000000064:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x63656A7265746E69:
		switch(wp[1]){
		case 0x7A696C616E6F6974:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x63656C6C65746E69:
		switch(wp[1]){
		case 0x697473696C617574:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x63656C6C6F636E75:
		switch(wp[1]){
		case 0x73656E656C626974:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x63656D6F746F6870:
		switch(wp[1]){
		case 0x6C6C6163696E6168:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6365707369746E61:
		switch(wp[1]){
		case 0x69706F63736F7274:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6365727070616E75:
		switch(wp[1]){
		case 0x73656E656C626169:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6365736E6F636E69:
		switch(wp[1]){
		case 0x73656E6576697475:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6365736E6F636E75:
		switch(wp[1]){
		case 0x73656E6465746172:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6365746968637261:
		switch(wp[1]){
		case 0x6C6C6163696E6F74:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6365746F6E687465:
		switch(wp[1]){
		case 0x68706172676F6E68:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6365746F72647968:
		switch(wp[1]){
		case 0x7369676F6C6F6E68:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x63696361726F6874:
		switch(wp[1]){
		case 0x61696D6F7263616F:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6369646572706E75:
		switch(wp[1]){
		case 0x73656E656C626174:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636964736972756A:
		switch(wp[1]){
		case 0x73696C616E6F6974:
			switch(wp[2]){
			case 0x000000000000006D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636966696E676973:
		switch(wp[1]){
		case 0x73656E6576697461:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x63696C6275706572:
		switch(wp[1]){
		case 0x6F6974617A696E61:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x63696C6F64627573:
		switch(wp[1]){
		case 0x6C61687065636F68:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x63696D6172746C75:
		switch(wp[1]){
		case 0x73696D6568636F72:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x63696D6568636564:
		switch(wp[1]){
		case 0x6F6974617A696C61:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x63696D6F74616E61:
		switch(wp[1]){
		case 0x616369677275736F:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x63696D6F746F6870:
		switch(wp[1]){
		case 0x6568706172676F72:
			switch(wp[2]){
			case 0x0000000000000072:return 1;
			default:return 0;
			}
		case 0x6968706172676F72:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x63696E616863656D:
		switch(wp[1]){
		case 0x6163696D6568636F:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		case 0x6F6974617A696C61:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x63696E756D6D6F63:
		switch(wp[1]){
		case 0x73656E6576697461:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x63696F68706C7573:
		switch(wp[1]){
		case 0x74616C6F79687468:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6369726F74736968:
		switch(wp[1]){
		case 0x616369737968706F:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		case 0x616369746972636F:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		case 0x617275746C75636F:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		case 0x6974616D676F646F:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6369727461656874:
		switch(wp[1]){
		case 0x6F6974617A696C61:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6369737968706564:
		switch(wp[1]){
		case 0x6F6974617A696C61:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6369747261706E75:
		switch(wp[1]){
		case 0x6E697A6972616C75:
			switch(wp[2]){
			case 0x0000000000000067:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6369767265736E75:
		switch(wp[1]){
		case 0x73656E656C626165:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636E656F6375656C:
		switch(wp[1]){
		case 0x6974696C61687065:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636E656F696C6F70:
		switch(wp[1]){
		case 0x6974696C61687065:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636E656F6C65796D:
		switch(wp[1]){
		case 0x6974696C61687065:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636E6F6365727269:
		switch(wp[1]){
		case 0x74696C6962616C69:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636E6F6369746E61:
		switch(wp[1]){
		case 0x73696E6F69747065:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636E6F636F6D6568:
		switch(wp[1]){
		case 0x6F69746172746E65:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636E6F637265766F:
		switch(wp[1]){
		case 0x6F69746172746E65:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636E6F6E696D6573:
		switch(wp[1]){
		case 0x73696D726F666E6F:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636E79736F696469:
		switch(wp[1]){
		case 0x6C6C616369746172:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636F636973796870:
		switch(wp[1]){
		case 0x6C6C6163696D6568:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636F6462796C6F6D:
		switch(wp[1]){
		case 0x69676C6169647261:
			switch(wp[2]){
			case 0x0000000000000061:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636F64656C6F6863:
		switch(wp[1]){
		case 0x6870616872726F68:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636F6563696C6973:
		switch(wp[1]){
		case 0x756F657261636C61:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636F676E696E656D:
		switch(wp[1]){
		case 0x6974696C61687065:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		case 0x6974697262657265:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636F68636E6F7262:
		switch(wp[1]){
		case 0x6974696C61687065:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636F696D6F726361:
		switch(wp[1]){
		case 0x616C75636976616C:
			switch(wp[2]){
			case 0x0000000000000072:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636F6C6C69677261:
		switch(wp[1]){
		case 0x756F657261636C61:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636F6C736E617274:
		switch(wp[1]){
		case 0x6F6974617A696C61:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636F6C7570616373:
		switch(wp[1]){
		case 0x616C75636976616C:
			switch(wp[2]){
			case 0x0000000000000072:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636F6E65646F7564:
		switch(wp[1]){
		case 0x6D6F74736F747379:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636F6E6974696863:
		switch(wp[1]){
		case 0x756F657261636C61:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636F726479686564:
		switch(wp[1]){
		case 0x6E696C616479726F:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636F726561687073:
		switch(wp[1]){
		case 0x756F65636163636F:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636F726574657275:
		switch(wp[1]){
		case 0x6D6F74736F747379:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		case 0x706F63736F747379:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636F726574706964:
		switch(wp[1]){
		case 0x756F656361707261:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636F726F706D6574:
		switch(wp[1]){
		case 0x616C6C6562657265:
			switch(wp[2]){
			case 0x0000000000000072:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636F727463656C65:
		switch(wp[1]){
		case 0x6172676F69647261:
			switch(wp[2]){
			case 0x000000000000006D:return 1;
			default:return 0;
			}
		case 0x6C6C6163696D6568:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		case 0x706F63736F747379:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636F727463657073:
		switch(wp[1]){
		case 0x6F74617261706D6F:
			switch(wp[2]){
			case 0x0000000000000072:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636F736F74796870:
		switch(wp[1]){
		case 0x616369676F6C6F69:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636F73756C63636F:
		switch(wp[1]){
		case 0x6C6C616369767265:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636F74616D726564:
		switch(wp[1]){
		case 0x6974696C756C6C65:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636F746E69757161:
		switch(wp[1]){
		case 0x73696C6174696275:
			switch(wp[2]){
			case 0x000000000000006D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636F74756C706E75:
		switch(wp[1]){
		case 0x6C6C616369746172:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636F767265646E75:
		switch(wp[1]){
		case 0x656972616C756261:
			switch(wp[2]){
			case 0x0000000000000064:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x637265746E696E75:
		switch(wp[1]){
		case 0x6C626165676E6168:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x637265746E756F63:
		switch(wp[1]){
		case 0x6F69737265766E6F:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x63726963696D6573:
		switch(wp[1]){
		case 0x636E657265666D75:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6373696D69746E61:
		switch(wp[1]){
		case 0x6F6974616E656765:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x63736D7563726963:
		switch(wp[1]){
		case 0x6C65766974706972:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6375646F72706E75:
		switch(wp[1]){
		case 0x73656E656C626165:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6378657265707968:
		switch(wp[1]){
		case 0x74696C6962617469:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6379737061726170:
		switch(wp[1]){
		case 0x616369676F6C6F68:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x637973706174656D:
		switch(wp[1]){
		case 0x616369676F6C6F68:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x637973706F696469:
		switch(wp[1]){
		case 0x616369676F6C6F68:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6461747369746E61:
		switch(wp[1]){
		case 0x61697265646C6F68:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6465636572706E75:
		switch(wp[1]){
		case 0x73656E6465746E65:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x64656F6863797370:
		switch(wp[1]){
		case 0x616E6F6974616375:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6465727065746E61:
		switch(wp[1]){
		case 0x61746E656D616369:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x64696F69726F6863:
		switch(wp[1]){
		case 0x6974696C6379636F:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6469736E6F636E69:
		switch(wp[1]){
		case 0x73656E6574617265:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6469736E6F636E75:
		switch(wp[1]){
		case 0x73656E6574617265:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x646E617461677265:
		switch(wp[1]){
		case 0x696870726F6D6F72:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x646E697265707573:
		switch(wp[1]){
		case 0x636E657265666669:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x646E697265746E69:
		switch(wp[1]){
		case 0x636E65646E657065:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x646F6461746E6570:
		switch(wp[1]){
		case 0x6F72646568616365:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x646F676E6972796D:
		switch(wp[1]){
		case 0x69746974616D7265:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x646F68636E6F7262:
		switch(wp[1]){
		case 0x6F69746174616C69:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x646F6963656F6964:
		switch(wp[1]){
		case 0x756F6870726F6D69:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x646F6D6D6F636361:
		switch(wp[1]){
		case 0x73656E6576697461:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x646F6D7265746E69:
		switch(wp[1]){
		case 0x6F69746163696669:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x646F72646E6F6863:
		switch(wp[1]){
		case 0x6968706F72747379:
			switch(wp[2]){
			case 0x0000000000000061:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x646F727069746E61:
		switch(wp[1]){
		case 0x73696E6F69746375:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x646F727463656C65:
		switch(wp[1]){
		case 0x6974616D6F6C7069:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		case 0x6F697469736F7065:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		case 0x7669737265707369:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x646F7463616C6167:
		switch(wp[1]){
		case 0x6574656D69736E65:
			switch(wp[2]){
			case 0x0000000000000072:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6472616369726570:
		switch(wp[1]){
		case 0x617275656C706F69:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		case 0x6870616872726F69:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		case 0x696E657268706F69:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		case 0x697365746E656369:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x647265746E756F63:
		switch(wp[1]){
		case 0x6E696C7069637369:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		case 0x6F69746174757065:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		case 0x746C756369666669:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x64726F6172747865:
		switch(wp[1]){
		case 0x73656E6972616E69:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x64726F6275736E69:
		switch(wp[1]){
		case 0x73656E6574616E69:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x64756A6572706E75:
		switch(wp[1]){
		case 0x73656E6C61696369:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6475746974616C70:
		switch(wp[1]){
		case 0x6F6974617A696E69:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		case 0x73656E73756F6E69:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x64757469746C756D:
		switch(wp[1]){
		case 0x73656E73756F6E69:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6479686F6D756C61:
		switch(wp[1]){
		case 0x7469636C61636F72:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6479686F7274696E:
		switch(wp[1]){
		case 0x69726F6C68636F72:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6479686F74706570:
		switch(wp[1]){
		case 0x69726F6C68636F72:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65626D657265766F:
		switch(wp[1]){
		case 0x6E656D6873696C6C:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6563616F64696D61:
		switch(wp[1]){
		case 0x6E6F6E6568706F74:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6563616F6E696D61:
		switch(wp[1]){
		case 0x6E6F6E6568706F74:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6563617369746E61:
		switch(wp[1]){
		case 0x73696C61746F6472:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65636E6572647968:
		switch(wp[1]){
		case 0x6C65636F6C616870:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65636E6F63627573:
		switch(wp[1]){
		case 0x7269616E6F697373:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65636E6F63657270:
		switch(wp[1]){
		case 0x6C6465746172746E:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65636E6F63736964:
		switch(wp[1]){
		case 0x73656E676E697472:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65636F65616C6170:
		switch(wp[1]){
		case 0x68706172676F6E61:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65636F6863697274:
		switch(wp[1]){
		case 0x697361696C616870:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65637365646E6F63:
		switch(wp[1]){
		case 0x73656E657669736E:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		case 0x73656E676E69646E:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6563737573657270:
		switch(wp[1]){
		case 0x74696C6962697470:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6564617265746E65:
		switch(wp[1]){
		case 0x616369676F6C6F6E:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		case 0x6968706172676F6E:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65646572706E6F6E:
		switch(wp[1]){
		case 0x6F6974616E697473:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6564696F7473616D:
		switch(wp[1]){
		case 0x697365746E65636F:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		case 0x756F6D617571736F:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65646E6563736564:
		switch(wp[1]){
		case 0x697473696C61746E:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65646F646970656C:
		switch(wp[1]){
		case 0x756F65636172646E:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65646F65616C6170:
		switch(wp[1]){
		case 0x69676F6C6F72646E:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65646F68636F7274:
		switch(wp[1]){
		case 0x756F65636172646E:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6564726574746174:
		switch(wp[1]){
		case 0x73696E6F696C616D:
			switch(wp[2]){
			case 0x000000000000006D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65666669646E6F6E:
		switch(wp[1]){
		case 0x6C626169746E6572:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		case 0x6F697461746E6572:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65666D7563726963:
		switch(wp[1]){
		case 0x6C6C6169746E6572:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65666F63696C6973:
		switch(wp[1]){
		case 0x756F6E6967757272:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6567617461727473:
		switch(wp[1]){
		case 0x6C6C61636974616D:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6567617574706573:
		switch(wp[1]){
		case 0x73696E616972616E:
			switch(wp[2]){
			case 0x000000000000006D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65676E69746E6F63:
		switch(wp[1]){
		case 0x73656E6C6169746E:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65676F6863797370:
		switch(wp[1]){
		case 0x6C6C61636974656E:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65676F69626D7973:
		switch(wp[1]){
		case 0x6C6C61636974656E:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65676F6D61746F70:
		switch(wp[1]){
		case 0x756F6563616E6F74:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65676F7265746568:
		switch(wp[1]){
		case 0x73656E73756F656E:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65676F74656E696B:
		switch(wp[1]){
		case 0x6C6C61636974656E:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65676F7A69686373:
		switch(wp[1]){
		case 0x6C6C61636974656E:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656863696C627570:
		switch(wp[1]){
		case 0x73656E6465747261:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656863736F747561:
		switch(wp[1]){
		case 0x6163697473616964:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6568656C62656566:
		switch(wp[1]){
		case 0x73656E6465747261:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6568656C62756F64:
		switch(wp[1]){
		case 0x73656E6465747261:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6568656C676E6973:
		switch(wp[1]){
		case 0x73656E6465747261:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6568656C706D6973:
		switch(wp[1]){
		case 0x73656E6465747261:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6568656C746E6567:
		switch(wp[1]){
		case 0x73656E6465747261:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65686572706D6F63:
		switch(wp[1]){
		case 0x73656E657669736E:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		case 0x74696C696269736E:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65686E656461656C:
		switch(wp[1]){
		case 0x73656E6465747261:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65686E656B6F7262:
		switch(wp[1]){
		case 0x73656E6465747261:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65686F65616C6170:
		switch(wp[1]){
		case 0x676F6C6F74657072:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6568706F74796870:
		switch(wp[1]){
		case 0x616369676F6C6F6E:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65687265646E6574:
		switch(wp[1]){
		case 0x73656E6465747261:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6568726574746962:
		switch(wp[1]){
		case 0x73656E6465747261:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6568726F7263696D:
		switch(wp[1]){
		case 0x6163697274656D6F:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65687461706D7973:
		switch(wp[1]){
		case 0x696E6F746F636974:
			switch(wp[2]){
			case 0x0000000000000061:return 1;
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6568746968706D61:
		switch(wp[1]){
		case 0x6C6C616369727461:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6568746E61636176:
		switch(wp[1]){
		case 0x73656E6465747261:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6568746E616E7973:
		switch(wp[1]){
		case 0x616369676F6C6F72:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6568746E65726170:
		switch(wp[1]){
		case 0x73656E6C61636974:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6568746F63726173:
		switch(wp[1]){
		case 0x6369747565706172:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6568746F69646172:
		switch(wp[1]){
		case 0x6369747565706172:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		case 0x7369747565706172:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6568746F6C696870:
		switch(wp[1]){
		case 0x61636968706F736F:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6568746F6D656863:
		switch(wp[1]){
		case 0x6369747565706172:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6568746F72626976:
		switch(wp[1]){
		case 0x6369747565706172:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6568746F72647968:
		switch(wp[1]){
		case 0x6369747565706172:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6568746F7275656E:
		switch(wp[1]){
		case 0x6369747565706172:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6568746F74656964:
		switch(wp[1]){
		case 0x6369747565706172:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6568746F746F6870:
		switch(wp[1]){
		case 0x6369747565706172:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6568747265707968:
		switch(wp[1]){
		case 0x697365676C616D72:
			switch(wp[2]){
			case 0x0000000000000061:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65687475616E6F6E:
		switch(wp[1]){
		case 0x6F6974616369746E:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6568776F6C6C6F68:
		switch(wp[1]){
		case 0x73656E6465747261:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6568776F7272616E:
		switch(wp[1]){
		case 0x73656E6465747261:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6569727465727269:
		switch(wp[1]){
		case 0x73656E656C626176:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656A6F7274736167:
		switch(wp[1]){
		case 0x6D6F74736F6E756A:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656C6363656E6170:
		switch(wp[1]){
		case 0x6163697473616973:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656C6363656E6F6E:
		switch(wp[1]){
		case 0x6163697473616973:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656C6363656F7270:
		switch(wp[1]){
		case 0x6163697473616973:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656C6561746C6F76:
		switch(wp[1]){
		case 0x6574656D6F727463:
			switch(wp[2]){
			case 0x0000000000000072:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656C656F7263696D:
		switch(wp[1]){
		case 0x6973796C6F727463:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		case 0x706F63736F727463:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656C656F746F6870:
		switch(wp[1]){
		case 0x6C6C616369727463:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656C656F7A656970:
		switch(wp[1]){
		case 0x6C6C616369727463:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656C65736E617274:
		switch(wp[1]){
		case 0x6F697461746E656D:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656C6C696D657270:
		switch(wp[1]){
		case 0x73696E616972616E:
			switch(wp[2]){
			case 0x000000000000006D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656C6C6F636F7270:
		switch(wp[1]){
		case 0x6974736976697463:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656C6F72746E6563:
		switch(wp[1]){
		case 0x756F656361646970:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656C706D6F636E69:
		switch(wp[1]){
		case 0x73656E656C626174:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656C746E65676E75:
		switch(wp[1]){
		case 0x6B696C6E616D6F77:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		case 0x73656E696C6E616D:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656C796874656964:
		switch(wp[1]){
		case 0x6E696D616964656E:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656C797069726570:
		switch(wp[1]){
		case 0x69746962656C6870:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656D61696C726170:
		switch(wp[1]){
		case 0x73656E697261746E:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656D656369726570:
		switch(wp[1]){
		case 0x6973616C636F746E:
			switch(wp[2]){
			case 0x0000000000000061:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656D656C706D6F63:
		switch(wp[1]){
		case 0x73656E697261746E:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656D696C706D6F63:
		switch(wp[1]){
		case 0x73656E697261746E:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656D6F64696D6573:
		switch(wp[1]){
		case 0x6F69746163697473:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656D6F65616C6170:
		switch(wp[1]){
		case 0x676F6C6F726F6574:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656D6F6D616E7964:
		switch(wp[1]){
		case 0x696870726F6D6174:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656D6F6D72656874:
		switch(wp[1]){
		case 0x696870726F6D6174:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656D7265666E6F6E:
		switch(wp[1]){
		case 0x74696C696261746E:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656D747261706564:
		switch(wp[1]){
		case 0x6F6974617A69746E:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656D756772616E75:
		switch(wp[1]){
		case 0x6C6576697461746E:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656E6975676E6173:
		switch(wp[1]){
		case 0x616C75637361766F:
			switch(wp[2]){
			case 0x0000000000000072:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656E6E6169746E61:
		switch(wp[1]){
		case 0x73696E6F69746178:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656E6E6F63736964:
		switch(wp[1]){
		case 0x73656E6576697463:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656E6F6475657370:
		switch(wp[1]){
		case 0x61726574706F7275:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656E6F68706C7573:
		switch(wp[1]){
		case 0x69656C6168746870:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656E6F726170616C:
		switch(wp[1]){
		case 0x6D6F746365726870:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656E6F7469726570:
		switch(wp[1]){
		case 0x616C756373756D6F:
			switch(wp[2]){
			case 0x0000000000000072:return 1;
			default:return 0;
			}
		case 0x697365746E65636F:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656E706F72647968:
		switch(wp[1]){
		case 0x61726F68746F6D75:
			switch(wp[2]){
			case 0x0000000000000078:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656F656863617274:
		switch(wp[1]){
		case 0x6165676168706F73:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656F727463656C65:
		switch(wp[1]){
		case 0x69736F6D736F646E:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		case 0x69746F6D736F646E:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		case 0x6F69746361727478:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656F74656E67616D:
		switch(wp[1]){
		case 0x616369727463656C:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6570697571736573:
		switch(wp[1]){
		case 0x73696E61696C6164:
			switch(wp[2]){
			case 0x000000000000006D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65706D6968637261:
		switch(wp[1]){
		case 0x697473696C616972:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65706F6475657370:
		switch(wp[1]){
		case 0x7669746365707372:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65706F65766C6570:
		switch(wp[1]){
		case 0x6974696E6F746972:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65706F69766C6570:
		switch(wp[1]){
		case 0x6974696E6F746972:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65706F6D72656874:
		switch(wp[1]){
		case 0x6F6974617274656E:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		case 0x74696369646F6972:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65706F6D75656E70:
		switch(wp[1]){
		case 0x6974696E6F746972:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		case 0x7569647261636972:
			switch(wp[2]){
			case 0x000000000000006D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65706F6E65726870:
		switch(wp[1]){
		case 0x6169647261636972:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65706F6E72657473:
		switch(wp[1]){
		case 0x6169647261636972:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65706F7275656C70:
		switch(wp[1]){
		case 0x6165616E6F746972:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		case 0x6169647261636972:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65706F74616D6568:
		switch(wp[1]){
		case 0x7569647261636972:
			switch(wp[2]){
			case 0x000000000000006D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65706F7461706568:
		switch(wp[1]){
		case 0x6974696E6F746972:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x657073616D656168:
		switch(wp[1]){
		case 0x706F63736F727463:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6570736572657270:
		switch(wp[1]){
		case 0x74696C6962617463:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6570736572736964:
		switch(wp[1]){
		case 0x73656E6C75667463:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6570736F6E656F63:
		switch(wp[1]){
		case 0x6C6C616369666963:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6570736F7263696D:
		switch(wp[1]){
		case 0x706F63736F727463:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6570736F72746572:
		switch(wp[1]){
		case 0x73656E6576697463:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6570736F72746E69:
		switch(wp[1]){
		case 0x73656E6576697463:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6570736F746F6870:
		switch(wp[1]){
		case 0x706F63736F727463:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x657075737265766F:
		switch(wp[1]){
		case 0x756F697469747372:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65707968696D6568:
		switch(wp[1]){
		case 0x6973656874736572:
			switch(wp[2]){
			case 0x0000000000000061:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6572616863636173:
		switch(wp[1]){
		case 0x69736F7264696870:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65726172746E6F63:
		switch(wp[1]){
		case 0x6E617274736E6F6D:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6572636E61706564:
		switch(wp[1]){
		case 0x6F6974617A697461:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6572656369746E61:
		switch(wp[1]){
		case 0x73696C61696E6F6D:
			switch(wp[2]){
			case 0x000000000000006D:return 1;
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x657265746E696E75:
		switch(wp[1]){
		case 0x73656E676E697473:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x657265746E756F63:
		switch(wp[1]){
		case 0x636E656963696666:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		case 0x6E656C6176697571:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		case 0x6E656D656761676E:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		case 0x6E656D6574696378:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		case 0x6F697469736F7078:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		case 0x736169737568746E:
			switch(wp[2]){
			case 0x000000000000006D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6572676F72706D69:
		switch(wp[1]){
		case 0x73656E6576697373:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6572676F72706E75:
		switch(wp[1]){
		case 0x73656E6576697373:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65726F626D6F6872:
		switch(wp[1]){
		case 0x616C75676E617463:
			switch(wp[2]){
			case 0x0000000000000072:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65726F6765746163:
		switch(wp[1]){
		case 0x6C6C61636974616D:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65726F6964726163:
		switch(wp[1]){
		case 0x726F746172697073:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6572706572657270:
		switch(wp[1]){
		case 0x6F697461746E6573:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65727065726E6F6E:
		switch(wp[1]){
		case 0x6F697461746E6573:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		case 0x76697461746E6573:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x657270657273696D:
		switch(wp[1]){
		case 0x6F697461746E6573:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		case 0x76697461746E6573:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6572706D6F636E69:
		switch(wp[1]){
		case 0x6C657669736E6568:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		case 0x6C676E69646E6568:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		case 0x74696C6962697373:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6572706D6F636E75:
		switch(wp[1]){
		case 0x6C657669736E6568:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		case 0x6C676E69646E6568:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x657270706173696D:
		switch(wp[1]){
		case 0x6C657669736E6568:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		case 0x6C676E69646E6568:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6572707265746E69:
		switch(wp[1]){
		case 0x73656E656C626174:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6572726F63657270:
		switch(wp[1]){
		case 0x636E65646E6F7073:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6572726F636E6F6E:
		switch(wp[1]){
		case 0x636E65646E6F7073:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6572726F63736964:
		switch(wp[1]){
		case 0x636E65646E6F7073:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6572747369746E61:
		switch(wp[1]){
		case 0x6163636F636F7470:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		case 0x6963636F636F7470:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		case 0x7563636F636F7470:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65727568706C7573:
		switch(wp[1]){
		case 0x657375666675736F:
			switch(wp[2]){
			case 0x0000000000000064:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x657365726F666E75:
		switch(wp[1]){
		case 0x73656E656C626165:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65736F6475657370:
		switch(wp[1]){
		case 0x616E6F697461736E:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x657373617265766F:
		switch(wp[1]){
		case 0x73656E6576697472:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6573736F70657270:
		switch(wp[1]){
		case 0x73656E676E697373:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6573736F72636E75:
		switch(wp[1]){
		case 0x6C62616E696D6178:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6574616D69746E61:
		switch(wp[1]){
		case 0x697473696C616972:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65746172666E6F63:
		switch(wp[1]){
		case 0x6F6974617A696E72:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6574636172616863:
		switch(wp[1]){
		case 0x616369676F6C6F72:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		case 0x73656E7373656C72:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6574656465726F66:
		switch(wp[1]){
		case 0x6F6974616E696D72:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x657465647265766F:
		switch(wp[1]){
		case 0x6F6974616E696D72:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6574656D656C6574:
		switch(wp[1]){
		case 0x68706172676F726F:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6574696E69666E69:
		switch(wp[1]){
		case 0x73656E6C616D6973:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65746C7564616E75:
		switch(wp[1]){
		case 0x73656E6465746172:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65746D7563726963:
		switch(wp[1]){
		case 0x6169727473657272:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65746E756F636E75:
		switch(wp[1]){
		case 0x65636E616C616272:
			switch(wp[2]){
			case 0x0000000000000064:return 1;
			default:return 0;
			}
		case 0x6C6261646E616D72:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65746F6475657370:
		switch(wp[1]){
		case 0x756F72656D617274:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65746F6976756C66:
		switch(wp[1]){
		case 0x6169727473657272:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6574706F656C6F63:
		switch(wp[1]){
		case 0x616369676F6C6F72:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6574706F6874726F:
		switch(wp[1]){
		case 0x616369676F6C6F72:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6574706F72696863:
		switch(wp[1]){
		case 0x756F6C6968706F72:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6574706F7275656E:
		switch(wp[1]){
		case 0x616369676F6C6F72:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6574706F746F7270:
		switch(wp[1]){
		case 0x747968706F646972:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x657473656C6F6863:
		switch(wp[1]){
		case 0x756F74616D6F7461:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6574736973707968:
		switch(wp[1]){
		case 0x6C61687065636F6E:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6574736F69726570:
		switch(wp[1]){
		case 0x616C6F65766C616F:
			switch(wp[2]){
			case 0x0000000000000072:return 1;
			default:return 0;
			}
		case 0x6974696C65796D6F:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6574737973657270:
		switch(wp[1]){
		case 0x6C6C61636974616D:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6574737974616C70:
		switch(wp[1]){
		case 0x696C61687065636E:
			switch(wp[2]){
			case 0x0000000000000061:return 1;
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65757165736E6F63:
		switch(wp[1]){
		case 0x73656E6C6169746E:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6575716E6F636E75:
		switch(wp[1]){
		case 0x73656E656C626172:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x657571737265766F:
		switch(wp[1]){
		case 0x73656E6873696D61:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x657664616D696E61:
		switch(wp[1]){
		case 0x73656E6576697372:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6576656474736F70:
		switch(wp[1]){
		case 0x61746E656D706F6C:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65766572696D6573:
		switch(wp[1]){
		case 0x726F746172656272:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6576696C65646E75:
		switch(wp[1]){
		case 0x73656E656C626172:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65766E6F63657270:
		switch(wp[1]){
		case 0x616E6F6974617372:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65766E6F636E6F6E:
		switch(wp[1]){
		case 0x616E6F6974617372:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65766F6365726E75:
		switch(wp[1]){
		case 0x73656E656C626172:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65766F6365727269:
		switch(wp[1]){
		case 0x73656E656C626172:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6669646E656C7073:
		switch(wp[1]){
		case 0x73656E73756F7265:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x66696C706D657865:
		switch(wp[1]){
		case 0x616E6F6974616369:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6669746E65696373:
		switch(wp[1]){
		case 0x6974656F706F6369:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6669747265636E75:
		switch(wp[1]){
		case 0x73656E656C626169:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x66697473756A6E75:
		switch(wp[1]){
		case 0x73656E656C626169:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x666E6F6368637261:
		switch(wp[1]){
		case 0x74696E7265746172:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x666F6563696C6973:
		switch(wp[1]){
		case 0x6968746170736C65:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6673697461736E75:
		switch(wp[1]){
		case 0x73656E656C626169:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6761726870616964:
		switch(wp[1]){
		case 0x6C6C61636974616D:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x67617270796C6F70:
		switch(wp[1]){
		case 0x6C6C61636974616D:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6764656C776F6E6B:
		switch(wp[1]){
		case 0x73656E656C626165:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6765646F7275656E:
		switch(wp[1]){
		case 0x7669746172656E65:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6765727265646E75:
		switch(wp[1]){
		case 0x6F69746172747369:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6765727265707573:
		switch(wp[1]){
		case 0x6F69746172656E65:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		case 0x6F69746172747369:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		case 0x7669746172656E65:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6765746E69736964:
		switch(wp[1]){
		case 0x73696E6F69746172:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x676775736F747561:
		switch(wp[1]){
		case 0x73696E6F69747365:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6769617274736E75:
		switch(wp[1]){
		case 0x726177726F667468:
			switch(wp[2]){
			case 0x0000000000000064:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x67696D736E617274:
		switch(wp[1]){
		case 0x73696E6F69746172:
			switch(wp[2]){
			case 0x000000000000006D:return 1;
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6769707265707573:
		switch(wp[1]){
		case 0x6F697461746E656D:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6769707265707968:
		switch(wp[1]){
		case 0x6F697461746E656D:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x676E6168706D796C:
		switch(wp[1]){
		case 0x6D6F637261736F69:
			switch(wp[2]){
			case 0x0000000000000061:return 1;
			default:return 0;
			}
		case 0x6D6F726269666F69:
			switch(wp[2]){
			case 0x0000000000000061:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x676F6874696E726F:
		switch(wp[1]){
		case 0x6968706172676F65:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x676F6D656874656D:
		switch(wp[1]){
		case 0x696D656E69626F6C:
			switch(wp[2]){
			case 0x0000000000000061:return 1;
			default:return 0;
			}
		case 0x6972756E69626F6C:
			switch(wp[2]){
			case 0x0000000000000061:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x676F726265726563:
		switch(wp[1]){
		case 0x696E6F696C676E61:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x676F726479686564:
		switch(wp[1]){
		case 0x6F6974617A696E65:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x676F746172726573:
		switch(wp[1]){
		case 0x756F6C75646E616C:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6772656E656E7973:
		switch(wp[1]){
		case 0x6C6C616369747369:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x67726F6172746E69:
		switch(wp[1]){
		case 0x6F6974617A696E61:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x67726F7265646E75:
		switch(wp[1]){
		case 0x6F6974617A696E61:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x67726F7265707573:
		switch(wp[1]){
		case 0x6F6974617A696E61:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x67756F6874657270:
		switch(wp[1]){
		case 0x73656E6C75667468:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6863617262627573:
		switch(wp[1]){
		case 0x696C616870656379:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6863696461726170:
		switch(wp[1]){
		case 0x6F7A6E6562726F6C:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68636F636964656D:
		switch(wp[1]){
		case 0x6163696772757269:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68636F6572657473:
		switch(wp[1]){
		case 0x6C6C6163696D6F72:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68636F6D73696573:
		switch(wp[1]){
		case 0x706172676F6E6F72:
			switch(wp[2]){
			case 0x0000000000000068:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68636F72656C6373:
		switch(wp[1]){
		case 0x69746964696F726F:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68636F7265746568:
		switch(wp[1]){
		case 0x657A6974616D6F72:
			switch(wp[2]){
			case 0x0000000000000064:return 1;
			default:return 0;
			}
		case 0x756F6564796D616C:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68636F7265746E65:
		switch(wp[1]){
		case 0x6C7968706F726F6C:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68637261696D6573:
		switch(wp[1]){
		case 0x6172757463657469:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x686769727265766F:
		switch(wp[1]){
		case 0x73656E73756F6574:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6867756F726F6874:
		switch(wp[1]){
		case 0x73656E676E696F67:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x686F636967617274:
		switch(wp[1]){
		case 0x696D6F63696F7265:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x686F727463656C65:
		switch(wp[1]){
		case 0x687461706F656D6F:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		case 0x69736174736F6D65:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x686F727463657073:
		switch(wp[1]){
		case 0x706172676F696C65:
			switch(wp[2]){
			case 0x0000000000000068:return 1;
			default:return 0;
			}
		case 0x706F63736F696C65:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6870616E696D6573:
		switch(wp[1]){
		case 0x6E6964696C616874:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		case 0x6E696D616C796874:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x687065736F786568:
		switch(wp[1]){
		case 0x736174616870736F:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6870696365646E69:
		switch(wp[1]){
		case 0x74696C6962617265:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6870696365646E75:
		switch(wp[1]){
		case 0x74696C6962617265:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x687069646F696874:
		switch(wp[1]){
		case 0x6E696D616C796E65:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68706F6375616C67:
		switch(wp[1]){
		case 0x6F6974617A696E61:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68706F65616C6170:
		switch(wp[1]){
		case 0x7369676F6C6F7479:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68706F6572657473:
		switch(wp[1]){
		case 0x68706172676F746F:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		case 0x706F637361746E61:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68706F6863797370:
		switch(wp[1]){
		case 0x69676F6C6F697379:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68706F68706C7573:
		switch(wp[1]){
		case 0x756F726F6870736F:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68706F6973796870:
		switch(wp[1]){
		case 0x6568706F736F6C69:
			switch(wp[2]){
			case 0x0000000000000072:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68706F6D6F726863:
		switch(wp[1]){
		case 0x68706172676F746F:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68706F6E65687073:
		switch(wp[1]){
		case 0x756F6563616C6C79:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68706F6E656D7968:
		switch(wp[1]){
		case 0x756F6563616C6C79:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68706F6E6F726863:
		switch(wp[1]){
		case 0x68706172676F746F:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68706F726F6C6863:
		switch(wp[1]){
		case 0x756F6563616C6C79:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68706F737265766F:
		switch(wp[1]){
		case 0x6574616369747369:
			switch(wp[2]){
			case 0x0000000000000064:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68706F7461726563:
		switch(wp[1]){
		case 0x756F6563616C6C79:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6870736F68706564:
		switch(wp[1]){
		case 0x6F6974617A69726F:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6870736F68706572:
		switch(wp[1]){
		case 0x6F6974617A69726F:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6870736F68706964:
		switch(wp[1]){
		case 0x6E696D616968746F:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x687265646E756C62:
		switch(wp[1]){
		case 0x73656E6465646165:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x687265746E756F63:
		switch(wp[1]){
		case 0x69736568746F7079:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6873696B6174636F:
		switch(wp[1]){
		case 0x6F72646568617865:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68746565616C6170:
		switch(wp[1]){
		case 0x616369676F6C6F6E:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6874656D61786568:
		switch(wp[1]){
		case 0x6E696D616E656C79:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6874656D6E617963:
		switch(wp[1]){
		case 0x69626F6C676F6D65:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6874656D74656361:
		switch(wp[1]){
		case 0x64696C696E616C79:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6874656F656C6170:
		switch(wp[1]){
		case 0x616369676F6C6F6E:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68746863696E6170:
		switch(wp[1]){
		case 0x756F676168706F79:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x687468636F747561:
		switch(wp[1]){
		case 0x73656E73756F6E6F:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x687468706F747561:
		switch(wp[1]){
		case 0x706F63736F6D6C61:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6874697261676F6C:
		switch(wp[1]){
		case 0x6C6C61636974656D:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68746E616C696870:
		switch(wp[1]){
		case 0x6C6C616369706F72:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68746E696D6C6568:
		switch(wp[1]){
		case 0x736F69726F70736F:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68746F6863797370:
		switch(wp[1]){
		case 0x6974756570617265:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68746F696C626962:
		switch(wp[1]){
		case 0x6974756570617265:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68746F6973796870:
		switch(wp[1]){
		case 0x6974756570617265:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68746F6E69746361:
		switch(wp[1]){
		case 0x6974756570617265:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68746F6E6F726863:
		switch(wp[1]){
		case 0x6574656D6F6D7265:
			switch(wp[2]){
			case 0x0000000000000072:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x687473656F676C61:
		switch(wp[1]){
		case 0x6574656D6F697365:
			switch(wp[2]){
			case 0x0000000000000072:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6879786F62726163:
		switch(wp[1]){
		case 0x69626F6C676F6D65:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x696164616B63616C:
		switch(wp[1]){
		case 0x73656E6C61636973:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x69616C6365727269:
		switch(wp[1]){
		case 0x73656E656C62616D:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x69616C7078656E75:
		switch(wp[1]){
		case 0x73656E656C62616E:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6961746E6F636E75:
		switch(wp[1]){
		case 0x73656E656C62616E:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6961747265637361:
		switch(wp[1]){
		case 0x73656E656C62616E:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x696261686E696E75:
		switch(wp[1]){
		case 0x73656E656C626174:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6962696878656E75:
		switch(wp[1]){
		case 0x73656E656C626174:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6963617265707968:
		switch(wp[1]){
		case 0x6972756E696D6164:
			switch(wp[2]){
			case 0x0000000000000061:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x69636E69766F7270:
		switch(wp[1]){
		case 0x6F6974617A696C61:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x69636F7373616E75:
		switch(wp[1]){
		case 0x73656E6576697461:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x696372656D6D6F63:
		switch(wp[1]){
		case 0x6F6974617A696C61:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6963736E6F636E75:
		switch(wp[1]){
		case 0x6C73756F69746E65:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x69646172746E6F63:
		switch(wp[1]){
		case 0x6F6974636E697473:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		case 0x73656E6576697463:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		case 0x73656E69726F7463:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		case 0x736975676E697473:
			switch(wp[2]){
			case 0x0000000000000068:return 1;
			default:return 0;
			}
		case 0x766974636E697473:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x69646E697265766F:
		switch(wp[1]){
		case 0x73696C6175646976:
			switch(wp[2]){
			case 0x000000000000006D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x69646F6863797370:
		switch(wp[1]){
		case 0x636974736F6E6761:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x69647574656C6176:
		switch(wp[1]){
		case 0x73696E616972616E:
			switch(wp[2]){
			case 0x000000000000006D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x696475746974616C:
		switch(wp[1]){
		case 0x73696E616972616E:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6964757469747461:
		switch(wp[1]){
		case 0x73696E616972616E:
			switch(wp[2]){
			case 0x000000000000006D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6965636E6F636E69:
		switch(wp[1]){
		case 0x73656E656C626176:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6965636E6F636E75:
		switch(wp[1]){
		case 0x73656E656C626176:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6965637265706D69:
		switch(wp[1]){
		case 0x73656E656C626176:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6967616D69746E61:
		switch(wp[1]){
		case 0x6163697461727473:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x69676C6F6F686373:
		switch(wp[1]){
		case 0x73656E6873696C72:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x69676E6169726570:
		switch(wp[1]){
		case 0x6974696C6F68636F:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x69676F6C68706564:
		switch(wp[1]){
		case 0x6F69746163697473:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x69676F6C6F656874:
		switch(wp[1]){
		case 0x6163696874656F63:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		case 0x61727574616E6F63:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6968636F7263696D:
		switch(wp[1]){
		case 0x756F726574706F72:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x696874756F727473:
		switch(wp[1]){
		case 0x61696C656D61636F:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x696B6F73736F6C67:
		switch(wp[1]){
		case 0x697465687473656E:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x696C617265707573:
		switch(wp[1]){
		case 0x6F697461746E656D:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x696C617265707968:
		switch(wp[1]){
		case 0x6F697461746E656D:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x696C636F7263696D:
		switch(wp[1]){
		case 0x69676F6C6F74616D:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x696C656874697065:
		switch(wp[1]){
		case 0x616C756373756D6F:
			switch(wp[2]){
			case 0x0000000000000072:return 1;
			default:return 0;
			}
		case 0x6D6F7473616C626F:
			switch(wp[2]){
			case 0x0000000000000061:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x696C666E6F636E75:
		switch(wp[1]){
		case 0x73656E676E697463:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x696C6F6D6F726863:
		switch(wp[1]){
		case 0x68706172676F6874:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x696C706963736964:
		switch(wp[1]){
		case 0x73656E656C62616E:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		case 0x73696E616972616E:
			switch(wp[2]){
			case 0x000000000000006D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x696D616F7A616964:
		switch(wp[1]){
		case 0x6E657A6E65626F6E:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x696D6D6F63627573:
		switch(wp[1]){
		case 0x6968737972617373:
			switch(wp[2]){
			case 0x0000000000000070:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x696D6F6475657370:
		switch(wp[1]){
		case 0x616972657473696E:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x696D726F66696E75:
		switch(wp[1]){
		case 0x73696E6169726174:
			switch(wp[2]){
			case 0x000000000000006D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x696E6167726F6572:
		switch(wp[1]){
		case 0x73696E6F6974617A:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x696E656D69746E61:
		switch(wp[1]){
		case 0x6963636F636F676E:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x696F6C756373756D:
		switch(wp[1]){
		case 0x616E69747365746E:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x696F707061736964:
		switch(wp[1]){
		case 0x73656E676E69746E:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x696F726563736976:
		switch(wp[1]){
		case 0x726F74696269686E:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x696F726574657275:
		switch(wp[1]){
		case 0x616E69747365746E:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x696F727463656C65:
		switch(wp[1]){
		case 0x616972747375646E:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		case 0x6F69746167697272:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6970656475657370:
		switch(wp[1]){
		case 0x6163696870617267:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x697065696863726F:
		switch(wp[1]){
		case 0x6974696D79646964:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6970656F73726F64:
		switch(wp[1]){
		case 0x61656C68636F7274:
			switch(wp[2]){
			case 0x0000000000000072:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6970736172746C75:
		switch(wp[1]){
		case 0x73696C6175746972:
			switch(wp[2]){
			case 0x000000000000006D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6970736E6F636E69:
		switch(wp[1]){
		case 0x73656E73756F7563:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6970736E6F636E75:
		switch(wp[1]){
		case 0x73656E73756F7563:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6970737265707573:
		switch(wp[1]){
		case 0x74696C6175746972:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6970737573657270:
		switch(wp[1]){
		case 0x73656E73756F6963:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6972637365646E69:
		switch(wp[1]){
		case 0x73656E656C626162:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x697263736E617274:
		switch(wp[1]){
		case 0x6C6C616E6F697470:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x697265706F6C7061:
		switch(wp[1]){
		case 0x756F74616D6F7473:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6972657078656E75:
		switch(wp[1]){
		case 0x73656E6465636E65:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x69726574616D6564:
		switch(wp[1]){
		case 0x6F6974617A696C61:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x697265746E756F63:
		switch(wp[1]){
		case 0x6F6974616369646E:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		case 0x6F69746174697272:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x69726F68706C7573:
		switch(wp[1]){
		case 0x7461656C6F6E6963:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6972706F72707061:
		switch(wp[1]){
		case 0x73656E6576697461:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x69727265746E6F6E:
		switch(wp[1]){
		case 0x74696C6169726F74:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x697274616D6F7270:
		switch(wp[1]){
		case 0x73696C61696E6F6D:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6972746F6972796D:
		switch(wp[1]){
		case 0x756F656361696863:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6972746F746F6870:
		switch(wp[1]){
		case 0x6974616D6F726863:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6972747375646E69:
		switch(wp[1]){
		case 0x6F6974617A696C61:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x697279786F736564:
		switch(wp[1]){
		case 0x69656C63756E6F62:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x697365766F736176:
		switch(wp[1]){
		case 0x6D6F7463656C7563:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x69736F7274786564:
		switch(wp[1]){
		case 0x6C6C61727473696E:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x69736F74636F7270:
		switch(wp[1]){
		case 0x69746964696F6D67:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6973726576696E75:
		switch(wp[1]){
		case 0x73696E6169726174:
			switch(wp[2]){
			case 0x000000000000006D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x69737361706D6F63:
		switch(wp[1]){
		case 0x73656E6574616E6F:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6973736170736964:
		switch(wp[1]){
		case 0x73656E6574616E6F:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6973736572706D69:
		switch(wp[1]){
		case 0x74696C6962616E6F:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6974616665646E69:
		switch(wp[1]){
		case 0x73656E656C626167:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6974616D6F67797A:
		switch(wp[1]){
		case 0x61746962726F6F63:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		case 0x61746E6F72666F63:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6974616E69746E61:
		switch(wp[1]){
		case 0x697473696C616E6F:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6974617269746E61:
		switch(wp[1]){
		case 0x697473696C616E6F:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x69746174736F7270:
		switch(wp[1]){
		case 0x6163697365766F63:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6974636172706D69:
		switch(wp[1]){
		case 0x73656E656C626163:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6974636172706E75:
		switch(wp[1]){
		case 0x73656E656C626163:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6974636566726570:
		switch(wp[1]){
		case 0x6E656D657A696E6F:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x697463656C666564:
		switch(wp[1]){
		case 0x6F6974617A696E6F:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6974636E61736E75:
		switch(wp[1]){
		case 0x6C73756F696E6F6D:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x69746C756D657270:
		switch(wp[1]){
		case 0x6F69746163696C70:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x69746E6F63736964:
		switch(wp[1]){
		case 0x73656E73756F7567:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		case 0x73656E73756F756E:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6974706572727573:
		switch(wp[1]){
		case 0x73656E73756F6974:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x697472617265766F:
		switch(wp[1]){
		case 0x74696C6169636966:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6974726F706F7270:
		switch(wp[1]){
		case 0x73656E6574616E6F:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		case 0x74696C6962616E6F:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6974736564657270:
		switch(wp[1]){
		case 0x73696E616972616E:
			switch(wp[2]){
			case 0x000000000000006D:return 1;
			default:return 0;
			}
		case 0x73696E6F6974616E:
			switch(wp[2]){
			case 0x000000000000006D:return 1;
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6974736567677573:
		switch(wp[1]){
		case 0x74696C6962616E6F:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6974736575716E75:
		switch(wp[1]){
		case 0x73656E676E696E6F:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		case 0x74696C6962616E6F:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6974737265707573:
		switch(wp[1]){
		case 0x73656E73756F6974:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6974756C6F766572:
		switch(wp[1]){
		case 0x6E656D657A696E6F:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		case 0x73656E6972616E6F:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6976616C63627573:
		switch(wp[1]){
		case 0x72616C6C6978616F:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x69766172746E6F63:
		switch(wp[1]){
		case 0x6F6974616369646E:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6978656C68637261:
		switch(wp[1]){
		case 0x6568706172676F63:
			switch(wp[2]){
			case 0x0000000000000072:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x69786F746E696E75:
		switch(wp[1]){
		case 0x73656E6465746163:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6B6C61747265766F:
		switch(wp[1]){
		case 0x73656E6576697461:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6B6F727463656C65:
		switch(wp[1]){
		case 0x636974616D656E69:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6162696E6E6163:
		switch(wp[1]){
		case 0x6C6C616369747369:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C61636973796870:
		switch(wp[1]){
		case 0x6C6C616369747369:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C61676172747361:
		switch(wp[1]){
		case 0x696F68706163736F:
			switch(wp[2]){
			case 0x0000000000000064:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C61676F7263696D:
		switch(wp[1]){
		case 0x6574656D6F6E6176:
			switch(wp[2]){
			case 0x0000000000000072:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C61676F746F6870:
		switch(wp[1]){
		case 0x706172676F6E6176:
			switch(wp[2]){
			case 0x0000000000000068:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C61686F6574736F:
		switch(wp[1]){
		case 0x6973657265747369:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C61687065636E65:
		switch(wp[1]){
		case 0x69736F6372616E6F:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		case 0x697370696C68746F:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		case 0x6973796C6169646F:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		case 0x6974696C65796D6F:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6168746870616E:
		switch(wp[1]){
		case 0x6974656361656E65:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C61697265706D69:
		switch(wp[1]){
		case 0x6C6C616369747369:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6169726574616D:
		switch(wp[1]){
		case 0x6C6C616369747369:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C616E6F6974616E:
		switch(wp[1]){
		case 0x6C6C616369747369:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C616E6F69746172:
		switch(wp[1]){
		case 0x6C6C616369747369:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C616E7265746170:
		switch(wp[1]){
		case 0x6C6C616369747369:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C616F656C63756E:
		switch(wp[1]){
		case 0x6972756E696D7562:
			switch(wp[2]){
			case 0x0000000000000061:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C616F6C68707974:
		switch(wp[1]){
		case 0x6972756E696D7562:
			switch(wp[2]){
			case 0x0000000000000061:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C61706F7263696D:
		switch(wp[1]){
		case 0x676F6C6F746E6F65:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C61706F74796870:
		switch(wp[1]){
		case 0x676F6C6F746E6F65:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C61736F696C6563:
		switch(wp[1]){
		case 0x6D6F746F676E6970:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C626F6E616C6162:
		switch(wp[1]){
		case 0x656872726F6E6E65:
			switch(wp[2]){
			case 0x0000000000000061:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C626F7265746568:
		switch(wp[1]){
		case 0x6C6C616369747361:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C626F7274736167:
		switch(wp[1]){
		case 0x656872726F6E6E65:
			switch(wp[2]){
			case 0x0000000000000061:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C62756F72746E75:
		switch(wp[1]){
		case 0x73656E656D6F7365:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C636F65616C6170:
		switch(wp[1]){
		case 0x676F6C6F74616D69:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C65686F746F6870:
		switch(wp[1]){
		case 0x6968706172676F69:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C656F6D72656874:
		switch(wp[1]){
		case 0x7469636972746365:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C656F6E69746361:
		switch(wp[1]){
		case 0x7469636972746365:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C65727265746E69:
		switch(wp[1]){
		case 0x6968736E6F697461:
			switch(wp[2]){
			case 0x0000000000000070:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C65746E69627573:
		switch(wp[1]){
		case 0x6169746E6567696C:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C65747964617262:
		switch(wp[1]){
		case 0x6973656E69636F65:
			switch(wp[2]){
			case 0x0000000000000061:return 1;
			default:return 0;
			}
		case 0x6973656E696B6F65:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C666F6475657370:
		switch(wp[1]){
		case 0x6F69746175746375:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C666F6572657473:
		switch(wp[1]){
		case 0x706F63736F726F75:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C67676169746E61:
		switch(wp[1]){
		case 0x6E6974616E697475:
			switch(wp[2]){
			case 0x0000000000000067:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6767616F747561:
		switch(wp[1]){
		case 0x6E6974616E697475:
			switch(wp[2]){
			case 0x0000000000000067:return 1;
			default:return 0;
			}
		case 0x6F6974616E697475:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C68636172746574:
		switch(wp[1]){
		case 0x6E616874656F726F:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C68636F6D6F7262:
		switch(wp[1]){
		case 0x6F6E6568706F726F:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C68636F746F6870:
		switch(wp[1]){
		case 0x6F6974616E69726F:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C69636E6F636E75:
		switch(wp[1]){
		case 0x73656E6465746169:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C696870696D6573:
		switch(wp[1]){
		case 0x61636968706F736F:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C69687069746E61:
		switch(wp[1]){
		case 0x61636968706F736F:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6968706F656874:
		switch(wp[1]){
		case 0x69706F7268746E61:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6B6F696C626962:
		switch(wp[1]){
		case 0x696E616D6F747065:
			switch(wp[2]){
			case 0x0000000000000061:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6C617473797263:
		switch(wp[1]){
		case 0x6163696D6568636F:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		case 0x61696C6C7968706F:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		case 0x6974656E67616D6F:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		case 0x74696C6962617A69:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6C65746E696564:
		switch(wp[1]){
		case 0x7A696C6175746365:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6C65746E696E75:
		switch(wp[1]){
		case 0x73696C6175746365:
			switch(wp[2]){
			case 0x000000000000006D:return 1;
			default:return 0;
			}
		case 0x74696C6175746365:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		case 0x74696C6962696769:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6C696D74736F70:
		switch(wp[1]){
		case 0x73696C61696E6E65:
			switch(wp[2]){
			case 0x000000000000006D:return 1;
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6C697265707573:
		switch(wp[1]){
		case 0x6F69746172747375:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6C69736E617274:
		switch(wp[1]){
		case 0x6F6974616E696D75:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6F636F7263696D:
		switch(wp[1]){
		case 0x697274656D69726F:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6F636F746F6870:
		switch(wp[1]){
		case 0x6968706172676F6C:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6F636F746F7270:
		switch(wp[1]){
		case 0x756F726574706F65:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6F637265707573:
		switch(wp[1]){
		case 0x6F697461696E6D75:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6F637265746E69:
		switch(wp[1]){
		case 0x6F697461696E6D75:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		case 0x6F6974617A696E6F:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6F686369726570:
		switch(wp[1]){
		case 0x6974697473796365:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6F68746870616E:
		switch(wp[1]){
		case 0x696E6F68706C7573:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6F6C7573706163:
		switch(wp[1]){
		case 0x616C756369746E65:
			switch(wp[2]){
			case 0x0000000000000072:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6F6D616C616874:
		switch(wp[1]){
		case 0x616C756369746E65:
			switch(wp[2]){
			case 0x0000000000000072:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6F706F7263696D:
		switch(wp[1]){
		case 0x6F6974617A697261:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6F707265707968:
		switch(wp[1]){
		case 0x6962616C6C797379:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6F726574737968:
		switch(wp[1]){
		case 0x6D6F746F72617061:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6F727463656C65:
		switch(wp[1]){
		case 0x74696C6962617A79:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		case 0x746972746F687469:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6F737265707573:
		switch(wp[1]){
		case 0x6F69746174696369:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6F737369646E69:
		switch(wp[1]){
		case 0x73656E656C626176:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6F746164756163:
		switch(wp[1]){
		case 0x616C756369746E65:
			switch(wp[2]){
			case 0x0000000000000072:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6F746174736168:
		switch(wp[1]){
		case 0x74616C6F65636E61:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C706D65746E6F63:
		switch(wp[1]){
		case 0x73656E6576697461:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C706D69736E6F6E:
		switch(wp[1]){
		case 0x6F69746163696669:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C706F6974636573:
		switch(wp[1]){
		case 0x68706172676F6E61:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C72617069746E61:
		switch(wp[1]){
		case 0x7261746E656D6169:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C736E6172746E75:
		switch(wp[1]){
		case 0x74696C6962617461:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C7461736E617274:
		switch(wp[1]){
		case 0x6C6C616369746E61:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C756269746E656C:
		switch(wp[1]){
		case 0x756F656361697261:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C7563616E726576:
		switch(wp[1]){
		case 0x6F6974617A697261:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C75636972727563:
		switch(wp[1]){
		case 0x6F6974617A697261:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C756369746E656C:
		switch(wp[1]){
		case 0x696D616C6168746F:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C756369746E6F6D:
		switch(wp[1]){
		case 0x61656469726F7069:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C75636974726170:
		switch(wp[1]){
		case 0x6F6974617A697261:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C75637265627574:
		switch(wp[1]){
		case 0x6F6974617A696E69:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		case 0x6F6974617A697261:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		case 0x736F646F6E6F7461:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		case 0x756F656361697261:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C7568706F726373:
		switch(wp[1]){
		case 0x756F656361697261:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C75736F72647968:
		switch(wp[1]){
		case 0x696E6179636F6870:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C796E6568706964:
		switch(wp[1]){
		case 0x6E6964696E617567:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C79736F7274696E:
		switch(wp[1]){
		case 0x69727568706C7573:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D61727265746E69:
		switch(wp[1]){
		case 0x6F69746163696669:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D61746E6F636E69:
		switch(wp[1]){
		case 0x73656E6574616E69:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D65726172746C75:
		switch(wp[1]){
		case 0x6F69746172656E75:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D65726874797265:
		switch(wp[1]){
		case 0x69676C616C656D6F:
			switch(wp[2]){
			case 0x0000000000000061:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D65727265707573:
		switch(wp[1]){
		case 0x6F69746172656E75:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D65746E6F636E75:
		switch(wp[1]){
		case 0x756F656E61726F70:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6769736F656C69:
		switch(wp[1]){
		case 0x6D6F74736F64696F:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D696C6363616572:
		switch(wp[1]){
		case 0x6F6974617A697461:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D696C6363616E75:
		switch(wp[1]){
		case 0x6F6974617A697461:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D69786F72707061:
		switch(wp[1]){
		case 0x73656E6576697461:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6C61687468706F:
		switch(wp[1]){
		case 0x616369706F63736F:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		case 0x697369687468706F:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		case 0x6974697275656E6F:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		case 0x697469736F796D6F:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6C61726574696C:
		switch(wp[1]){
		case 0x73656E6465646E69:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6D697265707968:
		switch(wp[1]){
		case 0x6F6974617A696E75:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6D6F6363616E75:
		switch(wp[1]){
		case 0x6C676E697461646F:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6D6F63656C6574:
		switch(wp[1]){
		case 0x6F69746163696E75:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6D757274736F6E:
		switch(wp[1]){
		case 0x6968737265676E6F:
			switch(wp[2]){
			case 0x0000000000000070:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6D79736F6E6F6D:
		switch(wp[1]){
		case 0x6C6C616369727465:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6D7973796C6F70:
		switch(wp[1]){
		case 0x6C6C616369727465:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6F636361657270:
		switch(wp[1]){
		case 0x6E656D6873696C70:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6F6363616E6F6E:
		switch(wp[1]){
		case 0x6E656D6873696C70:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6F636572657270:
		switch(wp[1]){
		case 0x6F697461646E656D:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6F6365726E6F6E:
		switch(wp[1]){
		case 0x6F697461646E656D:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6F636572736964:
		switch(wp[1]){
		case 0x6F697461646E656D:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6F636965646966:
		switch(wp[1]){
		case 0x656E6F697373696D:
			switch(wp[2]){
			case 0x0000000000000072:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6F636967617274:
		switch(wp[1]){
		case 0x61726F7473617069:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6F63696D656863:
		switch(wp[1]){
		case 0x6163696E61686365:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6F636973796870:
		switch(wp[1]){
		case 0x6163696E61686365:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6F637265707573:
		switch(wp[1]){
		case 0x6F697461646E656D:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6F637265746E69:
		switch(wp[1]){
		case 0x6C626163696E756D:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		case 0x6F746163696E756D:
			switch(wp[2]){
			case 0x0000000000000072:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6F6378656E6F6E:
		switch(wp[1]){
		case 0x6C626163696E756D:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6F677972657470:
		switch(wp[1]){
		case 0x616C756269646E61:
			switch(wp[2]){
			case 0x0000000000000072:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6F69746E616E65:
		switch(wp[1]){
		case 0x6C73756F6870726F:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6F6C6168706563:
		switch(wp[1]){
		case 0x697469676E696E65:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6F6C6168706D6F:
		switch(wp[1]){
		case 0x697265746E657365:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6F6C656870656E:
		switch(wp[1]){
		case 0x6C6C616369727465:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6F6C6C6978616D:
		switch(wp[1]){
		case 0x616C756269646E61:
			switch(wp[2]){
			case 0x0000000000000072:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6F6C756373756D:
		switch(wp[1]){
		case 0x756F6E6172626D65:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6F6D616C616874:
		switch(wp[1]){
		case 0x72616C6C696D6D61:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6F6D6779687073:
		switch(wp[1]){
		case 0x697274656D6F6E61:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6F6E61706D7974:
		switch(wp[1]){
		case 0x616C756269646E61:
			switch(wp[2]){
			case 0x0000000000000072:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6F6E61766C6167:
		switch(wp[1]){
		case 0x6C6C616369727465:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6F6E65646E6170:
		switch(wp[1]){
		case 0x616E6F6974616E69:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6F6E65646E6F6E:
		switch(wp[1]){
		case 0x616E6F6974616E69:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6F6E65646F7270:
		switch(wp[1]){
		case 0x616E6F6974616E69:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6F726265726563:
		switch(wp[1]){
		case 0x697469676E696E65:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6F726574737968:
		switch(wp[1]){
		case 0x6D6F7463656D6F79:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6F7268636E6170:
		switch(wp[1]){
		case 0x6F6974617A697461:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6F726F706D6574:
		switch(wp[1]){
		case 0x616C756269646E61:
			switch(wp[2]){
			case 0x0000000000000072:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6F727463656C65:
		switch(wp[1]){
		case 0x6163696E61686365:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		case 0x61636974656E6761:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		case 0x6772756C6C617465:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		case 0x6968706172676F79:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		case 0x6C6C616369727465:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6F727463657073:
		switch(wp[1]){
		case 0x706F63736F726369:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6F74656E67616D:
		switch(wp[1]){
		case 0x6C6C616369727465:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6F746E65677261:
		switch(wp[1]){
		case 0x6C6C616369727465:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D726168706E6F6E:
		switch(wp[1]){
		case 0x6163697475656361:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D7265646F707968:
		switch(wp[1]){
		case 0x6973796C636F7461:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D72657465646E69:
		switch(wp[1]){
		case 0x73656E6574616E69:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D7265746E696E75:
		switch(wp[1]){
		case 0x73656E6465747469:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D72657472617571:
		switch(wp[1]){
		case 0x6968737265747361:
			switch(wp[2]){
			case 0x0000000000000070:return 1;
			default:return 0;
			}
		case 0x6B696C7265747361:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D7361746E616870:
		switch(wp[1]){
		case 0x68706172676F7461:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		case 0x6C6C6169726F6761:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D736E6172746E69:
		switch(wp[1]){
		case 0x74696C6962617475:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D74736F70627573:
		switch(wp[1]){
		case 0x6968737265747361:
			switch(wp[2]){
			case 0x0000000000000070:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D75637269636E69:
		switch(wp[1]){
		case 0x6F69747069726373:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		case 0x73656E7463657073:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D75637269636E75:
		switch(wp[1]){
		case 0x6C62616269726373:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		case 0x6F69747069726373:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		case 0x73656E6465736963:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		case 0x73656E7463657073:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D756C696D656863:
		switch(wp[1]){
		case 0x636E656373656E69:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D756C6F62697274:
		switch(wp[1]){
		case 0x636E656373656E69:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D756C6F69646172:
		switch(wp[1]){
		case 0x636E656373656E69:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D756C6F746F6870:
		switch(wp[1]){
		case 0x636E656373656E69:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D756E7265707573:
		switch(wp[1]){
		case 0x6968737972617265:
			switch(wp[2]){
			case 0x0000000000000070:return 1;
			default:return 0;
			}
		case 0x73656E6972617265:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D79686F7263696D:
		switch(wp[1]){
		case 0x6F726574706F6E65:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D79686F746F7270:
		switch(wp[1]){
		case 0x61726574706F6E65:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		case 0x6F726574706F6E65:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D796C6F6C65796D:
		switch(wp[1]){
		case 0x6D6F69676E616870:
			switch(wp[2]){
			case 0x0000000000000061:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D796C6F7274656D:
		switch(wp[1]){
		case 0x697469676E616870:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E61637265707573:
		switch(wp[1]){
		case 0x6F6974617A696E6F:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E616C6C69737570:
		switch(wp[1]){
		case 0x73656E73756F6D69:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E616D6F7263696D:
		switch(wp[1]){
		case 0x6F6974616C757069:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E616F6475657370:
		switch(wp[1]){
		case 0x6978616C79687061:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E616F68706C7573:
		switch(wp[1]){
		case 0x756F696E6F6D6974:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E616F7265746E65:
		switch(wp[1]){
		case 0x69736F6D6F747361:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E616F7274736167:
		switch(wp[1]){
		case 0x69736F6D6F747361:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E617265746F7270:
		switch(wp[1]){
		case 0x73656E73756F7264:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E61726665727269:
		switch(wp[1]){
		case 0x73656E656C626967:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E61727261776E75:
		switch(wp[1]){
		case 0x73656E656C626174:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E617274656C6574:
		switch(wp[1]){
		case 0x6F69747069726373:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6174736E696F63:
		switch(wp[1]){
		case 0x6C73756F656E6174:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E61766461736964:
		switch(wp[1]){
		case 0x6C73756F65676174:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E65626F6874726F:
		switch(wp[1]){
		case 0x6E6F6E6975716F7A:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E65626F6E696D61:
		switch(wp[1]){
		case 0x64796865646C617A:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6563736E617274:
		switch(wp[1]){
		case 0x73696C61746E6564:
			switch(wp[2]){
			case 0x000000000000006D:return 1;
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		case 0x74696C61746E6564:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		case 0x7A696C61746E6564:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E656469746C756D:
		switch(wp[1]){
		case 0x6574616C75636974:
			switch(wp[2]){
			case 0x0000000000000064:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E65646E6F636E75:
		switch(wp[1]){
		case 0x73656E656C626173:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E65646F656C6170:
		switch(wp[1]){
		case 0x7369676F6C6F7264:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E65646F67696C6F:
		switch(wp[1]){
		case 0x6D6F696C676F7264:
			switch(wp[2]){
			case 0x0000000000000061:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E65646F746F6870:
		switch(wp[1]){
		case 0x6574656D6F746973:
			switch(wp[2]){
			case 0x0000000000000072:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E65667265746E69:
		switch(wp[1]){
		case 0x6F69746172747365:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E65676F6C696870:
		switch(wp[1]){
		case 0x73656E6576697469:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E65676F6D697270:
		switch(wp[1]){
		case 0x6968736572757469:
			switch(wp[2]){
			case 0x0000000000000070:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E65686572706572:
		switch(wp[1]){
		case 0x73656E656C626973:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E656963736E6F63:
		switch(wp[1]){
		case 0x73656E73756F6974:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E65697264617571:
		switch(wp[1]){
		case 0x6C6974756D75696E:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E656C6269746E61:
		switch(wp[1]){
		case 0x6967616872726F6E:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E656D6172636173:
		switch(wp[1]){
		case 0x73696E6169726174:
			switch(wp[2]){
			case 0x000000000000006D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E656D6572637865:
		switch(wp[1]){
		case 0x6C73756F69746974:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E656D6964697274:
		switch(wp[1]){
		case 0x74696C616E6F6973:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E656D6D6F636572:
		switch(wp[1]){
		case 0x73656E656C626164:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E656D6D6F636E75:
		switch(wp[1]){
		case 0x73656E656C626164:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E656D6F6E656870:
		switch(wp[1]){
		case 0x6F6974617A696C61:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E656D7265666E75:
		switch(wp[1]){
		case 0x73656E656C626174:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E656F726170616C:
		switch(wp[1]){
		case 0x6D6F74736F726574:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E656F7274736167:
		switch(wp[1]){
		case 0x6D6F74736F726574:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E65707369646E69:
		switch(wp[1]){
		case 0x73656E656C626173:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E65736572706572:
		switch(wp[1]){
		case 0x72616E6F69746174:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		case 0x73696E6F69746174:
			switch(wp[2]){
			case 0x000000000000006D:return 1;
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E65736572706E75:
		switch(wp[1]){
		case 0x73656E656C626174:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E65737265707573:
		switch(wp[1]){
		case 0x697473696C617573:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		case 0x73656E73756F7573:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E65746572706E75:
		switch(wp[1]){
		case 0x73656E73756F6974:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E65746E6F636E75:
		switch(wp[1]){
		case 0x73656E73756F6974:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E65766572706E75:
		switch(wp[1]){
		case 0x73656E656C626174:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E65766E6F636564:
		switch(wp[1]){
		case 0x7A696C616E6F6974:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E65766E6F636E75:
		switch(wp[1]){
		case 0x73696C616E6F6974:
			switch(wp[2]){
			case 0x000000000000006D:return 1;
			default:return 0;
			}
		case 0x74696C616E6F6974:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		case 0x7A696C616E6F6974:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6769647265766F:
		switch(wp[1]){
		case 0x73656E6465696669:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E676F6365727269:
		switch(wp[1]){
		case 0x74696C6962617A69:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E676F746379726F:
		switch(wp[1]){
		case 0x6C6C61636974736F:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E68636E616C7073:
		switch(wp[1]){
		case 0x6174656C656B736F:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		case 0x69737968706F7061:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		case 0x6978617268706D65:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		case 0x6F74656C656B736F:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6967616D696E75:
		switch(wp[1]){
		case 0x73656E6576697461:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E696769726F6E75:
		switch(wp[1]){
		case 0x73656E6576697461:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E696C65726E6F6E:
		switch(wp[1]){
		case 0x6E656D6873697571:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E696D616F707968:
		switch(wp[1]){
		case 0x696D65646963616F:
			switch(wp[2]){
			case 0x0000000000000061:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E696D6461627573:
		switch(wp[1]){
		case 0x6F69746172747369:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E696D6461657270:
		switch(wp[1]){
		case 0x6F69746172747369:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		case 0x7669746172747369:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E696D64616C616D:
		switch(wp[1]){
		case 0x6F69746172747369:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E696D64616E6F6E:
		switch(wp[1]){
		case 0x7669746172747369:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E696D64616F7270:
		switch(wp[1]){
		case 0x6F69746172747369:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E696D646173696D:
		switch(wp[1]){
		case 0x6F69746172747369:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E696D7265746564:
		switch(wp[1]){
		case 0x73656E6576697461:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E696F6475657370:
		switch(wp[1]){
		case 0x6E65646E65706564:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E696F7070616E75:
		switch(wp[1]){
		case 0x73656E656C626174:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E696F7265746568:
		switch(wp[1]){
		case 0x6F6974616C75636F:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E69726574657270:
		switch(wp[1]){
		case 0x616E6F69746E6574:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E697369646E6F6E:
		switch(wp[1]){
		case 0x6F69746172676574:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E69747369646E69:
		switch(wp[1]){
		case 0x6C62616873697567:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		case 0x73656E6576697463:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E69747369646E75:
		switch(wp[1]){
		case 0x6C62616873697567:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E697A6F746F6870:
		switch(wp[1]){
		case 0x6968706172676F63:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6F636172746C75:
		switch(wp[1]){
		case 0x7369746176726573:
			switch(wp[2]){
			case 0x000000000000006D:return 1;
			default:return 0;
			}
		case 0x7669746176726573:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6F636172747865:
		switch(wp[1]){
		case 0x6574616C6C657473:
			switch(wp[2]){
			case 0x0000000000000064:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6F636572657270:
		switch(wp[1]){
		case 0x6F697461696C6963:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6F6365726E6F6E:
		switch(wp[1]){
		case 0x6F697461696C6963:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6F6365726F7270:
		switch(wp[1]){
		case 0x6F697461696C6963:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6F6365746E6570:
		switch(wp[1]){
		case 0x6173736F6C676F74:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6F636F746F6870:
		switch(wp[1]){
		case 0x7469766974637564:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6F637265707573:
		switch(wp[1]){
		case 0x6F6974616D726966:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		case 0x6F69747562697274:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		case 0x7469766974637564:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		case 0x7669746176726573:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6F637265707968:
		switch(wp[1]){
		case 0x7369746176726573:
			switch(wp[2]){
			case 0x000000000000006D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6F637265746E69:
		switch(wp[1]){
		case 0x616E6F6973736566:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6F63736974696C:
		switch(wp[1]){
		case 0x6F69746174736574:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6F676972746E75:
		switch(wp[1]){
		case 0x6163697274656D6F:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6F68636F707968:
		switch(wp[1]){
		case 0x6C6C616361697264:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6F697461636F76:
		switch(wp[1]){
		case 0x6F6974617A696C61:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6F6974616E6564:
		switch(wp[1]){
		case 0x6F6974617A696C61:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6F697461726564:
		switch(wp[1]){
		case 0x6F6974617A696C61:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6F6D6561647565:
		switch(wp[1]){
		case 0x6C6C616369747369:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6F6D7265707968:
		switch(wp[1]){
		case 0x6C62616C6C79736F:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6F707365726E75:
		switch(wp[1]){
		case 0x73656E656C626973:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6F707365727269:
		switch(wp[1]){
		case 0x73656E656C626973:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6F7073696D6573:
		switch(wp[1]){
		case 0x6C73756F656E6174:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6F726269726570:
		switch(wp[1]){
		case 0x6974696C6F696863:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6F726863616E61:
		switch(wp[1]){
		case 0x61636974616D7369:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		case 0x6C6C616369747369:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6F7268636E7973:
		switch(wp[1]){
		case 0x6C6C616369747369:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6F726874797265:
		switch(wp[1]){
		case 0x69736F7479636F65:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6F737265706564:
		switch(wp[1]){
		case 0x6F6974617A696C61:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6F737265706572:
		switch(wp[1]){
		case 0x6F6974617A696C61:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6F737265706D69:
		switch(wp[1]){
		case 0x6F69746163696669:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		case 0x6F6974617A696C61:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E706F6964726163:
		switch(wp[1]){
		case 0x706172676F6D7565:
			switch(wp[2]){
			case 0x0000000000000068:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E7079686F747561:
		switch(wp[1]){
		case 0x6F6974617A69746F:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E72657075736E75:
		switch(wp[1]){
		case 0x7A696C6172757461:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E7265746E756F63:
		switch(wp[1]){
		case 0x636E616D6F726365:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E756D6D6F636E69:
		switch(wp[1]){
		case 0x6C65766974616369:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		case 0x74696C6962616369:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E756D6D6F636E75:
		switch(wp[1]){
		case 0x6C65766974616369:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E756D7265746E69:
		switch(wp[1]){
		case 0x74696C6170696369:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E756F627265766F:
		switch(wp[1]){
		case 0x73656E73756F6574:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E756F6363616E75:
		switch(wp[1]){
		case 0x73656E656C626174:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E7574726F70706F:
		switch(wp[1]){
		case 0x6C6C616369747369:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F626F65616C6170:
		switch(wp[1]){
		case 0x6C6C6163696E6174:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F63616D72616870:
		switch(wp[1]){
		case 0x6163696D616E7964:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		case 0x61636974736F6E67:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		case 0x69736F6E67616964:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		case 0x6C6C616369676F6C:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6365646F747561:
		switch(wp[1]){
		case 0x6F697469736F706D:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F63697461706568:
		switch(wp[1]){
		case 0x72616E6F6D6C7570:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F636978656C6E75:
		switch(wp[1]){
		case 0x6163696870617267:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F636F6475657370:
		switch(wp[1]){
		case 0x616E6F64656C7974:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		case 0x6F69746167756A6E:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		case 0x766974697465706D:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F636F6D6F726863:
		switch(wp[1]){
		case 0x68706172676F6C6C:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F636F74636F7270:
		switch(wp[1]){
		case 0x706F63736F6E6F6C:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F63736964657270:
		switch(wp[1]){
		case 0x636E61756E69746E:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		case 0x6E656D6567617275:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		case 0x6E656D746E65746E:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F637369646E6F6E:
		switch(wp[1]){
		case 0x636E61756E69746E:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F64696D61727970:
		switch(wp[1]){
		case 0x6974616D73697270:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		case 0x7461756E65747461:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F64696F726F6863:
		switch(wp[1]){
		case 0x6974696E69746572:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F64696F7473616D:
		switch(wp[1]){
		case 0x696C6172656D7568:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F65676F6E687465:
		switch(wp[1]){
		case 0x6163696870617267:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F65676F74796870:
		switch(wp[1]){
		case 0x6163696870617267:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F656E61636C6163:
		switch(wp[1]){
		case 0x616C75636976616E:
			switch(wp[2]){
			case 0x0000000000000072:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F657261636C6163:
		switch(wp[1]){
		case 0x756F6563696C6973:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6572707265766F:
		switch(wp[1]){
		case 0x6F69746170756363:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6574656D6E6F6E:
		switch(wp[1]){
		case 0x616369676F6C6F72:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F66657265746E61:
		switch(wp[1]){
		case 0x616E6F6974616D72:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F66696E756E6F6E:
		switch(wp[1]){
		case 0x6169726174696D72:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F666E6F636E6F6E:
		switch(wp[1]){
		case 0x6163697473696D72:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F666F726F6C6863:
		switch(wp[1]){
		case 0x6F6974617A696D72:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F676168706F7365:
		switch(wp[1]){
		case 0x6F69746163696C70:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F676E69706C6173:
		switch(wp[1]){
		case 0x696F677972657470:
			switch(wp[2]){
			case 0x0000000000000064:return 1;
			default:return 0;
			}
		case 0x6D6F74616D6F7473:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F676E7972616870:
		switch(wp[1]){
		case 0x6165676E7972616C:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		case 0x616968636E617262:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		case 0x69736F7461726563:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		case 0x69736F746172656B:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		case 0x6973796C61726170:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		case 0x72616C6C6978616D:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		case 0x756E6974616C6170:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F68636E616C656D:
		switch(wp[1]){
		case 0x73656E73756F696C:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F68636F6574736F:
		switch(wp[1]){
		case 0x687461706F72646E:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		case 0x747968706F72646E:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F68636F72626966:
		switch(wp[1]){
		case 0x616574736F72646E:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F68706F67696C6F:
		switch(wp[1]){
		case 0x6972757461687073:
			switch(wp[2]){
			case 0x0000000000000061:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F68706F6874696C:
		switch(wp[1]){
		case 0x7275766172676F74:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F68706F7263696D:
		switch(wp[1]){
		case 0x6968706172676F74:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F68706F72747361:
		switch(wp[1]){
		case 0x6968706172676F74:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6874726F6E6F6E:
		switch(wp[1]){
		case 0x6163696870617267:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F69626F656C6170:
		switch(wp[1]){
		case 0x68706172676F6567:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F69626F6E6D696C:
		switch(wp[1]){
		case 0x6C6C616369676F6C:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F69626F7263696D:
		switch(wp[1]){
		case 0x6C6C616369676F6C:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6968636E617262:
		switch(wp[1]){
		case 0x74616E6F6D6C7570:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F69687361666E75:
		switch(wp[1]){
		case 0x73656E656C62616E:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6968746F727561:
		switch(wp[1]){
		case 0x69727568706C7573:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F696E61706D6F63:
		switch(wp[1]){
		case 0x73656E656C62616E:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F69726574636162:
		switch(wp[1]){
		case 0x676F6C6F68746170:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		case 0x69736F6E67616964:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		case 0x6973796C6F6D6568:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		case 0x6C6C616369676F6C:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F69726F74736968:
		switch(wp[1]){
		case 0x6163696870617267:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6973656C636365:
		switch(wp[1]){
		case 0x6C6C616369676F6C:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F69736E65706E75:
		switch(wp[1]){
		case 0x73656E656C62616E:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F697463656A626F:
		switch(wp[1]){
		case 0x73656E656C62616E:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F69746E656D6E75:
		switch(wp[1]){
		case 0x73656E656C62616E:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F69747065637865:
		switch(wp[1]){
		case 0x73656E656C62616E:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6C617274737561:
		switch(wp[1]){
		case 0x6E69636568746970:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6C656863617274:
		switch(wp[1]){
		case 0x6974616D67657262:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6C68636F6E6F6D:
		switch(wp[1]){
		case 0x6E616874656D6F72:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		case 0x6E657A6E65626F72:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6C6870756C6F70:
		switch(wp[1]){
		case 0x69746F696F627369:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6C6870796C6F70:
		switch(wp[1]){
		case 0x73696F696F627369:
			switch(wp[2]){
			case 0x000000000000006D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6C6D7563726963:
		switch(wp[1]){
		case 0x72616E6F69747563:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		case 0x73696E6F69747563:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6C6F7473697261:
		switch(wp[1]){
		case 0x756F656361696863:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6C756369736576:
		switch(wp[1]){
		case 0x616968636E6F7262:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		case 0x756F6E7265766163:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6C79646E6F7073:
		switch(wp[1]){
		case 0x697365687473696C:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		case 0x69736F6E67616964:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		case 0x697465687473696C:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		case 0x7369706172656874:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6D6167796C6F70:
		switch(wp[1]){
		case 0x756F6963656F6964:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6D657265636E75:
		switch(wp[1]){
		case 0x73656E73756F696E:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6D657473697065:
		switch(wp[1]){
		case 0x6C6C616369676F6C:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6D6974636E6173:
		switch(wp[1]){
		case 0x73656E73756F696E:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6D6D6F63736964:
		switch(wp[1]){
		case 0x73656E73756F6964:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6D726168657270:
		switch(wp[1]){
		case 0x73656E73756F696E:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6D796C676E6967:
		switch(wp[1]){
		case 0x69646F7268747261:
			switch(wp[2]){
			case 0x0000000000000061:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6E6965746F7270:
		switch(wp[1]){
		case 0x65676F6D6F726863:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6E696D6F646261:
		switch(wp[1]){
		case 0x6F69726574736F70:
			switch(wp[2]){
			case 0x0000000000000072:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6E6B6361657270:
		switch(wp[1]){
		case 0x6E656D6764656C77:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6E6B63616E6F6E:
		switch(wp[1]){
		case 0x6E656D6764656C77:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6E6F6D6F726361:
		switch(wp[1]){
		case 0x6974616D6D617267:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6E6F6D75656E70:
		switch(wp[1]){
		case 0x697361696874696C:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		case 0x69736F6872726963:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		case 0x69736F6E616C656D:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		case 0x6974697265746E65:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		case 0x6974697275656C70:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		case 0x6D6F6E6963726163:
			switch(wp[2]){
			case 0x0000000000000061:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6E6F7268636E75:
		switch(wp[1]){
		case 0x6C6C616369676F6C:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F7065746E657274:
		switch(wp[1]){
		case 0x756F656361696C68:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F706D65746E6F63:
		switch(wp[1]){
		case 0x6C73756F656E6172:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F706F6475657370:
		switch(wp[1]){
		case 0x6974697279687072:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F706F7265746E61:
		switch(wp[1]){
		case 0x6C726F6972657473:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F706F7268746E61:
		switch(wp[1]){
		case 0x6163696870726F6D:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		case 0x61696E6967616870:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		case 0x676F6C6F69636F73:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		case 0x68706172676F6567:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		case 0x69736F6870726F6D:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		case 0x6974696870726F6D:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		case 0x6974736967616870:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		case 0x6C6C616369676F6C:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		case 0x6C73756F67616870:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		case 0x7369676F6C6F6962:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F706F7270736964:
		switch(wp[1]){
		case 0x6C62616E6F697472:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		case 0x6C6C616E6F697472:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F706F7473616C62:
		switch(wp[1]){
		case 0x6974697279687072:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F70736572657270:
		switch(wp[1]){
		case 0x74696C696269736E:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F707365726E6F6E:
		switch(wp[1]){
		case 0x74696C696269736E:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F70736572726F63:
		switch(wp[1]){
		case 0x696873746E65646E:
			switch(wp[2]){
			case 0x0000000000000070:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F70796869746E61:
		switch(wp[1]){
		case 0x616972646E6F6863:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F72616863636173:
		switch(wp[1]){
		case 0x696C6F626174656D:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F72616870656C62:
		switch(wp[1]){
		case 0x696D6C6168746870:
			switch(wp[2]){
			case 0x0000000000000061:return 1;
			default:return 0;
			}
		case 0x696F726863737964:
			switch(wp[2]){
			case 0x0000000000000061:return 1;
			default:return 0;
			}
		case 0x697361696874696C:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		case 0x6973617473616964:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		case 0x69737968706D7973:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		case 0x6D6F6E6963726163:
			switch(wp[2]){
			case 0x0000000000000061:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F72626F69646172:
		switch(wp[1]){
		case 0x6E69747361636461:
			switch(wp[2]){
			case 0x0000000000000067:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F72646E696C7963:
		switch(wp[1]){
		case 0x6972646E696C7963:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F726479686F726F:
		switch(wp[1]){
		case 0x6163696870617267:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F7265746E756F63:
		switch(wp[1]){
		case 0x6F69746167696C62:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F72657869746E61:
		switch(wp[1]){
		case 0x696D6C6168746870:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F72686361726170:
		switch(wp[1]){
		case 0x756F726F68706F6D:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F7268636F6E6F6D:
		switch(wp[1]){
		case 0x6C6C61636974616D:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F726863796C6F70:
		switch(wp[1]){
		case 0x6C6968706F74616D:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F7268746E616564:
		switch(wp[1]){
		case 0x696870726F6D6F70:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F726F7968746162:
		switch(wp[1]){
		case 0x6163696870617267:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F72706172746E69:
		switch(wp[1]){
		case 0x696D73616C706F74:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F72706172747865:
		switch(wp[1]){
		case 0x616E6F6973736566:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F72707265646E75:
		switch(wp[1]){
		case 0x656E6F6974726F70:
			switch(wp[2]){
			case 0x0000000000000064:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F72707265746E69:
		switch(wp[1]){
		case 0x61646974746F6C67:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		case 0x616E6F6973736566:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		case 0x616E6F6974726F70:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		case 0x696D73616C706F74:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F72746172666E69:
		switch(wp[1]){
		case 0x697265746E616863:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F7274696E697274:
		switch(wp[1]){
		case 0x736F6C756C6C6563:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F72746E6F636E75:
		switch(wp[1]){
		case 0x6C6C616973726576:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		case 0x74696C6962616C6C:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F72747265746E69:
		switch(wp[1]){
		case 0x697265746E616863:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F73696B61697274:
		switch(wp[1]){
		case 0x6172646568617463:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		case 0x6972646568617463:
			switch(wp[2]){
			case 0x0000000000000064:return 1;
			default:return 0;
			}
		case 0x6F72646568617463:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F73696B61786568:
		switch(wp[1]){
		case 0x6F72646568617463:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F736E6F63697274:
		switch(wp[1]){
		case 0x73696C61746E616E:
			switch(wp[2]){
			case 0x000000000000006D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F736F6475657370:
		switch(wp[1]){
		case 0x697473696C616963:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F736F6D61757173:
		switch(wp[1]){
		case 0x6974616D6F67797A:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		case 0x72616C6C6978616D:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F736F73736F7263:
		switch(wp[1]){
		case 0x756F65636174616D:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F7373616C616874:
		switch(wp[1]){
		case 0x6163696870617267:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F74616D61757173:
		switch(wp[1]){
		case 0x756F6C756E617267:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F74616D656E6963:
		switch(wp[1]){
		case 0x6163696870617267:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F74616D75656E70:
		switch(wp[1]){
		case 0x727473696D656863:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F74617264617571:
		switch(wp[1]){
		case 0x61736F6D61757173:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F746174736F7270:
		switch(wp[1]){
		case 0x6D6F746F74737963:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F7463616C796870:
		switch(wp[1]){
		case 0x756F74616D65616C:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F7469706963636F:
		switch(wp[1]){
		case 0x696C61746E6F7266:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		case 0x6974616D67657262:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		case 0x6E697261636C6163:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		case 0x6F69726574736F70:
			switch(wp[2]){
			case 0x0000000000000072:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F746972656D6E75:
		switch(wp[1]){
		case 0x73656E73756F6972:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F746E6F656C6170:
		switch(wp[1]){
		case 0x6163696870617267:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		case 0x6C6C616369676F6C:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F746F636964656D:
		switch(wp[1]){
		case 0x6968706172676F70:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F747561696D6573:
		switch(wp[1]){
		case 0x6C6C61636974616D:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F747561746E6F6E:
		switch(wp[1]){
		case 0x6C62617A6972656D:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F76657265746E61:
		switch(wp[1]){
		case 0x72616E6F6974756C:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F766572696D6573:
		switch(wp[1]){
		case 0x73696E6F6974756C:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F76657269746E61:
		switch(wp[1]){
		case 0x72616E6F6974756C:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		case 0x73696E6F6974756C:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F766F69636C6163:
		switch(wp[1]){
		case 0x74696874726F626C:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F77656C746E6567:
		switch(wp[1]){
		case 0x73656E696C6E616D:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F786F6461726170:
		switch(wp[1]){
		case 0x6163696870617267:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7061696474736F70:
		switch(wp[1]){
		case 0x6974616D67617268:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x70616C6172666E69:
		switch(wp[1]){
		case 0x73696E6169726173:
			switch(wp[2]){
			case 0x000000000000006D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x70616C6172707573:
		switch(wp[1]){
		case 0x73696E6169726173:
			switch(wp[2]){
			case 0x000000000000006D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7061736964657270:
		switch(wp[1]){
		case 0x6E656D746E696F70:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7065637265706D69:
		switch(wp[1]){
		case 0x73656E656C626974:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7065637265707061:
		switch(wp[1]){
		case 0x697473696E6F6974:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7065637375736E75:
		switch(wp[1]){
		case 0x73656E656C626974:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7065646172746E69:
		switch(wp[1]){
		case 0x61746E656D747261:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7065647265746E69:
		switch(wp[1]){
		case 0x61746E656D747261:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x70656C6F7263696D:
		switch(wp[1]){
		case 0x61726574706F6469:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		case 0x6F726574706F6469:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x70656F6863697274:
		switch(wp[1]){
		case 0x6D6F696C65687469:
			switch(wp[2]){
			case 0x0000000000000061:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x70656F69726F6863:
		switch(wp[1]){
		case 0x6D6F696C65687469:
			switch(wp[2]){
			case 0x0000000000000061:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7069637369646E75:
		switch(wp[1]){
		case 0x73656E64656E696C:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7069736F746F7270:
		switch(wp[1]){
		case 0x756F6563616E6F68:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x70697669766F766F:
		switch(wp[1]){
		case 0x73656E73756F7261:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706D697265707573:
		switch(wp[1]){
		case 0x6F6974616E676572:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706D6F6369746E61:
		switch(wp[1]){
		case 0x7261746E656D656C:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F636973796870:
		switch(wp[1]){
		case 0x68706F736F6C6968:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F636974726F63:
		switch(wp[1]){
		case 0x616C75636E756465:
			switch(wp[2]){
			case 0x0000000000000072:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F656863617274:
		switch(wp[1]){
		case 0x6165676E79726168:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F676E7972616C:
		switch(wp[1]){
		case 0x6165676E79726168:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F677972657470:
		switch(wp[1]){
		case 0x6165676E79726168:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F6963656F6964:
		switch(wp[1]){
		case 0x756F6D6167796C6F:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F697265747261:
		switch(wp[1]){
		case 0x6D6F746F62656C68:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F6C6168706563:
		switch(wp[1]){
		case 0x6165676E79726168:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F6C6973707968:
		switch(wp[1]){
		case 0x696F746E6F646F68:
			switch(wp[2]){
			case 0x0000000000000064:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F6C6C6978616D:
		switch(wp[1]){
		case 0x6165676E79726168:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F6D616C616874:
		switch(wp[1]){
		case 0x616C75636E756465:
			switch(wp[2]){
			case 0x0000000000000072:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F6D6F74616E61:
		switch(wp[1]){
		case 0x69676F6C6F687461:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F6E6167657473:
		switch(wp[1]){
		case 0x74616D6C61687468:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F726265726563:
		switch(wp[1]){
		case 0x676F6C6F69737968:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F72646E6F6863:
		switch(wp[1]){
		case 0x6165676E79726168:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		case 0x7565676E79726168:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		case 0x756F696779726574:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F726563796C67:
		switch(wp[1]){
		case 0x69726F6870736F68:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F726574657275:
		switch(wp[1]){
		case 0x6D6F74736F6C6579:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F727070616E69:
		switch(wp[1]){
		case 0x73656E6574616972:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F727070616E75:
		switch(wp[1]){
		case 0x73656E6574616972:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F72707265766F:
		switch(wp[1]){
		case 0x74616E6F6974726F:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F727463656C65:
		switch(wp[1]){
		case 0x6574656D6F746F68:
			switch(wp[2]){
			case 0x0000000000000072:return 1;
			default:return 0;
			}
		case 0x676F6C6F69737968:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		case 0x6E69727574636E75:
			switch(wp[2]){
			case 0x0000000000000067:return 1;
			default:return 0;
			}
		case 0x7274656D6F746F68:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		case 0x7669737375637265:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F727463657073:
		switch(wp[1]){
		case 0x6574656D6F746F68:
			switch(wp[2]){
			case 0x0000000000000072:return 1;
			default:return 0;
			}
		case 0x706172676F746F68:
			switch(wp[2]){
			case 0x0000000000000068:return 1;
			default:return 0;
			}
		case 0x7274656D6F746F68:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F736F6C696870:
		switch(wp[1]){
		case 0x6167656C6F636968:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		case 0x6E69726574736168:
			switch(wp[2]){
			case 0x0000000000000067:return 1;
			default:return 0;
			}
		case 0x73656E6C61636968:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		case 0x73696C75636E7568:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F74616D6F6E6F:
		switch(wp[1]){
		case 0x6C6C61636974656F:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F7461756E6973:
		switch(wp[1]){
		case 0x69666974616E6E69:
			switch(wp[2]){
			case 0x0000000000000064:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F74656E67616D:
		switch(wp[1]){
		case 0x706172676F6E6F68:
			switch(wp[2]){
			case 0x0000000000000068:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F74756D736962:
		switch(wp[1]){
		case 0x74696E6F6967616C:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F796874686369:
		switch(wp[1]){
		case 0x74696D6C61687468:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7070617265707573:
		switch(wp[1]){
		case 0x6F69746169636572:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x707265746E756F63:
		switch(wp[1]){
		case 0x646E616761706F72:
			switch(wp[2]){
			case 0x0000000000000061:return 1;
			default:return 0;
			}
		case 0x6F69746365746F72:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x70726F6D796C6F70:
		switch(wp[1]){
		case 0x61656C63756E6F68:
			switch(wp[2]){
			case 0x0000000000000072:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x70736F68706D796C:
		switch(wp[1]){
		case 0x69736F696469726F:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x70736F6964726163:
		switch(wp[1]){
		case 0x6172676F6D677968:
			switch(wp[2]){
			case 0x000000000000006D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x70736F6C68636F63:
		switch(wp[1]){
		case 0x756F6563616D7265:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x70736F726170616C:
		switch(wp[1]){
		case 0x6D6F7463656E656C:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x707572726F636E69:
		switch(wp[1]){
		case 0x73656E656C626974:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x707572726F636E75:
		switch(wp[1]){
		case 0x73656E656C626974:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7075736F62727574:
		switch(wp[1]){
		case 0x6567726168637265:
			switch(wp[2]){
			case 0x0000000000000072:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7075737265746E69:
		switch(wp[1]){
		case 0x7261696C69637265:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x707865736E617274:
		switch(wp[1]){
		case 0x6169746E65697265:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7079686F6E656461:
		switch(wp[1]){
		case 0x696E656874737265:
			switch(wp[2]){
			case 0x0000000000000061:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7165736E6F636E69:
		switch(wp[1]){
		case 0x6C6C6169746E6575:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7165736E6F636E75:
		switch(wp[1]){
		case 0x6C6C6169746E6575:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7261636F72647968:
		switch(wp[1]){
		case 0x756F6563616E6F62:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7261637265707968:
		switch(wp[1]){
		case 0x696D6564696D6162:
			switch(wp[2]){
			case 0x0000000000000061:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7261697264617571:
		switch(wp[1]){
		case 0x6574616C75636974:
			switch(wp[2]){
			case 0x0000000000000064:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x72616C6F6E696872:
		switch(wp[1]){
		case 0x706F63736F676E79:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x72616D7265746E69:
		switch(wp[1]){
		case 0x6C62616567616972:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x72616F7379726863:
		switch(wp[1]){
		case 0x636172636F747369:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7261706F696C6563:
		switch(wp[1]){
		case 0x697365746E656361:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7261706F72647968:
		switch(wp[1]){
		case 0x6972616D756F6361:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x726279686F747561:
		switch(wp[1]){
		case 0x6F6974617A696469:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7263696D696D6573:
		switch(wp[1]){
		case 0x6163696D6568636F:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7263697264617571:
		switch(wp[1]){
		case 0x696F746E65637365:
			switch(wp[2]){
			case 0x0000000000000064:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x72636F6475657370:
		switch(wp[1]){
		case 0x6E696C6C61747379:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x72636F65616C6170:
		switch(wp[1]){
		case 0x6E696C6C61747379:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x72636F656F6D6F68:
		switch(wp[1]){
		case 0x6E696C6C61747379:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x72636F7470797263:
		switch(wp[1]){
		case 0x6E696C6C61747379:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7263736964657270:
		switch(wp[1]){
		case 0x6F6974616E696D69:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x72637369646E6F6E:
		switch(wp[1]){
		case 0x6F6974616E696D69:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		case 0x726F74616E696D69:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7263737265707968:
		switch(wp[1]){
		case 0x7469736F6C757075:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7263756165727562:
		switch(wp[1]){
		case 0x6F6974617A697461:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7265637369646E69:
		switch(wp[1]){
		case 0x73656E656C62696E:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		case 0x74696C6962697470:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7265637369646E75:
		switch(wp[1]){
		case 0x73656E656C62696E:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x72656469736E6F63:
		switch(wp[1]){
		case 0x73656E6576697461:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7265646E756E6F6E:
		switch(wp[1]){
		case 0x6C6261646E617473:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7265646E7573696D:
		switch(wp[1]){
		case 0x6C6261646E617473:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		case 0x73656E646F6F7473:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7265666669646564:
		switch(wp[1]){
		case 0x6F69746169746E65:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7265666669646572:
		switch(wp[1]){
		case 0x6F69746169746E65:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7265666F72647968:
		switch(wp[1]){
		case 0x74616E6179636F72:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7265667265746661:
		switch(wp[1]){
		case 0x6F697461746E656D:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7265687475656C65:
		switch(wp[1]){
		case 0x756F6C617065736F:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		case 0x756F6C617465706F:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		case 0x756F6C6C7968706F:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7265706172746E69:
		switch(wp[1]){
		case 0x6C6C61656E6F7469:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7265706964726163:
		switch(wp[1]){
		case 0x6974696472616369:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7265706F72626966:
		switch(wp[1]){
		case 0x6974696472616369:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7265706F72647968:
		switch(wp[1]){
		case 0x6974696472616369:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7265706F72746572:
		switch(wp[1]){
		case 0x6C6C61656E6F7469:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x726570736E617274:
		switch(wp[1]){
		case 0x6C6C61656E6F7469:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7265707573657270:
		switch(wp[1]){
		case 0x74696C6169636966:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x72657365726F7270:
		switch(wp[1]){
		case 0x73696E6F69746176:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x726574616C696E75:
		switch(wp[1]){
		case 0x6F6974617A696C61:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7265746E69657270:
		switch(wp[1]){
		case 0x6F69746174657270:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		case 0x7669746174657270:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7265746E69736964:
		switch(wp[1]){
		case 0x73656E6465747365:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7265746E6973696D:
		switch(wp[1]){
		case 0x6F69746174657270:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7265746F74796870:
		switch(wp[1]){
		case 0x7369676F6C6F7461:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7265747369726570:
		switch(wp[1]){
		case 0x756F6870726F6D6F:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7265766E6F636E69:
		switch(wp[1]){
		case 0x73656E656C626974:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7265766E6F636E75:
		switch(wp[1]){
		case 0x73656E656C626173:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x726576736E617274:
		switch(wp[1]){
		case 0x6174696275636F73:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x726665726F656C6F:
		switch(wp[1]){
		case 0x6574656D6F746361:
			switch(wp[2]){
			case 0x0000000000000072:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7267676169746E61:
		switch(wp[1]){
		case 0x73696E6F69737365:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7267697461727473:
		switch(wp[1]){
		case 0x6C6C616369687061:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x72676E6F63657270:
		switch(wp[1]){
		case 0x6F6974616C757461:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x72676E6F636E6F6E:
		switch(wp[1]){
		case 0x726F74616C757461:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x72676F636978656C:
		switch(wp[1]){
		case 0x6C6C616369687061:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x72676F65616C6170:
		switch(wp[1]){
		case 0x6C6C616369687061:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x72676F65676F6962:
		switch(wp[1]){
		case 0x6C6C616369687061:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x72676F65676F6F7A:
		switch(wp[1]){
		case 0x6C6C616369687061:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x72676F6572657473:
		switch(wp[1]){
		case 0x6C6C616369687061:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x72676F696C626962:
		switch(wp[1]){
		case 0x6C6C616369687061:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x72676F6973796870:
		switch(wp[1]){
		case 0x6C6C616369687061:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x72676F6E6165636F:
		switch(wp[1]){
		case 0x6C6C616369687061:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x72676F6E656C6573:
		switch(wp[1]){
		case 0x6C6C616369687061:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x72676F6E68636574:
		switch(wp[1]){
		case 0x6C6C616369687061:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x72676F6E6F726863:
		switch(wp[1]){
		case 0x61636974616D6D61:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		case 0x6C6C616369687061:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x72676F72616C6F70:
		switch(wp[1]){
		case 0x6C6C616369687061:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x72676F7461727473:
		switch(wp[1]){
		case 0x6C6C616369687061:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x72676F7470797263:
		switch(wp[1]){
		case 0x61636974616D6D61:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		case 0x6C6C616369687061:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x72686361696D6568:
		switch(wp[1]){
		case 0x6973706F74616D6F:
			switch(wp[2]){
			case 0x0000000000000061:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7268636F6874696C:
		switch(wp[1]){
		case 0x68706172676F6D6F:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7268636F746F6870:
		switch(wp[1]){
		case 0x68706172676F6D6F:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		case 0x68706172676F6E6F:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x726870656E6F7270:
		switch(wp[1]){
		case 0x6D6F74736F696469:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x726F666D6F636E75:
		switch(wp[1]){
		case 0x73656E656C626174:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x726F666E656E6F6E:
		switch(wp[1]){
		case 0x74696C6962616563:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x726F666E6F636E75:
		switch(wp[1]){
		case 0x73656E656C62616D:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x726F66736E617274:
		switch(wp[1]){
		case 0x73696E6F6974616D:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x726F676E696E656D:
		switch(wp[1]){
		case 0x6169646968636168:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x726F68746870616E:
		switch(wp[1]){
		case 0x6F6E6963726F7365:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x726F687475616E75:
		switch(wp[1]){
		case 0x6C65766974617469:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		case 0x73656E6576697469:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x726F697661686562:
		switch(wp[1]){
		case 0x6C6C616369747369:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x726F6C6168706563:
		switch(wp[1]){
		case 0x6169646968636168:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x726F6C6863697274:
		switch(wp[1]){
		case 0x6E656C796874656F:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x726F6C6863726570:
		switch(wp[1]){
		case 0x6E656C796874656F:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x726F6D656D6D6F63:
		switch(wp[1]){
		case 0x73656E6576697461:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x726F706F72706E75:
		switch(wp[1]){
		case 0x6C6574616E6F6974:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		case 0x74696C616E6F6974:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x726F707075736E69:
		switch(wp[1]){
		case 0x73656E656C626174:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x726F707075736E75:
		switch(wp[1]){
		case 0x73656E656C626174:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x726F70726F636572:
		switch(wp[1]){
		case 0x6F69746163696669:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x726F70736E617274:
		switch(wp[1]){
		case 0x73656E656C626174:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		case 0x73696E6F69746174:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x726F726574657275:
		switch(wp[1]){
		case 0x6D6F74736F746365:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x726F727463657073:
		switch(wp[1]){
		case 0x6574656D6F696461:
			switch(wp[2]){
			case 0x0000000000000072:return 1;
			default:return 0;
			}
		case 0x7274656D6F696461:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x72706172746E6F63:
		switch(wp[1]){
		case 0x736973736572676F:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x72706D6968637261:
		switch(wp[1]){
		case 0x73696E6F69737365:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x72706D6974736F70:
		switch(wp[1]){
		case 0x73696E6F69737365:
			switch(wp[2]){
			case 0x000000000000006D:return 1;
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x72706F6361726F63:
		switch(wp[1]){
		case 0x696F6361726F636F:
			switch(wp[2]){
			case 0x0000000000000064:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x72706F6475657370:
		switch(wp[1]){
		case 0x616369746568706F:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		case 0x7369766974696D69:
			switch(wp[2]){
			case 0x000000000000006D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x72706F7470797263:
		switch(wp[1]){
		case 0x736974796C65736F:
			switch(wp[2]){
			case 0x000000000000006D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x727075736F707968:
		switch(wp[1]){
		case 0x73696C616E657261:
			switch(wp[2]){
			case 0x000000000000006D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x727261626D656E75:
		switch(wp[1]){
		case 0x73656E6465737361:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x727265746E696E75:
		switch(wp[1]){
		case 0x73656E6465747075:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x727265746E756F63:
		switch(wp[1]){
		case 0x6F6974756C6F7365:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		case 0x6F6974756C6F7665:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7272697265707573:
		switch(wp[1]){
		case 0x74696C6962617469:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7272697265707968:
		switch(wp[1]){
		case 0x74696C6962617469:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7274696E61726170:
		switch(wp[1]){
		case 0x6F6E6568706F736F:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x72746976696D6573:
		switch(wp[1]){
		case 0x6F69746163696669:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x72746E65636E6F63:
		switch(wp[1]){
		case 0x6F6974617A696C61:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		case 0x73656E6576697461:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x72746E65636F7270:
		switch(wp[1]){
		case 0x6F6974617A696C61:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7274736E6F636572:
		switch(wp[1]){
		case 0x72616E6F69746375:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		case 0x73696E6F69746375:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7274736E6F636E75:
		switch(wp[1]){
		case 0x73656E64656E6961:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7274736E6F6D6564:
		switch(wp[1]){
		case 0x73656E6576697461:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7275657265707968:
		switch(wp[1]){
		case 0x69706F736F727079:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7275676966657270:
		switch(wp[1]){
		case 0x73656E6576697461:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x72756769666E6F63:
		switch(wp[1]){
		case 0x6C6C616E6F697461:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x72756A7265707573:
		switch(wp[1]){
		case 0x6F69746369647369:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x72756F7365726E75:
		switch(wp[1]){
		case 0x73656E6C75666563:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x727574616E736964:
		switch(wp[1]){
		case 0x6F6974617A696C61:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7275746369706E75:
		switch(wp[1]){
		case 0x73656E6575717365:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7275746375727473:
		switch(wp[1]){
		case 0x6F6974617A696C61:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7275746E65766461:
		switch(wp[1]){
		case 0x73656E656D6F7365:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x727574706C756373:
		switch(wp[1]){
		case 0x73656E6575717365:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7275747265706D69:
		switch(wp[1]){
		case 0x73656E656C626162:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7279687461726170:
		switch(wp[1]){
		case 0x6D6F74636564696F:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x72796874696D6568:
		switch(wp[1]){
		case 0x6D6F74636564696F:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7361636F70706968:
		switch(wp[1]){
		case 0x756F6563616E6174:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x73616C706F747561:
		switch(wp[1]){
		case 0x7061726568746F6D:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7361706D6F636E69:
		switch(wp[1]){
		case 0x6C6574616E6F6973:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7361706D6F636E75:
		switch(wp[1]){
		case 0x6C6574616E6F6973:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		case 0x6E6974616E6F6973:
			switch(wp[2]){
			case 0x0000000000000067:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7361707275736E75:
		switch(wp[1]){
		case 0x73656E656C626173:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x736275736E617274:
		switch(wp[1]){
		case 0x6C6C6169746E6174:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7365666F72706E75:
		switch(wp[1]){
		case 0x73696C616E6F6973:
			switch(wp[2]){
			case 0x000000000000006D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x73656D7974616C70:
		switch(wp[1]){
		case 0x696C61687065636F:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7365727065726E75:
		switch(wp[1]){
		case 0x73656E6465746E65:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7365727065727269:
		switch(wp[1]){
		case 0x73656E656C626973:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x736572706D696E75:
		switch(wp[1]){
		case 0x73656E656C626973:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7365727078656E69:
		switch(wp[1]){
		case 0x73656E656C626973:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7365727078656E75:
		switch(wp[1]){
		case 0x73656E656C626173:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		case 0x73656E656C626973:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7365746E6F636E69:
		switch(wp[1]){
		case 0x73656E656C626174:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7365746E6F636E75:
		switch(wp[1]){
		case 0x73656E656C626174:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7365747265746E69:
		switch(wp[1]){
		case 0x6F6974616C6C6573:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7369646F7263696D:
		switch(wp[1]){
		case 0x6F6974616C6C6974:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7369646F72746572:
		switch(wp[1]){
		case 0x6E656D6563616C70:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7369646F746F6870:
		switch(wp[1]){
		case 0x6F69746169636F73:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7369647265707573:
		switch(wp[1]){
		case 0x6F69747562697274:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7369647265746E69:
		switch(wp[1]){
		case 0x6F697461736E6570:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x73696765726E6F6E:
		switch(wp[1]){
		case 0x74696C6962617274:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x736968706F736E75:
		switch(wp[1]){
		case 0x6C64657461636974:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x73696C6275706E75:
		switch(wp[1]){
		case 0x73656E656C626168:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x73697075636E6F63:
		switch(wp[1]){
		case 0x73656E656C626963:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x736975716E696E75:
		switch(wp[1]){
		case 0x73656E6576697469:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x73697669766F7270:
		switch(wp[1]){
		case 0x73696E6F69746365:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7369766F72706D69:
		switch(wp[1]){
		case 0x6C6C6169726F7461:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x736E617274657270:
		switch(wp[1]){
		case 0x6F69746174726F70:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x736E6172746E6F6E:
		switch(wp[1]){
		case 0x6F69746174726F70:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x736E65736F707968:
		switch(wp[1]){
		case 0x6F6974617A697469:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x736E65736F747561:
		switch(wp[1]){
		case 0x6F6974617A697469:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x736E65737265766F:
		switch(wp[1]){
		case 0x73656E6576697469:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x736E6F63696D6573:
		switch(wp[1]){
		case 0x73656E73756F6963:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x736E6F637265766F:
		switch(wp[1]){
		case 0x6C65746172656469:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		case 0x6F69746172656469:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		case 0x73656E73756F6963:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		case 0x756F69746E656963:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x736E6F6D65646E69:
		switch(wp[1]){
		case 0x74696C6962617274:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x736E6F6D65646E75:
		switch(wp[1]){
		case 0x6C65766974617274:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x736F636172746C75:
		switch(wp[1]){
		case 0x6174696C6F706F6D:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x736F637265746E69:
		switch(wp[1]){
		case 0x6172656D75686F74:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x736F6469656C616B:
		switch(wp[1]){
		case 0x6C6C616369706F63:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x736F657265707968:
		switch(wp[1]){
		case 0x696C6968706F6E69:
			switch(wp[2]){
			case 0x0000000000000061:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x736F677972657470:
		switch(wp[1]){
		case 0x6E696C7968706174:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x736F696863617262:
		switch(wp[1]){
		case 0x69736F68706F7274:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x736F6C6968706E75:
		switch(wp[1]){
		case 0x6C6C61636968706F:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x736F706572706E75:
		switch(wp[1]){
		case 0x6C676E6973736573:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x736F726F706D6574:
		switch(wp[1]){
		case 0x6164696F6E656870:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x736F727463656C65:
		switch(wp[1]){
		case 0x6973796C6F6E6574:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		case 0x6974796C6F6E6574:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		case 0x6C6C616369746174:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		case 0x7079746F65726574:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x736F727463657073:
		switch(wp[1]){
		case 0x6C6C616369706F63:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x736F746569726170:
		switch(wp[1]){
		case 0x6164696F6E656870:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		case 0x696E68636E616C70:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x736F747065727473:
		switch(wp[1]){
		case 0x696D656369747065:
			switch(wp[2]){
			case 0x0000000000000061:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x73726168706C7573:
		switch(wp[1]){
		case 0x6E696D616E656870:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x737265746E756F63:
		switch(wp[1]){
		case 0x6F69747365676775:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7373616C63657270:
		switch(wp[1]){
		case 0x6F69746163696669:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7373616C636E6F6E:
		switch(wp[1]){
		case 0x6F69746163696669:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7373616C6373696D:
		switch(wp[1]){
		case 0x6F69746163696669:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x737361706D696E75:
		switch(wp[1]){
		case 0x73656E64656E6F69:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x737365746E697571:
		switch(wp[1]){
		case 0x74696C6169746E65:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x73736F6F6D726564:
		switch(wp[1]){
		case 0x6F69746163696669:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7374686775617264:
		switch(wp[1]){
		case 0x6968736E616D6F77:
			switch(wp[2]){
			case 0x0000000000000070:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7375616878656E69:
		switch(wp[1]){
		case 0x73656E656C626974:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7375616878656E75:
		switch(wp[1]){
		case 0x73656E656C626974:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7375626D6F636E69:
		switch(wp[1]){
		case 0x73656E656C626974:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7375636361736964:
		switch(wp[1]){
		case 0x73656E64656D6F74:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7375737265746E69:
		switch(wp[1]){
		case 0x6F69746174706563:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x737963656C6F6863:
		switch(wp[1]){
		case 0x6870616872726F74:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7379686F6D6F796D:
		switch(wp[1]){
		case 0x6D6F746365726574:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x737968706F707968:
		switch(wp[1]){
		case 0x756F766972706F65:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7379737265746E69:
		switch(wp[1]){
		case 0x61636974616D6574:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74616572636E6170:
		switch(wp[1]){
		case 0x6978617268706D65:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74616C6C6963736F:
		switch(wp[1]){
		case 0x756F65636169726F:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74616D6F6C696870:
		switch(wp[1]){
		case 0x61636974616D6568:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74616D6F72746169:
		switch(wp[1]){
		case 0x61636974616D6568:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74616D7265707573:
		switch(wp[1]){
		case 0x61636974616D6568:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74616E6172707573:
		switch(wp[1]){
		case 0x697473696C617275:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7461706D79736E75:
		switch(wp[1]){
		case 0x6C6C616369746568:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7461706F70706968:
		switch(wp[1]){
		case 0x616369676F6C6F68:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7461706F7263696D:
		switch(wp[1]){
		case 0x616369676F6C6F68:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7461706F7275656E:
		switch(wp[1]){
		case 0x616369676F6C6F68:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7461706F74736968:
		switch(wp[1]){
		case 0x616369676F6C6F68:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7461706F74796870:
		switch(wp[1]){
		case 0x616369676F6C6F68:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746172677265766F:
		switch(wp[1]){
		case 0x6F69746163696669:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7461737265646E75:
		switch(wp[1]){
		case 0x6F69746361667369:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7461737265707573:
		switch(wp[1]){
		case 0x6F69746361667369:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7463616269746E61:
		switch(wp[1]){
		case 0x6974796C6F697265:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746361626F78796D:
		switch(wp[1]){
		case 0x756F656361697265:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7463656A626F6572:
		switch(wp[1]){
		case 0x6F6974617A697669:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74636E6173657270:
		switch(wp[1]){
		case 0x6F69746163696669:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74636E61736E6F6E:
		switch(wp[1]){
		case 0x6F69746163696669:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746567726F666E75:
		switch(wp[1]){
		case 0x73656E656C626174:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74656C6767617264:
		switch(wp[1]){
		case 0x73656E64656C6961:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74656C796874656D:
		switch(wp[1]){
		case 0x69746563616C7968:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74656D6172746E69:
		switch(wp[1]){
		case 0x6174696C6F706F72:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74656D6172747865:
		switch(wp[1]){
		case 0x6163697379687061:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		case 0x6174696C6F706F72:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74656D6D79736E75:
		switch(wp[1]){
		case 0x73656E6C61636972:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74656D6F65676E75:
		switch(wp[1]){
		case 0x73656E6C61636972:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74656D6F69646172:
		switch(wp[1]){
		case 0x706172676F726F65:
			switch(wp[2]){
			case 0x0000000000000068:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74656D6F6D656E61:
		switch(wp[1]){
		case 0x6968706172676F72:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74656D6F72647968:
		switch(wp[1]){
		case 0x73696870726F6D61:
			switch(wp[2]){
			case 0x000000000000006D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74656D7265707573:
		switch(wp[1]){
		case 0x6174696C6F706F72:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74656D7265707968:
		switch(wp[1]){
		case 0x616369726F687061:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		case 0x6163697379687061:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		case 0x73696870726F6D61:
			switch(wp[2]){
			case 0x000000000000006D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74656F65616C6170:
		switch(wp[1]){
		case 0x7369676F6C6F6E68:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7465727265746E69:
		switch(wp[1]){
		case 0x6F6974616C756369:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746575716E697571:
		switch(wp[1]){
		case 0x616C756372656275:
			switch(wp[2]){
			case 0x0000000000000072:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74686369656C6170:
		switch(wp[1]){
		case 0x7369676F6C6F7968:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7468676961727473:
		switch(wp[1]){
		case 0x6C64726177726F66:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7468706F69726465:
		switch(wp[1]){
		case 0x756F74616D6C6168:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74696272616F7270:
		switch(wp[1]){
		case 0x73696E6F69746172:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7469646E6F636E75:
		switch(wp[1]){
		case 0x73656E64656E6F69:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		case 0x73656E6C616E6F69:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74696C6F746F6870:
		switch(wp[1]){
		case 0x6568706172676F68:
			switch(wp[2]){
			case 0x0000000000000072:return 1;
			default:return 0;
			}
		case 0x6968706172676F68:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74696C6F74796870:
		switch(wp[1]){
		case 0x616369676F6C6F68:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74696D7563726963:
		switch(wp[1]){
		case 0x6F69746172656E69:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74696E6172746574:
		switch(wp[1]){
		case 0x6E696C696E616F72:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74696E6F6874726F:
		switch(wp[1]){
		case 0x6E696C696E616F72:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74696E6F72647968:
		switch(wp[1]){
		case 0x6973737572706F72:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7469706F72706E75:
		switch(wp[1]){
		case 0x73656E6465746169:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7469726F68747561:
		switch(wp[1]){
		case 0x73656E6576697461:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7469736975716E69:
		switch(wp[1]){
		case 0x73656E6C6169726F:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7469767265707968:
		switch(wp[1]){
		case 0x6F6974617A696C61:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746E616F656C6170:
		switch(wp[1]){
		case 0x676F6C6F706F7268:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746E656172746C75:
		switch(wp[1]){
		case 0x6974736169737568:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746E656469657270:
		switch(wp[1]){
		case 0x6F69746163696669:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746E6564696C616D:
		switch(wp[1]){
		case 0x6F69746163696669:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746E65646973696D:
		switch(wp[1]){
		case 0x6F69746163696669:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746E656D75677261:
		switch(wp[1]){
		case 0x73656E6576697461:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746E656D756E6F6D:
		switch(wp[1]){
		case 0x6F6974617A696C61:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746E657265746E69:
		switch(wp[1]){
		case 0x6E656D656C676E61:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746E65737265766F:
		switch(wp[1]){
		case 0x6C6C61746E656D69:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746E65746E696E75:
		switch(wp[1]){
		case 0x73656E6C616E6F69:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746E696172707573:
		switch(wp[1]){
		case 0x61757463656C6C65:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746E697265707573:
		switch(wp[1]){
		case 0x6169746E65646E65:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		case 0x61757463656C6C65:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746E697265707968:
		switch(wp[1]){
		case 0x61757463656C6C65:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		case 0x636E6567696C6C65:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746E69727962616C:
		switch(wp[1]){
		case 0x6169746E6F646F68:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		case 0x696F746E6F646F68:
			switch(wp[2]){
			case 0x0000000000000064:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746E6F6369627563:
		switch(wp[1]){
		case 0x6E61697261766172:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746E6F63696D6573:
		switch(wp[1]){
		case 0x6F69746369646172:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746E6F7A69726F68:
		switch(wp[1]){
		case 0x6F6974617A696C61:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746E7973796C6F70:
		switch(wp[1]){
		case 0x6C6C616369746568:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746F636973796870:
		switch(wp[1]){
		case 0x7369676F6C6F6568:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746F636F73696E61:
		switch(wp[1]){
		case 0x756F6E6F64656C79:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746F636F74636568:
		switch(wp[1]){
		case 0x6F6974617A696C79:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		case 0x756F726566696C79:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746F646E75746F72:
		switch(wp[1]){
		case 0x616E6F6761727465:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746F676E7972616C:
		switch(wp[1]){
		case 0x6974696568636172:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746F677972657470:
		switch(wp[1]){
		case 0x616C756365626172:
			switch(wp[2]){
			case 0x0000000000000072:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746F68706F747561:
		switch(wp[1]){
		case 0x69727463656C656F:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746F696C65687061:
		switch(wp[1]){
		case 0x6C6C616369706F72:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746F6D646E617267:
		switch(wp[1]){
		case 0x73656E696C726568:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746F70696E656C70:
		switch(wp[1]){
		case 0x6C69726169746E65:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		case 0x74696C6169746E65:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		case 0x7A69726169746E65:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746F726574737968:
		switch(wp[1]){
		case 0x736974616D756172:
			switch(wp[2]){
			case 0x000000000000006D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746F72706F636365:
		switch(wp[1]){
		case 0x69726F68706F6369:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746F727463656C65:
		switch(wp[1]){
		case 0x616963696E686365:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		case 0x6174736F6D726568:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		case 0x676F6C6F6E686365:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		case 0x6870617267656C65:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		case 0x69736F74616E6168:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746F736F6E697073:
		switch(wp[1]){
		case 0x616C756372656275:
			switch(wp[2]){
			case 0x0000000000000072:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7470656378656E75:
		switch(wp[1]){
		case 0x73656E6C616E6F69:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74706F646970656C:
		switch(wp[1]){
		case 0x7369676F6C6F7265:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74706F6D6F726863:
		switch(wp[1]){
		case 0x6163697274656D6F:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74706F6E656D7968:
		switch(wp[1]){
		case 0x7369676F6C6F7265:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74726163696D6573:
		switch(wp[1]){
		case 0x756F6E6967616C69:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7472616374736F70:
		switch(wp[1]){
		case 0x756F6E6967616C69:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7472617265707573:
		switch(wp[1]){
		case 0x6C6C616963696669:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x747265637265766F:
		switch(wp[1]){
		case 0x6F69746163696669:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74726F7265707968:
		switch(wp[1]){
		case 0x696874616E676F68:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7473616D7265766F:
		switch(wp[1]){
		case 0x73656E6C75667265:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74736172636F7270:
		switch(wp[1]){
		case 0x6C65766974616E69:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		case 0x6C676E6974616E69:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7473617265707573:
		switch(wp[1]){
		case 0x6E656D6873696E6F:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74736172746E6F63:
		switch(wp[1]){
		case 0x6F6974616C756D69:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74736275736E6F63:
		switch(wp[1]){
		case 0x6F69746169746E61:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		case 0x73696C6169746E61:
			switch(wp[2]){
			case 0x000000000000006D:return 1;
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		case 0x74696C6169746E61:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74736275736E6F6E:
		switch(wp[1]){
		case 0x6F69746169746E61:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		case 0x73696C6169746E61:
			switch(wp[2]){
			case 0x000000000000006D:return 1;
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		case 0x74696C6169746E61:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x747365647265766F:
		switch(wp[1]){
		case 0x6C65766974637572:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x747365756C626E75:
		switch(wp[1]){
		case 0x7369676E696B636F:
			switch(wp[2]){
			case 0x0000000000000068:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7473696863617262:
		switch(wp[1]){
		case 0x696C61687065636F:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		case 0x756F6E6F7268636F:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7473696E696D6461:
		switch(wp[1]){
		case 0x696873726F746172:
			switch(wp[2]){
			case 0x0000000000000070:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74736972616C6F70:
		switch(wp[1]){
		case 0x6574656D6F626F72:
			switch(wp[2]){
			case 0x0000000000000072:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74736D7563726963:
		switch(wp[1]){
		case 0x6F69746169746E61:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		case 0x74696C6169746E61:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74736E6F636E6F6E:
		switch(wp[1]){
		case 0x616E6F6974757469:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74736E6F636F7270:
		switch(wp[1]){
		case 0x616E6F6974757469:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74736E6F6373696D:
		switch(wp[1]){
		case 0x616E6F6974757469:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74736F6475657370:
		switch(wp[1]){
		case 0x706F63736F657265:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74736F6D72656874:
		switch(wp[1]){
		case 0x6F6974616C756D69:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74736F6E69746361:
		switch(wp[1]){
		case 0x706F63736F657265:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74736F706174656D:
		switch(wp[1]){
		case 0x616C6C6574756373:
			switch(wp[2]){
			case 0x0000000000000072:return 1;
			default:return 0;
			}
		case 0x756C6C6574756373:
			switch(wp[2]){
			case 0x000000000000006D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74737963696C6F63:
		switch(wp[1]){
		case 0x6974696C6579706F:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74737972636E6F6E:
		switch(wp[1]){
		case 0x6C62617A696C6C61:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x747561636F706176:
		switch(wp[1]){
		case 0x6F6974617A697265:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74756C6767616E69:
		switch(wp[1]){
		case 0x74696C6962616E69:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74796C65746F7270:
		switch(wp[1]){
		case 0x756F726574706F72:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x756168746F747561:
		switch(wp[1]){
		case 0x736967727574616D:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x756172656B6F7369:
		switch(wp[1]){
		case 0x6968706172676F6E:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7563726963736964:
		switch(wp[1]){
		case 0x6F6974636570736D:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7564656172746C75:
		switch(wp[1]){
		case 0x73696E6F69746163:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7564697669646E69:
		switch(wp[1]){
		case 0x6C676E697A696C61:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		case 0x6F6974617A696C61:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x75646E697265766F:
		switch(wp[1]){
		case 0x7A696C6169727473:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x75646E6F636E6F6E:
		switch(wp[1]){
		case 0x74696C6962697463:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x75646F72706E6F6E:
		switch(wp[1]){
		case 0x73656E6576697463:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x75646F7274736167:
		switch(wp[1]){
		case 0x6D6F746F6E65646F:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x75656C6F73696E61:
		switch(wp[1]){
		case 0x69736F7479636F63:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x75656C7265707968:
		switch(wp[1]){
		case 0x69736F7479636F63:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7569746172626976:
		switch(wp[1]){
		case 0x6F6974616C75636E:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x756A7265706D6573:
		switch(wp[1]){
		case 0x6E656373656E6576:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x756C666F62697274:
		switch(wp[1]){
		case 0x636E65637365726F:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x756C666F72647968:
		switch(wp[1]){
		case 0x696E6F6372697A6F:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		case 0x746163696C69736F:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x756C6F6D72656874:
		switch(wp[1]){
		case 0x6E656373656E696D:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x756F6D7275736E69:
		switch(wp[1]){
		case 0x74696C696261746E:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x75706F7069746E61:
		switch(wp[1]){
		case 0x73696E6F6974616C:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x757270736972756A:
		switch(wp[1]){
		case 0x6C6C6169746E6564:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7572747365646E69:
		switch(wp[1]){
		case 0x74696C6962697463:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x757274736E696E75:
		switch(wp[1]){
		case 0x73656E6576697463:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x75736172746E6F63:
		switch(wp[1]){
		case 0x6C62697473656767:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x75736E656D6D6F63:
		switch(wp[1]){
		case 0x73656E656C626172:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x75736F6E696C6173:
		switch(wp[1]){
		case 0x756F65727568706C:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7573726574627573:
		switch(wp[1]){
		case 0x766974616C726570:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7574697061636572:
		switch(wp[1]){
		case 0x73696E6F6974616C:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7574697264617571:
		switch(wp[1]){
		case 0x74616C7563726562:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x75746974736E6F63:
		switch(wp[1]){
		case 0x73696C616E6F6974:
			switch(wp[2]){
			case 0x000000000000006D:return 1;
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		case 0x74696C616E6F6974:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		case 0x7A696C616E6F6974:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x75746F6475657370:
		switch(wp[1]){
		case 0x756F6C7563726562:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x75747065636E6F63:
		switch(wp[1]){
		case 0x6F6974617A696C61:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7661726769746E61:
		switch(wp[1]){
		case 0x616E6F6974617469:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7664617369646E75:
		switch(wp[1]){
		case 0x756F656761746E61:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x76656F6475657370:
		switch(wp[1]){
		case 0x6163696C65676E61:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7665737265706E75:
		switch(wp[1]){
		case 0x73656E676E697265:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7669637265707573:
		switch(wp[1]){
		case 0x6F6974617A696C69:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7669637265707968:
		switch(wp[1]){
		case 0x6F6974617A696C69:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7669637265746E69:
		switch(wp[1]){
		case 0x6F6974617A696C69:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7669726F736E6573:
		switch(wp[1]){
		case 0x616E6F6974696C6F:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x766F676172707573:
		switch(wp[1]){
		case 0x61746E656D6E7265:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x766F677265746E69:
		switch(wp[1]){
		case 0x61746E656D6E7265:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7774737572746E75:
		switch(wp[1]){
		case 0x73656E696874726F:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x786F627261636564:
		switch(wp[1]){
		case 0x6F6974617A696C79:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x786F726479686964:
		switch(wp[1]){
		case 0x696E696363757379:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7962616C69726570:
		switch(wp[1]){
		case 0x69746968746E6972:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7962616C6F646E65:
		switch(wp[1]){
		case 0x69746968746E6972:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x79636F68706D796C:
		switch(wp[1]){
		case 0x69736F74616D6F74:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x79636F74616D6568:
		switch(wp[1]){
		case 0x6973656E65676F74:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		case 0x6973706972746F74:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x79636F74636F7270:
		switch(wp[1]){
		case 0x7473616C706F7473:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x79636F7972636164:
		switch(wp[1]){
		case 0x69736F74706F7473:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x79646F657274736F:
		switch(wp[1]){
		case 0x6574656D6F6D616E:
			switch(wp[2]){
			case 0x0000000000000072:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x79646F6964726163:
		switch(wp[1]){
		case 0x6973656874736573:
			switch(wp[2]){
			case 0x0000000000000061:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x79646F6D72656874:
		switch(wp[1]){
		case 0x6C6C6163696D616E:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x79646F73736F6C67:
		switch(wp[1]){
		case 0x6574656D6F6D616E:
			switch(wp[2]){
			case 0x0000000000000072:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x79646F74616D6568:
		switch(wp[1]){
		case 0x6574656D6F6D616E:
			switch(wp[2]){
			case 0x0000000000000072:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x79686F63696C6973:
		switch(wp[1]){
		case 0x6F627261636F7264:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x79686F6475657370:
		switch(wp[1]){
		case 0x68706F7274726570:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		case 0x69626F68706F7264:
			switch(wp[2]){
			case 0x0000000000000061:return 1;
			default:return 0;
			}
		case 0x6E696D617963736F:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x79686F65616C6170:
		switch(wp[1]){
		case 0x68706172676F7264:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x79686F656C63756E:
		switch(wp[1]){
		case 0x6D73616C706F6C61:
			switch(wp[2]){
			case 0x0000000000000061:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x79686F6D75656E70:
		switch(wp[1]){
		case 0x61726F68746F7264:
			switch(wp[2]){
			case 0x0000000000000078:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x79686F726170616C:
		switch(wp[1]){
		case 0x6D6F746F72657473:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		case 0x7865706F72657473:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x79686F726870656E:
		switch(wp[1]){
		case 0x68706F7274726570:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x79686F726F6C6863:
		switch(wp[1]){
		case 0x6F627261636F7264:
			switch(wp[2]){
			case 0x000000000000006E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x79686F72746E6576:
		switch(wp[1]){
		case 0x7865706F72657473:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x79686F7274736167:
		switch(wp[1]){
		case 0x697275656E726570:
			switch(wp[2]){
			case 0x0000000000000061:return 1;
			default:return 0;
			}
		case 0x6D6F746F72657473:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		case 0x7865706F72657473:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x79687061746E6570:
		switch(wp[1]){
		case 0x756F65636163616C:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7968706F656C6170:
		switch(wp[1]){
		case 0x616369676F6C6F74:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		case 0x68706172676F6973:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7968706F7263696D:
		switch(wp[1]){
		case 0x68706172676F6973:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7968706F72647968:
		switch(wp[1]){
		case 0x756F656361696C6C:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7968706F74796870:
		switch(wp[1]){
		case 0x6974656E65676F6C:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x796C656F74737963:
		switch(wp[1]){
		case 0x7473616C706F7274:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x796C676F746F6870:
		switch(wp[1]){
		case 0x68706172676F6870:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		case 0x68706172676F7470:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x796D6F6E656C7073:
		switch(wp[1]){
		case 0x756F6E65676F6C65:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x796E656870697274:
		switch(wp[1]){
		case 0x6F6E69627261636C:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x79706F726870656E:
		switch(wp[1]){
		case 0x7473616C706F6C65:
			switch(wp[2]){
			case 0x0000000000000079:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7972616C6F747561:
		switch(wp[1]){
		case 0x69706F63736F676E:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7972616F72796874:
		switch(wp[1]){
		case 0x756564696F6E6574:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x79726863616C6C69:
		switch(wp[1]){
		case 0x73656E656C62616D:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x79736F6475657370:
		switch(wp[1]){
		case 0x6163697274656D6D:
			switch(wp[2]){
			case 0x000000000000006C:return 1;
			default:return 0;
			}
		case 0x6974616D6F74706D:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7973706F64656170:
		switch(wp[1]){
		case 0x7369676F6C6F6863:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7973706F6874726F:
		switch(wp[1]){
		case 0x7369727461696863:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7973706F7275656E:
		switch(wp[1]){
		case 0x69687461706F6863:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		case 0x7369676F6C6F6863:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		case 0x7369727461696863:
			switch(wp[2]){
			case 0x0000000000000074:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x79746F6572657473:
		switch(wp[1]){
		case 0x6568706172676F70:
			switch(wp[2]){
			case 0x0000000000000072:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x79746F6D6F726863:
		switch(wp[1]){
		case 0x6968706172676F70:
			switch(wp[2]){
			case 0x0000000000000063:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x79786F68706C7573:
		switch(wp[1]){
		case 0x74616870736F6870:
			switch(wp[2]){
			case 0x0000000000000065:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7A68637565686373:
		switch(wp[1]){
		case 0x756F656361697265:
			switch(wp[2]){
			case 0x0000000000000073:return 1;
			default:return 0;
			}
		default:return 0;
		}
	default:return 0;
	}
}
