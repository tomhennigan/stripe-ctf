#include <stdint.h>
unsigned int contains16(uint64_t * wp) {
	switch(wp[0]){
	case 0x61626F6E69746361:
		switch(wp[1]){
		case 0x7369736F6C6C6963:return 1;
		default:return 0;
		}
	case 0x616272757265766F:
		switch(wp[1]){
		case 0x6E6F6974617A696E:return 1;
		default:return 0;
		}
	case 0x61636172746E6F63:
		switch(wp[1]){
		case 0x7473696C61746970:return 1;
		default:return 0;
		}
	case 0x6163636F696D6573:
		switch(wp[1]){
		case 0x796C6C616E6F6973:return 1;
		default:return 0;
		}
	case 0x616365646E697571:
		switch(wp[1]){
		case 0x636962616C6C7973:return 1;
		default:return 0;
		}
	case 0x61636963696C6973:
		switch(wp[1]){
		case 0x73756F657261636C:return 1;
		default:return 0;
		}
	case 0x6163697463617270:
		switch(wp[1]){
		case 0x6E6F6974617A696C:return 1;
		default:return 0;
		}
	case 0x61636F63696C6973:
		switch(wp[1]){
		case 0x73756F657261636C:return 1;
		default:return 0;
		}
	case 0x61636F656E726F63:
		switch(wp[1]){
		case 0x73756F657261636C:return 1;
		default:return 0;
		}
	case 0x61636F6572657473:
		switch(wp[1]){
		case 0x726574656D69706D:return 1;
		default:return 0;
		}
	case 0x61636F68706D6163:
		switch(wp[1]){
		case 0x63696C79786F6272:return 1;
		default:return 0;
		}
	case 0x61636F6968637369:
		switch(wp[1]){
		case 0x7375736F6E726576:return 1;
		default:return 0;
		}
	case 0x61636F69726F6863:
		switch(wp[1]){
		case 0x736972616C6C6970:return 1;
		default:return 0;
		}
	case 0x61636F6C70697274:
		switch(wp[1]){
		case 0x746E656373656C75:return 1;
		default:return 0;
		}
	case 0x61636F6E79726F63:
		switch(wp[1]){
		case 0x73756F6563617072:return 1;
		default:return 0;
		}
	case 0x61636F7275656C70:
		switch(wp[1]){
		case 0x73756F6563617370:return 1;
		default:return 0;
		}
	case 0x61636F736F63756D:
		switch(wp[1]){
		case 0x73756F657261636C:return 1;
		default:return 0;
		}
	case 0x6163796863617262:
		switch(wp[1]){
		case 0x63697463656C6174:return 1;
		default:return 0;
		}
	case 0x6165636F656C6170:
		switch(wp[1]){
		case 0x7968706172676F6E:return 1;
		default:return 0;
		}
	case 0x616568656772616C:
		switch(wp[1]){
		case 0x7373656E64657472:return 1;
		default:return 0;
		}
	case 0x616568656C626F6E:
		switch(wp[1]){
		case 0x7373656E64657472:return 1;
		default:return 0;
		}
	case 0x616568656C6F6877:
		switch(wp[1]){
		case 0x7373656E64657472:return 1;
		default:return 0;
		}
	case 0x61656865736C6166:
		switch(wp[1]){
		case 0x7373656E64657472:return 1;
		default:return 0;
		}
	case 0x616568676E6F7277:
		switch(wp[1]){
		case 0x7373656E64657472:return 1;
		default:return 0;
		}
	case 0x6165686867756F72:
		switch(wp[1]){
		case 0x7373656E64657472:return 1;
		default:return 0;
		}
	case 0x6165686B63616C62:
		switch(wp[1]){
		case 0x7373656E64657472:return 1;
		default:return 0;
		}
	case 0x6165686B636F6C62:
		switch(wp[1]){
		case 0x7373656E68736964:return 1;
		default:return 0;
		}
	case 0x6165686B6E617266:
		switch(wp[1]){
		case 0x7373656E64657472:return 1;
		default:return 0;
		}
	case 0x616568726576696C:
		switch(wp[1]){
		case 0x7373656E64657472:return 1;
		default:return 0;
		}
	case 0x6165687461657267:
		switch(wp[1]){
		case 0x7373656E64657472:return 1;
		default:return 0;
		}
	case 0x6165687465657773:
		switch(wp[1]){
		case 0x7373656E64657472:return 1;
		default:return 0;
		}
	case 0x616568746867696C:
		switch(wp[1]){
		case 0x7373656E64657472:return 1;
		default:return 0;
		}
	case 0x616568746E696166:
		switch(wp[1]){
		case 0x7373656E64657472:return 1;
		default:return 0;
		}
	case 0x61656874756F7473:
		switch(wp[1]){
		case 0x7373656E64657472:return 1;
		default:return 0;
		}
	case 0x616568796E6E7573:
		switch(wp[1]){
		case 0x7373656E64657472:return 1;
		default:return 0;
		}
	case 0x616568796E6F7473:
		switch(wp[1]){
		case 0x7373656E64657472:return 1;
		default:return 0;
		}
	case 0x6165687976616568:
		switch(wp[1]){
		case 0x7373656E64657472:return 1;
		default:return 0;
		}
	case 0x61656D646173696D:
		switch(wp[1]){
		case 0x746E656D65727573:return 1;
		default:return 0;
		}
	case 0x61656D6F7263696D:
		switch(wp[1]){
		case 0x746E656D65727573:return 1;
		default:return 0;
		}
	case 0x6165726172746C75:
		switch(wp[1]){
		case 0x7972616E6F697463:return 1;
		default:return 0;
		}
	case 0x6165726F70726F63:
		switch(wp[1]){
		case 0x6E6F6974617A696C:return 1;
		default:return 0;
		}
	case 0x6166756E616D6E75:
		switch(wp[1]){
		case 0x656C626172757463:return 1;
		default:return 0;
		}
	case 0x61676572676E6F63:
		switch(wp[1]){
		case 0x7373656E65766974:return 1;
		case 0x796C6C616E6F6974:return 1;
		default:return 0;
		}
	case 0x61676F726170616C:
		switch(wp[1]){
		case 0x796D6F746F727473:return 1;
		default:return 0;
		}
	case 0x61676F7274736167:
		switch(wp[1]){
		case 0x796D6F746F727473:return 1;
		default:return 0;
		}
	case 0x6167797A65617270:
		switch(wp[1]){
		case 0x7369737968706F70:return 1;
		default:return 0;
		}
	case 0x6167797A74736F70:
		switch(wp[1]){
		case 0x7369737968706F70:return 1;
		default:return 0;
		}
	case 0x6168636F656C6F63:
		switch(wp[1]){
		case 0x73756F6563617465:return 1;
		default:return 0;
		}
	case 0x6168637265646E75:
		switch(wp[1]){
		case 0x6E69616C7265626D:return 1;
		default:return 0;
		}
	case 0x6168646E6F636573:
		switch(wp[1]){
		case 0x7373656E6465646E:return 1;
		default:return 0;
		}
	case 0x6168656C62756F64:
		switch(wp[1]){
		case 0x7373656E6465646E:return 1;
		default:return 0;
		}
	case 0x6168656C676E6973:
		switch(wp[1]){
		case 0x7373656E6465646E:return 1;
		default:return 0;
		}
	case 0x6168676E69727473:
		switch(wp[1]){
		case 0x7373656E6465746C:return 1;
		default:return 0;
		}
	case 0x6168706172746574:
		switch(wp[1]){
		case 0x65746165676E616C:return 1;
		default:return 0;
		}
	case 0x6168706F6E656461:
		switch(wp[1]){
		case 0x73697469676E7972:return 1;
		default:return 0;
		}
	case 0x6168706F6E696872:
		switch(wp[1]){
		case 0x73697469676E7972:return 1;
		default:return 0;
		}
	case 0x6168706F70706968:
		switch(wp[1]){
		case 0x6C61636974736967:return 1;
		default:return 0;
		}
	case 0x6168706F72656968:
		switch(wp[1]){
		case 0x796C6C616369746E:return 1;
		default:return 0;
		}
	case 0x6168706F72746572:
		switch(wp[1]){
		case 0x73697469676E7972:return 1;
		default:return 0;
		}
	case 0x616874656F6E6F6D:
		switch(wp[1]){
		case 0x656E696D616C6F6E:return 1;
		default:return 0;
		}
	case 0x6169636570736564:
		switch(wp[1]){
		case 0x6E6F6974617A696C:return 1;
		default:return 0;
		}
	case 0x6169636572706564:
		switch(wp[1]){
		case 0x7373656E69726F74:return 1;
		default:return 0;
		}
	case 0x6169636572707061:
		switch(wp[1]){
		case 0x7373656E65766974:return 1;
		default:return 0;
		}
	case 0x6169646968706D61:
		switch(wp[1]){
		case 0x7369736F72687472:return 1;
		default:return 0;
		}
	case 0x6169647265707968:
		switch(wp[1]){
		case 0x6E6F726173736574:return 1;
		default:return 0;
		}
	case 0x616968636F726170:
		switch(wp[1]){
		case 0x6E6F6974617A696C:return 1;
		default:return 0;
		}
	case 0x61696C69636E6F63:
		switch(wp[1]){
		case 0x7373656E69726F74:return 1;
		default:return 0;
		}
	case 0x616970757372616D:
		switch(wp[1]){
		case 0x6E6F6974617A696C:return 1;
		default:return 0;
		}
	case 0x6169726F74636970:
		switch(wp[1]){
		case 0x6E6F6974617A696C:return 1;
		default:return 0;
		}
	case 0x616972756372656D:
		switch(wp[1]){
		case 0x6E6F6974617A696C:return 1;
		default:return 0;
		}
	case 0x616973656C636365:
		switch(wp[1]){
		case 0x796C6C6163697473:return 1;
		default:return 0;
		}
	case 0x6169737568746E65:
		switch(wp[1]){
		case 0x796C6C6163697473:return 1;
		default:return 0;
		}
	case 0x6169746E65746F70:
		switch(wp[1]){
		case 0x6E6F6974617A696C:return 1;
		default:return 0;
		}
	case 0x6169746E6F727473:
		switch(wp[1]){
		case 0x73756F726566696E:return 1;
		default:return 0;
		}
	case 0x616C616769746E61:
		switch(wp[1]){
		case 0x6575676F67617463:return 1;
		default:return 0;
		}
	case 0x616C636F6E6F6369:
		switch(wp[1]){
		case 0x796C6C6163697473:return 1;
		default:return 0;
		}
	case 0x616C656361687073:
		switch(wp[1]){
		case 0x73756F6563616972:return 1;
		default:return 0;
		}
	case 0x616C657270657473:
		switch(wp[1]){
		case 0x706968736E6F6974:return 1;
		default:return 0;
		}
	case 0x616C6669746C756D:
		switch(wp[1]){
		case 0x646574616C6C6567:return 1;
		default:return 0;
		}
	case 0x616C6964696D6573:
		switch(wp[1]){
		case 0x6E6F697461646970:return 1;
		default:return 0;
		}
	case 0x616C6968706E6F6E:
		switch(wp[1]){
		case 0x6369706F7268746E:return 1;
		default:return 0;
		}
	case 0x616C696D69737361:
		switch(wp[1]){
		case 0x7373656E65766974:return 1;
		default:return 0;
		}
	case 0x616C6C61766E6F63:
		switch(wp[1]){
		case 0x73756F6563616972:return 1;
		default:return 0;
		}
	case 0x616C6C6567616C66:
		switch(wp[1]){
		case 0x73756F6563616972:return 1;
		default:return 0;
		}
	case 0x616C6C6F636E6F6E:
		switch(wp[1]){
		case 0x6576697461726F62:return 1;
		case 0x6E6F697461726F62:return 1;
		default:return 0;
		}
	case 0x616C6C797373696D:
		switch(wp[1]){
		case 0x6E6F697461636962:return 1;
		default:return 0;
		}
	case 0x616C6F6963616C67:
		switch(wp[1]){
		case 0x656E697274737563:return 1;
		default:return 0;
		}
	case 0x616C6F6976756C66:
		switch(wp[1]){
		case 0x656E697274737563:return 1;
		default:return 0;
		}
	case 0x616C6F6E656C7073:
		switch(wp[1]){
		case 0x796D6F746F726170:return 1;
		default:return 0;
		}
	case 0x616C6F7A69686373:
		switch(wp[1]){
		case 0x73756F6563616E65:return 1;
		default:return 0;
		}
	case 0x616C706F68746170:
		switch(wp[1]){
		case 0x796C6C6163697473:return 1;
		default:return 0;
		}
	case 0x616C706F7263696D:
		switch(wp[1]){
		case 0x726574656D6F7473:return 1;
		default:return 0;
		}
	case 0x616C707265707968:
		switch(wp[1]){
		case 0x656E696872727974:return 1;
		default:return 0;
		}
	case 0x616C707369726570:
		switch(wp[1]){
		case 0x736974696E68636E:return 1;
		default:return 0;
		}
	case 0x616C756369746572:
		switch(wp[1]){
		case 0x65736F6D61726F74:return 1;
		case 0x65736F6E65766F74:return 1;
		default:return 0;
		}
	case 0x616C756369747563:
		switch(wp[1]){
		case 0x6E6F6974617A6972:return 1;
		default:return 0;
		}
	case 0x616C756D75636361:
		switch(wp[1]){
		case 0x7373656E65766974:return 1;
		default:return 0;
		}
	case 0x616C7573736F7267:
		switch(wp[1]){
		case 0x73756F6563616972:return 1;
		default:return 0;
		}
	case 0x616C79646E6F7073:
		switch(wp[1]){
		case 0x7369746972687472:return 1;
		default:return 0;
		}
	case 0x616C796870616E61:
		switch(wp[1]){
		case 0x63696E65676F7463:return 1;
		default:return 0;
		}
	case 0x616C7968706F7270:
		switch(wp[1]){
		case 0x796C6C6163697463:return 1;
		default:return 0;
		}
	case 0x616D656874616E61:
		switch(wp[1]){
		case 0x6E6F6974617A6974:return 1;
		default:return 0;
		}
	case 0x616D657473616964:
		switch(wp[1]){
		case 0x61696C65796D6F74:return 1;
		default:return 0;
		}
	case 0x616D6C6F6F686373:
		switch(wp[1]){
		case 0x646F6F6872657473:return 1;
		case 0x7069687372657473:return 1;
		default:return 0;
		}
	case 0x616D6D75736E6F63:
		switch(wp[1]){
		case 0x7373656E65766974:return 1;
		default:return 0;
		}
	case 0x616D6F6361726F63:
		switch(wp[1]){
		case 0x72616C756269646E:return 1;
		default:return 0;
		}
	case 0x616D6F6E65687073:
		switch(wp[1]){
		case 0x72616C756269646E:return 1;
		default:return 0;
		}
	case 0x616D6F6E6F726170:
		switch(wp[1]){
		case 0x796C6C6163697473:return 1;
		default:return 0;
		}
	case 0x616D6F6E6F746E61:
		switch(wp[1]){
		case 0x796C6C6163697473:return 1;
		default:return 0;
		}
	case 0x616D6F736F747561:
		switch(wp[1]){
		case 0x7369736F6E676F74:return 1;
		default:return 0;
		}
	case 0x616D6F7461726563:
		switch(wp[1]){
		case 0x72616C756269646E:return 1;
		default:return 0;
		}
	case 0x616D6F74706D7973:
		switch(wp[1]){
		case 0x7968706172676F74:return 1;
		default:return 0;
		}
	case 0x616D726F66696E75:
		switch(wp[1]){
		case 0x6E6F6974617A696C:return 1;
		default:return 0;
		}
	case 0x616D7568696D6573:
		switch(wp[1]){
		case 0x6E6169726174696E:return 1;
		default:return 0;
		}
	case 0x616E616863636162:
		switch(wp[1]){
		case 0x6E6F6974617A696C:return 1;
		default:return 0;
		}
	case 0x616E616F63616870:
		switch(wp[1]){
		case 0x736978616C796870:return 1;
		default:return 0;
		}
	case 0x616E616F69646172:
		switch(wp[1]){
		case 0x736978616C796870:return 1;
		default:return 0;
		}
	case 0x616E617263656C6F:
		switch(wp[1]){
		case 0x7369746972687472:return 1;
		default:return 0;
		}
	case 0x616E696D6F6E6564:
		switch(wp[1]){
		case 0x796C6C616E6F6974:return 1;
		default:return 0;
		}
	case 0x616E6D7563726963:
		switch(wp[1]){
		case 0x6E6F697461676976:return 1;
		case 0x79726F7461676976:return 1;
		default:return 0;
		}
	case 0x616E6E69746E6974:
		switch(wp[1]){
		case 0x6E6F6974616C7562:return 1;
		case 0x79726F74616C7562:return 1;
		default:return 0;
		}
	case 0x616E6F6475657370:
		switch(wp[1]){
		case 0x72616C6C65636976:return 1;
		default:return 0;
		}
	case 0x616E6F696E69706F:
		switch(wp[1]){
		case 0x7373656E65766974:return 1;
		default:return 0;
		}
	case 0x616E6F6974636573:
		switch(wp[1]){
		case 0x6E6F6974617A696C:return 1;
		default:return 0;
		}
	case 0x616E6F69746F6D65:
		switch(wp[1]){
		case 0x6E6F6974617A696C:return 1;
		default:return 0;
		}
	case 0x616E726574657270:
		switch(wp[1]){
		case 0x6D73696C61727574:return 1;
		case 0x7473696C61727574:return 1;
		case 0x7974696C61727574:return 1;
		default:return 0;
		}
	case 0x616F626D6F726874:
		switch(wp[1]){
		case 0x7369746972657472:return 1;
		default:return 0;
		}
	case 0x616F6361726F6874:
		switch(wp[1]){
		case 0x6C616E696D6F6462:return 1;
		default:return 0;
		}
	case 0x616F636976726563:
		switch(wp[1]){
		case 0x72616C7563697275:return 1;
		default:return 0;
		}
	case 0x616F6C6168706563:
		switch(wp[1]){
		case 0x72616C7563697275:return 1;
		default:return 0;
		}
	case 0x616F6E6975676E69:
		switch(wp[1]){
		case 0x6C616E696D6F6462:return 1;
		default:return 0;
		}
	case 0x616F72646E6F6863:
		switch(wp[1]){
		case 0x7369746972687472:return 1;
		default:return 0;
		}
	case 0x616F726F706D6574:
		switch(wp[1]){
		case 0x72616C7563697275:return 1;
		default:return 0;
		}
	case 0x61706568696D6573:
		switch(wp[1]){
		case 0x6E6F6974617A6974:return 1;
		default:return 0;
		}
	case 0x61706963696E756D:
		switch(wp[1]){
		case 0x6E6F6974617A696C:return 1;
		default:return 0;
		}
	case 0x61706F6475657370:
		switch(wp[1]){
		case 0x616967656C706172:return 1;
		case 0x616D7968636E6572:return 1;
		case 0x656D7968636E6572:return 1;
		case 0x656E697265766170:return 1;
		case 0x6D73697469736172:return 1;
		default:return 0;
		}
	case 0x61706F656F6D6F68:
		switch(wp[1]){
		case 0x796C6C6163696874:return 1;
		default:return 0;
		}
	case 0x61706F6863797370:
		switch(wp[1]){
		case 0x6369676F6C6F6874:return 1;
		case 0x6D73696863796E6E:return 1;
		case 0x6E61696863796E6E:return 1;
		case 0x7473696863796E6E:return 1;
		default:return 0;
		}
	case 0x61706F6E656C7073:
		switch(wp[1]){
		case 0x636974616572636E:return 1;
		case 0x7369736174636572:return 1;
		default:return 0;
		}
	case 0x61706F726F6C6863:
		switch(wp[1]){
		case 0x7365746164616C6C:return 1;
		default:return 0;
		}
	case 0x61706F7274736167:
		switch(wp[1]){
		case 0x636974616572636E:return 1;
		default:return 0;
		}
	case 0x61706F75676E696C:
		switch(wp[1]){
		case 0x736974696C6C6970:return 1;
		default:return 0;
		}
	case 0x6170786569746E61:
		switch(wp[1]){
		case 0x7473696E6F69736E:return 1;
		default:return 0;
		}
	case 0x6172617069746E61:
		switch(wp[1]){
		case 0x7369746974617473:return 1;
		default:return 0;
		}
	case 0x6172626B63617263:
		switch(wp[1]){
		case 0x7373656E64656E69:return 1;
		default:return 0;
		}
	case 0x6172626D656D6572:
		switch(wp[1]){
		case 0x706968737265636E:return 1;
		default:return 0;
		}
	case 0x61726369646E6168:
		switch(wp[1]){
		case 0x6E616D6F77737466:return 1;
		default:return 0;
		}
	case 0x6172636F696E6F67:
		switch(wp[1]){
		case 0x797274656D6F696E:return 1;
		default:return 0;
		}
	case 0x6172636F70706968:
		switch(wp[1]){
		case 0x73756F6563616574:return 1;
		default:return 0;
		}
	case 0x6172636F72706E75:
		switch(wp[1]){
		case 0x646574616E697473:return 1;
		default:return 0;
		}
	case 0x6172646E696C7963:
		switch(wp[1]){
		case 0x7369736F72687472:return 1;
		default:return 0;
		}
	case 0x6172646F746F6870:
		switch(wp[1]){
		case 0x636967727574616D:return 1;
		default:return 0;
		}
	case 0x61726562696C6564:
		switch(wp[1]){
		case 0x6E6F6974617A696C:return 1;
		case 0x7373656E65766974:return 1;
		default:return 0;
		}
	case 0x6172656767617865:
		switch(wp[1]){
		case 0x7373656E65766974:return 1;
		default:return 0;
		}
	case 0x6172656E696D6564:
		switch(wp[1]){
		case 0x6E6F6974617A696C:return 1;
		default:return 0;
		}
	case 0x6172656E696D6572:
		switch(wp[1]){
		case 0x6E6F6974617A696C:return 1;
		default:return 0;
		}
	case 0x6172656E756D6572:
		switch(wp[1]){
		case 0x7373656E65766974:return 1;
		default:return 0;
		}
	case 0x6172657075636572:
		switch(wp[1]){
		case 0x7373656E65766974:return 1;
		default:return 0;
		}
	case 0x61726574696C6C61:
		switch(wp[1]){
		case 0x7373656E65766974:return 1;
		default:return 0;
		}
	case 0x617265746E756F63:
		switch(wp[1]){
		case 0x65636E6172757373:return 1;
		case 0x656761746E617664:return 1;
		case 0x6E6F697461746967:return 1;
		case 0x6E6F697472657373:return 1;
		case 0x746E616C6C657070:return 1;
		case 0x7972656C6C697472:return 1;
		default:return 0;
		}
	case 0x6172666F72647968:
		switch(wp[1]){
		case 0x6574696E696C6B6E:return 1;
		default:return 0;
		}
	case 0x6172676172746574:
		switch(wp[1]){
		case 0x63696E6F74616D6D:return 1;
		default:return 0;
		}
	case 0x617267696C6C6163:
		switch(wp[1]){
		case 0x796C6C6163696870:return 1;
		default:return 0;
		}
	case 0x6172676E6F636572:
		switch(wp[1]){
		case 0x6E6F6974616C7574:return 1;
		default:return 0;
		}
	case 0x6172676E6F636E75:
		switch(wp[1]){
		case 0x676E6974616C7574:return 1;
		default:return 0;
		}
	case 0x6172676F65676E75:
		switch(wp[1]){
		case 0x796C6C6163696870:return 1;
		default:return 0;
		}
	case 0x6172676F656C6170:
		switch(wp[1]){
		case 0x796C6C6163696870:return 1;
		default:return 0;
		}
	case 0x6172676F656D696D:
		switch(wp[1]){
		case 0x796C6C6163696870:return 1;
		default:return 0;
		}
	case 0x6172676F6874696C:
		switch(wp[1]){
		case 0x796C6C6163696870:return 1;
		default:return 0;
		}
	case 0x6172676F6874726F:
		switch(wp[1]){
		case 0x796C6C6163696870:return 1;
		default:return 0;
		}
	case 0x6172676F69646172:
		switch(wp[1]){
		case 0x796C6C6163696870:return 1;
		default:return 0;
		}
	case 0x6172676F696C6568:
		switch(wp[1]){
		case 0x796C6C6163696870:return 1;
		default:return 0;
		}
	case 0x6172676F6C797473:
		switch(wp[1]){
		case 0x796C6C6163696870:return 1;
		default:return 0;
		}
	case 0x6172676F6D656E61:
		switch(wp[1]){
		case 0x796C6C6163696870:return 1;
		default:return 0;
		}
	case 0x6172676F6D736F63:
		switch(wp[1]){
		case 0x796C6C6163696870:return 1;
		default:return 0;
		}
	case 0x6172676F6E656373:
		switch(wp[1]){
		case 0x796C6C6163696870:return 1;
		default:return 0;
		}
	case 0x6172676F6E657473:
		switch(wp[1]){
		case 0x796C6C6163696870:return 1;
		default:return 0;
		}
	case 0x6172676F6E686369:
		switch(wp[1]){
		case 0x796C6C6163696870:return 1;
		default:return 0;
		}
	case 0x6172676F6E687465:
		switch(wp[1]){
		case 0x796C6C6163696870:return 1;
		default:return 0;
		}
	case 0x6172676F6E6F6870:
		switch(wp[1]){
		case 0x6C61636974616D6D:return 1;
		case 0x796C6C6163696870:return 1;
		case 0x796C6C6163696D6D:return 1;
		default:return 0;
		}
	case 0x6172676F6E726F70:
		switch(wp[1]){
		case 0x796C6C6163696870:return 1;
		default:return 0;
		}
	case 0x6172676F7263696D:
		switch(wp[1]){
		case 0x63697274656D6976:return 1;
		case 0x796C6C6163696870:return 1;
		default:return 0;
		}
	case 0x6172676F72647968:
		switch(wp[1]){
		case 0x796C6C6163696870:return 1;
		default:return 0;
		}
	case 0x6172676F72656968:
		switch(wp[1]){
		case 0x6C61636974616D6D:return 1;
		default:return 0;
		}
	case 0x6172676F726F6863:
		switch(wp[1]){
		case 0x796C6C6163696870:return 1;
		default:return 0;
		}
	case 0x6172676F72746570:
		switch(wp[1]){
		case 0x796C6C6163696870:return 1;
		default:return 0;
		}
	case 0x6172676F74636970:
		switch(wp[1]){
		case 0x796C6C6163696870:return 1;
		default:return 0;
		}
	case 0x6172676F74657968:
		switch(wp[1]){
		case 0x796C6C6163696870:return 1;
		default:return 0;
		}
	case 0x6172676F746E6170:
		switch(wp[1]){
		case 0x796C6C6163696870:return 1;
		default:return 0;
		}
	case 0x6172676F746F6870:
		switch(wp[1]){
		case 0x726574656D6F6870:return 1;
		case 0x796C6C6163696870:return 1;
		default:return 0;
		}
	case 0x6172676F74726163:
		switch(wp[1]){
		case 0x796C6C6163696870:return 1;
		default:return 0;
		}
	case 0x6172677265646E75:
		switch(wp[1]){
		case 0x6D6F646574617564:return 1;
		default:return 0;
		}
	case 0x6172677265707573:
		switch(wp[1]){
		case 0x6E6F697461746976:return 1;
		default:return 0;
		}
	case 0x6172677265707968:
		switch(wp[1]){
		case 0x6C61636974616D6D:return 1;
		default:return 0;
		}
	case 0x6172677968636174:
		switch(wp[1]){
		case 0x726574656D6F6870:return 1;
		case 0x796C6C6163696870:return 1;
		case 0x797274656D6F6870:return 1;
		default:return 0;
		}
	case 0x6172687061726170:
		switch(wp[1]){
		case 0x796C6C6163697473:return 1;
		default:return 0;
		}
	case 0x617268706174656D:
		switch(wp[1]){
		case 0x796C6C6163697473:return 1;
		default:return 0;
		}
	case 0x6172687069726570:
		switch(wp[1]){
		case 0x796C6C6163697473:return 1;
		default:return 0;
		}
	case 0x6172687069746E61:
		switch(wp[1]){
		case 0x796C6C6163697473:return 1;
		default:return 0;
		}
	case 0x617268706F656874:
		switch(wp[1]){
		case 0x73756F6563617473:return 1;
		default:return 0;
		}
	case 0x61726970736E6F63:
		switch(wp[1]){
		case 0x796C6C6169726F74:return 1;
		default:return 0;
		}
	case 0x61726F6572657473:
		switch(wp[1]){
		case 0x68706172676F6964:return 1;
		default:return 0;
		}
	case 0x61726F6769766E69:
		switch(wp[1]){
		case 0x7373656E676E6974:return 1;
		default:return 0;
		}
	case 0x6172746E65636564:
		switch(wp[1]){
		case 0x6E6F6974617A696C:return 1;
		default:return 0;
		}
	case 0x6172746E65636572:
		switch(wp[1]){
		case 0x6E6F6974617A696C:return 1;
		default:return 0;
		}
	case 0x6172746E6F636E75:
		switch(wp[1]){
		case 0x656C626174636964:return 1;
		case 0x7373656E64657463:return 1;
		case 0x73756F6974636964:return 1;
		case 0x796C626174636964:return 1;
		case 0x796C646574636964:return 1;
		default:return 0;
		}
	case 0x6172746F63697263:
		switch(wp[1]){
		case 0x796D6F746F656863:return 1;
		default:return 0;
		}
	case 0x6172746F69646172:
		switch(wp[1]){
		case 0x746E65726170736E:return 1;
		default:return 0;
		}
	case 0x6172746F74736F63:
		switch(wp[1]){
		case 0x6C6173726576736E:return 1;
		default:return 0;
		}
	case 0x6172747265746E69:
		switch(wp[1]){
		case 0x6C6173726576736E:return 1;
		default:return 0;
		}
	case 0x6172747365726E75:
		switch(wp[1]){
		case 0x7373656E64656E69:return 1;
		default:return 0;
		}
	case 0x6172747369646E75:
		switch(wp[1]){
		case 0x7373656E64657463:return 1;
		default:return 0;
		}
	case 0x61727475656E6564:
		switch(wp[1]){
		case 0x6E6F6974617A696C:return 1;
		default:return 0;
		}
	case 0x6172756F63736964:
		switch(wp[1]){
		case 0x7373656E676E6967:return 1;
		default:return 0;
		}
	case 0x61727574616E6564:
		switch(wp[1]){
		case 0x6E6F6974617A696C:return 1;
		default:return 0;
		}
	case 0x61736C7974656361:
		switch(wp[1]){
		case 0x6574616C7963696C:return 1;
		default:return 0;
		}
	case 0x61736E65706D6F63:
		switch(wp[1]){
		case 0x7373656E65766974:return 1;
		default:return 0;
		}
	case 0x61736F736F63756D:
		switch(wp[1]){
		case 0x656E697261686363:return 1;
		default:return 0;
		}
	case 0x6173726576696E75:
		switch(wp[1]){
		case 0x6E6F6974617A696C:return 1;
		default:return 0;
		}
	case 0x61737265766E6F63:
		switch(wp[1]){
		case 0x656C62616E6F6974:return 1;
		case 0x796C6C616E6F6974:return 1;
		default:return 0;
		}
	case 0x6173727563736964:
		switch(wp[1]){
		case 0x7373656E65766974:return 1;
		default:return 0;
		}
	case 0x6174656D696D6568:
		switch(wp[1]){
		case 0x73756F6870726F6D:return 1;
		default:return 0;
		}
	case 0x6174656D6F727970:
		switch(wp[1]){
		case 0x6D73696870726F6D:return 1;
		default:return 0;
		}
	case 0x6174657061786568:
		switch(wp[1]){
		case 0x73756F6564696F6C:return 1;
		default:return 0;
		}
	case 0x6174696261686E69:
		switch(wp[1]){
		case 0x7373656E65766974:return 1;
		default:return 0;
		}
	case 0x6174696C696D6564:
		switch(wp[1]){
		case 0x6E6F6974617A6972:return 1;
		default:return 0;
		}
	case 0x6174696C696D6572:
		switch(wp[1]){
		case 0x6E6F6974617A6972:return 1;
		default:return 0;
		}
	case 0x6174697061636564:
		switch(wp[1]){
		case 0x6E6F6974617A696C:return 1;
		default:return 0;
		}
	case 0x6174697061636572:
		switch(wp[1]){
		case 0x6E6F6974617A696C:return 1;
		default:return 0;
		}
	case 0x6174697365686E75:
		switch(wp[1]){
		case 0x7373656E676E6974:return 1;
		default:return 0;
		}
	case 0x617469746E617571:
		switch(wp[1]){
		case 0x7373656E65766974:return 1;
		default:return 0;
		}
	case 0x61746E656D696C61:
		switch(wp[1]){
		case 0x7373656E65766974:return 1;
		default:return 0;
		}
	case 0x61746E656D6D6F63:
		switch(wp[1]){
		case 0x796C6C6169726F74:return 1;
		default:return 0;
		}
	case 0x61746E656D726566:
		switch(wp[1]){
		case 0x7373656E65766974:return 1;
		default:return 0;
		}
	case 0x61746E6F636E6F6E:
		switch(wp[1]){
		case 0x6E6F6974616E696D:return 1;
		default:return 0;
		}
	case 0x61746F6572657473:
		switch(wp[1]){
		case 0x796C6C6163697463:return 1;
		default:return 0;
		}
	case 0x61746F6D67696874:
		switch(wp[1]){
		case 0x796C6C6163697463:return 1;
		default:return 0;
		}
	case 0x6174736275736E69:
		switch(wp[1]){
		case 0x6E6F69746169746E:return 1;
		case 0x7974696C6169746E:return 1;
		default:return 0;
		}
	case 0x6174736275736E75:
		switch(wp[1]){
		case 0x657A696C6169746E:return 1;
		case 0x6E6F69746169746E:return 1;
		case 0x7974696C6169746E:return 1;
		default:return 0;
		}
	case 0x617473646F6F6C62:
		switch(wp[1]){
		case 0x7373656E64656E69:return 1;
		default:return 0;
		}
	case 0x6174737972636E69:
		switch(wp[1]){
		case 0x656C62617A696C6C:return 1;
		default:return 0;
		}
	case 0x6174737972636E75:
		switch(wp[1]){
		case 0x656C62617A696C6C:return 1;
		default:return 0;
		}
	case 0x61756E69746E6F63:
		switch(wp[1]){
		case 0x7373656E65766974:return 1;
		default:return 0;
		}
	case 0x617571696C6C6F63:
		switch(wp[1]){
		case 0x7373656E65766974:return 1;
		default:return 0;
		}
	case 0x6175717265707573:
		switch(wp[1]){
		case 0x6C61746570757264:return 1;
		default:return 0;
		}
	case 0x6175717369646E75:
		switch(wp[1]){
		case 0x656C62616966696C:return 1;
		default:return 0;
		}
	case 0x6175737265706D69:
		switch(wp[1]){
		case 0x7974696C69626973:return 1;
		default:return 0;
		}
	case 0x6175737265706E75:
		switch(wp[1]){
		case 0x7373656E65766973:return 1;
		default:return 0;
		}
	case 0x6175746972697073:
		switch(wp[1]){
		case 0x6E6F6974617A696C:return 1;
		default:return 0;
		}
	case 0x6176656172746C75:
		switch(wp[1]){
		case 0x6C6163696C65676E:return 1;
		default:return 0;
		}
	case 0x6176657265707573:
		switch(wp[1]){
		case 0x6C6163696C65676E:return 1;
		default:return 0;
		}
	case 0x61767265736E6F63:
		switch(wp[1]){
		case 0x7373656E65766974:return 1;
		default:return 0;
		}
	case 0x617765726F666E75:
		switch(wp[1]){
		case 0x7373656E64656E72:return 1;
		default:return 0;
		}
	case 0x6177686372756863:
		switch(wp[1]){
		case 0x706968736E656472:return 1;
		default:return 0;
		}
	case 0x6178656F7263696D:
		switch(wp[1]){
		case 0x6E6F6974616E696D:return 1;
		default:return 0;
		}
	case 0x6179636F6D6F7262:
		switch(wp[1]){
		case 0x6E6F69746164696E:return 1;
		default:return 0;
		}
	case 0x617A696E6167726F:
		switch(wp[1]){
		case 0x796C6C616E6F6974:return 1;
		default:return 0;
		}
	case 0x6261747365736964:
		switch(wp[1]){
		case 0x746E656D6873696C:return 1;
		default:return 0;
		}
	case 0x62617A696472616C:
		switch(wp[1]){
		case 0x73756F6563616C61:return 1;
		default:return 0;
		}
	case 0x62686769656E6E75:
		switch(wp[1]){
		case 0x7373656E696C726F:return 1;
		default:return 0;
		}
	case 0x6269667265707573:
		switch(wp[1]){
		case 0x6E6F6974616E6972:return 1;
		default:return 0;
		}
	case 0x6269686F72706E75:
		switch(wp[1]){
		case 0x7373656E64657469:return 1;
		default:return 0;
		}
	case 0x62696E6974636570:
		switch(wp[1]){
		case 0x6E616968636E6172:return 1;
		default:return 0;
		}
	case 0x626C617265707573:
		switch(wp[1]){
		case 0x7369736F6E696D75:return 1;
		default:return 0;
		}
	case 0x626C617265707968:
		switch(wp[1]){
		case 0x7369736F6E696D75:return 1;
		default:return 0;
		}
	case 0x626D616C61726170:
		switch(wp[1]){
		case 0x73756D7369636164:return 1;
		default:return 0;
		}
	case 0x626D616C736F7270:
		switch(wp[1]){
		case 0x736F6E656D6F6E61:return 1;
		default:return 0;
		}
	case 0x626D6965726E6F6E:
		switch(wp[1]){
		case 0x746E656D65737275:return 1;
		default:return 0;
		}
	case 0x626D75636E656E75:
		switch(wp[1]){
		case 0x7373656E64657265:return 1;
		default:return 0;
		}
	case 0x626D79736F747561:
		switch(wp[1]){
		case 0x796C6C6163696C6F:return 1;
		default:return 0;
		}
	case 0x626F636976726563:
		switch(wp[1]){
		case 0x636974616D676572:return 1;
		default:return 0;
		}
	case 0x626F656863617274:
		switch(wp[1]){
		case 0x6C616968636E6F72:return 1;
		default:return 0;
		}
	case 0x626F67697473616D:
		switch(wp[1]){
		case 0x6C616968636E6172:return 1;
		default:return 0;
		}
	case 0x626F6874696E726F:
		switch(wp[1]){
		case 0x7968706172676F69:return 1;
		default:return 0;
		}
	case 0x626F6C676F6D6568:
		switch(wp[1]){
		case 0x726574656D6F6E69:return 1;
		default:return 0;
		}
	case 0x626F726874797265:
		switch(wp[1]){
		case 0x7369736F7473616C:return 1;
		default:return 0;
		}
	case 0x626F727463656C65:
		switch(wp[1]){
		case 0x63697473696C6C61:return 1;
		case 0x747369676F6C6F69:return 1;
		default:return 0;
		}
	case 0x626F727463657073:
		switch(wp[1]){
		case 0x68706172676F6C6F:return 1;
		case 0x726574656D6F6C6F:return 1;
		default:return 0;
		}
	case 0x62726162696D6573:
		switch(wp[1]){
		case 0x6D73696E61697261:return 1;
		default:return 0;
		}
	case 0x6275736172746574:
		switch(wp[1]){
		case 0x6465747574697473:return 1;
		default:return 0;
		}
	case 0x6275736F6874726F:
		switch(wp[1]){
		case 0x6465747574697473:return 1;
		default:return 0;
		}
	case 0x6275736F7263696D:
		switch(wp[1]){
		case 0x6E6F6974616D696C:return 1;
		default:return 0;
		}
	case 0x6275737265707573:
		switch(wp[1]){
		case 0x6C6169746E617473:return 1;
		default:return 0;
		}
	case 0x6275737265746E69:
		switch(wp[1]){
		case 0x65636E6574736973:return 1;
		default:return 0;
		}
	case 0x627574696E697073:
		switch(wp[1]){
		case 0x6574616C75637265:return 1;
		default:return 0;
		}
	case 0x62757469746C756D:
		switch(wp[1]){
		case 0x6574616C75637265:return 1;
		case 0x6D73696C75637265:return 1;
		default:return 0;
		}
	case 0x6275746F6E697073:
		switch(wp[1]){
		case 0x73756F6C75637265:return 1;
		default:return 0;
		}
	case 0x6361636976726570:
		switch(wp[1]){
		case 0x7373656E73756F69:return 1;
		default:return 0;
		}
	case 0x6361646E656C7073:
		switch(wp[1]){
		case 0x7373656E73756F69:return 1;
		default:return 0;
		}
	case 0x636165706D696E75:
		switch(wp[1]){
		case 0x7974696C69626168:return 1;
		default:return 0;
		}
	case 0x636165727265766F:
		switch(wp[1]){
		case 0x7373656E676E6968:return 1;
		default:return 0;
		}
	case 0x6361666570757473:
		switch(wp[1]){
		case 0x7373656E65766974:return 1;
		default:return 0;
		}
	case 0x6361666572747570:
		switch(wp[1]){
		case 0x7373656E65766974:return 1;
		default:return 0;
		}
	case 0x6361667369746173:
		switch(wp[1]){
		case 0x7373656C6E6F6974:return 1;
		case 0x7373656E69726F74:return 1;
		default:return 0;
		}
	case 0x63616C70796C6F70:
		switch(wp[1]){
		case 0x73756F726F68706F:return 1;
		default:return 0;
		}
	case 0x63616C7974656361:
		switch(wp[1]){
		case 0x736574616E6F7465:return 1;
		default:return 0;
		}
	case 0x63616D75746E6F63:
		switch(wp[1]){
		case 0x7373656E73756F69:return 1;
		default:return 0;
		}
	case 0x63616E6974726570:
		switch(wp[1]){
		case 0x7373656E73756F69:return 1;
		default:return 0;
		}
	case 0x63616F6475657370:
		switch(wp[1]){
		case 0x6C6163696D656461:return 1;
		case 0x6C61746E65646963:return 1;
		case 0x796C6167656D6F72:return 1;
		default:return 0;
		}
	case 0x636170737265766F:
		switch(wp[1]){
		case 0x7373656E73756F69:return 1;
		default:return 0;
		}
	case 0x6361726168636E75:
		switch(wp[1]){
		case 0x6369747369726574:return 1;
		default:return 0;
		}
	case 0x6361726F63697065:
		switch(wp[1]){
		case 0x6C6172656D75686F:return 1;
		default:return 0;
		}
	case 0x6361727474616E75:
		switch(wp[1]){
		case 0x7373656E65766974:return 1;
		default:return 0;
		}
	case 0x6361746F746F6870:
		switch(wp[1]){
		case 0x63697274656D6F68:return 1;
		default:return 0;
		}
	case 0x6361766F72746572:
		switch(wp[1]){
		case 0x6E6F6974616E6963:return 1;
		default:return 0;
		}
	case 0x6361766F7275656E:
		switch(wp[1]){
		case 0x6E6F6974616E6963:return 1;
		default:return 0;
		}
	case 0x63636162696D6573:
		switch(wp[1]){
		case 0x6E61696C616E6168:return 1;
		default:return 0;
		}
	case 0x63637573696D6573:
		switch(wp[1]){
		case 0x796C6C7566737365:return 1;
		default:return 0;
		}
	case 0x6365646172746C75:
		switch(wp[1]){
		case 0x79726F74616D616C:return 1;
		default:return 0;
		}
	case 0x63656461746E6570:
		switch(wp[1]){
		case 0x6574617264796861:return 1;
		default:return 0;
		}
	case 0x6365646F64736964:
		switch(wp[1]){
		case 0x64696F7264656861:return 1;
		default:return 0;
		}
	case 0x6365647265707573:
		switch(wp[1]){
		case 0x79726F74616D616C:return 1;
		default:return 0;
		}
	case 0x6365667265706D69:
		switch(wp[1]){
		case 0x7974696C69626974:return 1;
		default:return 0;
		}
	case 0x6365667265707573:
		switch(wp[1]){
		case 0x6E6F697461646E75:return 1;
		default:return 0;
		}
	case 0x63656A7265746E69:
		switch(wp[1]){
		case 0x7373656E65766974:return 1;
		case 0x796C6C616E6F6974:return 1;
		default:return 0;
		}
	case 0x63656C656F747561:
		switch(wp[1]){
		case 0x636974796C6F7274:return 1;
		case 0x736973796C6F7274:return 1;
		default:return 0;
		}
	case 0x63656C65746F6870:
		switch(wp[1]){
		case 0x68706172676F7274:return 1;
		default:return 0;
		}
	case 0x63656C6665726E75:
		switch(wp[1]){
		case 0x7373656E676E6974:return 1;
		default:return 0;
		}
	case 0x63656C6665727269:
		switch(wp[1]){
		case 0x7373656E65766974:return 1;
		default:return 0;
		}
	case 0x63656C6C65746E69:
		switch(wp[1]){
		case 0x72657A696C617574:return 1;
		case 0x7373656E6C617574:return 1;
		default:return 0;
		}
	case 0x63656C6C6F636572:
		switch(wp[1]){
		case 0x7373656E65766974:return 1;
		default:return 0;
		}
	case 0x63656F7265746568:
		switch(wp[1]){
		case 0x7373656E73756F69:return 1;
		default:return 0;
		}
	case 0x63657073616D6568:
		switch(wp[1]){
		case 0x65706F63736F7274:return 1;
		default:return 0;
		}
	case 0x63657073656C6574:
		switch(wp[1]){
		case 0x65706F63736F7274:return 1;
		default:return 0;
		}
	case 0x6365707365726E75:
		switch(wp[1]){
		case 0x7373656E65766974:return 1;
		case 0x7373656E6C756674:return 1;
		case 0x7974696C69626174:return 1;
		default:return 0;
		}
	case 0x6365707365727269:
		switch(wp[1]){
		case 0x7974696C69626174:return 1;
		default:return 0;
		}
	case 0x636570736F6E6563:
		switch(wp[1]){
		case 0x796C6C6163696669:return 1;
		default:return 0;
		}
	case 0x6365707375736E75:
		switch(wp[1]){
		case 0x7373656E676E6974:return 1;
		case 0x7373656E6C756674:return 1;
		default:return 0;
		}
	case 0x6365727070616E69:
		switch(wp[1]){
		case 0x796C657669746169:return 1;
		default:return 0;
		}
	case 0x6365727070616E75:
		switch(wp[1]){
		case 0x796C657669746169:return 1;
		default:return 0;
		}
	case 0x6365727275736E69:
		switch(wp[1]){
		case 0x796C6C616E6F6974:return 1;
		default:return 0;
		}
	case 0x6365746968637261:
		switch(wp[1]){
		case 0x6575717365727574:return 1;
		case 0x7473696C61727574:return 1;
		default:return 0;
		}
	case 0x63696361726F6874:
		switch(wp[1]){
		case 0x6C6172656D75686F:return 1;
		default:return 0;
		}
	case 0x6369646172656E69:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x6369646E69766E75:
		switch(wp[1]){
		case 0x7373656E65766974:return 1;
		default:return 0;
		}
	case 0x636964736972756A:
		switch(wp[1]){
		case 0x796C6C616E6F6974:return 1;
		default:return 0;
		}
	case 0x636966666F6E6F6E:
		switch(wp[1]){
		case 0x676E69646C6F6865:return 1;
		default:return 0;
		}
	case 0x636966696C6C756E:
		switch(wp[1]){
		case 0x7473696E6F697461:return 1;
		default:return 0;
		}
	case 0x63696C7070616E69:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x63696C7070616E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x63696C7078656E69:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x63696C7078656E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x63696D6172746C75:
		switch(wp[1]){
		case 0x6369706F63736F72:return 1;
		default:return 0;
		}
	case 0x63696D6F74616E61:
		switch(wp[1]){
		case 0x6C61636964656D6F:return 1;
		default:return 0;
		}
	case 0x63696D6F746F6870:
		switch(wp[1]){
		case 0x6369706F63736F72:return 1;
		case 0x7968706172676F72:return 1;
		default:return 0;
		}
	case 0x63696E616863656D:
		switch(wp[1]){
		case 0x797061726568746F:return 1;
		default:return 0;
		}
	case 0x63696E756D6D6F63:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x63696F68706C7573:
		switch(wp[1]){
		case 0x63696C6F79687468:return 1;
		default:return 0;
		}
	case 0x6369707375616E69:
		switch(wp[1]){
		case 0x7373656E73756F69:return 1;
		default:return 0;
		}
	case 0x6369707375616E75:
		switch(wp[1]){
		case 0x7373656E73756F69:return 1;
		default:return 0;
		}
	case 0x6369707375736E75:
		switch(wp[1]){
		case 0x7373656E73756F69:return 1;
		default:return 0;
		}
	case 0x6369726F666C7573:
		switch(wp[1]){
		case 0x657461656C6F6E69:return 1;
		default:return 0;
		}
	case 0x6369727275636E75:
		switch(wp[1]){
		case 0x64657A6972616C75:return 1;
		default:return 0;
		}
	case 0x636972746572656D:
		switch(wp[1]){
		case 0x7373656E73756F69:return 1;
		default:return 0;
		}
	case 0x6369727478656E69:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x6369747261706E75:
		switch(wp[1]){
		case 0x64657A6972616C75:return 1;
		default:return 0;
		}
	case 0x63697473756F6361:
		switch(wp[1]){
		case 0x6C61726574616C6F:return 1;
		default:return 0;
		}
	case 0x6369767265736E75:
		switch(wp[1]){
		case 0x7974696C69626165:return 1;
		default:return 0;
		}
	case 0x636E617069726570:
		switch(wp[1]){
		case 0x7369746974616572:return 1;
		default:return 0;
		}
	case 0x636E617266736964:
		switch(wp[1]){
		case 0x746E656D65736968:return 1;
		default:return 0;
		}
	case 0x636E65696863726F:
		switch(wp[1]){
		case 0x616D6F6C61687065:return 1;
		default:return 0;
		}
	case 0x636E656C65796D61:
		switch(wp[1]){
		case 0x73756F6C61687065:return 1;
		default:return 0;
		}
	case 0x636E656F63726173:
		switch(wp[1]){
		case 0x616D6F72646E6F68:return 1;
		default:return 0;
		}
	case 0x636E656F6574736F:
		switch(wp[1]){
		case 0x616D6F6C61687065:return 1;
		case 0x616D6F72646E6F68:return 1;
		default:return 0;
		}
	case 0x636E656F72626966:
		switch(wp[1]){
		case 0x616D6F72646E6F68:return 1;
		default:return 0;
		}
	case 0x636E6572656C6373:
		switch(wp[1]){
		case 0x73756F74616D7968:return 1;
		default:return 0;
		}
	case 0x636E657275656C70:
		switch(wp[1]){
		case 0x73756F74616D7968:return 1;
		default:return 0;
		}
	case 0x636E697265707573:
		switch(wp[1]){
		case 0x6E6F6974616E696C:return 1;
		case 0x796C746E65626D75:return 1;
		default:return 0;
		}
	case 0x636E6F6365727269:
		switch(wp[1]){
		case 0x6E6F697461696C69:return 1;
		default:return 0;
		}
	case 0x636F626D6F726874:
		switch(wp[1]){
		case 0x61696E65706F7479:return 1;
		default:return 0;
		}
	case 0x636F636973796870:
		switch(wp[1]){
		case 0x79727473696D6568:return 1;
		default:return 0;
		}
	case 0x636F64656C6F6863:
		switch(wp[1]){
		case 0x797473616C706F68:return 1;
		default:return 0;
		}
	case 0x636F656863617274:
		switch(wp[1]){
		case 0x636974616D6F7268:return 1;
		default:return 0;
		}
	case 0x636F656E6F726570:
		switch(wp[1]){
		case 0x6C61656E61636C61:return 1;
		default:return 0;
		}
	case 0x636F6863696C6F64:
		switch(wp[1]){
		case 0x657A696C61687065:return 1;
		case 0x6D73696C61687065:return 1;
		case 0x73756F6C61687065:return 1;
		default:return 0;
		}
	case 0x636F68636E6F7262:
		switch(wp[1]){
		case 0x73756F6E72657661:return 1;
		default:return 0;
		}
	case 0x636F68636E796872:
		switch(wp[1]){
		case 0x6E61696C61687065:return 1;
		case 0x73756F6C61687065:return 1;
		default:return 0;
		}
	case 0x636F6874696E726F:
		switch(wp[1]){
		case 0x6574696C6F72706F:return 1;
		case 0x73756F6C61687065:return 1;
		default:return 0;
		}
	case 0x636F68746E616361:
		switch(wp[1]){
		case 0x73756F6C61687065:return 1;
		default:return 0;
		}
	case 0x636F696874697274:
		switch(wp[1]){
		case 0x6574616E6F627261:return 1;
		default:return 0;
		}
	case 0x636F696F72686361:
		switch(wp[1]){
		case 0x61696D6561687479:return 1;
		default:return 0;
		}
	case 0x636F697265747261:
		switch(wp[1]){
		case 0x6C6165677963636F:return 1;
		case 0x7972616C6C697061:return 1;
		default:return 0;
		}
	case 0x636F6C6168706563:
		switch(wp[1]){
		case 0x6369747261687461:return 1;
		default:return 0;
		}
	case 0x636F6C6963656F70:
		switch(wp[1]){
		case 0x73756F7261747479:return 1;
		default:return 0;
		}
	case 0x636F6C6C69706170:
		switch(wp[1]){
		case 0x616D6F6E69637261:return 1;
		default:return 0;
		}
	case 0x636F6C6F65766C61:
		switch(wp[1]){
		case 0x6E61656C79646E6F:return 1;
		default:return 0;
		}
	case 0x636F6C756373756D:
		switch(wp[1]){
		case 0x73756F656E617475:return 1;
		default:return 0;
		}
	case 0x636F6C756C6C6563:
		switch(wp[1]){
		case 0x73756F656E617475:return 1;
		default:return 0;
		}
	case 0x636F6D6761726870:
		switch(wp[1]){
		case 0x73756F7261747479:return 1;
		default:return 0;
		}
	case 0x636F6E61676E616D:
		switch(wp[1]){
		case 0x657469626D756C6F:return 1;
		default:return 0;
		}
	case 0x636F6E6965706174:
		switch(wp[1]){
		case 0x6D73696C61687065:return 1;
		default:return 0;
		}
	case 0x636F6E6975676E69:
		switch(wp[1]){
		case 0x73756F656E617475:return 1;
		default:return 0;
		}
	case 0x636F6E6F67697274:
		switch(wp[1]){
		case 0x73756F6C61687065:return 1;
		default:return 0;
		}
	case 0x636F72646E6F6863:
		switch(wp[1]){
		case 0x616D6F6E69637261:return 1;
		default:return 0;
		}
	case 0x636F726561687073:
		switch(wp[1]){
		case 0x657469746C61626F:return 1;
		default:return 0;
		}
	case 0x636F72656E616870:
		switch(wp[1]){
		case 0x73756F6C61687065:return 1;
		default:return 0;
		}
	case 0x636F726574657275:
		switch(wp[1]){
		case 0x796D6F74736F6C6F:return 1;
		default:return 0;
		}
	case 0x636F726574737968:
		switch(wp[1]){
		case 0x797370656C617461:return 1;
		default:return 0;
		}
	case 0x636F726574756564:
		switch(wp[1]){
		case 0x6C6163696E6F6E61:return 1;
		default:return 0;
		}
	case 0x636F726874797265:
		switch(wp[1]){
		case 0x636974796C6F7479:return 1;
		case 0x6E6973796C6F7479:return 1;
		case 0x726574656D6F7479:return 1;
		case 0x736973796C617461:return 1;
		case 0x736973796C6F7479:return 1;
		case 0x7473616C626F7479:return 1;
		default:return 0;
		}
	case 0x636F727463656C65:
		switch(wp[1]){
		case 0x636974796C617461:return 1;
		case 0x6C6164696F6C6C6F:return 1;
		case 0x736973796C617461:return 1;
		case 0x7972616C6C697061:return 1;
		case 0x79727473696D6568:return 1;
		default:return 0;
		}
	case 0x636F727463657073:
		switch(wp[1]){
		case 0x79727473696D6568:return 1;
		default:return 0;
		}
	case 0x636F7274696E6964:
		switch(wp[1]){
		case 0x65736F6C756C6C65:return 1;
		default:return 0;
		}
	case 0x636F727469726570:
		switch(wp[1]){
		case 0x63697265746E6168:return 1;
		default:return 0;
		}
	case 0x636F72746F696C69:
		switch(wp[1]){
		case 0x63697265746E6168:return 1;
		default:return 0;
		}
	case 0x636F72746F707968:
		switch(wp[1]){
		case 0x63697265746E6168:return 1;
		default:return 0;
		}
	case 0x636F736F74796870:
		switch(wp[1]){
		case 0x747369676F6C6F69:return 1;
		default:return 0;
		}
	case 0x636F746163696C70:
		switch(wp[1]){
		case 0x646574726F746E6F:return 1;
		default:return 0;
		}
	case 0x636F7461746E6564:
		switch(wp[1]){
		case 0x65746174696C6C69:return 1;
		default:return 0;
		}
	case 0x636F7461756E6973:
		switch(wp[1]){
		case 0x646574726F746E6F:return 1;
		default:return 0;
		}
	case 0x636F74656E67616D:
		switch(wp[1]){
		case 0x79727473696D6568:return 1;
		default:return 0;
		}
	case 0x636F796874686369:
		switch(wp[1]){
		case 0x6574696C6F72706F:return 1;
		case 0x73756F6C61687065:return 1;
		default:return 0;
		}
	case 0x6372656D7265766F:
		switch(wp[1]){
		case 0x7373656E6C756669:return 1;
		default:return 0;
		}
	case 0x637265746E756F63:
		switch(wp[1]){
		case 0x657369776B636F6C:return 1;
		case 0x6D73696369746972:return 1;
		case 0x746E69616C706D6F:return 1;
		case 0x796C746E65727275:return 1;
		default:return 0;
		}
	case 0x63726963696D6573:
		switch(wp[1]){
		case 0x7373656E72616C75:return 1;
		default:return 0;
		}
	case 0x63736172746E6F63:
		switch(wp[1]){
		case 0x6C61727574706972:return 1;
		default:return 0;
		}
	case 0x6373696E65687073:
		switch(wp[1]){
		case 0x63696870726F6D6F:return 1;
		default:return 0;
		}
	case 0x6373696E696D6572:
		switch(wp[1]){
		case 0x796C6C6169746E65:return 1;
		default:return 0;
		}
	case 0x63736972616C6F70:
		switch(wp[1]){
		case 0x796C6C616369706F:return 1;
		default:return 0;
		}
	case 0x6373697465726574:
		switch(wp[1]){
		case 0x736972616C757061:return 1;
		default:return 0;
		}
	case 0x63736E6172746E75:
		switch(wp[1]){
		case 0x6C61746E65646E65:return 1;
		default:return 0;
		}
	case 0x63736E6F63627573:
		switch(wp[1]){
		case 0x7373656E73756F69:return 1;
		default:return 0;
		}
	case 0x63736E6F63657270:
		switch(wp[1]){
		case 0x7373656E73756F69:return 1;
		default:return 0;
		}
	case 0x63736E6F636E6F6E:
		switch(wp[1]){
		case 0x73756F69746E6569:return 1;
		default:return 0;
		}
	case 0x63736F6475657370:
		switch(wp[1]){
		case 0x616E6974616C7261:return 1;
		case 0x63696669746E6569:return 1;
		case 0x63697473616C6F68:return 1;
		case 0x796C6C616369706F:return 1;
		default:return 0;
		}
	case 0x63736F6572657473:
		switch(wp[1]){
		case 0x796C6C616369706F:return 1;
		default:return 0;
		}
	case 0x63736F6874657473:
		switch(wp[1]){
		case 0x796C6C616369706F:return 1;
		default:return 0;
		}
	case 0x63736F6D72656874:
		switch(wp[1]){
		case 0x796C6C616369706F:return 1;
		default:return 0;
		}
	case 0x63736F6E69746572:
		switch(wp[1]){
		case 0x796C6C616369706F:return 1;
		default:return 0;
		}
	case 0x63736F6E6F726863:
		switch(wp[1]){
		case 0x796C6C616369706F:return 1;
		default:return 0;
		}
	case 0x63736F7275617473:
		switch(wp[1]){
		case 0x796C6C616369706F:return 1;
		default:return 0;
		}
	case 0x6373726574657270:
		switch(wp[1]){
		case 0x6C61727574706972:return 1;
		default:return 0;
		}
	case 0x637375616F646E65:
		switch(wp[1]){
		case 0x6E6F697461746C75:return 1;
		default:return 0;
		}
	case 0x6375646E6F636E75:
		switch(wp[1]){
		case 0x7373656E65766974:return 1;
		default:return 0;
		}
	case 0x6375646F72706572:
		switch(wp[1]){
		case 0x7373656E65766974:return 1;
		default:return 0;
		}
	case 0x6375646F72706E75:
		switch(wp[1]){
		case 0x7373656E656C6269:return 1;
		case 0x7373656E65766974:return 1;
		default:return 0;
		}
	case 0x6375646F72746E69:
		switch(wp[1]){
		case 0x7373656E69726F74:return 1;
		default:return 0;
		}
	case 0x6375656C6F707968:
		switch(wp[1]){
		case 0x7369736F7479636F:return 1;
		default:return 0;
		}
	case 0x63756E69746C756D:
		switch(wp[1]){
		case 0x646574616C6F656C:return 1;
		default:return 0;
		}
	case 0x63757274736E6F63:
		switch(wp[1]){
		case 0x7373656E65766974:return 1;
		case 0x796C6C616E6F6974:return 1;
		default:return 0;
		}
	case 0x6378657265707573:
		switch(wp[1]){
		case 0x65636E6563736572:return 1;
		case 0x6C616E6F69747065:return 1;
		case 0x796C746E656C6C65:return 1;
		default:return 0;
		}
	case 0x6461636172746574:
		switch(wp[1]){
		case 0x7974696C79746361:return 1;
		default:return 0;
		}
	case 0x64616D696E616E69:
		switch(wp[1]){
		case 0x65636E6574726576:return 1;
		default:return 0;
		}
	case 0x6461726F68746170:
		switch(wp[1]){
		case 0x7968706172676F69:return 1;
		default:return 0;
		}
	case 0x6461726F74737963:
		switch(wp[1]){
		case 0x7968706172676F69:return 1;
		default:return 0;
		}
	case 0x64656D6572706E75:
		switch(wp[1]){
		case 0x796C646574617469:return 1;
		default:return 0;
		}
	case 0x64656D7265746E69:
		switch(wp[1]){
		case 0x7373656E65746169:return 1;
		default:return 0;
		}
	case 0x64656E657A6E6562:
		switch(wp[1]){
		case 0x6D75696E6F7A6169:return 1;
		default:return 0;
		}
	case 0x6469646968637261:
		switch(wp[1]){
		case 0x6E61696C61637361:return 1;
		default:return 0;
		}
	case 0x64696C6F736E6F63:
		switch(wp[1]){
		case 0x7473696E6F697461:return 1;
		default:return 0;
		}
	case 0x64696D616C796361:
		switch(wp[1]){
		case 0x656E657A6E65626F:return 1;
		default:return 0;
		}
	case 0x64696F656C63756E:
		switch(wp[1]){
		case 0x616D73616C706F69:return 1;
		default:return 0;
		}
	case 0x646970656C6E6F6E:
		switch(wp[1]){
		case 0x73756F726574706F:return 1;
		default:return 0;
		}
	case 0x6469736E6F636E75:
		switch(wp[1]){
		case 0x7373656E64657265:return 1;
		default:return 0;
		}
	case 0x6469747361666E75:
		switch(wp[1]){
		case 0x7373656E73756F69:return 1;
		default:return 0;
		}
	case 0x6469766F72706D69:
		switch(wp[1]){
		case 0x796C6C6169746E65:return 1;
		default:return 0;
		}
	case 0x646E656373616E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x646E656665646E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x646E657065646E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x646E657265707573:
		switch(wp[1]){
		case 0x746E656D6573726F:return 1;
		default:return 0;
		}
	case 0x646E696172746C75:
		switch(wp[1]){
		case 0x746E657265666669:return 1;
		default:return 0;
		}
	case 0x646E697265707573:
		switch(wp[1]){
		case 0x73756F6972747375:return 1;
		case 0x746E65646E657065:return 1;
		case 0x746E657265666669:return 1;
		default:return 0;
		}
	case 0x646E69746E616C73:
		switch(wp[1]){
		case 0x796C72616C756369:return 1;
		default:return 0;
		}
	case 0x646E6F636F646E65:
		switch(wp[1]){
		case 0x6E6F697461736E65:return 1;
		default:return 0;
		}
	case 0x646E6F636F727970:
		switch(wp[1]){
		case 0x6E6F697461736E65:return 1;
		case 0x7974697669746375:return 1;
		default:return 0;
		}
	case 0x646E6F636F747561:
		switch(wp[1]){
		case 0x6E6F697461736E65:return 1;
		default:return 0;
		}
	case 0x646E6F637265766F:
		switch(wp[1]){
		case 0x6E6F697461736E65:return 1;
		default:return 0;
		}
	case 0x646E6F68636E7973:
		switch(wp[1]){
		case 0x796C6C6169736F72:return 1;
		default:return 0;
		}
	case 0x646E7973796C6F70:
		switch(wp[1]){
		case 0x796C6C6163697465:return 1;
		default:return 0;
		}
	case 0x646F6462796C6F6D:
		switch(wp[1]){
		case 0x6169737065707379:return 1;
		default:return 0;
		}
	case 0x646F6874656D6D69:
		switch(wp[1]){
		case 0x7373656E6C616369:return 1;
		default:return 0;
		}
	case 0x646F6874656D6E75:
		switch(wp[1]){
		case 0x7373656E6C616369:return 1;
		default:return 0;
		}
	case 0x646F6874726F6E75:
		switch(wp[1]){
		case 0x796C6C616369786F:return 1;
		default:return 0;
		}
	case 0x646F696F72707563:
		switch(wp[1]){
		case 0x6574697279677261:return 1;
		default:return 0;
		}
	case 0x646F697265747261:
		switch(wp[1]){
		case 0x7369736174736169:return 1;
		default:return 0;
		}
	case 0x646F6C6968707973:
		switch(wp[1]){
		case 0x73756F74616D7265:return 1;
		default:return 0;
		}
	case 0x646F6D6172746C75:
		switch(wp[1]){
		case 0x63697473696E7265:return 1;
		default:return 0;
		}
	case 0x646F6D6D6F636361:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x646F6D6D6F636E69:
		switch(wp[1]){
		case 0x7373656E73756F69:return 1;
		default:return 0;
		}
	case 0x646F6D6D6F636E75:
		switch(wp[1]){
		case 0x7373656E73756F69:return 1;
		default:return 0;
		}
	case 0x646F706F72636970:
		switch(wp[1]){
		case 0x6E696C6C7968706F:return 1;
		default:return 0;
		}
	case 0x646F72646E6F6863:
		switch(wp[1]){
		case 0x7968706F72747379:return 1;
		default:return 0;
		}
	case 0x646F727463656C65:
		switch(wp[1]){
		case 0x6574616363697365:return 1;
		case 0x6C6163696D616E79:return 1;
		case 0x726F7469736F7065:return 1;
		case 0x7369736F6E676169:return 1;
		case 0x7972747369746E65:return 1;
		default:return 0;
		}
	case 0x646F737369726570:
		switch(wp[1]){
		case 0x6574616C79746361:return 1;
		case 0x6D73696C79746361:return 1;
		case 0x73756F6C79746361:return 1;
		default:return 0;
		}
	case 0x6472656262756C73:
		switch(wp[1]){
		case 0x6E6F696C6C756765:return 1;
		default:return 0;
		}
	case 0x647265746E756F63:
		switch(wp[1]){
		case 0x656761676E657369:return 1;
		case 0x6D736974616D676F:return 1;
		default:return 0;
		}
	case 0x64756A6572706E75:
		switch(wp[1]){
		case 0x7373656E64656369:return 1;
		default:return 0;
		}
	case 0x647574737265766F:
		switch(wp[1]){
		case 0x7373656E73756F69:return 1;
		default:return 0;
		}
	case 0x6479686972726566:
		switch(wp[1]){
		case 0x63696E6179636F72:return 1;
		default:return 0;
		}
	case 0x6479686F656C6170:
		switch(wp[1]){
		case 0x7968706172676F72:return 1;
		default:return 0;
		}
	case 0x6479686F72726566:
		switch(wp[1]){
		case 0x63696E6179636F72:return 1;
		default:return 0;
		}
	case 0x6562696C65646E69:
		switch(wp[1]){
		case 0x7373656E65746172:return 1;
		default:return 0;
		}
	case 0x6562696C65646E75:
		switch(wp[1]){
		case 0x7373656E65746172:return 1;
		case 0x796C676E69746172:return 1;
		default:return 0;
		}
	case 0x65626C756F62616C:
		switch(wp[1]){
		case 0x73756F656361696E:return 1;
		default:return 0;
		}
	case 0x65626F6475657370:
		switch(wp[1]){
		case 0x746E656C6F76656E:return 1;
		default:return 0;
		}
	case 0x6562757461726170:
		switch(wp[1]){
		case 0x7369736F6C756372:return 1;
		default:return 0;
		}
	case 0x6562757469746E61:
		switch(wp[1]){
		case 0x6369746F6C756372:return 1;
		case 0x7369736F6C756372:return 1;
		default:return 0;
		}
	case 0x6563616469756C66:
		switch(wp[1]){
		case 0x7463617274786574:return 1;
		default:return 0;
		}
	case 0x6563616D72616870:
		switch(wp[1]){
		case 0x796C6C6163697475:return 1;
		default:return 0;
		}
	case 0x6563616F6E696D61:
		switch(wp[1]){
		case 0x6564696C696E6174:return 1;
		default:return 0;
		}
	case 0x6563616F74656361:
		switch(wp[1]){
		case 0x6564696C696E6174:return 1;
		default:return 0;
		}
	case 0x6563617268746E61:
		switch(wp[1]){
		case 0x73756F726566696E:return 1;
		default:return 0;
		}
	case 0x656361726F747561:
		switch(wp[1]){
		case 0x6E6F6974617A696D:return 1;
		default:return 0;
		}
	case 0x65636172746E6F63:
		switch(wp[1]){
		case 0x7473696E6F697470:return 1;
		default:return 0;
		}
	case 0x6563617473757263:
		switch(wp[1]){
		case 0x6C616369676F6C6F:return 1;
		default:return 0;
		}
	case 0x6563697264617571:
		switch(wp[1]){
		case 0x6C61696E6E65746E:return 1;
		default:return 0;
		}
	case 0x656369746F6E6E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x6563697571736573:
		switch(wp[1]){
		case 0x6C61696E6E65746E:return 1;
		default:return 0;
		}
	case 0x65636E65696C6F70:
		switch(wp[1]){
		case 0x736974696C616870:return 1;
		default:return 0;
		}
	case 0x65636E6569726570:
		switch(wp[1]){
		case 0x736974696C616870:return 1;
		default:return 0;
		}
	case 0x65636E6574736F70:
		switch(wp[1]){
		case 0x636974696C616870:return 1;
		default:return 0;
		}
	case 0x65636E6F63657270:
		switch(wp[1]){
		case 0x6E6F69746172746E:return 1;
		case 0x7373656E64657472:return 1;
		default:return 0;
		}
	case 0x65636E6F636E6F6E:
		switch(wp[1]){
		case 0x6E6F69746172746E:return 1;
		default:return 0;
		}
	case 0x65636E6F636F7270:
		switch(wp[1]){
		case 0x6E6F69746172746E:return 1;
		default:return 0;
		}
	case 0x65636E6F63736964:
		switch(wp[1]){
		case 0x7373656E64657472:return 1;
		default:return 0;
		}
	case 0x656372756F736572:
		switch(wp[1]){
		case 0x7373656E7373656C:return 1;
		default:return 0;
		}
	case 0x65646168706D796C:
		switch(wp[1]){
		case 0x616973617463656E:return 1;
		case 0x736973617463656E:return 1;
		default:return 0;
		}
	case 0x6564617265746E65:
		switch(wp[1]){
		case 0x7968706172676F6E:return 1;
		default:return 0;
		}
	case 0x6564697264617571:
		switch(wp[1]){
		case 0x6576697461766972:return 1;
		default:return 0;
		}
	case 0x65646D7563726963:
		switch(wp[1]){
		case 0x6E6F69746164756E:return 1;
		default:return 0;
		}
	case 0x65646E6F70657270:
		switch(wp[1]){
		case 0x796C676E69746172:return 1;
		default:return 0;
		}
	case 0x65646F6369786F74:
		switch(wp[1]){
		case 0x7369736F74616D72:return 1;
		case 0x7369746974616D72:return 1;
		default:return 0;
		}
	case 0x65646F646F627563:
		switch(wp[1]){
		case 0x6C61726465686163:return 1;
		default:return 0;
		}
	case 0x65646F6475657370:
		switch(wp[1]){
		case 0x6369746172636F6D:return 1;
		default:return 0;
		}
	case 0x65646F65616C6170:
		switch(wp[1]){
		case 0x79676F6C6F72646E:return 1;
		default:return 0;
		}
	case 0x65646F6D6F726863:
		switch(wp[1]){
		case 0x7369736F74616D72:return 1;
		default:return 0;
		}
	case 0x65646F6E69746361:
		switch(wp[1]){
		case 0x7369746974616D72:return 1;
		default:return 0;
		}
	case 0x65646F6E6F697270:
		switch(wp[1]){
		case 0x73756F6563616D73:return 1;
		default:return 0;
		}
	case 0x65646F6F72686361:
		switch(wp[1]){
		case 0x6573616E69727478:return 1;
		default:return 0;
		}
	case 0x65646F72656C6373:
		switch(wp[1]){
		case 0x7369746974616D72:return 1;
		default:return 0;
		}
	case 0x65646F7472617571:
		switch(wp[1]){
		case 0x6D73696E616D6963:return 1;
		default:return 0;
		}
	case 0x6564726574657270:
		switch(wp[1]){
		case 0x64656E696D726574:return 1;
		default:return 0;
		}
	case 0x6564726574746174:
		switch(wp[1]){
		case 0x79726E6F696C616D:return 1;
		default:return 0;
		}
	case 0x6565726761736964:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x65666661696D6573:
		switch(wp[1]){
		case 0x6574616E6F697463:return 1;
		default:return 0;
		}
	case 0x656669726F647573:
		switch(wp[1]){
		case 0x7373656E73756F72:return 1;
		default:return 0;
		}
	case 0x656669726F706176:
		switch(wp[1]){
		case 0x7373656E73756F72:return 1;
		default:return 0;
		}
	case 0x656669726F706F73:
		switch(wp[1]){
		case 0x7373656E73756F72:return 1;
		default:return 0;
		}
	case 0x65666C6F6F686373:
		switch(wp[1]){
		case 0x70696873776F6C6C:return 1;
		default:return 0;
		}
	case 0x65666E6F636F7270:
		switch(wp[1]){
		case 0x7473696E6F697373:return 1;
		default:return 0;
		}
	case 0x65666F7270627573:
		switch(wp[1]){
		case 0x65746169726F7373:return 1;
		default:return 0;
		}
	case 0x656761697272616D:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x6567616E616D6E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x656769726F6D6D69:
		switch(wp[1]){
		case 0x7373656E73756F72:return 1;
		default:return 0;
		}
	case 0x65676E6168636E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x65676E69706C6173:
		switch(wp[1]){
		case 0x736978617268706D:return 1;
		default:return 0;
		}
	case 0x65676E7972616870:
		switch(wp[1]){
		case 0x736978617268706D:return 1;
		default:return 0;
		}
	case 0x65676F65616C6170:
		switch(wp[1]){
		case 0x636968706172676F:return 1;
		default:return 0;
		}
	case 0x6568636F746F6870:
		switch(wp[1]){
		case 0x796870617267696D:return 1;
		default:return 0;
		}
	case 0x6568656C6464756D:
		switch(wp[1]){
		case 0x7373656E64656461:return 1;
		default:return 0;
		}
	case 0x6568656C7A7A7570:
		switch(wp[1]){
		case 0x7373656E64656461:return 1;
		default:return 0;
		}
	case 0x6568676E6F727473:
		switch(wp[1]){
		case 0x7373656E64656461:return 1;
		default:return 0;
		}
	case 0x65686E65646F6F77:
		switch(wp[1]){
		case 0x7373656E64656461:return 1;
		default:return 0;
		}
	case 0x65686F6D75656E70:
		switch(wp[1]){
		case 0x7861726F68746F6D:return 1;
		default:return 0;
		}
	case 0x65686F726170616C:
		switch(wp[1]){
		case 0x796D6F746F746170:return 1;
		default:return 0;
		}
	case 0x65686F7265746E65:
		switch(wp[1]){
		case 0x6567616872726F6D:return 1;
		default:return 0;
		}
	case 0x6568706F7A6E6562:
		switch(wp[1]){
		case 0x656E697A61786F6E:return 1;
		default:return 0;
		}
	case 0x65687265646E7564:
		switch(wp[1]){
		case 0x7373656E64656461:return 1;
		default:return 0;
		}
	case 0x65687265746C6F6A:
		switch(wp[1]){
		case 0x7373656E64656461:return 1;
		default:return 0;
		}
	case 0x6568727265707573:
		switch(wp[1]){
		case 0x64657A6974616D75:return 1;
		default:return 0;
		}
	case 0x6568737265646E75:
		switch(wp[1]){
		case 0x6B63697766666972:return 1;
		case 0x7069687366666972:return 1;
		default:return 0;
		}
	case 0x656874616D6E6F6E:
		switch(wp[1]){
		case 0x6E6169636974616D:return 1;
		default:return 0;
		}
	case 0x656874656C6C7562:
		switch(wp[1]){
		case 0x7373656E64656461:return 1;
		default:return 0;
		}
	case 0x6568746E616E7973:
		switch(wp[1]){
		case 0x747369676F6C6F72:return 1;
		default:return 0;
		}
	case 0x6568746E65726170:
		switch(wp[1]){
		case 0x7974696C61636974:return 1;
		default:return 0;
		}
	case 0x6568746F69646172:
		switch(wp[1]){
		case 0x6369747565706172:return 1;
		default:return 0;
		}
	case 0x6568746F696C6568:
		switch(wp[1]){
		case 0x726574656D6F6D72:return 1;
		default:return 0;
		}
	case 0x6568746F6D656863:
		switch(wp[1]){
		case 0x6369747565706172:return 1;
		default:return 0;
		}
	case 0x6568746F72647968:
		switch(wp[1]){
		case 0x6369747565706172:return 1;
		default:return 0;
		}
	case 0x6568746F72677968:
		switch(wp[1]){
		case 0x68706172676F6D72:return 1;
		default:return 0;
		}
	case 0x6568746F73707968:
		switch(wp[1]){
		case 0x726574656D6F6D72:return 1;
		default:return 0;
		}
	case 0x6568746F7463616C:
		switch(wp[1]){
		case 0x726574656D6F6D72:return 1;
		default:return 0;
		}
	case 0x6568746F746F6870:
		switch(wp[1]){
		case 0x6369747565706172:return 1;
		default:return 0;
		}
	case 0x6568747968746162:
		switch(wp[1]){
		case 0x68706172676F6D72:return 1;
		default:return 0;
		}
	case 0x6569727465727269:
		switch(wp[1]){
		case 0x7974696C69626176:return 1;
		default:return 0;
		}
	case 0x656B6E61746E6163:
		switch(wp[1]){
		case 0x7373656E73756F72:return 1;
		default:return 0;
		}
	case 0x656C636968637261:
		switch(wp[1]){
		case 0x796D61676F747369:return 1;
		default:return 0;
		}
	case 0x656C6561746C6F76:
		switch(wp[1]){
		case 0x7974696369727463:return 1;
		default:return 0;
		}
	case 0x656C656F62697274:
		switch(wp[1]){
		case 0x7974696369727463:return 1;
		default:return 0;
		}
	case 0x656C656F72647968:
		switch(wp[1]){
		case 0x7974696369727463:return 1;
		default:return 0;
		}
	case 0x656C656F746F6870:
		switch(wp[1]){
		case 0x657079746F727463:return 1;
		case 0x7974696369727463:return 1;
		default:return 0;
		}
	case 0x656C656F7A656970:
		switch(wp[1]){
		case 0x7974696369727463:return 1;
		default:return 0;
		}
	case 0x656C657379726863:
		switch(wp[1]){
		case 0x656E69746E616870:return 1;
		default:return 0;
		}
	case 0x656C65746F656874:
		switch(wp[1]){
		case 0x6C616369676F6C6F:return 1;
		default:return 0;
		}
	case 0x656C6C696D657270:
		switch(wp[1]){
		case 0x657A696C61696E6E:return 1;
		case 0x6D73696C61696E6E:return 1;
		case 0x7473696C61696E6E:return 1;
		default:return 0;
		}
	case 0x656C6F68746E6178:
		switch(wp[1]){
		case 0x65726F68706F6375:return 1;
		default:return 0;
		}
	case 0x656C6F7461706568:
		switch(wp[1]){
		case 0x72616C756369746E:return 1;
		default:return 0;
		}
	case 0x656C7069746C756D:
		switch(wp[1]){
		case 0x676E69646E696F70:return 1;
		default:return 0;
		}
	case 0x656C706D6F636E69:
		switch(wp[1]){
		case 0x7974696C69626174:return 1;
		default:return 0;
		}
	case 0x656D61696C726170:
		switch(wp[1]){
		case 0x676E69726565746E:return 1;
		default:return 0;
		}
	case 0x656D616E726F6E75:
		switch(wp[1]){
		case 0x7373656E6C61746E:return 1;
		default:return 0;
		}
	case 0x656D656C706D6F63:
		switch(wp[1]){
		case 0x7373656E6C61746E:return 1;
		default:return 0;
		}
	case 0x656D696C616B6C61:
		switch(wp[1]){
		case 0x796C6C6163697274:return 1;
		default:return 0;
		}
	case 0x656D696C706D6F63:
		switch(wp[1]){
		case 0x7373656E6C61746E:return 1;
		default:return 0;
		}
	case 0x656D69726F6C6163:
		switch(wp[1]){
		case 0x796C6C6163697274:return 1;
		default:return 0;
		}
	case 0x656D69726F6C6F63:
		switch(wp[1]){
		case 0x796C6C6163697274:return 1;
		default:return 0;
		}
	case 0x656D6D6F636E6F6E:
		switch(wp[1]){
		case 0x656C62617275736E:return 1;
		case 0x6E6F697461726F6D:return 1;
		default:return 0;
		}
	case 0x656D6D6F636F7270:
		switch(wp[1]){
		case 0x6E6F697461726F6D:return 1;
		default:return 0;
		}
	case 0x656D6D7563726963:
		switch(wp[1]){
		case 0x6C616E6F69646972:return 1;
		default:return 0;
		}
	case 0x656D6D7973736964:
		switch(wp[1]){
		case 0x796C6C6163697274:return 1;
		default:return 0;
		}
	case 0x656D6F636964656D:
		switch(wp[1]){
		case 0x6C6163696E616863:return 1;
		default:return 0;
		}
	case 0x656D6F636973756D:
		switch(wp[1]){
		case 0x6C6163696E616863:return 1;
		default:return 0;
		}
	case 0x656D6F64696D6573:
		switch(wp[1]){
		case 0x6465746163697473:return 1;
		default:return 0;
		}
	case 0x656D6F6475657370:
		switch(wp[1]){
		case 0x6D736972656D6174:return 1;
		case 0x73697469676E696E:return 1;
		case 0x73756F6E6172626D:return 1;
		default:return 0;
		}
	case 0x656D6F6572657473:
		switch(wp[1]){
		case 0x796C6C6163697274:return 1;
		default:return 0;
		}
	case 0x656D6F6863697473:
		switch(wp[1]){
		case 0x796C6C6163697274:return 1;
		default:return 0;
		}
	case 0x656D6F6863797370:
		switch(wp[1]){
		case 0x796C6C6163697274:return 1;
		default:return 0;
		}
	case 0x656D6F696E617263:
		switch(wp[1]){
		case 0x796C6C6163697274:return 1;
		default:return 0;
		}
	case 0x656D6F6976756C70:
		switch(wp[1]){
		case 0x796C6C6163697274:return 1;
		default:return 0;
		}
	case 0x656D6F6D72656874:
		switch(wp[1]){
		case 0x68706172676F7274:return 1;
		case 0x796C6C6163697274:return 1;
		default:return 0;
		}
	case 0x656D6F6D73696573:
		switch(wp[1]){
		case 0x68706172676F7274:return 1;
		default:return 0;
		}
	case 0x656D6F6E6F726863:
		switch(wp[1]){
		case 0x796C6C6163697274:return 1;
		default:return 0;
		}
	case 0x656D6F7265636C75:
		switch(wp[1]){
		case 0x73756F6E6172626D:return 1;
		default:return 0;
		}
	case 0x656D6F72656D7568:
		switch(wp[1]){
		case 0x6C61707261636174:return 1;
		default:return 0;
		}
	case 0x656D6F7265746568:
		switch(wp[1]){
		case 0x6D73696C6F626174:return 1;
		case 0x73756F6C6F626174:return 1;
		default:return 0;
		}
	case 0x656D6F7265746E65:
		switch(wp[1]){
		case 0x63697265746E6573:return 1;
		default:return 0;
		}
	case 0x656D6F7268747261:
		switch(wp[1]){
		case 0x73697469676E696E:return 1;
		default:return 0;
		}
	case 0x656D6F7469627563:
		switch(wp[1]){
		case 0x6C61707261636174:return 1;
		default:return 0;
		}
	case 0x656D7369646E6F6E:
		switch(wp[1]){
		case 0x746E656D7265626D:return 1;
		default:return 0;
		}
	case 0x656D75636F646E75:
		switch(wp[1]){
		case 0x7373656E6465746E:return 1;
		default:return 0;
		}
	case 0x656D756E7265766F:
		switch(wp[1]){
		case 0x7373656E73756F72:return 1;
		default:return 0;
		}
	case 0x656D796C6F706564:
		switch(wp[1]){
		case 0x6E6F6974617A6972:return 1;
		default:return 0;
		}
	case 0x656D796C6F706572:
		switch(wp[1]){
		case 0x6E6F6974617A6972:return 1;
		default:return 0;
		}
	case 0x656D796C6F706F63:
		switch(wp[1]){
		case 0x6E6F6974617A6972:return 1;
		default:return 0;
		}
	case 0x656E656765726E75:
		switch(wp[1]){
		case 0x7373656E65746172:return 1;
		default:return 0;
		}
	case 0x656E656968746F64:
		switch(wp[1]){
		case 0x736974697265746E:return 1;
		default:return 0;
		}
	case 0x656E6967616C6573:
		switch(wp[1]){
		case 0x73756F6563616C6C:return 1;
		default:return 0;
		}
	case 0x656E697265707573:
		switch(wp[1]){
		case 0x656C62617272616E:return 1;
		default:return 0;
		}
	case 0x656E6975676E6173:
		switch(wp[1]){
		case 0x73756F696C69626F:return 1;
		default:return 0;
		}
	case 0x656E6C7576736964:
		switch(wp[1]){
		case 0x7974696C69626172:return 1;
		default:return 0;
		}
	case 0x656E6E6F63736964:
		switch(wp[1]){
		case 0x7373656E64657463:return 1;
		default:return 0;
		}
	case 0x656E6F626B636162:
		switch(wp[1]){
		case 0x7373656E7373656C:return 1;
		default:return 0;
		}
	case 0x656E6F6D72656874:
		switch(wp[1]){
		case 0x7974696C61727475:return 1;
		default:return 0;
		}
	case 0x656E6F726170616C:
		switch(wp[1]){
		case 0x796D6F746F726870:return 1;
		default:return 0;
		}
	case 0x656E706F72647968:
		switch(wp[1]){
		case 0x7369736F74616D75:return 1;
		default:return 0;
		}
	case 0x656E73696C6C6176:
		switch(wp[1]){
		case 0x73756F6563616972:return 1;
		default:return 0;
		}
	case 0x656E756D65726E75:
		switch(wp[1]){
		case 0x796C657669746172:return 1;
		default:return 0;
		}
	case 0x656F6D7563726963:
		switch(wp[1]){
		case 0x6C61676168706F73:return 1;
		default:return 0;
		}
	case 0x656F72646E6F6863:
		switch(wp[1]){
		case 0x7369737968706970:return 1;
		default:return 0;
		}
	case 0x656F727463656C65:
		switch(wp[1]){
		case 0x65736F6D736F646E:return 1;
		case 0x676E69766172676E:return 1;
		case 0x726574656D6F6772:return 1;
		default:return 0;
		}
	case 0x657065727473626F:
		switch(wp[1]){
		case 0x7373656E73756F72:return 1;
		default:return 0;
		}
	case 0x65706C797A6E6562:
		switch(wp[1]){
		case 0x6E696C6C6963696E:return 1;
		default:return 0;
		}
	case 0x65706D6F636E6F6E:
		switch(wp[1]){
		case 0x796C657669746974:return 1;
		default:return 0;
		}
	case 0x65706F6475657370:
		switch(wp[1]){
		case 0x6C61726574706972:return 1;
		default:return 0;
		}
	case 0x65706F6D75656E70:
		switch(wp[1]){
		case 0x6D75656E6F746972:return 1;
		default:return 0;
		}
	case 0x65706F6E69676176:
		switch(wp[1]){
		case 0x6C61656E6F746972:return 1;
		default:return 0;
		}
	case 0x65706F7274736167:
		switch(wp[1]){
		case 0x61696E79646F6972:return 1;
		default:return 0;
		}
	case 0x65706F7275656C70:
		switch(wp[1]){
		case 0x6C61656E6F746972:return 1;
		case 0x6D75656E6F746972:return 1;
		default:return 0;
		}
	case 0x6570706169726570:
		switch(wp[1]){
		case 0x72616C756369646E:return 1;
		case 0x736974696369646E:return 1;
		default:return 0;
		}
	case 0x657070616F646E65:
		switch(wp[1]){
		case 0x736974696369646E:return 1;
		default:return 0;
		}
	case 0x657070616F73656D:
		switch(wp[1]){
		case 0x736974696369646E:return 1;
		default:return 0;
		}
	case 0x6570706174736F70:
		switch(wp[1]){
		case 0x72616C756369646E:return 1;
		default:return 0;
		}
	case 0x6570726570627573:
		switch(wp[1]){
		case 0x72616C756369646E:return 1;
		default:return 0;
		}
	case 0x65707265706E6F6E:
		switch(wp[1]){
		case 0x72616C756369646E:return 1;
		default:return 0;
		}
	case 0x6570736E69627573:
		switch(wp[1]){
		case 0x70696873726F7463:return 1;
		default:return 0;
		}
	case 0x6570736F72706E75:
		switch(wp[1]){
		case 0x7373656E73756F72:return 1;
		default:return 0;
		}
	case 0x6570736F72746E69:
		switch(wp[1]){
		case 0x6D73696E6F697463:return 1;
		case 0x7473696E6F697463:return 1;
		default:return 0;
		}
	case 0x6570737265707968:
		switch(wp[1]){
		case 0x65766974616C7563:return 1;
		default:return 0;
		}
	case 0x6570757264617571:
		switch(wp[1]){
		case 0x6C616369746E6164:return 1;
		default:return 0;
		}
	case 0x65707573696D6573:
		switch(wp[1]){
		case 0x6C61727574616E72:return 1;
		default:return 0;
		}
	case 0x65707968696D6568:
		switch(wp[1]){
		case 0x7369736F72646972:return 1;
		default:return 0;
		}
	case 0x65707968696D6573:
		switch(wp[1]){
		case 0x6C6163696C6F6272:return 1;
		default:return 0;
		}
	case 0x657261637265766F:
		switch(wp[1]){
		case 0x7373656E7373656C:return 1;
		default:return 0;
		}
	case 0x6572616870656C62:
		switch(wp[1]){
		case 0x616D65737968706D:return 1;
		default:return 0;
		}
	case 0x65726172746E6F63:
		switch(wp[1]){
		case 0x79746972616C7567:return 1;
		default:return 0;
		}
	case 0x6572636172746C75:
		switch(wp[1]){
		case 0x6E61697261646970:return 1;
		default:return 0;
		}
	case 0x6572647265707573:
		switch(wp[1]){
		case 0x746867756F6E6461:return 1;
		default:return 0;
		}
	case 0x657265746E696E75:
		switch(wp[1]){
		case 0x7373656E64657473:return 1;
		default:return 0;
		}
	case 0x657265746E756F63:
		switch(wp[1]){
		case 0x64656C747461626D:return 1;
		case 0x6567616E6F697073:return 1;
		case 0x6E6F69736E657478:return 1;
		default:return 0;
		}
	case 0x6572657665727269:
		switch(wp[1]){
		case 0x6D73696C6169746E:return 1;
		default:return 0;
		}
	case 0x65726767616F7270:
		switch(wp[1]){
		case 0x7473696E6F697373:return 1;
		default:return 0;
		}
	case 0x6572676E6F636E75:
		switch(wp[1]){
		case 0x6C616E6F69746167:return 1;
		default:return 0;
		}
	case 0x6572676F72746572:
		switch(wp[1]){
		case 0x7473696E6F697373:return 1;
		default:return 0;
		}
	case 0x6572686361746163:
		switch(wp[1]){
		case 0x796C6C6163697473:return 1;
		default:return 0;
		}
	case 0x65726F6D72656874:
		switch(wp[1]){
		case 0x65636E6174736973:return 1;
		case 0x6E6F6974616C7567:return 1;
		default:return 0;
		}
	case 0x65727065726E6F6E:
		switch(wp[1]){
		case 0x656C6269736E6568:return 1;
		default:return 0;
		}
	case 0x6572706572746E65:
		switch(wp[1]){
		case 0x706968737275656E:return 1;
		default:return 0;
		}
	case 0x6572706D696E6F6E:
		switch(wp[1]){
		case 0x7473696E6F697373:return 1;
		default:return 0;
		}
	case 0x6572706D696F656E:
		switch(wp[1]){
		case 0x6D73696E6F697373:return 1;
		case 0x7473696E6F697373:return 1;
		default:return 0;
		}
	case 0x6572706D6F636E69:
		switch(wp[1]){
		case 0x656C6269736E6568:return 1;
		case 0x796C6269736E6568:return 1;
		default:return 0;
		}
	case 0x6572706D6F636E75:
		switch(wp[1]){
		case 0x656C6269736E6568:return 1;
		default:return 0;
		}
	case 0x6572706F72746572:
		switch(wp[1]){
		case 0x6C61726574796273:return 1;
		default:return 0;
		}
	case 0x657270706173696D:
		switch(wp[1]){
		case 0x656C6269736E6568:return 1;
		default:return 0;
		}
	case 0x6572707265707573:
		switch(wp[1]){
		case 0x6E6F697461726170:return 1;
		default:return 0;
		}
	case 0x6572707265746E69:
		switch(wp[1]){
		case 0x6C616E6F69746174:return 1;
		case 0x796C657669746174:return 1;
		case 0x7974696C69626174:return 1;
		default:return 0;
		}
	case 0x6572726F63657270:
		switch(wp[1]){
		case 0x746E65646E6F7073:return 1;
		default:return 0;
		}
	case 0x6572726F636E6F6E:
		switch(wp[1]){
		case 0x676E69646E6F7073:return 1;
		case 0x746E65646E6F7073:return 1;
		default:return 0;
		}
	case 0x6572726F63736964:
		switch(wp[1]){
		case 0x746E65646E6F7073:return 1;
		default:return 0;
		}
	case 0x65727568706C7573:
		switch(wp[1]){
		case 0x73756F7274696E6F:return 1;
		default:return 0;
		}
	case 0x6572756F6C657970:
		switch(wp[1]){
		case 0x6D6172676F726574:return 1;
		default:return 0;
		}
	case 0x6572757463757473:
		switch(wp[1]){
		case 0x7373656E7373656C:return 1;
		default:return 0;
		}
	case 0x6573626F7265766F:
		switch(wp[1]){
		case 0x796C73756F697571:return 1;
		default:return 0;
		}
	case 0x65736E6F6D6D6F63:
		switch(wp[1]){
		case 0x796C6C616369736E:return 1;
		default:return 0;
		}
	case 0x6573726574657270:
		switch(wp[1]){
		case 0x656C62616E6F7361:return 1;
		default:return 0;
		}
	case 0x6573736F70657270:
		switch(wp[1]){
		case 0x7972616E6F697373:return 1;
		default:return 0;
		}
	case 0x6574636172616863:
		switch(wp[1]){
		case 0x6C61636974736972:return 1;
		case 0x6E6F6974617A6972:return 1;
		case 0x747369676F6C6F72:return 1;
		default:return 0;
		}
	case 0x65746568696D6573:
		switch(wp[1]){
		case 0x6C61637265636F72:return 1;
		default:return 0;
		}
	case 0x6574656D656C6574:
		switch(wp[1]){
		case 0x68706172676F726F:return 1;
		default:return 0;
		}
	case 0x6574656D6F726561:
		switch(wp[1]){
		case 0x68706172676F726F:return 1;
		default:return 0;
		}
	case 0x6574696E69666E69:
		switch(wp[1]){
		case 0x6D73696C616D6973:return 1;
		case 0x7974696C616D6973:return 1;
		default:return 0;
		}
	case 0x65746C6F6F686373:
		switch(wp[1]){
		case 0x6873697265686361:return 1;
		default:return 0;
		}
	case 0x65746D7563726963:
		switch(wp[1]){
		case 0x73756F656E617272:return 1;
		default:return 0;
		}
	case 0x65746E656F726561:
		switch(wp[1]){
		case 0x6169736174636572:return 1;
		default:return 0;
		}
	case 0x65746E696F747561:
		switch(wp[1]){
		case 0x6C61757463656C6C:return 1;
		default:return 0;
		}
	case 0x65746E697265766F:
		switch(wp[1]){
		case 0x6C61757463656C6C:return 1;
		default:return 0;
		}
	case 0x65746E6F63657270:
		switch(wp[1]){
		case 0x6E6F6974616C706D:return 1;
		default:return 0;
		}
	case 0x65746E6F636C616D:
		switch(wp[1]){
		case 0x7373656E6465746E:return 1;
		default:return 0;
		}
	case 0x65746E6F636E6F6E:
		switch(wp[1]){
		case 0x65766974616C706D:return 1;
		case 0x796C73756F69746E:return 1;
		default:return 0;
		}
	case 0x65746E6F63736964:
		switch(wp[1]){
		case 0x7373656E6465746E:return 1;
		default:return 0;
		}
	case 0x65746F6475657370:
		switch(wp[1]){
		case 0x6C616E6F67617274:return 1;
		case 0x6C6172656D617274:return 1;
		default:return 0;
		}
	case 0x65746F6863797370:
		switch(wp[1]){
		case 0x6E616963696E6863:return 1;
		case 0x79676F6C6F6E6863:return 1;
		default:return 0;
		}
	case 0x65746F70696E6D6F:
		switch(wp[1]){
		case 0x7974696C6169746E:return 1;
		default:return 0;
		}
	case 0x65746F7069746F74:
		switch(wp[1]){
		case 0x7974696C6169746E:return 1;
		default:return 0;
		}
	case 0x65746F7069757165:
		switch(wp[1]){
		case 0x7974696C6169746E:return 1;
		default:return 0;
		}
	case 0x6574706F6874726F:
		switch(wp[1]){
		case 0x747369676F6C6F72:return 1;
		default:return 0;
		}
	case 0x6574736F69646172:
		switch(wp[1]){
		case 0x79706F63736F6572:return 1;
		default:return 0;
		}
	case 0x6574736F69726570:
		switch(wp[1]){
		case 0x796870616872726F:return 1;
		default:return 0;
		}
	case 0x6574736F70657270:
		switch(wp[1]){
		case 0x7373656E73756F72:return 1;
		default:return 0;
		}
	case 0x6574736F706F7274:
		switch(wp[1]){
		case 0x65706F63736F6572:return 1;
		default:return 0;
		}
	case 0x6574736F746F6870:
		switch(wp[1]){
		case 0x68706172676F6572:return 1;
		default:return 0;
		}
	case 0x6574737265646E75:
		switch(wp[1]){
		case 0x7069687364726177:return 1;
		default:return 0;
		}
	case 0x6574737974616C70:
		switch(wp[1]){
		case 0x796C61687065636E:return 1;
		default:return 0;
		}
	case 0x65756C666E696E75:
		switch(wp[1]){
		case 0x7974696C6169746E:return 1;
		default:return 0;
		}
	case 0x6575716572666E75:
		switch(wp[1]){
		case 0x7373656E6465746E:return 1;
		default:return 0;
		}
	case 0x65757165736E6F63:
		switch(wp[1]){
		case 0x7974696C6169746E:return 1;
		default:return 0;
		}
	case 0x65757165736E6F6E:
		switch(wp[1]){
		case 0x6E6F697461727473:return 1;
		default:return 0;
		}
	case 0x65766F637265766F:
		switch(wp[1]){
		case 0x7373656E73756F74:return 1;
		default:return 0;
		}
	case 0x65766F67696D6573:
		switch(wp[1]){
		case 0x6C61746E656D6E72:return 1;
		default:return 0;
		}
	case 0x65766F72746E6F63:
		switch(wp[1]){
		case 0x657A696C61697372:return 1;
		case 0x6D73696C61697372:return 1;
		case 0x7473696C61697372:return 1;
		default:return 0;
		}
	case 0x65776F707265766F:
		switch(wp[1]){
		case 0x7373656E676E6972:return 1;
		default:return 0;
		}
	case 0x6578796D74736F70:
		switch(wp[1]){
		case 0x73756F74616D6564:return 1;
		default:return 0;
		}
	case 0x65796D6F6E65696C:
		switch(wp[1]){
		case 0x73756F6E65676F6C:return 1;
		default:return 0;
		}
	case 0x6579706F74737963:
		switch(wp[1]){
		case 0x7968706172676F6C:return 1;
		default:return 0;
		}
	case 0x66656D6168736E75:
		switch(wp[1]){
		case 0x7373656E64656361:return 1;
		default:return 0;
		}
	case 0x6665727265707573:
		switch(wp[1]){
		case 0x6E6F6974616D726F:return 1;
		default:return 0;
		}
	case 0x666575716E697571:
		switch(wp[1]){
		case 0x6574616C6F696C6F:return 1;
		default:return 0;
		}
	case 0x6666617265707573:
		switch(wp[1]){
		case 0x6E6F697461696C69:return 1;
		default:return 0;
		}
	case 0x6666617265746E69:
		switch(wp[1]){
		case 0x6E6F697461696C69:return 1;
		default:return 0;
		}
	case 0x666675737265766F:
		switch(wp[1]){
		case 0x796C746E65696369:return 1;
		default:return 0;
		}
	case 0x66696E616D657270:
		switch(wp[1]){
		case 0x6E6F697461747365:return 1;
		default:return 0;
		}
	case 0x66696E616D6E6F6E:
		switch(wp[1]){
		case 0x6E6F697461747365:return 1;
		default:return 0;
		}
	case 0x6669737265766964:
		switch(wp[1]){
		case 0x7974696C69626169:return 1;
		default:return 0;
		}
	case 0x6669746E65696373:
		switch(wp[1]){
		case 0x7373656E6C616369:return 1;
		default:return 0;
		}
	case 0x666C61726F6C6863:
		switch(wp[1]){
		case 0x6564696D616D726F:return 1;
		default:return 0;
		}
	case 0x666E656172746C75:
		switch(wp[1]){
		case 0x746E656D6563726F:return 1;
		default:return 0;
		}
	case 0x666E657265707573:
		switch(wp[1]){
		case 0x746E656D6563726F:return 1;
		default:return 0;
		}
	case 0x666E6965726E6F6E:
		switch(wp[1]){
		case 0x746E656D6563726F:return 1;
		default:return 0;
		}
	case 0x666E697265707573:
		switch(wp[1]){
		case 0x6E6F697461647565:return 1;
		default:return 0;
		}
	case 0x666E6F6E696D6573:
		switch(wp[1]){
		case 0x656C62616D6D616C:return 1;
		default:return 0;
		}
	case 0x666F726574756564:
		switch(wp[1]){
		case 0x65736F6E69726269:return 1;
		default:return 0;
		}
	case 0x666F7270696D6573:
		switch(wp[1]){
		case 0x6C616E6F69737365:return 1;
		default:return 0;
		}
	case 0x666F727069746E61:
		switch(wp[1]){
		case 0x676E697265657469:return 1;
		default:return 0;
		}
	case 0x667265746E696E75:
		switch(wp[1]){
		case 0x6874697764657265:return 1;
		default:return 0;
		}
	case 0x6673697461736E69:
		switch(wp[1]){
		case 0x796C69726F746361:return 1;
		default:return 0;
		}
	case 0x6673697461736E75:
		switch(wp[1]){
		case 0x7373656E676E6979:return 1;
		case 0x796C69726F746361:return 1;
		default:return 0;
		}
	case 0x66736E6172746572:
		switch(wp[1]){
		case 0x6E6F6974616D726F:return 1;
		default:return 0;
		}
	case 0x66756E616D657270:
		switch(wp[1]){
		case 0x676E697275746361:return 1;
		default:return 0;
		}
	case 0x66756E616D6E6F6E:
		switch(wp[1]){
		case 0x676E697275746361:return 1;
		default:return 0;
		}
	case 0x6675737265707573:
		switch(wp[1]){
		case 0x79636E6569636966:return 1;
		default:return 0;
		}
	case 0x676168706F6D6568:
		switch(wp[1]){
		case 0x7369736F7479636F:return 1;
		default:return 0;
		}
	case 0x67616964696D6573:
		switch(wp[1]){
		case 0x636974616D6D6172:return 1;
		default:return 0;
		}
	case 0x676169646F747561:
		switch(wp[1]){
		case 0x636974616D6D6172:return 1;
		default:return 0;
		}
	case 0x67616D7265707573:
		switch(wp[1]){
		case 0x746E65636966696E:return 1;
		default:return 0;
		}
	case 0x67616F7265746568:
		switch(wp[1]){
		case 0x6E696E6974756C67:return 1;
		default:return 0;
		}
	case 0x6761726665727269:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x6761746E61766461:
		switch(wp[1]){
		case 0x7373656E73756F65:return 1;
		default:return 0;
		}
	case 0x6765646972626E75:
		switch(wp[1]){
		case 0x656B696C6D6F6F72:return 1;
		default:return 0;
		}
	case 0x67656C6972636173:
		switch(wp[1]){
		case 0x7373656E73756F69:return 1;
		default:return 0;
		}
	case 0x67656C6F72706173:
		switch(wp[1]){
		case 0x73756F656361696E:return 1;
		default:return 0;
		}
	case 0x6765726765736E75:
		switch(wp[1]){
		case 0x7373656E64657461:return 1;
		default:return 0;
		}
	case 0x67657461636E7973:
		switch(wp[1]){
		case 0x636974616D65726F:return 1;
		default:return 0;
		}
	case 0x6767617265707573:
		switch(wp[1]){
		case 0x6E6F697461766172:return 1;
		default:return 0;
		}
	case 0x6767617265746E69:
		switch(wp[1]){
		case 0x6574616E6974756C:return 1;
		default:return 0;
		}
	case 0x67696C6172746E69:
		switch(wp[1]){
		case 0x73756F746E656D61:return 1;
		case 0x797261746E656D61:return 1;
		default:return 0;
		}
	case 0x67696C65726E6F6E:
		switch(wp[1]){
		case 0x7373656E73756F69:return 1;
		default:return 0;
		}
	case 0x67696C6C65746E69:
		switch(wp[1]){
		case 0x7373656E656C6269:return 1;
		default:return 0;
		}
	case 0x67696C6F72626966:
		switch(wp[1]){
		case 0x73756F746E656D61:return 1;
		default:return 0;
		}
	case 0x67696C7265746E69:
		switch(wp[1]){
		case 0x73756F746E656D61:return 1;
		case 0x797261746E656D61:return 1;
		default:return 0;
		}
	case 0x67696D736E617274:
		switch(wp[1]){
		case 0x796C657669746172:return 1;
		default:return 0;
		}
	case 0x6769726F736E6573:
		switch(wp[1]){
		case 0x72616C75646E616C:return 1;
		default:return 0;
		}
	case 0x676972726F636E69:
		switch(wp[1]){
		case 0x7373656E656C6269:return 1;
		default:return 0;
		}
	case 0x676972726F636E75:
		switch(wp[1]){
		case 0x7373656E656C6269:return 1;
		default:return 0;
		}
	case 0x6769737265707573:
		switch(wp[1]){
		case 0x746E61636966696E:return 1;
		default:return 0;
		}
	case 0x67697374726F6873:
		switch(wp[1]){
		case 0x7373656E64657468:return 1;
		default:return 0;
		}
	case 0x676E6168706D796C:
		switch(wp[1]){
		case 0x6369746174636569:return 1;
		case 0x7365646F74636569:return 1;
		case 0x7369736174636569:return 1;
		case 0x73756F74616D6F69:return 1;
		case 0x797473616C706F69:return 1;
		default:return 0;
		}
	case 0x676E617264617571:
		switch(wp[1]){
		case 0x7373656E72616C75:return 1;
		default:return 0;
		}
	case 0x676E61736F726573:
		switch(wp[1]){
		case 0x746E656C6F6E6975:return 1;
		default:return 0;
		}
	case 0x676E657665726E75:
		switch(wp[1]){
		case 0x7373656E6C756665:return 1;
		default:return 0;
		}
	case 0x676E696874796E61:
		switch(wp[1]){
		case 0x6D73696E61697261:return 1;
		default:return 0;
		}
	case 0x676E697478656E69:
		switch(wp[1]){
		case 0x656C626168736975:return 1;
		case 0x796C626168736975:return 1;
		default:return 0;
		}
	case 0x676E697478656E75:
		switch(wp[1]){
		case 0x656C626168736975:return 1;
		case 0x796C626168736975:return 1;
		default:return 0;
		}
	case 0x676F656168637261:
		switch(wp[1]){
		case 0x6C61636968706172:return 1;
		default:return 0;
		}
	case 0x676F6870736F6870:
		switch(wp[1]){
		case 0x657461726563796C:return 1;
		default:return 0;
		}
	case 0x676F6874726F6E61:
		switch(wp[1]){
		case 0x6C61636968706172:return 1;
		default:return 0;
		}
	case 0x676F6874726F6E75:
		switch(wp[1]){
		case 0x6C61636968706172:return 1;
		default:return 0;
		}
	case 0x676F68747369706F:
		switch(wp[1]){
		case 0x6C61636968706172:return 1;
		default:return 0;
		}
	case 0x676F69626F747561:
		switch(wp[1]){
		case 0x6C61636968706172:return 1;
		default:return 0;
		}
	case 0x676F6C6C6174656D:
		switch(wp[1]){
		case 0x6C61636968706172:return 1;
		default:return 0;
		}
	case 0x676F6C6C69676973:
		switch(wp[1]){
		case 0x6C61636968706172:return 1;
		default:return 0;
		}
	case 0x676F6C6F74756174:
		switch(wp[1]){
		case 0x7373656E6C616369:return 1;
		default:return 0;
		}
	case 0x676F6C7972657470:
		switch(wp[1]){
		case 0x6C61636968706172:return 1;
		default:return 0;
		}
	case 0x676F6E6167657473:
		switch(wp[1]){
		case 0x6C61636968706172:return 1;
		default:return 0;
		}
	case 0x676F6E656863696C:
		switch(wp[1]){
		case 0x6C61636968706172:return 1;
		default:return 0;
		}
	case 0x676F706F746E6F6E:
		switch(wp[1]){
		case 0x6C61636968706172:return 1;
		default:return 0;
		}
	case 0x676F707974657270:
		switch(wp[1]){
		case 0x6C61636968706172:return 1;
		default:return 0;
		}
	case 0x676F7079746E6F6E:
		switch(wp[1]){
		case 0x6C61636968706172:return 1;
		default:return 0;
		}
	case 0x676F726265726563:
		switch(wp[1]){
		case 0x65736F7463616C61:return 1;
		default:return 0;
		}
	case 0x676F726574756564:
		switch(wp[1]){
		case 0x65736F6C75626F6C:return 1;
		default:return 0;
		}
	case 0x676F727265746E69:
		switch(wp[1]){
		case 0x7373656E64657461:return 1;
		default:return 0;
		}
	case 0x676F727463656C65:
		switch(wp[1]){
		case 0x657A696E61766C61:return 1;
		default:return 0;
		}
	case 0x676F74616D696C63:
		switch(wp[1]){
		case 0x6C61636968706172:return 1;
		default:return 0;
		}
	case 0x676F74656E67616D:
		switch(wp[1]){
		case 0x726F746172656E65:return 1;
		default:return 0;
		}
	case 0x676F747369656C63:
		switch(wp[1]){
		case 0x796C6C6163696D61:return 1;
		default:return 0;
		}
	case 0x676F74736F726761:
		switch(wp[1]){
		case 0x6C61636968706172:return 1;
		default:return 0;
		}
	case 0x676F7669676E6967:
		switch(wp[1]){
		case 0x7369746973736F6C:return 1;
		default:return 0;
		}
	case 0x6772656262616C66:
		switch(wp[1]){
		case 0x6E6F697461747361:return 1;
		default:return 0;
		}
	case 0x6772757078656E75:
		switch(wp[1]){
		case 0x7373656E64657461:return 1;
		default:return 0;
		}
	case 0x67736E6172746E69:
		switch(wp[1]){
		case 0x656C626973736572:return 1;
		default:return 0;
		}
	case 0x6863616F72706572:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		case 0x7373656E7373656C:return 1;
		default:return 0;
		}
	case 0x6863616F72707061:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x6863617262627573:
		switch(wp[1]){
		case 0x796C616870656379:return 1;
		default:return 0;
		}
	case 0x6863617265707573:
		switch(wp[1]){
		case 0x746E656D65766569:return 1;
		default:return 0;
		}
	case 0x6863617269746E61:
		switch(wp[1]){
		case 0x796C6C6163697469:return 1;
		default:return 0;
		}
	case 0x68636361736F7275:
		switch(wp[1]){
		case 0x797274656D6F7261:return 1;
		default:return 0;
		}
	case 0x68636565616C6170:
		switch(wp[1]){
		case 0x6E616564696F6E69:return 1;
		default:return 0;
		}
	case 0x6863657461636E75:
		switch(wp[1]){
		case 0x7373656E64657369:return 1;
		case 0x7373656E64657A69:return 1;
		default:return 0;
		}
	case 0x686365747265766F:
		switch(wp[1]){
		case 0x7974696C6163696E:return 1;
		default:return 0;
		}
	case 0x68636968706C7573:
		switch(wp[1]){
		case 0x6574616C6F796874:return 1;
		default:return 0;
		}
	case 0x6863696F656C6170:
		switch(wp[1]){
		case 0x79676F6C6F796874:return 1;
		default:return 0;
		}
	case 0x686369726E656E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x68636E6575716E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x68636E69636F7369:
		switch(wp[1]){
		case 0x63696E6F72656D6F:return 1;
		default:return 0;
		}
	case 0x68636F63696C6973:
		switch(wp[1]){
		case 0x6D726F666F726F6C:return 1;
		default:return 0;
		}
	case 0x68636F6461696461:
		switch(wp[1]){
		case 0x736973656E696B6F:return 1;
		default:return 0;
		}
	case 0x68636F6475657370:
		switch(wp[1]){
		case 0x656C626174697261:return 1;
		case 0x656D6F736F6D6F72:return 1;
		case 0x6574696C6F737972:return 1;
		default:return 0;
		}
	case 0x68636F6572657473:
		switch(wp[1]){
		case 0x796C6C6163696D65:return 1;
		default:return 0;
		}
	case 0x68636F6973796870:
		switch(wp[1]){
		case 0x796C6C6163696D65:return 1;
		default:return 0;
		}
	case 0x68636F6D72656874:
		switch(wp[1]){
		case 0x796C6C6163696D65:return 1;
		default:return 0;
		}
	case 0x68636F6E69746572:
		switch(wp[1]){
		case 0x6C6164696F69726F:return 1;
		default:return 0;
		}
	case 0x68636F72646E6564:
		switch(wp[1]){
		case 0x79676F6C6F6E6F72:return 1;
		default:return 0;
		}
	case 0x68636F7265746568:
		switch(wp[1]){
		case 0x63697473696E6F72:return 1;
		case 0x656D6F736F6D6F72:return 1;
		case 0x6D736974616D6F72:return 1;
		default:return 0;
		}
	case 0x68636F7268747261:
		switch(wp[1]){
		case 0x7369746972646E6F:return 1;
		default:return 0;
		}
	case 0x6863726165736E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x6863726F6C696870:
		switch(wp[1]){
		case 0x73756F6563616469:return 1;
		default:return 0;
		}
	case 0x686375617263616D:
		switch(wp[1]){
		case 0x6D726F6669696E65:return 1;
		default:return 0;
		}
	case 0x6863756F76616E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x6863797370657270:
		switch(wp[1]){
		case 0x6C616369676F6C6F:return 1;
		default:return 0;
		}
	case 0x68637973706E6F6E:
		switch(wp[1]){
		case 0x6C616369676F6C6F:return 1;
		default:return 0;
		}
	case 0x68637973706F6962:
		switch(wp[1]){
		case 0x6C616369676F6C6F:return 1;
		default:return 0;
		}
	case 0x68637973706F6F7A:
		switch(wp[1]){
		case 0x6C616369676F6C6F:return 1;
		default:return 0;
		}
	case 0x6865727070616E75:
		switch(wp[1]){
		case 0x796C657669736E65:return 1;
		default:return 0;
		}
	case 0x6867696C65646E75:
		switch(wp[1]){
		case 0x7373656E6C756674:return 1;
		default:return 0;
		}
	case 0x6867756F68746E75:
		switch(wp[1]){
		case 0x7373656E6C756674:return 1;
		default:return 0;
		}
	case 0x6867756F726F6874:
		switch(wp[1]){
		case 0x6465686374697473:return 1;
		case 0x656D6F7365726166:return 1;
		case 0x7373656E64657262:return 1;
		default:return 0;
		}
	case 0x686E656B63696863:
		switch(wp[1]){
		case 0x796C646574726165:return 1;
		default:return 0;
		}
	case 0x686E697369646E75:
		switch(wp[1]){
		case 0x656C626174697265:return 1;
		default:return 0;
		}
	case 0x686F6C6168706563:
		switch(wp[1]){
		case 0x73696C6172656D75:return 1;
		default:return 0;
		}
	case 0x686F727463656C65:
		switch(wp[1]){
		case 0x63696C7561726479:return 1;
		default:return 0;
		}
	case 0x686F727463657073:
		switch(wp[1]){
		case 0x6D6172676F696C65:return 1;
		default:return 0;
		}
	case 0x6870616964627573:
		switch(wp[1]){
		case 0x636974616D676172:return 1;
		default:return 0;
		}
	case 0x687065736F786568:
		switch(wp[1]){
		case 0x6369726F6870736F:return 1;
		default:return 0;
		}
	case 0x6870696469746E61:
		switch(wp[1]){
		case 0x6369746972656874:return 1;
		default:return 0;
		}
	case 0x6870696474736F70:
		switch(wp[1]){
		case 0x6369746972656874:return 1;
		default:return 0;
		}
	case 0x68706C75736F7369:
		switch(wp[1]){
		case 0x6574616E6179636F:return 1;
		default:return 0;
		}
	case 0x68706C7573726570:
		switch(wp[1]){
		case 0x6574616E6179636F:return 1;
		default:return 0;
		}
	case 0x68706D657265766F:
		switch(wp[1]){
		case 0x7373656E63697461:return 1;
		case 0x796C6C6163697461:return 1;
		default:return 0;
		}
	case 0x68706F6475657370:
		switch(wp[1]){
		case 0x74737972636F6E65:return 1;
		default:return 0;
		}
	case 0x68706F65616C6170:
		switch(wp[1]){
		case 0x79676F6C6F697379:return 1;
		default:return 0;
		}
	case 0x68706F656E6C6162:
		switch(wp[1]){
		case 0x79676F6C6F697379:return 1;
		default:return 0;
		}
	case 0x68706F6572657473:
		switch(wp[1]){
		case 0x68706172676F746F:return 1;
		default:return 0;
		}
	case 0x68706F6863797370:
		switch(wp[1]){
		case 0x79676F6C6F697379:return 1;
		case 0x796C6C6163697379:return 1;
		default:return 0;
		}
	case 0x68706F68706C7573:
		switch(wp[1]){
		case 0x6369726F6870736F:return 1;
		default:return 0;
		}
	case 0x68706F6874657473:
		switch(wp[1]){
		case 0x726574656D6F6E6F:return 1;
		default:return 0;
		}
	case 0x68706F6874736561:
		switch(wp[1]){
		case 0x79676F6C6F697379:return 1;
		default:return 0;
		}
	case 0x68706F696E617263:
		switch(wp[1]){
		case 0x6C6165676E797261:return 1;
		default:return 0;
		}
	case 0x68706F6972646568:
		switch(wp[1]){
		case 0x73756F6D6C616874:return 1;
		default:return 0;
		}
	case 0x68706F6973796870:
		switch(wp[1]){
		case 0x7968706F736F6C69:return 1;
		default:return 0;
		}
	case 0x68706F6D6F726863:
		switch(wp[1]){
		case 0x68706172676F746F:return 1;
		default:return 0;
		}
	case 0x68706F6E616C6162:
		switch(wp[1]){
		case 0x73756F656361726F:return 1;
		default:return 0;
		}
	case 0x68706F6E6F726863:
		switch(wp[1]){
		case 0x68706172676F746F:return 1;
		default:return 0;
		}
	case 0x68706F726F6C6863:
		switch(wp[1]){
		case 0x65746963696E656F:return 1;
		default:return 0;
		}
	case 0x68706F73736F6C67:
		switch(wp[1]){
		case 0x6C6165676E797261:return 1;
		case 0x737565676E797261:return 1;
		default:return 0;
		}
	case 0x68706F74616C6170:
		switch(wp[1]){
		case 0x6C6165676E797261:return 1;
		case 0x737565676E797261:return 1;
		default:return 0;
		}
	case 0x68706F7461706568:
		switch(wp[1]){
		case 0x796D6F746F62656C:return 1;
		default:return 0;
		}
	case 0x68706F7465616863:
		switch(wp[1]){
		case 0x73756F656361726F:return 1;
		default:return 0;
		}
	case 0x68706F74656E696B:
		switch(wp[1]){
		case 0x68706172676F6E6F:return 1;
		default:return 0;
		}
	case 0x6870726F6D6F6567:
		switch(wp[1]){
		case 0x6C616369676F6C6F:return 1;
		default:return 0;
		}
	case 0x6870726F6D6F7270:
		switch(wp[1]){
		case 0x6C616369676F6C6F:return 1;
		default:return 0;
		}
	case 0x687073616F747561:
		switch(wp[1]){
		case 0x6E6F697461697879:return 1;
		default:return 0;
		}
	case 0x6870736F7263696D:
		switch(wp[1]){
		case 0x636974696C757265:return 1;
		default:return 0;
		}
	case 0x687265746E756F63:
		switch(wp[1]){
		case 0x676E6972656D6D61:return 1;
		default:return 0;
		}
	case 0x68726F6863797370:
		switch(wp[1]){
		case 0x6C6163696D687479:return 1;
		default:return 0;
		}
	case 0x68726F7268747261:
		switch(wp[1]){
		case 0x6D736974616D7565:return 1;
		default:return 0;
		}
	case 0x6873696E696D6964:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x6873697265706D69:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x6873697265706E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x6874616572626E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x68746169646E6F6E:
		switch(wp[1]){
		case 0x73756F6E616D7265:return 1;
		default:return 0;
		}
	case 0x6874616D6174656D:
		switch(wp[1]){
		case 0x6C61636974616D65:return 1;
		default:return 0;
		}
	case 0x6874616D696D6573:
		switch(wp[1]){
		case 0x6C61636974616D65:return 1;
		default:return 0;
		}
	case 0x6874617069746E61:
		switch(wp[1]){
		case 0x796C6C6163697465:return 1;
		default:return 0;
		}
	case 0x687461706F6C6C61:
		switch(wp[1]){
		case 0x796C6C6163697465:return 1;
		default:return 0;
		}
	case 0x687461706F747963:
		switch(wp[1]){
		case 0x6C616369676F6C6F:return 1;
		default:return 0;
		}
	case 0x6874617074736F70:
		switch(wp[1]){
		case 0x6C616369676F6C6F:return 1;
		default:return 0;
		}
	case 0x6874656172746574:
		switch(wp[1]){
		case 0x656E616C69736C79:return 1;
		default:return 0;
		}
	case 0x68746565616C6170:
		switch(wp[1]){
		case 0x747369676F6C6F6E:return 1;
		default:return 0;
		}
	case 0x6874656F656C6170:
		switch(wp[1]){
		case 0x747369676F6C6F6E:return 1;
		case 0x7968706172676F6E:return 1;
		default:return 0;
		}
	case 0x687465726F666E75:
		switch(wp[1]){
		case 0x6C7566746867756F:return 1;
		default:return 0;
		}
	case 0x6874676E65727473:
		switch(wp[1]){
		case 0x7373656E7373656C:return 1;
		default:return 0;
		}
	case 0x687468706F646F70:
		switch(wp[1]){
		case 0x73756F74616D6C61:return 1;
		default:return 0;
		}
	case 0x6874696C6F707974:
		switch(wp[1]){
		case 0x636968706172676F:return 1;
		default:return 0;
		}
	case 0x6874696E726F6E75:
		switch(wp[1]){
		case 0x6C616369676F6C6F:return 1;
		default:return 0;
		}
	case 0x68746C6165686E75:
		switch(wp[1]){
		case 0x7373656E656D6F73:return 1;
		default:return 0;
		}
	case 0x68746E616C696870:
		switch(wp[1]){
		case 0x6369747369706F72:return 1;
		case 0x6D73696E69706F72:return 1;
		case 0x7473696E69706F72:return 1;
		default:return 0;
		}
	case 0x68746E6569746E61:
		switch(wp[1]){
		case 0x6369747361697375:return 1;
		default:return 0;
		}
	case 0x68746E657265766F:
		switch(wp[1]){
		case 0x6369747361697375:return 1;
		default:return 0;
		}
	case 0x68746E696D6C6568:
		switch(wp[1]){
		case 0x64696F726F70736F:return 1;
		case 0x6C616369676F6C6F:return 1;
		default:return 0;
		}
	case 0x68746F62656C6870:
		switch(wp[1]){
		case 0x7369736F626D6F72:return 1;
		default:return 0;
		}
	case 0x68746F65616C6170:
		switch(wp[1]){
		case 0x746E6F646F697265:return 1;
		default:return 0;
		}
	case 0x68746F6D70657473:
		switch(wp[1]){
		case 0x7373656E696C7265:return 1;
		default:return 0;
		}
	case 0x6874726F7275656E:
		switch(wp[1]){
		case 0x73756F726574706F:return 1;
		default:return 0;
		}
	case 0x6874726F746F7270:
		switch(wp[1]){
		case 0x73756F726574706F:return 1;
		default:return 0;
		}
	case 0x687473617275656E:
		switch(wp[1]){
		case 0x796C6C6163696E65:return 1;
		default:return 0;
		}
	case 0x68747369706F6E61:
		switch(wp[1]){
		case 0x636968706172676F:return 1;
		default:return 0;
		}
	case 0x696164616B63616C:
		switch(wp[1]){
		case 0x7974696C61636973:return 1;
		default:return 0;
		}
	case 0x69616C6365727269:
		switch(wp[1]){
		case 0x7974696C6962616D:return 1;
		default:return 0;
		}
	case 0x69616C6563726F70:
		switch(wp[1]){
		case 0x6E6F6974617A696E:return 1;
		default:return 0;
		}
	case 0x6961747265746E65:
		switch(wp[1]){
		case 0x7373656E676E696E:return 1;
		default:return 0;
		}
	case 0x6961757163616E75:
		switch(wp[1]){
		case 0x7373656E6465746E:return 1;
		default:return 0;
		}
	case 0x696261656C6C616D:
		switch(wp[1]){
		case 0x6E6F6974617A696C:return 1;
		default:return 0;
		}
	case 0x696261686E696E75:
		switch(wp[1]){
		case 0x7974696C69626174:return 1;
		default:return 0;
		}
	case 0x69626D79736E6F6E:
		switch(wp[1]){
		case 0x796C6C616369746F:return 1;
		default:return 0;
		}
	case 0x69626F6475657370:
		switch(wp[1]){
		case 0x6C616369676F6C6F:return 1;
		default:return 0;
		}
	case 0x69626F6863797370:
		switch(wp[1]){
		case 0x6C616369676F6C6F:return 1;
		default:return 0;
		}
	case 0x69626F68706C7573:
		switch(wp[1]){
		case 0x6574696874756D73:return 1;
		default:return 0;
		}
	case 0x69626F6E656C6573:
		switch(wp[1]){
		case 0x6574696874756D73:return 1;
		default:return 0;
		}
	case 0x69626F7265616E61:
		switch(wp[1]){
		case 0x796C6C616369746F:return 1;
		default:return 0;
		}
	case 0x69626F7465676576:
		switch(wp[1]){
		case 0x73756F6E696D7574:return 1;
		default:return 0;
		}
	case 0x6963617268746E61:
		switch(wp[1]){
		case 0x6E6F6974617A6974:return 1;
		case 0x73756F7265666974:return 1;
		default:return 0;
		}
	case 0x6963657073657270:
		switch(wp[1]){
		case 0x6E6F697461636966:return 1;
		default:return 0;
		}
	case 0x69636570736E6F6E:
		switch(wp[1]){
		case 0x6E6F697461636966:return 1;
		default:return 0;
		}
	case 0x69636572706E6F6E:
		switch(wp[1]){
		case 0x6E6F697461746970:return 1;
		default:return 0;
		}
	case 0x69636572706F6962:
		switch(wp[1]){
		case 0x6E6F697461746970:return 1;
		default:return 0;
		}
	case 0x6963696C65666E69:
		switch(wp[1]){
		case 0x7373656E73756F74:return 1;
		default:return 0;
		}
	case 0x6963696C65666E75:
		switch(wp[1]){
		case 0x7373656E73756F74:return 1;
		default:return 0;
		}
	case 0x6963696C69736564:
		switch(wp[1]){
		case 0x6E6F697461636966:return 1;
		default:return 0;
		}
	case 0x6963696C6F736E75:
		switch(wp[1]){
		case 0x7373656E73756F74:return 1;
		default:return 0;
		}
	case 0x696369746E616E75:
		switch(wp[1]){
		case 0x796C676E69746170:return 1;
		default:return 0;
		}
	case 0x69636E6972706E75:
		switch(wp[1]){
		case 0x7373656E64656C70:return 1;
		default:return 0;
		}
	case 0x6963726163657270:
		switch(wp[1]){
		case 0x73756F74616D6F6E:return 1;
		default:return 0;
		}
	case 0x6963736F626F7270:
		switch(wp[1]){
		case 0x73756F7265666964:return 1;
		default:return 0;
		}
	case 0x696378657265766F:
		switch(wp[1]){
		case 0x7974696C69626174:return 1;
		default:return 0;
		}
	case 0x696379786F736564:
		switch(wp[1]){
		case 0x656E696E6F68636E:return 1;
		default:return 0;
		}
	case 0x696461726F747561:
		switch(wp[1]){
		case 0x636968706172676F:return 1;
		default:return 0;
		}
	case 0x69646172746E6F63:
		switch(wp[1]){
		case 0x7373656E64657463:return 1;
		case 0x796C73756F697463:return 1;
		case 0x796C74636E697473:return 1;
		default:return 0;
		}
	case 0x6964656D65727269:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x6964657263736964:
		switch(wp[1]){
		case 0x7974696C69626174:return 1;
		default:return 0;
		}
	case 0x6964657265707573:
		switch(wp[1]){
		case 0x6E6F697461636966:return 1;
		default:return 0;
		}
	case 0x6964696C6F736572:
		switch(wp[1]){
		case 0x6E6F697461636966:return 1;
		default:return 0;
		}
	case 0x6964696D75686564:
		switch(wp[1]){
		case 0x6E6F697461636966:return 1;
		default:return 0;
		}
	case 0x6964697473657270:
		switch(wp[1]){
		case 0x6E6F697461746967:return 1;
		default:return 0;
		}
	case 0x696469786F747561:
		switch(wp[1]){
		case 0x7974696C6962617A:return 1;
		default:return 0;
		}
	case 0x69646E6570726570:
		switch(wp[1]){
		case 0x79746972616C7563:return 1;
		default:return 0;
		}
	case 0x69646F6475657370:
		switch(wp[1]){
		case 0x6169726568746870:return 1;
		case 0x796C6C6172657470:return 1;
		default:return 0;
		}
	case 0x69646F6D73616C70:
		switch(wp[1]){
		case 0x73756F707261636F:return 1;
		default:return 0;
		}
	case 0x69646F6E69746361:
		switch(wp[1]){
		case 0x6369727463656C65:return 1;
		default:return 0;
		}
	case 0x69646F6E70696564:
		switch(wp[1]){
		case 0x636974616D6F6C70:return 1;
		default:return 0;
		}
	case 0x6964726574657270:
		switch(wp[1]){
		case 0x636974616D6F6C70:return 1;
		default:return 0;
		}
	case 0x69647574656C6176:
		switch(wp[1]){
		case 0x7373656E6972616E:return 1;
		default:return 0;
		}
	case 0x6965636E6F636E69:
		switch(wp[1]){
		case 0x7974696C69626176:return 1;
		default:return 0;
		}
	case 0x6965687469746E61:
		switch(wp[1]){
		case 0x796C6C6163697473:return 1;
		default:return 0;
		}
	case 0x696568746F6E6F6D:
		switch(wp[1]){
		case 0x796C6C6163697473:return 1;
		default:return 0;
		}
	case 0x69656874796C6F70:
		switch(wp[1]){
		case 0x796C6C6163697473:return 1;
		default:return 0;
		}
	case 0x6965736F7263616D:
		switch(wp[1]){
		case 0x68706172676F6D73:return 1;
		default:return 0;
		}
	case 0x6965736F7263696D:
		switch(wp[1]){
		case 0x68706172676F6D73:return 1;
		case 0x726574656D6F6D73:return 1;
		case 0x797274656D6F6D73:return 1;
		default:return 0;
		}
	case 0x69666964696C6F73:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x696669646F6D6E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x6966697265766E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x6966697373616C63:
		switch(wp[1]){
		case 0x6C616E6F69746163:return 1;
		default:return 0;
		}
	case 0x69666974636E6173:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x696669746E656469:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x6966697472616E69:
		switch(wp[1]){
		case 0x7373656E6C616963:return 1;
		default:return 0;
		}
	case 0x69666E6F63657270:
		switch(wp[1]){
		case 0x6E6F697461727567:return 1;
		default:return 0;
		}
	case 0x69666E6F6373696D:
		switch(wp[1]){
		case 0x6E6F697461727567:return 1;
		default:return 0;
		}
	case 0x69666F6461637963:
		switch(wp[1]){
		case 0x6E61656E6963696C:return 1;
		default:return 0;
		}
	case 0x69667369646E6F6E:
		switch(wp[1]){
		case 0x746E656D65727567:return 1;
		default:return 0;
		}
	case 0x6967616C6963756D:
		switch(wp[1]){
		case 0x7373656E73756F6E:return 1;
		default:return 0;
		}
	case 0x6967616C706F6567:
		switch(wp[1]){
		case 0x6D7369706F72746F:return 1;
		default:return 0;
		}
	case 0x6967617264617571:
		switch(wp[1]){
		case 0x6C616D697365746E:return 1;
		default:return 0;
		}
	case 0x6967617266667573:
		switch(wp[1]){
		case 0x796C6C6163697473:return 1;
		default:return 0;
		}
	case 0x6967656C74736F70:
		switch(wp[1]){
		case 0x6E6F6974616D6974:return 1;
		default:return 0;
		}
	case 0x696765727265766F:
		switch(wp[1]){
		case 0x6E6F697461727473:return 1;
		default:return 0;
		}
	case 0x69676F6C68706564:
		switch(wp[1]){
		case 0x6465746163697473:return 1;
		default:return 0;
		}
	case 0x69676F6C6F646570:
		switch(wp[1]){
		case 0x796C6C6163697473:return 1;
		default:return 0;
		}
	case 0x6968636F6E696872:
		switch(wp[1]){
		case 0x797473616C706F6C:return 1;
		default:return 0;
		}
	case 0x6968636F7263616D:
		switch(wp[1]){
		case 0x6E61726574706F72:return 1;
		default:return 0;
		}
	case 0x6968636F7263696D:
		switch(wp[1]){
		case 0x6E61726574706F72:return 1;
		default:return 0;
		}
	case 0x6968636F73726174:
		switch(wp[1]){
		case 0x797473616C706F6C:return 1;
		default:return 0;
		}
	case 0x6968637461726373:
		switch(wp[1]){
		case 0x6E6F697461636966:return 1;
		default:return 0;
		}
	case 0x69686F6475657370:
		switch(wp[1]){
		case 0x6C616369726F7473:return 1;
		default:return 0;
		}
	case 0x6968706172746E69:
		switch(wp[1]){
		case 0x636968706F736F6C:return 1;
		default:return 0;
		}
	case 0x6968706F6C696870:
		switch(wp[1]){
		case 0x736F68706F736F6C:return 1;
		default:return 0;
		}
	case 0x6968706F746F7270:
		switch(wp[1]){
		case 0x636968706F736F6C:return 1;
		default:return 0;
		}
	case 0x696870726F6D6564:
		switch(wp[1]){
		case 0x6E6F6974617A696E:return 1;
		default:return 0;
		}
	case 0x69687461706D7973:
		switch(wp[1]){
		case 0x7973706972746F63:return 1;
		default:return 0;
		}
	case 0x696874646F6F6C62:
		switch(wp[1]){
		case 0x7373656E69747372:return 1;
		default:return 0;
		}
	case 0x6968746F7A6E6562:
		switch(wp[1]){
		case 0x656C6F7A6169646F:return 1;
		default:return 0;
		}
	case 0x696B6F6D72656874:
		switch(wp[1]){
		case 0x73636974616D656E:return 1;
		default:return 0;
		}
	case 0x696C616572727573:
		switch(wp[1]){
		case 0x796C6C6163697473:return 1;
		default:return 0;
		}
	case 0x696C616D72756F74:
		switch(wp[1]){
		case 0x6E6F6974617A696E:return 1;
		case 0x73756F726566696E:return 1;
		default:return 0;
		}
	case 0x696C616E72756F6A:
		switch(wp[1]){
		case 0x796C6C6163697473:return 1;
		default:return 0;
		}
	case 0x696C61727574616E:
		switch(wp[1]){
		case 0x796C6C6163697473:return 1;
		default:return 0;
		}
	case 0x696C617469706163:
		switch(wp[1]){
		case 0x796C6C6163697473:return 1;
		default:return 0;
		}
	case 0x696C617571657270:
		switch(wp[1]){
		case 0x6E6F697461636966:return 1;
		default:return 0;
		}
	case 0x696C6175716E6F6E:
		switch(wp[1]){
		case 0x6E6F697461636966:return 1;
		default:return 0;
		}
	case 0x696C617571736964:
		switch(wp[1]){
		case 0x6E6F697461636966:return 1;
		default:return 0;
		}
	case 0x696C636F656C6170:
		switch(wp[1]){
		case 0x79676F6C6F74616D:return 1;
		default:return 0;
		}
	case 0x696C636F7263696D:
		switch(wp[1]){
		case 0x79676F6C6F74616D:return 1;
		default:return 0;
		}
	case 0x696C65647265766F:
		switch(wp[1]){
		case 0x6E6F697461726562:return 1;
		default:return 0;
		}
	case 0x696C65676E617665:
		switch(wp[1]){
		case 0x796C6C6163697473:return 1;
		default:return 0;
		}
	case 0x696C656861726170:
		switch(wp[1]){
		case 0x6D7369706F72746F:return 1;
		default:return 0;
		}
	case 0x696C656874697065:
		switch(wp[1]){
		case 0x636974656E65676F:return 1;
		default:return 0;
		}
	case 0x696C6874656E6567:
		switch(wp[1]){
		case 0x6C616369676F6C61:return 1;
		default:return 0;
		}
	case 0x696C6F6475657370:
		switch(wp[1]){
		case 0x636974736975676E:return 1;
		default:return 0;
		}
	case 0x696C6F6D6F726863:
		switch(wp[1]){
		case 0x68706172676F6874:return 1;
		default:return 0;
		}
	case 0x696C6F706F6E6F6D:
		switch(wp[1]){
		case 0x796C6C6163697473:return 1;
		default:return 0;
		}
	case 0x696C6F737265766F:
		switch(wp[1]){
		case 0x796C73756F746963:return 1;
		default:return 0;
		}
	case 0x696C706963736964:
		switch(wp[1]){
		case 0x7974696C6962616E:return 1;
		default:return 0;
		}
	case 0x696C7069746C756D:
		switch(wp[1]){
		case 0x6C616E6F69746163:return 1;
		case 0x7373656E656C6261:return 1;
		case 0x796C657669746163:return 1;
		case 0x7974696C69626163:return 1;
		default:return 0;
		}
	case 0x696C706D6F636E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x696C726170657270:
		switch(wp[1]){
		case 0x797261746E656D61:return 1;
		default:return 0;
		}
	case 0x696C7261706E6F6E:
		switch(wp[1]){
		case 0x797261746E656D61:return 1;
		default:return 0;
		}
	case 0x696C726562656F6B:
		switch(wp[1]){
		case 0x73756F656361696E:return 1;
		default:return 0;
		}
	case 0x696D616F74656361:
		switch(wp[1]){
		case 0x6C6F6E6568706F64:return 1;
		default:return 0;
		}
	case 0x696D697263736964:
		switch(wp[1]){
		case 0x6C616E6F6974616E:return 1;
		case 0x7373656E6574616E:return 1;
		case 0x796C65766974616E:return 1;
		case 0x796C676E6974616E:return 1;
		case 0x7974696C6962616E:return 1;
		default:return 0;
		}
	case 0x696D697265746E69:
		switch(wp[1]){
		case 0x796C6C6163697473:return 1;
		default:return 0;
		}
	case 0x696D6D6F636E6F6E:
		switch(wp[1]){
		case 0x7373656E6C617474:return 1;
		default:return 0;
		}
	case 0x696D6F6475657370:
		switch(wp[1]){
		case 0x73756F6C75636172:return 1;
		case 0x747369726174696C:return 1;
		default:return 0;
		}
	case 0x696D6F6572657473:
		switch(wp[1]){
		case 0x726574656D6F7263:return 1;
		default:return 0;
		}
	case 0x696D6F6D73696573:
		switch(wp[1]){
		case 0x656E6F68706F7263:return 1;
		default:return 0;
		}
	case 0x696D6F6E65646E75:
		switch(wp[1]){
		case 0x6C616E6F6974616E:return 1;
		default:return 0;
		}
	case 0x696D7265746E6F63:
		switch(wp[1]){
		case 0x7373656E73756F6E:return 1;
		default:return 0;
		}
	case 0x696D756C6F747561:
		switch(wp[1]){
		case 0x65636E656373656E:return 1;
		default:return 0;
		}
	case 0x696D757469626564:
		switch(wp[1]){
		case 0x6E6F6974617A696E:return 1;
		default:return 0;
		}
	case 0x696E676973657270:
		switch(wp[1]){
		case 0x6576697461636966:return 1;
		case 0x6E6F697461636966:return 1;
		default:return 0;
		}
	case 0x696E6769736E6F63:
		switch(wp[1]){
		case 0x6576697461636966:return 1;
		case 0x6E6F697461636966:return 1;
		default:return 0;
		}
	case 0x696E6769736E6F6E:
		switch(wp[1]){
		case 0x6576697461636966:return 1;
		case 0x6E6F697461636966:return 1;
		default:return 0;
		}
	case 0x696E686379727473:
		switch(wp[1]){
		case 0x6E6F6974617A696E:return 1;
		default:return 0;
		}
	case 0x696E696665646E69:
		switch(wp[1]){
		case 0x7373656E65766974:return 1;
		default:return 0;
		}
	case 0x696E696B706D7570:
		switch(wp[1]){
		case 0x6E6F697461636966:return 1;
		default:return 0;
		}
	case 0x696E696D64616F63:
		switch(wp[1]){
		case 0x6E6F697461727473:return 1;
		case 0x7869727461727473:return 1;
		default:return 0;
		}
	case 0x696E6974616C6567:
		switch(wp[1]){
		case 0x7974696C6962617A:return 1;
		default:return 0;
		}
	case 0x696E6975676E6173:
		switch(wp[1]){
		case 0x6E6F697461636966:return 1;
		default:return 0;
		}
	case 0x696E697675616863:
		switch(wp[1]){
		case 0x796C6C6163697473:return 1;
		default:return 0;
		}
	case 0x696E6E61636E6F6E:
		switch(wp[1]){
		case 0x63697473696C6162:return 1;
		default:return 0;
		}
	case 0x696E6F6375616C67:
		switch(wp[1]){
		case 0x6E6F6974617A6974:return 1;
		default:return 0;
		}
	case 0x696E6F6761746E61:
		switch(wp[1]){
		case 0x796C6C6163697473:return 1;
		default:return 0;
		}
	case 0x696F637265707573:
		switch(wp[1]){
		case 0x65636E656469636E:return 1;
		default:return 0;
		}
	case 0x696F6E6E6F636572:
		switch(wp[1]){
		case 0x796C676E69726574:return 1;
		default:return 0;
		}
	case 0x6970656475657370:
		switch(wp[1]){
		case 0x73756F6870617267:return 1;
		default:return 0;
		}
	case 0x6970656968637261:
		switch(wp[1]){
		case 0x796C6C61706F6373:return 1;
		default:return 0;
		}
	case 0x6970656F74737963:
		switch(wp[1]){
		case 0x616D6F696C656874:return 1;
		default:return 0;
		}
	case 0x69706C6173656163:
		switch(wp[1]){
		case 0x73756F656361696E:return 1;
		default:return 0;
		}
	case 0x6970736E6F636E75:
		switch(wp[1]){
		case 0x7373656E676E6972:return 1;
		default:return 0;
		}
	case 0x6970737265706D69:
		switch(wp[1]){
		case 0x7974696C69626172:return 1;
		default:return 0;
		}
	case 0x6970796863617262:
		switch(wp[1]){
		case 0x6C6164696F63616E:return 1;
		default:return 0;
		}
	case 0x6972616863636173:
		switch(wp[1]){
		case 0x6C6163697274656D:return 1;
		case 0x6E6F697461636966:return 1;
		default:return 0;
		}
	case 0x6972616967616C70:
		switch(wp[1]){
		case 0x796C6C6163697473:return 1;
		default:return 0;
		}
	case 0x69726174696C696D:
		switch(wp[1]){
		case 0x796C6C6163697473:return 1;
		default:return 0;
		}
	case 0x6972637365646E69:
		switch(wp[1]){
		case 0x7974696C69626162:return 1;
		default:return 0;
		}
	case 0x6972637369646E69:
		switch(wp[1]){
		case 0x65766974616E696D:return 1;
		case 0x676E6974616E696D:return 1;
		case 0x6E6F6974616E696D:return 1;
		case 0x796C6574616E696D:return 1;
		case 0x79726F74616E696D:return 1;
		default:return 0;
		}
	case 0x6972637369646E75:
		switch(wp[1]){
		case 0x65766974616E696D:return 1;
		case 0x676E6974616E696D:return 1;
		default:return 0;
		}
	case 0x697263736E617274:
		switch(wp[1]){
		case 0x73756F6974697470:return 1;
		default:return 0;
		}
	case 0x697265686E696E75:
		switch(wp[1]){
		case 0x7974696C69626174:return 1;
		default:return 0;
		}
	case 0x6972656D65687565:
		switch(wp[1]){
		case 0x796C6C6163697473:return 1;
		default:return 0;
		}
	case 0x6972657069726570:
		switch(wp[1]){
		case 0x7369746964726163:return 1;
		default:return 0;
		}
	case 0x6972657069746E61:
		switch(wp[1]){
		case 0x6C61636974617473:return 1;
		default:return 0;
		}
	case 0x697265706F646E65:
		switch(wp[1]){
		case 0x7369746964726163:return 1;
		default:return 0;
		}
	case 0x697265746E756F63:
		switch(wp[1]){
		case 0x65636E65756C666E:return 1;
		case 0x657669746365766E:return 1;
		case 0x6E6F69746174696D:return 1;
		default:return 0;
		}
	case 0x69726761696D6573:
		switch(wp[1]){
		case 0x6C617275746C7563:return 1;
		default:return 0;
		}
	case 0x6972686369746E61:
		switch(wp[1]){
		case 0x7974696E61697473:return 1;
		default:return 0;
		}
	case 0x69726F636F707968:
		switch(wp[1]){
		case 0x796C6C6163697473:return 1;
		default:return 0;
		}
	case 0x69726F68706C7573:
		switch(wp[1]){
		case 0x6369656C6F6E6963:return 1;
		default:return 0;
		}
	case 0x6972706F72706F63:
		switch(wp[1]){
		case 0x70696873726F7465:return 1;
		default:return 0;
		}
	case 0x69727461746E6570:
		switch(wp[1]){
		case 0x656E61746E6F6361:return 1;
		default:return 0;
		}
	case 0x697274636F646E69:
		switch(wp[1]){
		case 0x6E6F6974617A696E:return 1;
		default:return 0;
		}
	case 0x697274696C6C6163:
		switch(wp[1]){
		case 0x73756F6563616863:return 1;
		default:return 0;
		}
	case 0x6972746F7A6E6562:
		switch(wp[1]){
		case 0x656469726F6C6863:return 1;
		default:return 0;
		}
	case 0x69727470796C6163:
		switch(wp[1]){
		case 0x73756F6870726F6D:return 1;
		default:return 0;
		}
	case 0x6972747265746E69:
		switch(wp[1]){
		case 0x6E6169726174696E:return 1;
		default:return 0;
		}
	case 0x6972747365726E75:
		switch(wp[1]){
		case 0x7373656E64657463:return 1;
		default:return 0;
		}
	case 0x6972757373756173:
		switch(wp[1]){
		case 0x6E6F6974617A6974:return 1;
		default:return 0;
		}
	case 0x697365647265766F:
		switch(wp[1]){
		case 0x7373656E73756F72:return 1;
		default:return 0;
		}
	case 0x6973697265766E69:
		switch(wp[1]){
		case 0x65647574696C696D:return 1;
		default:return 0;
		}
	case 0x69736E6172746E69:
		switch(wp[1]){
		case 0x7373656E65766974:return 1;
		default:return 0;
		}
	case 0x69736E65736E6F6E:
		switch(wp[1]){
		case 0x6E6F697461636966:return 1;
		case 0x7373656E65766974:return 1;
		default:return 0;
		}
	case 0x69736E6F63627573:
		switch(wp[1]){
		case 0x6E6F697461726564:return 1;
		default:return 0;
		}
	case 0x69736E6F63657270:
		switch(wp[1]){
		case 0x6E6F697461726564:return 1;
		default:return 0;
		}
	case 0x69736E6F636E6F6E:
		switch(wp[1]){
		case 0x6E6F697461726564:return 1;
		default:return 0;
		}
	case 0x69736E6F63736964:
		switch(wp[1]){
		case 0x6E6F697461726564:return 1;
		default:return 0;
		}
	case 0x69736F656F707968:
		switch(wp[1]){
		case 0x61696C6968706F6E:return 1;
		default:return 0;
		}
	case 0x697373616B63616A:
		switch(wp[1]){
		case 0x6E6F697461636966:return 1;
		default:return 0;
		}
	case 0x697373616C616874:
		switch(wp[1]){
		case 0x73756F747968706F:return 1;
		default:return 0;
		}
	case 0x697373616C636572:
		switch(wp[1]){
		case 0x6E6F697461636966:return 1;
		default:return 0;
		}
	case 0x697373616C636E75:
		switch(wp[1]){
		case 0x6E6F697461636966:return 1;
		default:return 0;
		}
	case 0x697373616F747561:
		switch(wp[1]){
		case 0x6E6F6974616C696D:return 1;
		default:return 0;
		}
	case 0x6973736572707865:
		switch(wp[1]){
		case 0x796C7373656C6E6F:return 1;
		default:return 0;
		}
	case 0x697373696D6D6F63:
		switch(wp[1]){
		case 0x7069687372656E6F:return 1;
		default:return 0;
		}
	case 0x6973736F666E6F6E:
		switch(wp[1]){
		case 0x73756F726566696C:return 1;
		default:return 0;
		}
	case 0x69737968706E6F6E:
		switch(wp[1]){
		case 0x6C616369676F6C6F:return 1;
		default:return 0;
		}
	case 0x69737968706F6962:
		switch(wp[1]){
		case 0x6C616369676F6C6F:return 1;
		default:return 0;
		}
	case 0x6974616665646E69:
		switch(wp[1]){
		case 0x7974696C69626167:return 1;
		default:return 0;
		}
	case 0x6974616D6F67797A:
		switch(wp[1]){
		case 0x6C61696361666F63:return 1;
		default:return 0;
		}
	case 0x6974617267657270:
		switch(wp[1]){
		case 0x6E6F697461636966:return 1;
		default:return 0;
		}
	case 0x6974617274736572:
		switch(wp[1]){
		case 0x6E6F697461636966:return 1;
		default:return 0;
		}
	case 0x6974636172706D69:
		switch(wp[1]){
		case 0x7974696C69626163:return 1;
		default:return 0;
		}
	case 0x6974636172706E75:
		switch(wp[1]){
		case 0x7974696C69626163:return 1;
		default:return 0;
		}
	case 0x6974636172746574:
		switch(wp[1]){
		case 0x6E6164696C6C656E:return 1;
		default:return 0;
		}
	case 0x697463656A627573:
		switch(wp[1]){
		case 0x6E6F697461636966:return 1;
		default:return 0;
		}
	case 0x697463656C6C6F63:
		switch(wp[1]){
		case 0x6E6F6974617A6976:return 1;
		default:return 0;
		}
	case 0x6974636E61736E75:
		switch(wp[1]){
		case 0x6E6F697461636966:return 1;
		case 0x7373656E64656966:return 1;
		default:return 0;
		}
	case 0x69746967656C6C69:
		switch(wp[1]){
		case 0x7373656E6574616D:return 1;
		default:return 0;
		}
	case 0x697469736E617274:
		switch(wp[1]){
		case 0x7373656E6C616E6F:return 1;
		default:return 0;
		}
	case 0x697469736F70706F:
		switch(wp[1]){
		case 0x73756F6C61706573:return 1;
		case 0x73756F6C61746570:return 1;
		default:return 0;
		}
	case 0x69746E617A6E6562:
		switch(wp[1]){
		case 0x656D69786F646C61:return 1;
		default:return 0;
		}
	case 0x69746E6564696572:
		switch(wp[1]){
		case 0x6E6F697461636966:return 1;
		default:return 0;
		}
	case 0x69746E6570726573:
		switch(wp[1]){
		case 0x6E6F6974617A696E:return 1;
		default:return 0;
		}
	case 0x69746F67656E6E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x69746F6863697274:
		switch(wp[1]){
		case 0x61696E616D6F6C6C:return 1;
		default:return 0;
		}
	case 0x6974726163627573:
		switch(wp[1]){
		case 0x73756F6E6967616C:return 1;
		default:return 0;
		}
	case 0x6974726163657270:
		switch(wp[1]){
		case 0x73756F6E6967616C:return 1;
		default:return 0;
		}
	case 0x6974726170627573:
		switch(wp[1]){
		case 0x746E656D6E6F6974:return 1;
		default:return 0;
		}
	case 0x6974726170657270:
		switch(wp[1]){
		case 0x6E6F697461706963:return 1;
		default:return 0;
		}
	case 0x69747261706E6F6E:
		switch(wp[1]){
		case 0x676E697461706963:return 1;
		case 0x6E6F697461706963:return 1;
		default:return 0;
		}
	case 0x69747261706F7270:
		switch(wp[1]){
		case 0x6E6F697461706963:return 1;
		default:return 0;
		}
	case 0x6974726563657270:
		switch(wp[1]){
		case 0x6E6F697461636966:return 1;
		default:return 0;
		}
	case 0x6974726566657270:
		switch(wp[1]){
		case 0x6E6F6974617A696C:return 1;
		default:return 0;
		}
	case 0x6974726F666E6F6E:
		switch(wp[1]){
		case 0x6E6F697461636966:return 1;
		default:return 0;
		}
	case 0x6974726F6D657270:
		switch(wp[1]){
		case 0x6E6F697461636966:return 1;
		default:return 0;
		}
	case 0x6974736564657270:
		switch(wp[1]){
		case 0x6C616E6F6974616E:return 1;
		default:return 0;
		}
	case 0x6974736575716E75:
		switch(wp[1]){
		case 0x7373656E64656E6F:return 1;
		default:return 0;
		}
	case 0x6974736963736166:
		switch(wp[1]){
		case 0x6E6F6974617A6963:return 1;
		default:return 0;
		}
	case 0x6974736964627573:
		switch(wp[1]){
		case 0x646568736975676E:return 1;
		default:return 0;
		}
	case 0x6974736E6F636E75:
		switch(wp[1]){
		case 0x6C616E6F69747574:return 1;
		default:return 0;
		}
	case 0x6974736F72657470:
		switch(wp[1]){
		case 0x6C61636974616D67:return 1;
		default:return 0;
		}
	case 0x6974737265707573:
		switch(wp[1]){
		case 0x6E6F6974616C756D:return 1;
		case 0x7373656C6E6F6974:return 1;
		default:return 0;
		}
	case 0x6974737265746E69:
		switch(wp[1]){
		case 0x6E6F6974616C756D:return 1;
		default:return 0;
		}
	case 0x697473756A657270:
		switch(wp[1]){
		case 0x6E6F697461636966:return 1;
		default:return 0;
		}
	case 0x6974756C6F736261:
		switch(wp[1]){
		case 0x796C6C6163697473:return 1;
		default:return 0;
		}
	case 0x6974756C6F766572:
		switch(wp[1]){
		case 0x676E697265656E6F:return 1;
		default:return 0;
		}
	case 0x6974757263736E75:
		switch(wp[1]){
		case 0x796C676E697A696E:return 1;
		default:return 0;
		}
	case 0x69757161666C7573:
		switch(wp[1]){
		case 0x656E696C61786F6E:return 1;
		default:return 0;
		}
	case 0x6975716F7A6E6562:
		switch(wp[1]){
		case 0x656E696C61786F6E:return 1;
		default:return 0;
		}
	case 0x6975717365736E75:
		switch(wp[1]){
		case 0x6E61696C61646570:return 1;
		default:return 0;
		}
	case 0x6976616C63627573:
		switch(wp[1]){
		case 0x72616C7567756A6F:return 1;
		default:return 0;
		}
	case 0x69766963696D6573:
		switch(wp[1]){
		case 0x6E6F6974617A696C:return 1;
		default:return 0;
		}
	case 0x697669637265766F:
		switch(wp[1]){
		case 0x6E6F6974617A696C:return 1;
		default:return 0;
		}
	case 0x697669646E696E75:
		switch(wp[1]){
		case 0x64657A696C617564:return 1;
		default:return 0;
		}
	case 0x6976697469736F70:
		switch(wp[1]){
		case 0x796C6C6163697473:return 1;
		default:return 0;
		}
	case 0x6978656C706D6F63:
		switch(wp[1]){
		case 0x6E6F697461636966:return 1;
		default:return 0;
		}
	case 0x6A6F727069746E61:
		switch(wp[1]){
		case 0x7974697669746365:return 1;
		default:return 0;
		}
	case 0x6B616D7265707968:
		switch(wp[1]){
		case 0x63696C656B736F72:return 1;
		default:return 0;
		}
	case 0x6B617473696D6E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x6B63617474616E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x6B65726F666E6F6E:
		switch(wp[1]){
		case 0x656764656C776F6E:return 1;
		default:return 0;
		}
	case 0x6C61657065726E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x6C61657065727269:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x6C61657070616E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x6C61666E696E6F6E:
		switch(wp[1]){
		case 0x7473696C6962696C:return 1;
		default:return 0;
		}
	case 0x6C61676172747361:
		switch(wp[1]){
		case 0x6C6172746E65636F:return 1;
		default:return 0;
		}
	case 0x6C61687065636E65:
		switch(wp[1]){
		case 0x616963616C616D6F:return 1;
		case 0x616967616872726F:return 1;
		case 0x61696E6568747361:return 1;
		case 0x736978616C616D6F:return 1;
		default:return 0;
		}
	case 0x6C616E696D697263:
		switch(wp[1]){
		case 0x6E61696369747369:return 1;
		default:return 0;
		}
	case 0x6C616E6F69746172:
		switch(wp[1]){
		case 0x6D73696369747369:return 1;
		default:return 0;
		}
	case 0x6C616F65616C6170:
		switch(wp[1]){
		case 0x6C6163696D656863:return 1;
		default:return 0;
		}
	case 0x6C61736F7274656D:
		switch(wp[1]){
		case 0x73697469676E6970:return 1;
		default:return 0;
		}
	case 0x6C61737968636170:
		switch(wp[1]){
		case 0x73697469676E6970:return 1;
		default:return 0;
		}
	case 0x6C6174656D6E6F6E:
		switch(wp[1]){
		case 0x6C6163696772756C:return 1;
		case 0x73756F726566696C:return 1;
		default:return 0;
		}
	case 0x6C61766968636E75:
		switch(wp[1]){
		case 0x7373656E73756F72:return 1;
		default:return 0;
		}
	case 0x6C61767265646E75:
		switch(wp[1]){
		case 0x656B696C676E6975:return 1;
		default:return 0;
		}
	case 0x6C626F7972636164:
		switch(wp[1]){
		case 0x61656872726F6E65:return 1;
		default:return 0;
		}
	case 0x6C63636568637261:
		switch(wp[1]){
		case 0x6369747361697365:return 1;
		default:return 0;
		}
	case 0x6C63636569746E61:
		switch(wp[1]){
		case 0x6369747361697365:return 1;
		default:return 0;
		}
	case 0x6C636F6361726F63:
		switch(wp[1]){
		case 0x72616C7563697661:return 1;
		default:return 0;
		}
	case 0x6C636F6475657370:
		switch(wp[1]){
		case 0x6D73696369737361:return 1;
		default:return 0;
		}
	case 0x6C636F6E72657473:
		switch(wp[1]){
		case 0x72616C7563697661:return 1;
		default:return 0;
		}
	case 0x6C63796369746E61:
		switch(wp[1]){
		case 0x796C6C6163696E6F:return 1;
		default:return 0;
		}
	case 0x6C6379636F696469:
		switch(wp[1]){
		case 0x73756F6E6168706F:return 1;
		default:return 0;
		}
	case 0x6C6379636F726162:
		switch(wp[1]){
		case 0x726574656D6F6E6F:return 1;
		default:return 0;
		}
	case 0x6C65626D656E6F6E:
		switch(wp[1]){
		case 0x746E656D6873696C:return 1;
		default:return 0;
		}
	case 0x6C65627265746E69:
		switch(wp[1]){
		case 0x746E65726567696C:return 1;
		default:return 0;
		}
	case 0x6C65686F746F6870:
		switch(wp[1]){
		case 0x7968706172676F69:return 1;
		default:return 0;
		}
	case 0x6C6568746F646E65:
		switch(wp[1]){
		case 0x616D6F78796D6F69:return 1;
		default:return 0;
		}
	case 0x6C6568777265766F:
		switch(wp[1]){
		case 0x7373656E676E696D:return 1;
		default:return 0;
		}
	case 0x6C656C6C61726170:
		switch(wp[1]){
		case 0x6369646570697065:return 1;
		case 0x63696D6D6172676F:return 1;
		case 0x6574617672656E69:return 1;
		case 0x6C61646570697065:return 1;
		case 0x6D7369706F72746F:return 1;
		case 0x6E6F646570697065:return 1;
		case 0x6E6F64657069706F:return 1;
		case 0x73756F6D6F72646F:return 1;
		case 0x73756F7672656E69:return 1;
		default:return 0;
		}
	case 0x6C656D756C6C6F63:
		switch(wp[1]){
		case 0x73756F656361696C:return 1;
		default:return 0;
		}
	case 0x6C656D75746E6F63:
		switch(wp[1]){
		case 0x7373656E73756F69:return 1;
		default:return 0;
		}
	case 0x6C656F6D616E7964:
		switch(wp[1]){
		case 0x6C61636972746365:return 1;
		default:return 0;
		}
	case 0x6C656F6D72656874:
		switch(wp[1]){
		case 0x6C61636972746365:return 1;
		default:return 0;
		}
	case 0x6C656F726170616C:
		switch(wp[1]){
		case 0x796D6F746F727479:return 1;
		default:return 0;
		}
	case 0x6C656F7274736167:
		switch(wp[1]){
		case 0x796D6F746F727479:return 1;
		default:return 0;
		}
	case 0x6C65727265746E69:
		switch(wp[1]){
		case 0x7373656E64657461:return 1;
		default:return 0;
		}
	case 0x6C65746E69657270:
		switch(wp[1]){
		case 0x796C746E6567696C:return 1;
		default:return 0;
		}
	case 0x6C65746F69646172:
		switch(wp[1]){
		case 0x6369687061726765:return 1;
		default:return 0;
		}
	case 0x6C65746F746F6870:
		switch(wp[1]){
		case 0x6369687061726765:return 1;
		default:return 0;
		}
	case 0x6C666F63696C6973:
		switch(wp[1]){
		case 0x6574616C6C656761:return 1;
		default:return 0;
		}
	case 0x6C666F6E616F6863:
		switch(wp[1]){
		case 0x6574616C6C656761:return 1;
		default:return 0;
		}
	case 0x6C676970656F7968:
		switch(wp[1]){
		case 0x6E6165646974746F:return 1;
		default:return 0;
		}
	case 0x6C676F65616C6170:
		switch(wp[1]){
		case 0x79676F6C6F696361:return 1;
		default:return 0;
		}
	case 0x6C68636968637261:
		switch(wp[1]){
		case 0x73756F6564796D61:return 1;
		default:return 0;
		}
	case 0x6C68636F6C706168:
		switch(wp[1]){
		case 0x73756F6564796D61:return 1;
		default:return 0;
		}
	case 0x6C68636F6C706964:
		switch(wp[1]){
		case 0x73756F6564796D61:return 1;
		default:return 0;
		}
	case 0x6C68636F746F7270:
		switch(wp[1]){
		case 0x6C6C7968706F726F:return 1;
		default:return 0;
		}
	case 0x6C68637265707968:
		switch(wp[1]){
		case 0x616972647968726F:return 1;
		default:return 0;
		}
	case 0x6C69617373616E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x6C69636974726576:
		switch(wp[1]){
		case 0x657461727473616C:return 1;
		case 0x73756F656361696C:return 1;
		default:return 0;
		}
	case 0x6C69636E6F636572:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		case 0x7974696C69626169:return 1;
		default:return 0;
		}
	case 0x6C69637265707573:
		switch(wp[1]){
		case 0x7373656E73756F69:return 1;
		default:return 0;
		}
	case 0x6C69667265746E69:
		switch(wp[1]){
		case 0x73756F746E656D61:return 1;
		case 0x797261746E656D61:return 1;
		default:return 0;
		}
	case 0x6C6968637265766F:
		switch(wp[1]){
		case 0x7373656E68736964:return 1;
		default:return 0;
		}
	case 0x6C6968706F656874:
		switch(wp[1]){
		case 0x65706F7268746E61:return 1;
		case 0x79706F7268746E61:return 1;
		default:return 0;
		}
	case 0x6C696D69746C756D:
		switch(wp[1]){
		case 0x657269616E6F696C:return 1;
		default:return 0;
		}
	case 0x6C69707265746E69:
		switch(wp[1]){
		case 0x676E697265747361:return 1;
		default:return 0;
		}
	case 0x6C69757165736964:
		switch(wp[1]){
		case 0x6E6F697461726269:return 1;
		default:return 0;
		}
	case 0x6C6975716E617274:
		switch(wp[1]){
		case 0x6E6F6974617A696C:return 1;
		default:return 0;
		}
	case 0x6C6C616369746E61:
		switch(wp[1]){
		case 0x6369687061726769:return 1;
		default:return 0;
		}
	case 0x6C6C617261706E75:
		switch(wp[1]){
		case 0x7373656E64656C65:return 1;
		default:return 0;
		}
	case 0x6C6C617473797263:
		switch(wp[1]){
		case 0x636968706172676F:return 1;
		case 0x636974656E65676F:return 1;
		case 0x63697473616C626F:return 1;
		case 0x6C6163696E65676F:return 1;
		case 0x726568706172676F:return 1;
		case 0x736973656E65676F:return 1;
		default:return 0;
		}
	case 0x6C6C656265726563:
		switch(wp[1]){
		case 0x656C69746E6F706F:return 1;
		case 0x656E69746E6F706F:return 1;
		default:return 0;
		}
	case 0x6C6C656F7461766F:
		switch(wp[1]){
		case 0x6C6164696F737069:return 1;
		default:return 0;
		}
	case 0x6C6C65746E696E75:
		switch(wp[1]){
		case 0x616973746E656769:return 1;
		case 0x796C6C6175746365:return 1;
		default:return 0;
		}
	case 0x6C6C69736E617274:
		switch(wp[1]){
		case 0x726F74616E696D75:return 1;
		default:return 0;
		}
	case 0x6C6C6F636F656874:
		switch(wp[1]){
		case 0x6D73697669746365:return 1;
		case 0x7473697669746365:return 1;
		default:return 0;
		}
	case 0x6C6C6F6669726570:
		switch(wp[1]){
		case 0x736974696C756369:return 1;
		default:return 0;
		}
	case 0x6C6C6F72746E6F63:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x6C6C79736F6E6F6D:
		switch(wp[1]){
		case 0x796C6C6163696261:return 1;
		default:return 0;
		}
	case 0x6C6C7973796C6F70:
		switch(wp[1]){
		case 0x796C6C6163696261:return 1;
		default:return 0;
		}
	case 0x6C6F626169746E61:
		switch(wp[1]){
		case 0x7473696E6F697469:return 1;
		default:return 0;
		}
	case 0x6C6F626968706D61:
		switch(wp[1]){
		case 0x796C6C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F626D79736E75:
		switch(wp[1]){
		case 0x7373656E6C616369:return 1;
		default:return 0;
		}
	case 0x6C6F63696D796874:
		switch(wp[1]){
		case 0x6369746168706D79:return 1;
		default:return 0;
		}
	case 0x6C6F636F7263696D:
		switch(wp[1]){
		case 0x726574656D69726F:return 1;
		case 0x797274656D69726F:return 1;
		default:return 0;
		}
	case 0x6C6F636F746F6870:
		switch(wp[1]){
		case 0x7968706172676F6C:return 1;
		default:return 0;
		}
	case 0x6C6F636F746F7270:
		switch(wp[1]){
		case 0x6E61726574706F65:return 1;
		case 0x6E6F726574706F65:return 1;
		default:return 0;
		}
	case 0x6C6F646F6874656D:
		switch(wp[1]){
		case 0x796C6C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F656168637261:
		switch(wp[1]){
		case 0x796C6C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F65676F726761:
		switch(wp[1]){
		case 0x796C6C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F656863617274:
		switch(wp[1]){
		case 0x6C6165676E797261:return 1;
		default:return 0;
		}
	case 0x6C6F657361726870:
		switch(wp[1]){
		case 0x796C6C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F68636E6F7262:
		switch(wp[1]){
		case 0x7369736169687469:return 1;
		default:return 0;
		}
	case 0x6C6F687461636E75:
		switch(wp[1]){
		case 0x7373656E6C616369:return 1;
		default:return 0;
		}
	case 0x6C6F6874696E726F:
		switch(wp[1]){
		case 0x796C6C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F69626F726561:
		switch(wp[1]){
		case 0x796C6C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F69626F726761:
		switch(wp[1]){
		case 0x796C6C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F6973616D6573:
		switch(wp[1]){
		case 0x796C6C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F6C7563736176:
		switch(wp[1]){
		case 0x6369746168706D79:return 1;
		default:return 0;
		}
	case 0x6C6F6D7974656E75:
		switch(wp[1]){
		case 0x656C62617A69676F:return 1;
		default:return 0;
		}
	case 0x6C6F6E61706D6163:
		switch(wp[1]){
		case 0x796C6C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F6E696D726574:
		switch(wp[1]){
		case 0x796C6C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F6E6F6D6F6E67:
		switch(wp[1]){
		case 0x796C6C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F6F7A6F746E65:
		switch(wp[1]){
		case 0x796C6C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F706F7263696D:
		switch(wp[1]){
		case 0x65706F6373697261:return 1;
		default:return 0;
		}
	case 0x6C6F706F7274656D:
		switch(wp[1]){
		case 0x706968736E617469:return 1;
		case 0x796C6C6163697469:return 1;
		default:return 0;
		}
	case 0x6C6F706F746F6870:
		switch(wp[1]){
		case 0x6870617267697261:return 1;
		default:return 0;
		}
	case 0x6C6F726574657275:
		switch(wp[1]){
		case 0x7369736169687469:return 1;
		case 0x796D6F746F687469:return 1;
		default:return 0;
		}
	case 0x6C6F726574737968:
		switch(wp[1]){
		case 0x7369736169687469:return 1;
		default:return 0;
		}
	case 0x6C6F726F6574656D:
		switch(wp[1]){
		case 0x796C6C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F727463656C65:
		switch(wp[1]){
		case 0x796C6C6163697479:return 1;
		default:return 0;
		}
	case 0x6C6F727463657073:
		switch(wp[1]){
		case 0x796C6C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F7275746C7563:
		switch(wp[1]){
		case 0x796C6C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F7365726E6F6E:
		switch(wp[1]){
		case 0x7974696C69626176:return 1;
		default:return 0;
		}
	case 0x6C6F736E6F636E69:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x6C6F737369646E69:
		switch(wp[1]){
		case 0x7373656E656C6275:return 1;
		case 0x7974696C69626176:return 1;
		default:return 0;
		}
	case 0x6C6F74616D696C63:
		switch(wp[1]){
		case 0x796C6C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F746570726568:
		switch(wp[1]){
		case 0x796C6C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F766569746E61:
		switch(wp[1]){
		case 0x7473696E6F697475:return 1;
		default:return 0;
		}
	case 0x6C6F766572657270:
		switch(wp[1]){
		case 0x7972616E6F697475:return 1;
		default:return 0;
		}
	case 0x6C6F7665726E6F6E:
		switch(wp[1]){
		case 0x7972616E6F697475:return 1;
		default:return 0;
		}
	case 0x6C6F7665726F7270:
		switch(wp[1]){
		case 0x7473696E6F697475:return 1;
		case 0x7972616E6F697475:return 1;
		default:return 0;
		}
	case 0x6C6F796874686369:
		switch(wp[1]){
		case 0x796C6C616369676F:return 1;
		default:return 0;
		}
	case 0x6C70696E696D616C:
		switch(wp[1]){
		case 0x6E6F697461746E61:return 1;
		default:return 0;
		}
	case 0x6C706F6475657370:
		switch(wp[1]){
		case 0x6D7569646F6D7361:return 1;
		default:return 0;
		}
	case 0x6C706F6572657473:
		switch(wp[1]){
		case 0x6870617267696E61:return 1;
		default:return 0;
		}
	case 0x6C706F6C6167656D:
		switch(wp[1]){
		case 0x657479636F747361:return 1;
		default:return 0;
		}
	case 0x6C706F6D72656874:
		switch(wp[1]){
		case 0x7974696369747361:return 1;
		default:return 0;
		}
	case 0x6C70707573657270:
		switch(wp[1]){
		case 0x797261746E656D65:return 1;
		default:return 0;
		}
	case 0x6C70726574657270:
		switch(wp[1]){
		case 0x7463656672657075:return 1;
		default:return 0;
		}
	case 0x6C72617069746E61:
		switch(wp[1]){
		case 0x6C61746E656D6169:return 1;
		default:return 0;
		}
	case 0x6C7265746E756F63:
		switch(wp[1]){
		case 0x6E6F697461727461:return 1;
		default:return 0;
		}
	case 0x6C7461736E617274:
		switch(wp[1]){
		case 0x6D73696369746E61:return 1;
		default:return 0;
		}
	case 0x6C756369746E656C:
		switch(wp[1]){
		case 0x657461697274736F:return 1;
		default:return 0;
		}
	case 0x6C75636C61636E69:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x6C75636C61636E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x6C75637265627574:
		switch(wp[1]){
		case 0x636968706F72746F:return 1;
		case 0x6E6965746F72706F:return 1;
		case 0x797061726568746F:return 1;
		default:return 0;
		}
	case 0x6C75667265707573:
		switch(wp[1]){
		case 0x746E656D6C6C6966:return 1;
		default:return 0;
		}
	case 0x6C756D726F666E75:
		switch(wp[1]){
		case 0x656C62617A697261:return 1;
		default:return 0;
		}
	case 0x6C757365646E6F6E:
		switch(wp[1]){
		case 0x64657A6972756870:return 1;
		default:return 0;
		}
	case 0x6C75736F72647968:
		switch(wp[1]){
		case 0x6465746172756870:return 1;
		case 0x6465746572756870:return 1;
		default:return 0;
		}
	case 0x6C75737265707573:
		switch(wp[1]){
		case 0x6465746572756870:return 1;
		default:return 0;
		}
	case 0x6C79636F74706573:
		switch(wp[1]){
		case 0x6C61636972646E69:return 1;
		default:return 0;
		}
	case 0x6C796870796C6F70:
		switch(wp[1]){
		case 0x796C6C6163697465:return 1;
		default:return 0;
		}
	case 0x6C796E6568706964:
		switch(wp[1]){
		case 0x616572756F696874:return 1;
		default:return 0;
		}
	case 0x6C79736172747865:
		switch(wp[1]){
		case 0x6369747369676F6C:return 1;
		default:return 0;
		}
	case 0x6C797369746C756D:
		switch(wp[1]){
		case 0x7974696C6962616C:return 1;
		default:return 0;
		}
	case 0x6D61667369726F66:
		switch(wp[1]){
		case 0x6E6F697461696C69:return 1;
		default:return 0;
		}
	case 0x6D61676F7263696D:
		switch(wp[1]){
		case 0x65747968706F7465:return 1;
		default:return 0;
		}
	case 0x6D61676F72646E61:
		switch(wp[1]){
		case 0x65726F68706F7465:return 1;
		case 0x6D7569676E617465:return 1;
		default:return 0;
		}
	case 0x6D616C666E696E75:
		switch(wp[1]){
		case 0x7974696C6962616D:return 1;
		default:return 0;
		}
	case 0x6D616C7265746E69:
		switch(wp[1]){
		case 0x6E6F6974616C6C65:return 1;
		default:return 0;
		}
	case 0x6D616D7563726963:
		switch(wp[1]){
		case 0x6E6F6974616C7562:return 1;
		case 0x79726F74616C7562:return 1;
		default:return 0;
		}
	case 0x6D616F6475657370:
		switch(wp[1]){
		case 0x6873697275657461:return 1;
		default:return 0;
		}
	case 0x6D61726361736E75:
		switch(wp[1]){
		case 0x6E61697261746E65:return 1;
		default:return 0;
		}
	case 0x6D6172646F6C656D:
		switch(wp[1]){
		case 0x796C6C6163697461:return 1;
		default:return 0;
		}
	case 0x6D6172647265766F:
		switch(wp[1]){
		case 0x796C6C6163697461:return 1;
		default:return 0;
		}
	case 0x6D617265706D6574:
		switch(wp[1]){
		case 0x7473696C61746E65:return 1;
		default:return 0;
		}
	case 0x6D6172746F73696D:
		switch(wp[1]){
		case 0x6D73696E61746E6F:return 1;
		default:return 0;
		}
	case 0x6D65656465726E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x6D65656465727269:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x6D65686F72626966:
		switch(wp[1]){
		case 0x636967616872726F:return 1;
		default:return 0;
		}
	case 0x6D65686F746F7270:
		switch(wp[1]){
		case 0x73756F7265747069:return 1;
		case 0x7473616C626F7461:return 1;
		default:return 0;
		}
	case 0x6D65687265746E69:
		switch(wp[1]){
		case 0x6369726568707369:return 1;
		default:return 0;
		}
	case 0x6D656874616D6E75:
		switch(wp[1]){
		case 0x796C6C6163697461:return 1;
		default:return 0;
		}
	case 0x6D656C636172696D:
		switch(wp[1]){
		case 0x676E697265676E6F:return 1;
		default:return 0;
		}
	case 0x6D656E6F74796373:
		switch(wp[1]){
		case 0x73756F6563617461:return 1;
		default:return 0;
		}
	case 0x6D657265636F7270:
		switch(wp[1]){
		case 0x6D73696C61696E6F:return 1;
		case 0x7473696C61696E6F:return 1;
		default:return 0;
		}
	case 0x6D65737369646E75:
		switch(wp[1]){
		case 0x7373656E64656C62:return 1;
		default:return 0;
		}
	case 0x6D6574736972656D:
		switch(wp[1]){
		case 0x796C6C6163697461:return 1;
		default:return 0;
		}
	case 0x6D6574736F646F70:
		switch(wp[1]){
		case 0x73756F6563616E6F:return 1;
		default:return 0;
		}
	case 0x6D65747379736E75:
		switch(wp[1]){
		case 0x796C64657A697461:return 1;
		case 0x796C6C6163697461:return 1;
		default:return 0;
		}
	case 0x6D676568746F7061:
		switch(wp[1]){
		case 0x796C6C6163697461:return 1;
		default:return 0;
		}
	case 0x6D67696461726170:
		switch(wp[1]){
		case 0x796C6C6163697461:return 1;
		default:return 0;
		}
	case 0x6D676F647265766F:
		switch(wp[1]){
		case 0x796C6C6163697461:return 1;
		default:return 0;
		}
	case 0x6D6867756F726F62:
		switch(wp[1]){
		case 0x676E697265676E6F:return 1;
		default:return 0;
		}
	case 0x6D68746972616E75:
		switch(wp[1]){
		case 0x796C6C6163697465:return 1;
		default:return 0;
		}
	case 0x6D696469746C756D:
		switch(wp[1]){
		case 0x6C616E6F69736E65:return 1;
		default:return 0;
		}
	case 0x6D69647265707968:
		switch(wp[1]){
		case 0x6C616E6F69736E65:return 1;
		default:return 0;
		}
	case 0x6D69656B6F707968:
		switch(wp[1]){
		case 0x797274656D6F6E65:return 1;
		default:return 0;
		}
	case 0x6D696C616F707968:
		switch(wp[1]){
		case 0x6E6F697461746E65:return 1;
		default:return 0;
		}
	case 0x6D69746E65736564:
		switch(wp[1]){
		case 0x657A696C61746E65:return 1;
		default:return 0;
		}
	case 0x6D69746E65736E75:
		switch(wp[1]){
		case 0x657A696C61746E65:return 1;
		case 0x7473696C61746E65:return 1;
		case 0x7974696C61746E65:return 1;
		default:return 0;
		}
	case 0x6D697A6172647968:
		switch(wp[1]){
		case 0x656E656C79687465:return 1;
		default:return 0;
		}
	case 0x6D6C61646E616373:
		switch(wp[1]){
		case 0x676E697265676E6F:return 1;
		default:return 0;
		}
	case 0x6D6C61687468706F:
		switch(wp[1]){
		case 0x616963616C616D6F:return 1;
		case 0x616967616872726F:return 1;
		case 0x616968706F727461:return 1;
		case 0x6C616369676F6C6F:return 1;
		case 0x7369736F63796D6F:return 1;
		case 0x736978656872726F:return 1;
		case 0x73756F726F68706F:return 1;
		case 0x747369706F63736F:return 1;
		case 0x796D6F746F796D6F:return 1;
		default:return 0;
		}
	case 0x6D6D617267616964:
		switch(wp[1]){
		case 0x796C6C6163697469:return 1;
		default:return 0;
		}
	case 0x6D6D617267616E61:
		switch(wp[1]){
		case 0x796C6C6163697461:return 1;
		default:return 0;
		}
	case 0x6D6D617267697065:
		switch(wp[1]){
		case 0x796C6C6163697461:return 1;
		default:return 0;
		}
	case 0x6D6D6172676F7270:
		switch(wp[1]){
		case 0x796C6C6163697461:return 1;
		default:return 0;
		}
	case 0x6D6D6F6378656E69:
		switch(wp[1]){
		case 0x656C626163696E75:return 1;
		default:return 0;
		}
	case 0x6D6D6F6378656E75:
		switch(wp[1]){
		case 0x6465746163696E75:return 1;
		default:return 0;
		}
	case 0x6D6E6F7269766E65:
		switch(wp[1]){
		case 0x6D73696C61746E65:return 1;
		case 0x7473696C61746E65:return 1;
		default:return 0;
		}
	case 0x6D6F636361657270:
		switch(wp[1]){
		case 0x676E697461646F6D:return 1;
		case 0x6E6F697461646F6D:return 1;
		default:return 0;
		}
	case 0x6D6F6363616E6F6E:
		switch(wp[1]){
		case 0x746E656D696E6170:return 1;
		default:return 0;
		}
	case 0x6D6F636361736964:
		switch(wp[1]){
		case 0x6E6F697461646F6D:return 1;
		default:return 0;
		}
	case 0x6D6F6365646E6F6E:
		switch(wp[1]){
		case 0x6E6F697469736F70:return 1;
		default:return 0;
		}
	case 0x6D6F636F746F6870:
		switch(wp[1]){
		case 0x6E6F697469736F70:return 1;
		default:return 0;
		}
	case 0x6D6F637265707573:
		switch(wp[1]){
		case 0x6E6F697373657270:return 1;
		case 0x6E6F6974616E6962:return 1;
		case 0x6E6F697469746570:return 1;
		case 0x726F7461746E656D:return 1;
		default:return 0;
		}
	case 0x6D6F637265746E69:
		switch(wp[1]){
		case 0x65746163696E756D:return 1;
		case 0x6E6F6974616E6962:return 1;
		default:return 0;
		}
	case 0x6D6F637865736964:
		switch(wp[1]){
		case 0x65746163696E756D:return 1;
		default:return 0;
		}
	case 0x6D6F647265707573:
		switch(wp[1]){
		case 0x676E697265656E69:return 1;
		default:return 0;
		}
	case 0x6D6F676E696E656D:
		switch(wp[1]){
		case 0x656C65636F6C6579:return 1;
		default:return 0;
		}
	case 0x6D6F677972657470:
		switch(wp[1]){
		case 0x7972616C6C697861:return 1;
		default:return 0;
		}
	case 0x6D6F6870736F6870:
		switch(wp[1]){
		case 0x6574616462796C6F:return 1;
		default:return 0;
		}
	case 0x6D6F687461666E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x6D6F6C6C69677261:
		switch(wp[1]){
		case 0x6E616973656E6761:return 1;
		default:return 0;
		}
	case 0x6D6F6D6779687073:
		switch(wp[1]){
		case 0x726574656D6F6E61:return 1;
		case 0x797274656D6F6E61:return 1;
		default:return 0;
		}
	case 0x6D6F6E61706D7974:
		switch(wp[1]){
		case 0x7972616C6C697861:return 1;
		default:return 0;
		}
	case 0x6D6F6E61766C6167:
		switch(wp[1]){
		case 0x6D736974656E6761:return 1;
		default:return 0;
		}
	case 0x6D6F6E6F63656E75:
		switch(wp[1]){
		case 0x7373656E6C616369:return 1;
		default:return 0;
		}
	case 0x6D6F6E6F67697274:
		switch(wp[1]){
		case 0x6E61696369727465:return 1;
		default:return 0;
		}
	case 0x6D6F726265726563:
		switch(wp[1]){
		case 0x6C6165676E696E65:return 1;
		case 0x7972616C6C756465:return 1;
		default:return 0;
		}
	case 0x6D6F72626F6E6F6D:
		switch(wp[1]){
		case 0x656E6F746563616F:return 1;
		default:return 0;
		}
	case 0x6D6F726574756564:
		switch(wp[1]){
		case 0x65736F6E69736F79:return 1;
		default:return 0;
		}
	case 0x6D6F726F706D6574:
		switch(wp[1]){
		case 0x7972616C6C697861:return 1;
		default:return 0;
		}
	case 0x6D6F727463656C65:
		switch(wp[1]){
		case 0x68706172676F746F:return 1;
		case 0x6D736974656E6761:return 1;
		case 0x7363696E61686365:return 1;
		case 0x73636974656E6761:return 1;
		case 0x74736974656E6761:return 1;
		default:return 0;
		}
	case 0x6D6F746E656E6F6E:
		switch(wp[1]){
		case 0x6C616369676F6C6F:return 1;
		default:return 0;
		}
	case 0x6D6F746E6F6E6574:
		switch(wp[1]){
		case 0x797473616C706F79:return 1;
		default:return 0;
		}
	case 0x6D6F7475616C6574:
		switch(wp[1]){
		case 0x796C6C6163697461:return 1;
		default:return 0;
		}
	case 0x6D706F6C65766564:
		switch(wp[1]){
		case 0x6E61697261746E65:return 1;
		case 0x7473696C61746E65:return 1;
		default:return 0;
		}
	case 0x6D7265646F707968:
		switch(wp[1]){
		case 0x796C6C6163697461:return 1;
		default:return 0;
		}
	case 0x6D72656669746E61:
		switch(wp[1]){
		case 0x6576697461746E65:return 1;
		default:return 0;
		}
	case 0x6D7265666F6D6F68:
		switch(wp[1]){
		case 0x6576697461746E65:return 1;
		default:return 0;
		}
	case 0x6D7265666F747561:
		switch(wp[1]){
		case 0x6E6F697461746E65:return 1;
		default:return 0;
		}
	case 0x6D72656863736574:
		switch(wp[1]){
		case 0x6574697265686361:return 1;
		default:return 0;
		}
	case 0x6D72656874616964:
		switch(wp[1]){
		case 0x797061726568746F:return 1;
		default:return 0;
		}
	case 0x6D726570696D6573:
		switch(wp[1]){
		case 0x7974696C69626165:return 1;
		default:return 0;
		}
	case 0x6D7265746E696E75:
		switch(wp[1]){
		case 0x796C676E69747469:return 1;
		default:return 0;
		}
	case 0x6D7265746E756F63:
		switch(wp[1]){
		case 0x6E6F697461726769:return 1;
		case 0x6F74736566696E61:return 1;
		default:return 0;
		}
	case 0x6D726F6661726170:
		switch(wp[1]){
		case 0x6564796865646C61:return 1;
		default:return 0;
		}
	case 0x6D726F666174656D:
		switch(wp[1]){
		case 0x6564796865646C61:return 1;
		default:return 0;
		}
	case 0x6D7361746E616870:
		switch(wp[1]){
		case 0x636974656E65676F:return 1;
		case 0x6C616369676F6C6F:return 1;
		case 0x6C616369726F6761:return 1;
		case 0x736973656E65676F:return 1;
		case 0x796C6C6163697461:return 1;
		default:return 0;
		}
	case 0x6D73796874656C70:
		switch(wp[1]){
		case 0x636968706172676F:return 1;
		default:return 0;
		}
	case 0x6D74616F72647968:
		switch(wp[1]){
		case 0x636972656870736F:return 1;
		default:return 0;
		}
	case 0x6D747261706D6F63:
		switch(wp[1]){
		case 0x657A696C61746E65:return 1;
		default:return 0;
		}
	case 0x6D75637269636E69:
		switch(wp[1]){
		case 0x6E6F697463657073:return 1;
		default:return 0;
		}
	case 0x6D75637269636E75:
		switch(wp[1]){
		case 0x6C6169746E617473:return 1;
		case 0x6E6F697463657073:return 1;
		case 0x79726F7475636F6C:return 1;
		default:return 0;
		}
	case 0x6D75686365746163:
		switch(wp[1]){
		case 0x796C6C6163696E65:return 1;
		default:return 0;
		}
	case 0x6D756C6F62697274:
		switch(wp[1]){
		case 0x746E656373656E69:return 1;
		default:return 0;
		}
	case 0x6D756C6F69646172:
		switch(wp[1]){
		case 0x746E656373656E69:return 1;
		default:return 0;
		}
	case 0x6D756C6F746F6870:
		switch(wp[1]){
		case 0x746E656373656E69:return 1;
		default:return 0;
		}
	case 0x6D75736572706E75:
		switch(wp[1]){
		case 0x796C73756F757470:return 1;
		default:return 0;
		}
	case 0x6D7972756A726570:
		switch(wp[1]){
		case 0x676E697265676E6F:return 1;
		default:return 0;
		}
	case 0x6D79736F6874726F:
		switch(wp[1]){
		case 0x6C6163697274656D:return 1;
		default:return 0;
		}
	case 0x6D79736F69646172:
		switch(wp[1]){
		case 0x6C6163697274656D:return 1;
		default:return 0;
		}
	case 0x6D79736F6E697073:
		switch(wp[1]){
		case 0x6369746568746170:return 1;
		default:return 0;
		}
	case 0x6D79786F796C6F70:
		switch(wp[1]){
		case 0x656E656C79687465:return 1;
		default:return 0;
		}
	case 0x6E61636172746E69:
		switch(wp[1]){
		case 0x72616C7563696C61:return 1;
		default:return 0;
		}
	case 0x6E61636568746970:
		switch(wp[1]){
		case 0x64696F706F726874:return 1;
		default:return 0;
		}
	case 0x6E61637265746E69:
		switch(wp[1]){
		case 0x72616C7563696C61:return 1;
		default:return 0;
		}
	case 0x6E6168746870616E:
		switch(wp[1]){
		case 0x656E656361726874:return 1;
		default:return 0;
		}
	case 0x6E616C796874656D:
		switch(wp[1]){
		case 0x656E656361726874:return 1;
		default:return 0;
		}
	case 0x6E616D6F7263696D:
		switch(wp[1]){
		case 0x726F74616C757069:return 1;
		default:return 0;
		}
	case 0x6E616F6475657370:
		switch(wp[1]){
		case 0x64696F706F726874:return 1;
		case 0x6C6163696D6F7461:return 1;
		default:return 0;
		}
	case 0x6E616F6863797370:
		switch(wp[1]){
		case 0x6C61636974796C61:return 1;
		default:return 0;
		}
	case 0x6E616F68706C7573:
		switch(wp[1]){
		case 0x6574616E6F6D6974:return 1;
		case 0x6574696E6F6D6974:return 1;
		default:return 0;
		}
	case 0x6E616F6D72656874:
		switch(wp[1]){
		case 0x6169736568747365:return 1;
		default:return 0;
		}
	case 0x6E61726665727269:
		switch(wp[1]){
		case 0x7974696C69626967:return 1;
		default:return 0;
		}
	case 0x6E61726F706D6574:
		switch(wp[1]){
		case 0x7373656E73756F65:return 1;
		default:return 0;
		}
	case 0x6E61727261776E75:
		switch(wp[1]){
		case 0x7974696C69626174:return 1;
		default:return 0;
		}
	case 0x6E617274696D6564:
		switch(wp[1]){
		case 0x65636E6563756C73:return 1;
		default:return 0;
		}
	case 0x6E617274696D6573:
		switch(wp[1]){
		case 0x79636E6572617073:return 1;
		default:return 0;
		}
	case 0x6E61736F7672656E:
		switch(wp[1]){
		case 0x73756F656E697567:return 1;
		default:return 0;
		}
	case 0x6E61746C756D6973:
		switch(wp[1]){
		case 0x7373656E73756F65:return 1;
		default:return 0;
		}
	case 0x6E61746E656D6F6D:
		switch(wp[1]){
		case 0x7373656E73756F65:return 1;
		default:return 0;
		}
	case 0x6E61747368746977:
		switch(wp[1]){
		case 0x7373656E676E6964:return 1;
		default:return 0;
		}
	case 0x6E61747563627573:
		switch(wp[1]){
		case 0x7373656E73756F65:return 1;
		default:return 0;
		}
	case 0x6E617571696D6573:
		switch(wp[1]){
		case 0x6576697461746974:return 1;
		default:return 0;
		}
	case 0x6E65636172707573:
		switch(wp[1]){
		case 0x6E616972616E6574:return 1;
		default:return 0;
		}
	case 0x6E65636172746C75:
		switch(wp[1]){
		case 0x6E616972616E6574:return 1;
		case 0x72657A696C617274:return 1;
		default:return 0;
		}
	case 0x6E65636F696C6568:
		switch(wp[1]){
		case 0x796C6C6163697274:return 1;
		default:return 0;
		}
	case 0x6E6563736E617274:
		switch(wp[1]){
		case 0x7373656E676E6964:return 1;
		case 0x7373656E746E6564:return 1;
		case 0x796C6C61746E6564:return 1;
		default:return 0;
		}
	case 0x6E65646174737963:
		switch(wp[1]){
		case 0x616D6F637261736F:return 1;
		default:return 0;
		}
	case 0x6E656469666E6F63:
		switch(wp[1]){
		case 0x7373656E6C616974:return 1;
		default:return 0;
		}
	case 0x6E656469746C756D:
		switch(wp[1]){
		case 0x6574616C75636974:return 1;
		default:return 0;
		}
	case 0x6E65646E6F636E69:
		switch(wp[1]){
		case 0x7974696C69626173:return 1;
		case 0x7974696C69626973:return 1;
		default:return 0;
		}
	case 0x6E65646F656C6170:
		switch(wp[1]){
		case 0x6369676F6C6F7264:return 1;
		default:return 0;
		}
	case 0x6E65647275626E75:
		switch(wp[1]){
		case 0x7373656E656D6F73:return 1;
		default:return 0;
		}
	case 0x6E6566666F657270:
		switch(wp[1]){
		case 0x7373656E65766973:return 1;
		default:return 0;
		}
	case 0x6E6567656373696D:
		switch(wp[1]){
		case 0x7473696E6F697461:return 1;
		default:return 0;
		}
	case 0x6E65676E696C6170:
		switch(wp[1]){
		case 0x796C6C6163697465:return 1;
		default:return 0;
		}
	case 0x6E65676E69736964:
		switch(wp[1]){
		case 0x7373656E73756F75:return 1;
		default:return 0;
		}
	case 0x6E65676F6C796870:
		switch(wp[1]){
		case 0x796C6C6163697465:return 1;
		default:return 0;
		}
	case 0x6E65676F6D616761:
		switch(wp[1]){
		case 0x796C6C6163697465:return 1;
		default:return 0;
		}
	case 0x6E65676F74736968:
		switch(wp[1]){
		case 0x796C6C6163697465:return 1;
		default:return 0;
		}
	case 0x6E65676F74796870:
		switch(wp[1]){
		case 0x796C6C6163697465:return 1;
		default:return 0;
		}
	case 0x6E656772616E6F6E:
		switch(wp[1]){
		case 0x73756F7265666974:return 1;
		default:return 0;
		}
	case 0x6E6567746E656F72:
		switch(wp[1]){
		case 0x636968706172676F:return 1;
		case 0x6C616369676F6C6F:return 1;
		case 0x797061726568746F:return 1;
		default:return 0;
		}
	case 0x6E65686572706572:
		switch(wp[1]){
		case 0x7974696C69626973:return 1;
		default:return 0;
		}
	case 0x6E65686572707061:
		switch(wp[1]){
		case 0x7373656E65766973:return 1;
		case 0x7974696C69626973:return 1;
		default:return 0;
		}
	case 0x6E65687475616572:
		switch(wp[1]){
		case 0x6E6F697461636974:return 1;
		default:return 0;
		}
	case 0x6E656963736E6F63:
		switch(wp[1]){
		case 0x796C7373656C6563:return 1;
		default:return 0;
		}
	case 0x6E656C6974736570:
		switch(wp[1]){
		case 0x7373656E6C616974:return 1;
		default:return 0;
		}
	case 0x6E656C7073657270:
		switch(wp[1]){
		case 0x63696C6167656D6F:return 1;
		default:return 0;
		}
	case 0x6E656C796E656870:
		switch(wp[1]){
		case 0x656E696D61696465:return 1;
		default:return 0;
		}
	case 0x6E656C7974656361:
		switch(wp[1]){
		case 0x6E69657275696465:return 1;
		default:return 0;
		}
	case 0x6E656C79756C6F74:
		switch(wp[1]){
		case 0x656E696D61696465:return 1;
		default:return 0;
		}
	case 0x6E656D616C616874:
		switch(wp[1]){
		case 0x63696C6168706563:return 1;
		case 0x6E6F6C6168706563:return 1;
		default:return 0;
		}
	case 0x6E656D656C706D69:
		switch(wp[1]){
		case 0x73756F7265666974:return 1;
		default:return 0;
		}
	case 0x6E656D6D6F636572:
		switch(wp[1]){
		case 0x7974696C69626164:return 1;
		default:return 0;
		}
	case 0x6E656D6D6F636E69:
		switch(wp[1]){
		case 0x796C657461727573:return 1;
		default:return 0;
		}
	case 0x6E656D6F6C65796D:
		switch(wp[1]){
		case 0x656C65636F676E69:return 1;
		default:return 0;
		}
	case 0x6E656D6F6E656870:
		switch(wp[1]){
		case 0x6C616369676F6C6F:return 1;
		default:return 0;
		}
	case 0x6E656D6F72647968:
		switch(wp[1]){
		case 0x656C65636F676E69:return 1;
		default:return 0;
		}
	case 0x6E656E61746E6170:
		switch(wp[1]){
		case 0x61696C6168706563:return 1;
		case 0x63696C6168706563:return 1;
		default:return 0;
		}
	case 0x6E656F65616C6170:
		switch(wp[1]){
		case 0x6E6F6C6168706563:return 1;
		default:return 0;
		}
	case 0x6E656F696E726568:
		switch(wp[1]){
		case 0x796D6F746F726574:return 1;
		default:return 0;
		}
	case 0x6E656F726170616C:
		switch(wp[1]){
		case 0x796D6F746F726574:return 1;
		default:return 0;
		}
	case 0x6E656F7274736167:
		switch(wp[1]){
		case 0x6169676C61726574:return 1;
		case 0x79676F6C6F726574:return 1;
		case 0x796D6F746F726574:return 1;
		default:return 0;
		}
	case 0x6E65706F6C6F6373:
		switch(wp[1]){
		case 0x64696F6C6C657264:return 1;
		default:return 0;
		}
	case 0x6E65707265746E69:
		switch(wp[1]){
		case 0x6576697461727465:return 1;
		case 0x6E6F697461727465:return 1;
		default:return 0;
		}
	case 0x6E65707369646E69:
		switch(wp[1]){
		case 0x7974696C69626173:return 1;
		default:return 0;
		}
	case 0x6E65726172707573:
		switch(wp[1]){
		case 0x796D6F7463656C61:return 1;
		default:return 0;
		}
	case 0x6E65736572706572:
		switch(wp[1]){
		case 0x6C616E6F69746174:return 1;
		case 0x796C657669746174:return 1;
		case 0x7974696C69626174:return 1;
		case 0x7974697669746174:return 1;
		default:return 0;
		}
	case 0x6E65736572706E75:
		switch(wp[1]){
		case 0x7974696C69626174:return 1;
		default:return 0;
		}
	case 0x6E65736F69646172:
		switch(wp[1]){
		case 0x7974696C69626973:return 1;
		case 0x7974697669746973:return 1;
		default:return 0;
		}
	case 0x6E65736F746F6870:
		switch(wp[1]){
		case 0x7974697669746973:return 1;
		default:return 0;
		}
	case 0x6E65737261766F6E:
		switch(wp[1]){
		case 0x656E657A6E65626F:return 1;
		default:return 0;
		}
	case 0x6E65737265707573:
		switch(wp[1]){
		case 0x6C61746E656D6974:return 1;
		default:return 0;
		}
	case 0x6E65737265707968:
		switch(wp[1]){
		case 0x6C61746E656D6974:return 1;
		case 0x7974696C69626973:return 1;
		case 0x7974697669746973:return 1;
		default:return 0;
		}
	case 0x6E65737265746E69:
		switch(wp[1]){
		case 0x6C61746E656D6974:return 1;
		default:return 0;
		}
	case 0x6E65746572706E75:
		switch(wp[1]){
		case 0x7373656E676E6964:return 1;
		default:return 0;
		}
	case 0x6E6574696E6E6970:
		switch(wp[1]){
		case 0x6574616C75636174:return 1;
		default:return 0;
		}
	case 0x6E657469746C756D:
		switch(wp[1]){
		case 0x6574616C75636174:return 1;
		default:return 0;
		}
	case 0x6E65746E6F636E75:
		switch(wp[1]){
		case 0x7373656E676E6974:return 1;
		default:return 0;
		}
	case 0x6E65766172707573:
		switch(wp[1]){
		case 0x72616C7563697274:return 1;
		default:return 0;
		}
	case 0x6E65766172746E69:
		switch(wp[1]){
		case 0x72616C7563697274:return 1;
		default:return 0;
		}
	case 0x6E65766172747865:
		switch(wp[1]){
		case 0x72616C7563697274:return 1;
		default:return 0;
		}
	case 0x6E65766275736E75:
		switch(wp[1]){
		case 0x64657A696E6F6974:return 1;
		default:return 0;
		}
	case 0x6E6576646173696D:
		switch(wp[1]){
		case 0x796C73756F727574:return 1;
		default:return 0;
		}
	case 0x6E65766572706D69:
		switch(wp[1]){
		case 0x7974696C69626174:return 1;
		default:return 0;
		}
	case 0x6E65766E6F636E69:
		switch(wp[1]){
		case 0x7373656E746E6569:return 1;
		default:return 0;
		}
	case 0x6E65766E6F636E75:
		switch(wp[1]){
		case 0x796C6C616E6F6974:return 1;
		default:return 0;
		}
	case 0x6E65766F69727461:
		switch(wp[1]){
		case 0x72616C7563697274:return 1;
		default:return 0;
		}
	case 0x6E65767265646E75:
		switch(wp[1]){
		case 0x6E6F6974616C6974:return 1;
		default:return 0;
		}
	case 0x6E65767265707968:
		switch(wp[1]){
		case 0x6E6F6974616C6974:return 1;
		default:return 0;
		}
	case 0x6E65767265746E69:
		switch(wp[1]){
		case 0x72616C7563697274:return 1;
		default:return 0;
		}
	case 0x6E67616D65646E75:
		switch(wp[1]){
		case 0x656C62617A697465:return 1;
		default:return 0;
		}
	case 0x6E676973696E6D6F:
		switch(wp[1]){
		case 0x65636E6163696669:return 1;
		default:return 0;
		}
	case 0x6E676F6973796870:
		switch(wp[1]){
		case 0x6C6163696E6F6D6F:return 1;
		case 0x796C6C6163696D6F:return 1;
		default:return 0;
		}
	case 0x6E67757078656E69:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x6E686365746E6F6E:
		switch(wp[1]){
		case 0x6C616369676F6C6F:return 1;
		default:return 0;
		}
	case 0x6E68636E616C7073:
		switch(wp[1]){
		case 0x61696C6167656D6F:return 1;
		case 0x6169736568747365:return 1;
		case 0x63697275656C706F:return 1;
		case 0x636974616D6F736F:return 1;
		case 0x6369746568747365:return 1;
		case 0x6C616369676F6C6F:return 1;
		case 0x6C6163696D6F746F:return 1;
		case 0x6C617275656C706F:return 1;
		case 0x726568706172676F:return 1;
		default:return 0;
		}
	case 0x6E687465656C6170:
		switch(wp[1]){
		case 0x6C616369676F6C6F:return 1;
		case 0x726568706172676F:return 1;
		default:return 0;
		}
	case 0x6E69616C706D6F63:
		switch(wp[1]){
		case 0x7373656E65766974:return 1;
		default:return 0;
		}
	case 0x6E696172746E6F63:
		switch(wp[1]){
		case 0x6576697461636964:return 1;
		case 0x6E6F697461636964:return 1;
		default:return 0;
		}
	case 0x6E696174626F6E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x6E6961746E69616D:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x6E69617474616E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x6E69626D6F636E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x6E6964726F627573:
		switch(wp[1]){
		case 0x6D73696E6F697461:return 1;
		case 0x7473696E6F697461:return 1;
		default:return 0;
		}
	case 0x6E6967616D696E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x6E696769726F6E75:
		switch(wp[1]){
		case 0x7373656E64657461:return 1;
		default:return 0;
		}
	case 0x6E696B6F75736976:
		switch(wp[1]){
		case 0x6369746568747365:return 1;
		default:return 0;
		}
	case 0x6E696C6365646E69:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x6E696C6365646E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x6E696C69626F7275:
		switch(wp[1]){
		case 0x616972756E65676F:return 1;
		default:return 0;
		}
	case 0x6E696D6161726170:
		switch(wp[1]){
		case 0x63696F7A6E65626F:return 1;
		default:return 0;
		}
	case 0x6E696D6461627573:
		switch(wp[1]){
		case 0x726F746172747369:return 1;
		default:return 0;
		}
	case 0x6E696D6461657270:
		switch(wp[1]){
		case 0x726F746172747369:return 1;
		default:return 0;
		}
	case 0x6E696D64616C616D:
		switch(wp[1]){
		case 0x726F746172747369:return 1;
		default:return 0;
		}
	case 0x6E696D7265746564:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x6E696D7265746E69:
		switch(wp[1]){
		case 0x6C61697265747369:return 1;
		case 0x6D75697265747369:return 1;
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x6E696D7265746E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x6E696D7563726963:
		switch(wp[1]){
		case 0x6C616E6974736574:return 1;
		default:return 0;
		}
	case 0x6E696F6369736576:
		switch(wp[1]){
		case 0x6C616E6974736574:return 1;
		default:return 0;
		}
	case 0x6E696F68706C7573:
		switch(wp[1]){
		case 0x657461746F676964:return 1;
		default:return 0;
		}
	case 0x6E696F7265746568:
		switch(wp[1]){
		case 0x656C62616C75636F:return 1;
		default:return 0;
		}
	case 0x6E696F7265746E65:
		switch(wp[1]){
		case 0x6C616E6974736574:return 1;
		default:return 0;
		}
	case 0x6E696F7274736167:
		switch(wp[1]){
		case 0x6C616E6974736574:return 1;
		default:return 0;
		}
	case 0x6E6972636F646E65:
		switch(wp[1]){
		case 0x6C616369676F6C6F:return 1;
		case 0x797061726568746F:return 1;
		default:return 0;
		}
	case 0x6E697369646E6F6E:
		switch(wp[1]){
		case 0x6465747365726574:return 1;
		default:return 0;
		}
	case 0x6E69736E69657270:
		switch(wp[1]){
		case 0x796C676E69746175:return 1;
		default:return 0;
		}
	case 0x6E69747365746E69:
		switch(wp[1]){
		case 0x6C6163697365766F:return 1;
		default:return 0;
		}
	case 0x6E69747369646E75:
		switch(wp[1]){
		case 0x676E696873697567:return 1;
		default:return 0;
		}
	case 0x6E6974756C676761:
		switch(wp[1]){
		case 0x7473696E6F697461:return 1;
		default:return 0;
		}
	case 0x6E69766E696E6F6E:
		switch(wp[1]){
		case 0x7974696C69626963:return 1;
		default:return 0;
		}
	case 0x6E69766E6F636E69:
		switch(wp[1]){
		case 0x7974696C69626963:return 1;
		default:return 0;
		}
	case 0x6E69766E6F636E75:
		switch(wp[1]){
		case 0x7373656E676E6963:return 1;
		case 0x7974696C69626963:return 1;
		default:return 0;
		}
	case 0x6E69767265646E75:
		switch(wp[1]){
		case 0x7265737365726465:return 1;
		default:return 0;
		}
	case 0x6E697A6F746F6870:
		switch(wp[1]){
		case 0x7968706172676F63:return 1;
		default:return 0;
		}
	case 0x6E6F6361656E6E65:
		switch(wp[1]){
		case 0x6C61726465686174:return 1;
		case 0x6E6F726465686174:return 1;
		default:return 0;
		}
	case 0x6E6F636172746C75:
		switch(wp[1]){
		case 0x746E6174696D6F63:return 1;
		default:return 0;
		}
	case 0x6E6F636172746E69:
		switch(wp[1]){
		case 0x6C61746E656E6974:return 1;
		default:return 0;
		}
	case 0x6E6F636572657270:
		switch(wp[1]){
		case 0x746E656D656C6963:return 1;
		default:return 0;
		}
	case 0x6E6F636F64697269:
		switch(wp[1]){
		case 0x726F746369727473:return 1;
		default:return 0;
		}
	case 0x6E6F636F7263696D:
		switch(wp[1]){
		case 0x746E657574697473:return 1;
		default:return 0;
		}
	case 0x6E6F636F72746E69:
		switch(wp[1]){
		case 0x656C626974726576:return 1;
		default:return 0;
		}
	case 0x6E6F637265646E75:
		switch(wp[1]){
		case 0x6E6F6974706D7573:return 1;
		default:return 0;
		}
	case 0x6E6F637265707573:
		switch(wp[1]){
		case 0x6465746172636573:return 1;
		case 0x656C62616D726F66:return 1;
		case 0x79636E6575716573:return 1;
		default:return 0;
		}
	case 0x6E6F637265746E69:
		switch(wp[1]){
		case 0x656C626974726576:return 1;
		case 0x6C61746E656E6974:return 1;
		case 0x796C626974726576:return 1;
		default:return 0;
		}
	case 0x6E6F6373696D6E75:
		switch(wp[1]){
		case 0x656C626176696563:return 1;
		default:return 0;
		}
	case 0x6E6F63736E617274:
		switch(wp[1]){
		case 0x65636E6174637564:return 1;
		case 0x6C61746E656E6974:return 1;
		default:return 0;
		}
	case 0x6E6F646F69726570:
		switch(wp[1]){
		case 0x616973616C636F74:return 1;
		case 0x747369676F6C6F74:return 1;
		default:return 0;
		}
	case 0x6E6F647261706E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x6E6F676F69646172:
		switch(wp[1]){
		case 0x63697274656D6F69:return 1;
		default:return 0;
		}
	case 0x6E6F68636F707968:
		switch(wp[1]){
		case 0x6D73696361697264:return 1;
		default:return 0;
		}
	case 0x6E6F6870656C6574:
		switch(wp[1]){
		case 0x636968706172676F:return 1;
		default:return 0;
		}
	case 0x6E6F687075656E75:
		switch(wp[1]){
		case 0x7373656E73756F69:return 1;
		default:return 0;
		}
	case 0x6E6F687468706964:
		switch(wp[1]){
		case 0x6E6F6974617A6967:return 1;
		default:return 0;
		}
	case 0x6E6F6963736E6F63:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x6E6F697473657571:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x6E6F6D6564627573:
		switch(wp[1]){
		case 0x6E6F697461727473:return 1;
		default:return 0;
		}
	case 0x6E6F6D6564657270:
		switch(wp[1]){
		case 0x6576697461727473:return 1;
		case 0x6E6F697461727473:return 1;
		default:return 0;
		}
	case 0x6E6F6D65646E6F6E:
		switch(wp[1]){
		case 0x6E6F697461727473:return 1;
		default:return 0;
		}
	case 0x6E6F6D6968636E61:
		switch(wp[1]){
		case 0x6C6172656E696D6F:return 1;
		default:return 0;
		}
	case 0x6E6F6D6972657571:
		switch(wp[1]){
		case 0x7373656E73756F69:return 1;
		default:return 0;
		}
	case 0x6E6F6D6973726170:
		switch(wp[1]){
		case 0x7373656E73756F69:return 1;
		default:return 0;
		}
	case 0x6E6F6D7261686E69:
		switch(wp[1]){
		case 0x7373656E73756F69:return 1;
		default:return 0;
		}
	case 0x6E6F6D7261686E75:
		switch(wp[1]){
		case 0x7373656E73756F69:return 1;
		default:return 0;
		}
	case 0x6E6F6E6172746C75:
		switch(wp[1]){
		case 0x6C616369736E6573:return 1;
		default:return 0;
		}
	case 0x6E6F706572706E75:
		switch(wp[1]){
		case 0x676E697461726564:return 1;
		default:return 0;
		}
	case 0x6E6F706F736F7270:
		switch(wp[1]){
		case 0x6169676C61727565:return 1;
		default:return 0;
		}
	case 0x6E6F707365726E75:
		switch(wp[1]){
		case 0x7373656E65766973:return 1;
		default:return 0;
		}
	case 0x6E6F707365727269:
		switch(wp[1]){
		case 0x7373656E65766973:return 1;
		case 0x7974696C69626973:return 1;
		default:return 0;
		}
	case 0x6E6F7268636E6F6E:
		switch(wp[1]){
		case 0x6C616369676F6C6F:return 1;
		default:return 0;
		}
	case 0x6E6F7268636E7973:
		switch(wp[1]){
		case 0x6C616369676F6C6F:return 1;
		default:return 0;
		}
	case 0x6E6F727463656C65:
		switch(wp[1]){
		case 0x636968706172676F:return 1;
		default:return 0;
		}
	case 0x6E6F736165726E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x6E6F736165736E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x6E6F737265706E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x6E6F74616D726564:
		switch(wp[1]){
		case 0x79676F6C6F727565:return 1;
		default:return 0;
		}
	case 0x6E70796874736F70:
		switch(wp[1]){
		case 0x796C6C616369746F:return 1;
		default:return 0;
		}
	case 0x6E7261636E696572:
		switch(wp[1]){
		case 0x6D73696E6F697461:return 1;
		case 0x7473696E6F697461:return 1;
		default:return 0;
		}
	case 0x6E7265746E756F63:
		switch(wp[1]){
		case 0x6576697461727261:return 1;
		default:return 0;
		}
	case 0x6E7265766F676E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x6E726F65616C6170:
		switch(wp[1]){
		case 0x79676F6C6F687469:return 1;
		default:return 0;
		}
	case 0x6E75667265707968:
		switch(wp[1]){
		case 0x676E696E6F697463:return 1;
		default:return 0;
		}
	case 0x6E756D7563726963:
		switch(wp[1]){
		case 0x6E6F6974616C7564:return 1;
		default:return 0;
		}
	case 0x6E756F6363616E75:
		switch(wp[1]){
		case 0x7974696C69626174:return 1;
		default:return 0;
		}
	case 0x6E75707265746E69:
		switch(wp[1]){
		case 0x6E6F697461757463:return 1;
		default:return 0;
		}
	case 0x6E79646F67616870:
		switch(wp[1]){
		case 0x726574656D6F6D61:return 1;
		default:return 0;
		}
	case 0x6E79646F6E6F6870:
		switch(wp[1]){
		case 0x68706172676F6D61:return 1;
		default:return 0;
		}
	case 0x6E79646F72647968:
		switch(wp[1]){
		case 0x726574656D6F6D61:return 1;
		default:return 0;
		}
	case 0x6E79646F746F6870:
		switch(wp[1]){
		case 0x796C6C6163696D61:return 1;
		default:return 0;
		}
	case 0x6E7972616C6F746F:
		switch(wp[1]){
		case 0x747369676F6C6F67:return 1;
		default:return 0;
		}
	case 0x6E79736F746F6870:
		switch(wp[1]){
		case 0x726574656D6F6874:return 1;
		default:return 0;
		}
	case 0x6F62617265707573:
		switch(wp[1]){
		case 0x6E6F6974616E696D:return 1;
		default:return 0;
		}
	case 0x6F626C6F6F686373:
		switch(wp[1]){
		case 0x7373656E68736979:return 1;
		default:return 0;
		}
	case 0x6F63616D72616870:
		switch(wp[1]){
		case 0x6574697265646973:return 1;
		case 0x6C616361696E616D:return 1;
		case 0x7363696D616E7964:return 1;
		case 0x73636974736F6E67:return 1;
		default:return 0;
		}
	case 0x6F63617268746E61:
		switch(wp[1]){
		case 0x7369736F7263656E:return 1;
		default:return 0;
		}
	case 0x6F63696C69736564:
		switch(wp[1]){
		case 0x6E6F6974617A696E:return 1;
		default:return 0;
		}
	case 0x6F63697274737968:
		switch(wp[1]){
		case 0x73756F6870726F6D:return 1;
		default:return 0;
		}
	case 0x6F636974616D6F73:
		switch(wp[1]){
		case 0x6C61726563736976:return 1;
		default:return 0;
		}
	case 0x6F636F6475657370:
		switch(wp[1]){
		case 0x656E69726479686E:return 1;
		case 0x6572757373696D6D:return 1;
		case 0x6574616967656C6C:return 1;
		case 0x6C61727573696D6D:return 1;
		case 0x72616C6C656D756C:return 1;
		default:return 0;
		}
	case 0x6F636F6572657473:
		switch(wp[1]){
		case 0x726F74617261706D:return 1;
		default:return 0;
		}
	case 0x6F636F6D6F726863:
		switch(wp[1]){
		case 0x68706172676F6C6C:return 1;
		default:return 0;
		}
	case 0x6F636F726870656E:
		switch(wp[1]){
		case 0x7369736F74706F6C:return 1;
		default:return 0;
		}
	case 0x6F636F7274736167:
		switch(wp[1]){
		case 0x7369736F74706F6C:return 1;
		default:return 0;
		}
	case 0x6F636F7275656C70:
		switch(wp[1]){
		case 0x73756F6563616363:return 1;
		default:return 0;
		}
	case 0x6F636F746375657A:
		switch(wp[1]){
		case 0x636974616D6F6C65:return 1;
		default:return 0;
		}
	case 0x6F636F7470797263:
		switch(wp[1]){
		case 0x6C61696372656D6D:return 1;
		default:return 0;
		}
	case 0x6F64696F6C6C6F63:
		switch(wp[1]){
		case 0x6C6163696D656863:return 1;
		default:return 0;
		}
	case 0x6F64696F726F6863:
		switch(wp[1]){
		case 0x736974696C637963:return 1;
		default:return 0;
		}
	case 0x6F65677265707968:
		switch(wp[1]){
		case 0x6C6163697274656D:return 1;
		default:return 0;
		}
	case 0x6F656E61636C6163:
		switch(wp[1]){
		case 0x64696F6870616373:return 1;
		default:return 0;
		}
	case 0x6F657261636C6163:
		switch(wp[1]){
		case 0x73756F656E726F63:return 1;
		default:return 0;
		}
	case 0x6F666F6475657370:
		switch(wp[1]){
		case 0x73756F656361696C:return 1;
		default:return 0;
		}
	case 0x6F676168706F7365:
		switch(wp[1]){
		case 0x7369736F6E657473:return 1;
		default:return 0;
		}
	case 0x6F676E69706C6173:
		switch(wp[1]){
		case 0x656E6974616C6170:return 1;
		default:return 0;
		}
	case 0x6F676E7972616870:
		switch(wp[1]){
		case 0x616D6F72656C6373:return 1;
		case 0x656E6974616C6170:return 1;
		case 0x6C61747375656E70:return 1;
		case 0x736974696E696872:return 1;
		case 0x73756F6874616E67:return 1;
		default:return 0;
		}
	case 0x6F676F6572657473:
		switch(wp[1]){
		case 0x726574656D6F696E:return 1;
		default:return 0;
		}
	case 0x6F676F6874657473:
		switch(wp[1]){
		case 0x726574656D6F696E:return 1;
		default:return 0;
		}
	case 0x6F676F6D72657073:
		switch(wp[1]){
		case 0x73756F726566696E:return 1;
		default:return 0;
		}
	case 0x6F68636964627573:
		switch(wp[1]){
		case 0x796C73756F6D6F74:return 1;
		default:return 0;
		}
	case 0x6F68636E616C656D:
		switch(wp[1]){
		case 0x6361696E616D6F6C:return 1;
		default:return 0;
		}
	case 0x6F68636F64697269:
		switch(wp[1]){
		case 0x7369746964696F72:return 1;
		default:return 0;
		}
	case 0x6F68636F72647968:
		switch(wp[1]){
		case 0x736974737963656C:return 1;
		default:return 0;
		}
	case 0x6F686D7563726963:
		switch(wp[1]){
		case 0x6C61746E6F7A6972:return 1;
		default:return 0;
		}
	case 0x6F686F636C616564:
		switch(wp[1]){
		case 0x6E6F6974617A696C:return 1;
		default:return 0;
		}
	case 0x6F687069746C756D:
		switch(wp[1]){
		case 0x7968706172676F74:return 1;
		default:return 0;
		}
	case 0x6F68706F6874696C:
		switch(wp[1]){
		case 0x7968706172676F74:return 1;
		default:return 0;
		}
	case 0x6F68706F69646172:
		switch(wp[1]){
		case 0x7968706172676F74:return 1;
		default:return 0;
		}
	case 0x6F68706F696C6568:
		switch(wp[1]){
		case 0x7968706172676F74:return 1;
		default:return 0;
		}
	case 0x6F68706F6E617275:
		switch(wp[1]){
		case 0x7968706172676F74:return 1;
		default:return 0;
		}
	case 0x6F68706F6E6F6870:
		switch(wp[1]){
		case 0x6369706F63736F74:return 1;
		case 0x7968706172676F74:return 1;
		default:return 0;
		}
	case 0x6F68706F7263616D:
		switch(wp[1]){
		case 0x7968706172676F74:return 1;
		default:return 0;
		}
	case 0x6F68706F7263696D:
		switch(wp[1]){
		case 0x7968706172676F74:return 1;
		default:return 0;
		}
	case 0x6F68706F72647968:
		switch(wp[1]){
		case 0x6169626F68706F62:return 1;
		default:return 0;
		}
	case 0x6F68706F7274656D:
		switch(wp[1]){
		case 0x7968706172676F74:return 1;
		default:return 0;
		}
	case 0x6F68706F72747361:
		switch(wp[1]){
		case 0x7968706172676F74:return 1;
		default:return 0;
		}
	case 0x6F68706F74737963:
		switch(wp[1]){
		case 0x7968706172676F74:return 1;
		default:return 0;
		}
	case 0x6F6872726F6D6568:
		switch(wp[1]){
		case 0x796D6F7463656469:return 1;
		default:return 0;
		}
	case 0x6F687475616E6F6E:
		switch(wp[1]){
		case 0x6576697461746972:return 1;
		default:return 0;
		}
	case 0x6F6874756173696D:
		switch(wp[1]){
		case 0x6E6F6974617A6972:return 1;
		default:return 0;
		}
	case 0x6F6874756F727473:
		switch(wp[1]){
		case 0x6E61696C656D6163:return 1;
		default:return 0;
		}
	case 0x6F69646F6C6C6F63:
		switch(wp[1]){
		case 0x656469726F6C6863:return 1;
		case 0x6E6F6974617A696E:return 1;
		default:return 0;
		}
	case 0x6F69676E616F7270:
		switch(wp[1]){
		case 0x73756F6D72657073:return 1;
		default:return 0;
		}
	case 0x6F696863696F7473:
		switch(wp[1]){
		case 0x6C6163697274656D:return 1;
		default:return 0;
		}
	case 0x6F6968636E6F7262:
		switch(wp[1]){
		case 0x7369736F6E657473:return 1;
		default:return 0;
		}
	case 0x6F6968746F727561:
		switch(wp[1]){
		case 0x65746168706C7573:return 1;
		default:return 0;
		}
	case 0x6F696C7974636164:
		switch(wp[1]){
		case 0x6369746870796C67:return 1;
		case 0x7473696870796C67:return 1;
		default:return 0;
		}
	case 0x6F696D6564697065:
		switch(wp[1]){
		case 0x7473696870617267:return 1;
		default:return 0;
		}
	case 0x6F696E61706D6F63:
		switch(wp[1]){
		case 0x7974696C6962616E:return 1;
		default:return 0;
		}
	case 0x6F69726574636162:
		switch(wp[1]){
		case 0x6C616369706F6373:return 1;
		case 0x6E69727570727570:return 1;
		default:return 0;
		}
	case 0x6F69736568747365:
		switch(wp[1]){
		case 0x7369736F7275656E:return 1;
		default:return 0;
		}
	case 0x6F69737361706E75:
		switch(wp[1]){
		case 0x7373656E6574616E:return 1;
		default:return 0;
		}
	case 0x6F6974616E6F7270:
		switch(wp[1]){
		case 0x63697473696C616E:return 1;
		default:return 0;
		}
	case 0x6F697461736E6573:
		switch(wp[1]){
		case 0x63697473696C616E:return 1;
		default:return 0;
		}
	case 0x6F69746365666661:
		switch(wp[1]){
		case 0x7373656E6574616E:return 1;
		default:return 0;
		}
	case 0x6F697463656A626F:
		switch(wp[1]){
		case 0x7974696C6962616E:return 1;
		default:return 0;
		}
	case 0x6F69746964617274:
		switch(wp[1]){
		case 0x63697473696C616E:return 1;
		default:return 0;
		}
	case 0x6F69746E656D6E75:
		switch(wp[1]){
		case 0x7974696C6962616E:return 1;
		default:return 0;
		}
	case 0x6F6C616467796D61:
		switch(wp[1]){
		case 0x7369737069726874:return 1;
		default:return 0;
		}
	case 0x6F6C656863617274:
		switch(wp[1]){
		case 0x72616C7570616373:return 1;
		case 0x7369736F6C6C7963:return 1;
		default:return 0;
		}
	case 0x6F6C65796D6E6170:
		switch(wp[1]){
		case 0x7369736968746870:return 1;
		default:return 0;
		}
	case 0x6F6C676761736964:
		switch(wp[1]){
		case 0x6E6F69746172656D:return 1;
		default:return 0;
		}
	case 0x6F6C676F6968706F:
		switch(wp[1]){
		case 0x73756F6563617373:return 1;
		default:return 0;
		}
	case 0x6F6C686361786568:
		switch(wp[1]){
		case 0x656E616874656F72:return 1;
		default:return 0;
		}
	case 0x6F6C686369727561:
		switch(wp[1]){
		case 0x6369726479686F72:return 1;
		default:return 0;
		}
	case 0x6F6C68636F6E6F6D:
		switch(wp[1]){
		case 0x6369746563616F72:return 1;
		case 0x656E657A6E656272:return 1;
		case 0x6E6F6974616E6972:return 1;
		default:return 0;
		}
	case 0x6F6C6968706E6F6E:
		switch(wp[1]){
		case 0x6C61636968706F73:return 1;
		default:return 0;
		}
	case 0x6F6C6968706F7270:
		switch(wp[1]){
		case 0x6C61636968706F73:return 1;
		default:return 0;
		}
	case 0x6F6C6D7563726963:
		switch(wp[1]){
		case 0x6C616E6F69747563:return 1;
		default:return 0;
		}
	case 0x6F6C6F686F636C61:
		switch(wp[1]){
		case 0x6C6163697274656D:return 1;
		default:return 0;
		}
	case 0x6F6C6F7473697065:
		switch(wp[1]){
		case 0x7473696870617267:return 1;
		default:return 0;
		}
	case 0x6F6C756369646570:
		switch(wp[1]){
		case 0x6C61746569726170:return 1;
		default:return 0;
		}
	case 0x6F6C756369727475:
		switch(wp[1]){
		case 0x72616C7563636173:return 1;
		default:return 0;
		}
	case 0x6F6C756369727561:
		switch(wp[1]){
		case 0x6C61636974726576:return 1;
		case 0x6C61726F706D6574:return 1;
		case 0x6C61746569726170:return 1;
		default:return 0;
		}
	case 0x6F6C756369736576:
		switch(wp[1]){
		case 0x63696E61706D7974:return 1;
		case 0x72616C7574737570:return 1;
		default:return 0;
		}
	case 0x6F6C75666F726373:
		switch(wp[1]){
		case 0x6369746968636172:return 1;
		default:return 0;
		}
	case 0x6F6C79646E6F7073:
		switch(wp[1]){
		case 0x73697365646E7973:return 1;
		default:return 0;
		}
	case 0x6F6C796870617473:
		switch(wp[1]){
		case 0x6369687061687272:return 1;
		case 0x736973796C616964:return 1;
		default:return 0;
		}
	case 0x6F6D656469746E61:
		switch(wp[1]){
		case 0x6C61636974617263:return 1;
		default:return 0;
		}
	case 0x6F6D656869746E61:
		switch(wp[1]){
		case 0x6C61646965687272:return 1;
		default:return 0;
		}
	case 0x6F6D657274736F70:
		switch(wp[1]){
		case 0x65727574696E6567:return 1;
		default:return 0;
		}
	case 0x6F6D69747265766F:
		switch(wp[1]){
		case 0x7373656E73756F72:return 1;
		default:return 0;
		}
	case 0x6F6D6F6475657370:
		switch(wp[1]){
		case 0x63696C6379636F6E:return 1;
		case 0x63696E696C636F6E:return 1;
		default:return 0;
		}
	case 0x6F6D726564697065:
		switch(wp[1]){
		case 0x7369736F74796870:return 1;
		default:return 0;
		}
	case 0x6F6D736F636E6F6E:
		switch(wp[1]){
		case 0x6D736974696C6F70:return 1;
		default:return 0;
		}
	case 0x6F6E6172626D656D:
		switch(wp[1]){
		case 0x73756F656E726F63:return 1;
		default:return 0;
		}
	case 0x6F6E656870697065:
		switch(wp[1]){
		case 0x6D73696C616E656D:return 1;
		case 0x7473696C616E656D:return 1;
		default:return 0;
		}
	case 0x6F6E6568706E6170:
		switch(wp[1]){
		case 0x6D73696C616E656D:return 1;
		default:return 0;
		}
	case 0x6F6E656874726170:
		switch(wp[1]){
		case 0x65766974696E6567:return 1;
		case 0x6C61636970726163:return 1;
		case 0x6D756964696E6F67:return 1;
		case 0x796C6C6570726163:return 1;
		default:return 0;
		}
	case 0x6F6E676F72706E75:
		switch(wp[1]){
		case 0x6465746163697473:return 1;
		default:return 0;
		}
	case 0x6F6E696D6F646261:
		switch(wp[1]){
		case 0x63696361726F6874:return 1;
		case 0x726F697265746E61:return 1;
		case 0x73697365746E6563:return 1;
		default:return 0;
		}
	case 0x6F6E6974616C6567:
		switch(wp[1]){
		case 0x656469726F6C6863:return 1;
		default:return 0;
		}
	case 0x6F6E6975676E6173:
		switch(wp[1]){
		case 0x636972656C6F6863:return 1;
		default:return 0;
		}
	case 0x6F6E6D79676F7270:
		switch(wp[1]){
		case 0x73756F6D72657073:return 1;
		default:return 0;
		}
	case 0x6F6E6E6165726F66:
		switch(wp[1]){
		case 0x746E656D65636E75:return 1;
		default:return 0;
		}
	case 0x6F6E6F68746F7270:
		switch(wp[1]){
		case 0x7069687379726174:return 1;
		default:return 0;
		}
	case 0x6F6E6F6D6F6E7967:
		switch(wp[1]){
		case 0x796C73756F696365:return 1;
		default:return 0;
		}
	case 0x6F6E6F6D75656E70:
		switch(wp[1]){
		case 0x73697365746E6563:return 1;
		case 0x7369736968746870:return 1;
		case 0x7369736F696E6F63:return 1;
		case 0x7369736F696E6F6B:return 1;
		default:return 0;
		}
	case 0x6F6E6F7270657270:
		switch(wp[1]){
		case 0x746E656D65636E75:return 1;
		default:return 0;
		}
	case 0x6F6E6F727073696D:
		switch(wp[1]){
		case 0x746E656D65636E75:return 1;
		default:return 0;
		}
	case 0x6F6F726F706D6574:
		switch(wp[1]){
		case 0x6C61746970696363:return 1;
		default:return 0;
		}
	case 0x6F6F727463656C65:
		switch(wp[1]){
		case 0x7363697274616974:return 1;
		case 0x796C6C6163697470:return 1;
		default:return 0;
		}
	case 0x6F6F7A6F7263616D:
		switch(wp[1]){
		case 0x6D756964696E6F67:return 1;
		default:return 0;
		}
	case 0x6F70616F6573736F:
		switch(wp[1]){
		case 0x6369746F7275656E:return 1;
		default:return 0;
		}
	case 0x6F706572706E6F6E:
		switch(wp[1]){
		case 0x6C616E6F69746973:return 1;
		default:return 0;
		}
	case 0x6F706D65746E6F63:
		switch(wp[1]){
		case 0x7373656E69726172:return 1;
		default:return 0;
		}
	case 0x6F706F6475657370:
		switch(wp[1]){
		case 0x65726F70736F6964:return 1;
		default:return 0;
		}
	case 0x6F706F65616C6170:
		switch(wp[1]){
		case 0x79676F6C6F6D6174:return 1;
		default:return 0;
		}
	case 0x6F706F6C6167656D:
		switch(wp[1]){
		case 0x6D73696E6174696C:return 1;
		default:return 0;
		}
	case 0x6F706F7268746E61:
		switch(wp[1]){
		case 0x6369747369756870:return 1;
		case 0x6574696870726F6D:return 1;
		case 0x657A696870726F6D:return 1;
		case 0x6C61636967616870:return 1;
		case 0x6C61636968706F73:return 1;
		case 0x6C6163697274656D:return 1;
		case 0x6D73696863797370:return 1;
		case 0x6D73696870726F6D:return 1;
		case 0x6D736972746E6563:return 1;
		case 0x73756F6870726F6D:return 1;
		case 0x7473696870726F6D:return 1;
		default:return 0;
		}
	case 0x6F706F7270736964:
		switch(wp[1]){
		case 0x6574616E6F697472:return 1;
		default:return 0;
		}
	case 0x6F707075736E6F6E:
		switch(wp[1]){
		case 0x6C616E6F69746973:return 1;
		default:return 0;
		}
	case 0x6F70736172746574:
		switch(wp[1]){
		case 0x65746169676E6172:return 1;
		case 0x73756F7265666972:return 1;
		default:return 0;
		}
	case 0x6F70736572726F63:
		switch(wp[1]){
		case 0x6C6169746E65646E:return 1;
		default:return 0;
		}
	case 0x6F70736964657270:
		switch(wp[1]){
		case 0x6C616E6F69746973:return 1;
		default:return 0;
		}
	case 0x6F70736968706D61:
		switch(wp[1]){
		case 0x65746169676E6172:return 1;
		default:return 0;
		}
	case 0x6F70736F63726173:
		switch(wp[1]){
		case 0x7369736F69646972:return 1;
		default:return 0;
		}
	case 0x6F70736F64657275:
		switch(wp[1]){
		case 0x73756F7265666972:return 1;
		default:return 0;
		}
	case 0x6F70736F696C6574:
		switch(wp[1]){
		case 0x73756F7265666972:return 1;
		default:return 0;
		}
	case 0x6F70736F6E696872:
		switch(wp[1]){
		case 0x7369736F69646972:return 1;
		default:return 0;
		}
	case 0x6F70736F7470656C:
		switch(wp[1]){
		case 0x65746169676E6172:return 1;
		default:return 0;
		}
	case 0x6F707968696D6568:
		switch(wp[1]){
		case 0x6169736568747365:return 1;
		default:return 0;
		}
	case 0x6F72616863636173:
		switch(wp[1]){
		case 0x63696E6F7463616C:return 1;
		case 0x73756C6C69636162:return 1;
		default:return 0;
		}
	case 0x6F72616870656C62:
		switch(wp[1]){
		case 0x61656872726F7970:return 1;
		case 0x61696863656E7973:return 1;
		case 0x616D6F626F6C6F63:return 1;
		case 0x616D6F7265687461:return 1;
		case 0x736973616C616863:return 1;
		case 0x7369736F6D696870:return 1;
		case 0x7369736F6E657473:return 1;
		case 0x736974696E656461:return 1;
		default:return 0;
		}
	case 0x6F72626172746574:
		switch(wp[1]){
		case 0x656E616874656F6D:return 1;
		default:return 0;
		}
	case 0x6F72626574726576:
		switch(wp[1]){
		case 0x6C61697265747261:return 1;
		case 0x6C6172646E6F6863:return 1;
		default:return 0;
		}
	case 0x6F72626F69646172:
		switch(wp[1]){
		case 0x7265747361636461:return 1;
		default:return 0;
		}
	case 0x6F72626F74656361:
		switch(wp[1]){
		case 0x6564696C696E616D:return 1;
		default:return 0;
		}
	case 0x6F72627265646C65:
		switch(wp[1]){
		case 0x646F6F6872656874:return 1;
		default:return 0;
		}
	case 0x6F7263616C616870:
		switch(wp[1]){
		case 0x656E696361726F63:return 1;
		default:return 0;
		}
	case 0x6F7263696D6E6F6E:
		switch(wp[1]){
		case 0x6C616369706F6373:return 1;
		default:return 0;
		}
	case 0x6F72646E616E7967:
		switch(wp[1]){
		case 0x6D73696870726F6D:return 1;
		case 0x73756F6870726F6D:return 1;
		default:return 0;
		}
	case 0x6F72646E696C7963:
		switch(wp[1]){
		case 0x63696C6168706563:return 1;
		case 0x65746972646E6564:return 1;
		case 0x6C6164696F6E6F63:return 1;
		case 0x72616C756C6C6563:return 1;
		default:return 0;
		}
	case 0x6F72647968726570:
		switch(wp[1]){
		case 0x6E6F6974616E6567:return 1;
		default:return 0;
		}
	case 0x6F72657265707573:
		switch(wp[1]){
		case 0x796C69726F746167:return 1;
		default:return 0;
		}
	case 0x6F7265746E756F63:
		switch(wp[1]){
		case 0x657669736E656666:return 1;
		case 0x6E6F697463656A62:return 1;
		default:return 0;
		}
	case 0x6F72686361726170:
		switch(wp[1]){
		case 0x616973706F74616D:return 1;
		case 0x6369726F68706F6D:return 1;
		case 0x73756F7261706F6D:return 1;
		default:return 0;
		}
	case 0x6F726863696D6568:
		switch(wp[1]){
		case 0x616973706F74616D:return 1;
		default:return 0;
		}
	case 0x6F726863796C6F70:
		switch(wp[1]){
		case 0x6C6968706F74616D:return 1;
		default:return 0;
		}
	case 0x6F726C7974656361:
		switch(wp[1]){
		case 0x656E696C696E6173:return 1;
		default:return 0;
		}
	case 0x6F726F7463656C61:
		switch(wp[1]){
		case 0x73756F6870726F6D:return 1;
		default:return 0;
		}
	case 0x6F72706D6F636E75:
		switch(wp[1]){
		case 0x796C676E6973696D:return 1;
		default:return 0;
		}
	case 0x6F72706F64696361:
		switch(wp[1]){
		case 0x636974796C6F6574:return 1;
		default:return 0;
		}
	case 0x6F72706F6C696870:
		switch(wp[1]){
		case 0x65766974696E6567:return 1;
		default:return 0;
		}
	case 0x6F72706F74737963:
		switch(wp[1]){
		case 0x796D6F74736F7463:return 1;
		default:return 0;
		}
	case 0x6F727070616C616D:
		switch(wp[1]){
		case 0x6E6F697461697270:return 1;
		default:return 0;
		}
	case 0x6F727070616E6F6E:
		switch(wp[1]){
		case 0x6E6F697461697270:return 1;
		default:return 0;
		}
	case 0x6F727070616F7270:
		switch(wp[1]){
		case 0x6E6F697461697270:return 1;
		default:return 0;
		}
	case 0x6F72707061736964:
		switch(wp[1]){
		case 0x6E6F697461697270:return 1;
		default:return 0;
		}
	case 0x6F7270706173696D:
		switch(wp[1]){
		case 0x6E6F697461697270:return 1;
		case 0x796C657461697270:return 1;
		default:return 0;
		}
	case 0x6F72707265646E75:
		switch(wp[1]){
		case 0x6E6F697469736F70:return 1;
		default:return 0;
		}
	case 0x6F72707265707573:
		switch(wp[1]){
		case 0x7974696C69626162:return 1;
		default:return 0;
		}
	case 0x6F72707265707968:
		switch(wp[1]){
		case 0x6C61636974656870:return 1;
		case 0x73756F6874616E67:return 1;
		default:return 0;
		}
	case 0x6F72726F636E6F6E:
		switch(wp[1]){
		case 0x6576697461726F62:return 1;
		case 0x6E6F697461726F62:return 1;
		default:return 0;
		}
	case 0x6F7274696E697274:
		switch(wp[1]){
		case 0x63696C6F62726163:return 1;
		case 0x6E6963726F736572:return 1;
		case 0x6E69726563796C67:return 1;
		default:return 0;
		}
	case 0x6F72746E696E6F6E:
		switch(wp[1]){
		case 0x6576697463657073:return 1;
		default:return 0;
		}
	case 0x6F72746E6F636E69:
		switch(wp[1]){
		case 0x656C626974726576:return 1;
		case 0x796C626974726576:return 1;
		default:return 0;
		}
	case 0x6F72746E6F636E75:
		switch(wp[1]){
		case 0x656C626174726576:return 1;
		case 0x656C626974726576:return 1;
		case 0x7373656E64656C6C:return 1;
		case 0x796C626174726576:return 1;
		case 0x796C626974726576:return 1;
		case 0x796C646574726576:return 1;
		default:return 0;
		}
	case 0x6F72747361746163:
		switch(wp[1]){
		case 0x796C6C6163696870:return 1;
		default:return 0;
		}
	case 0x6F727473696E6973:
		switch(wp[1]){
		case 0x6C61726265726563:return 1;
		case 0x6E6F697461727967:return 1;
		default:return 0;
		}
	case 0x6F72747369746E61:
		switch(wp[1]){
		case 0x796C6C6163696870:return 1;
		default:return 0;
		}
	case 0x6F72747375646E69:
		switch(wp[1]){
		case 0x6C6163696D656863:return 1;
		default:return 0;
		}
	case 0x6F72796870726F70:
		switch(wp[1]){
		case 0x65727574696E6567:return 1;
		case 0x6D736974696E6567:return 1;
		default:return 0;
		}
	case 0x6F736E6F63657270:
		switch(wp[1]){
		case 0x6E6F69746164696C:return 1;
		default:return 0;
		}
	case 0x6F736E6F636F7270:
		switch(wp[1]){
		case 0x6E6F69746164696C:return 1;
		default:return 0;
		}
	case 0x6F736E6F63736964:
		switch(wp[1]){
		case 0x7373656E6574616C:return 1;
		default:return 0;
		}
	case 0x6F736F6D61757173:
		switch(wp[1]){
		case 0x64657461746E6564:return 1;
		case 0x6C61726F706D6574:return 1;
		case 0x6C61746569726170:return 1;
		default:return 0;
		}
	case 0x6F737968706D7973:
		switch(wp[1]){
		case 0x61696C7974636164:return 1;
		default:return 0;
		}
	case 0x6F746168706C7573:
		switch(wp[1]){
		case 0x63696E6F62726163:return 1;
		default:return 0;
		}
	case 0x6F74616D656E6963:
		switch(wp[1]){
		case 0x7473696870617267:return 1;
		default:return 0;
		}
	case 0x6F74616D6F726863:
		switch(wp[1]){
		case 0x726574656D6F7470:return 1;
		case 0x797274656D6F7470:return 1;
		default:return 0;
		}
	case 0x6F74616D72657073:
		switch(wp[1]){
		case 0x7369746974737963:return 1;
		default:return 0;
		}
	case 0x6F74616D75656E70:
		switch(wp[1]){
		case 0x6C6163696D656863:return 1;
		case 0x7369686361687272:return 1;
		default:return 0;
		}
	case 0x6F74616E6964726F:
		switch(wp[1]){
		case 0x6574616C7563616D:return 1;
		default:return 0;
		}
	case 0x6F746174736F7270:
		switch(wp[1]){
		case 0x7369746974737963:return 1;
		default:return 0;
		}
	case 0x6F7469706963636F:
		switch(wp[1]){
		case 0x63696D616C616874:return 1;
		case 0x64696F6E65687073:return 1;
		case 0x6C61636976726563:return 1;
		case 0x6C61726F706D6574:return 1;
		case 0x6C61746569726170:return 1;
		case 0x6C61746E616C7461:return 1;
		case 0x72616C7570616373:return 1;
		case 0x726F697265746E61:return 1;
		default:return 0;
		}
	case 0x6F746E616D616461:
		switch(wp[1]){
		case 0x616D6F7473616C62:return 1;
		default:return 0;
		}
	case 0x6F746E696F646E65:
		switch(wp[1]){
		case 0x6E6F697461636978:return 1;
		default:return 0;
		}
	case 0x6F746E696F747561:
		switch(wp[1]){
		case 0x6E6F697461636978:return 1;
		default:return 0;
		}
	case 0x6F746F62656C6870:
		switch(wp[1]){
		case 0x6E6F6974617A696D:return 1;
		default:return 0;
		}
	case 0x6F746F696E617263:
		switch(wp[1]){
		case 0x7968706172676F70:return 1;
		default:return 0;
		}
	case 0x6F746F7265746E65:
		switch(wp[1]){
		case 0x6E6F697461636978:return 1;
		default:return 0;
		}
	case 0x6F747369726F6863:
		switch(wp[1]){
		case 0x616D6F7473616C62:return 1;
		default:return 0;
		}
	case 0x6F76657265746E61:
		switch(wp[1]){
		case 0x6C616E6F6974756C:return 1;
		default:return 0;
		}
	case 0x6F7A6F65616C6170:
		switch(wp[1]){
		case 0x6C616369676F6C6F:return 1;
		default:return 0;
		}
	case 0x706167797A657270:
		switch(wp[1]){
		case 0x6C6169737968706F:return 1;
		default:return 0;
		}
	case 0x70616E6F6D6F7262:
		switch(wp[1]){
		case 0x656E656C61687468:return 1;
		default:return 0;
		}
	case 0x70616E6F7274696E:
		switch(wp[1]){
		case 0x656E656C61687468:return 1;
		default:return 0;
		}
	case 0x70616E79786F7A61:
		switch(wp[1]){
		case 0x656E656C61687468:return 1;
		default:return 0;
		}
	case 0x70616F6475657370:
		switch(wp[1]){
		case 0x63697463656C706F:return 1;
		case 0x63697465676F6C6F:return 1;
		default:return 0;
		}
	case 0x7061726761726170:
		switch(wp[1]){
		case 0x6C61636974736968:return 1;
		default:return 0;
		}
	case 0x706172676F706F74:
		switch(wp[1]){
		case 0x63697274656D6F68:return 1;
		default:return 0;
		}
	case 0x7065636E65726564:
		switch(wp[1]){
		case 0x656C65636F6C6168:return 1;
		default:return 0;
		}
	case 0x7065636E65746F6E:
		switch(wp[1]){
		case 0x656C65636F6C6168:return 1;
		default:return 0;
		}
	case 0x7065636F72647968:
		switch(wp[1]){
		case 0x656C65636F6C6168:return 1;
		default:return 0;
		}
	case 0x7065637265706D69:
		switch(wp[1]){
		case 0x7373656E65766974:return 1;
		case 0x7974696C69626974:return 1;
		default:return 0;
		}
	case 0x7065637375736E69:
		switch(wp[1]){
		case 0x7974696C69626974:return 1;
		default:return 0;
		}
	case 0x7065637375736E75:
		switch(wp[1]){
		case 0x7974696C69626974:return 1;
		default:return 0;
		}
	case 0x7065646E69657270:
		switch(wp[1]){
		case 0x796C746E65646E65:return 1;
		default:return 0;
		}
	case 0x7065647265746E69:
		switch(wp[1]){
		case 0x796C746E65646E65:return 1;
		default:return 0;
		}
	case 0x70656C6F7263616D:
		switch(wp[1]){
		case 0x61726574706F6469:return 1;
		default:return 0;
		}
	case 0x70656C6F7263696D:
		switch(wp[1]){
		case 0x61726574706F6469:return 1;
		default:return 0;
		}
	case 0x70656E6F666C7573:
		switch(wp[1]){
		case 0x6E69656C61687468:return 1;
		default:return 0;
		}
	case 0x70656F6572796874:
		switch(wp[1]){
		case 0x636974746F6C6769:return 1;
		default:return 0;
		}
	case 0x70656F6D61757173:
		switch(wp[1]){
		case 0x6C61696C65687469:return 1;
		default:return 0;
		}
	case 0x70656F7265746E65:
		switch(wp[1]){
		case 0x656C65636F6C7069:return 1;
		default:return 0;
		}
	case 0x70656F73736F6C67:
		switch(wp[1]){
		case 0x636974746F6C6769:return 1;
		default:return 0;
		}
	case 0x7065727069746E61:
		switch(wp[1]){
		case 0x7373656E64657261:return 1;
		default:return 0;
		}
	case 0x70696365726E6F6E:
		switch(wp[1]){
		case 0x676E697461636F72:return 1;
		default:return 0;
		}
	case 0x70696365726F7270:
		switch(wp[1]){
		case 0x6E6F697461636F72:return 1;
		default:return 0;
		}
	case 0x70696C6F6E656461:
		switch(wp[1]){
		case 0x7369736F74616D6F:return 1;
		default:return 0;
		}
	case 0x7069726373657270:
		switch(wp[1]){
		case 0x7373656E65766974:return 1;
		case 0x7974696C69626974:return 1;
		default:return 0;
		}
	case 0x70697263736E6F6E:
		switch(wp[1]){
		case 0x7473696C61727574:return 1;
		default:return 0;
		}
	case 0x70697263736F7270:
		switch(wp[1]){
		case 0x7373656E65766974:return 1;
		default:return 0;
		}
	case 0x7069736968746870:
		switch(wp[1]){
		case 0x61696E6F6D75656E:return 1;
		default:return 0;
		}
	case 0x7069746C756D6572:
		switch(wp[1]){
		case 0x6E6F69746163696C:return 1;
		default:return 0;
		}
	case 0x706C7573796C6F70:
		switch(wp[1]){
		case 0x6E6F697461727568:return 1;
		default:return 0;
		}
	case 0x706D61696C6C696D:
		switch(wp[1]){
		case 0x726574656D657265:return 1;
		default:return 0;
		}
	case 0x706D657469757165:
		switch(wp[1]){
		case 0x73756F656E61726F:return 1;
		default:return 0;
		}
	case 0x706D696172746C75:
		switch(wp[1]){
		case 0x6D73696C61697265:return 1;
		case 0x7473696C61697265:return 1;
		default:return 0;
		}
	case 0x706D697265707573:
		switch(wp[1]){
		case 0x646574616E676572:return 1;
		default:return 0;
		}
	case 0x706D6F6363616572:
		switch(wp[1]){
		case 0x746E656D6873696C:return 1;
		default:return 0;
		}
	case 0x706D6F6363616E75:
		switch(wp[1]){
		case 0x656C62616873696C:return 1;
		default:return 0;
		}
	case 0x706D6F637265766F:
		switch(wp[1]){
		case 0x6E6F697461736E65:return 1;
		case 0x796C746E6563616C:return 1;
		case 0x79726F7461736E65:return 1;
		default:return 0;
		}
	case 0x706D6F74616D6568:
		switch(wp[1]){
		case 0x656C65636F6C6168:return 1;
		default:return 0;
		}
	case 0x706D796C69726570:
		switch(wp[1]){
		case 0x73697469676E6168:return 1;
		default:return 0;
		}
	case 0x706E6F68706C7573:
		switch(wp[1]){
		case 0x6E69656C61687468:return 1;
		default:return 0;
		}
	case 0x706F626D6F726874:
		switch(wp[1]){
		case 0x7369746962656C68:return 1;
		default:return 0;
		}
	case 0x706F636973796870:
		switch(wp[1]){
		case 0x6C61636968637973:return 1;
		default:return 0;
		}
	case 0x706F636F70706968:
		switch(wp[1]){
		case 0x6C6F726574736F72:return 1;
		default:return 0;
		}
	case 0x706F64696E617567:
		switch(wp[1]){
		case 0x63696E6F69706F72:return 1;
		default:return 0;
		}
	case 0x706F646972657470:
		switch(wp[1]){
		case 0x63697473696C6968:return 1;
		default:return 0;
		}
	case 0x706F676E7972616C:
		switch(wp[1]){
		case 0x736973796C617261:return 1;
		default:return 0;
		}
	case 0x706F68636E6F7262:
		switch(wp[1]){
		case 0x61696E6F6D75656E:return 1;
		case 0x63696E6F6D75656E:return 1;
		case 0x7972616E6F6D6C75:return 1;
		default:return 0;
		}
	case 0x706F68746E616361:
		switch(wp[1]){
		case 0x6E61696779726574:return 1;
		default:return 0;
		}
	case 0x706F6C6168706D6F:
		switch(wp[1]){
		case 0x7369746962656C68:return 1;
		default:return 0;
		}
	case 0x706F6C6379636E65:
		switch(wp[1]){
		case 0x796C6C6163696465:return 1;
		default:return 0;
		}
	case 0x706F6C6968707973:
		switch(wp[1]){
		case 0x7369736F68637973:return 1;
		default:return 0;
		}
	case 0x706F6C6973707968:
		switch(wp[1]){
		case 0x6469746E6F646F68:return 1;
		default:return 0;
		}
	case 0x706F6C7573706163:
		switch(wp[1]){
		case 0x7972616C6C697075:return 1;
		default:return 0;
		}
	case 0x706F6E61766C6167:
		switch(wp[1]){
		case 0x6C6163697473616C:return 1;
		default:return 0;
		}
	case 0x706F726265726563:
		switch(wp[1]){
		case 0x7369736F68637973:return 1;
		default:return 0;
		}
	case 0x706F72646E6F6863:
		switch(wp[1]){
		case 0x6E61696779726574:return 1;
		default:return 0;
		}
	case 0x706F726563796C67:
		switch(wp[1]){
		case 0x6574616870736F68:return 1;
		default:return 0;
		}
	case 0x706F726574657275:
		switch(wp[1]){
		case 0x6D6172676F6C6579:return 1;
		default:return 0;
		}
	case 0x706F726574737968:
		switch(wp[1]){
		case 0x657A697265746F72:return 1;
		default:return 0;
		}
	case 0x706F726874657275:
		switch(wp[1]){
		case 0x6369746174736F72:return 1;
		default:return 0;
		}
	case 0x706F727069757165:
		switch(wp[1]){
		case 0x6C616E6F6974726F:return 1;
		default:return 0;
		}
	case 0x706F72707265766F:
		switch(wp[1]){
		case 0x64656E6F6974726F:return 1;
		default:return 0;
		}
	case 0x706F727463656C65:
		switch(wp[1]){
		case 0x636974616D75656E:return 1;
		case 0x6C6169746E65746F:return 1;
		case 0x726574656D6F7279:return 1;
		case 0x79676F6C6F687461:return 1;
		default:return 0;
		}
	case 0x706F727463657073:
		switch(wp[1]){
		case 0x726574656D6F7279:return 1;
		default:return 0;
		}
	case 0x706F736964726163:
		switch(wp[1]){
		case 0x6C61636974736968:return 1;
		default:return 0;
		}
	case 0x706F736F6C696870:
		switch(wp[1]){
		case 0x6C61636974736968:return 1;
		case 0x6E6F6974617A6968:return 1;
		default:return 0;
		}
	case 0x706F746163696C70:
		switch(wp[1]){
		case 0x65736F6C6C697061:return 1;
		default:return 0;
		}
	case 0x706F74616D6F6E6F:
		switch(wp[1]){
		case 0x796C6C616369656F:return 1;
		default:return 0;
		}
	case 0x706F74616D726564:
		switch(wp[1]){
		case 0x79676F6C6F687461:return 1;
		default:return 0;
		}
	case 0x706F74616E6E6970:
		switch(wp[1]){
		case 0x6574616E69746365:return 1;
		default:return 0;
		}
	case 0x706F7463616C6167:
		switch(wp[1]){
		case 0x7369746962656C68:return 1;
		default:return 0;
		}
	case 0x706F746E65677261:
		switch(wp[1]){
		case 0x6D756E6965746F72:return 1;
		default:return 0;
		}
	case 0x706F746F746F6870:
		switch(wp[1]){
		case 0x636968706172676F:return 1;
		default:return 0;
		}
	case 0x706F796874686369:
		switch(wp[1]){
		case 0x6D75696779726574:return 1;
		case 0x6E61696779726574:return 1;
		default:return 0;
		}
	case 0x706F7A6E65626964:
		switch(wp[1]){
		case 0x656E697A616E6568:return 1;
		default:return 0;
		}
	case 0x7070617265746E69:
		switch(wp[1]){
		case 0x6E6F69746163696C:return 1;
		default:return 0;
		}
	case 0x7070617369646E75:
		switch(wp[1]){
		case 0x656C6261746E696F:return 1;
		default:return 0;
		}
	case 0x707061736E617274:
		switch(wp[1]){
		case 0x6E61696863616C61:return 1;
		default:return 0;
		}
	case 0x7072656874616577:
		switch(wp[1]){
		case 0x7373656E666F6F72:return 1;
		default:return 0;
		}
	case 0x707265746E656E75:
		switch(wp[1]){
		case 0x796C676E69736972:return 1;
		default:return 0;
		}
	case 0x707265746E696572:
		switch(wp[1]){
		case 0x6E6F697461746572:return 1;
		default:return 0;
		}
	case 0x707265746E756F63:
		switch(wp[1]){
		case 0x656C7069636E6972:return 1;
		case 0x6574617265646E6F:return 1;
		default:return 0;
		}
	case 0x7072697478656E69:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x70726F636E696E75:
		switch(wp[1]){
		case 0x796C64657461726F:return 1;
		default:return 0;
		}
	case 0x70726F6D6174656D:
		switch(wp[1]){
		case 0x6C61636974736F68:return 1;
		default:return 0;
		}
	case 0x70736D7563726963:
		switch(wp[1]){
		case 0x796C657669746365:return 1;
		default:return 0;
		}
	case 0x70736E6172746572:
		switch(wp[1]){
		case 0x6E6F69746174726F:return 1;
		default:return 0;
		}
	case 0x70736F6475657370:
		switch(wp[1]){
		case 0x6D7569676E61726F:return 1;
		default:return 0;
		}
	case 0x70736F6572657473:
		switch(wp[1]){
		case 0x73756F6C79646E6F:return 1;
		default:return 0;
		}
	case 0x70736F6863697274:
		switch(wp[1]){
		case 0x6C6169676E61726F:return 1;
		case 0x6D7569676E61726F:return 1;
		default:return 0;
		}
	case 0x70736F6C6C796870:
		switch(wp[1]){
		case 0x73756F6C79646E6F:return 1;
		default:return 0;
		}
	case 0x70736F6D61757173:
		switch(wp[1]){
		case 0x6C6164696F6E6568:return 1;
		default:return 0;
		}
	case 0x70736F6E6F726570:
		switch(wp[1]){
		case 0x73756F656361726F:return 1;
		default:return 0;
		}
	case 0x70736F726170616C:
		switch(wp[1]){
		case 0x796D6F746F6E656C:return 1;
		default:return 0;
		}
	case 0x70736F7265747361:
		switch(wp[1]){
		case 0x73756F6C79646E6F:return 1;
		default:return 0;
		}
	case 0x70736F74616D6F73:
		switch(wp[1]){
		case 0x63696E68636E616C:return 1;
		default:return 0;
		}
	case 0x70736F7463656C70:
		switch(wp[1]){
		case 0x73756F6C79646E6F:return 1;
		default:return 0;
		}
	case 0x70736F746962726F:
		switch(wp[1]){
		case 0x6C6164696F6E6568:return 1;
		default:return 0;
		}
	case 0x70736F746E656D6F:
		switch(wp[1]){
		case 0x797865706F6E656C:return 1;
		default:return 0;
		}
	case 0x70736F746E6F7266:
		switch(wp[1]){
		case 0x6C6164696F6E6568:return 1;
		default:return 0;
		}
	case 0x70737261666C7573:
		switch(wp[1]){
		case 0x656E696D616E6568:return 1;
		default:return 0;
		}
	case 0x707375737265766F:
		switch(wp[1]){
		case 0x796C73756F696369:return 1;
		default:return 0;
		}
	case 0x7075647265707573:
		switch(wp[1]){
		case 0x6E6F69746163696C:return 1;
		default:return 0;
		}
	case 0x707572726F636E69:
		switch(wp[1]){
		case 0x7974696C69626974:return 1;
		default:return 0;
		}
	case 0x707572726F636E75:
		switch(wp[1]){
		case 0x7974696C69626974:return 1;
		default:return 0;
		}
	case 0x7075736F62727574:
		switch(wp[1]){
		case 0x6567726168637265:return 1;
		default:return 0;
		}
	case 0x7075737265707968:
		switch(wp[1]){
		case 0x65766974616C7265:return 1;
		default:return 0;
		}
	case 0x7078656172746C75:
		switch(wp[1]){
		case 0x73756F6974696465:return 1;
		default:return 0;
		}
	case 0x7078656F72677968:
		switch(wp[1]){
		case 0x7974697669736E61:return 1;
		default:return 0;
		}
	case 0x7078657265707573:
		switch(wp[1]){
		case 0x6572757469646E65:return 1;
		case 0x6E6F697461746365:return 1;
		default:return 0;
		}
	case 0x7079686F706C6F63:
		switch(wp[1]){
		case 0x616973616C707265:return 1;
		default:return 0;
		}
	case 0x7079687968746162:
		switch(wp[1]){
		case 0x6169736568747365:return 1;
		default:return 0;
		}
	case 0x7079746968637261:
		switch(wp[1]){
		case 0x726568706172676F:return 1;
		default:return 0;
		}
	case 0x7079746F746F6870:
		switch(wp[1]){
		case 0x636968706172676F:return 1;
		default:return 0;
		}
	case 0x7079746F746F7270:
		switch(wp[1]){
		case 0x726568706172676F:return 1;
		default:return 0;
		}
	case 0x7079786F74656361:
		switch(wp[1]){
		case 0x6564696C61687468:return 1;
		default:return 0;
		}
	case 0x7163617265707573:
		switch(wp[1]){
		case 0x6E6F697469736975:return 1;
		default:return 0;
		}
	case 0x7165727265707573:
		switch(wp[1]){
		case 0x746E656D65726975:return 1;
		default:return 0;
		}
	case 0x7165736E6F636E69:
		switch(wp[1]){
		case 0x7373656E746E6575:return 1;
		default:return 0;
		}
	case 0x716E696C65726E75:
		switch(wp[1]){
		case 0x656C626168736975:return 1;
		case 0x796C626168736975:return 1;
		default:return 0;
		}
	case 0x716E697265707573:
		switch(wp[1]){
		case 0x6576697469736975:return 1;
		default:return 0;
		}
	case 0x717265746E756F63:
		switch(wp[1]){
		case 0x6465726574726175:return 1;
		case 0x796C726574726175:return 1;
		default:return 0;
		}
	case 0x7178657265707573:
		switch(wp[1]){
		case 0x796C657469736975:return 1;
		default:return 0;
		}
	case 0x7261626D65736964:
		switch(wp[1]){
		case 0x746E656D73736172:return 1;
		default:return 0;
		}
	case 0x7261636172746574:
		switch(wp[1]){
		case 0x6574616C79786F62:return 1;
		default:return 0;
		}
	case 0x7261636968706D61:
		switch(wp[1]){
		case 0x73756F6E65676F70:return 1;
		default:return 0;
		}
	case 0x7261636E69736964:
		switch(wp[1]){
		case 0x6E6F697461726563:return 1;
		default:return 0;
		}
	case 0x7261636F72647968:
		switch(wp[1]){
		case 0x6C69727974736F62:return 1;
		default:return 0;
		}
	case 0x7261637265707968:
		switch(wp[1]){
		case 0x6465747465727562:return 1;
		default:return 0;
		}
	case 0x7261656C68636F63:
		switch(wp[1]){
		case 0x657461696C6F6669:return 1;
		default:return 0;
		}
	case 0x72616669746C756D:
		switch(wp[1]){
		case 0x7373656E73756F69:return 1;
		default:return 0;
		}
	case 0x7261676572736964:
		switch(wp[1]){
		case 0x7373656E6C756664:return 1;
		default:return 0;
		}
	case 0x7261697264617571:
		switch(wp[1]){
		case 0x6574616C75636974:return 1;
		default:return 0;
		}
	case 0x72616C6172746E69:
		switch(wp[1]){
		case 0x796C6C6165676E79:return 1;
		default:return 0;
		}
	case 0x72616C6F6E696872:
		switch(wp[1]){
		case 0x79676F6C6F676E79:return 1;
		default:return 0;
		}
	case 0x7261706172747865:
		switch(wp[1]){
		case 0x6C616D7968636E65:return 1;
		case 0x796C6C616968636F:return 1;
		default:return 0;
		}
	case 0x7261706D6F636E69:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x7261707265746E69:
		switch(wp[1]){
		case 0x6C616D7968636E65:return 1;
		default:return 0;
		}
	case 0x7261736F6574736F:
		switch(wp[1]){
		case 0x73756F74616D6F63:return 1;
		default:return 0;
		}
	case 0x7261746574697274:
		switch(wp[1]){
		case 0x6E6F69726F6D6574:return 1;
		default:return 0;
		}
	case 0x7262696375646163:
		switch(wp[1]){
		case 0x6574616968636E61:return 1;
		default:return 0;
		}
	case 0x7262696669746E61:
		switch(wp[1]){
		case 0x6E6973796C6F6E69:return 1;
		case 0x736973796C6F6E69:return 1;
		default:return 0;
		}
	case 0x726269666F78796D:
		switch(wp[1]){
		case 0x616D6F637261736F:return 1;
		default:return 0;
		}
	case 0x7262696C75627574:
		switch(wp[1]){
		case 0x6574616968636E61:return 1;
		default:return 0;
		}
	case 0x72626D656D627573:
		switch(wp[1]){
		case 0x73756F6563616E61:return 1;
		default:return 0;
		}
	case 0x72626F6361726F63:
		switch(wp[1]){
		case 0x73696C6169686361:return 1;
		default:return 0;
		}
	case 0x72626F6469707361:
		switch(wp[1]){
		case 0x6574616968636E61:return 1;
		default:return 0;
		}
	case 0x72626F6475657370:
		switch(wp[1]){
		case 0x6574616968636E61:return 1;
		default:return 0;
		}
	case 0x72626F6863697274:
		switch(wp[1]){
		case 0x6574616968636E61:return 1;
		default:return 0;
		}
	case 0x72626F696C6C6170:
		switch(wp[1]){
		case 0x6574616968636E61:return 1;
		default:return 0;
		}
	case 0x72626F696E656174:
		switch(wp[1]){
		case 0x6574616968636E61:return 1;
		default:return 0;
		}
	case 0x72626F6C6C796870:
		switch(wp[1]){
		case 0x6574616968636E61:return 1;
		default:return 0;
		}
	case 0x72626F6D73616C65:
		switch(wp[1]){
		case 0x6574616968636E61:return 1;
		default:return 0;
		}
	case 0x72626F7265666E69:
		switch(wp[1]){
		case 0x6574616968636E61:return 1;
		default:return 0;
		}
	case 0x72626F7275656C70:
		switch(wp[1]){
		case 0x6574616968636E61:return 1;
		case 0x7369746968636E6F:return 1;
		default:return 0;
		}
	case 0x72626F74616D6568:
		switch(wp[1]){
		case 0x6574616968636E61:return 1;
		default:return 0;
		}
	case 0x72626F7470797263:
		switch(wp[1]){
		case 0x6574616968636E61:return 1;
		default:return 0;
		}
	case 0x7263617368637261:
		switch(wp[1]){
		case 0x726F746163696669:return 1;
		default:return 0;
		}
	case 0x7263697264617571:
		switch(wp[1]){
		case 0x6369746E65637365:return 1;
		default:return 0;
		}
	case 0x72636F65616C6170:
		switch(wp[1]){
		case 0x63696C6C61747379:return 1;
		default:return 0;
		}
	case 0x72636F68746E6178:
		switch(wp[1]){
		case 0x656E696E69746165:return 1;
		default:return 0;
		}
	case 0x72636F6D65646E75:
		switch(wp[1]){
		case 0x796C6C6163697461:return 1;
		default:return 0;
		}
	case 0x72636F7079686E75:
		switch(wp[1]){
		case 0x796C6C6163697469:return 1;
		default:return 0;
		}
	case 0x72636F7269656E6F:
		switch(wp[1]){
		case 0x796C6C6163697469:return 1;
		default:return 0;
		}
	case 0x72636F74616D6568:
		switch(wp[1]){
		case 0x6E696C6C61747379:return 1;
		default:return 0;
		}
	case 0x72636F7473697261:
		switch(wp[1]){
		case 0x7373656E63697461:return 1;
		case 0x796C6C6163697461:return 1;
		default:return 0;
		}
	case 0x7263736964657270:
		switch(wp[1]){
		case 0x726F74616E696D69:return 1;
		case 0x7972616E6F697465:return 1;
		default:return 0;
		}
	case 0x72637369646E6F6E:
		switch(wp[1]){
		case 0x7972616E6F697465:return 1;
		default:return 0;
		}
	case 0x7263756165727562:
		switch(wp[1]){
		case 0x796C6C6163697461:return 1;
		default:return 0;
		}
	case 0x7264617265707968:
		switch(wp[1]){
		case 0x61696D656C616E65:return 1;
		default:return 0;
		}
	case 0x7264796861786568:
		switch(wp[1]){
		case 0x656E657A6E65626F:return 1;
		default:return 0;
		}
	case 0x726479686F726561:
		switch(wp[1]){
		case 0x63696D616E79646F:return 1;
		case 0x797061726568746F:return 1;
		default:return 0;
		}
	case 0x7265626D756E6E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x7265636172746C75:
		switch(wp[1]){
		case 0x73756F696E6F6D65:return 1;
		default:return 0;
		}
	case 0x7265637265707573:
		switch(wp[1]){
		case 0x73756F696E6F6D65:return 1;
		default:return 0;
		}
	case 0x7265637361657270:
		switch(wp[1]){
		case 0x746E656D6E696174:return 1;
		default:return 0;
		}
	case 0x72656373616E6F6E:
		switch(wp[1]){
		case 0x656C62616E696174:return 1;
		default:return 0;
		}
	case 0x7265637369646E69:
		switch(wp[1]){
		case 0x7974696C6962696E:return 1;
		default:return 0;
		}
	case 0x72656465666E6F63:
		switch(wp[1]){
		case 0x7473696E6F697461:return 1;
		default:return 0;
		}
	case 0x72656469736E6F63:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x7265646E6F706D69:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x7265646E756E6F6E:
		switch(wp[1]){
		case 0x6574617564617267:return 1;
		case 0x676E69646E617473:return 1;
		default:return 0;
		}
	case 0x7265646E7573696D:
		switch(wp[1]){
		case 0x676E69646E617473:return 1;
		default:return 0;
		}
	case 0x7265646F6D6F7270:
		switch(wp[1]){
		case 0x7473696E6F697461:return 1;
		default:return 0;
		}
	case 0x7265647968636170:
		switch(wp[1]){
		case 0x656C65636F74616D:return 1;
		case 0x796C73756F74616D:return 1;
		default:return 0;
		}
	case 0x7265666669646E69:
		switch(wp[1]){
		case 0x6369747369746E65:return 1;
		default:return 0;
		}
	case 0x7265666669646E75:
		switch(wp[1]){
		case 0x6465746169746E65:return 1;
		default:return 0;
		}
	case 0x7265666675736E69:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x7265666675736E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x7265666F65636970:
		switch(wp[1]){
		case 0x73756F6E69677572:return 1;
		default:return 0;
		}
	case 0x7265666F72647968:
		switch(wp[1]){
		case 0x63696E6179636972:return 1;
		case 0x63696E6179636F72:return 1;
		default:return 0;
		}
	case 0x726566736E617274:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		case 0x7974696C69626972:return 1;
		default:return 0;
		}
	case 0x7265686F656C6170:
		switch(wp[1]){
		case 0x79676F6C6F746570:return 1;
		default:return 0;
		}
	case 0x7265687069726570:
		switch(wp[1]){
		case 0x6C6172746E65636F:return 1;
		default:return 0;
		}
	case 0x72656873656C616D:
		switch(wp[1]){
		case 0x73756F6563616962:return 1;
		default:return 0;
		}
	case 0x7265687468706964:
		switch(wp[1]){
		case 0x796C6C6163697469:return 1;
		default:return 0;
		}
	case 0x726568746F6D6568:
		switch(wp[1]){
		case 0x7363697475657061:return 1;
		default:return 0;
		}
	case 0x726568746F726561:
		switch(wp[1]){
		case 0x7363697475657061:return 1;
		default:return 0;
		}
	case 0x726568746F726573:
		switch(wp[1]){
		case 0x7363697475657061:return 1;
		default:return 0;
		}
	case 0x7265696869746E61:
		switch(wp[1]){
		case 0x6C61636968637261:return 1;
		default:return 0;
		}
	case 0x72656D6D6F636E75:
		switch(wp[1]){
		case 0x7373656E6C616963:return 1;
		default:return 0;
		}
	case 0x72656E696D6E6F6E:
		switch(wp[1]){
		case 0x6C616369676F6C61:return 1;
		default:return 0;
		}
	case 0x72656E6C75766E69:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x72656F6475657370:
		switch(wp[1]){
		case 0x73616C6570697379:return 1;
		default:return 0;
		}
	case 0x72656F726870656E:
		switch(wp[1]){
		case 0x73616C6570697379:return 1;
		default:return 0;
		}
	case 0x7265706172666E69:
		switch(wp[1]){
		case 0x6C61697265687069:return 1;
		default:return 0;
		}
	case 0x7265706172746E69:
		switch(wp[1]){
		case 0x6361696472616369:return 1;
		case 0x6C61696472616369:return 1;
		default:return 0;
		}
	case 0x72657069766C6570:
		switch(wp[1]){
		case 0x736974696E6F7469:return 1;
		default:return 0;
		}
	case 0x7265706F6574736F:
		switch(wp[1]){
		case 0x7369746974736F69:return 1;
		default:return 0;
		}
	case 0x7265706F68636F6C:
		switch(wp[1]){
		case 0x736974696E6F7469:return 1;
		default:return 0;
		}
	case 0x7265706F6C706168:
		switch(wp[1]){
		case 0x73756F6D6F747369:return 1;
		default:return 0;
		}
	case 0x7265706F6C796863:
		switch(wp[1]){
		case 0x6D75696472616369:return 1;
		default:return 0;
		}
	case 0x7265706F72647968:
		switch(wp[1]){
		case 0x6D75696472616369:return 1;
		case 0x736974696E6F7469:return 1;
		default:return 0;
		}
	case 0x7265706F7274656D:
		switch(wp[1]){
		case 0x736974696E6F7469:return 1;
		default:return 0;
		}
	case 0x7265707265707573:
		switch(wp[1]){
		case 0x6D73696C616E6F73:return 1;
		default:return 0;
		}
	case 0x7265707265707968:
		switch(wp[1]){
		case 0x6369746C61747369:return 1;
		case 0x7369736C61747369:return 1;
		default:return 0;
		}
	case 0x7265707573657270:
		switch(wp[1]){
		case 0x796C6C6169636966:return 1;
		case 0x796C73756F756C66:return 1;
		default:return 0;
		}
	case 0x7265707968636170:
		switch(wp[1]){
		case 0x736974696E6F7469:return 1;
		default:return 0;
		}
	case 0x726573626F657270:
		switch(wp[1]){
		case 0x6C616E6F69746176:return 1;
		default:return 0;
		}
	case 0x7265736F6D656863:
		switch(wp[1]){
		case 0x797061726568746F:return 1;
		default:return 0;
		}
	case 0x7265736F74796870:
		switch(wp[1]){
		case 0x6C616369676F6C6F:return 1;
		default:return 0;
		}
	case 0x7265737265707573:
		switch(wp[1]){
		case 0x656C626165636976:return 1;
		case 0x796C626165636976:return 1;
		default:return 0;
		}
	case 0x726574616D6E6F6E:
		switch(wp[1]){
		case 0x63697473696C6169:return 1;
		default:return 0;
		}
	case 0x7265746172666E69:
		switch(wp[1]){
		case 0x6C6169726F746972:return 1;
		default:return 0;
		}
	case 0x7265746172707573:
		switch(wp[1]){
		case 0x6C61697274736572:return 1;
		default:return 0;
		}
	case 0x7265746172746C75:
		switch(wp[1]){
		case 0x6C61697274736572:return 1;
		default:return 0;
		}
	case 0x7265746172746E69:
		switch(wp[1]){
		case 0x6C6169726F746972:return 1;
		default:return 0;
		}
	case 0x7265746172747865:
		switch(wp[1]){
		case 0x6C6169726F746972:return 1;
		case 0x6C61697274736572:return 1;
		default:return 0;
		}
	case 0x726574617478756A:
		switch(wp[1]){
		case 0x6C61697274736572:return 1;
		default:return 0;
		}
	case 0x7265746564657270:
		switch(wp[1]){
		case 0x63697473696E696D:return 1;
		case 0x65766974616E696D:return 1;
		case 0x6E6F6974616E696D:return 1;
		case 0x796C6574616E696D:return 1;
		default:return 0;
		}
	case 0x72657465646E6F6E:
		switch(wp[1]){
		case 0x6E6F6974616E696D:return 1;
		default:return 0;
		}
	case 0x7265746E656E6F6E:
		switch(wp[1]){
		case 0x746E656D6E696174:return 1;
		default:return 0;
		}
	case 0x7265746E696E6F6E:
		switch(wp[1]){
		case 0x6C616E6F6974616E:return 1;
		case 0x6E6F6974616C6F70:return 1;
		case 0x6E6F697469736F70:return 1;
		default:return 0;
		}
	case 0x7265746E6973696D:
		switch(wp[1]){
		case 0x656C626174657270:return 1;
		default:return 0;
		}
	case 0x7265746F74796870:
		switch(wp[1]){
		case 0x6369676F6C6F7461:return 1;
		default:return 0;
		}
	case 0x72657470696D6568:
		switch(wp[1]){
		case 0x6C616369676F6C6F:return 1;
		default:return 0;
		}
	case 0x7265747265646E75:
		switch(wp[1]){
		case 0x6C61697274736572:return 1;
		default:return 0;
		}
	case 0x7265747265707573:
		switch(wp[1]){
		case 0x6C61697274736572:return 1;
		default:return 0;
		}
	case 0x7265747265707968:
		switch(wp[1]){
		case 0x6C61697274736572:return 1;
		default:return 0;
		}
	case 0x7265747265746E69:
		switch(wp[1]){
		case 0x6C6169726F746972:return 1;
		default:return 0;
		}
	case 0x72657473656C6574:
		switch(wp[1]){
		case 0x7968706172676F65:return 1;
		default:return 0;
		}
	case 0x7265747369726570:
		switch(wp[1]){
		case 0x63696870726F6D6F:return 1;
		default:return 0;
		}
	case 0x72657478656E6F6E:
		switch(wp[1]){
		case 0x6E6F6974616E696D:return 1;
		default:return 0;
		}
	case 0x7265766172746E69:
		switch(wp[1]){
		case 0x796C6C6172626574:return 1;
		default:return 0;
		}
	case 0x7265766461657270:
		switch(wp[1]){
		case 0x746E656D65736974:return 1;
		default:return 0;
		}
	case 0x726576696E756E75:
		switch(wp[1]){
		case 0x656B696C79746973:return 1;
		default:return 0;
		}
	case 0x7265766E6F636E69:
		switch(wp[1]){
		case 0x7974696C69626973:return 1;
		case 0x7974696C69626974:return 1;
		default:return 0;
		}
	case 0x7265766E6F636E75:
		switch(wp[1]){
		case 0x6C616E6F69746173:return 1;
		case 0x7974696C69626974:return 1;
		default:return 0;
		}
	case 0x7265766F72746E69:
		switch(wp[1]){
		case 0x7974696C69626973:return 1;
		default:return 0;
		}
	case 0x7265767265746E69:
		switch(wp[1]){
		case 0x796C6C6172626574:return 1;
		default:return 0;
		}
	case 0x726576736E617274:
		switch(wp[1]){
		case 0x6C616964656D6F73:return 1;
		case 0x6C616E6970736F73:return 1;
		case 0x6E6F697461726562:return 1;
		default:return 0;
		}
	case 0x726577736E616E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x72666C65736E6F6E:
		switch(wp[1]){
		case 0x676E696472616765:return 1;
		default:return 0;
		}
	case 0x72667369646E6F6E:
		switch(wp[1]){
		case 0x6465736968636E61:return 1;
		default:return 0;
		}
	case 0x7267616E61736964:
		switch(wp[1]){
		case 0x657A6974616D6D61:return 1;
		default:return 0;
		}
	case 0x72676E6F63657270:
		switch(wp[1]){
		case 0x6C616E6F69737365:return 1;
		default:return 0;
		}
	case 0x72676F6E6F726863:
		switch(wp[1]){
		case 0x74736974616D6D61:return 1;
		default:return 0;
		}
	case 0x72676F7470797263:
		switch(wp[1]){
		case 0x74736974616D6D61:return 1;
		default:return 0;
		}
	case 0x7268636F63796870:
		switch(wp[1]){
		case 0x73756F6563616D6F:return 1;
		default:return 0;
		}
	case 0x7268636F67696C6F:
		switch(wp[1]){
		case 0x726574656D6F6E6F:return 1;
		default:return 0;
		}
	case 0x7268636F696C6568:
		switch(wp[1]){
		case 0x65706F63736F6D6F:return 1;
		default:return 0;
		}
	case 0x7268636F7263696D:
		switch(wp[1]){
		case 0x726574656D6F6E6F:return 1;
		default:return 0;
		}
	case 0x7268636F746E6170:
		switch(wp[1]){
		case 0x726574656D6F6E6F:return 1;
		default:return 0;
		}
	case 0x7268636F746F6870:
		switch(wp[1]){
		case 0x65706F6373616D6F:return 1;
		case 0x65706F63736F6D6F:return 1;
		case 0x68706172676F6E6F:return 1;
		default:return 0;
		}
	case 0x726870616D726568:
		switch(wp[1]){
		case 0x6C6163697469646F:return 1;
		default:return 0;
		}
	case 0x7268737265646E75:
		switch(wp[1]){
		case 0x7373656E69626275:return 1;
		default:return 0;
		}
	case 0x7268746E61656874:
		switch(wp[1]){
		case 0x79676168706F706F:return 1;
		case 0x7968706F736F706F:return 1;
		default:return 0;
		}
	case 0x7268746E6173696D:
		switch(wp[1]){
		case 0x796C6C616369706F:return 1;
		default:return 0;
		}
	case 0x7268746E6179786F:
		switch(wp[1]){
		case 0x656E6F6E69757161:return 1;
		default:return 0;
		}
	case 0x7268747972656E61:
		switch(wp[1]){
		case 0x63697473616C706F:return 1;
		default:return 0;
		}
	case 0x7269636F7275656E:
		switch(wp[1]){
		case 0x79726F74616C7563:return 1;
		default:return 0;
		}
	case 0x7269637265746E69:
		switch(wp[1]){
		case 0x6E6F6974616C7563:return 1;
		default:return 0;
		}
	case 0x72696469746C756D:
		switch(wp[1]){
		case 0x6C616E6F69746365:return 1;
		default:return 0;
		}
	case 0x726968636167656D:
		switch(wp[1]){
		case 0x73756F726574706F:return 1;
		default:return 0;
		}
	case 0x7269757163616E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x726F62616C6C6F63:
		switch(wp[1]){
		case 0x6D73696E6F697461:return 1;
		case 0x7473696E6F697461:return 1;
		default:return 0;
		}
	case 0x726F626F72647968:
		switch(wp[1]){
		case 0x6369726F756C666F:return 1;
		default:return 0;
		}
	case 0x726F627573657270:
		switch(wp[1]){
		case 0x6E6F6974616E6964:return 1;
		default:return 0;
		}
	case 0x726F6275736E6F6E:
		switch(wp[1]){
		case 0x6E6F6974616E6964:return 1;
		default:return 0;
		}
	case 0x726F636172746E69:
		switch(wp[1]){
		case 0x72616C7563737570:return 1;
		default:return 0;
		}
	case 0x726F636172747865:
		switch(wp[1]){
		case 0x72616C7563737570:return 1;
		default:return 0;
		}
	case 0x726F636E69657270:
		switch(wp[1]){
		case 0x6E6F697461726F70:return 1;
		default:return 0;
		}
	case 0x726F636E69736964:
		switch(wp[1]){
		case 0x6E6F697461726F70:return 1;
		default:return 0;
		}
	case 0x726F637265707573:
		switch(wp[1]){
		case 0x6E6F697461726F70:return 1;
		default:return 0;
		}
	case 0x726F637265707968:
		switch(wp[1]){
		case 0x7373656E74636572:return 1;
		default:return 0;
		}
	case 0x726F637265746E69:
		switch(wp[1]){
		case 0x6E6F6974616C6572:return 1;
		case 0x72616C7563737570:return 1;
		default:return 0;
		}
	case 0x726F6574656D6E75:
		switch(wp[1]){
		case 0x6C616369676F6C6F:return 1;
		default:return 0;
		}
	case 0x726F666172746E69:
		switch(wp[1]){
		case 0x6C616E6F6974616D:return 1;
		default:return 0;
		}
	case 0x726F6665646E6F6E:
		switch(wp[1]){
		case 0x6E6F697461747365:return 1;
		default:return 0;
		}
	case 0x726F666661736964:
		switch(wp[1]){
		case 0x6E6F697461747365:return 1;
		default:return 0;
		}
	case 0x726F666E6F636E75:
		switch(wp[1]){
		case 0x7974696C6962616D:return 1;
		default:return 0;
		}
	case 0x726F666F746F7270:
		switch(wp[1]){
		case 0x726566696E696D61:return 1;
		default:return 0;
		}
	case 0x726F66736E617274:
		switch(wp[1]){
		case 0x7974696C6962616D:return 1;
		default:return 0;
		}
	case 0x726F676E696E656D:
		switch(wp[1]){
		case 0x6E61696469686361:return 1;
		case 0x72616C7563696461:return 1;
		default:return 0;
		}
	case 0x726F68706174656D:
		switch(wp[1]){
		case 0x7373656E6C616369:return 1;
		default:return 0;
		}
	case 0x726F6870736F6870:
		switch(wp[1]){
		case 0x636968706172676F:return 1;
		case 0x7369736F72646968:return 1;
		case 0x796C746E65637365:return 1;
		default:return 0;
		}
	case 0x726F6874696D6573:
		switch(wp[1]){
		case 0x657261666867756F:return 1;
		default:return 0;
		}
	case 0x726F6874696E726F:
		switch(wp[1]){
		case 0x73756F68636E7968:return 1;
		default:return 0;
		}
	case 0x726F68746F73656D:
		switch(wp[1]){
		case 0x61636568746F6361:return 1;
		default:return 0;
		}
	case 0x726F687475616E75:
		switch(wp[1]){
		case 0x7373656E64657A69:return 1;
		default:return 0;
		}
	case 0x726F697265746564:
		switch(wp[1]){
		case 0x7473696E6F697461:return 1;
		default:return 0;
		}
	case 0x726F6C6168706563:
		switch(wp[1]){
		case 0x6E61696469686361:return 1;
		default:return 0;
		}
	case 0x726F6C676E696176:
		switch(wp[1]){
		case 0x7373656E73756F69:return 1;
		default:return 0;
		}
	case 0x726F6C6863697274:
		switch(wp[1]){
		case 0x656E616874656D6F:return 1;
		default:return 0;
		}
	case 0x726F6C68636F7369:
		switch(wp[1]){
		case 0x6E696C6C7968706F:return 1;
		default:return 0;
		}
	case 0x726F6C6863726570:
		switch(wp[1]){
		case 0x656E656C79687465:return 1;
		default:return 0;
		}
	case 0x726F6C6C69706170:
		switch(wp[1]){
		case 0x736974696E697465:return 1;
		default:return 0;
		}
	case 0x726F6E6F68736964:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x726F706D65746F63:
		switch(wp[1]){
		case 0x796C73756F656E61:return 1;
		default:return 0;
		}
	case 0x726F706D65747865:
		switch(wp[1]){
		case 0x796C73756F656E61:return 1;
		default:return 0;
		}
	case 0x726F706F7263696D:
		switch(wp[1]){
		case 0x6369746972796870:return 1;
		default:return 0;
		}
	case 0x726F706F72706E75:
		switch(wp[1]){
		case 0x656C62616E6F6974:return 1;
		case 0x796C62616E6F6974:return 1;
		case 0x796C64656E6F6974:return 1;
		case 0x796C6C616E6F6974:return 1;
		default:return 0;
		}
	case 0x726F7070616E6F6E:
		switch(wp[1]){
		case 0x656C62616E6F6974:return 1;
		default:return 0;
		}
	case 0x726F7070616F7270:
		switch(wp[1]){
		case 0x746E656D6E6F6974:return 1;
		default:return 0;
		}
	case 0x726F70726F636E69:
		switch(wp[1]){
		case 0x7373656E64657461:return 1;
		default:return 0;
		}
	case 0x726F70736E617274:
		switch(wp[1]){
		case 0x6C616E6F69746174:return 1;
		case 0x7974696C69626174:return 1;
		default:return 0;
		}
	case 0x726F726265726563:
		switch(wp[1]){
		case 0x6E61696469686361:return 1;
		default:return 0;
		}
	case 0x726F727463656C65:
		switch(wp[1]){
		case 0x6576697470656365:return 1;
		case 0x6E6F697463756465:return 1;
		default:return 0;
		}
	case 0x726F736E65636E75:
		switch(wp[1]){
		case 0x7373656E73756F69:return 1;
		default:return 0;
		}
	case 0x726F746568726E75:
		switch(wp[1]){
		case 0x7373656E6C616369:return 1;
		default:return 0;
		}
	case 0x726F77726568746F:
		switch(wp[1]){
		case 0x7373656E696C646C:return 1;
		default:return 0;
		}
	case 0x72706D6F63657270:
		switch(wp[1]){
		case 0x657669736E656865:return 1;
		case 0x6E6F69736E656865:return 1;
		default:return 0;
		}
	case 0x72706D6F636E6F6E:
		switch(wp[1]){
		case 0x6E6F69736E656865:return 1;
		default:return 0;
		}
	case 0x72706D6F6373696D:
		switch(wp[1]){
		case 0x6E6F69736E656865:return 1;
		default:return 0;
		}
	case 0x72706F636F747561:
		switch(wp[1]){
		case 0x73756F676168706F:return 1;
		default:return 0;
		}
	case 0x72706F6475657370:
		switch(wp[1]){
		case 0x73756F726570736F:return 1;
		default:return 0;
		}
	case 0x727070617265766F:
		switch(wp[1]){
		case 0x657669736E656865:return 1;
		case 0x6E6F69736E656865:return 1;
		default:return 0;
		}
	case 0x727265746E756F63:
		switch(wp[1]){
		case 0x64657463656C6665:return 1;
		case 0x676E696E6F6B6365:return 1;
		case 0x6E6F697461696461:return 1;
		default:return 0;
		}
	case 0x7274616E6F726F62:
		switch(wp[1]){
		case 0x657469636C61636F:return 1;
		default:return 0;
		}
	case 0x7274656D61786568:
		switch(wp[1]){
		case 0x726568706172676F:return 1;
		default:return 0;
		}
	case 0x7274656D656C6574:
		switch(wp[1]){
		case 0x636968706172676F:return 1;
		default:return 0;
		}
	case 0x7274656E65706D69:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x7274696E6174656D:
		switch(wp[1]){
		case 0x656E696C696E616F:return 1;
		default:return 0;
		}
	case 0x7274696E6F6E6F6D:
		switch(wp[1]){
		case 0x656E657A6E65626F:return 1;
		default:return 0;
		}
	case 0x72746E6574706573:
		switch(wp[1]){
		case 0x7974696C616E6F69:return 1;
		default:return 0;
		}
	case 0x72746E6F63657270:
		switch(wp[1]){
		case 0x6C6169737265766F:return 1;
		default:return 0;
		}
	case 0x72746E6F636E6F6E:
		switch(wp[1]){
		case 0x6C6169737265766F:return 1;
		case 0x6E6F697463696461:return 1;
		case 0x79726F7463696461:return 1;
		default:return 0;
		}
	case 0x72746F65676F7061:
		switch(wp[1]){
		case 0x796C6C616369706F:return 1;
		default:return 0;
		}
	case 0x72746F6967616C70:
		switch(wp[1]){
		case 0x796C6C616369706F:return 1;
		default:return 0;
		}
	case 0x72746F6D67696874:
		switch(wp[1]){
		case 0x796C6C616369706F:return 1;
		default:return 0;
		}
	case 0x72746F6E6167726F:
		switch(wp[1]){
		case 0x796C6C616369706F:return 1;
		default:return 0;
		}
	case 0x72746F7265746568:
		switch(wp[1]){
		case 0x746E616C70736E61:return 1;
		default:return 0;
		}
	case 0x72746F72706E6F6E:
		switch(wp[1]){
		case 0x7974696C69746361:return 1;
		default:return 0;
		}
	case 0x72746F74616D6F73:
		switch(wp[1]){
		case 0x796C6C616369706F:return 1;
		default:return 0;
		}
	case 0x7274736169746E61:
		switch(wp[1]){
		case 0x6C6163696D6F6E6F:return 1;
		default:return 0;
		}
	case 0x727473616F656874:
		switch(wp[1]){
		case 0x6C616369676F6C6F:return 1;
		default:return 0;
		}
	case 0x7274736E69657270:
		switch(wp[1]){
		case 0x6C616E6F69746375:return 1;
		default:return 0;
		}
	case 0x7274736E696E6F6E:
		switch(wp[1]){
		case 0x6C616E6F69746375:return 1;
		default:return 0;
		}
	case 0x7274736E6F636572:
		switch(wp[1]){
		case 0x6C616E6F69746375:return 1;
		default:return 0;
		}
	case 0x7274736E6F6D6564:
		switch(wp[1]){
		case 0x70696873726F7461:return 1;
		case 0x7373656E656C6261:return 1;
		case 0x7473696E6F697461:return 1;
		default:return 0;
		}
	case 0x7274757069746E61:
		switch(wp[1]){
		case 0x6576697463616665:return 1;
		case 0x6E6F697463616665:return 1;
		default:return 0;
		}
	case 0x7275616F6C797473:
		switch(wp[1]){
		case 0x736972616C756369:return 1;
		default:return 0;
		}
	case 0x7275636F72706E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x7275656E696D6568:
		switch(wp[1]){
		case 0x61696E6568747361:return 1;
		default:return 0;
		}
	case 0x7275666573756F68:
		switch(wp[1]){
		case 0x73676E696873696E:return 1;
		default:return 0;
		}
	case 0x72756769666E6F63:
		switch(wp[1]){
		case 0x6D73696E6F697461:return 1;
		case 0x7473696E6F697461:return 1;
		default:return 0;
		}
	case 0x72757361656D6D69:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x72757361656D6E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x7275736E656D6D69:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x7275747265706D69:
		switch(wp[1]){
		case 0x7974696C69626162:return 1;
		default:return 0;
		}
	case 0x727962616C6F7970:
		switch(wp[1]){
		case 0x7369746968746E69:return 1;
		default:return 0;
		}
	case 0x7279687469726570:
		switch(wp[1]){
		case 0x7369746964696F65:return 1;
		default:return 0;
		}
	case 0x72797475626F7369:
		switch(wp[1]){
		case 0x6564796865646C61:return 1;
		default:return 0;
		}
	case 0x7361626D61657270:
		switch(wp[1]){
		case 0x6C6169726F646173:return 1;
		default:return 0;
		}
	case 0x7361656665646E69:
		switch(wp[1]){
		case 0x7373656E656C6269:return 1;
		default:return 0;
		}
	case 0x7361656874726F6E:
		switch(wp[1]){
		case 0x74736F6D6E726574:return 1;
		default:return 0;
		}
	case 0x7361656874756F73:
		switch(wp[1]){
		case 0x74736F6D6E726574:return 1;
		default:return 0;
		}
	case 0x7361657070616E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x7361657274627573:
		switch(wp[1]){
		case 0x7069687372657275:return 1;
		default:return 0;
		}
	case 0x7361666172746C75:
		switch(wp[1]){
		case 0x656C62616E6F6968:return 1;
		default:return 0;
		}
	case 0x7361676F746F6870:
		switch(wp[1]){
		case 0x65706F63736F7274:return 1;
		default:return 0;
		}
	case 0x73616C626F747963:
		switch(wp[1]){
		case 0x73756F74616D6574:return 1;
		default:return 0;
		}
	case 0x73616F6475657370:
		switch(wp[1]){
		case 0x746E65676E697274:return 1;
		default:return 0;
		}
	case 0x7361706D6F636E75:
		switch(wp[1]){
		case 0x646574616E6F6973:return 1;
		default:return 0;
		}
	case 0x7361767265707968:
		switch(wp[1]){
		case 0x79746972616C7563:return 1;
		default:return 0;
		}
	case 0x7361796974617270:
		switch(wp[1]){
		case 0x6164617074756D61:return 1;
		default:return 0;
		}
	case 0x736275736E617274:
		switch(wp[1]){
		case 0x65746169746E6174:return 1;
		default:return 0;
		}
	case 0x736275736F6E6F6D:
		switch(wp[1]){
		case 0x6E6F697475746974:return 1;
		default:return 0;
		}
	case 0x736275737265766F:
		switch(wp[1]){
		case 0x6E6F697470697263:return 1;
		default:return 0;
		}
	case 0x7365617265707573:
		switch(wp[1]){
		case 0x6C61636974656874:return 1;
		default:return 0;
		}
	case 0x7365636375736E75:
		switch(wp[1]){
		case 0x7373656E65766973:return 1;
		case 0x7373656E6C756673:return 1;
		default:return 0;
		}
	case 0x7365637265746E69:
		switch(wp[1]){
		case 0x746E656D6E6F6973:return 1;
		default:return 0;
		}
	case 0x7365646F72707563:
		switch(wp[1]){
		case 0x6574697A696F6C63:return 1;
		default:return 0;
		}
	case 0x7365647265746E69:
		switch(wp[1]){
		case 0x6576697463757274:return 1;
		default:return 0;
		}
	case 0x7365666F72706E75:
		switch(wp[1]){
		case 0x796C6C616E6F6973:return 1;
		default:return 0;
		}
	case 0x7365676775736E75:
		switch(wp[1]){
		case 0x7373656E65766974:return 1;
		default:return 0;
		}
	case 0x7365687473656E61:
		switch(wp[1]){
		case 0x747369676F6C6F69:return 1;
		default:return 0;
		}
	case 0x73656C6363656E75:
		switch(wp[1]){
		case 0x6C61636974736169:return 1;
		default:return 0;
		}
	case 0x73656D7265746E69:
		switch(wp[1]){
		case 0x6C61697265746E65:return 1;
		default:return 0;
		}
	case 0x73656D7563726963:
		switch(wp[1]){
		case 0x6C6165676168706F:return 1;
		default:return 0;
		}
	case 0x73656F6172707573:
		switch(wp[1]){
		case 0x6C6165676168706F:return 1;
		default:return 0;
		}
	case 0x73656F7274736167:
		switch(wp[1]){
		case 0x6C6165676168706F:return 1;
		default:return 0;
		}
	case 0x736572616D736564:
		switch(wp[1]){
		case 0x73756F6563616974:return 1;
		default:return 0;
		}
	case 0x7365726465727269:
		switch(wp[1]){
		case 0x7974696C69626973:return 1;
		default:return 0;
		}
	case 0x7365726767616E75:
		switch(wp[1]){
		case 0x7373656E65766973:return 1;
		default:return 0;
		}
	case 0x7365727065726E75:
		switch(wp[1]){
		case 0x6576697461746E65:return 1;
		case 0x6E6F697461746E65:return 1;
		default:return 0;
		}
	case 0x7365727065727269:
		switch(wp[1]){
		case 0x7974696C69626973:return 1;
		default:return 0;
		}
	case 0x73657270666C6573:
		switch(wp[1]){
		case 0x79726F7461767265:return 1;
		default:return 0;
		}
	case 0x7365727068637261:
		switch(wp[1]){
		case 0x6574617265747962:return 1;
		default:return 0;
		}
	case 0x73657270696D6573:
		switch(wp[1]){
		case 0x6E6F697461767265:return 1;
		default:return 0;
		}
	case 0x736572706D696E75:
		switch(wp[1]){
		case 0x656C62616E6F6973:return 1;
		case 0x7373656E65766973:return 1;
		case 0x7974696C69626973:return 1;
		default:return 0;
		}
	case 0x73657270706F6E75:
		switch(wp[1]){
		case 0x7373656E65766973:return 1;
		default:return 0;
		}
	case 0x736572707265766F:
		switch(wp[1]){
		case 0x73756F7574706D75:return 1;
		default:return 0;
		}
	case 0x7365727078656E69:
		switch(wp[1]){
		case 0x7373656E65766973:return 1;
		case 0x7974696C69626973:return 1;
		default:return 0;
		}
	case 0x7365727078656E75:
		switch(wp[1]){
		case 0x7373656E65766973:return 1;
		default:return 0;
		}
	case 0x7365727265707573:
		switch(wp[1]){
		case 0x656C626174636570:return 1;
		case 0x656C6269736E6F70:return 1;
		case 0x6E6F697463697274:return 1;
		default:return 0;
		}
	case 0x7365727265746E69:
		switch(wp[1]){
		case 0x656C6269736E6F70:return 1;
		default:return 0;
		}
	case 0x736572726F636E69:
		switch(wp[1]){
		case 0x65636E65646E6F70:return 1;
		case 0x79636E65646E6F70:return 1;
		default:return 0;
		}
	case 0x736572726F636E75:
		switch(wp[1]){
		case 0x79636E65646E6F70:return 1;
		default:return 0;
		}
	case 0x7365727469766E75:
		switch(wp[1]){
		case 0x7974696C69626963:return 1;
		default:return 0;
		}
	case 0x7365727475706D69:
		switch(wp[1]){
		case 0x7974696C69626963:return 1;
		default:return 0;
		}
	case 0x7365746E6F636E69:
		switch(wp[1]){
		case 0x7974696C69626174:return 1;
		default:return 0;
		}
	case 0x7365766E69657270:
		switch(wp[1]){
		case 0x6E6F697461676974:return 1;
		default:return 0;
		}
	case 0x7365776874756F73:
		switch(wp[1]){
		case 0x74736F6D6E726574:return 1;
		default:return 0;
		}
	case 0x7369646968706D61:
		switch(wp[1]){
		case 0x6E61726F68706F63:return 1;
		default:return 0;
		}
	case 0x7369646E69657270:
		switch(wp[1]){
		case 0x6E6F697469736F70:return 1;
		default:return 0;
		}
	case 0x7369647265646E75:
		switch(wp[1]){
		case 0x6E6F6974636E6974:return 1;
		case 0x726F747562697274:return 1;
		default:return 0;
		}
	case 0x7369647265707968:
		switch(wp[1]){
		case 0x656C62616C6C7973:return 1;
		default:return 0;
		}
	case 0x7369647265746E69:
		switch(wp[1]){
		case 0x68736975676E6974:return 1;
		default:return 0;
		}
	case 0x736968706F736564:
		switch(wp[1]){
		case 0x6E6F697461636974:return 1;
		default:return 0;
		}
	case 0x736968706F736E75:
		switch(wp[1]){
		case 0x6E6F697461636974:return 1;
		default:return 0;
		}
	case 0x73696C6261747365:
		switch(wp[1]){
		case 0x6D7369746E656D68:return 1;
		default:return 0;
		}
	case 0x73696D6275736E75:
		switch(wp[1]){
		case 0x7373656E65766973:return 1;
		default:return 0;
		}
	case 0x73696D6568627573:
		switch(wp[1]){
		case 0x6C61636972656870:return 1;
		default:return 0;
		}
	case 0x73696D6D6F636E69:
		switch(wp[1]){
		case 0x7974696C69626963:return 1;
		default:return 0;
		}
	case 0x73696D6F72746E69:
		switch(wp[1]){
		case 0x7974696C69626973:return 1;
		default:return 0;
		}
	case 0x73696D736E617274:
		switch(wp[1]){
		case 0x7373656E65766973:return 1;
		case 0x7974696C69626973:return 1;
		default:return 0;
		}
	case 0x73696E616F6D6F68:
		switch(wp[1]){
		case 0x6564796865646C61:return 1;
		default:return 0;
		}
	case 0x73696F6572657473:
		switch(wp[1]){
		case 0x6C61636972656D6F:return 1;
		default:return 0;
		}
	case 0x73696F6E6F726863:
		switch(wp[1]){
		case 0x6C616D726568746F:return 1;
		default:return 0;
		}
	case 0x73696F7265746E65:
		switch(wp[1]){
		case 0x656C65636F696863:return 1;
		default:return 0;
		}
	case 0x7369736E6F636E69:
		switch(wp[1]){
		case 0x7373656E746E6574:return 1;
		default:return 0;
		}
	case 0x7369746173736964:
		switch(wp[1]){
		case 0x7373656E64656966:return 1;
		default:return 0;
		}
	case 0x736C79786F646E69:
		switch(wp[1]){
		case 0x6369727568706C75:return 1;
		default:return 0;
		}
	case 0x736E617274657270:
		switch(wp[1]){
		case 0x6E6F697470697263:return 1;
		default:return 0;
		}
	case 0x736E6172746E6F6E:
		switch(wp[1]){
		case 0x6E6F697373657267:return 1;
		case 0x6E6F697461636F6C:return 1;
		case 0x6E6F697469736F70:return 1;
		default:return 0;
		}
	case 0x736E61727473696D:
		switch(wp[1]){
		case 0x6E6F697470697263:return 1;
		default:return 0;
		}
	case 0x736E656665646E69:
		switch(wp[1]){
		case 0x7373656E656C6269:return 1;
		default:return 0;
		}
	case 0x736E657369746E61:
		switch(wp[1]){
		case 0x7373656E73756F75:return 1;
		default:return 0;
		}
	case 0x736E6573796C6F70:
		switch(wp[1]){
		case 0x7373656E73756F75:return 1;
		default:return 0;
		}
	case 0x736E6965726E6F6E:
		switch(wp[1]){
		case 0x746E656D65746174:return 1;
		default:return 0;
		}
	case 0x736E697265707573:
		switch(wp[1]){
		case 0x6E6F697470697263:return 1;
		case 0x6E6F697475746974:return 1;
		default:return 0;
		}
	case 0x736E6F63696D6573:
		switch(wp[1]){
		case 0x6576697461767265:return 1;
		default:return 0;
		}
	case 0x736E6F6369746E61:
		switch(wp[1]){
		case 0x6576697470697263:return 1;
		case 0x6E6F697470697263:return 1;
		default:return 0;
		}
	case 0x736E6F636F736176:
		switch(wp[1]){
		case 0x6576697463697274:return 1;
		case 0x676E697463697274:return 1;
		case 0x6E6F697463697274:return 1;
		default:return 0;
		}
	case 0x736E6F637265766F:
		switch(wp[1]){
		case 0x6576697461767265:return 1;
		case 0x6D73697461767265:return 1;
		default:return 0;
		}
	case 0x736E6F6D65646E75:
		switch(wp[1]){
		case 0x656C626174617274:return 1;
		default:return 0;
		}
	case 0x736F636F7263696D:
		switch(wp[1]){
		case 0x7968706172676F6D:return 1;
		default:return 0;
		}
	case 0x736F656168637261:
		switch(wp[1]){
		case 0x73756F74616D6F74:return 1;
		default:return 0;
		}
	case 0x736F656E69726570:
		switch(wp[1]){
		case 0x7369736568746E79:return 1;
		default:return 0;
		}
	case 0x736F686372616E61:
		switch(wp[1]){
		case 0x7473696C6169636F:return 1;
		default:return 0;
		}
	case 0x736F6874616E6761:
		switch(wp[1]){
		case 0x73756F74616D6F74:return 1;
		default:return 0;
		}
	case 0x736F697265747261:
		switch(wp[1]){
		case 0x6369746F72656C63:return 1;
		case 0x7369736F72656C63:return 1;
		default:return 0;
		}
	case 0x736F6C706964626F:
		switch(wp[1]){
		case 0x73756F6E6F6D6574:return 1;
		default:return 0;
		}
	case 0x736F6C756E697073:
		switch(wp[1]){
		case 0x657461696C69636F:return 1;
		case 0x657461727265736F:return 1;
		case 0x657461746E65646F:return 1;
		default:return 0;
		}
	case 0x736F6C7974636164:
		switch(wp[1]){
		case 0x7369737968706D79:return 1;
		default:return 0;
		}
	case 0x736F6E61706D7974:
		switch(wp[1]){
		case 0x6C61696465706174:return 1;
		case 0x6C61736F6D617571:return 1;
		default:return 0;
		}
	case 0x736F6E6170797274:
		switch(wp[1]){
		case 0x6C61646963616D6F:return 1;
		case 0x7369736F74616D6F:return 1;
		default:return 0;
		}
	case 0x736F6E676F636E69:
		switch(wp[1]){
		case 0x7974696C69626963:return 1;
		default:return 0;
		}
	case 0x736F6E676F636E75:
		switch(wp[1]){
		case 0x7974696C69626963:return 1;
		default:return 0;
		}
	case 0x736F6E6963637573:
		switch(wp[1]){
		case 0x6369727568706C75:return 1;
		default:return 0;
		}
	case 0x736F6E6963726163:
		switch(wp[1]){
		case 0x6174616D6F637261:return 1;
		default:return 0;
		}
	case 0x736F6E6F68706973:
		switch(wp[1]){
		case 0x73756F74616D6F74:return 1;
		default:return 0;
		}
	case 0x736F6E6F6D726570:
		switch(wp[1]){
		case 0x6369727568706C75:return 1;
		default:return 0;
		}
	case 0x736F6E6F70706968:
		switch(wp[1]){
		case 0x6C616369676F6C6F:return 1;
		default:return 0;
		}
	case 0x736F706572706E75:
		switch(wp[1]){
		case 0x796C646573736573:return 1;
		default:return 0;
		}
	case 0x736F706D6F636E69:
		switch(wp[1]){
		case 0x7974696C69626973:return 1;
		default:return 0;
		}
	case 0x736F70736E617274:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x736F726265726563:
		switch(wp[1]){
		case 0x6C6169726F736E65:return 1;
		case 0x7369736F72656C63:return 1;
		default:return 0;
		}
	case 0x736F72636964756C:
		switch(wp[1]){
		case 0x636974656E656C70:return 1;
		default:return 0;
		}
	case 0x736F726479686564:
		switch(wp[1]){
		case 0x656E696574726170:return 1;
		default:return 0;
		}
	case 0x736F726574657275:
		switch(wp[1]){
		case 0x7369736F6E676574:return 1;
		default:return 0;
		}
	case 0x736F726574756564:
		switch(wp[1]){
		case 0x73756F74616D6F74:return 1;
		default:return 0;
		}
	case 0x736F726874797265:
		switch(wp[1]){
		case 0x656C6968706F6E69:return 1;
		default:return 0;
		}
	case 0x736F727463656C65:
		switch(wp[1]){
		case 0x6369746568746E79:return 1;
		case 0x6E6F697463697274:return 1;
		case 0x7369736568746E79:return 1;
		default:return 0;
		}
	case 0x736F736F7274696E:
		switch(wp[1]){
		case 0x6369727568706C75:return 1;
		default:return 0;
		}
	case 0x736F74616D726564:
		switch(wp[1]){
		case 0x7369736F72656C63:return 1;
		default:return 0;
		}
	case 0x736F7461746E6564:
		switch(wp[1]){
		case 0x73756F6563617465:return 1;
		default:return 0;
		}
	case 0x736F746174736168:
		switch(wp[1]){
		case 0x6574617474696761:return 1;
		default:return 0;
		}
	case 0x736F746569726170:
		switch(wp[1]){
		case 0x6C61736F6D617571:return 1;
		default:return 0;
		}
	case 0x736F74656E67616D:
		switch(wp[1]){
		case 0x6E6F697463697274:return 1;
		default:return 0;
		}
	case 0x736F74756D736962:
		switch(wp[1]){
		case 0x6574697265616870:return 1;
		default:return 0;
		}
	case 0x736F7968706D7973:
		switch(wp[1]){
		case 0x73756F6E6F6D6574:return 1;
		default:return 0;
		}
	case 0x73706F636964656D:
		switch(wp[1]){
		case 0x79676F6C6F686379:return 1;
		default:return 0;
		}
	case 0x73706F65616C6170:
		switch(wp[1]){
		case 0x79676F6C6F686379:return 1;
		default:return 0;
		}
	case 0x73706F6973796870:
		switch(wp[1]){
		case 0x79676F6C6F686379:return 1;
		default:return 0;
		}
	case 0x73706F6E68636574:
		switch(wp[1]){
		case 0x79676F6C6F686379:return 1;
		default:return 0;
		}
	case 0x737265646E756E69:
		switch(wp[1]){
		case 0x656C6261646E6174:return 1;
		default:return 0;
		}
	case 0x737265646E756E75:
		switch(wp[1]){
		case 0x656C6261646E6174:return 1;
		case 0x796C6261646E6174:return 1;
		default:return 0;
		}
	case 0x7372656874616566:
		switch(wp[1]){
		case 0x676E696863746974:return 1;
		default:return 0;
		}
	case 0x737265706F6E6F6D:
		switch(wp[1]){
		case 0x6369727568706C75:return 1;
		default:return 0;
		}
	case 0x737265746E756F63:
		switch(wp[1]){
		case 0x6465706F6C6C6163:return 1;
		case 0x65727574616E6769:return 1;
		case 0x6574616C756D6974:return 1;
		case 0x6D65676174617274:return 1;
		case 0x6E6F697463656C65:return 1;
		case 0x746E656D65746174:return 1;
		default:return 0;
		}
	case 0x7372657665727269:
		switch(wp[1]){
		case 0x7373656E656C6269:return 1;
		default:return 0;
		}
	case 0x73736169636F6E61:
		switch(wp[1]){
		case 0x6E6F69746169636F:return 1;
		default:return 0;
		}
	case 0x737361707265766F:
		switch(wp[1]){
		case 0x796C6574616E6F69:return 1;
		default:return 0;
		}
	case 0x7373617265746E69:
		switch(wp[1]){
		case 0x6E6F69746169636F:return 1;
		default:return 0;
		}
	case 0x7373656172747865:
		switch(wp[1]){
		case 0x796C6C6169746E65:return 1;
		default:return 0;
		}
	case 0x7373656363616E69:
		switch(wp[1]){
		case 0x7373656E656C6269:return 1;
		default:return 0;
		}
	case 0x7373656363616E75:
		switch(wp[1]){
		case 0x7373656E656C6269:return 1;
		default:return 0;
		}
	case 0x7373656E69737562:
		switch(wp[1]){
		case 0x7373656E656B696C:return 1;
		default:return 0;
		}
	case 0x7373657265707573:
		switch(wp[1]){
		case 0x796C6C6169746E65:return 1;
		default:return 0;
		}
	case 0x73736572676E6F63:
		switch(wp[1]){
		case 0x7473696C616E6F69:return 1;
		default:return 0;
		}
	case 0x73736572706D6F63:
		switch(wp[1]){
		case 0x7373656E656C6269:return 1;
		default:return 0;
		}
	case 0x7373657373616E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x737365746E697571:
		switch(wp[1]){
		case 0x796C6C6169746E65:return 1;
		default:return 0;
		}
	case 0x7373696D65727269:
		switch(wp[1]){
		case 0x7373656E656C6269:return 1;
		default:return 0;
		}
	case 0x7375616878656E69:
		switch(wp[1]){
		case 0x7974696C69626974:return 1;
		default:return 0;
		}
	case 0x7375616878656E75:
		switch(wp[1]){
		case 0x7373656E65766974:return 1;
		default:return 0;
		}
	case 0x7375626D6F636E69:
		switch(wp[1]){
		case 0x7974696C69626974:return 1;
		default:return 0;
		}
	case 0x7375637265706572:
		switch(wp[1]){
		case 0x7373656E65766973:return 1;
		default:return 0;
		}
	case 0x73756D6F7275656E:
		switch(wp[1]){
		case 0x65727574616C7563:return 1;
		default:return 0;
		}
	case 0x73757365726E6F6E:
		switch(wp[1]){
		case 0x6E6F697461746963:return 1;
		default:return 0;
		}
	case 0x7375737265707968:
		switch(wp[1]){
		case 0x656C626974706563:return 1;
		default:return 0;
		}
	case 0x737963656C6F6863:
		switch(wp[1]){
		case 0x6169736174636574:return 1;
		case 0x7968706172676F74:return 1;
		default:return 0;
		}
	case 0x7379636F68637261:
		switch(wp[1]){
		case 0x786E697279736F74:return 1;
		default:return 0;
		}
	case 0x7379636F6E656461:
		switch(wp[1]){
		case 0x73756F74616D6F74:return 1;
		default:return 0;
		}
	case 0x7379686F696C6563:
		switch(wp[1]){
		case 0x796D6F746F726574:return 1;
		default:return 0;
		}
	case 0x7379686F706C6F63:
		switch(wp[1]){
		case 0x796D6F746F726574:return 1;
		default:return 0;
		}
	case 0x737968706174656D:
		switch(wp[1]){
		case 0x6D73696E61696369:return 1;
		default:return 0;
		}
	case 0x737968706F707968:
		switch(wp[1]){
		case 0x6369766972706F65:return 1;
		case 0x657A696D6F746365:return 1;
		default:return 0;
		}
	case 0x7461626F73707968:
		switch(wp[1]){
		case 0x63697274656D7968:return 1;
		default:return 0;
		}
	case 0x7461637265707573:
		switch(wp[1]){
		case 0x6568706F72747361:return 1;
		default:return 0;
		}
	case 0x7461637564656F63:
		switch(wp[1]){
		case 0x657A696C616E6F69:return 1;
		case 0x6D73696C616E6F69:return 1;
		default:return 0;
		}
	case 0x74616572636E6170:
		switch(wp[1]){
		case 0x616967616872726F:return 1;
		case 0x657A696D6F746365:return 1;
		case 0x7369736F636C6568:return 1;
		default:return 0;
		}
	case 0x746169636F737361:
		switch(wp[1]){
		case 0x63697473696E6F69:return 1;
		case 0x6D73696C616E6F69:return 1;
		case 0x7473696C616E6F69:return 1;
		default:return 0;
		}
	case 0x74616C7265746E69:
		switch(wp[1]){
		case 0x6C616E6964757469:return 1;
		default:return 0;
		}
	case 0x74616C736E617274:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x74616D656C626D65:
		switch(wp[1]){
		case 0x7373656E6C616369:return 1;
		default:return 0;
		}
	case 0x74616D67656C6870:
		switch(wp[1]){
		case 0x7373656E6C616369:return 1;
		default:return 0;
		}
	case 0x74616D6D696E6F6E:
		switch(wp[1]){
		case 0x7974696C61697265:return 1;
		default:return 0;
		}
	case 0x74616D6D6F736162:
		switch(wp[1]){
		case 0x73756F726F68706F:return 1;
		default:return 0;
		}
	case 0x74616D6F72746169:
		switch(wp[1]){
		case 0x73636974616D6568:return 1;
		default:return 0;
		}
	case 0x74616D7369686373:
		switch(wp[1]){
		case 0x7373656E6C616369:return 1;
		default:return 0;
		}
	case 0x74616D736E617274:
		switch(wp[1]){
		case 0x6E6F697461697265:return 1;
		default:return 0;
		}
	case 0x74616E6172746C75:
		switch(wp[1]){
		case 0x6D73696C616E6F69:return 1;
		case 0x7473696C616E6F69:return 1;
		default:return 0;
		}
	case 0x74616E6962727574:
		switch(wp[1]){
		case 0x65736F626F6C676F:return 1;
		case 0x657661636E6F636F:return 1;
		default:return 0;
		}
	case 0x74616E6967616D69:
		switch(wp[1]){
		case 0x6D73696C616E6F69:return 1;
		default:return 0;
		}
	case 0x74616E6974636570:
		switch(wp[1]){
		case 0x6574616E6E69706F:return 1;
		default:return 0;
		}
	case 0x74616E6E69706962:
		switch(wp[1]){
		case 0x6574697472617069:return 1;
		default:return 0;
		}
	case 0x74616E7265707573:
		switch(wp[1]){
		case 0x6D73696C616E6F69:return 1;
		case 0x7373656E6C617275:return 1;
		default:return 0;
		}
	case 0x74616E7265746E69:
		switch(wp[1]){
		case 0x657A696C616E6F69:return 1;
		case 0x6D73696C616E6F69:return 1;
		case 0x7473696C616E6F69:return 1;
		case 0x7974696C616E6F69:return 1;
		default:return 0;
		}
	case 0x7461706172747865:
		switch(wp[1]){
		case 0x6C61686372616972:return 1;
		default:return 0;
		}
	case 0x7461706D6F636E69:
		switch(wp[1]){
		case 0x7373656E656C6269:return 1;
		default:return 0;
		}
	case 0x7461706D79736E75:
		switch(wp[1]){
		case 0x796C676E697A6968:return 1;
		default:return 0;
		}
	case 0x7461706F6D736564:
		switch(wp[1]){
		case 0x747369676F6C6F68:return 1;
		default:return 0;
		}
	case 0x7461706F7263696D:
		switch(wp[1]){
		case 0x747369676F6C6F68:return 1;
		default:return 0;
		}
	case 0x7461706F7275656E:
		switch(wp[1]){
		case 0x747369676F6C6F68:return 1;
		default:return 0;
		}
	case 0x7461706F746F7270:
		switch(wp[1]){
		case 0x6C61686372616972:return 1;
		default:return 0;
		}
	case 0x7461706F74736968:
		switch(wp[1]){
		case 0x747369676F6C6F68:return 1;
		default:return 0;
		}
	case 0x7461706F74796870:
		switch(wp[1]){
		case 0x747369676F6C6F68:return 1;
		default:return 0;
		}
	case 0x74617073646C6566:
		switch(wp[1]){
		case 0x6E6F6974617A6968:return 1;
		default:return 0;
		}
	case 0x7461726172707573:
		switch(wp[1]){
		case 0x6D73696C616E6F69:return 1;
		case 0x7974696C616E6F69:return 1;
		default:return 0;
		}
	case 0x7461726970736E69:
		switch(wp[1]){
		case 0x6D73696C616E6F69:return 1;
		default:return 0;
		}
	case 0x7461726F66726570:
		switch(wp[1]){
		case 0x666F6F72706E6F69:return 1;
		default:return 0;
		}
	case 0x7461727473627573:
		switch(wp[1]){
		case 0x636972656870736F:return 1;
		default:return 0;
		}
	case 0x7461746E6574736F:
		switch(wp[1]){
		case 0x7373656E73756F69:return 1;
		default:return 0;
		}
	case 0x7461747570736964:
		switch(wp[1]){
		case 0x7373656E73756F69:return 1;
		default:return 0;
		}
	case 0x746176726573626F:
		switch(wp[1]){
		case 0x6D73696C616E6F69:return 1;
		default:return 0;
		}
	case 0x74627573696D6573:
		switch(wp[1]){
		case 0x6E61656E61727265:return 1;
		default:return 0;
		}
	case 0x746361667265766F:
		switch(wp[1]){
		case 0x7373656E73756F69:return 1;
		default:return 0;
		}
	case 0x74636172746E6F63:
		switch(wp[1]){
		case 0x7373656E656C6269:return 1;
		default:return 0;
		}
	case 0x7463656666616E75:
		switch(wp[1]){
		case 0x796C6574616E6F69:return 1;
		default:return 0;
		}
	case 0x746365666E696E75:
		switch(wp[1]){
		case 0x7373656E73756F69:return 1;
		default:return 0;
		}
	case 0x7463656C656E6F6E:
		switch(wp[1]){
		case 0x6E6F697475636F72:return 1;
		default:return 0;
		}
	case 0x7463656C656F7270:
		switch(wp[1]){
		case 0x6E6F697475636F72:return 1;
		default:return 0;
		}
	case 0x74636E7566726570:
		switch(wp[1]){
		case 0x796C73756F69726F:return 1;
		default:return 0;
		}
	case 0x7463757274736564:
		switch(wp[1]){
		case 0x7373656E656C6269:return 1;
		default:return 0;
		}
	case 0x746563616C6C6167:
		switch(wp[1]){
		case 0x656E6F6E6568706F:return 1;
		default:return 0;
		}
	case 0x7465647265707968:
		switch(wp[1]){
		case 0x746E616E696D7265:return 1;
		default:return 0;
		}
	case 0x7465676F6E6F7061:
		switch(wp[1]){
		case 0x73756F6563616E6F:return 1;
		default:return 0;
		}
	case 0x74656B6F6E6E616D:
		switch(wp[1]){
		case 0x65736F747065686F:return 1;
		default:return 0;
		}
	case 0x74656C617A6E6562:
		switch(wp[1]){
		case 0x656E696D616C7968:return 1;
		default:return 0;
		}
	case 0x74656D6964736962:
		switch(wp[1]){
		case 0x6F6E696D616C7968:return 1;
		default:return 0;
		}
	case 0x74656D6F656C6170:
		switch(wp[1]){
		case 0x79676F6C6F726F65:return 1;
		default:return 0;
		}
	case 0x74656D6F72647968:
		switch(wp[1]){
		case 0x79676F6C6F726F65:return 1;
		default:return 0;
		}
	case 0x74656D6F72747361:
		switch(wp[1]){
		case 0x79676F6C6F726F65:return 1;
		default:return 0;
		}
	case 0x74656D7265707968:
		switch(wp[1]){
		case 0x63696870726F6D61:return 1;
		default:return 0;
		}
	case 0x74656D736E617274:
		switch(wp[1]){
		case 0x6E6F6974616C7968:return 1;
		default:return 0;
		}
	case 0x74656F65616C6170:
		switch(wp[1]){
		case 0x6369676F6C6F6E68:return 1;
		default:return 0;
		}
	case 0x7465706F7263696D:
		switch(wp[1]){
		case 0x747369676F6C6F72:return 1;
		case 0x7968706172676F72:return 1;
		default:return 0;
		}
	case 0x7465706F74796373:
		switch(wp[1]){
		case 0x73756F6563616C61:return 1;
		default:return 0;
		}
	case 0x7465707265646E75:
		switch(wp[1]){
		case 0x646574616F636974:return 1;
		default:return 0;
		}
	case 0x74657469736F6369:
		switch(wp[1]){
		case 0x6E6F726465686172:return 1;
		default:return 0;
		}
	case 0x7465747265707968:
		switch(wp[1]){
		case 0x6E6F726465686172:return 1;
		default:return 0;
		}
	case 0x74686369656C6170:
		switch(wp[1]){
		case 0x6369676F6C6F7968:return 1;
		default:return 0;
		}
	case 0x7468676961727473:
		switch(wp[1]){
		case 0x7364726177726F66:return 1;
		default:return 0;
		}
	case 0x7468676972657270:
		switch(wp[1]){
		case 0x7373656E73756F65:return 1;
		default:return 0;
		}
	case 0x7468676972666E75:
		switch(wp[1]){
		case 0x7373656E64656E65:return 1;
		default:return 0;
		}
	case 0x7468677561646E75:
		switch(wp[1]){
		case 0x7373656E696C7265:return 1;
		default:return 0;
		}
	case 0x746870616E79786F:
		switch(wp[1]){
		case 0x656E6F6E6975716F:return 1;
		default:return 0;
		}
	case 0x7468706F69726570:
		switch(wp[1]){
		case 0x736974696D6C6168:return 1;
		default:return 0;
		}
	case 0x7468706F7A6E6562:
		switch(wp[1]){
		case 0x656E697A616C6168:return 1;
		default:return 0;
		}
	case 0x7469637265746E69:
		switch(wp[1]){
		case 0x706968736E657A69:return 1;
		default:return 0;
		}
	case 0x746964656D657270:
		switch(wp[1]){
		case 0x7373656E64657461:return 1;
		default:return 0;
		}
	case 0x7469646572636E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x7469646E6F636E75:
		switch(wp[1]){
		case 0x796C6574616E6F69:return 1;
		case 0x7974696C616E6F69:return 1;
		default:return 0;
		}
	case 0x7469666F72706E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x74696C65676E6F63:
		switch(wp[1]){
		case 0x6E6F697461627275:return 1;
		default:return 0;
		}
	case 0x74696C656C6F6863:
		switch(wp[1]){
		case 0x7973706972746F68:return 1;
		default:return 0;
		}
	case 0x74696C6F63636F63:
		switch(wp[1]){
		case 0x6469726F68706F68:return 1;
		default:return 0;
		}
	case 0x74696C6F746F6870:
		switch(wp[1]){
		case 0x7968706172676F68:return 1;
		default:return 0;
		}
	case 0x74696C6F74796870:
		switch(wp[1]){
		case 0x747369676F6C6F68:return 1;
		default:return 0;
		}
	case 0x74696E7265707968:
		switch(wp[1]){
		case 0x73756F6E65676F72:return 1;
		default:return 0;
		}
	case 0x7469706963657270:
		switch(wp[1]){
		case 0x63696E65676F6E69:return 1;
		default:return 0;
		}
	case 0x7469706F72706E75:
		switch(wp[1]){
		case 0x7373656E73756F69:return 1;
		default:return 0;
		}
	case 0x7469707265707968:
		switch(wp[1]){
		case 0x6D73697261746975:return 1;
		default:return 0;
		}
	case 0x746970736F686E69:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x746970736F686E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x7469726168636E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x746972637265766F:
		switch(wp[1]){
		case 0x7373656E6C616369:return 1;
		default:return 0;
		}
	case 0x7469726F68747561:
		switch(wp[1]){
		case 0x6D73696E61697261:return 1;
		default:return 0;
		}
	case 0x7469727265746E65:
		switch(wp[1]){
		case 0x7974696C6169726F:return 1;
		default:return 0;
		}
	case 0x7469727265747865:
		switch(wp[1]){
		case 0x657A696C6169726F:return 1;
		case 0x7974696C6169726F:return 1;
		default:return 0;
		}
	case 0x7469736F70707573:
		switch(wp[1]){
		case 0x796C73756F697469:return 1;
		default:return 0;
		}
	case 0x746973736563656E:
		switch(wp[1]){
		case 0x6D73696E61697261:return 1;
		default:return 0;
		}
	case 0x7469746E65766461:
		switch(wp[1]){
		case 0x7373656E73756F69:return 1;
		default:return 0;
		}
	case 0x7469767265707968:
		switch(wp[1]){
		case 0x7369736F6E696D61:return 1;
		default:return 0;
		}
	case 0x746E61686372656D:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x746E6168706C7573:
		switch(wp[1]){
		case 0x73756F696E6F6D69:return 1;
		default:return 0;
		}
	case 0x746E616C616F7369:
		switch(wp[1]){
		case 0x656E6F7463616C6F:return 1;
		default:return 0;
		}
	case 0x746E616D6F726E75:
		switch(wp[1]){
		case 0x7373656E6C616369:return 1;
		default:return 0;
		}
	case 0x746E616E65746E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x746E617473627573:
		switch(wp[1]){
		case 0x7974696C69626169:return 1;
		default:return 0;
		}
	case 0x746E656469736572:
		switch(wp[1]){
		case 0x7069687379726169:return 1;
		default:return 0;
		}
	case 0x746E656963736E75:
		switch(wp[1]){
		case 0x796C6C6163696669:return 1;
		default:return 0;
		}
	case 0x746E6574696E6570:
		switch(wp[1]){
		case 0x7069687379726169:return 1;
		default:return 0;
		}
	case 0x746E65746E696E75:
		switch(wp[1]){
		case 0x7974696C616E6F69:return 1;
		default:return 0;
		}
	case 0x746E657473697865:
		switch(wp[1]){
		case 0x63697473696C6169:return 1;
		default:return 0;
		}
	case 0x746E6574736F6E75:
		switch(wp[1]){
		case 0x796C73756F697461:return 1;
		default:return 0;
		}
	case 0x746E65766E696E75:
		switch(wp[1]){
		case 0x7373656E656C6269:return 1;
		default:return 0;
		}
	case 0x746E696172707573:
		switch(wp[1]){
		case 0x6C6173726F647265:return 1;
		default:return 0;
		}
	case 0x746E696175716361:
		switch(wp[1]){
		case 0x7069687365636E61:return 1;
		default:return 0;
		}
	case 0x746E696E6F6E6F63:
		switch(wp[1]){
		case 0x746E6567696C6C65:return 1;
		default:return 0;
		}
	case 0x746E696F73726F64:
		switch(wp[1]){
		case 0x6C6174736F637265:return 1;
		default:return 0;
		}
	case 0x746E697265707573:
		switch(wp[1]){
		case 0x656C626172656C6F:return 1;
		default:return 0;
		}
	case 0x746E69727962616C:
		switch(wp[1]){
		case 0x6469746E6F646F68:return 1;
		case 0x68636E6172626968:return 1;
		default:return 0;
		}
	case 0x746E6F636974696C:
		switch(wp[1]){
		case 0x6E6F697461747365:return 1;
		default:return 0;
		}
	case 0x746E6F6369746E61:
		switch(wp[1]){
		case 0x7473696E6F696761:return 1;
		default:return 0;
		}
	case 0x746E6F637265766F:
		switch(wp[1]){
		case 0x6E6F697475626972:return 1;
		default:return 0;
		}
	case 0x746E6F65616C6170:
		switch(wp[1]){
		case 0x636968706172676F:return 1;
		default:return 0;
		}
	case 0x746E6F7073657270:
		switch(wp[1]){
		case 0x796C73756F656E61:return 1;
		default:return 0;
		}
	case 0x746E756F6D727573:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x746E7973796C6F70:
		switch(wp[1]){
		case 0x6D73696369746568:return 1;
		default:return 0;
		}
	case 0x746F626D756C6F63:
		switch(wp[1]){
		case 0x6574616C61746E61:return 1;
		default:return 0;
		}
	case 0x746F626F656C6170:
		switch(wp[1]){
		case 0x796C6C6163696E61:return 1;
		default:return 0;
		}
	case 0x746F636F72636173:
		switch(wp[1]){
		case 0x6E616564696F6C79:return 1;
		default:return 0;
		}
	case 0x746F646F69736564:
		switch(wp[1]){
		case 0x656E69786F727968:return 1;
		default:return 0;
		}
	case 0x746F656369726573:
		switch(wp[1]){
		case 0x65736F746E656D6F:return 1;
		default:return 0;
		}
	case 0x746F68706167656D:
		switch(wp[1]){
		case 0x636968706172676F:return 1;
		default:return 0;
		}
	case 0x746F687061726170:
		switch(wp[1]){
		case 0x6D7369706F72746F:return 1;
		default:return 0;
		}
	case 0x746F6870656C6574:
		switch(wp[1]){
		case 0x636968706172676F:return 1;
		default:return 0;
		}
	case 0x746F6870736F6870:
		switch(wp[1]){
		case 0x6574617473676E75:return 1;
		default:return 0;
		}
	case 0x746F6C756373756D:
		switch(wp[1]){
		case 0x73756F6E69646E65:return 1;
		default:return 0;
		}
	case 0x746F6D616C616874:
		switch(wp[1]){
		case 0x6C61746E656D6765:return 1;
		default:return 0;
		}
	case 0x746F6D657265766F:
		switch(wp[1]){
		case 0x657A696C616E6F69:return 1;
		case 0x7974696C616E6F69:return 1;
		default:return 0;
		}
	case 0x746F6E61676E616D:
		switch(wp[1]){
		case 0x6574696C61746E61:return 1;
		default:return 0;
		}
	case 0x746F6E616863656D:
		switch(wp[1]){
		case 0x7473697061726568:return 1;
		default:return 0;
		}
	case 0x746F6E696863616D:
		switch(wp[1]){
		case 0x657571696E686365:return 1;
		default:return 0;
		}
	case 0x746F7270696D6573:
		switch(wp[1]){
		case 0x657461726F746365:return 1;
		default:return 0;
		}
	case 0x746F727463656C65:
		switch(wp[1]){
		case 0x6369746F6D726568:return 1;
		case 0x6C6163696E686365:return 1;
		case 0x6E6F697461727469:return 1;
		case 0x7473697061726568:return 1;
		case 0x79636E616D726568:return 1;
		default:return 0;
		}
	case 0x746F727463657073:
		switch(wp[1]){
		case 0x65706F6373656C65:return 1;
		default:return 0;
		}
	case 0x746F74656E67616D:
		switch(wp[1]){
		case 0x656E6F6870656C65:return 1;
		case 0x6870617267656C65:return 1;
		default:return 0;
		}
	case 0x746F747065727473:
		switch(wp[1]){
		case 0x7369736F63697268:return 1;
		case 0x7369736F68636972:return 1;
		default:return 0;
		}
	case 0x747061637265766F:
		switch(wp[1]){
		case 0x7373656E73756F69:return 1;
		default:return 0;
		}
	case 0x7470656363616E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x7470697263736E75:
		switch(wp[1]){
		case 0x7373656E6C617275:return 1;
		default:return 0;
		}
	case 0x74706D65746E6F63:
		switch(wp[1]){
		case 0x7373656E656C6269:return 1;
		case 0x7373656E73756F75:return 1;
		default:return 0;
		}
	case 0x74706D7573657270:
		switch(wp[1]){
		case 0x7373656E73756F75:return 1;
		default:return 0;
		}
	case 0x74706F63616C616D:
		switch(wp[1]){
		case 0x73756F6967797265:return 1;
		default:return 0;
		}
	case 0x74706F65616C6170:
		switch(wp[1]){
		case 0x79676F6C6F686379:return 1;
		default:return 0;
		}
	case 0x74706F6E69746361:
		switch(wp[1]){
		case 0x73756F6967797265:return 1;
		default:return 0;
		}
	case 0x7470726563736964:
		switch(wp[1]){
		case 0x7373656E656C6269:return 1;
		default:return 0;
		}
	case 0x7470796C67616E61:
		switch(wp[1]){
		case 0x636968706172676F:return 1;
		default:return 0;
		}
	case 0x7472616963756170:
		switch(wp[1]){
		case 0x646574616C756369:return 1;
		default:return 0;
		}
	case 0x74726169746C756D:
		switch(wp[1]){
		case 0x646574616C756369:return 1;
		default:return 0;
		}
	case 0x7472616F6574736F:
		switch(wp[1]){
		case 0x79687461706F7268:return 1;
		default:return 0;
		}
	case 0x7472617065646E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x747261707265766F:
		switch(wp[1]){
		case 0x796C72616C756369:return 1;
		default:return 0;
		}
	case 0x747265746E656E75:
		switch(wp[1]){
		case 0x796C676E696E6961:return 1;
		default:return 0;
		}
	case 0x747265746E756F63:
		switch(wp[1]){
		case 0x676E697472617768:return 1;
		default:return 0;
		}
	case 0x74726576696D6573:
		switch(wp[1]){
		case 0x6574616C6C696369:return 1;
		default:return 0;
		}
	case 0x747265766F6E6F6D:
		switch(wp[1]){
		case 0x6574616C6C696369:return 1;
		default:return 0;
		}
	case 0x74726F7265707968:
		switch(wp[1]){
		case 0x796874616E676F68:return 1;
		default:return 0;
		}
	case 0x7472756F63736964:
		switch(wp[1]){
		case 0x7373656E73756F65:return 1;
		default:return 0;
		}
	case 0x747361667265766F:
		switch(wp[1]){
		case 0x796C73756F696469:return 1;
		default:return 0;
		}
	case 0x7473616769726570:
		switch(wp[1]){
		case 0x6E6F6974616C7572:return 1;
		default:return 0;
		}
	case 0x74736275736E6F63:
		switch(wp[1]){
		case 0x796C6C6169746E61:return 1;
		default:return 0;
		}
	case 0x74736566696E616D:
		switch(wp[1]){
		case 0x7473696E6F697461:return 1;
		default:return 0;
		}
	case 0x7473656769646E69:
		switch(wp[1]){
		case 0x7373656E656C6269:return 1;
		default:return 0;
		}
	case 0x7473657069746E61:
		switch(wp[1]){
		case 0x6C6169746E656C69:return 1;
		default:return 0;
		}
	case 0x7473657369646E75:
		switch(wp[1]){
		case 0x64656873696C6261:return 1;
		default:return 0;
		}
	case 0x7473696469757165:
		switch(wp[1]){
		case 0x6E6F697475626972:return 1;
		default:return 0;
		}
	case 0x74736967616D6E75:
		switch(wp[1]){
		case 0x656B696C65746172:return 1;
		default:return 0;
		}
	case 0x7473696863617262:
		switch(wp[1]){
		case 0x63696E6F7268636F:return 1;
		case 0x696C61687065636F:return 1;
		case 0x796C61687065636F:return 1;
		default:return 0;
		}
	case 0x7473696D64616568:
		switch(wp[1]){
		case 0x7069687373736572:return 1;
		default:return 0;
		}
	case 0x7473696E696D6461:
		switch(wp[1]){
		case 0x6C616E6F69746172:return 1;
		case 0x7365636972746172:return 1;
		case 0x796C657669746172:return 1;
		default:return 0;
		}
	case 0x7473697365726E75:
		switch(wp[1]){
		case 0x7373656E656C6269:return 1;
		default:return 0;
		}
	case 0x7473697365727269:
		switch(wp[1]){
		case 0x7373656E656C6269:return 1;
		default:return 0;
		}
	case 0x74736D7563726963:
		switch(wp[1]){
		case 0x656C626169746E61:return 1;
		case 0x796C6C6169746E61:return 1;
		default:return 0;
		}
	case 0x74736E616C616870:
		switch(wp[1]){
		case 0x6D73696E61697265:return 1;
		default:return 0;
		}
	case 0x74736E6F63627573:
		switch(wp[1]){
		case 0x6E6F6974616C6C65:return 1;
		default:return 0;
		}
	case 0x74736F63616C616D:
		switch(wp[1]){
		case 0x79676F6C6F636172:return 1;
		default:return 0;
		}
	case 0x74736F6475657370:
		switch(wp[1]){
		case 0x6574696D67616C61:return 1;
		case 0x6574697463616C61:return 1;
		default:return 0;
		}
	case 0x74736F6863697274:
		switch(wp[1]){
		case 0x64696C79676E6F72:return 1;
		default:return 0;
		}
	case 0x74736F6863797370:
		switch(wp[1]){
		case 0x796C6C6163697461:return 1;
		default:return 0;
		}
	case 0x74736F6D72656874:
		switch(wp[1]){
		case 0x796C6C6163697461:return 1;
		default:return 0;
		}
	case 0x7473756363616E75:
		switch(wp[1]){
		case 0x7373656E64656D6F:return 1;
		default:return 0;
		}
	case 0x747375646E696E75:
		switch(wp[1]){
		case 0x64657A696C616972:return 1;
		default:return 0;
		}
	case 0x74737972636E6F6E:
		switch(wp[1]){
		case 0x676E697A696C6C61:return 1;
		default:return 0;
		}
	case 0x7474696D64616E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x7474756265726E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x747561637265766F:
		switch(wp[1]){
		case 0x7373656E73756F69:return 1;
		default:return 0;
		}
	case 0x7475616E69746361:
		switch(wp[1]){
		case 0x636968706172676F:return 1;
		default:return 0;
		}
	case 0x7475616F69646172:
		switch(wp[1]){
		case 0x636968706172676F:return 1;
		default:return 0;
		}
	case 0x7475626F7463616C:
		switch(wp[1]){
		case 0x726574656D6F7279:return 1;
		default:return 0;
		}
	case 0x74756D6D6F636E69:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x74756D736E617274:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		case 0x7473696E6F697461:return 1;
		default:return 0;
		}
	case 0x7475706572736964:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x7475706D6F636E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x7475707369646E69:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x7475707369646E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		case 0x796C73756F697461:return 1;
		default:return 0;
		}
	case 0x7475746974736E69:
		switch(wp[1]){
		case 0x657A696C616E6F69:return 1;
		case 0x6D73696C616E6F69:return 1;
		case 0x7473696C616E6F69:return 1;
		case 0x7974696C616E6F69:return 1;
		default:return 0;
		}
	case 0x7478656469626D61:
		switch(wp[1]){
		case 0x7373656E73756F72:return 1;
		default:return 0;
		}
	case 0x7479636F6375656C:
		switch(wp[1]){
		case 0x73697365696F706F:return 1;
		case 0x736973656E65676F:return 1;
		case 0x797061726568746F:return 1;
		default:return 0;
		}
	case 0x74796C65746F7270:
		switch(wp[1]){
		case 0x6E61726574706F72:return 1;
		case 0x6E6F726574706F72:return 1;
		default:return 0;
		}
	case 0x756172656B6F7369:
		switch(wp[1]){
		case 0x63696E6F68706F6E:return 1;
		default:return 0;
		}
	case 0x75626972746E6F63:
		switch(wp[1]){
		case 0x7373656E65766974:return 1;
		default:return 0;
		}
	case 0x7562697274736964:
		switch(wp[1]){
		case 0x7373656E65766974:return 1;
		default:return 0;
		}
	case 0x756363617265766F:
		switch(wp[1]){
		case 0x6E6F6974616C756D:return 1;
		default:return 0;
		}
	case 0x7563696C616E6163:
		switch(wp[1]){
		case 0x6E6F6974617A696C:return 1;
		default:return 0;
		}
	case 0x75636972746E6576:
		switch(wp[1]){
		case 0x7968706172676F6C:return 1;
		default:return 0;
		}
	case 0x7563697472616E69:
		switch(wp[1]){
		case 0x7373656E6574616C:return 1;
		default:return 0;
		}
	case 0x75636F6475657370:
		switch(wp[1]){
		case 0x646574617669746C:return 1;
		default:return 0;
		}
	case 0x75636F746E697571:
		switch(wp[1]){
		case 0x6D73696C61746962:return 1;
		default:return 0;
		}
	case 0x7564656F69636F73:
		switch(wp[1]){
		case 0x6C616E6F69746163:return 1;
		default:return 0;
		}
	case 0x75646F7274736167:
		switch(wp[1]){
		case 0x736974696E65646F:return 1;
		default:return 0;
		}
	case 0x75656E7069746E61:
		switch(wp[1]){
		case 0x636963636F636F6D:return 1;
		default:return 0;
		}
	case 0x75656E706F6D6568:
		switch(wp[1]){
		case 0x7861726F68746F6D:return 1;
		default:return 0;
		}
	case 0x75656E706F726573:
		switch(wp[1]){
		case 0x7861726F68746F6D:return 1;
		default:return 0;
		}
	case 0x75657370796C6F70:
		switch(wp[1]){
		case 0x73756F6D796E6F64:return 1;
		default:return 0;
		}
	case 0x7567616F636E6F6E:
		switch(wp[1]){
		case 0x7974696C6962616C:return 1;
		default:return 0;
		}
	case 0x75676E61736E6F63:
		switch(wp[1]){
		case 0x796C73756F656E69:return 1;
		default:return 0;
		}
	case 0x75676E6974736964:
		switch(wp[1]){
		case 0x796C676E69687369:return 1;
		default:return 0;
		}
	case 0x7568706C75736564:
		switch(wp[1]){
		case 0x6E6F6974617A6972:return 1;
		default:return 0;
		}
	case 0x756A6E6F63627573:
		switch(wp[1]){
		case 0x796C65766974636E:return 1;
		default:return 0;
		}
	case 0x756A7369646E6F6E:
		switch(wp[1]){
		case 0x6C616E6F6974636E:return 1;
		default:return 0;
		}
	case 0x756C636E6F636E69:
		switch(wp[1]){
		case 0x7373656E65766973:return 1;
		default:return 0;
		}
	case 0x756C636E6F636E75:
		switch(wp[1]){
		case 0x7373656E65766973:return 1;
		case 0x7373656E676E6964:return 1;
		default:return 0;
		}
	case 0x756C666F62697274:
		switch(wp[1]){
		case 0x746E65637365726F:return 1;
		default:return 0;
		}
	case 0x756C666F72647968:
		switch(wp[1]){
		case 0x636963696C69736F:return 1;
		default:return 0;
		}
	case 0x756C6767616D6568:
		switch(wp[1]){
		case 0x65766974616E6974:return 1;
		case 0x6E6F6974616E6974:return 1;
		default:return 0;
		}
	case 0x756C6767616E6F6E:
		switch(wp[1]){
		case 0x65766974616E6974:return 1;
		default:return 0;
		}
	case 0x756C6767616F7369:
		switch(wp[1]){
		case 0x65766974616E6974:return 1;
		case 0x6E6F6974616E6974:return 1;
		default:return 0;
		}
	case 0x756C676761726170:
		switch(wp[1]){
		case 0x6E6F6974616E6974:return 1;
		default:return 0;
		}
	case 0x756C6C61686E6F6E:
		switch(wp[1]){
		case 0x6E6F6974616E6963:return 1;
		default:return 0;
		}
	case 0x756C6C6168736964:
		switch(wp[1]){
		case 0x6E6F6974616E6963:return 1;
		default:return 0;
		}
	case 0x756C6C697265766F:
		switch(wp[1]){
		case 0x6E6F697461727473:return 1;
		default:return 0;
		}
	case 0x756C6F7665726E75:
		switch(wp[1]){
		case 0x64657A696E6F6974:return 1;
		default:return 0;
		}
	case 0x756D6D696F747561:
		switch(wp[1]){
		case 0x6E6F6974617A696E:return 1;
		default:return 0;
		}
	case 0x756D6D6F63657270:
		switch(wp[1]){
		case 0x6E6F69746163696E:return 1;
		default:return 0;
		}
	case 0x756D6D6F636E6F6E:
		switch(wp[1]){
		case 0x676E69746163696E:return 1;
		case 0x6E6F69746163696E:return 1;
		default:return 0;
		}
	case 0x756D6F6D72656874:
		switch(wp[1]){
		case 0x7265696C7069746C:return 1;
		default:return 0;
		}
	case 0x756E616D696D6573:
		switch(wp[1]){
		case 0x6465727574636166:return 1;
		default:return 0;
		}
	case 0x756E6567696D6573:
		switch(wp[1]){
		case 0x6E6F697463656C66:return 1;
		default:return 0;
		}
	case 0x756E6F72706E6F6E:
		switch(wp[1]){
		case 0x6E6F69746169636E:return 1;
		default:return 0;
		}
	case 0x756E6F727073696D:
		switch(wp[1]){
		case 0x6E6F69746169636E:return 1;
		default:return 0;
		}
	case 0x756F637265646E75:
		switch(wp[1]){
		case 0x65636E616E65746E:return 1;
		default:return 0;
		}
	case 0x756F637369646E75:
		switch(wp[1]){
		case 0x656C626165676172:return 1;
		default:return 0;
		}
	case 0x756F686B63617473:
		switch(wp[1]){
		case 0x73756F6563616973:return 1;
		default:return 0;
		}
	case 0x756F687465726F66:
		switch(wp[1]){
		case 0x796C6C7566746867:return 1;
		default:return 0;
		}
	case 0x756F6C6F63736964:
		switch(wp[1]){
		case 0x6E6F6974617A6972:return 1;
		default:return 0;
		}
	case 0x756F6C7563636173:
		switch(wp[1]){
		case 0x72616C7563697274:return 1;
		default:return 0;
		}
	case 0x756F6D796C61656D:
		switch(wp[1]){
		case 0x7373656E64656874:return 1;
		default:return 0;
		}
	case 0x756F6E7265646E75:
		switch(wp[1]){
		case 0x746E656D68736972:return 1;
		default:return 0;
		}
	case 0x756F706D6F636E75:
		switch(wp[1]){
		case 0x7373656E6465646E:return 1;
		default:return 0;
		}
	case 0x75706F707265766F:
		switch(wp[1]){
		case 0x7373656E73756F6C:return 1;
		default:return 0;
		}
	case 0x7570737265646E75:
		switch(wp[1]){
		case 0x7265687461656C72:return 1;
		default:return 0;
		}
	case 0x7570757263736E75:
		switch(wp[1]){
		case 0x7373656E73756F6C:return 1;
		default:return 0;
		}
	case 0x75716361696D6573:
		switch(wp[1]){
		case 0x65636E61746E6961:return 1;
		default:return 0;
		}
	case 0x7571656172747865:
		switch(wp[1]){
		case 0x6D75697262696C69:return 1;
		default:return 0;
		}
	case 0x7571657265746E69:
		switch(wp[1]){
		case 0x6C616974636F6E69:return 1;
		default:return 0;
		}
	case 0x75716573626F6E75:
		switch(wp[1]){
		case 0x7373656E73756F69:return 1;
		default:return 0;
		}
	case 0x757169746E616E75:
		switch(wp[1]){
		case 0x7373656E64657461:return 1;
		default:return 0;
		}
	case 0x75717369646E6F6E:
		switch(wp[1]){
		case 0x676E697966696C61:return 1;
		default:return 0;
		}
	case 0x757263737265766F:
		switch(wp[1]){
		case 0x796C73756F6C7570:return 1;
		case 0x797469736F6C7570:return 1;
		default:return 0;
		}
	case 0x75727473626F6E75:
		switch(wp[1]){
		case 0x7373656E64657463:return 1;
		default:return 0;
		}
	case 0x757274736E696E75:
		switch(wp[1]){
		case 0x7373656E64657463:return 1;
		default:return 0;
		}
	case 0x7573657265746E61:
		switch(wp[1]){
		case 0x6E6F697463657272:return 1;
		default:return 0;
		}
	case 0x7573657274736F70:
		switch(wp[1]){
		case 0x6E6F697463657272:return 1;
		default:return 0;
		}
	case 0x75736C6F6E656870:
		switch(wp[1]){
		case 0x6574616E6F68706C:return 1;
		default:return 0;
		}
	case 0x75736E656D6D6F63:
		switch(wp[1]){
		case 0x7373656E65746172:return 1;
		case 0x7974696C69626172:return 1;
		default:return 0;
		}
	case 0x75736E696E67696C:
		switch(wp[1]){
		case 0x6574616E6F68706C:return 1;
		default:return 0;
		}
	case 0x75736F68706C7573:
		switch(wp[1]){
		case 0x73756F727568706C:return 1;
		default:return 0;
		}
	case 0x75736F7265746568:
		switch(wp[1]){
		case 0x6E6F697473656767:return 1;
		default:return 0;
		}
	case 0x75736F72746E6576:
		switch(wp[1]){
		case 0x6E6F69736E657073:return 1;
		default:return 0;
		}
	case 0x75736F7274736167:
		switch(wp[1]){
		case 0x61656872726F6363:return 1;
		default:return 0;
		}
	case 0x75736F736F6D6172:
		switch(wp[1]){
		case 0x6465646976696462:return 1;
		default:return 0;
		}
	case 0x75746172676E6F63:
		switch(wp[1]){
		case 0x6C616E6F6974616C:return 1;
		default:return 0;
		}
	case 0x7574697264617571:
		switch(wp[1]){
		case 0x72616C7563726562:return 1;
		default:return 0;
		}
	case 0x7574697473627573:
		switch(wp[1]){
		case 0x796C6C616E6F6974:return 1;
		default:return 0;
		}
	case 0x75746974736E6F63:
		switch(wp[1]){
		case 0x7373656E65766974:return 1;
		case 0x796C6C616E6F6974:return 1;
		default:return 0;
		}
	case 0x75746F6475657370:
		switch(wp[1]){
		case 0x72616C7563726562:return 1;
		default:return 0;
		}
	case 0x75746F6E65737261:
		switch(wp[1]){
		case 0x736574617473676E:return 1;
		default:return 0;
		}
	case 0x7665647265646E75:
		switch(wp[1]){
		case 0x746E656D706F6C65:return 1;
		default:return 0;
		}
	case 0x7665647265707573:
		switch(wp[1]){
		case 0x746E656D706F6C65:return 1;
		default:return 0;
		}
	case 0x7665696C65626E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x7665696C65726E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x7665727265707968:
		switch(wp[1]){
		case 0x6C6169746E657265:return 1;
		default:return 0;
		}
	case 0x7669646E69736964:
		switch(wp[1]){
		case 0x657A696C61756469:return 1;
		default:return 0;
		}
	case 0x7669656365646E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x766967726F666E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x76696E75696D6573:
		switch(wp[1]){
		case 0x7473696C61737265:return 1;
		default:return 0;
		}
	case 0x7669726F736E6573:
		switch(wp[1]){
		case 0x726F746F6D6F7361:return 1;
		default:return 0;
		}
	case 0x766C6F7365727269:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x766E6F6369746E61:
		switch(wp[1]){
		case 0x6C616E6F69746E65:return 1;
		default:return 0;
		}
	case 0x766E6F636E696E75:
		switch(wp[1]){
		case 0x6465636E65696E65:return 1;
		default:return 0;
		}
	case 0x766E6F6374736F70:
		switch(wp[1]){
		case 0x746E656373656C61:return 1;
		default:return 0;
		}
	case 0x766F68636E6F7262:
		switch(wp[1]){
		case 0x72616C7563697365:return 1;
		default:return 0;
		}
	case 0x766F6C7570616373:
		switch(wp[1]){
		case 0x6C61726265747265:return 1;
		default:return 0;
		}
	case 0x766F6E6E696F7270:
		switch(wp[1]){
		case 0x7473696E6F697461:return 1;
		default:return 0;
		}
	case 0x766F726574756564:
		switch(wp[1]){
		case 0x65736F6C6C657469:return 1;
		default:return 0;
		}
	case 0x766F727065726E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x766F727065727269:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x766F72706D696E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x766F727070616E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x766F737265707573:
		switch(wp[1]){
		case 0x79746E6769657265:return 1;
		default:return 0;
		}
	case 0x767265746E756F63:
		switch(wp[1]){
		case 0x65636E6165676E65:return 1;
		case 0x6E6F6974616C6C61:return 1;
		case 0x6E6F697461726269:return 1;
		default:return 0;
		}
	case 0x776F6870736F6870:
		switch(wp[1]){
		case 0x63696D6172666C6F:return 1;
		default:return 0;
		}
	case 0x776F6C6C61736964:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x776F6E6B63616572:
		switch(wp[1]){
		case 0x746E656D6764656C:return 1;
		default:return 0;
		}
	case 0x776F6E6B63616E75:
		switch(wp[1]){
		case 0x746E656D6764656C:return 1;
		default:return 0;
		}
	case 0x78656E6E616F7270:
		switch(wp[1]){
		case 0x7473696E6F697461:return 1;
		default:return 0;
		}
	case 0x78656F6E69736572:
		switch(wp[1]){
		case 0x6576697463617274:return 1;
		default:return 0;
		}
	case 0x786F69647A6E6562:
		switch(wp[1]){
		case 0x656E697A61697274:return 1;
		default:return 0;
		}
	case 0x786F726479686964:
		switch(wp[1]){
		case 0x656E65756C6F7479:return 1;
		default:return 0;
		}
	case 0x786F726874797265:
		switch(wp[1]){
		case 0x73756F6563616C79:return 1;
		default:return 0;
		}
	case 0x78796D6F6E656461:
		switch(wp[1]){
		case 0x616D6F637261736F:return 1;
		default:return 0;
		}
	case 0x78796D6F72626966:
		switch(wp[1]){
		case 0x616D6F637261736F:return 1;
		default:return 0;
		}
	case 0x79636C617A6E6562:
		switch(wp[1]){
		case 0x6E69726479686E61:return 1;
		default:return 0;
		}
	case 0x79636F6E6F726863:
		switch(wp[1]){
		case 0x6870617267656C63:return 1;
		default:return 0;
		}
	case 0x79636F726170616C:
		switch(wp[1]){
		case 0x796D6F7463657473:return 1;
		default:return 0;
		}
	case 0x7963726574657275:
		switch(wp[1]){
		case 0x65706F63736F7473:return 1;
		default:return 0;
		}
	case 0x79646F6D72656874:
		switch(wp[1]){
		case 0x6E616963696D616E:return 1;
		case 0x74736963696D616E:return 1;
		default:return 0;
		}
	case 0x7968636E65726170:
		switch(wp[1]){
		case 0x796C73756F74616D:return 1;
		default:return 0;
		}
	case 0x79686F656C63756E:
		switch(wp[1]){
		case 0x6D73616C706F6C61:return 1;
		default:return 0;
		}
	case 0x79686F7274736167:
		switch(wp[1]){
		case 0x61656872726F7264:return 1;
		case 0x63696E6F74726570:return 1;
		default:return 0;
		}
	case 0x7968706F656C6170:
		switch(wp[1]){
		case 0x747369676F6C6F74:return 1;
		default:return 0;
		}
	case 0x7968706F72647968:
		switch(wp[1]){
		case 0x73756F6563616C6C:return 1;
		default:return 0;
		}
	case 0x7968706F79726163:
		switch(wp[1]){
		case 0x73756F6563616C6C:return 1;
		default:return 0;
		}
	case 0x796874656D697274:
		switch(wp[1]){
		case 0x656E616874656D6C:return 1;
		case 0x656E657A6E65626C:return 1;
		case 0x656E69626974736C:return 1;
		default:return 0;
		}
	case 0x796B6F6874657473:
		switch(wp[1]){
		case 0x68706172676F7472:return 1;
		default:return 0;
		}
	case 0x796C676F72656968:
		switch(wp[1]){
		case 0x796C6C6163696870:return 1;
		default:return 0;
		}
	case 0x796C6F6D73616C70:
		switch(wp[1]){
		case 0x7974696C6962617A:return 1;
		default:return 0;
		}
	case 0x796C6F7069746E61:
		switch(wp[1]){
		case 0x636974697275656E:return 1;
		default:return 0;
		}
	case 0x796C6F7A69686373:
		switch(wp[1]){
		case 0x73756F6E65676973:return 1;
		default:return 0;
		}
	case 0x796D6F6462616872:
		switch(wp[1]){
		case 0x616D6F637261736F:return 1;
		default:return 0;
		}
	case 0x796D6F6964726163:
		switch(wp[1]){
		case 0x616963616C616D6F:return 1;
		case 0x7369736F70696C6F:return 1;
		default:return 0;
		}
	case 0x796D6F726170616C:
		switch(wp[1]){
		case 0x796D6F7463656D6F:return 1;
		default:return 0;
		}
	case 0x796E656870697274:
		switch(wp[1]){
		case 0x656E616874656D6C:return 1;
		default:return 0;
		}
	case 0x796E6F6475657370:
		switch(wp[1]){
		case 0x7373656E73756F6D:return 1;
		default:return 0;
		}
	case 0x796E6F6E79736564:
		switch(wp[1]){
		case 0x6E6F6974617A696D:return 1;
		default:return 0;
		}
	case 0x796F6C706D656E75:
		switch(wp[1]){
		case 0x7373656E656C6261:return 1;
		default:return 0;
		}
	case 0x7972616C696D6568:
		switch(wp[1]){
		case 0x796D6F746365676E:return 1;
		default:return 0;
		}
	case 0x7972616C6F747561:
		switch(wp[1]){
		case 0x65706F63736F676E:return 1;
		case 0x79706F63736F676E:return 1;
		default:return 0;
		}
	case 0x79726369746C756D:
		switch(wp[1]){
		case 0x656E696C6C617473:return 1;
		default:return 0;
		}
	case 0x7972636F656C6170:
		switch(wp[1]){
		case 0x656E696C6C617473:return 1;
		default:return 0;
		}
	case 0x7972636F656D6F68:
		switch(wp[1]){
		case 0x656E696C6C617473:return 1;
		default:return 0;
		}
	case 0x7972636F69627564:
		switch(wp[1]){
		case 0x656E696C6C617473:return 1;
		default:return 0;
		}
	case 0x7972636F6C617968:
		switch(wp[1]){
		case 0x656E696C6C617473:return 1;
		default:return 0;
		}
	case 0x7972636F6E656870:
		switch(wp[1]){
		case 0x656E696C6C617473:return 1;
		default:return 0;
		}
	case 0x7972636F72626966:
		switch(wp[1]){
		case 0x656E696C6C617473:return 1;
		default:return 0;
		}
	case 0x7972636F7263616D:
		switch(wp[1]){
		case 0x656E696C6C617473:return 1;
		default:return 0;
		}
	case 0x7972636F7263696D:
		switch(wp[1]){
		case 0x656E696C6C617473:return 1;
		default:return 0;
		}
	case 0x7972637265746E69:
		switch(wp[1]){
		case 0x656E696C6C617473:return 1;
		case 0x657A696C6C617473:return 1;
		default:return 0;
		}
	case 0x797263736E617274:
		switch(wp[1]){
		case 0x656E696C6C617473:return 1;
		default:return 0;
		}
	case 0x7972746F6D796863:
		switch(wp[1]){
		case 0x6E65676F6E697370:return 1;
		default:return 0;
		}
	case 0x7973697264617571:
		switch(wp[1]){
		case 0x6C61636962616C6C:return 1;
		default:return 0;
		}
	case 0x79736F6465726568:
		switch(wp[1]){
		case 0x636974696C696870:return 1;
		default:return 0;
		}
	case 0x79736F6475657370:
		switch(wp[1]){
		case 0x636974696C696870:return 1;
		default:return 0;
		}
	case 0x79736F6C6167656D:
		switch(wp[1]){
		case 0x796C79746361646E:return 1;
		default:return 0;
		}
	case 0x79736F6D65656C65:
		switch(wp[1]){
		case 0x7373656E6972616E:return 1;
		default:return 0;
		}
	case 0x79736F6D72656874:
		switch(wp[1]){
		case 0x6D7369746C617473:return 1;
		default:return 0;
		}
	case 0x7973706172746E69:
		switch(wp[1]){
		case 0x796C6C6163696863:return 1;
		default:return 0;
		}
	case 0x7973706D6574656D:
		switch(wp[1]){
		case 0x6C616369736F6863:return 1;
		default:return 0;
		}
	case 0x7973706F6874726F:
		switch(wp[1]){
		case 0x6369727461696863:return 1;
		default:return 0;
		}
	case 0x7973706F7275656E:
		switch(wp[1]){
		case 0x6369727461696863:return 1;
		case 0x79687461706F6863:return 1;
		default:return 0;
		}
	case 0x79746F636F6E6F6D:
		switch(wp[1]){
		case 0x73756F6E6F64656C:return 1;
		default:return 0;
		}
	case 0x79746F636F707968:
		switch(wp[1]){
		case 0x73756F6E6F64656C:return 1;
		case 0x7972616E6F64656C:return 1;
		default:return 0;
		}
	case 0x79746F63796C6F70:
		switch(wp[1]){
		case 0x73756F6E6F64656C:return 1;
		case 0x7972616E6F64656C:return 1;
		default:return 0;
		}
	case 0x79746F65616C6170:
		switch(wp[1]){
		case 0x7968706172676F70:return 1;
		default:return 0;
		}
	case 0x79746F6572657473:
		switch(wp[1]){
		case 0x7968706172676F70:return 1;
		default:return 0;
		}
	case 0x79746F6D6F726863:
		switch(wp[1]){
		case 0x7968706172676F70:return 1;
		default:return 0;
		}
	case 0x79746F7274736167:
		switch(wp[1]){
		case 0x736574696E61706D:return 1;
		default:return 0;
		}
	case 0x79786F6D6F726863:
		switch(wp[1]){
		case 0x7968706172676F6C:return 1;
		default:return 0;
		}
	case 0x79786F7265707573:
		switch(wp[1]){
		case 0x6E6F6974616E6567:return 1;
		default:return 0;
		}
	case 0x79786F7265707968:
		switch(wp[1]){
		case 0x6E6F6974616E6567:return 1;
		default:return 0;
		}
	case 0x797A6F7265746568:
		switch(wp[1]){
		case 0x7373656E73756F67:return 1;
		default:return 0;
		}
	case 0x7A6E656261726170:
		switch(wp[1]){
		case 0x656E6F6E6975716F:return 1;
		default:return 0;
		}
	case 0x7A6E656269746E61:
		switch(wp[1]){
		case 0x656D69786F646C61:return 1;
		default:return 0;
		}
	case 0x7A6F6C6C6978616D:
		switch(wp[1]){
		case 0x636974616D6F6779:return 1;
		default:return 0;
		}
	case 0x7A6F726F706D6574:
		switch(wp[1]){
		case 0x636974616D6F6779:return 1;
		default:return 0;
		}
	default:return 0;
	}
}
