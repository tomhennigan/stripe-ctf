#include <stdint.h>
unsigned int contains18(uint64_t * wp) {
	switch(wp[0]){
	case 0x61626F7270736964:
		switch(wp[1]){
		case 0x6974617A696C6962:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x61636F7465676576:
		switch(wp[1]){
		case 0x6F6563616E6F6272:
			switch(wp[2]){
			case 0x0000000000007375:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x61656D7265706D69:
		switch(wp[1]){
		case 0x6974617A696C6962:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x61676F6863797370:
		switch(wp[1]){
		case 0x74656D6F6E61766C:
			switch(wp[2]){
			case 0x0000000000007265:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x61676F6D72656874:
		switch(wp[1]){
		case 0x74656D6F6E61766C:
			switch(wp[2]){
			case 0x0000000000007265:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6168636361736564:
		switch(wp[1]){
		case 0x6974616369666972:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6168637265746E69:
		switch(wp[1]){
		case 0x696C69626165676E:
			switch(wp[2]){
			case 0x0000000000007974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x61686378656E6F6E:
		switch(wp[1]){
		case 0x696C69626165676E:
			switch(wp[2]){
			case 0x0000000000007974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6168706F74796870:
		switch(wp[1]){
		case 0x676F6C6F63616D72:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6169646172666E69:
		switch(wp[1]){
		case 0x74616D6761726870:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6169646F74736F63:
		switch(wp[1]){
		case 0x74616D6761726870:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x616964736E617274:
		switch(wp[1]){
		case 0x74616D6761726870:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x616C6C7973736964:
		switch(wp[1]){
		case 0x6974616369666962:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x616C706F72647968:
		switch(wp[1]){
		case 0x6E6179636F6E6974:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x616F637265707968:
		switch(wp[1]){
		case 0x696C6962616C7567:
			switch(wp[2]){
			case 0x0000000000007974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x616F6870736F6870:
		switch(wp[1]){
		case 0x6970696C6F6E696D:
			switch(wp[2]){
			case 0x0000000000006564:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x616F727065726E75:
		switch(wp[1]){
		case 0x656E656C62616863:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x616F727065727269:
		switch(wp[1]){
		case 0x656E656C62616863:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x616F727070616E75:
		switch(wp[1]){
		case 0x656E656C62616863:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x61706F6863797370:
		switch(wp[1]){
		case 0x6369676F6C6F6874:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		case 0x7473696863796E6E:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x61706F6973796870:
		switch(wp[1]){
		case 0x6369676F6C6F6874:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x61706F7274736167:
		switch(wp[1]){
		case 0x746974616572636E:
			switch(wp[2]){
			case 0x0000000000007369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6172616870656C62:
		switch(wp[1]){
		case 0x736F63617268746E:
			switch(wp[2]){
			case 0x0000000000007369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6172626172746C75:
		switch(wp[1]){
		case 0x6168706563796863:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6172626973707968:
		switch(wp[1]){
		case 0x6168706563796863:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6172627265707968:
		switch(wp[1]){
		case 0x6168706563796863:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		case 0x696E617263796863:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x61726369646E6168:
		switch(wp[1]){
		case 0x68736E616D737466:
			switch(wp[2]){
			case 0x0000000000007069:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x617265746E756F63:
		switch(wp[1]){
		case 0x69746169636F7373:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		case 0x6974616D72696666:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		case 0x6974617473657474:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		case 0x6E61747469757163:
			switch(wp[2]){
			case 0x0000000000006563:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6172666E65736964:
		switch(wp[1]){
		case 0x656D65736968636E:
			switch(wp[2]){
			case 0x000000000000746E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6172677265707573:
		switch(wp[1]){
		case 0x6974616369666974:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x61726F6D72656874:
		switch(wp[1]){
		case 0x61726568746F6964:
			switch(wp[2]){
			case 0x0000000000007970:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6172746C756E6F6E:
		switch(wp[1]){
		case 0x62617265746C6966:
			switch(wp[2]){
			case 0x000000000000656C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6172747265746E69:
		switch(wp[1]){
		case 0x62616D726F66736E:
			switch(wp[2]){
			case 0x000000000000656C:return 1;
			default:return 0;
			}
		case 0x62697373696D736E:
			switch(wp[2]){
			case 0x000000000000656C:return 1;
			default:return 0;
			}
		case 0x6C6173726576736E:
			switch(wp[2]){
			case 0x0000000000007369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x61736F6475657370:
		switch(wp[1]){
		case 0x6F6967656C697263:
			switch(wp[2]){
			case 0x0000000000007375:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x61736F68706D796C:
		switch(wp[1]){
		case 0x736F74616D6F6372:
			switch(wp[2]){
			case 0x0000000000007369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x61736F6E616C656D:
		switch(wp[1]){
		case 0x736F74616D6F6372:
			switch(wp[2]){
			case 0x0000000000007369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x61736F726170616C:
		switch(wp[1]){
		case 0x6F746F676E69706C:
			switch(wp[2]){
			case 0x000000000000796D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6173736964657270:
		switch(wp[1]){
		case 0x6974636166736974:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x61746E656D656C65:
		switch(wp[1]){
		case 0x6C6163697473696C:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6174737265646E75:
		switch(wp[1]){
		case 0x656E656C6261646E:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6175716172707573:
		switch(wp[1]){
		case 0x6E656C617669746E:
			switch(wp[2]){
			case 0x0000000000006563:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6175746972697073:
		switch(wp[1]){
		case 0x6C6163697473696C:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x626F6361726F6874:
		switch(wp[1]){
		case 0x6F746F68636E6F72:
			switch(wp[2]){
			case 0x000000000000796D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x626F636F72647968:
		switch(wp[1]){
		case 0x6E61796369746C61:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x626F68636E6F7262:
		switch(wp[1]){
		case 0x6872726F6E6E656C:
			switch(wp[2]){
			case 0x0000000000006165:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x626F726874657275:
		switch(wp[1]){
		case 0x6872726F6E6E656C:
			switch(wp[2]){
			case 0x0000000000006165:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x626F727463657073:
		switch(wp[1]){
		case 0x68706172676F6C6F:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6279786F72647968:
		switch(wp[1]){
		case 0x6361636972797475:
			switch(wp[2]){
			case 0x0000000000006469:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x63616C617A6E6562:
		switch(wp[1]){
		case 0x6F6E6568706F7465:
			switch(wp[2]){
			case 0x000000000000656E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x63616C796E656870:
		switch(wp[1]){
		case 0x796865646C617465:
			switch(wp[2]){
			case 0x0000000000006564:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x63616F726F6C6863:
		switch(wp[1]){
		case 0x6F6E6568706F7465:
			switch(wp[2]){
			case 0x000000000000656E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6361746F746F6870:
		switch(wp[1]){
		case 0x63697274656D6F68:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6363617265707573:
		switch(wp[1]){
		case 0x697461646F6D6D6F:
			switch(wp[2]){
			case 0x000000000000676E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636361736E617274:
		switch(wp[1]){
		case 0x697461746E656469:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6363617669746E61:
		switch(wp[1]){
		case 0x696E6F6974616E69:
			switch(wp[2]){
			case 0x0000000000007473:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6365646F746F6870:
		switch(wp[1]){
		case 0x697469736F706D6F:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636570737265766F:
		switch(wp[1]){
		case 0x6974617A696C6169:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6365727070616E69:
		switch(wp[1]){
		case 0x656E657669746169:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6365727070616E75:
		switch(wp[1]){
		case 0x656E657669746169:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636572736E617274:
		switch(wp[1]){
		case 0x6974616369666974:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6365737265646E75:
		switch(wp[1]){
		case 0x6873797261746572:
			switch(wp[2]){
			case 0x0000000000007069:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x63696361726F6874:
		switch(wp[1]){
		case 0x6E696D6F6462616F:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6369676F6C6F6F7A:
		switch(wp[1]){
		case 0x63696E61746F626F:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x63696C6F64627573:
		switch(wp[1]){
		case 0x6C61687065636F68:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x63696D6172746C75:
		switch(wp[1]){
		case 0x63696D6568636F72:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		case 0x6369706F63736F72:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6369726F74736968:
		switch(wp[1]){
		case 0x636974696C6F706F:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		case 0x6F6967696C65726F:
			switch(wp[2]){
			case 0x0000000000007375:return 1;
			default:return 0;
			}
		case 0x746568706F72706F:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636E697265746E69:
		switch(wp[1]){
		case 0x697461726F70726F:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636E69736E617274:
		switch(wp[1]){
		case 0x697461726F70726F:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636E6F6365726E75:
		switch(wp[1]){
		case 0x656E656C62616C69:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636E6F6365727269:
		switch(wp[1]){
		case 0x656E656C62616C69:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		case 0x696C696261696C69:
			switch(wp[2]){
			case 0x0000000000007974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636F6361726F6874:
		switch(wp[1]){
		case 0x73696863736F6C65:
			switch(wp[2]){
			case 0x0000000000007369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636F64696863726F:
		switch(wp[1]){
		case 0x73616C706F696C65:
			switch(wp[2]){
			case 0x0000000000007974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636F68636E6F7262:
		switch(wp[1]){
		case 0x7463697274736E6F:
			switch(wp[2]){
			case 0x000000000000726F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636F6D6779687073:
		switch(wp[1]){
		case 0x6172676F6E6F7268:
			switch(wp[2]){
			case 0x0000000000006870:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636F6E65646F7564:
		switch(wp[1]){
		case 0x7469676E616C6F68:
			switch(wp[2]){
			case 0x0000000000007369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636F6E696C617968:
		switch(wp[1]){
		case 0x696C6C6174737972:
			switch(wp[2]){
			case 0x000000000000656E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636F72656E616870:
		switch(wp[1]){
		case 0x696C6C6174737972:
			switch(wp[2]){
			case 0x000000000000656E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636F726574737968:
		switch(wp[1]){
		case 0x696C6C6174737972:
			switch(wp[2]){
			case 0x000000000000656E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636F726874797265:
		switch(wp[1]){
		case 0x73696863736F7479:
			switch(wp[2]){
			case 0x0000000000007369:return 1;
			default:return 0;
			}
		case 0x78656872726F7479:
			switch(wp[2]){
			case 0x0000000000007369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636F727463656C65:
		switch(wp[1]){
		case 0x6172676F69647261:
			switch(wp[2]){
			case 0x0000000000006870:return 1;
			default:return 0;
			}
		case 0x6172676F6E6F7268:
			switch(wp[2]){
			case 0x0000000000006870:return 1;
			default:return 0;
			}
		case 0x6972616C6C697061:
			switch(wp[2]){
			case 0x0000000000007974:return 1;
			default:return 0;
			}
		case 0x6974616C7567616F:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		case 0x72676F636974726F:
			switch(wp[2]){
			case 0x0000000000006D61:return 1;
			default:return 0;
			}
		case 0x74656D6F6E6F7268:
			switch(wp[2]){
			case 0x0000000000007265:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x636F727463657073:
		switch(wp[1]){
		case 0x74656D69726F6C6F:
			switch(wp[2]){
			case 0x0000000000007972:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6372617265707968:
		switch(wp[1]){
		case 0x706F637369706568:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x637265746E756F63:
		switch(wp[1]){
		case 0x6974697465706D6F:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		case 0x6977746E65727275:
			switch(wp[2]){
			case 0x0000000000006573:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x63726963696D6573:
		switch(wp[1]){
		case 0x6974756C6F766D75:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		case 0x746E657265666D75:
			switch(wp[2]){
			case 0x000000000000726F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x637269637265766F:
		switch(wp[1]){
		case 0x6974636570736D75:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6373696469746E61:
		switch(wp[1]){
		case 0x6972616E696C7069:
			switch(wp[2]){
			case 0x0000000000006E61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x637369647265766F:
		switch(wp[1]){
		case 0x656D65676172756F:
			switch(wp[2]){
			case 0x000000000000746E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x637375737265766F:
		switch(wp[1]){
		case 0x696C696269747065:
			switch(wp[2]){
			case 0x0000000000007974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x637973706F747561:
		switch(wp[1]){
		case 0x6D68747968726F68:
			switch(wp[2]){
			case 0x0000000000006169:return 1;
			default:return 0;
			}
		case 0x73796C616E616F68:
			switch(wp[2]){
			case 0x0000000000007369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6461736964657270:
		switch(wp[1]){
		case 0x6F656761746E6176:
			switch(wp[2]){
			case 0x0000000000007375:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x64656D6572706E75:
		switch(wp[1]){
		case 0x656E646574617469:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6465727069746E61:
		switch(wp[1]){
		case 0x616E696D72657465:
			switch(wp[2]){
			case 0x000000000000746E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6469666E6F636E75:
		switch(wp[1]){
		case 0x656E6C6169746E65:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x64696F69726F6863:
		switch(wp[1]){
		case 0x74696E697465726F:
			switch(wp[2]){
			case 0x0000000000007369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x646970656F736176:
		switch(wp[1]){
		case 0x6F74736F6D796469:
			switch(wp[2]){
			case 0x000000000000796D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6469736E6F636E69:
		switch(wp[1]){
		case 0x656E656C62617265:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x646E617473657270:
		switch(wp[1]){
		case 0x6974617A69647261:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x646E697265707573:
		switch(wp[1]){
		case 0x696C617564697669:
			switch(wp[2]){
			case 0x0000000000006D73:return 1;
			case 0x0000000000007473:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x646E756669746E61:
		switch(wp[1]){
		case 0x696C61746E656D61:
			switch(wp[2]){
			case 0x0000000000007473:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x646E7573696D6E75:
		switch(wp[1]){
		case 0x69646E6174737265:
			switch(wp[2]){
			case 0x000000000000676E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x646F646E61706572:
		switch(wp[1]){
		case 0x616C756369746E65:
			switch(wp[2]){
			case 0x0000000000006574:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x646F727463656C65:
		switch(wp[1]){
		case 0x62617469736F7065:
			switch(wp[2]){
			case 0x000000000000656C:return 1;
			default:return 0;
			}
		case 0x6974616363697365:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		case 0x6974756C6F737369:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		case 0x74656D6F6D616E79:
			switch(wp[2]){
			case 0x0000000000007265:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x646F736F6E697073:
		switch(wp[1]){
		case 0x616C756369746E65:
			switch(wp[2]){
			case 0x0000000000006574:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x646F746172726573:
		switch(wp[1]){
		case 0x616C756369746E65:
			switch(wp[2]){
			case 0x0000000000006574:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6472616369726570:
		switch(wp[1]){
		case 0x7365746E65636F69:
			switch(wp[2]){
			case 0x0000000000007369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x647265746E756F63:
		switch(wp[1]){
		case 0x656D706F6C657665:
			switch(wp[2]){
			case 0x000000000000746E:return 1;
			default:return 0;
			}
		case 0x69746172616C6365:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		case 0x6974636E69747369:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		case 0x6975676E69747369:
			switch(wp[2]){
			case 0x0000000000006873:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6475746974616C70:
		switch(wp[1]){
		case 0x696E616972616E69:
			switch(wp[2]){
			case 0x0000000000006D73:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6479686C79687465:
		switch(wp[1]){
		case 0x6965727075636F72:
			switch(wp[2]){
			case 0x000000000000656E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6562696C65646E75:
		switch(wp[1]){
		case 0x656E657669746172:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6564656C62626F68:
		switch(wp[1]){
		case 0x656E687369796F68:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65646F65616C6170:
		switch(wp[1]){
		case 0x69676F6C6F72646E:
			switch(wp[2]){
			case 0x0000000000007473:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65646F7473697261:
		switch(wp[1]){
		case 0x6369746172636F6D:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6564726574657270:
		switch(wp[1]){
		case 0x64656E696D726574:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65666F7265746568:
		switch(wp[1]){
		case 0x697461746E656D72:
			switch(wp[2]){
			case 0x0000000000006576:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65666F72706E6F6E:
		switch(wp[1]){
		case 0x696C616E6F697373:
			switch(wp[2]){
			case 0x0000000000006D73:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65676F6D72656874:
		switch(wp[1]){
		case 0x636968706172676F:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65686572706D6F63:
		switch(wp[1]){
		case 0x656E656C6269736E:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65686E61676E616D:
		switch(wp[1]){
		case 0x69677265626E6564:
			switch(wp[2]){
			case 0x0000000000006574:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6568706F7A6E6562:
		switch(wp[1]){
		case 0x697A616968746F6E:
			switch(wp[2]){
			case 0x000000000000656E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6568746172747865:
		switch(wp[1]){
		case 0x6D616E79646F6D72:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6568747265707968:
		switch(wp[1]){
		case 0x7365687473656D72:
			switch(wp[2]){
			case 0x0000000000006169:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656B6F72656C6373:
		switch(wp[1]){
		case 0x746972696F746172:
			switch(wp[2]){
			case 0x0000000000007369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656C636968637261:
		switch(wp[1]){
		case 0x6F6D61676F747369:
			switch(wp[2]){
			case 0x0000000000007375:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656C6561746C6F76:
		switch(wp[1]){
		case 0x7274656D6F727463:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656C656863617274:
		switch(wp[1]){
		case 0x7865706F6D6F7463:
			switch(wp[2]){
			case 0x0000000000006169:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656C656F69676E61:
		switch(wp[1]){
		case 0x736169746E616870:
			switch(wp[2]){
			case 0x0000000000007369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656C656F72647968:
		switch(wp[1]){
		case 0x6974617A69727463:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656C79646E6F7073:
		switch(wp[1]){
		case 0x736F726874726178:
			switch(wp[2]){
			case 0x0000000000007369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656D61696C726170:
		switch(wp[1]){
		case 0x696E61697261746E:
			switch(wp[2]){
			case 0x0000000000006D73:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656D6D6F63736964:
		switch(wp[1]){
		case 0x656E656C6261646E:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656D6F6475657370:
		switch(wp[1]){
		case 0x697461757274736E:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656D6F6D616E7964:
		switch(wp[1]){
		case 0x696870726F6D6174:
			switch(wp[2]){
			case 0x0000000000006D73:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656D6F6D72656874:
		switch(wp[1]){
		case 0x696870726F6D6174:
			switch(wp[2]){
			case 0x0000000000006D73:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656E6963656C6574:
		switch(wp[1]){
		case 0x706172676F74616D:
			switch(wp[2]){
			case 0x0000000000007968:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656E696B656C6574:
		switch(wp[1]){
		case 0x706172676F74616D:
			switch(wp[2]){
			case 0x0000000000007968:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656E696E69677261:
		switch(wp[1]){
		case 0x726F6870736F6870:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656E697461657263:
		switch(wp[1]){
		case 0x726F6870736F6870:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656E6F6475657370:
		switch(wp[1]){
		case 0x6F726574706F7275:
			switch(wp[2]){
			case 0x0000000000007375:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656E6F6863797370:
		switch(wp[1]){
		case 0x6369676F6C6F7275:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656E6F69726F6863:
		switch(wp[1]){
		case 0x6F696C6568746970:
			switch(wp[2]){
			case 0x000000000000616D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656E756D65726E75:
		switch(wp[1]){
		case 0x656E657669746172:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656F63696D656863:
		switch(wp[1]){
		case 0x697265656E69676E:
			switch(wp[2]){
			case 0x000000000000676E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656F6E65646F7564:
		switch(wp[1]){
		case 0x6F74736F7265746E:
			switch(wp[2]){
			case 0x000000000000796D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656F726574657275:
		switch(wp[1]){
		case 0x6F74736F7265746E:
			switch(wp[2]){
			case 0x000000000000796D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656F726F656C6574:
		switch(wp[1]){
		case 0x72676F6E6567746E:
			switch(wp[2]){
			case 0x0000000000006D61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x656F74656E67616D:
		switch(wp[1]){
		case 0x696369727463656C:
			switch(wp[2]){
			case 0x0000000000007974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65706F6475657370:
		switch(wp[1]){
		case 0x6972656974656C6C:
			switch(wp[2]){
			case 0x000000000000656E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65706F6964726163:
		switch(wp[1]){
		case 0x7469647261636972:
			switch(wp[2]){
			case 0x0000000000007369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65706F7275656C70:
		switch(wp[1]){
		case 0x7469647261636972:
			switch(wp[2]){
			case 0x0000000000007369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6570736F7263696D:
		switch(wp[1]){
		case 0x706F63736F727463:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6570736F72747361:
		switch(wp[1]){
		case 0x706F63736F727463:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6570736F746F6870:
		switch(wp[1]){
		case 0x706F63736F727463:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6570737265707573:
		switch(wp[1]){
		case 0x6974616369666963:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65726172746E6F63:
		switch(wp[1]){
		case 0x6E617274736E6F6D:
			switch(wp[2]){
			case 0x0000000000006563:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x657265746E756F63:
		switch(wp[1]){
		case 0x6974616E616C7078:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65726F6475657370:
		switch(wp[1]){
		case 0x6E656373696E696D:
			switch(wp[2]){
			case 0x0000000000006563:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6572706D6F636E69:
		switch(wp[1]){
		case 0x656E656C62697373:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6572706F6D687465:
		switch(wp[1]){
		case 0x64696F6E65687073:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65727568706C7573:
		switch(wp[1]){
		case 0x656373657269766F:
			switch(wp[2]){
			case 0x000000000000746E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6573626F7265766F:
		switch(wp[1]){
		case 0x656E73756F697571:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6573657269746E61:
		switch(wp[1]){
		case 0x696E6F6974617672:
			switch(wp[2]){
			case 0x0000000000007473:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65736E6F636F7270:
		switch(wp[1]){
		case 0x696E6F6974617672:
			switch(wp[2]){
			case 0x0000000000007473:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6574636172616863:
		switch(wp[1]){
		case 0x656E636974736972:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		case 0x6C61636974736972:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6574656D656C6574:
		switch(wp[1]){
		case 0x68706172676F726F:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65746E697265766F:
		switch(wp[1]){
		case 0x656E646574736572:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65746E6F63657270:
		switch(wp[1]){
		case 0x6F656E61726F706D:
			switch(wp[2]){
			case 0x0000000000007375:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65746F68706C7573:
		switch(wp[1]){
		case 0x6C61687468706572:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6574736973707968:
		switch(wp[1]){
		case 0x6C61687065636F6E:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6574737974616C70:
		switch(wp[1]){
		case 0x696C61687065636E:
			switch(wp[2]){
			case 0x0000000000006D73:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x65766F72746E6F63:
		switch(wp[1]){
		case 0x696C616E6F697372:
			switch(wp[2]){
			case 0x0000000000006D73:return 1;
			case 0x0000000000007473:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x66616F6475657370:
		switch(wp[1]){
		case 0x616E6F6974636566:
			switch(wp[2]){
			case 0x0000000000006574:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6665726F7263696D:
		switch(wp[1]){
		case 0x74656D6F74636172:
			switch(wp[2]){
			case 0x0000000000007265:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x66666F7265707573:
		switch(wp[1]){
		case 0x656E73756F696369:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6669647265746E69:
		switch(wp[1]){
		case 0x656E657669737566:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x666F6C6C69677261:
		switch(wp[1]){
		case 0x6F6E696775727265:
			switch(wp[2]){
			case 0x0000000000007375:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x666F72646E6F6863:
		switch(wp[1]){
		case 0x6F74616D6F726269:
			switch(wp[2]){
			case 0x0000000000007375:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6673697461736E75:
		switch(wp[1]){
		case 0x656E69726F746361:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x676168706F73656F:
		switch(wp[1]){
		case 0x7361696D6F74736F:
			switch(wp[2]){
			case 0x0000000000007369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x67616D7265707573:
		switch(wp[1]){
		case 0x746E65636966696E:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x67657461636E7973:
		switch(wp[1]){
		case 0x636974616D65726F:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6767617265746E69:
		switch(wp[1]){
		case 0x6974616E6974756C:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x676775736F747561:
		switch(wp[1]){
		case 0x696C696269747365:
			switch(wp[2]){
			case 0x0000000000007974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x676968746F6C6C61:
		switch(wp[1]){
		case 0x6C61636974656E65:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x676F6874726F6E61:
		switch(wp[1]){
		case 0x6C61636968706172:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x676F6874726F6E75:
		switch(wp[1]){
		case 0x6C61636968706172:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x676F69626F747561:
		switch(wp[1]){
		case 0x6C61636968706172:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x676F6D736E617274:
		switch(wp[1]){
		case 0x6974616369666972:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x676F727463657073:
		switch(wp[1]){
		case 0x6C61636968706172:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x67797A7265746E69:
		switch(wp[1]){
		case 0x69737968706F7061:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6863696461726170:
		switch(wp[1]){
		case 0x657A6E6562726F6C:
			switch(wp[2]){
			case 0x000000000000656E:return 1;
			default:return 0;
			}
		case 0x7A6E65626F726F6C:
			switch(wp[2]){
			case 0x0000000000006C6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68636C796874656D:
		switch(wp[1]){
		case 0x657268746E616C6F:
			switch(wp[2]){
			case 0x000000000000656E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68636F6475657370:
		switch(wp[1]){
		case 0x69676F6C6F6E6F72:
			switch(wp[2]){
			case 0x0000000000007473:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68636F6D6F726863:
		switch(wp[1]){
		case 0x706172676F636C61:
			switch(wp[2]){
			case 0x0000000000007968:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68636F6E69746572:
		switch(wp[1]){
		case 0x746964696F69726F:
			switch(wp[2]){
			case 0x0000000000007369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68636F72646E6564:
		switch(wp[1]){
		case 0x69676F6C6F6E6F72:
			switch(wp[2]){
			case 0x0000000000007473:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68636F72656C6373:
		switch(wp[1]){
		case 0x746964696F69726F:
			switch(wp[2]){
			case 0x0000000000007369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6865727070616E69:
		switch(wp[1]){
		case 0x656E657669736E65:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6865727070616E75:
		switch(wp[1]){
		case 0x656E657669736E65:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x686E656B63696863:
		switch(wp[1]){
		case 0x656E646574726165:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x686F68636E6F7262:
		switch(wp[1]){
		case 0x67616872726F6D65:
			switch(wp[2]){
			case 0x0000000000006169:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x686F727069746E61:
		switch(wp[1]){
		case 0x696E6F6974696269:
			switch(wp[2]){
			case 0x0000000000007473:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x687065636E656E61:
		switch(wp[1]){
		case 0x68706F72746F6C61:
			switch(wp[2]){
			case 0x0000000000006169:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6870696365646E69:
		switch(wp[1]){
		case 0x656E656C62617265:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68706F6475657370:
		switch(wp[1]){
		case 0x6572646E616C6C65:
			switch(wp[2]){
			case 0x000000000000656E:return 1;
			default:return 0;
			}
		case 0x657268746E616E65:
			switch(wp[2]){
			case 0x000000000000656E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68706F65616C6170:
		switch(wp[1]){
		case 0x6369676F6C6F7479:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		case 0x706172676F697379:
			switch(wp[2]){
			case 0x0000000000007968:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68706F6572657473:
		switch(wp[1]){
		case 0x68706172676F746F:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68706F6863797370:
		switch(wp[1]){
		case 0x69676F6C6F697379:
			switch(wp[2]){
			case 0x0000000000007473:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68706F6870726F6D:
		switch(wp[1]){
		case 0x6C6163696D656E6F:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68706F6D6F726863:
		switch(wp[1]){
		case 0x68706172676F746F:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68706F6D6F746E65:
		switch(wp[1]){
		case 0x6F656361726F6874:
			switch(wp[2]){
			case 0x0000000000007375:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68706F6E65737261:
		switch(wp[1]){
		case 0x63796C676C796E65:
			switch(wp[2]){
			case 0x0000000000006E69:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68706F6E6F726863:
		switch(wp[1]){
		case 0x68706172676F746F:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68706F726F6C6863:
		switch(wp[1]){
		case 0x6F6E6567696C6C79:
			switch(wp[2]){
			case 0x0000000000007375:return 1;
			default:return 0;
			}
		case 0x6F726566696C6C79:
			switch(wp[2]){
			case 0x0000000000007375:return 1;
			default:return 0;
			}
		case 0x6F726567696C6C79:
			switch(wp[2]){
			case 0x0000000000007375:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68706F737265766F:
		switch(wp[1]){
		case 0x6974616369747369:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6870726F6D6F7270:
		switch(wp[1]){
		case 0x6C616369676F6C6F:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68726F6475657370:
		switch(wp[1]){
		case 0x726465686F626D6F:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68726F6863797370:
		switch(wp[1]){
		case 0x6C6163696D687479:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6874617069746E61:
		switch(wp[1]){
		case 0x656E6C6163697465:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x687461706F747963:
		switch(wp[1]){
		case 0x6C616369676F6C6F:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x687468706F6E6F6D:
		switch(wp[1]){
		case 0x6974617A69676E6F:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68746F656E6C6162:
		switch(wp[1]){
		case 0x6974756570617265:
			switch(wp[2]){
			case 0x0000000000007363:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68746F6863797370:
		switch(wp[1]){
		case 0x6974756570617265:
			switch(wp[2]){
			case 0x0000000000007363:return 1;
			case 0x0000000000007473:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68746F6973796870:
		switch(wp[1]){
		case 0x6974756570617265:
			switch(wp[2]){
			case 0x0000000000007363:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68746F6D72656874:
		switch(wp[1]){
		case 0x6974756570617265:
			switch(wp[2]){
			case 0x0000000000007363:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68746F6D75656E70:
		switch(wp[1]){
		case 0x6974756570617265:
			switch(wp[2]){
			case 0x0000000000007363:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68746F6E69746361:
		switch(wp[1]){
		case 0x6974756570617265:
			switch(wp[2]){
			case 0x0000000000007363:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x68746F726170616C:
		switch(wp[1]){
		case 0x6F63736F6361726F:
			switch(wp[2]){
			case 0x0000000000007970:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x687472616C656461:
		switch(wp[1]){
		case 0x6F74616D6F736F72:
			switch(wp[2]){
			case 0x0000000000007375:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x69616B6172746574:
		switch(wp[1]){
		case 0x7264656861636564:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x69626F65616C6170:
		switch(wp[1]){
		case 0x706172676F65676F:
			switch(wp[2]){
			case 0x0000000000007968:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x69626F6863797370:
		switch(wp[1]){
		case 0x7473696D6568636F:
			switch(wp[2]){
			case 0x0000000000007972:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6963736E6F636E75:
		switch(wp[1]){
		case 0x656E656C62616E6F:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x69646172746E6F63:
		switch(wp[1]){
		case 0x616E696D69726373:
			switch(wp[2]){
			case 0x0000000000006574:return 1;
			default:return 0;
			}
		case 0x656E73756F697463:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x696465736F786568:
		switch(wp[1]){
		case 0x726F6870736F6870:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6964697473657270:
		switch(wp[1]){
		case 0x69726F7461746967:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x69646F6475657370:
		switch(wp[1]){
		case 0x7469726568746870:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x69646F65616C6170:
		switch(wp[1]){
		case 0x726574706F797463:
			switch(wp[2]){
			case 0x0000000000006E61:return 1;
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x69646F68706C7573:
		switch(wp[1]){
		case 0x696D61726F6C6863:
			switch(wp[2]){
			case 0x000000000000656E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x69676F6C6F656874:
		switch(wp[1]){
		case 0x6174696C696D6F63:
			switch(wp[2]){
			case 0x0000000000007972:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x696C6269626F6962:
		switch(wp[1]){
		case 0x636968706172676F:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x696C636F656C6170:
		switch(wp[1]){
		case 0x69676F6C6F74616D:
			switch(wp[2]){
			case 0x0000000000007473:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x696C656874697065:
		switch(wp[1]){
		case 0x6C75646E616C676F:
			switch(wp[2]){
			case 0x0000000000007261:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x696C6C6574756373:
		switch(wp[1]){
		case 0x697461746E616C70:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x696C6F6D6F726863:
		switch(wp[1]){
		case 0x68706172676F6874:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			case 0x0000000000007265:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x696C6F737265766F:
		switch(wp[1]){
		case 0x656E73756F746963:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x696D617265707968:
		switch(wp[1]){
		case 0x6D65646963616F6E:
			switch(wp[2]){
			case 0x0000000000006169:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x696D646169746E61:
		switch(wp[1]){
		case 0x697461727473696E:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x696D6564696D6568:
		switch(wp[1]){
		case 0x76617571696D6573:
			switch(wp[2]){
			case 0x0000000000007265:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x696D697369726576:
		switch(wp[1]){
		case 0x6F6E69647574696C:
			switch(wp[2]){
			case 0x0000000000007375:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x696D6F6475657370:
		switch(wp[1]){
		case 0x747369726174696C:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x696D6F6E65646E75:
		switch(wp[1]){
		case 0x6C616E6F6974616E:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x696D726564697065:
		switch(wp[1]){
		case 0x6974617A696C6164:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x696E696D69646E75:
		switch(wp[1]){
		case 0x656E656C62616873:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x696E696D69746E61:
		switch(wp[1]){
		case 0x696C616972657473:
			switch(wp[2]){
			case 0x0000000000007473:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x696E726F656C6170:
		switch(wp[1]){
		case 0x6369676F6C6F6874:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x697061637265766F:
		switch(wp[1]){
		case 0x6974617A696C6174:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6970656F72796874:
		switch(wp[1]){
		case 0x65646974746F6C67:
			switch(wp[2]){
			case 0x0000000000006E61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6970656F746F6870:
		switch(wp[1]){
		case 0x6C6163697473616E:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6972637369646E69:
		switch(wp[1]){
		case 0x656E6574616E696D:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		case 0x65766974616E696D:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		case 0x676E6974616E696D:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6972637369646E75:
		switch(wp[1]){
		case 0x676E6974616E696D:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6972657069746E61:
		switch(wp[1]){
		case 0x6C61636974617473:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x697265746E756F63:
		switch(wp[1]){
		case 0x6974616E6967616D:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		case 0x697461746E65646E:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6973696B61697274:
		switch(wp[1]){
		case 0x7264656861736F63:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x69736F7974636964:
		switch(wp[1]){
		case 0x6F6563616E6F6870:
			switch(wp[2]){
			case 0x0000000000007375:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x697373616C636E75:
		switch(wp[1]){
		case 0x656E656C62616966:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6973736572706D69:
		switch(wp[1]){
		case 0x656E656C62616E6F:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6973736572707865:
		switch(wp[1]){
		case 0x656E7373656C6E6F:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6973736573736F70:
		switch(wp[1]){
		case 0x656E7373656C6E6F:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x69737968706F6962:
		switch(wp[1]){
		case 0x63696D6568636F63:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x697461646E756F66:
		switch(wp[1]){
		case 0x656E7373656C6E6F:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6974616D6F67797A:
		switch(wp[1]){
		case 0x6F6E656870736F63:
			switch(wp[2]){
			case 0x0000000000006469:return 1;
			default:return 0;
			}
		case 0x726F706D65746F63:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6974636566726570:
		switch(wp[1]){
		case 0x69726174696C6962:
			switch(wp[2]){
			case 0x0000000000006E61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x697463656A627573:
		switch(wp[1]){
		case 0x6C61636974736976:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x697463656C6C6F63:
		switch(wp[1]){
		case 0x6C61636974736976:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x69746E616F747561:
		switch(wp[1]){
		case 0x656D656C706D6F63:
			switch(wp[2]){
			case 0x000000000000746E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x69746E6564696E75:
		switch(wp[1]){
		case 0x656E656C62616966:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6974726F706F7270:
		switch(wp[1]){
		case 0x656E656C62616E6F:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6974736575716E75:
		switch(wp[1]){
		case 0x656E656C62616E6F:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6974736E6F636E75:
		switch(wp[1]){
		case 0x6C616E6F69747574:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6976697669746E61:
		switch(wp[1]){
		case 0x696E6F6974636573:
			switch(wp[2]){
			case 0x0000000000007473:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6976726573736964:
		switch(wp[1]){
		case 0x656E656C62616563:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6A626F7265707573:
		switch(wp[1]){
		case 0x62616E6F69746365:
			switch(wp[2]){
			case 0x000000000000656C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6A6F6E65646F7564:
		switch(wp[1]){
		case 0x6F74736F6E756A65:
			switch(wp[2]){
			case 0x000000000000796D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C61676172747361:
		switch(wp[1]){
		case 0x656E61636C61636F:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		case 0x6C75636976616E6F:
			switch(wp[2]){
			case 0x0000000000007261:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C61676F6E697073:
		switch(wp[1]){
		case 0x6974617A696E6176:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C61676F746F6870:
		switch(wp[1]){
		case 0x706172676F6E6176:
			switch(wp[2]){
			case 0x0000000000007968:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C61687065636E65:
		switch(wp[1]){
		case 0x736568637973706F:
			switch(wp[2]){
			case 0x0000000000007369:return 1;
			default:return 0;
			}
		case 0x736F63616C616D6F:
			switch(wp[2]){
			case 0x0000000000007369:return 1;
			default:return 0;
			}
		case 0x736F72656C63736F:
			switch(wp[2]){
			case 0x0000000000007369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C61706F74796870:
		switch(wp[1]){
		case 0x676F6C6F746E6F65:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C617261706F6567:
		switch(wp[1]){
		case 0x706F72746F6C656C:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C61736F696C6563:
		switch(wp[1]){
		case 0x6F746365676E6970:
			switch(wp[2]){
			case 0x000000000000796D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C63636569746E61:
		switch(wp[1]){
		case 0x6369747361697365:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C636F6E72657473:
		switch(wp[1]){
		case 0x6F7473616D6F6469:
			switch(wp[2]){
			case 0x0000000000006469:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6568746F646E65:
		switch(wp[1]){
		case 0x6F7473616C626F69:
			switch(wp[2]){
			case 0x000000000000616D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C656C6C61726170:
		switch(wp[1]){
		case 0x63696D6D6172676F:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		case 0x6E6F646570697065:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		case 0x74616D6D6172676F:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C656F6D72656874:
		switch(wp[1]){
		case 0x6C61636972746365:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		case 0x74656D6F72746365:
			switch(wp[2]){
			case 0x0000000000007265:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C656F6E69746361:
		switch(wp[1]){
		case 0x6C61636972746365:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C666F6475657370:
		switch(wp[1]){
		case 0x6E65637365726F75:
			switch(wp[2]){
			case 0x0000000000006563:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C666F6572657473:
		switch(wp[1]){
		case 0x706F63736F726F75:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C68636172746574:
		switch(wp[1]){
		case 0x616874656D6F726F:
			switch(wp[2]){
			case 0x000000000000656E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C68636F72647968:
		switch(wp[1]){
		case 0x6E6974616C70726F:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C68707265707573:
		switch(wp[1]){
		case 0x616369747369676F:
			switch(wp[2]){
			case 0x0000000000006574:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C69666172746C75:
		switch(wp[1]){
		case 0x696C696261726574:
			switch(wp[2]){
			case 0x0000000000007974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6968706F656874:
		switch(wp[1]){
		case 0x69706F7268746E61:
			switch(wp[2]){
			case 0x0000000000006D73:return 1;
			case 0x0000000000007473:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C69736B63697571:
		switch(wp[1]){
		case 0x656E687369726576:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6B6F696C626962:
		switch(wp[1]){
		case 0x696E616D6F747065:
			switch(wp[2]){
			case 0x0000000000006361:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6C617473797263:
		switch(wp[1]){
		case 0x636968706172676F:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		case 0x7473696D6568636F:
			switch(wp[2]){
			case 0x0000000000007972:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6C65746E696E75:
		switch(wp[1]){
		case 0x656E656C62696769:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6C696D74736F70:
		switch(wp[1]){
		case 0x696E616972616E65:
			switch(wp[2]){
			case 0x0000000000006D73:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6F647265707968:
		switch(wp[1]){
		case 0x687065636F686369:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6F656863617274:
		switch(wp[1]){
		case 0x6F746F676E797261:
			switch(wp[2]){
			case 0x000000000000796D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6F68746870616E:
		switch(wp[1]){
		case 0x616E6F68706C7573:
			switch(wp[2]){
			case 0x0000000000006574:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6F697265747261:
		switch(wp[1]){
		case 0x736F72656C63736F:
			switch(wp[2]){
			case 0x0000000000007369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6F6C756373756D:
		switch(wp[1]){
		case 0x6F746E656D616769:
			switch(wp[2]){
			case 0x0000000000007375:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C6F727463656C65:
		switch(wp[1]){
		case 0x656373656E696D75:
			switch(wp[2]){
			case 0x000000000000746E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C7265746E756F63:
		switch(wp[1]){
		case 0x6974616C73696765:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C736E6172746E75:
		switch(wp[1]){
		case 0x656E656C62617461:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C756269646E616D:
		switch(wp[1]){
		case 0x616C6C6978616D6F:
			switch(wp[2]){
			case 0x0000000000007972:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C75637265627574:
		switch(wp[1]){
		case 0x61696461726F7461:
			switch(wp[2]){
			case 0x0000000000006574:return 1;
			default:return 0;
			}
		case 0x697061726568746F:
			switch(wp[2]){
			case 0x0000000000007473:return 1;
			default:return 0;
			}
		case 0x69726F746365736F:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		case 0x6F626269676F7461:
			switch(wp[2]){
			case 0x0000000000007375:return 1;
			default:return 0;
			}
		case 0x6F6E6970736F7461:
			switch(wp[2]){
			case 0x0000000000007375:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C75676E61697274:
		switch(wp[1]){
		case 0x64696D617279706F:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C7572656D6F6C67:
		switch(wp[1]){
		case 0x7469726870656E6F:
			switch(wp[2]){
			case 0x0000000000007369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6C79636F7461766F:
		switch(wp[1]){
		case 0x6F65636172646E69:
			switch(wp[2]){
			case 0x0000000000007375:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D65646E69657270:
		switch(wp[1]){
		case 0x697461636966696E:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D65647265707573:
		switch(wp[1]){
		case 0x6974617274736E6F:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6C61687468706F:
		switch(wp[1]){
		case 0x6C61687065636E65:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		case 0x6F6E69637261636F:
			switch(wp[2]){
			case 0x000000000000616D:return 1;
			default:return 0;
			}
		case 0x736F6E676169646F:
			switch(wp[2]){
			case 0x0000000000007369:return 1;
			default:return 0;
			}
		case 0x74656D6F6E6F746F:
			switch(wp[2]){
			case 0x0000000000007265:return 1;
			case 0x0000000000007972:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6D6F6363616E75:
		switch(wp[1]){
		case 0x656E64657461646F:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6F636172746E69:
		switch(wp[1]){
		case 0x69746163696E756D:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6F636361657270:
		switch(wp[1]){
		case 0x676E697461646F6D:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6F636973796870:
		switch(wp[1]){
		case 0x6974616D65687461:
			switch(wp[2]){
			case 0x0000000000007363:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6F637265707573:
		switch(wp[1]){
		case 0x69736E6568657270:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6F637265746E69:
		switch(wp[1]){
		case 0x61746E656D696C70:
			switch(wp[2]){
			case 0x0000000000007972:return 1;
			default:return 0;
			}
		case 0x69746163696E756D:
			switch(wp[2]){
			case 0x0000000000006576:return 1;
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6F696469707968:
		switch(wp[1]){
		case 0x6C6163696870726F:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D6F72646E6F6863:
		switch(wp[1]){
		case 0x6F637261736F7879:
			switch(wp[2]){
			case 0x000000000000616D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D726168706F6F7A:
		switch(wp[1]){
		case 0x6369676F6C6F6361:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D72657465646E69:
		switch(wp[1]){
		case 0x656E656C62616E69:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D7265746E696E75:
		switch(wp[1]){
		case 0x656E676E69747469:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D7265746E756F63:
		switch(wp[1]){
		case 0x6974616E69686361:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D75637269636E75:
		switch(wp[1]){
		case 0x6269747069726373:
			switch(wp[2]){
			case 0x000000000000656C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D79646964697065:
		switch(wp[1]){
		case 0x6F74736F7361766F:
			switch(wp[2]){
			case 0x000000000000796D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D79686F746F7270:
		switch(wp[1]){
		case 0x6F726574706F6E65:
			switch(wp[2]){
			case 0x0000000000007375:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6D79736F6874726F:
		switch(wp[1]){
		case 0x6C6163697274656D:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E616761706F7270:
		switch(wp[1]){
		case 0x6C61636974736964:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E61686378656E75:
		switch(wp[1]){
		case 0x656E656C62616567:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E616F6475657370:
		switch(wp[1]){
		case 0x6F6C6F706F726874:
			switch(wp[2]){
			case 0x0000000000007967:return 1;
			default:return 0;
			}
		case 0x7463616C79687061:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E616F65616C6170:
		switch(wp[1]){
		case 0x6F6C6F706F726874:
			switch(wp[2]){
			case 0x0000000000007967:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E616F6863797370:
		switch(wp[1]){
		case 0x6C61636974796C61:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E617571696D6573:
		switch(wp[1]){
		case 0x6576697461746974:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E65646F656C6170:
		switch(wp[1]){
		case 0x6369676F6C6F7264:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6567746E656F72:
		switch(wp[1]){
		case 0x6C616369676F6C6F:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E656963736E6F63:
		switch(wp[1]){
		case 0x656E7373656C6563:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E656D69746E6573:
		switch(wp[1]){
		case 0x6974617A696C6174:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E656D6D6F636E69:
		switch(wp[1]){
		case 0x656E657461727573:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		case 0x696C696261727573:
			switch(wp[2]){
			case 0x0000000000007974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E656D6D6F636E75:
		switch(wp[1]){
		case 0x696C696261727573:
			switch(wp[2]){
			case 0x0000000000007974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E656D6F6E656870:
		switch(wp[1]){
		case 0x6C616369676F6C6F:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E656F6475657370:
		switch(wp[1]){
		case 0x74696C6168706563:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		case 0x7473616973756874:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E656F6D75656E70:
		switch(wp[1]){
		case 0x74696C6168706563:
			switch(wp[2]){
			case 0x0000000000007369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E656F7274736167:
		switch(wp[1]){
		case 0x69676F6C6F726574:
			switch(wp[2]){
			case 0x0000000000007473:return 1;
			default:return 0;
			}
		case 0x736F74706F726574:
			switch(wp[2]){
			case 0x0000000000007369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E65707265746E69:
		switch(wp[1]){
		case 0x6576697461727465:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E65726172707573:
		switch(wp[1]){
		case 0x696D6F7463656C61:
			switch(wp[2]){
			case 0x000000000000657A:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E65736572706572:
		switch(wp[1]){
		case 0x656E657669746174:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		case 0x6873657669746174:
			switch(wp[2]){
			case 0x0000000000007069:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E65736F746F6870:
		switch(wp[1]){
		case 0x656E657669746973:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		case 0x6974617A69746973:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E65737265707573:
		switch(wp[1]){
		case 0x656E657669746973:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		case 0x6974617A69746973:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E65737265707968:
		switch(wp[1]){
		case 0x656E657669746973:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		case 0x6974617A69746973:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E676F6365726E75:
		switch(wp[1]){
		case 0x656E656C62617A69:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E676F72706E6F6E:
		switch(wp[1]){
		case 0x697461636974736F:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E68636E616C7073:
		switch(wp[1]){
		case 0x636968706172676F:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		case 0x69737968706F7061:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		case 0x736174736169646F:
			switch(wp[2]){
			case 0x0000000000007369:return 1;
			default:return 0;
			}
		case 0x736F72656C63736F:
			switch(wp[2]){
			case 0x0000000000007369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E69636F62726163:
		switch(wp[1]){
		case 0x6E6F72656D6F6863:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E69636F69646172:
		switch(wp[1]){
		case 0x6172676F74616D65:
			switch(wp[2]){
			case 0x0000000000006870:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E69636F6E6F6870:
		switch(wp[1]){
		case 0x6172676F74616D65:
			switch(wp[2]){
			case 0x0000000000006870:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E69636F7263696D:
		switch(wp[1]){
		case 0x6172676F74616D65:
			switch(wp[2]){
			case 0x0000000000006870:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E696D6F7263696D:
		switch(wp[1]){
		case 0x6369676F6C617265:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E696F7265746568:
		switch(wp[1]){
		case 0x6974616369786F74:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E696F7470797263:
		switch(wp[1]){
		case 0x696E6F6974616C66:
			switch(wp[2]){
			case 0x0000000000007473:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E69747369646E75:
		switch(wp[1]){
		case 0x676E696873697567:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6D6F73696D6573:
		switch(wp[1]){
		case 0x7473696C75626D61:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6F636172707573:
		switch(wp[1]){
		case 0x656E73756F696373:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6F636172746C75:
		switch(wp[1]){
		case 0x6F69746E65696373:
			switch(wp[2]){
			case 0x0000000000007375:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6F636F6D656168:
		switch(wp[1]){
		case 0x69746172746E6563:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6F636F72746572:
		switch(wp[1]){
		case 0x656E73756F696373:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6F637265646E75:
		switch(wp[1]){
		case 0x656E73756F696373:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6F637265707573:
		switch(wp[1]){
		case 0x656E73756F696373:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6F637265707968:
		switch(wp[1]){
		case 0x656E73756F696373:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		case 0x69746172746E6563:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		case 0x6F69746E65696373:
			switch(wp[2]){
			case 0x0000000000007375:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6F637265746E69:
		switch(wp[1]){
		case 0x6974636964617274:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		case 0x6F74636964617274:
			switch(wp[2]){
			case 0x0000000000007972:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6F68636F78796D:
		switch(wp[1]){
		case 0x6F637261736F7264:
			switch(wp[2]){
			case 0x000000000000616D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6F6D6974736574:
		switch(wp[1]){
		case 0x6974617A696C6169:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6F726479686964:
		switch(wp[1]){
		case 0x656C616874687061:
			switch(wp[2]){
			case 0x000000000000656E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E6F726574657275:
		switch(wp[1]){
		case 0x6F74636572687065:
			switch(wp[2]){
			case 0x000000000000796D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E72657075736E75:
		switch(wp[1]){
		case 0x7A696C6172757461:
			switch(wp[2]){
			case 0x0000000000006465:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E756D6D6F636E69:
		switch(wp[1]){
		case 0x656E656C62616369:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E756D6D6F636E75:
		switch(wp[1]){
		case 0x656E656C62616369:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6E79736F746F6870:
		switch(wp[1]){
		case 0x6C61636974656874:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F63616D72616870:
		switch(wp[1]){
		case 0x6F6C6F6863797370:
			switch(wp[2]){
			case 0x0000000000007967:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F636361696D6573:
		switch(wp[1]){
		case 0x656D6873696C706D:
			switch(wp[2]){
			case 0x000000000000746E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F63697264617571:
		switch(wp[1]){
		case 0x6F6E6F64656C7974:
			switch(wp[2]){
			case 0x0000000000007375:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F63697265687073:
		switch(wp[1]){
		case 0x6C75676E61697274:
			switch(wp[2]){
			case 0x0000000000007261:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F636974616D6F73:
		switch(wp[1]){
		case 0x6E68636E616C7073:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F636F6475657370:
		switch(wp[1]){
		case 0x6172656D6F6C676E:
			switch(wp[2]){
			case 0x0000000000006574:return 1;
			default:return 0;
			}
		case 0x697461767265736E:
			switch(wp[2]){
			case 0x0000000000006576:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F636F6572657473:
		switch(wp[1]){
		case 0x617267617261706D:
			switch(wp[2]){
			case 0x0000000000006870:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F636F6D6F726863:
		switch(wp[1]){
		case 0x68706172676F6C6C:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F636F72656C6373:
		switch(wp[1]){
		case 0x766974636E756A6E:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F63726574657270:
		switch(wp[1]){
		case 0x6E6F69746E65766E:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F63736964657270:
		switch(wp[1]){
		case 0x697461756E69746E:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F64696F6D676973:
		switch(wp[1]){
		case 0x6F74736F74636572:
			switch(wp[2]){
			case 0x000000000000796D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6473696B617964:
		switch(wp[1]){
		case 0x7264656861636564:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F656E61636C6163:
		switch(wp[1]){
		case 0x6C61676172747361:
			switch(wp[2]){
			case 0x0000000000007261:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F657261636C6163:
		switch(wp[1]){
		case 0x6F6E696D75746962:
			switch(wp[2]){
			case 0x0000000000007375:return 1;
			default:return 0;
			}
		case 0x6F727568706C7573:
			switch(wp[2]){
			case 0x0000000000007375:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F666D6F63736964:
		switch(wp[1]){
		case 0x656E656C62617472:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F676972746E6F6E:
		switch(wp[1]){
		case 0x63697274656D6F6E:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F676E69706C6173:
		switch(wp[1]){
		case 0x65676E7972616870:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			case 0x0000000000007375:return 1;
			default:return 0;
			}
		case 0x696C796870617473:
			switch(wp[2]){
			case 0x000000000000656E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F676E7972616870:
		switch(wp[1]){
		case 0x616968636E617262:
			switch(wp[2]){
			case 0x0000000000006574:return 1;
			default:return 0;
			}
		case 0x65676168706F7365:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		case 0x6F63736F6E696872:
			switch(wp[2]){
			case 0x0000000000007970:return 1;
			default:return 0;
			}
		case 0x7469676E7972616C:
			switch(wp[2]){
			case 0x0000000000007369:return 1;
			default:return 0;
			}
		case 0x74746F6C67697065:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F68636F6574736F:
		switch(wp[1]){
		case 0x6F74616D6F72646E:
			switch(wp[2]){
			case 0x0000000000007375:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F68636F69676E61:
		switch(wp[1]){
		case 0x746974737963656C:
			switch(wp[2]){
			case 0x0000000000007369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F68706F72747361:
		switch(wp[1]){
		case 0x63697274656D6F74:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F69646570617473:
		switch(wp[1]){
		case 0x6C75626974736576:
			switch(wp[2]){
			case 0x0000000000007261:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F696863696F7473:
		switch(wp[1]){
		case 0x6C6163697274656D:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F696C6568616964:
		switch(wp[1]){
		case 0x6C616369706F7274:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F696C6F6E656461:
		switch(wp[1]){
		case 0x6F726269666F796D:
			switch(wp[2]){
			case 0x000000000000616D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F69726574636162:
		switch(wp[1]){
		case 0x637365726F756C66:
			switch(wp[2]){
			case 0x0000000000006E69:return 1;
			default:return 0;
			}
		case 0x6C616369706F6373:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		case 0x6E6974756C676761:
			switch(wp[2]){
			case 0x0000000000006E69:return 1;
			default:return 0;
			}
		case 0x7469706963657270:
			switch(wp[2]){
			case 0x0000000000006E69:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F69726574736F70:
		switch(wp[1]){
		case 0x6C61636974736972:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F69736568747365:
		switch(wp[1]){
		case 0x6F6C6F6973796870:
			switch(wp[2]){
			case 0x0000000000007967:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F697A6570617274:
		switch(wp[1]){
		case 0x707261636174656D:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6C656863617274:
		switch(wp[1]){
		case 0x6C61696D6F726361:
			switch(wp[2]){
			case 0x0000000000007369:return 1;
			default:return 0;
			}
		case 0x6C75636976616C63:
			switch(wp[2]){
			case 0x0000000000007261:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6C6870696D6573:
		switch(wp[1]){
		case 0x7461636974736967:
			switch(wp[2]){
			case 0x0000000000006465:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6C6F656C63756E:
		switch(wp[1]){
		case 0x6F736F72746E6563:
			switch(wp[2]){
			case 0x000000000000656D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6C756369736576:
		switch(wp[1]){
		case 0x74696E61706D7974:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6C796870617473:
		switch(wp[1]){
		case 0x746974616D726564:
			switch(wp[2]){
			case 0x0000000000007369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6D796C676E6967:
		switch(wp[1]){
		case 0x69646F7268747261:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6E6172626D656D:
		switch(wp[1]){
		case 0x6F65636169726F63:
			switch(wp[2]){
			case 0x0000000000007375:return 1;
			default:return 0;
			}
		case 0x6F657261636C6163:
			switch(wp[2]){
			case 0x0000000000007375:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6E6564696E6D6F:
		switch(wp[1]){
		case 0x6E6F6974616E696D:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6E6564796C6F70:
		switch(wp[1]){
		case 0x6E6F6974616E696D:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6E656874726170:
		switch(wp[1]){
		case 0x6C61636970726163:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6E6B6361736964:
		switch(wp[1]){
		case 0x656D656764656C77:
			switch(wp[2]){
			case 0x000000000000746E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6E6F6D75656E70:
		switch(wp[1]){
		case 0x6C65706973797265:
			switch(wp[2]){
			case 0x0000000000007361:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F6F727463656C65:
		switch(wp[1]){
		case 0x6C616369746F6D73:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F706172746E6F63:
		switch(wp[1]){
		case 0x6974617A6972616C:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F70697571656E69:
		switch(wp[1]){
		case 0x696C6169746E6574:
			switch(wp[2]){
			case 0x0000000000007974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F706F7268746E61:
		switch(wp[1]){
		case 0x68706172676F6567:
			switch(wp[2]){
			case 0x0000000000007265:return 1;
			default:return 0;
			}
		case 0x6974696870726F6D:
			switch(wp[2]){
			case 0x0000000000006D73:return 1;
			default:return 0;
			}
		case 0x6C61636968746170:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		case 0x6C6163697274656D:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		case 0x6F6C636F656C6574:
			switch(wp[2]){
			case 0x0000000000007967:return 1;
			default:return 0;
			}
		case 0x6F6C6F6870726F6D:
			switch(wp[2]){
			case 0x0000000000007967:return 1;
			default:return 0;
			}
		case 0x6F6C6F74616D6F73:
			switch(wp[2]){
			case 0x0000000000007967:return 1;
			default:return 0;
			}
		case 0x73756F6870726F6D:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F706F7270736964:
		switch(wp[1]){
		case 0x6574616E6F697472:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		case 0x696C616E6F697472:
			switch(wp[2]){
			case 0x0000000000007974:return 1;
			default:return 0;
			}
		case 0x6974616E6F697472:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F70707573657270:
		switch(wp[1]){
		case 0x656C6E6F69746973:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F70736572726F63:
		switch(wp[1]){
		case 0x6C6169746E65646E:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F72616863636173:
		switch(wp[1]){
		case 0x696C6F626174656D:
			switch(wp[2]){
			case 0x0000000000006D73:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F72616870656C62:
		switch(wp[1]){
		case 0x73616C7079726870:
			switch(wp[2]){
			case 0x0000000000007974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F7263696D627573:
		switch(wp[1]){
		case 0x6C616369706F6373:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F72647968726570:
		switch(wp[1]){
		case 0x6563617268746E61:
			switch(wp[2]){
			case 0x000000000000656E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F7265746F6C6574:
		switch(wp[1]){
		case 0x6C61636968746170:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F726863796C6F70:
		switch(wp[1]){
		case 0x6C6968706F74616D:
			switch(wp[2]){
			case 0x0000000000006169:return 1;
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F7268746E616564:
		switch(wp[1]){
		case 0x696870726F6D6F70:
			switch(wp[2]){
			case 0x000000000000657A:return 1;
			case 0x0000000000006D73:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F72706D6F636E75:
		switch(wp[1]){
		case 0x656E676E6973696D:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F72746E696E6F6E:
		switch(wp[1]){
		case 0x6576697463657073:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F72746E6F636E75:
		switch(wp[1]){
		case 0x656E656C62616C6C:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F72747369636E61:
		switch(wp[1]){
		case 0x6F65636164616C63:
			switch(wp[2]){
			case 0x0000000000007375:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F73696F746F6870:
		switch(wp[1]){
		case 0x6974617A6972656D:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F736F6973796870:
		switch(wp[1]){
		case 0x6369676F6C6F6963:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F736F6D61757173:
		switch(wp[1]){
		case 0x7461636972626D69:
			switch(wp[2]){
			case 0x0000000000006465:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F737265706E6F6E:
		switch(wp[1]){
		case 0x697461636966696E:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F73726570736964:
		switch(wp[1]){
		case 0x6369676F6C6F6469:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		case 0x697461636966696E:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F74616D75656E70:
		switch(wp[1]){
		case 0x706F736F6C696870:
			switch(wp[2]){
			case 0x0000000000007968:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F74617264617571:
		switch(wp[1]){
		case 0x6C756269646E616D:
			switch(wp[2]){
			case 0x0000000000007261:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F746174736F7270:
		switch(wp[1]){
		case 0x6F7463656D6F796D:
			switch(wp[2]){
			case 0x000000000000796D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F7469706963636F:
		switch(wp[1]){
		case 0x64696F6E65687073:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x6F74736972616E75:
		switch(wp[1]){
		case 0x6C61636974617263:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x70616E6169746E61:
		switch(wp[1]){
		case 0x676F7463616C7968:
			switch(wp[2]){
			case 0x0000000000006E65:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x70616F6475657370:
		switch(wp[1]){
		case 0x74696369646E6570:
			switch(wp[2]){
			case 0x0000000000007369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7061747369746E61:
		switch(wp[1]){
		case 0x63636F636F6C7968:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x70656C6F7263616D:
		switch(wp[1]){
		case 0x6F726574706F6469:
			switch(wp[2]){
			case 0x0000000000007375:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x70656C6F7263696D:
		switch(wp[1]){
		case 0x69726574706F6469:
			switch(wp[2]){
			case 0x0000000000007473:return 1;
			default:return 0;
			}
		case 0x6F726574706F6469:
			switch(wp[2]){
			case 0x0000000000007375:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x70656C7265707968:
		switch(wp[1]){
		case 0x706F736F72706F74:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7065746E61657270:
		switch(wp[1]){
		case 0x616D69746C756E65:
			switch(wp[2]){
			case 0x0000000000006574:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7069726563736976:
		switch(wp[1]){
		case 0x6964726163697265:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706C7573796C6F70:
		switch(wp[1]){
		case 0x6974617A69727568:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706D6578656E6F6E:
		switch(wp[1]){
		case 0x697461636966696C:
			switch(wp[2]){
			case 0x000000000000726F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706D69737265766F:
		switch(wp[1]){
		case 0x697461636966696C:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706D6F6363616E75:
		switch(wp[1]){
		case 0x656E64656873696C:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706D6F6365646E69:
		switch(wp[1]){
		case 0x656E656C6261736F:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F676E7972616C:
		switch(wp[1]){
		case 0x7469676E79726168:
			switch(wp[2]){
			case 0x0000000000007369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F6E61766C6167:
		switch(wp[1]){
		case 0x6C6163697473616C:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F726563736976:
		switch(wp[1]){
		case 0x656E6F6974697265:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F72656D6F6C67:
		switch(wp[1]){
		case 0x746972796870726F:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F726574657275:
		switch(wp[1]){
		case 0x6F74736F74636F72:
			switch(wp[2]){
			case 0x000000000000796D:return 1;
			default:return 0;
			}
		case 0x706172676F6C6579:
			switch(wp[2]){
			case 0x0000000000007968:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F727070616E69:
		switch(wp[1]){
		case 0x656E656C62616972:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F72707265766F:
		switch(wp[1]){
		case 0x74616E6F6974726F:
			switch(wp[2]){
			case 0x0000000000006465:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F727463657073:
		switch(wp[1]){
		case 0x6F63736972616C6F:
			switch(wp[2]){
			case 0x0000000000006570:return 1;
			default:return 0;
			}
		case 0x706172676F746F68:
			switch(wp[2]){
			case 0x0000000000007968:return 1;
			default:return 0;
			}
		case 0x7274656D6F746F68:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		case 0x74656D6972616C6F:
			switch(wp[2]){
			case 0x0000000000007265:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F72746F726361:
		switch(wp[1]){
		case 0x736F7275656E6F68:
			switch(wp[2]){
			case 0x0000000000007369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F737265707968:
		switch(wp[1]){
		case 0x7461636974736968:
			switch(wp[2]){
			case 0x0000000000006465:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F74616D726564:
		switch(wp[1]){
		case 0x626F68706F687461:
			switch(wp[2]){
			case 0x0000000000006169:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F746F746F6870:
		switch(wp[1]){
		case 0x636968706172676F:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F746F74796870:
		switch(wp[1]){
		case 0x636968706172676F:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x706F796874686369:
		switch(wp[1]){
		case 0x7361697269687468:
			switch(wp[2]){
			case 0x0000000000007369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x707265746E656E75:
		switch(wp[1]){
		case 0x656E676E69736972:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x707265746E756F63:
		switch(wp[1]){
		case 0x6974617261706572:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		case 0x697469736F706F72:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x70726F636E696E75:
		switch(wp[1]){
		case 0x656E64657461726F:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x70726F6D796C6F70:
		switch(wp[1]){
		case 0x61656C63756E6F68:
			switch(wp[2]){
			case 0x0000000000006574:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x70736572696D6573:
		switch(wp[1]){
		case 0x696C696261746365:
			switch(wp[2]){
			case 0x0000000000007974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x70736F6964726163:
		switch(wp[1]){
		case 0x6172676F6D677968:
			switch(wp[2]){
			case 0x0000000000006870:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x70736F74616D6568:
		switch(wp[1]){
		case 0x65636F74616D7265:
			switch(wp[2]){
			case 0x000000000000656C:return 1;
			default:return 0;
			}
		case 0x6F63736F72746365:
			switch(wp[2]){
			case 0x0000000000006570:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7075737265707573:
		switch(wp[1]){
		case 0x61646E7562617265:
			switch(wp[2]){
			case 0x000000000000746E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7079687968746162:
		switch(wp[1]){
		case 0x7365687473657265:
			switch(wp[2]){
			case 0x0000000000006169:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x71656F6475657370:
		switch(wp[1]){
		case 0x69726174696C6175:
			switch(wp[2]){
			case 0x0000000000006E61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7165736E6F636E69:
		switch(wp[1]){
		case 0x696C6169746E6575:
			switch(wp[2]){
			case 0x0000000000007974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7178657265707573:
		switch(wp[1]){
		case 0x656E657469736975:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7261636172746E69:
		switch(wp[1]){
		case 0x6F6E6967616C6974:
			switch(wp[2]){
			case 0x0000000000007375:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7261636974736F63:
		switch(wp[1]){
		case 0x6F6E6967616C6974:
			switch(wp[2]){
			case 0x0000000000007375:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7261636F6573736F:
		switch(wp[1]){
		case 0x6F6E6967616C6974:
			switch(wp[2]){
			case 0x0000000000007375:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7261636F6574736F:
		switch(wp[1]){
		case 0x6F6E6967616C6974:
			switch(wp[2]){
			case 0x0000000000007375:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7261636F6E656461:
		switch(wp[1]){
		case 0x6F74616D6F6E6963:
			switch(wp[2]){
			case 0x0000000000007375:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7261636F72626966:
		switch(wp[1]){
		case 0x6F6E6967616C6974:
			switch(wp[2]){
			case 0x0000000000007375:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7261637265707573:
		switch(wp[1]){
		case 0x6974617A696E6F62:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7261637265746E69:
		switch(wp[1]){
		case 0x6F6E6967616C6974:
			switch(wp[2]){
			case 0x0000000000007375:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x72616E6F6D6F7270:
		switch(wp[1]){
		case 0x656E6C6163696863:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x72616F6475657370:
		switch(wp[1]){
		case 0x6974616C75636974:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		case 0x746172636F747369:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x72616F6572796874:
		switch(wp[1]){
		case 0x6564696F6E657479:
			switch(wp[2]){
			case 0x0000000000007375:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7261706172747865:
		switch(wp[1]){
		case 0x61746E656D61696C:
			switch(wp[2]){
			case 0x0000000000007972:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7261707265646E75:
		switch(wp[1]){
		case 0x6974617069636974:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7261707265707573:
		switch(wp[1]){
		case 0x61746E656D61696C:
			switch(wp[2]){
			case 0x0000000000007972:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7261707265746E69:
		switch(wp[1]){
		case 0x61746E656D61696C:
			switch(wp[2]){
			case 0x0000000000007972:return 1;
			default:return 0;
			}
		case 0x6369746568746E65:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x726174656C6F7270:
		switch(wp[1]){
		case 0x6974617A696E6169:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x72636F7473697261:
		switch(wp[1]){
		case 0x656E6C6163697461:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7263736172747865:
		switch(wp[1]){
		case 0x696C617275747069:
			switch(wp[2]){
			case 0x0000000000007974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7263736572706D69:
		switch(wp[1]){
		case 0x696C696269747069:
			switch(wp[2]){
			case 0x0000000000007974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x72647968656C6574:
		switch(wp[1]){
		case 0x74656D6F7261626F:
			switch(wp[2]){
			case 0x0000000000007265:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x72647968696D6573:
		switch(wp[1]){
		case 0x6E696F7A6E65626F:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7265637369646E69:
		switch(wp[1]){
		case 0x656E656C62697470:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7265646E756E6F6E:
		switch(wp[1]){
		case 0x676E69646E617473:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7265646E7573696D:
		switch(wp[1]){
		case 0x676E69646E617473:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7265686F656C6170:
		switch(wp[1]){
		case 0x69676F6C6F746570:
			switch(wp[2]){
			case 0x0000000000007473:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x72656F6C75706170:
		switch(wp[1]){
		case 0x6F74616D65687479:
			switch(wp[2]){
			case 0x0000000000007375:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7265706F706C6F63:
		switch(wp[1]){
		case 0x73616C706F656E69:
			switch(wp[2]){
			case 0x0000000000007974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7265707573657270:
		switch(wp[1]){
		case 0x6E65646E65746E69:
			switch(wp[2]){
			case 0x0000000000006563:return 1;
			case 0x0000000000007963:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7265736F74796870:
		switch(wp[1]){
		case 0x6C616369676F6C6F:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7265746172747865:
		switch(wp[1]){
		case 0x6C6169726F746972:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7265746564657270:
		switch(wp[1]){
		case 0x696C6962616E696D:
			switch(wp[2]){
			case 0x0000000000007974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7265746E696E6F6E:
		switch(wp[1]){
		case 0x626165676E616863:
			switch(wp[2]){
			case 0x000000000000656C:return 1;
			default:return 0;
			}
		case 0x696E6F69746E6576:
			switch(wp[2]){
			case 0x0000000000007473:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7265746F74796870:
		switch(wp[1]){
		case 0x6369676F6C6F7461:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x72657669646E6F6E:
		switch(wp[1]){
		case 0x6974616369666973:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x726576736E617274:
		switch(wp[1]){
		case 0x6369747265766F73:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7268636F72747361:
		switch(wp[1]){
		case 0x6369676F6C6F6E6F:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7268636F746F6870:
		switch(wp[1]){
		case 0x68706172676F6E6F:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x726870616D726568:
		switch(wp[1]){
		case 0x6C6163697469646F:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7268746E61656361:
		switch(wp[1]){
		case 0x6F6E697571656E65:
			switch(wp[2]){
			case 0x000000000000656E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x726F696863617262:
		switch(wp[1]){
		case 0x6964696863616872:
			switch(wp[2]){
			case 0x0000000000006E61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x726F6D6F72656874:
		switch(wp[1]){
		case 0x6369676F6C6F6870:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x726F6D6F74736968:
		switch(wp[1]){
		case 0x6369676F6C6F6870:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x726F706D65747865:
		switch(wp[1]){
		case 0x656E73756F656E61:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x726F706F72706E75:
		switch(wp[1]){
		case 0x656E64656E6F6974:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x726F726574657275:
		switch(wp[1]){
		case 0x706172676F696461:
			switch(wp[2]){
			case 0x0000000000007968:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x726F727463657073:
		switch(wp[1]){
		case 0x7274656D6F696461:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x726F746972726574:
		switch(wp[1]){
		case 0x6974617A696C6169:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7270657268637261:
		switch(wp[1]){
		case 0x697461746E657365:
			switch(wp[2]){
			case 0x0000000000006576:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x72706572696E6D6F:
		switch(wp[1]){
		case 0x697461746E657365:
			switch(wp[2]){
			case 0x0000000000006576:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x727065727265766F:
		switch(wp[1]){
		case 0x697461746E657365:
			switch(wp[2]){
			case 0x0000000000006576:return 1;
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x72706F6475657370:
		switch(wp[1]){
		case 0x69726F737365666F:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		case 0x6E6F69737365666F:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x727265746E756F63:
		switch(wp[1]){
		case 0x617274736E6F6D65:
			switch(wp[2]){
			case 0x000000000000746E:return 1;
			default:return 0;
			}
		case 0x6974616D726F6665:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		case 0x697461726F747365:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7272657478656E75:
		switch(wp[1]){
		case 0x696C6169726F7469:
			switch(wp[2]){
			case 0x0000000000007974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7274616D69746E61:
		switch(wp[1]){
		case 0x696C61696E6F6D69:
			switch(wp[2]){
			case 0x0000000000007473:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x72746F726170616C:
		switch(wp[1]){
		case 0x6F746F6C65686361:
			switch(wp[2]){
			case 0x000000000000796D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7274736E6F636572:
		switch(wp[1]){
		case 0x656E657669746375:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x73616F6475657370:
		switch(wp[1]){
		case 0x63697274656D6D79:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x736275736E617274:
		switch(wp[1]){
		case 0x69746169746E6174:
			switch(wp[2]){
			case 0x0000000000006576:return 1;
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		case 0x6F746169746E6174:
			switch(wp[2]){
			case 0x0000000000007972:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x736572706F636E69:
		switch(wp[1]){
		case 0x696C696261746E65:
			switch(wp[2]){
			case 0x0000000000007974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7365737265707573:
		switch(wp[1]){
		case 0x6974726574697571:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7369686F7263696D:
		switch(wp[1]){
		case 0x63696D6568636F74:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x73696B6172746574:
		switch(wp[1]){
		case 0x7264656861786568:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x73696C6261747365:
		switch(wp[1]){
		case 0x697261746E656D68:
			switch(wp[2]){
			case 0x0000000000006E61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x736C796874656964:
		switch(wp[1]){
		case 0x72747365626C6974:
			switch(wp[2]){
			case 0x0000000000006C6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x736E6172746E6F6E:
		switch(wp[1]){
		case 0x696C696261726566:
			switch(wp[2]){
			case 0x0000000000007974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x736E6F6369746E61:
		switch(wp[1]){
		case 0x6E6F697475746974:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x736E6F637265766F:
		switch(wp[1]){
		case 0x6576697461767265:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x736E6F6D65646E69:
		switch(wp[1]){
		case 0x656E656C62617274:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x736F637265746E69:
		switch(wp[1]){
		case 0x6968636172626F74:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x736F676E7972616C:
		switch(wp[1]){
		case 0x6F63736F626F7274:
			switch(wp[2]){
			case 0x0000000000006570:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x736F686372616E61:
		switch(wp[1]){
		case 0x696C616369646E79:
			switch(wp[2]){
			case 0x0000000000006D73:return 1;
			case 0x0000000000007473:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x736F6870696D6573:
		switch(wp[1]){
		case 0x65637365726F6870:
			switch(wp[2]){
			case 0x000000000000746E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x736F6C756E697073:
		switch(wp[1]){
		case 0x616C756E6172676F:
			switch(wp[2]){
			case 0x0000000000006574:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x736F72646E6F6863:
		switch(wp[1]){
		case 0x6F74616D6F637261:
			switch(wp[2]){
			case 0x0000000000007375:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x736F7475656C6574:
		switch(wp[1]){
		case 0x6F72656669726F70:
			switch(wp[2]){
			case 0x0000000000007375:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x737265746E756F63:
		switch(wp[1]){
		case 0x6974616C756D6974:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x737361707265766F:
		switch(wp[1]){
		case 0x656E6574616E6F69:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x737568746E656E75:
		switch(wp[1]){
		case 0x6C61636974736169:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x73756A7265707573:
		switch(wp[1]){
		case 0x6974616369666974:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x737963656C6F6863:
		switch(wp[1]){
		case 0x6F746F6C6F636F74:
			switch(wp[2]){
			case 0x000000000000796D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74616572636E6170:
		switch(wp[1]){
		case 0x6E656C70736F6369:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74616D6F72746169:
		switch(wp[1]){
		case 0x69636974616D6568:
			switch(wp[2]){
			case 0x0000000000006E61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74616E6962727574:
		switch(wp[1]){
		case 0x617469706974736F:
			switch(wp[2]){
			case 0x0000000000006574:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7461706D79736E75:
		switch(wp[1]){
		case 0x696C6962617A6968:
			switch(wp[2]){
			case 0x0000000000007974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7463656C656E6F6E:
		switch(wp[1]){
		case 0x6974616369666972:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7463656C656F7270:
		switch(wp[1]){
		case 0x6974616369666972:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7463656C65736964:
		switch(wp[1]){
		case 0x6974616369666972:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7465646F7263696D:
		switch(wp[1]){
		case 0x6974616E696D7265:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7465647265746E69:
		switch(wp[1]){
		case 0x6974616E696D7265:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74656D68706C7573:
		switch(wp[1]){
		case 0x626F6C676F6D6568:
			switch(wp[2]){
			case 0x0000000000006E69:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74656D6F69646172:
		switch(wp[1]){
		case 0x706172676F6C6C61:
			switch(wp[2]){
			case 0x0000000000007968:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74656D6F6E617963:
		switch(wp[1]){
		case 0x626F6C676F6D6568:
			switch(wp[2]){
			case 0x0000000000006E69:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74656D6F7263696D:
		switch(wp[1]){
		case 0x706172676F6C6C61:
			switch(wp[2]){
			case 0x0000000000007968:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74656D6F72647968:
		switch(wp[1]){
		case 0x63696772756C6C61:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74656D6F72747361:
		switch(wp[1]){
		case 0x69676F6C6F726F65:
			switch(wp[2]){
			case 0x0000000000007473:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74656D7265707968:
		switch(wp[1]){
		case 0x736F6870726F6D61:
			switch(wp[2]){
			case 0x0000000000007369:return 1;
			default:return 0;
			}
		case 0x746F6870726F6D61:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74656E6F666C7573:
		switch(wp[1]){
		case 0x616874656D6C7968:
			switch(wp[2]){
			case 0x000000000000656E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74656F6475657370:
		switch(wp[1]){
		case 0x6369676F6C6F6D79:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74656F65616C6170:
		switch(wp[1]){
		case 0x6369676F6C6F6E68:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746575716E697571:
		switch(wp[1]){
		case 0x616C756372656275:
			switch(wp[2]){
			case 0x0000000000006574:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7469726970736564:
		switch(wp[1]){
		case 0x6974617A696C6175:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7469736F70707573:
		switch(wp[1]){
		case 0x656E73756F697469:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746C756D7265766F:
		switch(wp[1]){
		case 0x69746163696C7069:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746E616F6E696D61:
		switch(wp[1]){
		case 0x6F6E697571617268:
			switch(wp[2]){
			case 0x000000000000656E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746E656369746E61:
		switch(wp[1]){
		case 0x6974617A696C6172:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746E65637265766F:
		switch(wp[1]){
		case 0x6974617A696C6172:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746E65737265766F:
		switch(wp[1]){
		case 0x696C61746E656D69:
			switch(wp[2]){
			case 0x000000000000657A:return 1;
			case 0x0000000000006D73:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746E6574736F6E75:
		switch(wp[1]){
		case 0x656E73756F697461:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746E697265707573:
		switch(wp[1]){
		case 0x6873746E65646E65:
			switch(wp[2]){
			case 0x0000000000007069:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746E6973696D6E75:
		switch(wp[1]){
		case 0x6261746572707265:
			switch(wp[2]){
			case 0x000000000000656C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746E6F65616C6170:
		switch(wp[1]){
		case 0x636968706172676F:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746F636973796870:
		switch(wp[1]){
		case 0x6369676F6C6F6568:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		case 0x7475657061726568:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746F676E7972616C:
		switch(wp[1]){
		case 0x6F746F6568636172:
			switch(wp[2]){
			case 0x000000000000796D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746F6C6C6174656D:
		switch(wp[1]){
		case 0x7475657061726568:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746F6C6C61747561:
		switch(wp[1]){
		case 0x6870726F6D6F6972:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746F6C756373756D:
		switch(wp[1]){
		case 0x61746E656D756765:
			switch(wp[2]){
			case 0x0000000000007972:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746F6E616863656D:
		switch(wp[1]){
		case 0x7475657061726568:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746F6E61766C6167:
		switch(wp[1]){
		case 0x74656D6F6D726568:
			switch(wp[2]){
			case 0x0000000000007265:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746F726479686964:
		switch(wp[1]){
		case 0x7265747379686361:
			switch(wp[2]){
			case 0x0000000000006C6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746F727463656C65:
		switch(wp[1]){
		case 0x6870617267656C65:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		case 0x6972656D6F747561:
			switch(wp[2]){
			case 0x0000000000006D73:return 1;
			default:return 0;
			}
		case 0x74656D6F6D726568:
			switch(wp[2]){
			case 0x0000000000007265:return 1;
			default:return 0;
			}
		case 0x7475657061726568:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746F736F6E697073:
		switch(wp[1]){
		case 0x616C756372656275:
			switch(wp[2]){
			case 0x0000000000006574:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x746F74656E67616D:
		switch(wp[1]){
		case 0x7474696D736E6172:
			switch(wp[2]){
			case 0x0000000000007265:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7470656378656E75:
		switch(wp[1]){
		case 0x696C6962616E6F69:
			switch(wp[2]){
			case 0x0000000000007974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74706F646970656C:
		switch(wp[1]){
		case 0x6369676F6C6F7265:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74706F6E656D7968:
		switch(wp[1]){
		case 0x6369676F6C6F7265:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74706F7461726563:
		switch(wp[1]){
		case 0x6F65636164697265:
			switch(wp[2]){
			case 0x0000000000007375:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74726162656C6870:
		switch(wp[1]){
		case 0x7361746365697265:
			switch(wp[2]){
			case 0x0000000000006169:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x747265746E656E75:
		switch(wp[1]){
		case 0x656E676E696E6961:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x747265746E756F63:
		switch(wp[1]){
		case 0x6974616C736E6172:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74726F7265707968:
		switch(wp[1]){
		case 0x6F6874616E676F68:
			switch(wp[2]){
			case 0x0000000000007375:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x747361667265766F:
		switch(wp[1]){
		case 0x656E73756F696469:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x747362617265766F:
		switch(wp[1]){
		case 0x656E73756F696D65:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7473656D72656874:
		switch(wp[1]){
		case 0x74656D6F69736568:
			switch(wp[2]){
			case 0x0000000000007265:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7473657265707573:
		switch(wp[1]){
		case 0x656D6873696C6261:
			switch(wp[2]){
			case 0x000000000000746E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7473696863617262:
		switch(wp[1]){
		case 0x6F6C61687065636F:
			switch(wp[2]){
			case 0x0000000000007375:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7473696B61697274:
		switch(wp[1]){
		case 0x7264656861727465:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7473696B61786568:
		switch(wp[1]){
		case 0x7264656861727465:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7473697268636564:
		switch(wp[1]){
		case 0x6974617A696E6169:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74736D7563726963:
		switch(wp[1]){
		case 0x656E6C6169746E61:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74736E6970736E75:
		switch(wp[1]){
		case 0x656E656B696C7265:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74736F6475657370:
		switch(wp[1]){
		case 0x706F63736F657265:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x74736F7479726162:
		switch(wp[1]){
		case 0x696E6169746E6F72:
			switch(wp[2]){
			case 0x0000000000006574:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7473797263726570:
		switch(wp[1]){
		case 0x6974617A696C6C61:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x747379737265766F:
		switch(wp[1]){
		case 0x6C61636974616D65:
			switch(wp[2]){
			case 0x000000000000796C:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x75646F7274736167:
		switch(wp[1]){
		case 0x6F63736F6E65646F:
			switch(wp[2]){
			case 0x0000000000007970:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x75646F7461706568:
		switch(wp[1]){
		case 0x6F74736F6E65646F:
			switch(wp[2]){
			case 0x000000000000796D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x75666972746E6563:
		switch(wp[1]){
		case 0x6974617A696C6167:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x75676E6974736964:
		switch(wp[1]){
		case 0x696C696261687369:
			switch(wp[2]){
			case 0x0000000000007974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x756C6F6D72656874:
		switch(wp[1]){
		case 0x6E656373656E696D:
			switch(wp[2]){
			case 0x0000000000006563:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x756D6F6475657370:
		switch(wp[1]){
		case 0x617470657369746C:
			switch(wp[2]){
			case 0x0000000000006574:return 1;
			default:return 0;
			}
		case 0x6C75636F6C69746C:
			switch(wp[2]){
			case 0x0000000000007261:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x756F687465726F66:
		switch(wp[1]){
		case 0x656E6C7566746867:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x756F6D7275736E69:
		switch(wp[1]){
		case 0x656E656C6261746E:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x756F6D7275736E75:
		switch(wp[1]){
		case 0x656E656C6261746E:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x757263737265766F:
		switch(wp[1]){
		case 0x656E73756F6C7570:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x757270736972756A:
		switch(wp[1]){
		case 0x696C6169746E6564:
			switch(wp[2]){
			case 0x0000000000007473:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7572747365646E69:
		switch(wp[1]){
		case 0x656E656C62697463:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7573657274736F70:
		switch(wp[1]){
		case 0x6E6F697463657272:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x75736E6172746F63:
		switch(wp[1]){
		case 0x6169746E61747362:
			switch(wp[2]){
			case 0x0000000000006574:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x75746F6465726568:
		switch(wp[1]){
		case 0x736F6C7563726562:
			switch(wp[2]){
			case 0x0000000000007369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x75746F6475657370:
		switch(wp[1]){
		case 0x736F6C7563726562:
			switch(wp[2]){
			case 0x0000000000007369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x75746F726870656E:
		switch(wp[1]){
		case 0x736F6C7563726562:
			switch(wp[2]){
			case 0x0000000000007369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7665726172746C75:
		switch(wp[1]){
		case 0x616E6F6974756C6F:
			switch(wp[2]){
			case 0x0000000000007972:return 1;
			default:return 0;
			}
		case 0x696E6F6974756C6F:
			switch(wp[2]){
			case 0x0000000000007473:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7669646E696E6F6E:
		switch(wp[1]){
		case 0x7473696C61756469:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x766F637369646E75:
		switch(wp[1]){
		case 0x656E656C62617265:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7672656666656E69:
		switch(wp[1]){
		case 0x696C696269637365:
			switch(wp[2]){
			case 0x0000000000007974:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x767265746E756F63:
		switch(wp[1]){
		case 0x6974616369646E69:
			switch(wp[2]){
			case 0x0000000000006E6F:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x776F6E6B63616E75:
		switch(wp[1]){
		case 0x656E64656764656C:
			switch(wp[2]){
			case 0x0000000000007373:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x79636F72746E6576:
		switch(wp[1]){
		case 0x70616872726F7473:
			switch(wp[2]){
			case 0x0000000000007968:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7968617268746E61:
		switch(wp[1]){
		case 0x6F6E6975716F7264:
			switch(wp[2]){
			case 0x000000000000656E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x79686E6973706570:
		switch(wp[1]){
		case 0x726F6C68636F7264:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x79686F6475657370:
		switch(wp[1]){
		case 0x68706F7274726570:
			switch(wp[2]){
			case 0x0000000000006369:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x79686F697261766F:
		switch(wp[1]){
		case 0x6F74636572657473:
			switch(wp[2]){
			case 0x000000000000796D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x79686F726170616C:
		switch(wp[1]){
		case 0x6F74636572657473:
			switch(wp[2]){
			case 0x000000000000796D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x79686F7274736167:
		switch(wp[1]){
		case 0x6F74636572657473:
			switch(wp[2]){
			case 0x000000000000796D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7968706172747865:
		switch(wp[1]){
		case 0x6369676F6C6F6973:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7968706F7275656E:
		switch(wp[1]){
		case 0x6369676F6C6F6973:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7968706F74736968:
		switch(wp[1]){
		case 0x6369676F6C6F6973:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7968706F74796870:
		switch(wp[1]){
		case 0x6369676F6C6F6973:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7968726F68706F6F:
		switch(wp[1]){
		case 0x6F74636572657473:
			switch(wp[2]){
			case 0x000000000000796D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x796C677265707968:
		switch(wp[1]){
		case 0x6863616872726F63:
			switch(wp[2]){
			case 0x0000000000006169:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x796C6F74616D6568:
		switch(wp[1]){
		case 0x6F69676E6168706D:
			switch(wp[2]){
			case 0x000000000000616D:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x796E656870697274:
		switch(wp[1]){
		case 0x696870736F68706C:
			switch(wp[2]){
			case 0x000000000000656E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7972636F7263696D:
		switch(wp[1]){
		case 0x65676F6C6C617473:
			switch(wp[2]){
			case 0x000000000000796E:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x797265737570756C:
		switch(wp[1]){
		case 0x736F74616D656874:
			switch(wp[2]){
			case 0x0000000000007375:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7973706F656C6170:
		switch(wp[1]){
		case 0x6369676F6C6F6863:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7973706F6874726F:
		switch(wp[1]){
		case 0x6369727461696863:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7973706F6E687465:
		switch(wp[1]){
		case 0x6369676F6C6F6863:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x7973706F7275656E:
		switch(wp[1]){
		case 0x6369676F6C6F6863:
			switch(wp[2]){
			case 0x0000000000006C61:return 1;
			default:return 0;
			}
		default:return 0;
		}
	case 0x79746F65616C6170:
		switch(wp[1]){
		case 0x6968706172676F70:
			switch(wp[2]){
			case 0x0000000000007473:return 1;
			default:return 0;
			}
		default:return 0;
		}
	default:return 0;
	}
}
