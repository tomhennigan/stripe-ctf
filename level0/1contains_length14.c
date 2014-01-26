#include <stdint.h>
unsigned int contains14(uint64_t * wp) {
	switch(wp[0]){
	case 0x61626172746E6F63:
		switch(wp[1]){
		case 0x000061747369646E:return 1;
		default:return 0;
		}
	case 0x6162646165726874:
		switch(wp[1]){
		case 0x00007373656E6572:return 1;
		default:return 0;
		}
	case 0x6162697263736564:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x61626F63696E6F74:
		switch(wp[1]){
		case 0x000063696D61736C:return 1;
		default:return 0;
		}
	case 0x61626F6475657370:
		switch(wp[1]){
		case 0x00006D7569646973:return 1;
		default:return 0;
		}
	case 0x61626F6863697274:
		switch(wp[1]){
		case 0x0000616972657463:return 1;
		default:return 0;
		}
	case 0x61626F6D75656E70:
		switch(wp[1]){
		case 0x000073756C6C6963:return 1;
		default:return 0;
		}
	case 0x61626F7270736964:
		switch(wp[1]){
		case 0x0000657A696C6962:return 1;
		default:return 0;
		}
	case 0x61626F7469746E61:
		switch(wp[1]){
		case 0x00006C616E6F6363:return 1;
		default:return 0;
		}
	case 0x6162726163697274:
		switch(wp[1]){
		case 0x000063696C796C6C:return 1;
		default:return 0;
		}
	case 0x6162727574726570:
		switch(wp[1]){
		case 0x00006C616E6F6974:return 1;
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x616272757473616D:
		switch(wp[1]){
		case 0x00006C616E6F6974:return 1;
		default:return 0;
		}
	case 0x6163616F6E656461:
		switch(wp[1]){
		case 0x0000616D6F68746E:return 1;
		default:return 0;
		}
	case 0x6163617275656C70:
		switch(wp[1]){
		case 0x000064696F68746E:return 1;
		default:return 0;
		}
	case 0x6163636F696D6573:
		switch(wp[1]){
		case 0x00006C616E6F6973:return 1;
		default:return 0;
		}
	case 0x616365646F646964:
		switch(wp[1]){
		case 0x00006C6172646568:return 1;
		case 0x00006E6F72646568:return 1;
		default:return 0;
		}
	case 0x61636568746F7061:
		switch(wp[1]){
		case 0x0000706968737972:return 1;
		default:return 0;
		}
	case 0x6163696666617274:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x616369666964696E:
		switch(wp[1]){
		case 0x00006C616E6F6974:return 1;
		default:return 0;
		}
	case 0x6163696669646F6D:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6163696C65646E69:
		switch(wp[1]){
		case 0x00007373656E6574:return 1;
		default:return 0;
		}
	case 0x6163696C70707573:
		switch(wp[1]){
		case 0x000072656E6F6974:return 1;
		case 0x0000796C676E6974:return 1;
		default:return 0;
		}
	case 0x6163697261766964:
		switch(wp[1]){
		case 0x0000796C676E6974:return 1;
		default:return 0;
		}
	case 0x6163697264617571:
		switch(wp[1]){
		case 0x00006574616E6972:return 1;
		case 0x000072616C757370:return 1;
		default:return 0;
		}
	case 0x6163697463617270:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x616369786F746E69:
		switch(wp[1]){
		case 0x0000796C676E6974:return 1;
		default:return 0;
		}
	case 0x61636C6164617567:
		switch(wp[1]){
		case 0x000065746972617A:return 1;
		default:return 0;
		}
	case 0x61636C796E656870:
		switch(wp[1]){
		case 0x000063696D616272:return 1;
		default:return 0;
		}
	case 0x61636D7563726963:
		switch(wp[1]){
		case 0x00006C61736F6C6C:return 1;
		default:return 0;
		}
	case 0x61636F68706C7573:
		switch(wp[1]){
		case 0x000063696C6F6272:return 1;
		case 0x000063696D616272:return 1;
		case 0x000063696E6F6272:return 1;
		default:return 0;
		}
	case 0x61636F6968637369:
		switch(wp[1]){
		case 0x000072616C757370:return 1;
		default:return 0;
		}
	case 0x61636F6D65636172:
		switch(wp[1]){
		case 0x000063696E6F6272:return 1;
		default:return 0;
		}
	case 0x61636F6E6F6D6D61:
		switch(wp[1]){
		case 0x000063696E6F6272:return 1;
		default:return 0;
		}
	case 0x61636F7274736F72:
		switch(wp[1]){
		case 0x00006574616E6972:return 1;
		default:return 0;
		}
	case 0x61636F7665727269:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x61636F7669757165:
		switch(wp[1]){
		case 0x0000796C676E6974:return 1;
		default:return 0;
		}
	case 0x6163736172707573:
		switch(wp[1]){
		case 0x00007972616C7570:return 1;
		default:return 0;
		}
	case 0x6163737265746E69:
		switch(wp[1]){
		case 0x00006D75696C6970:return 1;
		default:return 0;
		}
	case 0x61637564656E6F6E:
		switch(wp[1]){
		case 0x00006C616E6F6974:return 1;
		default:return 0;
		}
	case 0x61637564656F7270:
		switch(wp[1]){
		case 0x00006C616E6F6974:return 1;
		default:return 0;
		}
	case 0x616379786F687465:
		switch(wp[1]){
		case 0x0000656E69656666:return 1;
		default:return 0;
		}
	case 0x6164617265707573:
		switch(wp[1]){
		case 0x0000656C62617470:return 1;
		default:return 0;
		}
	case 0x6164617573726570:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x61646E6174736E75:
		switch(wp[1]){
		case 0x000064657A696472:return 1;
		default:return 0;
		}
	case 0x61646E6562657270:
		switch(wp[1]){
		case 0x0000706968737972:return 1;
		default:return 0;
		}
	case 0x61646E75666E6F6E:
		switch(wp[1]){
		case 0x00006C61746E656D:return 1;
		default:return 0;
		}
	case 0x61646F6874616761:
		switch(wp[1]){
		case 0x000063696E6F6D65:return 1;
		default:return 0;
		}
	case 0x61646F6C6167656D:
		switch(wp[1]){
		case 0x000061696C797463:return 1;
		default:return 0;
		}
	case 0x61646F6C796B6E61:
		switch(wp[1]){
		case 0x000061696C797463:return 1;
		default:return 0;
		}
	case 0x61646F72656C6373:
		switch(wp[1]){
		case 0x000061696C797463:return 1;
		default:return 0;
		}
	case 0x6164726F63736964:
		switch(wp[1]){
		case 0x00007373656E746E:return 1;
		default:return 0;
		}
	case 0x6164726F65726F66:
		switch(wp[1]){
		case 0x0000746E656D6E69:return 1;
		default:return 0;
		}
	case 0x6164796863617262:
		switch(wp[1]){
		case 0x000063696C797463:return 1;
		default:return 0;
		}
	case 0x616563616C706572:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6165636976726573:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6165636E6F636E75:
		switch(wp[1]){
		case 0x0000796C676E696C:return 1;
		default:return 0;
		}
	case 0x616563726F666E65:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x616564697265766F:
		switch(wp[1]){
		case 0x000063697473696C:return 1;
		default:return 0;
		}
	case 0x6165657365726F66:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x616567616C6C6174:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6165676475626E75:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x616567726F666E75:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x616568656C626F6E:
		switch(wp[1]){
		case 0x0000796C64657472:return 1;
		default:return 0;
		}
	case 0x616568656C6F6877:
		switch(wp[1]){
		case 0x0000796C64657472:return 1;
		default:return 0;
		}
	case 0x61656865736C6166:
		switch(wp[1]){
		case 0x0000796C64657472:return 1;
		default:return 0;
		}
	case 0x616568676E6F7277:
		switch(wp[1]){
		case 0x0000796C64657472:return 1;
		default:return 0;
		}
	case 0x6165686B6E617266:
		switch(wp[1]){
		case 0x0000796C64657472:return 1;
		default:return 0;
		}
	case 0x6165687369646E75:
		switch(wp[1]){
		case 0x000064656E657472:return 1;
		default:return 0;
		}
	case 0x6165687465657773:
		switch(wp[1]){
		case 0x0000706968737472:return 1;
		default:return 0;
		}
	case 0x616568746867696C:
		switch(wp[1]){
		case 0x0000796C64657472:return 1;
		default:return 0;
		}
	case 0x616568746E696166:
		switch(wp[1]){
		case 0x0000796C64657472:return 1;
		default:return 0;
		}
	case 0x61656874756F7473:
		switch(wp[1]){
		case 0x0000796C64657472:return 1;
		default:return 0;
		}
	case 0x616568796E6F7473:
		switch(wp[1]){
		case 0x0000796C64657472:return 1;
		default:return 0;
		}
	case 0x61656C68636F7274:
		switch(wp[1]){
		case 0x00006D726F666972:return 1;
		default:return 0;
		}
	case 0x61656C6C616D6E75:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x61656D7265706D69:
		switch(wp[1]){
		case 0x0000657A696C6962:return 1;
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6165706D696E6F6E:
		switch(wp[1]){
		case 0x0000746E656D6863:return 1;
		default:return 0;
		}
	case 0x616572677265766F:
		switch(wp[1]){
		case 0x00007373656E6973:return 1;
		default:return 0;
		}
	case 0x6165757165626E75:
		switch(wp[1]){
		case 0x0000656C62616874:return 1;
		default:return 0;
		}
	case 0x6165777265746E69:
		switch(wp[1]){
		case 0x0000746E656D6576:return 1;
		case 0x0000796C676E6976:return 1;
		default:return 0;
		}
	case 0x61666F6465726568:
		switch(wp[1]){
		case 0x00006C61696C696D:return 1;
		default:return 0;
		}
	case 0x61666F6E72657473:
		switch(wp[1]){
		case 0x000073696C616963:return 1;
		default:return 0;
		}
	case 0x6166756E616D6E75:
		switch(wp[1]){
		case 0x0000646572757463:return 1;
		default:return 0;
		}
	case 0x6167656C65646E69:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6167656E6F726573:
		switch(wp[1]){
		case 0x0000797469766974:return 1;
		default:return 0;
		}
	case 0x61676572676E6F63:
		switch(wp[1]){
		case 0x00006C616E6F6974:return 1;
		default:return 0;
		}
	case 0x6167696C666F7270:
		switch(wp[1]){
		case 0x00007373656E6574:return 1;
		default:return 0;
		}
	case 0x61676974696D6D69:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x61676976616E6E75:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x61676C616D616572:
		switch(wp[1]){
		case 0x00006E6F6974616D:return 1;
		default:return 0;
		}
	case 0x61676C616D616E75:
		switch(wp[1]){
		case 0x0000676E6974616D:return 1;
		default:return 0;
		}
	case 0x61676F6475657370:
		switch(wp[1]){
		case 0x0000616C75727473:return 1;
		case 0x00006E6F696C676E:return 1;
		default:return 0;
		}
	case 0x61676F6572657473:
		switch(wp[1]){
		case 0x0000616C75727473:return 1;
		default:return 0;
		}
	case 0x61676F6863797370:
		switch(wp[1]){
		case 0x000063696E61766C:return 1;
		default:return 0;
		}
	case 0x61676F7265746568:
		switch(wp[1]){
		case 0x000063697463616C:return 1;
		case 0x00006D736974656D:return 1;
		default:return 0;
		}
	case 0x61676F7265746E65:
		switch(wp[1]){
		case 0x0000656E6F727473:return 1;
		default:return 0;
		}
	case 0x61677265646E696B:
		switch(wp[1]){
		case 0x000072656E657472:return 1;
		default:return 0;
		}
	case 0x61677275706D6F63:
		switch(wp[1]){
		case 0x00006C6169726F74:return 1;
		default:return 0;
		}
	case 0x616774726F6D6E75:
		switch(wp[1]){
		case 0x0000656C62616567:return 1;
		default:return 0;
		}
	case 0x6168636165706D69:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x616863656D6E6F6E:
		switch(wp[1]){
		case 0x000063697473696E:return 1;
		default:return 0;
		}
	case 0x6168636E65736964:
		switch(wp[1]){
		case 0x000073736572746E:return 1;
		case 0x0000746E656D746E:return 1;
		default:return 0;
		}
	case 0x6168636F7263696D:
		switch(wp[1]){
		case 0x0000726574636172:return 1;
		default:return 0;
		}
	case 0x6168636F72746962:
		switch(wp[1]){
		case 0x000063697265746E:return 1;
		default:return 0;
		}
	case 0x61686372656D6E75:
		switch(wp[1]){
		case 0x0000656B696C746E:return 1;
		case 0x0000656C6261746E:return 1;
		default:return 0;
		}
	case 0x6168637461686E75:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x616863756F746E75:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6168646E6F636573:
		switch(wp[1]){
		case 0x0000796C6465646E:return 1;
		default:return 0;
		}
	case 0x6168656C62756F64:
		switch(wp[1]){
		case 0x0000676E69686374:return 1;
		case 0x0000796C6465646E:return 1;
		default:return 0;
		}
	case 0x6168656C676E6973:
		switch(wp[1]){
		case 0x0000796C6465646E:return 1;
		default:return 0;
		}
	case 0x61686E6169757165:
		switch(wp[1]){
		case 0x000063696E6F6D72:return 1;
		default:return 0;
		}
	case 0x6168706172746574:
		switch(wp[1]){
		case 0x00006C6163616D72:return 1;
		case 0x00006E6F63616D72:return 1;
		default:return 0;
		}
	case 0x6168706978656C61:
		switch(wp[1]){
		case 0x00006C6163696D72:return 1;
		case 0x00006D7563616D72:return 1;
		case 0x00006E6F63616D72:return 1;
		default:return 0;
		}
	case 0x6168706C6173696D:
		switch(wp[1]){
		case 0x0000657A69746562:return 1;
		default:return 0;
		}
	case 0x6168706D6F726170:
		switch(wp[1]){
		case 0x0000656C65636F6C:return 1;
		default:return 0;
		}
	case 0x6168706F7263616D:
		switch(wp[1]){
		case 0x0000657479636F67:return 1;
		default:return 0;
		}
	case 0x6168706F7263696D:
		switch(wp[1]){
		case 0x0000657479636F67:return 1;
		default:return 0;
		}
	case 0x6168706F72656968:
		switch(wp[1]){
		case 0x0000796C6369746E:return 1;
		default:return 0;
		}
	case 0x6168747968636174:
		switch(wp[1]){
		case 0x000073756F74616E:return 1;
		default:return 0;
		}
	case 0x6169636570736E75:
		switch(wp[1]){
		case 0x0000676E697A696C:return 1;
		default:return 0;
		}
	case 0x6169636572706564:
		switch(wp[1]){
		case 0x0000796C65766974:return 1;
		case 0x0000796C676E6974:return 1;
		default:return 0;
		}
	case 0x6169636572707061:
		switch(wp[1]){
		case 0x00006C616E6F6974:return 1;
		case 0x0000796C65766974:return 1;
		case 0x0000796C676E6974:return 1;
		case 0x0000796C69726F74:return 1;
		default:return 0;
		}
	case 0x616963697473756A:
		switch(wp[1]){
		case 0x0000706968737972:return 1;
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6169636E756E6564:
		switch(wp[1]){
		case 0x0000796C65766974:return 1;
		default:return 0;
		}
	case 0x6169636F736E6F63:
		switch(wp[1]){
		case 0x00006C616E6F6974:return 1;
		default:return 0;
		}
	case 0x6169636F736E6F6E:
		switch(wp[1]){
		case 0x000063697473696C:return 1;
		default:return 0;
		}
	case 0x6169636F73736964:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6169637564617274:
		switch(wp[1]){
		case 0x000063697473696E:return 1;
		default:return 0;
		}
	case 0x6169637572637865:
		switch(wp[1]){
		case 0x0000796C676E6974:return 1;
		default:return 0;
		}
	case 0x6169646172747865:
		switch(wp[1]){
		case 0x00006C617463656C:return 1;
		default:return 0;
		}
	case 0x6169646968637261:
		switch(wp[1]){
		case 0x00006574616E6F63:return 1;
		default:return 0;
		}
	case 0x6169646973627573:
		switch(wp[1]){
		case 0x00007373656E6972:return 1;
		default:return 0;
		}
	case 0x6169646D6F726863:
		switch(wp[1]){
		case 0x00007369736F6E67:return 1;
		default:return 0;
		}
	case 0x6169646F64697269:
		switch(wp[1]){
		case 0x00007369736F6E67:return 1;
		default:return 0;
		}
	case 0x6169646F6574736F:
		switch(wp[1]){
		case 0x0000736973617473:return 1;
		default:return 0;
		}
	case 0x6169646F6874726F:
		switch(wp[1]){
		case 0x0000796870617267:return 1;
		default:return 0;
		}
	case 0x6169646F69646172:
		switch(wp[1]){
		case 0x00007369736F6E67:return 1;
		default:return 0;
		}
	case 0x6169646F6C65796D:
		switch(wp[1]){
		case 0x0000736973617473:return 1;
		default:return 0;
		}
	case 0x6169646F6E656461:
		switch(wp[1]){
		case 0x0000736973617473:return 1;
		default:return 0;
		}
	case 0x6169646F72747361:
		switch(wp[1]){
		case 0x00007369736F6E67:return 1;
		default:return 0;
		}
	case 0x6169646F7275656E:
		switch(wp[1]){
		case 0x00007369736F6E67:return 1;
		default:return 0;
		}
	case 0x6169646F74736968:
		switch(wp[1]){
		case 0x00007369736F6E67:return 1;
		default:return 0;
		}
	case 0x6169647265707968:
		switch(wp[1]){
		case 0x000073697875657A:return 1;
		default:return 0;
		}
	case 0x6169666972746976:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x616966697473756A:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x616967656C6C6F63:
		switch(wp[1]){
		case 0x00007373656E6574:return 1;
		default:return 0;
		}
	case 0x61696C69636E6F63:
		switch(wp[1]){
		case 0x0000796C676E6974:return 1;
		case 0x0000796C69726F74:return 1;
		default:return 0;
		}
	case 0x61696C7261706E75:
		switch(wp[1]){
		case 0x00006465746E656D:return 1;
		default:return 0;
		}
	case 0x61696E696E697571:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x6169726165776E75:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6169726574616D61:
		switch(wp[1]){
		case 0x000063697473696C:return 1;
		default:return 0;
		}
	case 0x6169727261636E75:
		switch(wp[1]){
		case 0x0000656C62616567:return 1;
		default:return 0;
		}
	case 0x61697272616D6E75:
		switch(wp[1]){
		case 0x0000656C62616567:return 1;
		default:return 0;
		}
	case 0x6169727469757165:
		switch(wp[1]){
		case 0x000072616C75676E:return 1;
		default:return 0;
		}
	case 0x616973656C636365:
		switch(wp[1]){
		case 0x00006C6163697473:return 1;
		default:return 0;
		}
	case 0x6169737568746E65:
		switch(wp[1]){
		case 0x00006C6163697473:return 1;
		default:return 0;
		}
	case 0x6169746172676E69:
		switch(wp[1]){
		case 0x0000796C676E6974:return 1;
		default:return 0;
		}
	case 0x61697469706F7270:
		switch(wp[1]){
		case 0x0000796C676E6974:return 1;
		case 0x0000796C69726F74:return 1;
		default:return 0;
		}
	case 0x6169746E6563696C:
		switch(wp[1]){
		case 0x0000706968736574:return 1;
		default:return 0;
		}
	case 0x6169746E69676976:
		switch(wp[1]){
		case 0x000072616C75676E:return 1;
		default:return 0;
		}
	case 0x6169767265706D69:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x616A6F626D756C70:
		switch(wp[1]){
		case 0x0000657469736F72:return 1;
		default:return 0;
		}
	case 0x616B616570736E75:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x616B6C616F707968:
		switch(wp[1]){
		case 0x00007974696E696C:return 1;
		default:return 0;
		}
	case 0x616B6E6968746E75:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x616B6F7265746568:
		switch(wp[1]){
		case 0x00006369746F7972:return 1;
		case 0x00007369736F7972:return 1;
		default:return 0;
		}
	case 0x616C6165676E6F63:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x616C6168636E6F6E:
		switch(wp[1]){
		case 0x00007373656E746E:return 1;
		default:return 0;
		}
	case 0x616C617473627573:
		switch(wp[1]){
		case 0x0000636974696D67:return 1;
		default:return 0;
		}
	case 0x616C636172747865:
		switch(wp[1]){
		case 0x00006C6172747375:return 1;
		case 0x00006D6F6F727373:return 1;
		default:return 0;
		}
	case 0x616C636564657270:
		switch(wp[1]){
		case 0x00006E6F69746172:return 1;
		default:return 0;
		}
	case 0x616C6365646E6F6E:
		switch(wp[1]){
		case 0x00006E6F69746172:return 1;
		default:return 0;
		}
	case 0x616C63656473696D:
		switch(wp[1]){
		case 0x00006E6F69746172:return 1;
		default:return 0;
		}
	case 0x616C6365726E6F6E:
		switch(wp[1]){
		case 0x00006E6F6974616D:return 1;
		default:return 0;
		}
	case 0x616C636E656D6F6E:
		switch(wp[1]){
		case 0x00006C6169726F74:return 1;
		case 0x0000747369727574:return 1;
		default:return 0;
		}
	case 0x616C636F72706572:
		switch(wp[1]){
		case 0x00006E6F6974616D:return 1;
		default:return 0;
		}
	case 0x616C637265707968:
		switch(wp[1]){
		case 0x00006C6163697373:return 1;
		default:return 0;
		}
	case 0x616C6378656E6F6E:
		switch(wp[1]){
		case 0x000079726F74616D:return 1;
		default:return 0;
		}
	case 0x616C6567696D6573:
		switch(wp[1]){
		case 0x000073756F6E6974:return 1;
		default:return 0;
		}
	case 0x616C65676F726573:
		switch(wp[1]){
		case 0x000073756F6E6974:return 1;
		default:return 0;
		}
	case 0x616C656D61726170:
		switch(wp[1]){
		case 0x00006574696E6F63:return 1;
		default:return 0;
		}
	case 0x616C656E69636972:
		switch(wp[1]){
		case 0x000063696E696469:return 1;
		default:return 0;
		}
	case 0x616C657265707573:
		switch(wp[1]){
		case 0x0000657461726F62:return 1;
		default:return 0;
		}
	case 0x616C666E696E6F6E:
		switch(wp[1]){
		case 0x0000656C62616D6D:return 1;
		default:return 0;
		}
	case 0x616C676172746E69:
		switch(wp[1]){
		case 0x000072616C75646E:return 1;
		default:return 0;
		}
	case 0x616C676972756C70:
		switch(wp[1]){
		case 0x000072616C75646E:return 1;
		default:return 0;
		}
	case 0x616C676F7275656E:
		switch(wp[1]){
		case 0x000072616C75646E:return 1;
		default:return 0;
		}
	case 0x616C677265746E69:
		switch(wp[1]){
		case 0x000072616C75646E:return 1;
		default:return 0;
		}
	case 0x616C696176616E75:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x616C69646F736176:
		switch(wp[1]){
		case 0x00006E6F69746174:return 1;
		default:return 0;
		}
	case 0x616C6968696E6E61:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x616C696878656E75:
		switch(wp[1]){
		case 0x0000676E69746172:return 1;
		default:return 0;
		}
	case 0x616C696D69737361:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x616C697264617571:
		switch(wp[1]){
		case 0x00006574616E696D:return 1;
		default:return 0;
		}
	case 0x616C6C61636E6F6E:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x616C6C6562727574:
		switch(wp[1]){
		case 0x00006D726F666972:return 1;
		default:return 0;
		}
	case 0x616C6C656373696D:
		switch(wp[1]){
		case 0x00006E616972616E:return 1;
		default:return 0;
		}
	case 0x616C6C6576617274:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x616C6C696D6D616D:
		switch(wp[1]){
		case 0x0000797473616C70:return 1;
		default:return 0;
		}
	case 0x616C6C6F63657270:
		switch(wp[1]){
		case 0x0000656C62617370:return 1;
		default:return 0;
		}
	case 0x616C6C6F636E6F6E:
		switch(wp[1]){
		case 0x0000656C62697370:return 1;
		default:return 0;
		}
	case 0x616C6F6D72656874:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x616C706172746C75:
		switch(wp[1]){
		case 0x0000656C62697375:return 1;
		case 0x000079726174656E:return 1;
		default:return 0;
		}
	case 0x616C706172746E69:
		switch(wp[1]){
		case 0x00006C61746E6563:return 1;
		default:return 0;
		}
	case 0x616C706172747865:
		switch(wp[1]){
		case 0x00006C61746E6563:return 1;
		case 0x000079726174656E:return 1;
		default:return 0;
		}
	case 0x616C7065726E6F6E:
		switch(wp[1]){
		case 0x0000746E656D6563:return 1;
		default:return 0;
		}
	case 0x616C70696C6C6976:
		switch(wp[1]){
		case 0x00006C61746E6563:return 1;
		default:return 0;
		}
	case 0x616C706D6F636E75:
		switch(wp[1]){
		case 0x000065636E617369:return 1;
		default:return 0;
		}
	case 0x616C706F63726173:
		switch(wp[1]){
		case 0x0000636974616D73:return 1;
		default:return 0;
		}
	case 0x616C706F63736964:
		switch(wp[1]){
		case 0x00006C61746E6563:return 1;
		default:return 0;
		}
	case 0x616C706F6C706964:
		switch(wp[1]){
		case 0x00006574616C7563:return 1;
		default:return 0;
		}
	case 0x616C706F6E617963:
		switch(wp[1]){
		case 0x00006574696E6974:return 1;
		case 0x000073756F6E6974:return 1;
		default:return 0;
		}
	case 0x616C706F72657475:
		switch(wp[1]){
		case 0x00006C61746E6563:return 1;
		default:return 0;
		}
	case 0x616C706F72746572:
		switch(wp[1]){
		case 0x00006C61746E6563:return 1;
		default:return 0;
		}
	case 0x616C706F746F7270:
		switch(wp[1]){
		case 0x0000636974616D73:return 1;
		default:return 0;
		}
	case 0x616C706F74736968:
		switch(wp[1]){
		case 0x00007369736F6D73:return 1;
		default:return 0;
		}
	case 0x616C706F7972616B:
		switch(wp[1]){
		case 0x0000636974616D73:return 1;
		default:return 0;
		}
	case 0x616C707075736E75:
		switch(wp[1]){
		case 0x0000656C6261746E:return 1;
		default:return 0;
		}
	case 0x616C707265707573:
		switch(wp[1]){
		case 0x0000656C62697375:return 1;
		default:return 0;
		}
	case 0x616C707265746E69:
		switch(wp[1]){
		case 0x00006C61746E6563:return 1;
		case 0x000079726174656E:return 1;
		default:return 0;
		}
	case 0x616C707369726570:
		switch(wp[1]){
		case 0x000063696E68636E:return 1;
		default:return 0;
		}
	case 0x616C70736E617274:
		switch(wp[1]){
		case 0x0000656C6261746E:return 1;
		default:return 0;
		}
	case 0x616C70736F636163:
		switch(wp[1]){
		case 0x000061696E68636E:return 1;
		default:return 0;
		}
	case 0x616C70786573696D:
		switch(wp[1]){
		case 0x00006E6F6974616E:return 1;
		default:return 0;
		}
	case 0x616C7563616D6D69:
		switch(wp[1]){
		case 0x00007373656E6574:return 1;
		default:return 0;
		}
	case 0x616C756369747261:
		switch(wp[1]){
		case 0x00007373656E6574:return 1;
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x616C756D75636361:
		switch(wp[1]){
		case 0x0000796C65766974:return 1;
		default:return 0;
		}
	case 0x616C7570696E616D:
		switch(wp[1]){
		case 0x0000796C65766974:return 1;
		default:return 0;
		}
	case 0x616C7963696C6173:
		switch(wp[1]){
		case 0x00006564696C696E:return 1;
		default:return 0;
		}
	case 0x616C796870616E61:
		switch(wp[1]){
		case 0x00006E65676F7463:return 1;
		default:return 0;
		}
	case 0x616C7968706F7270:
		switch(wp[1]){
		case 0x00006C6163697463:return 1;
		default:return 0;
		}
	case 0x616D696C636F6962:
		switch(wp[1]){
		case 0x000079676F6C6F74:return 1;
		default:return 0;
		}
	case 0x616D69746967656C:
		switch(wp[1]){
		case 0x00007373656E6574:return 1;
		default:return 0;
		}
	case 0x616D697473656E69:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x616D6C6567676F6B:
		switch(wp[1]){
		case 0x0000656A74656E6E:return 1;
		default:return 0;
		}
	case 0x616D6C6F6F686373:
		switch(wp[1]){
		case 0x0000796C72657473:return 1;
		default:return 0;
		}
	case 0x616D6D616C666E69:
		switch(wp[1]){
		case 0x0000796C69726F74:return 1;
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x616D6D6172676E69:
		switch(wp[1]){
		case 0x00006D7369636974:return 1;
		default:return 0;
		}
	case 0x616D6D6172676E75:
		switch(wp[1]){
		case 0x00006D7369636974:return 1;
		default:return 0;
		}
	case 0x616D6D75736E6F63:
		switch(wp[1]){
		case 0x0000796C65766974:return 1;
		default:return 0;
		}
	case 0x616D6F68706D796E:
		switch(wp[1]){
		case 0x00006C616361696E:return 1;
		default:return 0;
		}
	case 0x616D6F696C626962:
		switch(wp[1]){
		case 0x00006C616361696E:return 1;
		default:return 0;
		}
	case 0x616D6F6C6167656D:
		switch(wp[1]){
		case 0x00006C616361696E:return 1;
		default:return 0;
		}
	case 0x616D6F6D72656874:
		switch(wp[1]){
		case 0x0000636974656E67:return 1;
		default:return 0;
		}
	case 0x616D6F6E6F726170:
		switch(wp[1]){
		case 0x00006C6163697473:return 1;
		default:return 0;
		}
	case 0x616D6F6E6F746E61:
		switch(wp[1]){
		case 0x00006C6163697473:return 1;
		default:return 0;
		}
	case 0x616D6F7265646973:
		switch(wp[1]){
		case 0x0000636974656E67:return 1;
		default:return 0;
		}
	case 0x616D6F726574616C:
		switch(wp[1]){
		case 0x00006C616E696772:return 1;
		default:return 0;
		}
	case 0x616D6F74706D7973:
		switch(wp[1]){
		case 0x000079676F6C6F74:return 1;
		default:return 0;
		}
	case 0x616D726570627573:
		switch(wp[1]){
		case 0x0000796C746E656E:return 1;
		default:return 0;
		}
	case 0x616D7269666E6F63:
		switch(wp[1]){
		case 0x0000796C65766974:return 1;
		case 0x0000796C69726F74:return 1;
		default:return 0;
		}
	case 0x616D726F666E6F63:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x616E616863636162:
		switch(wp[1]){
		case 0x0000796C6E61696C:return 1;
		default:return 0;
		}
	case 0x616E616863797370:
		switch(wp[1]){
		case 0x000074736973796C:return 1;
		default:return 0;
		}
	case 0x616E616968636172:
		switch(wp[1]){
		case 0x000061697365676C:return 1;
		default:return 0;
		}
	case 0x616E616D72656874:
		switch(wp[1]){
		case 0x000061697365676C:return 1;
		default:return 0;
		}
	case 0x616E65696C616E69:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x616E65747565696C:
		switch(wp[1]){
		case 0x000070696873746E:return 1;
		default:return 0;
		}
	case 0x616E676572706D69:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x616E6964726F6E69:
		switch(wp[1]){
		case 0x00007373656E6574:return 1;
		default:return 0;
		}
	case 0x616E6964726F6E75:
		switch(wp[1]){
		case 0x00007373656E6574:return 1;
		case 0x00007373656E6972:return 1;
		default:return 0;
		}
	case 0x616E696D65666665:
		switch(wp[1]){
		case 0x00007373656E6574:return 1;
		default:return 0;
		}
	case 0x616E696D6F6E6564:
		switch(wp[1]){
		case 0x00006C616E6F6974:return 1;
		case 0x0000796C65766974:return 1;
		default:return 0;
		}
	case 0x616E696D756C6C69:
		switch(wp[1]){
		case 0x00006C616E6F6974:return 1;
		case 0x0000796C676E6974:return 1;
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x616E696D75726E75:
		switch(wp[1]){
		case 0x0000796C676E6974:return 1;
		default:return 0;
		}
	case 0x616E6975676E6173:
		switch(wp[1]){
		case 0x00007373656E6972:return 1;
		default:return 0;
		}
	case 0x616E69757179786F:
		switch(wp[1]){
		case 0x00006C6F74706573:return 1;
		default:return 0;
		}
	case 0x616E6D7563726963:
		switch(wp[1]){
		case 0x0000657461676976:return 1;
		default:return 0;
		}
	case 0x616E6E6970697274:
		switch(wp[1]){
		case 0x0000746365736974:return 1;
		default:return 0;
		}
	case 0x616E6E69746E6974:
		switch(wp[1]){
		case 0x00006574616C7562:return 1;
		case 0x00006D73696C7562:return 1;
		case 0x000073756F6C7562:return 1;
		case 0x0000746E616C7562:return 1;
		case 0x00007473696C7562:return 1;
		case 0x00007972616C7562:return 1;
		default:return 0;
		}
	case 0x616E6F6475657370:
		switch(wp[1]){
		case 0x0000616C75636976:return 1;
		case 0x00006369746F6372:return 1;
		case 0x00006C616E6F6974:return 1;
		default:return 0;
		}
	case 0x616E6F6968736166:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x616E6F696C6C696D:
		switch(wp[1]){
		case 0x00006D6F64657269:return 1;
		default:return 0;
		}
	case 0x616E6F696E69706F:
		switch(wp[1]){
		case 0x0000796C65766974:return 1;
		default:return 0;
		}
	case 0x616E6F6973736170:
		switch(wp[1]){
		case 0x00007373656E6574:return 1;
		default:return 0;
		}
	case 0x616E6F697373696D:
		switch(wp[1]){
		case 0x0000706968737972:return 1;
		default:return 0;
		}
	case 0x616E6F6974617473:
		switch(wp[1]){
		case 0x00007373656E6972:return 1;
		default:return 0;
		}
	case 0x616E6F69746E656D:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x616E6F6D68637261:
		switch(wp[1]){
		case 0x0000747369686372:return 1;
		default:return 0;
		}
	case 0x616E6F6D69746E61:
		switch(wp[1]){
		case 0x00006C6169686372:return 1;
		case 0x0000747369686372:return 1;
		default:return 0;
		}
	case 0x616E7261656C6E75:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x616E726F7265766F:
		switch(wp[1]){
		case 0x00006465746E656D:return 1;
		default:return 0;
		}
	case 0x616E79646F726561:
		switch(wp[1]){
		case 0x000074736963696D:return 1;
		default:return 0;
		}
	case 0x616F636F6C796D61:
		switch(wp[1]){
		case 0x00006573616C7567:return 1;
		default:return 0;
		}
	case 0x616F68636F6C6F68:
		switch(wp[1]){
		case 0x00006C6164696F6E:return 1;
		default:return 0;
		}
	case 0x616F6C756E617267:
		switch(wp[1]){
		case 0x000065736F706964:return 1;
		default:return 0;
		}
	case 0x616F72646E6F6863:
		switch(wp[1]){
		case 0x0000616D6F69676E:return 1;
		case 0x0000616D6F6E6564:return 1;
		default:return 0;
		}
	case 0x616F727065726E75:
		switch(wp[1]){
		case 0x0000656C62616863:return 1;
		case 0x0000796C62616863:return 1;
		default:return 0;
		}
	case 0x616F727065727269:
		switch(wp[1]){
		case 0x0000656C62616863:return 1;
		case 0x0000796C62616863:return 1;
		default:return 0;
		}
	case 0x616F727070616E69:
		switch(wp[1]){
		case 0x0000656C62616863:return 1;
		case 0x0000796C62616863:return 1;
		default:return 0;
		}
	case 0x616F727070616E75:
		switch(wp[1]){
		case 0x0000656C62616863:return 1;
		default:return 0;
		}
	case 0x6170657270657270:
		switch(wp[1]){
		case 0x00006E6F69746172:return 1;
		default:return 0;
		}
	case 0x61706572706E6F6E:
		switch(wp[1]){
		case 0x00006E6F69746172:return 1;
		default:return 0;
		}
	case 0x61706573696D6573:
		switch(wp[1]){
		case 0x0000747369746172:return 1;
		default:return 0;
		}
	case 0x6170696369746E61:
		switch(wp[1]){
		case 0x0000796C65766974:return 1;
		case 0x0000796C69726F74:return 1;
		default:return 0;
		}
	case 0x6170696873726F77:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6170697571736964:
		switch(wp[1]){
		case 0x00006E6F69746172:return 1;
		default:return 0;
		}
	case 0x61706D6163627573:
		switch(wp[1]){
		case 0x00006574616C756E:return 1;
		default:return 0;
		}
	case 0x61706D79736E6F6E:
		switch(wp[1]){
		case 0x0000636974656874:return 1;
		case 0x000072657A696874:return 1;
		default:return 0;
		}
	case 0x61706F6863797370:
		switch(wp[1]){
		case 0x0000796863796E6E:return 1;
		default:return 0;
		}
	case 0x61706F6967616C70:
		switch(wp[1]){
		case 0x00006D7569676174:return 1;
		default:return 0;
		}
	case 0x61706F6C65766564:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x61706F6D61757173:
		switch(wp[1]){
		case 0x00006C6174656972:return 1;
		default:return 0;
		}
	case 0x61706F6E65687073:
		switch(wp[1]){
		case 0x0000656E6974616C:return 1;
		case 0x00006C6174656972:return 1;
		default:return 0;
		}
	case 0x61706F72656D6F76:
		switch(wp[1]){
		case 0x0000656E6974616C:return 1;
		default:return 0;
		}
	case 0x61706F7265746E61:
		switch(wp[1]){
		case 0x00006C6174656972:return 1;
		default:return 0;
		}
	case 0x61706F7269656863:
		switch(wp[1]){
		case 0x00006D7569676174:return 1;
		default:return 0;
		}
	case 0x61706F726F6C6863:
		switch(wp[1]){
		case 0x0000636964616C6C:return 1;
		default:return 0;
		}
	case 0x61706F72706E6F6E:
		switch(wp[1]){
		case 0x00006E6F69746167:return 1;
		default:return 0;
		}
	case 0x61706F7274736167:
		switch(wp[1]){
		case 0x00006C6174656972:return 1;
		default:return 0;
		}
	case 0x61706F73736F6C67:
		switch(wp[1]){
		case 0x0000656E6974616C:return 1;
		default:return 0;
		}
	case 0x61706F746E6F7266:
		switch(wp[1]){
		case 0x00006C6174656972:return 1;
		default:return 0;
		}
	case 0x61707369646E6F6E:
		switch(wp[1]){
		case 0x0000676E69676172:return 1;
		default:return 0;
		}
	case 0x6170737265746E69:
		switch(wp[1]){
		case 0x0000796C6C616974:return 1;
		default:return 0;
		}
	case 0x61707968696D6568:
		switch(wp[1]){
		case 0x000061697365676C:return 1;
		default:return 0;
		}
	case 0x6172616C69687865:
		switch(wp[1]){
		case 0x0000796C676E6974:return 1;
		default:return 0;
		}
	case 0x617261706174656D:
		switch(wp[1]){
		case 0x00006C6172657470:return 1;
		case 0x00006E6F72657470:return 1;
		default:return 0;
		}
	case 0x6172617065727269:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6172617065736E69:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x61726170696D6568:
		switch(wp[1]){
		case 0x0000616967656C70:return 1;
		case 0x00006D7369746973:return 1;
		default:return 0;
		}
	case 0x61726170696D6573:
		switch(wp[1]){
		case 0x00006D7369746973:return 1;
		default:return 0;
		}
	case 0x6172617069746E61:
		switch(wp[1]){
		case 0x0000656870617267:return 1;
		default:return 0;
		}
	case 0x617261706F63656F:
		switch(wp[1]){
		case 0x00006D7369746973:return 1;
		default:return 0;
		}
	case 0x617261706F6E6578:
		switch(wp[1]){
		case 0x00006D7369746973:return 1;
		default:return 0;
		}
	case 0x617261706F73656D:
		switch(wp[1]){
		case 0x00006C6172657470:return 1;
		case 0x00006E6F72657470:return 1;
		default:return 0;
		}
	case 0x617261706F747561:
		switch(wp[1]){
		case 0x00006D7369746973:return 1;
		default:return 0;
		}
	case 0x61726170796C6F70:
		switch(wp[1]){
		case 0x00006D7369746973:return 1;
		default:return 0;
		}
	case 0x61726172746E6F63:
		switch(wp[1]){
		case 0x00006C616E6F6974:return 1;
		default:return 0;
		}
	case 0x6172626172666E69:
		switch(wp[1]){
		case 0x00006C616968636E:return 1;
		default:return 0;
		}
	case 0x6172626172707573:
		switch(wp[1]){
		case 0x00006C616968636E:return 1;
		default:return 0;
		}
	case 0x6172626172746E69:
		switch(wp[1]){
		case 0x00006C616968636E:return 1;
		default:return 0;
		}
	case 0x6172626172747865:
		switch(wp[1]){
		case 0x00006C616968636E:return 1;
		default:return 0;
		}
	case 0x6172626974636574:
		switch(wp[1]){
		case 0x00006E616968636E:return 1;
		default:return 0;
		}
	case 0x6172626974756373:
		switch(wp[1]){
		case 0x00006E616968636E:return 1;
		default:return 0;
		}
	case 0x6172626F63637562:
		switch(wp[1]){
		case 0x00006C616968636E:return 1;
		default:return 0;
		}
	case 0x6172626F6D6C7570:
		switch(wp[1]){
		case 0x00006C616968636E:return 1;
		default:return 0;
		}
	case 0x6172626F6E657473:
		switch(wp[1]){
		case 0x0000636974616D67:return 1;
		default:return 0;
		}
	case 0x6172626F726F7061:
		switch(wp[1]){
		case 0x00006E616968636E:return 1;
		default:return 0;
		}
	case 0x6172627265746E69:
		switch(wp[1]){
		case 0x00006C616968636E:return 1;
		default:return 0;
		}
	case 0x6172636172746E69:
		switch(wp[1]){
		case 0x0000796C6C61696E:return 1;
		default:return 0;
		}
	case 0x61726361736E6F6E:
		switch(wp[1]){
		case 0x00006C61746E656D:return 1;
		default:return 0;
		}
	case 0x61726369646E6168:
		switch(wp[1]){
		case 0x00006E616D737466:return 1;
		case 0x0000706968737466:return 1;
		default:return 0;
		}
	case 0x6172646568746163:
		switch(wp[1]){
		case 0x000065757173656C:return 1;
		default:return 0;
		}
	case 0x6172646F6C696870:
		switch(wp[1]){
		case 0x000074736974616D:return 1;
		default:return 0;
		}
	case 0x6172646F746F6870:
		switch(wp[1]){
		case 0x000073636974616D:return 1;
		case 0x000074736974616D:return 1;
		default:return 0;
		}
	case 0x6172647265707573:
		switch(wp[1]){
		case 0x000074736974616D:return 1;
		default:return 0;
		}
	case 0x61726562696C6564:
		switch(wp[1]){
		case 0x00007373656E6574:return 1;
		case 0x0000796C65766974:return 1;
		default:return 0;
		}
	case 0x617265646E75616C:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x617265646F6D6D69:
		switch(wp[1]){
		case 0x00007373656E6574:return 1;
		default:return 0;
		}
	case 0x617265646F6D6E75:
		switch(wp[1]){
		case 0x00007373656E6574:return 1;
		default:return 0;
		}
	case 0x6172656767617865:
		switch(wp[1]){
		case 0x0000796C65766974:return 1;
		case 0x0000796C676E6974:return 1;
		default:return 0;
		}
	case 0x61726568746E6F6E:
		switch(wp[1]){
		case 0x0000636974756570:return 1;
		default:return 0;
		}
	case 0x6172656C6F746E69:
		switch(wp[1]){
		case 0x00007373656E746E:return 1;
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6172656D65746E69:
		switch(wp[1]){
		case 0x00007373656E6574:return 1;
		default:return 0;
		}
	case 0x6172656D756E6E69:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6172656E65676564:
		switch(wp[1]){
		case 0x00007373656E6574:return 1;
		default:return 0;
		}
	case 0x6172656E65676572:
		switch(wp[1]){
		case 0x00007373656E6574:return 1;
		case 0x0000796C65766974:return 1;
		default:return 0;
		}
	case 0x6172656E65676E69:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6172656E756D6572:
		switch(wp[1]){
		case 0x0000796C65766974:return 1;
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x617265706F657270:
		switch(wp[1]){
		case 0x0000796C65766974:return 1;
		default:return 0;
		}
	case 0x6172657073617865:
		switch(wp[1]){
		case 0x0000796C676E6974:return 1;
		default:return 0;
		}
	case 0x6172657075636572:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6172657075736E69:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6172657075746976:
		switch(wp[1]){
		case 0x0000796C65766974:return 1;
		default:return 0;
		}
	case 0x6172657465766E69:
		switch(wp[1]){
		case 0x00007373656E6574:return 1;
		default:return 0;
		}
	case 0x61726574696C6C61:
		switch(wp[1]){
		case 0x00006C616E6F6974:return 1;
		case 0x0000796C65766974:return 1;
		default:return 0;
		}
	case 0x61726574696C6C69:
		switch(wp[1]){
		case 0x00007373656E6574:return 1;
		default:return 0;
		}
	case 0x617265746C616E69:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x617265746C616E75:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x617265746C756461:
		switch(wp[1]){
		case 0x00007373656E6574:return 1;
		default:return 0;
		}
	case 0x617265746E756F63:
		switch(wp[1]){
		case 0x0000646572697474:return 1;
		case 0x000065636E617664:return 1;
		case 0x0000657461746967:return 1;
		case 0x0000737365726464:return 1;
		default:return 0;
		}
	case 0x6172657474756E75:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6172657665737361:
		switch(wp[1]){
		case 0x0000796C65766974:return 1;
		case 0x0000796C676E6974:return 1;
		default:return 0;
		}
	case 0x617265766F636572:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6172666E65736964:
		switch(wp[1]){
		case 0x000065736968636E:return 1;
		default:return 0;
		}
	case 0x6172666F63756C67:
		switch(wp[1]){
		case 0x00006E696C75676E:return 1;
		default:return 0;
		}
	case 0x6172667265646E75:
		switch(wp[1]){
		case 0x00006B726F77656D:return 1;
		default:return 0;
		}
	case 0x6172667265746E69:
		switch(wp[1]){
		case 0x00006C616E726574:return 1;
		default:return 0;
		}
	case 0x617267616C666564:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6172676172746574:
		switch(wp[1]){
		case 0x0000636974616D6D:return 1;
		default:return 0;
		}
	case 0x61726761746E6170:
		switch(wp[1]){
		case 0x00006C6163696870:return 1;
		default:return 0;
		}
	case 0x61726761746E6570:
		switch(wp[1]){
		case 0x0000636974616D6D:return 1;
		default:return 0;
		}
	case 0x61726765646E6F6E:
		switch(wp[1]){
		case 0x00006E6F69746164:return 1;
		default:return 0;
		}
	case 0x6172676761657270:
		switch(wp[1]){
		case 0x00006E6F69746176:return 1;
		default:return 0;
		}
	case 0x617267696C6C6163:
		switch(wp[1]){
		case 0x00006C6163696870:return 1;
		default:return 0;
		}
	case 0x6172676970656E75:
		switch(wp[1]){
		case 0x0000636974616D6D:return 1;
		default:return 0;
		}
	case 0x61726769746C756D:
		switch(wp[1]){
		case 0x00006574616C756E:return 1;
		default:return 0;
		}
	case 0x6172676E656C6F6D:
		switch(wp[1]){
		case 0x0000657469666661:return 1;
		default:return 0;
		}
	case 0x6172676E6F636572:
		switch(wp[1]){
		case 0x00006574616C7574:return 1;
		default:return 0;
		}
	case 0x6172676E6F636E75:
		switch(wp[1]){
		case 0x00006574616C7574:return 1;
		default:return 0;
		}
	case 0x6172676F636E697A:
		switch(wp[1]){
		case 0x00006C6163696870:return 1;
		default:return 0;
		}
	case 0x6172676F63736964:
		switch(wp[1]){
		case 0x00006C6163696870:return 1;
		default:return 0;
		}
	case 0x6172676F65676E75:
		switch(wp[1]){
		case 0x00006C6163696870:return 1;
		default:return 0;
		}
	case 0x6172676F656C6170:
		switch(wp[1]){
		case 0x00006C6163696870:return 1;
		default:return 0;
		}
	case 0x6172676F68746170:
		switch(wp[1]){
		case 0x00006C6163696870:return 1;
		default:return 0;
		}
	case 0x6172676F6874696C:
		switch(wp[1]){
		case 0x00006C6163696870:return 1;
		default:return 0;
		}
	case 0x6172676F6874726F:
		switch(wp[1]){
		case 0x00006C6163696870:return 1;
		default:return 0;
		}
	case 0x6172676F69626E75:
		switch(wp[1]){
		case 0x00006C6163696870:return 1;
		default:return 0;
		}
	case 0x6172676F69646172:
		switch(wp[1]){
		case 0x00006C6163696870:return 1;
		default:return 0;
		}
	case 0x6172676F69676168:
		switch(wp[1]){
		case 0x00006C6163696870:return 1;
		default:return 0;
		}
	case 0x6172676F696C6568:
		switch(wp[1]){
		case 0x00006C6163696870:return 1;
		default:return 0;
		}
	case 0x6172676F6C6F6469:
		switch(wp[1]){
		case 0x00006C6163696870:return 1;
		default:return 0;
		}
	case 0x6172676F6C706964:
		switch(wp[1]){
		case 0x00006C6163696870:return 1;
		default:return 0;
		}
	case 0x6172676F6C797473:
		switch(wp[1]){
		case 0x00006C6163696870:return 1;
		default:return 0;
		}
	case 0x6172676F6D736F63:
		switch(wp[1]){
		case 0x00006C6163696870:return 1;
		default:return 0;
		}
	case 0x6172676F6E617275:
		switch(wp[1]){
		case 0x00006C6163696870:return 1;
		default:return 0;
		}
	case 0x6172676F6E656373:
		switch(wp[1]){
		case 0x00006C6163696870:return 1;
		default:return 0;
		}
	case 0x6172676F6E656461:
		switch(wp[1]){
		case 0x00006C6163696870:return 1;
		default:return 0;
		}
	case 0x6172676F6E657473:
		switch(wp[1]){
		case 0x00006C6163696870:return 1;
		default:return 0;
		}
	case 0x6172676F6E686369:
		switch(wp[1]){
		case 0x00006C6163696870:return 1;
		default:return 0;
		}
	case 0x6172676F6E687465:
		switch(wp[1]){
		case 0x00006C6163696870:return 1;
		default:return 0;
		}
	case 0x6172676F6E6F6369:
		switch(wp[1]){
		case 0x00006C6163696870:return 1;
		default:return 0;
		}
	case 0x6172676F6E6F6870:
		switch(wp[1]){
		case 0x0000636974616D6D:return 1;
		case 0x00006C6163696870:return 1;
		default:return 0;
		}
	case 0x6172676F7263696D:
		switch(wp[1]){
		case 0x000064696F74696E:return 1;
		case 0x00006C6163696870:return 1;
		default:return 0;
		}
	case 0x6172676F72647968:
		switch(wp[1]){
		case 0x00006C6163696870:return 1;
		default:return 0;
		}
	case 0x6172676F72656968:
		switch(wp[1]){
		case 0x0000636974616D6D:return 1;
		case 0x00006C6163696870:return 1;
		default:return 0;
		}
	case 0x6172676F72657470:
		switch(wp[1]){
		case 0x00006C6163696870:return 1;
		default:return 0;
		}
	case 0x6172676F72696863:
		switch(wp[1]){
		case 0x00006C6163696870:return 1;
		default:return 0;
		}
	case 0x6172676F72697073:
		switch(wp[1]){
		case 0x00006E6964696870:return 1;
		default:return 0;
		}
	case 0x6172676F726F6863:
		switch(wp[1]){
		case 0x00006C6163696870:return 1;
		default:return 0;
		}
	case 0x6172676F72746570:
		switch(wp[1]){
		case 0x00006C6163696870:return 1;
		default:return 0;
		}
	case 0x6172676F72746572:
		switch(wp[1]){
		case 0x00006E6F69746164:return 1;
		case 0x0000796C676E6964:return 1;
		case 0x000079726F746164:return 1;
		default:return 0;
		}
	case 0x6172676F73707968:
		switch(wp[1]){
		case 0x00006C6163696870:return 1;
		default:return 0;
		}
	case 0x6172676F74657968:
		switch(wp[1]){
		case 0x00006C6163696870:return 1;
		default:return 0;
		}
	case 0x6172676F746E6170:
		switch(wp[1]){
		case 0x00006C6163696870:return 1;
		default:return 0;
		}
	case 0x6172676F746F6870:
		switch(wp[1]){
		case 0x0000656C62616870:return 1;
		case 0x00006C6163696870:return 1;
		case 0x0000726574656D6D:return 1;
		case 0x0000747369727576:return 1;
		case 0x0000797274656D6D:return 1;
		default:return 0;
		}
	case 0x6172676F74726163:
		switch(wp[1]){
		case 0x00006C6163696870:return 1;
		default:return 0;
		}
	case 0x6172676F74736968:
		switch(wp[1]){
		case 0x00006C6163696870:return 1;
		default:return 0;
		}
	case 0x6172676F74796870:
		switch(wp[1]){
		case 0x00006C6163696870:return 1;
		default:return 0;
		}
	case 0x6172677265646E75:
		switch(wp[1]){
		case 0x0000657474657564:return 1;
		default:return 0;
		}
	case 0x6172677265707573:
		switch(wp[1]){
		case 0x0000657461746976:return 1;
		default:return 0;
		}
	case 0x6172677265746E69:
		switch(wp[1]){
		case 0x00006E6F69746164:return 1;
		default:return 0;
		}
	case 0x6172677968636174:
		switch(wp[1]){
		case 0x00006C6163696870:return 1;
		default:return 0;
		}
	case 0x6172687061726170:
		switch(wp[1]){
		case 0x00006C6163697473:return 1;
		default:return 0;
		}
	case 0x617268706174656D:
		switch(wp[1]){
		case 0x00006C6163697473:return 1;
		default:return 0;
		}
	case 0x6172687069726570:
		switch(wp[1]){
		case 0x00006C6163697473:return 1;
		default:return 0;
		}
	case 0x6172687069746E61:
		switch(wp[1]){
		case 0x00006C6163697473:return 1;
		default:return 0;
		}
	case 0x61726970736E6F63:
		switch(wp[1]){
		case 0x00006C6169726F74:return 1;
		default:return 0;
		}
	case 0x6172697073726570:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6172697365646E75:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x61726D6F63657270:
		switch(wp[1]){
		case 0x0000706968736564:return 1;
		default:return 0;
		}
	case 0x61726F6361726F63:
		switch(wp[1]){
		case 0x000073696C616964:return 1;
		default:return 0;
		}
	case 0x61726F6475657370:
		switch(wp[1]){
		case 0x00006D73696D6563:return 1;
		default:return 0;
		}
	case 0x61726F6769766E69:
		switch(wp[1]){
		case 0x0000796C65766974:return 1;
		case 0x0000796C676E6974:return 1;
		default:return 0;
		}
	case 0x61726F696C6F6373:
		switch(wp[1]){
		case 0x0000636974696863:return 1;
		default:return 0;
		}
	case 0x61726F6C75627574:
		switch(wp[1]){
		case 0x000065736F6D6563:return 1;
		default:return 0;
		}
	case 0x6172706F746E6170:
		switch(wp[1]){
		case 0x0000636974616D67:return 1;
		default:return 0;
		}
	case 0x6172706F746F7270:
		switch(wp[1]){
		case 0x0000636974616D67:return 1;
		default:return 0;
		}
	case 0x6172726574627573:
		switch(wp[1]){
		case 0x000073756F657571:return 1;
		case 0x0000796C6E61656E:return 1;
		default:return 0;
		}
	case 0x6172726574657270:
		switch(wp[1]){
		case 0x00006C616E6F6974:return 1;
		default:return 0;
		}
	case 0x61727465726E6F6E:
		switch(wp[1]){
		case 0x0000656C62616563:return 1;
		default:return 0;
		}
	case 0x6172746E65736964:
		switch(wp[1]){
		case 0x0000746E656D6E69:return 1;
		default:return 0;
		}
	case 0x6172746E6F636E75:
		switch(wp[1]){
		case 0x0000646574636964:return 1;
		case 0x0000656C62617473:return 1;
		default:return 0;
		}
	case 0x6172746F6D6C7570:
		switch(wp[1]){
		case 0x0000657461656863:return 1;
		case 0x0000797261656863:return 1;
		default:return 0;
		}
	case 0x6172747265706D69:
		switch(wp[1]){
		case 0x0000656C6269736E:return 1;
		default:return 0;
		}
	case 0x6172747361627573:
		switch(wp[1]){
		case 0x000064696F6C6167:return 1;
		default:return 0;
		}
	case 0x6172747365726E75:
		switch(wp[1]){
		case 0x0000656C62616E69:return 1;
		case 0x0000796C62616E69:return 1;
		case 0x0000796C64656E69:return 1;
		default:return 0;
		}
	case 0x6172747365727269:
		switch(wp[1]){
		case 0x0000656C62616E69:return 1;
		case 0x0000796C62616E69:return 1;
		default:return 0;
		}
	case 0x6172747369646E75:
		switch(wp[1]){
		case 0x0000796C64657463:return 1;
		default:return 0;
		}
	case 0x617274736967616D:
		switch(wp[1]){
		case 0x0000706968736574:return 1;
		default:return 0;
		}
	case 0x6172747369676572:
		switch(wp[1]){
		case 0x00006C616E6F6974:return 1;
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x61727473696D6573:
		switch(wp[1]){
		case 0x0000646569666974:return 1;
		default:return 0;
		}
	case 0x617274737265766F:
		switch(wp[1]){
		case 0x00007373656E7469:return 1;
		default:return 0;
		}
	case 0x61727473756C6C69:
		switch(wp[1]){
		case 0x00006C616E6F6974:return 1;
		case 0x0000796C65766974:return 1;
		default:return 0;
		}
	case 0x61727478656E6F6E:
		switch(wp[1]){
		case 0x00006E6F69746964:return 1;
		default:return 0;
		}
	case 0x6172756363616E69:
		switch(wp[1]){
		case 0x00007373656E6574:return 1;
		default:return 0;
		}
	case 0x6172756363616E75:
		switch(wp[1]){
		case 0x00007373656E6574:return 1;
		default:return 0;
		}
	case 0x617275636F636F70:
		switch(wp[1]){
		case 0x00006D736965746E:return 1;
		default:return 0;
		}
	case 0x617275646E656E75:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6172756A65746E61:
		switch(wp[1]){
		case 0x00006D75746E656D:return 1;
		default:return 0;
		}
	case 0x6172756F63736964:
		switch(wp[1]){
		case 0x0000656C62616567:return 1;
		case 0x0000746E656D6567:return 1;
		case 0x0000796C676E6967:return 1;
		default:return 0;
		}
	case 0x6172757361656C70:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x617275736E696E75:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x61727574616E6E75:
		switch(wp[1]){
		case 0x000063697473696C:return 1;
		default:return 0;
		}
	case 0x61727675656E616D:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x617361656C706E75:
		switch(wp[1]){
		case 0x00007373656E746E:return 1;
		default:return 0;
		}
	case 0x6173616863727570:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6173696461726170:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x6173697664616E69:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6173697664616E75:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x61736C75706D6F63:
		switch(wp[1]){
		case 0x0000796C65766974:return 1;
		case 0x0000796C69726F74:return 1;
		default:return 0;
		}
	case 0x61736E65646E6F63:
		switch(wp[1]){
		case 0x00006C616E6F6974:return 1;
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x61736E656D6D6F63:
		switch(wp[1]){
		case 0x000063697473696C:return 1;
		default:return 0;
		}
	case 0x61736E65706D6F63:
		switch(wp[1]){
		case 0x00006C616E6F6974:return 1;
		case 0x0000796C676E6974:return 1;
		default:return 0;
		}
	case 0x61736E6570736964:
		switch(wp[1]){
		case 0x00006C616E6F6974:return 1;
		case 0x0000796C65766974:return 1;
		case 0x0000796C69726F74:return 1;
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x61736F6C75627574:
		switch(wp[1]){
		case 0x000072616C756363:return 1;
		default:return 0;
		}
	case 0x61736F6D6F6E6576:
		switch(wp[1]){
		case 0x000079726176696C:return 1;
		default:return 0;
		}
	case 0x61736F6D6F726863:
		switch(wp[1]){
		case 0x00006E696E6F746E:return 1;
		default:return 0;
		}
	case 0x61736F6E656E6576:
		switch(wp[1]){
		case 0x000079726176696C:return 1;
		default:return 0;
		}
	case 0x61736F7261726170:
		switch(wp[1]){
		case 0x0000656E696C696E:return 1;
		default:return 0;
		}
	case 0x6173726576696E75:
		switch(wp[1]){
		case 0x000063697473696C:return 1;
		case 0x000073756F6D696E:return 1;
		default:return 0;
		}
	case 0x61737265766E6F63:
		switch(wp[1]){
		case 0x00006C616E6F6974:return 1;
		default:return 0;
		}
	case 0x617373696D6D6F63:
		switch(wp[1]){
		case 0x0000706968737972:return 1;
		default:return 0;
		}
	case 0x6173756378656E69:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x61746163696D6568:
		switch(wp[1]){
		case 0x000063697470656C:return 1;
		default:return 0;
		}
	case 0x6174616572636E75:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x61746166696D6573:
		switch(wp[1]){
		case 0x000063697473696C:return 1;
		default:return 0;
		}
	case 0x6174616C61706E75:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6174616C72616863:
		switch(wp[1]){
		case 0x000063697473696E:return 1;
		default:return 0;
		}
	case 0x6174616E65746E61:
		switch(wp[1]){
		case 0x00006C616974696C:return 1;
		default:return 0;
		}
	case 0x6174616F656C6170:
		switch(wp[1]){
		case 0x0000636974736976:return 1;
		default:return 0;
		}
	case 0x6174636172746572:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6174636172746E69:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6174636172746E75:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6174636172747461:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x617463656A627573:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x617463656C6C6F63:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6174636570736572:
		switch(wp[1]){
		case 0x0000657A696C6962:return 1;
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6174636570736E69:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6174636572627573:
		switch(wp[1]){
		case 0x000072616C75676E:return 1;
		default:return 0;
		}
	case 0x6174636572697274:
		switch(wp[1]){
		case 0x000072616C75676E:return 1;
		default:return 0;
		}
	case 0x61746365726E6F6E:
		switch(wp[1]){
		case 0x000072616C75676E:return 1;
		default:return 0;
		}
	case 0x6174636964657270:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x61746369646E6F6E:
		switch(wp[1]){
		case 0x00006C6169726F74:return 1;
		default:return 0;
		}
	case 0x6174636F696D6564:
		switch(wp[1]){
		case 0x000072616C75676E:return 1;
		default:return 0;
		}
	case 0x6174636F73697274:
		switch(wp[1]){
		case 0x00006C6172646568:return 1;
		case 0x00006E6F72646568:return 1;
		default:return 0;
		}
	case 0x617463756C656E69:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x61746564696D6573:
		switch(wp[1]){
		case 0x0000746E656D6863:return 1;
		default:return 0;
		}
	case 0x6174656D656C6574:
		switch(wp[1]){
		case 0x00006C6170726163:return 1;
		default:return 0;
		}
	case 0x6174656D696D6568:
		switch(wp[1]){
		case 0x00006D73696C6F62:return 1;
		case 0x000073756F6C6F62:return 1;
		default:return 0;
		}
	case 0x6174656D69746E61:
		switch(wp[1]){
		case 0x0000636974656874:return 1;
		case 0x0000736973656874:return 1;
		default:return 0;
		}
	case 0x6174656D6F627563:
		switch(wp[1]){
		case 0x00006C6173726174:return 1;
		default:return 0;
		}
	case 0x6174656D6F6C6F68:
		switch(wp[1]){
		case 0x00006D73696C6F62:return 1;
		case 0x00006E61696C6F62:return 1;
		case 0x000073756F6C6F62:return 1;
		default:return 0;
		}
	case 0x6174656D6F6E656D:
		switch(wp[1]){
		case 0x0000736973617473:return 1;
		default:return 0;
		}
	case 0x6174656D6F6E6C75:
		switch(wp[1]){
		case 0x00006C6170726163:return 1;
		default:return 0;
		}
	case 0x6174656D6F70696C:
		switch(wp[1]){
		case 0x00006D73696C6F62:return 1;
		default:return 0;
		}
	case 0x6174656D6F727970:
		switch(wp[1]){
		case 0x0000796772756C6C:return 1;
		default:return 0;
		}
	case 0x6174696261686E69:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6174696275646E69:
		switch(wp[1]){
		case 0x0000796C65766974:return 1;
		default:return 0;
		}
	case 0x6174696378656E69:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6174696378656E75:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6174696464697571:
		switch(wp[1]){
		case 0x0000796C65766974:return 1;
		default:return 0;
		}
	case 0x6174696465726568:
		switch(wp[1]){
		case 0x00007373656E6972:return 1;
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x617469676F636E69:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6174696C696D6E75:
		switch(wp[1]){
		case 0x0000636974736972:return 1;
		case 0x00007373656E6972:return 1;
		default:return 0;
		}
	case 0x6174696D696C6C69:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6174696D6F646E69:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6174696E61736E69:
		switch(wp[1]){
		case 0x00007373656E6972:return 1;
		default:return 0;
		}
	case 0x6174696E61736E75:
		switch(wp[1]){
		case 0x00007373656E6972:return 1;
		default:return 0;
		}
	case 0x6174696E69666661:
		switch(wp[1]){
		case 0x0000796C65766974:return 1;
		default:return 0;
		}
	case 0x6174697265686E69:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6174697272696E69:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6174697365686E75:
		switch(wp[1]){
		case 0x0000796C676E6974:return 1;
		default:return 0;
		}
	case 0x617469746E617571:
		switch(wp[1]){
		case 0x0000796C65766974:return 1;
		default:return 0;
		}
	case 0x6174697571696275:
		switch(wp[1]){
		case 0x00007373656E6972:return 1;
		default:return 0;
		}
	case 0x6174697573657270:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6174697669746E61:
		switch(wp[1]){
		case 0x000063697473696C:return 1;
		default:return 0;
		}
	case 0x61746E6168637261:
		switch(wp[1]){
		case 0x00007473696E6F67:return 1;
		default:return 0;
		}
	case 0x61746E656D656C65:
		switch(wp[1]){
		case 0x000063697473696C:return 1;
		case 0x00007373656E6972:return 1;
		default:return 0;
		}
	case 0x61746E656D677561:
		switch(wp[1]){
		case 0x000072656E6F6974:return 1;
		case 0x0000796C65766974:return 1;
		default:return 0;
		}
	case 0x61746E656D696C61:
		switch(wp[1]){
		case 0x00007373656E6972:return 1;
		case 0x0000796C65766974:return 1;
		default:return 0;
		}
	case 0x61746E656D6D6F63:
		switch(wp[1]){
		case 0x00006C6169726F74:return 1;
		default:return 0;
		}
	case 0x61746E656D726566:
		switch(wp[1]){
		case 0x0000796C65766974:return 1;
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x61746E6570627573:
		switch(wp[1]){
		case 0x000072616C75676E:return 1;
		default:return 0;
		}
	case 0x61746E6573657270:
		switch(wp[1]){
		case 0x00006C616E6F6974:return 1;
		case 0x0000796C65766974:return 1;
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x61746E6574737573:
		switch(wp[1]){
		case 0x00006C616E6F6974:return 1;
		default:return 0;
		}
	case 0x61746E6576657270:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x61746E69616D6E75:
		switch(wp[1]){
		case 0x0000656C62616E69:return 1;
		default:return 0;
		}
	case 0x61746E6961706E75:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x61746E6F63726570:
		switch(wp[1]){
		case 0x00006C6169726F74:return 1;
		default:return 0;
		}
	case 0x61746E756F636361:
		switch(wp[1]){
		case 0x000070696873746E:return 1;
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x61746E756F6D6564:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x61746E79736E6F6E:
		switch(wp[1]){
		case 0x00006C6163697463:return 1;
		default:return 0;
		}
	case 0x61746F6C6C796870:
		switch(wp[1]){
		case 0x00006C6163697463:return 1;
		default:return 0;
		}
	case 0x61746F7274786564:
		switch(wp[1]){
		case 0x0000636972617472:return 1;
		default:return 0;
		}
	case 0x6174706164616572:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6174706164616E69:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6174706164616E75:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6174706D65746E75:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6174706D65747461:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6174707572736964:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6174726573736964:
		switch(wp[1]){
		case 0x00006C616E6F6974:return 1;
		default:return 0;
		}
	case 0x6174726F706E6F6E:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6174726F70707573:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x61747275636E6F6E:
		switch(wp[1]){
		case 0x0000746E656D6C69:return 1;
		default:return 0;
		}
	case 0x6174736172666E69:
		switch(wp[1]){
		case 0x00006C6169646570:return 1;
		default:return 0;
		}
	case 0x6174736172707573:
		switch(wp[1]){
		case 0x00006C6169646570:return 1;
		default:return 0;
		}
	case 0x6174736172747865:
		switch(wp[1]){
		case 0x00006C6169646570:return 1;
		default:return 0;
		}
	case 0x6174736275736564:
		switch(wp[1]){
		case 0x000065746169746E:return 1;
		default:return 0;
		}
	case 0x6174736275736E69:
		switch(wp[1]){
		case 0x000065746169746E:return 1;
		default:return 0;
		}
	case 0x6174736275736E75:
		switch(wp[1]){
		case 0x000065746169746E:return 1;
		default:return 0;
		}
	case 0x61747365676F7270:
		switch(wp[1]){
		case 0x00006C616E6F6974:return 1;
		default:return 0;
		}
	case 0x61747369746C756D:
		switch(wp[1]){
		case 0x00006574616E696D:return 1;
		default:return 0;
		}
	case 0x6174736E6F636E69:
		switch(wp[1]){
		case 0x00007373656E746E:return 1;
		default:return 0;
		}
	case 0x6174736E6F636E75:
		switch(wp[1]){
		case 0x00007373656E746E:return 1;
		default:return 0;
		}
	case 0x6174736F6964656D:
		switch(wp[1]){
		case 0x00006C6169646570:return 1;
		default:return 0;
		}
	case 0x6174736F72647968:
		switch(wp[1]){
		case 0x00006E6169636974:return 1;
		default:return 0;
		}
	case 0x6174736F73696E61:
		switch(wp[1]){
		case 0x000073756F6E696D:return 1;
		default:return 0;
		}
	case 0x6174736F746F6870:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6174737265646E75:
		switch(wp[1]){
		case 0x0000656C6261646E:return 1;
		case 0x0000746E656D6574:return 1;
		case 0x0000796C6261646E:return 1;
		default:return 0;
		}
	case 0x6174737265707573:
		switch(wp[1]){
		case 0x00006E616D736574:return 1;
		default:return 0;
		}
	case 0x6174737265746E69:
		switch(wp[1]){
		case 0x00006C6169646570:return 1;
		default:return 0;
		}
	case 0x617473796C616964:
		switch(wp[1]){
		case 0x000073756F6E696D:return 1;
		default:return 0;
		}
	case 0x6174737972636E75:
		switch(wp[1]){
		case 0x000064657A696C6C:return 1;
		default:return 0;
		}
	case 0x617474617265766F:
		switch(wp[1]){
		case 0x0000746E656D6863:return 1;
		default:return 0;
		}
	case 0x6174756665727269:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6174757263736E69:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x61756761666C7573:
		switch(wp[1]){
		case 0x0000656E6964696E:return 1;
		default:return 0;
		}
	case 0x6175676F6E617963:
		switch(wp[1]){
		case 0x0000656E6964696E:return 1;
		default:return 0;
		}
	case 0x6175676F6E696D61:
		switch(wp[1]){
		case 0x0000656E6964696E:return 1;
		default:return 0;
		}
	case 0x6175677265707573:
		switch(wp[1]){
		case 0x00006565746E6172:return 1;
		default:return 0;
		}
	case 0x61756E69746E6F63:
		switch(wp[1]){
		case 0x00007373656E6574:return 1;
		case 0x0000796C65766974:return 1;
		default:return 0;
		}
	case 0x6175716564616E69:
		switch(wp[1]){
		case 0x00007373656E6574:return 1;
		case 0x0000796C65766974:return 1;
		default:return 0;
		}
	case 0x6175716564616E75:
		switch(wp[1]){
		case 0x00007373656E6574:return 1;
		default:return 0;
		}
	case 0x6175717265646E75:
		switch(wp[1]){
		case 0x000064656966696C:return 1;
		default:return 0;
		}
	case 0x6175717369646E75:
		switch(wp[1]){
		case 0x000064656966696C:return 1;
		default:return 0;
		}
	case 0x6175717372756F66:
		switch(wp[1]){
		case 0x00007373656E6572:return 1;
		default:return 0;
		}
	case 0x61757274736E6F63:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6175737265706E75:
		switch(wp[1]){
		case 0x0000796C65766973:return 1;
		default:return 0;
		}
	case 0x6175746972697073:
		switch(wp[1]){
		case 0x000063697473696C:return 1;
		default:return 0;
		}
	case 0x61757469726E6F6E:
		switch(wp[1]){
		case 0x000063697473696C:return 1;
		default:return 0;
		}
	case 0x61757469726F7270:
		switch(wp[1]){
		case 0x000063697473696C:return 1;
		default:return 0;
		}
	case 0x6175746C756D7574:
		switch(wp[1]){
		case 0x00007373656E6972:return 1;
		default:return 0;
		}
	case 0x6176617265746E69:
		switch(wp[1]){
		case 0x0000656C62616C69:return 1;
		default:return 0;
		}
	case 0x6176656972746572:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x61766965636E6F63:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6176696563726570:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6176697264617571:
		switch(wp[1]){
		case 0x000072616C75766C:return 1;
		case 0x0000796C746E656C:return 1;
		default:return 0;
		}
	case 0x6176697571656E69:
		switch(wp[1]){
		case 0x000072616C75766C:return 1;
		default:return 0;
		}
	case 0x61766D7563726963:
		switch(wp[1]){
		case 0x000072616C756373:return 1;
		default:return 0;
		}
	case 0x61766F68706C7573:
		switch(wp[1]){
		case 0x000065746164616E:return 1;
		default:return 0;
		}
	case 0x61766F6964726163:
		switch(wp[1]){
		case 0x000072616C756373:return 1;
		default:return 0;
		}
	case 0x61766F6D65727269:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x61766F7274736167:
		switch(wp[1]){
		case 0x000072616C756373:return 1;
		default:return 0;
		}
	case 0x61766F7469637865:
		switch(wp[1]){
		case 0x000072616C756373:return 1;
		default:return 0;
		}
	case 0x6176726573657270:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x61767265736E6F63:
		switch(wp[1]){
		case 0x00006C616E6F6974:return 1;
		case 0x00006D7569726F74:return 1;
		case 0x0000796C65766974:return 1;
		default:return 0;
		}
	case 0x617768747265766F:
		switch(wp[1]){
		case 0x0000657369777472:return 1;
		case 0x00007373656E7472:return 1;
		case 0x0000737961777472:return 1;
		default:return 0;
		}
	case 0x61776E6576616568:
		switch(wp[1]){
		case 0x00007373656E6472:return 1;
		default:return 0;
		}
	case 0x6178656874736F70:
		switch(wp[1]){
		case 0x0000636972616C70:return 1;
		default:return 0;
		}
	case 0x61786F6475657370:
		switch(wp[1]){
		case 0x0000656E6968746E:return 1;
		default:return 0;
		}
	case 0x61786F7265746568:
		switch(wp[1]){
		case 0x0000656E6968746E:return 1;
		default:return 0;
		}
	case 0x617A696C69766963:
		switch(wp[1]){
		case 0x00006C616E6F6974:return 1;
		default:return 0;
		}
	case 0x617A696E6167726F:
		switch(wp[1]){
		case 0x00006C616E6F6974:return 1;
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x617A696E6F6C6F63:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x617A6972616C6F70:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6261626972626E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261626F72706D69:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x626163616C706D69:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261636964657270:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62616369646E6976:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x626163696C707061:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x626163696C707865:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261636970736564:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261637564656E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261646165726E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x626164696D726F66:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261646975676E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261646E65626E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261646E656D6E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261646E65706564:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261646E65766E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261646E6F626E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261647261776572:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x626164726F666E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62616475616C6E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261656375646572:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62616567616D6164:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62616567616E616D:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x626165676E616863:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261656772616863:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261656B61746E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261656B696C6E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261656D616E6E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261656E75746E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62616576696C6E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x626165766F6C6E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261657A69736E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62616761706F7270:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261676172666572:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261676E69736E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261686361746564:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261686361747461:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x626168636E657571:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261686372616573:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x626168706C616E61:
		switch(wp[1]){
		case 0x00006C6163697465:return 1;
		default:return 0;
		}
	case 0x626168706C616E75:
		switch(wp[1]){
		case 0x00006C6163697465:return 1;
		default:return 0;
		}
	case 0x62616873696E7570:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261687369726570:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261687461657262:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x626169636F736E69:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x626169636F736E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x626169636F737361:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62616964656D6572:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261696669646F6D:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261696669726576:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261696C65726E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261696C706D6F63:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261696E65646E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261697078656E69:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261697261766E69:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261697261766E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261697461736E69:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261697461736E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62616B617473696D:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62616B6177616E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62616B6E61626E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62616B72616D6572:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62616B726F776E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62616C6163736E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62616C6165686E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62616C6165706572:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62616C6165766572:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62616C6172746C75:
		switch(wp[1]){
		case 0x000073756F69726F:return 1;
		default:return 0;
		}
	case 0x62616C6565706E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62616C6961626E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62616C6961666E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62616C69616D6E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62616C6961737361:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62616C6F69766E69:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62616C6F736E6F63:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62616C7265707573:
		switch(wp[1]){
		case 0x000073756F69726F:return 1;
		default:return 0;
		}
	case 0x62616D6168736E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62616D616C626E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62616D6172666E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62616D6565646572:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62616D696C627573:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62616D726F666572:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62616E61666F7270:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62616E656D616E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62616E6961727473:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62616E6961746572:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62616E6961747461:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62616E69626D6F63:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62616E6967616D69:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62616E696C636E69:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62616E696D6F6261:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62616E696D726574:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62616E6F64726170:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62616E6F73616572:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62616E6F73616573:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62616E6F73726570:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62616E7265766F67:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261706C65686E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261706C75636E69:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261726165626E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62617261706D6F63:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62617265646E6F70:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261726566657270:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261726566667573:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x626172656E6C7576:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62617265746C6966:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261726577736E61:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261726961706572:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261726970736572:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261726F6C706564:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261726F74736572:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261726F78656E69:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261726F78656E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62617274656E6570:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261727564726570:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x626172757361656D:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62617275736E6563:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62617275736E656D:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261727574636970:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261727574726F74:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261736165666E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261736165707061:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261736172656E69:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261736970736564:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261736F70707573:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261736F70736964:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261737361706D69:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261737361706E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261746165626E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62617463656A6572:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62617463656C6564:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x626174656B636F70:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x626174656B72616D:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261746964657263:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62617469666F7270:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x626174696D696E69:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x626174696D696E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x626174696E756E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261746970736F68:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261746972616863:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261746975736E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261746976656E69:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261746C656D6E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261746E616E6574:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261746E656D616C:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261747065636361:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261747261706E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x626174726F706D69:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261747365736964:
		switch(wp[1]){
		case 0x000072656873696C:return 1;
		default:return 0;
		}
	case 0x6261747365746564:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261747369736572:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x626174736F727967:
		switch(wp[1]){
		case 0x000072657A696C69:return 1;
		default:return 0;
		}
	case 0x626174756D6D6F63:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x626174756D726570:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261747570736964:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261747574617473:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261756772616E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261756C61766E69:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261756C61766E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62617665696C6562:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261766965636564:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261766967726F66:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261766972646E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261766C61736E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261766C6F736572:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261766C6F736E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261766F72706572:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261766F72706D69:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261766F72706E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261766F72707061:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x626176726573626F:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261776568636E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261776F6E6B6E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6261776F76616E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62617A6565757173:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62617A696C616572:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62617A696E676F63:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6265647265646E75:
		switch(wp[1]){
		case 0x0000656568637561:return 1;
		default:return 0;
		}
	case 0x62656C6563657270:
		switch(wp[1]){
		case 0x00006E6F69746172:return 1;
		default:return 0;
		}
	case 0x62656C65636E6F63:
		switch(wp[1]){
		case 0x00006E6F69746172:return 1;
		default:return 0;
		}
	case 0x62656C65636E6F6E:
		switch(wp[1]){
		case 0x00006E6F69746172:return 1;
		default:return 0;
		}
	case 0x62686769656E6E75:
		switch(wp[1]){
		case 0x0000656B696C726F:return 1;
		default:return 0;
		}
	case 0x6269636E69766E69:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62696372616D6D69:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x626963726F666E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62696373616E6572:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62696375646F7270:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6269646572636E69:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6269646E65766E69:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6269646E65766E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6269666F7275656E:
		switch(wp[1]){
		case 0x000065616C6C6972:return 1;
		case 0x000072616C6C6972:return 1;
		default:return 0;
		}
	case 0x6269667265746E69:
		switch(wp[1]){
		case 0x000072616C6C6972:return 1;
		default:return 0;
		}
	case 0x626967696C656E69:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x626967696C67656E:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6269676972726F63:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6269676E61746E69:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6269676E61746E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62696C6C61666E69:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62696C6C61666E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6269726373627573:
		switch(wp[1]){
		case 0x0000706968737265:return 1;
		default:return 0;
		}
	case 0x6269727265666572:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6269727474616E75:
		switch(wp[1]){
		case 0x0000656C62617475:return 1;
		default:return 0;
		}
	case 0x6269736165666564:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6269736165666E69:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6269736165666E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6269736E61707865:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6269736E65666564:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6269736E65736E69:
		switch(wp[1]){
		case 0x000072657A696C69:return 1;
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6269736E65736E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6269736E65747865:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6269736F72726F63:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6269737265766572:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6269737361706D69:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		case 0x0000796C62696C69:return 1;
		default:return 0;
		}
	case 0x62697373696D6461:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62697373696D6572:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x626973736F706D69:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x626973736F706E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6269737566666964:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62697461706D6F63:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6269746E65766E69:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6269747261706D69:
		switch(wp[1]){
		case 0x0000796C62696C69:return 1;
		default:return 0;
		}
	case 0x6269747365676964:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6269747369736572:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x626978656C666E69:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x626978656C666E75:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x626D616C61726170:
		switch(wp[1]){
		case 0x00006D7369636164:return 1;
		default:return 0;
		}
	case 0x626D617265707573:
		switch(wp[1]){
		case 0x000073756F697469:return 1;
		default:return 0;
		}
	case 0x626D656172747865:
		switch(wp[1]){
		case 0x000063696E6F7972:return 1;
		default:return 0;
		}
	case 0x626D656475657370:
		switch(wp[1]){
		case 0x000063696E6F7972:return 1;
		default:return 0;
		}
	case 0x626D656D65726E75:
		switch(wp[1]){
		case 0x0000656C62617265:return 1;
		default:return 0;
		}
	case 0x626D656D65727269:
		switch(wp[1]){
		case 0x0000656C62617265:return 1;
		default:return 0;
		}
	case 0x626D656D696D6573:
		switch(wp[1]){
		case 0x000073756F6E6172:return 1;
		default:return 0;
		}
	case 0x626D656D6F63756D:
		switch(wp[1]){
		case 0x000073756F6E6172:return 1;
		default:return 0;
		}
	case 0x626D656D6F726573:
		switch(wp[1]){
		case 0x000073756F6E6172:return 1;
		default:return 0;
		}
	case 0x626D6F636F747561:
		switch(wp[1]){
		case 0x00006E6F69747375:return 1;
		default:return 0;
		}
	case 0x626D75636E656E75:
		switch(wp[1]){
		case 0x0000796C64657265:return 1;
		default:return 0;
		}
	case 0x626D756869746E61:
		switch(wp[1]){
		case 0x0000747369676775:return 1;
		default:return 0;
		}
	case 0x626D79736F747561:
		switch(wp[1]){
		case 0x00006369746E6F69:return 1;
		case 0x00006C6163696C6F:return 1;
		default:return 0;
		}
	case 0x626E656774747562:
		switch(wp[1]){
		case 0x0000657469686361:return 1;
		default:return 0;
		}
	case 0x626E65726F686373:
		switch(wp[1]){
		case 0x0000657469677265:return 1;
		default:return 0;
		}
	case 0x626E69676E6F7073:
		switch(wp[1]){
		case 0x000063697473616C:return 1;
		default:return 0;
		}
	case 0x626E726F68627573:
		switch(wp[1]){
		case 0x00006369646E656C:return 1;
		default:return 0;
		}
	case 0x626F63696D656863:
		switch(wp[1]){
		case 0x000079676F6C6F69:return 1;
		default:return 0;
		}
	case 0x626F636976726563:
		switch(wp[1]){
		case 0x000072616C697361:return 1;
		default:return 0;
		}
	case 0x626F69746E616E65:
		switch(wp[1]){
		case 0x000063697473616C:return 1;
		default:return 0;
		}
	case 0x626F6C67696D6573:
		switch(wp[1]){
		case 0x0000796C72616C75:return 1;
		default:return 0;
		}
	case 0x626F6C676F6D6568:
		switch(wp[1]){
		case 0x000061696D656E69:return 1;
		case 0x0000616972756E69:return 1;
		case 0x0000636972756E69:return 1;
		default:return 0;
		}
	case 0x626F6C696B696F70:
		switch(wp[1]){
		case 0x000063697473616C:return 1;
		default:return 0;
		}
	case 0x626F6C69746C756D:
		switch(wp[1]){
		case 0x0000646574616C75:return 1;
		default:return 0;
		}
	case 0x626F6D6F72626964:
		switch(wp[1]){
		case 0x0000656E657A6E65:return 1;
		default:return 0;
		}
	case 0x626F6E696D697A61:
		switch(wp[1]){
		case 0x0000656E657A6E65:return 1;
		default:return 0;
		}
	case 0x626F726874797265:
		switch(wp[1]){
		case 0x000063697473616C:return 1;
		default:return 0;
		}
	case 0x626F72726F636E75:
		switch(wp[1]){
		case 0x000064657461726F:return 1;
		default:return 0;
		}
	case 0x626F727463656C65:
		switch(wp[1]){
		case 0x0000726573736172:return 1;
		case 0x000079676F6C6F69:return 1;
		default:return 0;
		}
	case 0x626F7274696E6964:
		switch(wp[1]){
		case 0x0000656E657A6E65:return 1;
		default:return 0;
		}
	case 0x626F747065727473:
		switch(wp[1]){
		case 0x0000696C6C696361:return 1;
		default:return 0;
		}
	case 0x626F7470796C6163:
		switch(wp[1]){
		case 0x000063697473616C:return 1;
		default:return 0;
		}
	case 0x626F7A6172647968:
		switch(wp[1]){
		case 0x0000656E657A6E65:return 1;
		default:return 0;
		}
	case 0x627261636F6E6F6D:
		switch(wp[1]){
		case 0x000063696C79786F:return 1;
		default:return 0;
		}
	case 0x62726163796C6F70:
		switch(wp[1]){
		case 0x000063696C79786F:return 1;
		default:return 0;
		}
	case 0x6272617265707573:
		switch(wp[1]){
		case 0x0000797261727469:return 1;
		default:return 0;
		}
	case 0x627265646E756874:
		switch(wp[1]){
		case 0x0000676E69726165:return 1;
		default:return 0;
		}
	case 0x62726568696D6573:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x6272656874616566:
		switch(wp[1]){
		case 0x000064656E696172:return 1;
		case 0x0000676E69646465:return 1;
		default:return 0;
		}
	case 0x6272656B63696E6B:
		switch(wp[1]){
		case 0x00007372656B636F:return 1;
		default:return 0;
		}
	case 0x627265746E756F63:
		switch(wp[1]){
		case 0x000065636E616C61:return 1;
		case 0x0000656761727261:return 1;
		case 0x0000676E69746165:return 1;
		case 0x0000686374697765:return 1;
		case 0x000074746F63796F:return 1;
		case 0x0000797265747461:return 1;
		default:return 0;
		}
	case 0x6272657474616373:
		switch(wp[1]){
		case 0x000064656E696172:return 1;
		default:return 0;
		}
	case 0x6272657474616873:
		switch(wp[1]){
		case 0x000064656E696172:return 1;
		default:return 0;
		}
	case 0x6272657665726E75:
		switch(wp[1]){
		case 0x0000646574617265:return 1;
		default:return 0;
		}
	case 0x62726F6172747865:
		switch(wp[1]){
		case 0x0000796C6C617469:return 1;
		default:return 0;
		}
	case 0x62726F66696D6573:
		switch(wp[1]){
		case 0x0000676E69646469:return 1;
		default:return 0;
		}
	case 0x62726F6F6E616C70:
		switch(wp[1]){
		case 0x000072616C756369:return 1;
		default:return 0;
		}
	case 0x62726F6F7461766F:
		switch(wp[1]){
		case 0x000072616C756369:return 1;
		default:return 0;
		}
	case 0x62726F7265746E69:
		switch(wp[1]){
		case 0x0000796C6C617469:return 1;
		default:return 0;
		}
	case 0x62736C656D6D6172:
		switch(wp[1]){
		case 0x0000657469677265:return 1;
		default:return 0;
		}
	case 0x62756C6F73736964:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x62756F72616D6973:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x6275707265707573:
		switch(wp[1]){
		case 0x000079746963696C:return 1;
		default:return 0;
		}
	case 0x62757469746C756D:
		switch(wp[1]){
		case 0x0000796C75637265:return 1;
		default:return 0;
		}
	case 0x62776F6C6C616873:
		switch(wp[1]){
		case 0x000064656E696172:return 1;
		default:return 0;
		}
	case 0x6279687265746E69:
		switch(wp[1]){
		case 0x0000657A69646972:return 1;
		default:return 0;
		}
	case 0x6279726F636F7369:
		switch(wp[1]){
		case 0x0000656E69626C75:return 1;
		default:return 0;
		}
	case 0x6361626F6C706964:
		switch(wp[1]){
		case 0x00006D7569726574:return 1;
		default:return 0;
		}
	case 0x6361626F7263616D:
		switch(wp[1]){
		case 0x00006D7569726574:return 1;
		default:return 0;
		}
	case 0x6361626F7263656E:
		switch(wp[1]){
		case 0x00007972616C6C69:return 1;
		default:return 0;
		}
	case 0x6361636976726570:
		switch(wp[1]){
		case 0x0000796C73756F69:return 1;
		default:return 0;
		}
	case 0x6361646172746574:
		switch(wp[1]){
		case 0x000073756F6C7974:return 1;
		default:return 0;
		}
	case 0x63616461746E6570:
		switch(wp[1]){
		case 0x000064696F6C7974:return 1;
		case 0x00006574616C7974:return 1;
		case 0x00006D73696C7974:return 1;
		default:return 0;
		}
	case 0x6361646E656C7073:
		switch(wp[1]){
		case 0x0000796C73756F69:return 1;
		default:return 0;
		}
	case 0x6361646F63736964:
		switch(wp[1]){
		case 0x000073756F6C7974:return 1;
		default:return 0;
		}
	case 0x6361646F69747261:
		switch(wp[1]){
		case 0x000073756F6C7974:return 1;
		default:return 0;
		}
	case 0x6361646F7263616D:
		switch(wp[1]){
		case 0x00006D73696C7974:return 1;
		case 0x000073756F6C7974:return 1;
		default:return 0;
		}
	case 0x6361646F7263696D:
		switch(wp[1]){
		case 0x00006D73696C7974:return 1;
		case 0x000073756F6C7974:return 1;
		default:return 0;
		}
	case 0x6361646F72657470:
		switch(wp[1]){
		case 0x000064696F6C7974:return 1;
		case 0x00006E61696C7974:return 1;
		case 0x000073756F6C7974:return 1;
		default:return 0;
		}
	case 0x6361646F72746365:
		switch(wp[1]){
		case 0x00006D73696C7974:return 1;
		default:return 0;
		}
	case 0x6361646F73696E61:
		switch(wp[1]){
		case 0x000073756F6C7974:return 1;
		default:return 0;
		}
	case 0x6361646F7470656C:
		switch(wp[1]){
		case 0x000073756F6C7974:return 1;
		default:return 0;
		}
	case 0x6361647968636170:
		switch(wp[1]){
		case 0x000073756F6C7974:return 1;
		default:return 0;
		}
	case 0x6361647974616C70:
		switch(wp[1]){
		case 0x000073756F6C7974:return 1;
		default:return 0;
		}
	case 0x6361656468637261:
		switch(wp[1]){
		case 0x0000706968736E6F:return 1;
		default:return 0;
		}
	case 0x636165727265766F:
		switch(wp[1]){
		case 0x0000796C676E6968:return 1;
		default:return 0;
		}
	case 0x636166656D616873:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x63616669746C756D:
		switch(wp[1]){
		case 0x00006C6169726F74:return 1;
		default:return 0;
		}
	case 0x6361667065656873:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x6361667265746E69:
		switch(wp[1]){
		case 0x00006C616E6F6974:return 1;
		default:return 0;
		}
	case 0x6361667369746173:
		switch(wp[1]){
		case 0x00006C616E6F6974:return 1;
		case 0x0000796C69726F74:return 1;
		default:return 0;
		}
	case 0x636168726F707968:
		switch(wp[1]){
		case 0x00006E6169646968:return 1;
		default:return 0;
		}
	case 0x6361697274697274:
		switch(wp[1]){
		case 0x0000656E61746E6F:return 1;
		default:return 0;
		}
	case 0x63616972746E6568:
		switch(wp[1]){
		case 0x0000656E61746E6F:return 1;
		default:return 0;
		}
	case 0x63616972746F7564:
		switch(wp[1]){
		case 0x0000656E61746E6F:return 1;
		default:return 0;
		}
	case 0x63616C69746C756D:
		switch(wp[1]){
		case 0x0000657461696E69:return 1;
		default:return 0;
		}
	case 0x63616C6C61666E75:
		switch(wp[1]){
		case 0x0000796C73756F69:return 1;
		default:return 0;
		}
	case 0x63616C6F6D687465:
		switch(wp[1]){
		case 0x00006C616D797268:return 1;
		default:return 0;
		}
	case 0x63616C70796C6F70:
		switch(wp[1]){
		case 0x000065726F68706F:return 1;
		default:return 0;
		}
	case 0x63616C7265707573:
		switch(wp[1]){
		case 0x00006E6F69746174:return 1;
		default:return 0;
		}
	case 0x63616C7265707968:
		switch(wp[1]){
		case 0x00006E6F69746174:return 1;
		default:return 0;
		}
	case 0x63616C7574726F70:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x63616D75746E6F63:
		switch(wp[1]){
		case 0x0000796C73756F69:return 1;
		default:return 0;
		}
	case 0x63616E6974726570:
		switch(wp[1]){
		case 0x0000796C73756F69:return 1;
		default:return 0;
		}
	case 0x63616F6361726F63:
		switch(wp[1]){
		case 0x00006C61696D6F72:return 1;
		default:return 0;
		}
	case 0x63616F6475657370:
		switch(wp[1]){
		case 0x000063696D656461:return 1;
		default:return 0;
		}
	case 0x6361726169736162:
		switch(wp[1]){
		case 0x0000736974696E68:return 1;
		default:return 0;
		}
	case 0x6361726172746E69:
		switch(wp[1]){
		case 0x00006E6169646968:return 1;
		default:return 0;
		}
	case 0x6361727265746E69:
		switch(wp[1]){
		case 0x00006D73696C6169:return 1;
		default:return 0;
		}
	case 0x6361727465646E75:
		switch(wp[1]){
		case 0x0000796C676E6974:return 1;
		default:return 0;
		}
	case 0x636172746F646E65:
		switch(wp[1]){
		case 0x0000736974696568:return 1;
		default:return 0;
		}
	case 0x636172746F707968:
		switch(wp[1]){
		case 0x00006D75696C6568:return 1;
		default:return 0;
		}
	case 0x6361727474616E75:
		switch(wp[1]){
		case 0x0000796C65766974:return 1;
		default:return 0;
		}
	case 0x6361727566727566:
		switch(wp[1]){
		case 0x0000796C73756F65:return 1;
		default:return 0;
		}
	case 0x63617369746C756D:
		switch(wp[1]){
		case 0x00006574616C7563:return 1;
		default:return 0;
		}
	case 0x6361736F65616C65:
		switch(wp[1]){
		case 0x00006D7572616863:return 1;
		default:return 0;
		}
	case 0x6361737265646E75:
		switch(wp[1]){
		case 0x00006E6174736972:return 1;
		default:return 0;
		}
	case 0x6361737265707573:
		switch(wp[1]){
		case 0x0000656369666972:return 1;
		default:return 0;
		}
	case 0x6361747065636572:
		switch(wp[1]){
		case 0x0000646974696C75:return 1;
		default:return 0;
		}
	case 0x6361766F72746572:
		switch(wp[1]){
		case 0x00006574616E6963:return 1;
		default:return 0;
		}
	case 0x6363617265707573:
		switch(wp[1]){
		case 0x00006E6F69737365:return 1;
		case 0x000079726F737365:return 1;
		default:return 0;
		}
	case 0x6363617265746E69:
		switch(wp[1]){
		case 0x000079726F737365:return 1;
		default:return 0;
		}
	case 0x636361736F6E6F6D:
		switch(wp[1]){
		case 0x0000656469726168:return 1;
		case 0x000065736F726168:return 1;
		default:return 0;
		}
	case 0x63636173796C6F70:
		switch(wp[1]){
		case 0x0000656469726168:return 1;
		case 0x000065736F726168:return 1;
		default:return 0;
		}
	case 0x6363617669746E61:
		switch(wp[1]){
		case 0x0000726F74616E69:return 1;
		default:return 0;
		}
	case 0x63636F6172666E69:
		switch(wp[1]){
		case 0x00006C6174697069:return 1;
		case 0x00006E6F6973756C:return 1;
		default:return 0;
		}
	case 0x63636F6172707573:
		switch(wp[1]){
		case 0x00006C6174697069:return 1;
		case 0x00006E6F6973756C:return 1;
		default:return 0;
		}
	case 0x63636F6F73726F74:
		switch(wp[1]){
		case 0x00006E6F6973756C:return 1;
		default:return 0;
		}
	case 0x63636F6F7473616D:
		switch(wp[1]){
		case 0x00006C6174697069:return 1;
		default:return 0;
		}
	case 0x63636F7265707573:
		switch(wp[1]){
		case 0x00006C6174697069:return 1;
		default:return 0;
		}
	case 0x63637573696D6573:
		switch(wp[1]){
		case 0x00006C7566737365:return 1;
		default:return 0;
		}
	case 0x6365646172746574:
		switch(wp[1]){
		case 0x00006E61646F7061:return 1;
		default:return 0;
		}
	case 0x6365666661736964:
		switch(wp[1]){
		case 0x00006E6F69746174:return 1;
		default:return 0;
		}
	case 0x6365667265707573:
		switch(wp[1]){
		case 0x0000797469646E75:return 1;
		default:return 0;
		}
	case 0x63656A7265746E69:
		switch(wp[1]){
		case 0x00006C616E6F6974:return 1;
		case 0x0000796C69726F74:return 1;
		default:return 0;
		}
	case 0x63656C656F696469:
		switch(wp[1]){
		case 0x00006C6163697274:return 1;
		default:return 0;
		}
	case 0x63656C656F747561:
		switch(wp[1]){
		case 0x000063696E6F7274:return 1;
		default:return 0;
		}
	case 0x63656C6665726E75:
		switch(wp[1]){
		case 0x0000796C65766974:return 1;
		case 0x0000796C676E6974:return 1;
		default:return 0;
		}
	case 0x63656C6665727269:
		switch(wp[1]){
		case 0x0000796C65766974:return 1;
		default:return 0;
		}
	case 0x63656C6C65746E69:
		switch(wp[1]){
		case 0x00006E6F69746174:return 1;
		case 0x0000796C65766974:return 1;
		case 0x0000796C6C617574:return 1;
		default:return 0;
		}
	case 0x63656C6C6F636572:
		switch(wp[1]){
		case 0x0000796C65766974:return 1;
		default:return 0;
		}
	case 0x63656C7065657473:
		switch(wp[1]){
		case 0x0000676E69736168:return 1;
		default:return 0;
		}
	case 0x63656D6F7263696D:
		switch(wp[1]){
		case 0x00007363696E6168:return 1;
		default:return 0;
		}
	case 0x63656D6F72647968:
		switch(wp[1]){
		case 0x00007363696E6168:return 1;
		default:return 0;
		}
	case 0x63656D6F72746169:
		switch(wp[1]){
		case 0x00007473696E6168:return 1;
		default:return 0;
		}
	case 0x63656D6F746E656D:
		switch(wp[1]){
		case 0x00006E61696C656B:return 1;
		default:return 0;
		}
	case 0x63656D6F76726573:
		switch(wp[1]){
		case 0x00006D73696E6168:return 1;
		default:return 0;
		}
	case 0x63656E7265707573:
		switch(wp[1]){
		case 0x0000797469737365:return 1;
		default:return 0;
		}
	case 0x63656F7265746568:
		switch(wp[1]){
		case 0x0000796C73756F69:return 1;
		default:return 0;
		}
	case 0x6365706F72636173:
		switch(wp[1]){
		case 0x00006C61656E6974:return 1;
		default:return 0;
		}
	case 0x6365706F746F7270:
		switch(wp[1]){
		case 0x00006573616E6974:return 1;
		default:return 0;
		}
	case 0x6365707365726E75:
		switch(wp[1]){
		case 0x0000796C65766974:return 1;
		case 0x0000796C6C756674:return 1;
		default:return 0;
		}
	case 0x6365707365727269:
		switch(wp[1]){
		case 0x0000796C65766974:return 1;
		default:return 0;
		}
	case 0x636570736E617274:
		switch(wp[1]){
		case 0x00006E6F69746169:return 1;
		default:return 0;
		}
	case 0x636570737265766F:
		switch(wp[1]){
		case 0x0000657A696C6169:return 1;
		default:return 0;
		}
	case 0x6365707375736E75:
		switch(wp[1]){
		case 0x0000796C676E6974:return 1;
		default:return 0;
		}
	case 0x63657078656E6F6E:
		switch(wp[1]){
		case 0x00006E6F69746174:return 1;
		default:return 0;
		}
	case 0x636570786573696D:
		switch(wp[1]){
		case 0x00006E6F69746174:return 1;
		default:return 0;
		}
	case 0x6365726964696E75:
		switch(wp[1]){
		case 0x00006C616E6F6974:return 1;
		default:return 0;
		}
	case 0x63657269646E6F6E:
		switch(wp[1]){
		case 0x00006C616E6F6974:return 1;
		default:return 0;
		}
	case 0x6365726F666E6F6E:
		switch(wp[1]){
		case 0x0000657275736F6C:return 1;
		default:return 0;
		}
	case 0x6365726F6D656863:
		switch(wp[1]){
		case 0x00006E6F69747065:return 1;
		default:return 0;
		}
	case 0x6365726F72746572:
		switch(wp[1]){
		case 0x00006E6F69747065:return 1;
		default:return 0;
		}
	case 0x6365726F72746E69:
		switch(wp[1]){
		case 0x00006E6F69747065:return 1;
		default:return 0;
		}
	case 0x6365726F746F6870:
		switch(wp[1]){
		case 0x0000657669747065:return 1;
		case 0x00006E6F69747065:return 1;
		default:return 0;
		}
	case 0x6365727065646572:
		switch(wp[1]){
		case 0x00006E6F69746169:return 1;
		default:return 0;
		}
	case 0x6365727069746E61:
		switch(wp[1]){
		case 0x00006E6974697069:return 1;
		default:return 0;
		}
	case 0x6365727070616572:
		switch(wp[1]){
		case 0x00006E6F69746169:return 1;
		default:return 0;
		}
	case 0x6365727070616E69:
		switch(wp[1]){
		case 0x0000657669746169:return 1;
		case 0x00006E6F69746169:return 1;
		default:return 0;
		}
	case 0x6365727070616E75:
		switch(wp[1]){
		case 0x0000657669746169:return 1;
		case 0x0000676E69746169:return 1;
		case 0x00006E6F69746169:return 1;
		default:return 0;
		}
	case 0x6365727265746661:
		switch(wp[1]){
		case 0x0000676E696E6F6B:return 1;
		default:return 0;
		}
	case 0x6365727275736572:
		switch(wp[1]){
		case 0x00006C616E6F6974:return 1;
		case 0x000072656E6F6974:return 1;
		default:return 0;
		}
	case 0x6365727275736E69:
		switch(wp[1]){
		case 0x00006C616E6F6974:return 1;
		default:return 0;
		}
	case 0x63657365646E6F6E:
		switch(wp[1]){
		case 0x00006E6F69746172:return 1;
		default:return 0;
		}
	case 0x6365736E6F636564:
		switch(wp[1]){
		case 0x00006E6F69746172:return 1;
		default:return 0;
		}
	case 0x6365736E6F636572:
		switch(wp[1]){
		case 0x00006E6F69746172:return 1;
		default:return 0;
		}
	case 0x6365736E6F636E75:
		switch(wp[1]){
		case 0x00006E6F69746172:return 1;
		default:return 0;
		}
	case 0x6365736F72706E75:
		switch(wp[1]){
		case 0x0000656C62617475:return 1;
		default:return 0;
		}
	case 0x6365737265646E75:
		switch(wp[1]){
		case 0x0000797261746572:return 1;
		default:return 0;
		}
	case 0x6365737265707573:
		switch(wp[1]){
		case 0x00006E6F69746572:return 1;
		default:return 0;
		}
	case 0x6365737265707968:
		switch(wp[1]){
		case 0x00006E6F69746572:return 1;
		default:return 0;
		}
	case 0x6365737265746E69:
		switch(wp[1]){
		case 0x00006C616E6F6974:return 1;
		default:return 0;
		}
	case 0x6365746172746C75:
		switch(wp[1]){
		case 0x00006C6163696E68:return 1;
		default:return 0;
		}
	case 0x6365746968637261:
		switch(wp[1]){
		case 0x00007363696E6F74:return 1;
		default:return 0;
		}
	case 0x6365746F69636F73:
		switch(wp[1]){
		case 0x00006C6163696E68:return 1;
		default:return 0;
		}
	case 0x6365746F6C696870:
		switch(wp[1]){
		case 0x00006C6163696E68:return 1;
		default:return 0;
		}
	case 0x6365746F6D656E6D:
		switch(wp[1]){
		case 0x00006C6163696E68:return 1;
		default:return 0;
		}
	case 0x6365746F7263696D:
		switch(wp[1]){
		case 0x0000657571696E68:return 1;
		default:return 0;
		}
	case 0x6365746F72647968:
		switch(wp[1]){
		case 0x00006C6163696E68:return 1;
		default:return 0;
		}
	case 0x6365747265707968:
		switch(wp[1]){
		case 0x00006C6163696E68:return 1;
		default:return 0;
		}
	case 0x636575716E697571:
		switch(wp[1]){
		case 0x000065746174736F:return 1;
		default:return 0;
		}
	case 0x6368637461726373:
		switch(wp[1]){
		case 0x0000676E69647261:return 1;
		default:return 0;
		}
	case 0x6369626F69646172:
		switch(wp[1]){
		case 0x00006C6174697069:return 1;
		default:return 0;
		}
	case 0x636962726F627573:
		switch(wp[1]){
		case 0x0000646574616C75:return 1;
		default:return 0;
		}
	case 0x6369636976726563:
		switch(wp[1]){
		case 0x0000636169647261:return 1;
		default:return 0;
		}
	case 0x63696461726F7073:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x6369646E65707061:
		switch(wp[1]){
		case 0x0000646574616C75:return 1;
		case 0x0000796D6F746365:return 1;
		case 0x0000796D6F74736F:return 1;
		default:return 0;
		}
	case 0x6369646E69766E75:
		switch(wp[1]){
		case 0x0000796C65766974:return 1;
		default:return 0;
		}
	case 0x6369646F6874656D:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x6369646F69726570:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x6369647265707968:
		switch(wp[1]){
		case 0x00006D7369746F72:return 1;
		case 0x000073756F746F72:return 1;
		default:return 0;
		}
	case 0x636964736972756A:
		switch(wp[1]){
		case 0x00006C616E6F6974:return 1;
		default:return 0;
		}
	case 0x636964756A657270:
		switch(wp[1]){
		case 0x0000796C73756F69:return 1;
		default:return 0;
		}
	case 0x63696666656E6F6E:
		switch(wp[1]){
		case 0x000073756F696361:return 1;
		default:return 0;
		}
	case 0x6369666675736E69:
		switch(wp[1]){
		case 0x0000796C746E6569:return 1;
		default:return 0;
		}
	case 0x6369666675736E75:
		switch(wp[1]){
		case 0x0000796C746E6569:return 1;
		default:return 0;
		}
	case 0x6369666963657073:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x636966696C6F7270:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x63696669746E6F70:
		switch(wp[1]){
		case 0x0000737562696C61:return 1;
		default:return 0;
		}
	case 0x6369666F72706E75:
		switch(wp[1]){
		case 0x0000796C746E6569:return 1;
		default:return 0;
		}
	case 0x6369667265707573:
		switch(wp[1]){
		case 0x0000657A696C6169:return 1;
		case 0x00006D73696C6169:return 1;
		case 0x00007473696C6169:return 1;
		case 0x00007974696C6169:return 1;
		default:return 0;
		}
	case 0x6369676F6C616E61:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x6369687061726573:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x63696C6275706572:
		switch(wp[1]){
		case 0x000072657A696E61:return 1;
		default:return 0;
		}
	case 0x63696C6C656D616C:
		switch(wp[1]){
		case 0x00006574616E726F:return 1;
		case 0x000073756F6E726F:return 1;
		default:return 0;
		}
	case 0x63696C6C69636162:
		switch(wp[1]){
		case 0x0000657275746C75:return 1;
		default:return 0;
		}
	case 0x63696C6C69706163:
		switch(wp[1]){
		case 0x0000657275746C75:return 1;
		default:return 0;
		}
	case 0x63696C6F62616964:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x63696C6F626D7973:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x63696C6F68746163:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x63696C7078656E69:
		switch(wp[1]){
		case 0x00007373656E7469:return 1;
		default:return 0;
		}
	case 0x63696C7078656E75:
		switch(wp[1]){
		case 0x00007373656E7469:return 1;
		default:return 0;
		}
	case 0x63696D6564697065:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x63696D6F636C6174:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x63696D6F72647968:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x63696D6F746F6870:
		switch(wp[1]){
		case 0x00006D6172676F72:return 1;
		default:return 0;
		}
	case 0x63696D6F7972616B:
		switch(wp[1]){
		case 0x0000656D6F736F72:return 1;
		default:return 0;
		}
	case 0x63696D7265766E75:
		switch(wp[1]){
		case 0x0000646574616C75:return 1;
		default:return 0;
		}
	case 0x63696E616863656D:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x63696E61706D7974:
		switch(wp[1]){
		case 0x00006C6164726F68:return 1;
		default:return 0;
		}
	case 0x63696E6567657270:
		switch(wp[1]){
		case 0x00006D7574616C75:return 1;
		default:return 0;
		}
	case 0x63696E6974616C70:
		switch(wp[1]){
		case 0x00006369726F6C68:return 1;
		default:return 0;
		}
	case 0x63696E6E61727974:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x63696E6F68707565:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x63696E6F6D726168:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x6369706F72636173:
		switch(wp[1]){
		case 0x00006C6169726F74:return 1;
		default:return 0;
		}
	case 0x636970736E617274:
		switch(wp[1]){
		case 0x0000796C73756F75:return 1;
		default:return 0;
		}
	case 0x6369707375616E69:
		switch(wp[1]){
		case 0x0000796C73756F69:return 1;
		default:return 0;
		}
	case 0x6369707375616E75:
		switch(wp[1]){
		case 0x0000796C73756F69:return 1;
		default:return 0;
		}
	case 0x6369707375736E75:
		switch(wp[1]){
		case 0x0000796C73756F69:return 1;
		default:return 0;
		}
	case 0x63697079746E6F6E:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x636972656C636E75:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x636972656D696863:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x6369726570627573:
		switch(wp[1]){
		case 0x00006C6169647261:return 1;
		default:return 0;
		}
	case 0x63697265706F7970:
		switch(wp[1]){
		case 0x00006D7569647261:return 1;
		default:return 0;
		}
	case 0x6369726669746E61:
		switch(wp[1]){
		case 0x00006C616E6F6974:return 1;
		default:return 0;
		}
	case 0x6369726761657270:
		switch(wp[1]){
		case 0x0000657275746C75:return 1;
		default:return 0;
		}
	case 0x6369726F74656872:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x6369726F74736968:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x6369727461656874:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x63697274616D6E75:
		switch(wp[1]){
		case 0x0000646574616C75:return 1;
		default:return 0;
		}
	case 0x6369727463656C65:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x63697274656D6D69:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x63697274656D6E75:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x636972746572656D:
		switch(wp[1]){
		case 0x0000796C73756F69:return 1;
		default:return 0;
		}
	case 0x6369727469726570:
		switch(wp[1]){
		case 0x0000796C73756F68:return 1;
		default:return 0;
		}
	case 0x6369727561696E75:
		switch(wp[1]){
		case 0x0000646574616C75:return 1;
		default:return 0;
		}
	case 0x63697365766F7970:
		switch(wp[1]){
		case 0x00007369736F6C75:return 1;
		default:return 0;
		}
	case 0x6369737265766964:
		switch(wp[1]){
		case 0x00006465726F6C6F:return 1;
		default:return 0;
		}
	case 0x6369737472616568:
		switch(wp[1]){
		case 0x0000676E696E656B:return 1;
		default:return 0;
		}
	case 0x6369746168706D65:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x636974616C657270:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x636974616D676F64:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x6369746568746170:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x636974656E67616D:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x636974656F706E75:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x6369746572756964:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x6369746972636E75:
		switch(wp[1]){
		case 0x0000656C62617369:return 1;
		case 0x0000656C62617A69:return 1;
		default:return 0;
		}
	case 0x6369746E61646570:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x6369746E616D6F72:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x6369746E65677261:
		switch(wp[1]){
		case 0x00006564696E6179:return 1;
		default:return 0;
		}
	case 0x6369746F6372616E:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x6369746F70736564:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x63697470696C6C65:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x63697472616E6F6E:
		switch(wp[1]){
		case 0x0000646574616C75:return 1;
		default:return 0;
		}
	case 0x6369747261706D69:
		switch(wp[1]){
		case 0x0000656C62617069:return 1;
		default:return 0;
		}
	case 0x6369747261706E75:
		switch(wp[1]){
		case 0x0000646574617069:return 1;
		default:return 0;
		}
	case 0x6369747261736964:
		switch(wp[1]){
		case 0x0000726F74616C75:return 1;
		default:return 0;
		}
	case 0x6369747265766964:
		switch(wp[1]){
		case 0x00007369736F6C75:return 1;
		case 0x0000736974696C75:return 1;
		default:return 0;
		}
	case 0x63697473656A616D:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x636974736972796D:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x636978656C706D61:
		switch(wp[1]){
		case 0x0000656E696C7561:return 1;
		case 0x0000657461647561:return 1;
		default:return 0;
		}
	case 0x636C6163696D6573:
		switch(wp[1]){
		case 0x000073756F657261:return 1;
		default:return 0;
		}
	case 0x636C61636F656C6F:
		switch(wp[1]){
		case 0x000073756F657261:return 1;
		default:return 0;
		}
	case 0x636C616F72647968:
		switch(wp[1]){
		case 0x000063696C6F686F:return 1;
		default:return 0;
		}
	case 0x636C616F72747361:
		switch(wp[1]){
		case 0x00007473696D6568:return 1;
		default:return 0;
		}
	case 0x636C7576696D6573:
		switch(wp[1]){
		case 0x000064657A696E61:return 1;
		default:return 0;
		}
	case 0x636E616C696D6573:
		switch(wp[1]){
		case 0x00006574616C6F65:return 1;
		default:return 0;
		}
	case 0x636E617069726570:
		switch(wp[1]){
		case 0x0000636974616572:return 1;
		default:return 0;
		}
	case 0x636E617664616E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x636E656D6F6E6962:
		switch(wp[1]){
		case 0x000065727574616C:return 1;
		default:return 0;
		}
	case 0x636E696172746C75:
		switch(wp[1]){
		case 0x000065766973756C:return 1;
		default:return 0;
		}
	case 0x636E696F63657270:
		switch(wp[1]){
		case 0x000065636E656469:return 1;
		default:return 0;
		}
	case 0x636E696F636E6F6E:
		switch(wp[1]){
		case 0x000065636E656469:return 1;
		default:return 0;
		}
	case 0x636E697265707573:
		switch(wp[1]){
		case 0x000065766973756C:return 1;
		case 0x0000657669746E65:return 1;
		case 0x0000746E65626D75:return 1;
		default:return 0;
		}
	case 0x636E6972706E6F6E:
		switch(wp[1]){
		case 0x0000657461697069:return 1;
		default:return 0;
		}
	case 0x636E6F6365726E75:
		switch(wp[1]){
		case 0x0000656C62616C69:return 1;
		case 0x0000796C62616C69:return 1;
		default:return 0;
		}
	case 0x636E6F6365727269:
		switch(wp[1]){
		case 0x0000656C62616C69:return 1;
		case 0x0000796C62616C69:return 1;
		default:return 0;
		}
	case 0x636E6F6374736F70:
		switch(wp[1]){
		case 0x0000657669747065:return 1;
		default:return 0;
		}
	case 0x636E6F68706C7573:
		switch(wp[1]){
		case 0x0000656E696E6179:return 1;
		default:return 0;
		}
	case 0x636E7566696D6573:
		switch(wp[1]){
		case 0x00006C616E6F6974:return 1;
		default:return 0;
		}
	case 0x636E756E656E6F6E:
		switch(wp[1]){
		case 0x00006E6F69746169:return 1;
		default:return 0;
		}
	case 0x636E756E6573696D:
		switch(wp[1]){
		case 0x00006E6F69746169:return 1;
		default:return 0;
		}
	case 0x636F63656D72796D:
		switch(wp[1]){
		case 0x000073756F726F68:return 1;
		default:return 0;
		}
	case 0x636F63696D656863:
		switch(wp[1]){
		case 0x0000797265747561:return 1;
		default:return 0;
		}
	case 0x636F636973796870:
		switch(wp[1]){
		case 0x00007473696D6568:return 1;
		default:return 0;
		}
	case 0x636F636F72636173:
		switch(wp[1]){
		case 0x00006C6165677963:return 1;
		case 0x00006E6165677963:return 1;
		case 0x0000737565677963:return 1;
		default:return 0;
		}
	case 0x636F636F74636572:
		switch(wp[1]){
		case 0x00006C6165677963:return 1;
		case 0x0000737565677963:return 1;
		default:return 0;
		}
	case 0x636F637265746E69:
		switch(wp[1]){
		case 0x00006C6165677963:return 1;
		case 0x00006E6165677963:return 1;
		default:return 0;
		}
	case 0x636F64656C6F6863:
		switch(wp[1]){
		case 0x0000796D6F746F68:return 1;
		default:return 0;
		}
	case 0x636F646E65627573:
		switch(wp[1]){
		case 0x00006C6169647261:return 1;
		default:return 0;
		}
	case 0x636F65676F707968:
		switch(wp[1]){
		case 0x000073756F707261:return 1;
		default:return 0;
		}
	case 0x636F6863696C6F64:
		switch(wp[1]){
		case 0x0000696C61687065:return 1;
		case 0x00006C61696E6172:return 1;
		case 0x0000796C61687065:return 1;
		default:return 0;
		}
	case 0x636F68636E796872:
		switch(wp[1]){
		case 0x000073756F6C656F:return 1;
		default:return 0;
		}
	case 0x636F68746E616361:
		switch(wp[1]){
		case 0x000073756F64616C:return 1;
		case 0x000073756F707261:return 1;
		default:return 0;
		}
	case 0x636F68747369706F:
		switch(wp[1]){
		case 0x00006E61696C656F:return 1;
		case 0x000073756F6C656F:return 1;
		default:return 0;
		}
	case 0x636F696863617262:
		switch(wp[1]){
		case 0x00006C6174696275:return 1;
		default:return 0;
		}
	case 0x636F696874726570:
		switch(wp[1]){
		case 0x00006574616E6179:return 1;
		default:return 0;
		}
	case 0x636F6972706F7270:
		switch(wp[1]){
		case 0x0000657669747065:return 1;
		case 0x00006E6F69747065:return 1;
		default:return 0;
		}
	case 0x636F6C6168706563:
		switch(wp[1]){
		case 0x00006C6164726F68:return 1;
		default:return 0;
		}
	case 0x636F6C6168746870:
		switch(wp[1]){
		case 0x0000656E696E6179:return 1;
		default:return 0;
		}
	case 0x636F6C666F63756D:
		switch(wp[1]){
		case 0x0000746E656C7563:return 1;
		default:return 0;
		}
	case 0x636F6C696B696F70:
		switch(wp[1]){
		case 0x00007369736F7479:return 1;
		default:return 0;
		}
	case 0x636F6C69706F7369:
		switch(wp[1]){
		case 0x0000656E69707261:return 1;
		default:return 0;
		}
	case 0x636F6C69746C756D:
		switch(wp[1]){
		case 0x0000646574616C75:return 1;
		default:return 0;
		}
	case 0x636F6C6C69677261:
		switch(wp[1]){
		case 0x0000657469636C61:return 1;
		default:return 0;
		}
	case 0x636F6C7265746E69:
		switch(wp[1]){
		case 0x0000656369727475:return 1;
		case 0x0000737365727475:return 1;
		default:return 0;
		}
	case 0x636F6C7573706163:
		switch(wp[1]){
		case 0x0000797261696C69:return 1;
		default:return 0;
		}
	case 0x636F6E61676E616D:
		switch(wp[1]){
		case 0x0000657469636C61:return 1;
		default:return 0;
		}
	case 0x636F6E61766C6167:
		switch(wp[1]){
		case 0x0000797265747561:return 1;
		default:return 0;
		}
	case 0x636F6E6965706174:
		switch(wp[1]){
		case 0x0000796C61687065:return 1;
		default:return 0;
		}
	case 0x636F6E696F747561:
		switch(wp[1]){
		case 0x0000656C62616C75:return 1;
		default:return 0;
		}
	case 0x636F6E6974616C70:
		switch(wp[1]){
		case 0x00006369726F6C68:return 1;
		case 0x00006564696E6179:return 1;
		default:return 0;
		}
	case 0x636F6E6F67697274:
		switch(wp[1]){
		case 0x0000796C61687065:return 1;
		default:return 0;
		}
	case 0x636F726265726563:
		switch(wp[1]){
		case 0x0000636169647261:return 1;
		default:return 0;
		}
	case 0x636F72646E6F6863:
		switch(wp[1]){
		case 0x00006C61696E6172:return 1;
		case 0x00006D75696E6172:return 1;
		default:return 0;
		}
	case 0x636F72656E616870:
		switch(wp[1]){
		case 0x000063696E6F646F:return 1;
		default:return 0;
		}
	case 0x636F726574706964:
		switch(wp[1]){
		case 0x000073756F707261:return 1;
		default:return 0;
		}
	case 0x636F726574736F70:
		switch(wp[1]){
		case 0x00006E6F6973756C:return 1;
		default:return 0;
		}
	case 0x636F726574737968:
		switch(wp[1]){
		case 0x000073697369656C:return 1;
		default:return 0;
		}
	case 0x636F726574756564:
		switch(wp[1]){
		case 0x0000657361657361:return 1;
		default:return 0;
		}
	case 0x636F726874797265:
		switch(wp[1]){
		case 0x000063697473616C:return 1;
		case 0x00006D73696F7268:return 1;
		case 0x00007369736F7479:return 1;
		case 0x000073756F707261:return 1;
		default:return 0;
		}
	case 0x636F726F706D6574:
		switch(wp[1]){
		case 0x00006C6172746E65:return 1;
		default:return 0;
		}
	case 0x636F727069636572:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x636F727463656C65:
		switch(wp[1]){
		case 0x000063696D617265:return 1;
		case 0x0000657275746C75:return 1;
		case 0x0000676E6974616F:return 1;
		case 0x00007473696D6568:return 1;
		case 0x0000797265747561:return 1;
		default:return 0;
		}
	case 0x636F727469746E61:
		switch(wp[1]){
		case 0x00007265746E6168:return 1;
		default:return 0;
		}
	case 0x636F72746F707968:
		switch(wp[1]){
		case 0x00006C6164696F68:return 1;
		default:return 0;
		}
	case 0x636F7369746E6170:
		switch(wp[1]){
		case 0x0000747369746172:return 1;
		default:return 0;
		}
	case 0x636F736F74796870:
		switch(wp[1]){
		case 0x000079676F6C6F69:return 1;
		default:return 0;
		}
	case 0x636F737361627573:
		switch(wp[1]){
		case 0x00006E6F69746169:return 1;
		default:return 0;
		}
	case 0x636F7373616C616D:
		switch(wp[1]){
		case 0x00006E6F69746169:return 1;
		default:return 0;
		}
	case 0x636F7373616F7270:
		switch(wp[1]){
		case 0x00006E6F69746169:return 1;
		default:return 0;
		}
	case 0x636F737361736964:
		switch(wp[1]){
		case 0x00006E6F69746169:return 1;
		default:return 0;
		}
	case 0x636F73736173696D:
		switch(wp[1]){
		case 0x00006E6F69746169:return 1;
		default:return 0;
		}
	case 0x636F7461636C7573:
		switch(wp[1]){
		case 0x000065746174736F:return 1;
		default:return 0;
		}
	case 0x636F746172726573:
		switch(wp[1]){
		case 0x00006574616E6572:return 1;
		default:return 0;
		}
	case 0x636F7461746E6564:
		switch(wp[1]){
		case 0x00006574616E6572:return 1;
		case 0x000065746174736F:return 1;
		default:return 0;
		}
	case 0x636F746C61626F63:
		switch(wp[1]){
		case 0x00006564696E6179:return 1;
		default:return 0;
		}
	case 0x636F746E616C6C61:
		switch(wp[1]){
		case 0x00006E6F69726F68:return 1;
		default:return 0;
		}
	case 0x636F746E69757161:
		switch(wp[1]){
		case 0x00006C6174696275:return 1;
		default:return 0;
		}
	case 0x636F746F6E627573:
		switch(wp[1]){
		case 0x00006C6164726F68:return 1;
		default:return 0;
		}
	case 0x636F747369656C63:
		switch(wp[1]){
		case 0x000073756F707261:return 1;
		default:return 0;
		}
	case 0x636F747369686373:
		switch(wp[1]){
		case 0x00007369736F7479:return 1;
		default:return 0;
		}
	case 0x636F7669746C756D:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x637261636E696E75:
		switch(wp[1]){
		case 0x0000646574617265:return 1;
		default:return 0;
		}
	case 0x637261697274616D:
		switch(wp[1]){
		case 0x00006D73696C6168:return 1;
		default:return 0;
		}
	case 0x6372616972746170:
		switch(wp[1]){
		case 0x00006D73696C6168:return 1;
		default:return 0;
		}
	case 0x6372616F746F7270:
		switch(wp[1]){
		case 0x0000746365746968:return 1;
		default:return 0;
		}
	case 0x6372656275746962:
		switch(wp[1]){
		case 0x0000646574616C75:return 1;
		default:return 0;
		}
	case 0x6372656874616577:
		switch(wp[1]){
		case 0x00006873696B636F:return 1;
		case 0x00006D73696B636F:return 1;
		default:return 0;
		}
	case 0x6372656D696D6573:
		switch(wp[1]){
		case 0x000064657A697265:return 1;
		default:return 0;
		}
	case 0x6372656D6F646F69:
		switch(wp[1]){
		case 0x0000657461697275:return 1;
		default:return 0;
		}
	case 0x6372657069636F6E:
		switch(wp[1]){
		case 0x0000657669747065:return 1;
		case 0x00006E6F69747065:return 1;
		default:return 0;
		}
	case 0x63726570696E6D6F:
		switch(wp[1]){
		case 0x0000746E65697069:return 1;
		default:return 0;
		}
	case 0x6372657075736E75:
		switch(wp[1]){
		case 0x000073756F696C69:return 1;
		default:return 0;
		}
	case 0x637265746E696572:
		switch(wp[1]){
		case 0x00006E6F69737365:return 1;
		default:return 0;
		}
	case 0x637265746E696E75:
		switch(wp[1]){
		case 0x0000646574616C61:return 1;
		default:return 0;
		}
	case 0x637265746E756F63:
		switch(wp[1]){
		case 0x00006465676E6168:return 1;
		case 0x00006465726F6C6F:return 1;
		case 0x0000646E616D6D6F:return 1;
		case 0x0000746E6172756F:return 1;
		case 0x0000746E65727275:return 1;
		case 0x0000796E6F706D6F:return 1;
		default:return 0;
		}
	case 0x6372657474696C63:
		switch(wp[1]){
		case 0x000072657474616C:return 1;
		default:return 0;
		}
	case 0x63726963696D6573:
		switch(wp[1]){
		case 0x0000796C72616C75:return 1;
		default:return 0;
		}
	case 0x63726F666E656E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x63726F7470797263:
		switch(wp[1]){
		case 0x00006D7369646968:return 1;
		default:return 0;
		}
	case 0x63726F7669646E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x6373616C7265766F:
		switch(wp[1]){
		case 0x000073756F697669:return 1;
		default:return 0;
		}
	case 0x6373617669726570:
		switch(wp[1]){
		case 0x0000736974696C75:return 1;
		default:return 0;
		}
	case 0x637361766F646E65:
		switch(wp[1]){
		case 0x0000736974696C75:return 1;
		default:return 0;
		}
	case 0x63736275736E6F6E:
		switch(wp[1]){
		case 0x0000676E69626972:return 1;
		default:return 0;
		}
	case 0x6373657265646E75:
		switch(wp[1]){
		case 0x0000726F74616568:return 1;
		default:return 0;
		}
	case 0x637365726F756C66:
		switch(wp[1]){
		case 0x000063696E656769:return 1;
		default:return 0;
		}
	case 0x637369647265766F:
		switch(wp[1]){
		case 0x000065676172756F:return 1;
		case 0x0000656E696C7069:return 1;
		default:return 0;
		}
	case 0x6373696E65687073:
		switch(wp[1]){
		case 0x00006870726F6D6F:return 1;
		default:return 0;
		}
	case 0x6373696E696D6572:
		switch(wp[1]){
		case 0x00006C6169746E65:return 1;
		default:return 0;
		}
	case 0x6373696F72636173:
		switch(wp[1]){
		case 0x0000636964616968:return 1;
		case 0x0000636974616968:return 1;
		default:return 0;
		}
	case 0x6373697465726574:
		switch(wp[1]){
		case 0x000072616C757061:return 1;
		default:return 0;
		}
	case 0x6373697669726570:
		switch(wp[1]){
		case 0x0000736974697265:return 1;
		default:return 0;
		}
	case 0x63736D7563726963:
		switch(wp[1]){
		case 0x0000656C69737369:return 1;
		case 0x0000796C74706972:return 1;
		default:return 0;
		}
	case 0x63736E6172746E69:
		switch(wp[1]){
		case 0x000079636E656C61:return 1;
		default:return 0;
		}
	case 0x63736E6570706177:
		switch(wp[1]){
		case 0x0000676E69776168:return 1;
		default:return 0;
		}
	case 0x63736E6F63627573:
		switch(wp[1]){
		case 0x0000796C73756F69:return 1;
		default:return 0;
		}
	case 0x63736E6F63657270:
		switch(wp[1]){
		case 0x0000796C73756F69:return 1;
		default:return 0;
		}
	case 0x63736F626F727473:
		switch(wp[1]){
		case 0x00006C616369706F:return 1;
		default:return 0;
		}
	case 0x63736F6361726F63:
		switch(wp[1]){
		case 0x000072616C757061:return 1;
		default:return 0;
		}
	case 0x63736F6469656C63:
		switch(wp[1]){
		case 0x000072616C757061:return 1;
		default:return 0;
		}
	case 0x63736F6475657370:
		switch(wp[1]){
		case 0x00006E6F6970726F:return 1;
		default:return 0;
		}
	case 0x63736F6874657473:
		switch(wp[1]){
		case 0x00006C616369706F:return 1;
		default:return 0;
		}
	case 0x63736F696863726F:
		switch(wp[1]){
		case 0x0000737568727269:return 1;
		default:return 0;
		}
	case 0x63736F696E617263:
		switch(wp[1]){
		case 0x00006C616369706F:return 1;
		default:return 0;
		}
	case 0x63736F6D72656874:
		switch(wp[1]){
		case 0x00006C616369706F:return 1;
		default:return 0;
		}
	case 0x63736F6E72657473:
		switch(wp[1]){
		case 0x000072616C757061:return 1;
		default:return 0;
		}
	case 0x63736F706F74656D:
		switch(wp[1]){
		case 0x00006C616369706F:return 1;
		default:return 0;
		}
	case 0x63736F72656D7568:
		switch(wp[1]){
		case 0x000072616C757061:return 1;
		default:return 0;
		}
	case 0x63736F7265746E69:
		switch(wp[1]){
		case 0x00006574616C6C69:return 1;
		default:return 0;
		}
	case 0x63736F726F6C7970:
		switch(wp[1]){
		case 0x0000737568727269:return 1;
		default:return 0;
		}
	case 0x6373746863757266:
		switch(wp[1]){
		case 0x0000726566656968:return 1;
		default:return 0;
		}
	case 0x6373757365727269:
		switch(wp[1]){
		case 0x0000656C62617469:return 1;
		case 0x0000796C62617469:return 1;
		default:return 0;
		}
	case 0x6373796863617262:
		switch(wp[1]){
		case 0x000064696572656C:return 1;
		default:return 0;
		}
	case 0x6374617263736E75:
		switch(wp[1]){
		case 0x0000796C676E6968:return 1;
		default:return 0;
		}
	case 0x6374756373656E75:
		switch(wp[1]){
		case 0x000064656E6F6568:return 1;
		default:return 0;
		}
	case 0x6375646E696E6F6E:
		switch(wp[1]){
		case 0x0000796C65766974:return 1;
		case 0x0000797469766974:return 1;
		default:return 0;
		}
	case 0x6375646F72706572:
		switch(wp[1]){
		case 0x0000796C65766974:return 1;
		case 0x0000797469766974:return 1;
		default:return 0;
		}
	case 0x6375646F72706E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		case 0x0000796C65766974:return 1;
		case 0x0000797469766974:return 1;
		default:return 0;
		}
	case 0x6375646F72746E69:
		switch(wp[1]){
		case 0x0000796C65766974:return 1;
		case 0x0000796C69726F74:return 1;
		default:return 0;
		}
	case 0x6375656C6F6D6568:
		switch(wp[1]){
		case 0x000063697479636F:return 1;
		default:return 0;
		}
	case 0x63756C6572657270:
		switch(wp[1]){
		case 0x00006E6F69746174:return 1;
		default:return 0;
		}
	case 0x63756C66696C6F73:
		switch(wp[1]){
		case 0x00006C616E6F6974:return 1;
		default:return 0;
		}
	case 0x63756E69746C756D:
		switch(wp[1]){
		case 0x000064657461656C:return 1;
		case 0x000072616C6F656C:return 1;
		default:return 0;
		}
	case 0x63756E6F72626966:
		switch(wp[1]){
		case 0x000064657461656C:return 1;
		default:return 0;
		}
	case 0x6375726378656E75:
		switch(wp[1]){
		case 0x0000676E69746169:return 1;
		default:return 0;
		}
	case 0x6375727473627573:
		switch(wp[1]){
		case 0x00006C616E6F6974:return 1;
		default:return 0;
		}
	case 0x63757274736E6F63:
		switch(wp[1]){
		case 0x00006C616E6F6974:return 1;
		case 0x00006D7369766974:return 1;
		case 0x0000747369766974:return 1;
		case 0x0000796C65766974:return 1;
		default:return 0;
		}
	case 0x6378656172746C75:
		switch(wp[1]){
		case 0x0000657669737365:return 1;
		case 0x000065766973756C:return 1;
		default:return 0;
		}
	case 0x6378657265707573:
		switch(wp[1]){
		case 0x0000676E69646565:return 1;
		case 0x0000746E656C6C65:return 1;
		default:return 0;
		}
	case 0x6378657265707968:
		switch(wp[1]){
		case 0x0000656C62617469:return 1;
		case 0x0000657669737275:return 1;
		default:return 0;
		}
	case 0x6379737061726170:
		switch(wp[1]){
		case 0x000079676F6C6F68:return 1;
		default:return 0;
		}
	case 0x637973706174656D:
		switch(wp[1]){
		case 0x000079676F6C6F68:return 1;
		default:return 0;
		}
	case 0x637973706F696469:
		switch(wp[1]){
		case 0x000079676F6C6F68:return 1;
		default:return 0;
		}
	case 0x637973706F747561:
		switch(wp[1]){
		case 0x000079676F6C6F68:return 1;
		default:return 0;
		}
	case 0x6379786F7A6E6562:
		switch(wp[1]){
		case 0x0000726F68706D61:return 1;
		default:return 0;
		}
	case 0x6461656864726168:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x6461656865726162:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x6461656865726F73:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x64616568676E6F6C:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x646165686873756D:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x646165686C6C7562:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x646165686C6F6F63:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x6461656C676E6972:
		switch(wp[1]){
		case 0x0000706968737265:return 1;
		case 0x00007373656C7265:return 1;
		default:return 0;
		}
	case 0x6461657264657270:
		switch(wp[1]){
		case 0x0000746867756F6E:return 1;
		default:return 0;
		}
	case 0x646168636E6F7262:
		switch(wp[1]){
		case 0x0000736974696E65:return 1;
		default:return 0;
		}
	case 0x646168737265766F:
		switch(wp[1]){
		case 0x0000746E656D776F:return 1;
		default:return 0;
		}
	case 0x64616C6379736164:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x64616F6572796874:
		switch(wp[1]){
		case 0x0000736974696E65:return 1;
		default:return 0;
		}
	case 0x64616F7274736167:
		switch(wp[1]){
		case 0x000063696D616E79:return 1;
		case 0x0000736974696E65:return 1;
		default:return 0;
		}
	case 0x64616F7972636164:
		switch(wp[1]){
		case 0x0000736974696E65:return 1;
		default:return 0;
		}
	case 0x64617269746C756D:
		switch(wp[1]){
		case 0x000072616C756369:return 1;
		default:return 0;
		}
	case 0x6461726F74636970:
		switch(wp[1]){
		case 0x00006D6172676F69:return 1;
		default:return 0;
		}
	case 0x6461726F746F6870:
		switch(wp[1]){
		case 0x00006D6172676F69:return 1;
		default:return 0;
		}
	case 0x6461727265746E69:
		switch(wp[1]){
		case 0x00006E6F69746169:return 1;
		default:return 0;
		}
	case 0x6461737361626D61:
		switch(wp[1]){
		case 0x000070696873726F:return 1;
		default:return 0;
		}
	case 0x6461746163616E61:
		switch(wp[1]){
		case 0x000073756D796469:return 1;
		default:return 0;
		}
	case 0x646174656D616E61:
		switch(wp[1]){
		case 0x000073756F6D6F72:return 1;
		default:return 0;
		}
	case 0x6461747369746E61:
		switch(wp[1]){
		case 0x00007265646C6F68:return 1;
		default:return 0;
		}
	case 0x64617571696D6573:
		switch(wp[1]){
		case 0x0000656C676E6172:return 1;
		case 0x0000796C746E6172:return 1;
		default:return 0;
		}
	case 0x6462616F72657475:
		switch(wp[1]){
		case 0x00006C616E696D6F:return 1;
		default:return 0;
		}
	case 0x6462616F73726F64:
		switch(wp[1]){
		case 0x00006C616E696D6F:return 1;
		default:return 0;
		}
	case 0x6462616F74636572:
		switch(wp[1]){
		case 0x00006C616E696D6F:return 1;
		default:return 0;
		}
	case 0x6462616F74736F63:
		switch(wp[1]){
		case 0x00006C616E696D6F:return 1;
		default:return 0;
		}
	case 0x6462617265707573:
		switch(wp[1]){
		case 0x00006E6F69746375:return 1;
		default:return 0;
		}
	case 0x6465626F7265766F:
		switch(wp[1]){
		case 0x0000796C746E6569:return 1;
		default:return 0;
		}
	case 0x6465636572706E75:
		switch(wp[1]){
		case 0x00006C6169746E65:return 1;
		default:return 0;
		}
	case 0x6465666E6F636E75:
		switch(wp[1]){
		case 0x0000646574617265:return 1;
		default:return 0;
		}
	case 0x64656D6172746E69:
		switch(wp[1]){
		case 0x00007972616C6C75:return 1;
		default:return 0;
		}
	case 0x64656D6172747865:
		switch(wp[1]){
		case 0x00007972616C6C75:return 1;
		default:return 0;
		}
	case 0x64656D6572706E75:
		switch(wp[1]){
		case 0x0000646574617469:return 1;
		default:return 0;
		}
	case 0x64656D6F626C7562:
		switch(wp[1]){
		case 0x00007972616C6C75:return 1;
		default:return 0;
		}
	case 0x64656D6F6E65696C:
		switch(wp[1]){
		case 0x00007972616C6C75:return 1;
		default:return 0;
		}
	case 0x64656D6F72646E61:
		switch(wp[1]){
		case 0x00006E69786F746F:return 1;
		default:return 0;
		}
	case 0x64656D7265746E69:
		switch(wp[1]){
		case 0x00006E6F69746169:return 1;
		case 0x0000796C65746169:return 1;
		case 0x000079726F746169:return 1;
		default:return 0;
		}
	case 0x64656E6562657270:
		switch(wp[1]){
		case 0x00006E6F69746369:return 1;
		default:return 0;
		}
	case 0x64656E6F6E697571:
		switch(wp[1]){
		case 0x0000656E696D6969:return 1;
		default:return 0;
		}
	case 0x6465706F6874726F:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x6465706F6C637963:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x6465726363616E75:
		switch(wp[1]){
		case 0x0000646574617469:return 1;
		default:return 0;
		}
	case 0x6465726F6469786F:
		switch(wp[1]){
		case 0x0000657361746375:return 1;
		case 0x00006E6F69746375:return 1;
		default:return 0;
		}
	case 0x64657461756E6973:
		switch(wp[1]){
		case 0x0000657461746E65:return 1;
		default:return 0;
		}
	case 0x646575716E697571:
		switch(wp[1]){
		case 0x0000657461746E65:return 1;
		default:return 0;
		}
	case 0x6469636162726163:
		switch(wp[1]){
		case 0x0000726574656D6F:return 1;
		default:return 0;
		}
	case 0x646963696C707564:
		switch(wp[1]){
		case 0x0000657461746E65:return 1;
		default:return 0;
		}
	case 0x6469666172746C75:
		switch(wp[1]){
		case 0x00006D73696E6169:return 1;
		default:return 0;
		}
	case 0x6469666E6F636E75:
		switch(wp[1]){
		case 0x00006C6169746E65:return 1;
		default:return 0;
		}
	case 0x646968747963656C:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x64696F6572796874:
		switch(wp[1]){
		case 0x0000796D6F746365:return 1;
		default:return 0;
		}
	case 0x64696F68706D796C:
		switch(wp[1]){
		case 0x0000796D6F746365:return 1;
		default:return 0;
		}
	case 0x64696F7265687073:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x6469726170706163:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x6469726562726562:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x6469726F74696C63:
		switch(wp[1]){
		case 0x0000796D6F746365:return 1;
		default:return 0;
		}
	case 0x64697365726E6F6E:
		switch(wp[1]){
		case 0x00006C6169746E65:return 1;
		default:return 0;
		}
	case 0x6469736572706E75:
		switch(wp[1]){
		case 0x00006C6169746E65:return 1;
		default:return 0;
		}
	case 0x6469736E6F636E69:
		switch(wp[1]){
		case 0x0000656C62617265:return 1;
		case 0x0000796C62617265:return 1;
		default:return 0;
		}
	case 0x6469736E6F636E75:
		switch(wp[1]){
		case 0x0000656C62617265:return 1;
		case 0x0000796C64657265:return 1;
		default:return 0;
		}
	case 0x6469736F63756C67:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x6469747361666E75:
		switch(wp[1]){
		case 0x0000796C73756F69:return 1;
		default:return 0;
		}
	case 0x64697571696C6E75:
		switch(wp[1]){
		case 0x0000656C62617461:return 1;
		default:return 0;
		}
	case 0x6469766F72706E75:
		switch(wp[1]){
		case 0x00006C6169746E65:return 1;
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x6469777373617267:
		switch(wp[1]){
		case 0x0000646F6F68776F:return 1;
		default:return 0;
		}
	case 0x646C6F6864617473:
		switch(wp[1]){
		case 0x0000706968737265:return 1;
		default:return 0;
		}
	case 0x646C6F68646E616C:
		switch(wp[1]){
		case 0x0000706968737265:return 1;
		default:return 0;
		}
	case 0x646C6F6865626E75:
		switch(wp[1]){
		case 0x00007373656E6E65:return 1;
		default:return 0;
		}
	case 0x646C6F6865657266:
		switch(wp[1]){
		case 0x0000706968737265:return 1;
		default:return 0;
		}
	case 0x646C726F77657270:
		switch(wp[1]){
		case 0x00007373656E696C:return 1;
		default:return 0;
		}
	case 0x646E6162616E6F6E:
		switch(wp[1]){
		case 0x0000746E656D6E6F:return 1;
		default:return 0;
		}
	case 0x646E61686372656D:
		switch(wp[1]){
		case 0x0000656C62617369:return 1;
		default:return 0;
		}
	case 0x646E616864726168:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x646E616865657266:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x646E616865726F66:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x646E616868676968:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x646E61686B636162:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x646E61686E65706F:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x646E61686E657665:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x646E61686E6F7269:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x646E616D616C6173:
		switch(wp[1]){
		case 0x0000656B696C7265:return 1;
		case 0x00006D726F666972:return 1;
		default:return 0;
		}
	case 0x646E616D74736F70:
		switch(wp[1]){
		case 0x000072616C756269:return 1;
		default:return 0;
		}
	case 0x646E6173756F6874:
		switch(wp[1]){
		case 0x0000746867696577:return 1;
		case 0x0000796C646C6F66:return 1;
		default:return 0;
		}
	case 0x646E617473627573:
		switch(wp[1]){
		case 0x0000657A69647261:return 1;
		default:return 0;
		}
	case 0x646E617473657270:
		switch(wp[1]){
		case 0x0000657A69647261:return 1;
		default:return 0;
		}
	case 0x646E656972666E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		case 0x00007373656E696C:return 1;
		default:return 0;
		}
	case 0x646E657065646E69:
		switch(wp[1]){
		case 0x00006D7369746E65:return 1;
		default:return 0;
		}
	case 0x646E6574696D6573:
		switch(wp[1]){
		case 0x00007375736F6E69:return 1;
		default:return 0;
		}
	case 0x646E65747265766F:
		switch(wp[1]){
		case 0x00007373656E7265:return 1;
		default:return 0;
		}
	case 0x646E657478656E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x646E696172746C75:
		switch(wp[1]){
		case 0x0000746E65676C75:return 1;
		default:return 0;
		}
	case 0x646E696D6E657665:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x646E696F6375656C:
		switch(wp[1]){
		case 0x00006E69746F6769:return 1;
		default:return 0;
		}
	case 0x646E696F746F6870:
		switch(wp[1]){
		case 0x00006E6F69746375:return 1;
		default:return 0;
		}
	case 0x646E697265707573:
		switch(wp[1]){
		case 0x00006E6F69746369:return 1;
		case 0x00006E6F69746375:return 1;
		case 0x0000746E616E6769:return 1;
		case 0x0000746E65676C75:return 1;
		default:return 0;
		}
	case 0x646E69746E616C73:
		switch(wp[1]){
		case 0x000072616C756369:return 1;
		default:return 0;
		}
	case 0x646E6F63696D6573:
		switch(wp[1]){
		case 0x0000676E69746375:return 1;
		default:return 0;
		}
	case 0x646E6F636F747561:
		switch(wp[1]){
		case 0x00006E6F69746375:return 1;
		default:return 0;
		}
	case 0x646E6F68636E7973:
		switch(wp[1]){
		case 0x00006C6169736F72:return 1;
		case 0x0000796D6F746F72:return 1;
		default:return 0;
		}
	case 0x646E6F7069757165:
		switch(wp[1]){
		case 0x000065636E617265:return 1;
		case 0x000079636E617265:return 1;
		default:return 0;
		}
	case 0x646E756F666D7564:
		switch(wp[1]){
		case 0x0000746E656D7265:return 1;
		default:return 0;
		}
	case 0x646E756F666E6F63:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x646E756F706D6F63:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x646E756F72676E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x646F6361726F6874:
		switch(wp[1]){
		case 0x0000737568706C65:return 1;
		case 0x000073756D796469:return 1;
		default:return 0;
		}
	case 0x646F63696D656863:
		switch(wp[1]){
		case 0x000063696D616E79:return 1;
		default:return 0;
		}
	case 0x646F646E61706572:
		switch(wp[1]){
		case 0x0000657461746E65:return 1;
		default:return 0;
		}
	case 0x646F676E6972796D:
		switch(wp[1]){
		case 0x0000796D6F746365:return 1;
		default:return 0;
		}
	case 0x646F68636E6F7262:
		switch(wp[1]){
		case 0x0000726F74616C69:return 1;
		default:return 0;
		}
	case 0x646F687370696C73:
		switch(wp[1]){
		case 0x00007373656E6964:return 1;
		default:return 0;
		}
	case 0x646F6874656D6D69:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x646F6874656D6E75:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x646F6874696E726F:
		switch(wp[1]){
		case 0x0000636968706C65:return 1;
		default:return 0;
		}
	case 0x646F6874726F6E75:
		switch(wp[1]){
		case 0x00007373656E786F:return 1;
		default:return 0;
		}
	case 0x646F6874736F7270:
		switch(wp[1]){
		case 0x0000747369746E6F:return 1;
		default:return 0;
		}
	case 0x646F696D6F726361:
		switch(wp[1]){
		case 0x000064696F746C65:return 1;
		default:return 0;
		}
	case 0x646F6972626D6966:
		switch(wp[1]){
		case 0x0000657461746E65:return 1;
		default:return 0;
		}
	case 0x646F6C7369646E75:
		switch(wp[1]){
		case 0x0000656C62616567:return 1;
		default:return 0;
		}
	case 0x646F6D6172746C75:
		switch(wp[1]){
		case 0x00006D73696E7265:return 1;
		case 0x00007473696E7265:return 1;
		default:return 0;
		}
	case 0x646F6D6D6F636E69:
		switch(wp[1]){
		case 0x0000796C73756F69:return 1;
		default:return 0;
		}
	case 0x646F6D6D6F636E75:
		switch(wp[1]){
		case 0x0000796C73756F69:return 1;
		default:return 0;
		}
	case 0x646F6D7265746E69:
		switch(wp[1]){
		case 0x00006E6F696C6C69:return 1;
		default:return 0;
		}
	case 0x646F6E6179636964:
		switch(wp[1]){
		case 0x00006564696D6169:return 1;
		default:return 0;
		}
	case 0x646F6E6972707963:
		switch(wp[1]){
		case 0x000064696F746E6F:return 1;
		default:return 0;
		}
	case 0x646F6E6F63697274:
		switch(wp[1]){
		case 0x000064696F746E6F:return 1;
		default:return 0;
		}
	case 0x646F6F776B636162:
		switch(wp[1]){
		case 0x00007373656E6973:return 1;
		default:return 0;
		}
	case 0x646F726874797265:
		switch(wp[1]){
		case 0x00006E6972747865:return 1;
		default:return 0;
		}
	case 0x646F727065726E75:
		switch(wp[1]){
		case 0x0000656C62696375:return 1;
		default:return 0;
		}
	case 0x646F727065727269:
		switch(wp[1]){
		case 0x0000656C62696375:return 1;
		case 0x0000657669746375:return 1;
		default:return 0;
		}
	case 0x646F7270696E6D6F:
		switch(wp[1]){
		case 0x00006E6F69746375:return 1;
		default:return 0;
		}
	case 0x646F72707265766F:
		switch(wp[1]){
		case 0x0000657669746375:return 1;
		case 0x00006E6F69746375:return 1;
		default:return 0;
		}
	case 0x646F727463656C65:
		switch(wp[1]){
		case 0x000063696D616E79:return 1;
		case 0x0000657A796C6169:return 1;
		case 0x00007469736F7065:return 1;
		default:return 0;
		}
	case 0x646F72746E696572:
		switch(wp[1]){
		case 0x00006E6F69746375:return 1;
		default:return 0;
		}
	case 0x646F72746E696E75:
		switch(wp[1]){
		case 0x0000656C62696375:return 1;
		default:return 0;
		}
	case 0x646F736F6E697073:
		switch(wp[1]){
		case 0x0000657461746E65:return 1;
		default:return 0;
		}
	case 0x646F737369726570:
		switch(wp[1]){
		case 0x0000656C79746361:return 1;
		default:return 0;
		}
	case 0x646F74616E6E6970:
		switch(wp[1]){
		case 0x0000657461746E65:return 1;
		default:return 0;
		}
	case 0x646F746172726573:
		switch(wp[1]){
		case 0x0000657461746E65:return 1;
		default:return 0;
		}
	case 0x646F7461756E6973:
		switch(wp[1]){
		case 0x0000657461746E65:return 1;
		default:return 0;
		}
	case 0x646F7463616C6167:
		switch(wp[1]){
		case 0x00006E6F72646E65:return 1;
		default:return 0;
		}
	case 0x646F746E616C7461:
		switch(wp[1]){
		case 0x000073756D796469:return 1;
		default:return 0;
		}
	case 0x6472616369726570:
		switch(wp[1]){
		case 0x0000796D6F746F69:return 1;
		default:return 0;
		}
	case 0x647261646E617473:
		switch(wp[1]){
		case 0x0000656C62617A69:return 1;
		default:return 0;
		}
	case 0x6472616767756C73:
		switch(wp[1]){
		case 0x00007373656E696C:return 1;
		default:return 0;
		}
	case 0x647261776F746E75:
		switch(wp[1]){
		case 0x00007373656E696C:return 1;
		default:return 0;
		}
	case 0x6472656361736E75:
		switch(wp[1]){
		case 0x0000796C6C61746F:return 1;
		default:return 0;
		}
	case 0x647265706F63796C:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x6472657070616C63:
		switch(wp[1]){
		case 0x00006E6F65676475:return 1;
		default:return 0;
		}
	case 0x6472657472617571:
		switch(wp[1]){
		case 0x00006873696B6365:return 1;
		default:return 0;
		}
	case 0x64726F6275736E75:
		switch(wp[1]){
		case 0x0000646574616E69:return 1;
		default:return 0;
		}
	case 0x64726F6365726E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x647275627265766F:
		switch(wp[1]){
		case 0x0000656D6F736E65:return 1;
		default:return 0;
		}
	case 0x6475617269616C63:
		switch(wp[1]){
		case 0x0000796C746E6569:return 1;
		default:return 0;
		}
	case 0x64756A6572706E75:
		switch(wp[1]){
		case 0x0000646574616369:return 1;
		case 0x0000796C64656369:return 1;
		default:return 0;
		}
	case 0x64756C6F69726573:
		switch(wp[1]){
		case 0x000073756F726369:return 1;
		default:return 0;
		}
	case 0x64757065726E6F6E:
		switch(wp[1]){
		case 0x00006E6F69746169:return 1;
		default:return 0;
		}
	case 0x6475727069746E61:
		switch(wp[1]){
		case 0x00006C6169746E65:return 1;
		default:return 0;
		}
	case 0x64757469676E6F6C:
		switch(wp[1]){
		case 0x0000796C6C616E69:return 1;
		default:return 0;
		}
	case 0x6475746974616C70:
		switch(wp[1]){
		case 0x000072657A696E69:return 1;
		default:return 0;
		}
	case 0x647574737265766F:
		switch(wp[1]){
		case 0x0000796C73756F69:return 1;
		default:return 0;
		}
	case 0x6479686F62726163:
		switch(wp[1]){
		case 0x00006564697A6172:return 1;
		default:return 0;
		}
	case 0x6479686F69676E61:
		switch(wp[1]){
		case 0x0000796D6F746F72:return 1;
		default:return 0;
		}
	case 0x6479686F7A616964:
		switch(wp[1]){
		case 0x0000656469786F72:return 1;
		default:return 0;
		}
	case 0x65616C656D796874:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x65616C6F6E6D7967:
		switch(wp[1]){
		case 0x000073756F74616D:return 1;
		default:return 0;
		}
	case 0x6562696C646F7571:
		switch(wp[1]){
		case 0x00006E6169726174:return 1;
		default:return 0;
		}
	case 0x6562696C65646572:
		switch(wp[1]){
		case 0x00006E6F69746172:return 1;
		default:return 0;
		}
	case 0x6562696C65646E69:
		switch(wp[1]){
		case 0x00006E6F69746172:return 1;
		case 0x0000796C65746172:return 1;
		default:return 0;
		}
	case 0x6562696C65646E75:
		switch(wp[1]){
		case 0x0000657669746172:return 1;
		case 0x0000676E69746172:return 1;
		case 0x0000796C65746172:return 1;
		default:return 0;
		}
	case 0x6562696C7265766F:
		switch(wp[1]){
		case 0x00007974696C6172:return 1;
		default:return 0;
		}
	case 0x65626C7974656361:
		switch(wp[1]){
		case 0x00006574616F7A6E:return 1;
		default:return 0;
		}
	case 0x65626D7563726963:
		switch(wp[1]){
		case 0x000073756269646E:return 1;
		default:return 0;
		}
	case 0x65626F68706C7573:
		switch(wp[1]){
		case 0x00006574616F7A6E:return 1;
		default:return 0;
		}
	case 0x65626F7265707573:
		switch(wp[1]){
		case 0x000065636E656964:return 1;
		default:return 0;
		}
	case 0x6562726563617865:
		switch(wp[1]){
		case 0x000065636E656373:return 1;
		default:return 0;
		}
	case 0x6562757461726170:
		switch(wp[1]){
		case 0x00006E696C756372:return 1;
		default:return 0;
		}
	case 0x6562757469746E61:
		switch(wp[1]){
		case 0x00006E696C756372:return 1;
		default:return 0;
		}
	case 0x6562757469786573:
		switch(wp[1]){
		case 0x000072616C756372:return 1;
		default:return 0;
		}
	case 0x656275746F747561:
		switch(wp[1]){
		case 0x00006E696C756372:return 1;
		default:return 0;
		}
	case 0x6562757474736F70:
		switch(wp[1]){
		case 0x000072616C756372:return 1;
		default:return 0;
		}
	case 0x65636164726F6863:
		switch(wp[1]){
		case 0x000073756F72746E:return 1;
		default:return 0;
		}
	case 0x6563616D72616870:
		switch(wp[1]){
		case 0x00006C6163697475:return 1;
		default:return 0;
		}
	case 0x6563616D72657073:
		switch(wp[1]){
		case 0x0000656B696C6974:return 1;
		default:return 0;
		}
	case 0x65636173696D6573:
		switch(wp[1]){
		case 0x00006C61746F6472:return 1;
		default:return 0;
		}
	case 0x6563617369746E61:
		switch(wp[1]){
		case 0x00006C61746F6472:return 1;
		default:return 0;
		}
	case 0x656363617265766F:
		switch(wp[1]){
		case 0x000065746175746E:return 1;
		default:return 0;
		}
	case 0x65636966696E756D:
		switch(wp[1]){
		case 0x00007373656E746E:return 1;
		default:return 0;
		}
	case 0x6563696C7265766F:
		switch(wp[1]){
		case 0x000073756F69746E:return 1;
		default:return 0;
		}
	case 0x6563697264617571:
		switch(wp[1]){
		case 0x000072616C756C6C:return 1;
		default:return 0;
		}
	case 0x656369746173656D:
		switch(wp[1]){
		case 0x000063696C616870:return 1;
		default:return 0;
		}
	case 0x65636E61636E6F6E:
		switch(wp[1]){
		case 0x0000656C62616C6C:return 1;
		default:return 0;
		}
	case 0x65636E65656C6170:
		switch(wp[1]){
		case 0x00006E6F6C616870:return 1;
		default:return 0;
		}
	case 0x65636E6568637261:
		switch(wp[1]){
		case 0x000063696C616870:return 1;
		default:return 0;
		}
	case 0x65636E656C65796D:
		switch(wp[1]){
		case 0x000063696C616870:return 1;
		case 0x00006E6F6C616870:return 1;
		default:return 0;
		}
	case 0x65636E656E696872:
		switch(wp[1]){
		case 0x000063696C616870:return 1;
		case 0x00006E6F6C616870:return 1;
		default:return 0;
		}
	case 0x65636E657263616D:
		switch(wp[1]){
		case 0x000063696C616870:return 1;
		default:return 0;
		}
	case 0x65636E657263696D:
		switch(wp[1]){
		case 0x000061696C616870:return 1;
		case 0x000063696C616870:return 1;
		case 0x000073756C616870:return 1;
		default:return 0;
		}
	case 0x65636E6572647968:
		switch(wp[1]){
		case 0x000073756C616870:return 1;
		default:return 0;
		}
	case 0x65636E65736F7270:
		switch(wp[1]){
		case 0x000063696C616870:return 1;
		case 0x00006E6F6C616870:return 1;
		default:return 0;
		}
	case 0x65636E657373696C:
		switch(wp[1]){
		case 0x000063696C616870:return 1;
		default:return 0;
		}
	case 0x65636E6574697274:
		switch(wp[1]){
		case 0x00006E6F6C616870:return 1;
		default:return 0;
		}
	case 0x65636E6574736F70:
		switch(wp[1]){
		case 0x00006E6F6C616870:return 1;
		default:return 0;
		}
	case 0x65636E6574756564:
		switch(wp[1]){
		case 0x000063696C616870:return 1;
		case 0x00006E6F6C616870:return 1;
		default:return 0;
		}
	case 0x65636E6972706E75:
		switch(wp[1]){
		case 0x00007373656E696C:return 1;
		default:return 0;
		}
	case 0x65636E6F63657270:
		switch(wp[1]){
		case 0x0000656C62617669:return 1;
		case 0x000065746172746E:return 1;
		case 0x0000746E656D6C61:return 1;
		case 0x0000746E656D6E72:return 1;
		case 0x0000796C64657472:return 1;
		default:return 0;
		}
	case 0x65636E6F636E6F6E:
		switch(wp[1]){
		case 0x0000746E656D6C61:return 1;
		default:return 0;
		}
	case 0x65636E6F63736964:
		switch(wp[1]){
		case 0x0000746E656D7472:return 1;
		case 0x0000796C64657472:return 1;
		default:return 0;
		}
	case 0x65636F6369736576:
		switch(wp[1]){
		case 0x00006C6163697672:return 1;
		default:return 0;
		}
	case 0x65636F6475657370:
		switch(wp[1]){
		case 0x0000616972616372:return 1;
		case 0x000073756F72746E:return 1;
		default:return 0;
		}
	case 0x65636F6572796874:
		switch(wp[1]){
		case 0x00006C6163697672:return 1;
		default:return 0;
		}
	case 0x65636F68636F7274:
		switch(wp[1]){
		case 0x000061696C616870:return 1;
		case 0x000063696C616870:return 1;
		case 0x000073756C616870:return 1;
		default:return 0;
		}
	case 0x65636F6870616373:
		switch(wp[1]){
		case 0x000063696C616870:return 1;
		case 0x000073756C616870:return 1;
		default:return 0;
		}
	case 0x65636F6964726163:
		switch(wp[1]){
		case 0x000073697365746E:return 1;
		default:return 0;
		}
	case 0x65636F6967616C70:
		switch(wp[1]){
		case 0x000063696C616870:return 1;
		default:return 0;
		}
	case 0x65636F6968636172:
		switch(wp[1]){
		case 0x000073697365746E:return 1;
		default:return 0;
		}
	case 0x65636F696E617263:
		switch(wp[1]){
		case 0x00006C6172626572:return 1;
		default:return 0;
		}
	case 0x65636F697261766F:
		switch(wp[1]){
		case 0x000073697365746E:return 1;
		default:return 0;
		}
	case 0x65636F697274656D:
		switch(wp[1]){
		case 0x000063696C616870:return 1;
		default:return 0;
		}
	case 0x65636F6C6167656D:
		switch(wp[1]){
		case 0x000061696C616870:return 1;
		case 0x000063696C616870:return 1;
		default:return 0;
		}
	case 0x65636F6C656B6964:
		switch(wp[1]){
		case 0x000064696C616870:return 1;
		default:return 0;
		}
	case 0x65636F6C706F6E61:
		switch(wp[1]){
		case 0x000063696C616870:return 1;
		default:return 0;
		}
	case 0x65636F6C7563616D:
		switch(wp[1]){
		case 0x00006C6172626572:return 1;
		default:return 0;
		}
	case 0x65636F6D61757173:
		switch(wp[1]){
		case 0x000072616C756C6C:return 1;
		default:return 0;
		}
	case 0x65636F6D75656E70:
		switch(wp[1]){
		case 0x000073697365746E:return 1;
		default:return 0;
		}
	case 0x65636F6E65687073:
		switch(wp[1]){
		case 0x000061696C616870:return 1;
		case 0x000063696C616870:return 1;
		default:return 0;
		}
	case 0x65636F6E656D7572:
		switch(wp[1]){
		case 0x000073697365746E:return 1;
		default:return 0;
		}
	case 0x65636F6E69706174:
		switch(wp[1]){
		case 0x000063696C616870:return 1;
		default:return 0;
		}
	case 0x65636F72646E6564:
		switch(wp[1]){
		case 0x0000656E69746172:return 1;
		default:return 0;
		}
	case 0x65636F726574616C:
		switch(wp[1]){
		case 0x00006C6163697672:return 1;
		default:return 0;
		}
	case 0x65636F7265746568:
		switch(wp[1]){
		case 0x000072616C756C6C:return 1;
		default:return 0;
		}
	case 0x65636F7265746E65:
		switch(wp[1]){
		case 0x000073697365746E:return 1;
		default:return 0;
		}
	case 0x65636F7274736167:
		switch(wp[1]){
		case 0x000073756F72746E:return 1;
		default:return 0;
		}
	case 0x65636F7274786564:
		switch(wp[1]){
		case 0x00006C6172626572:return 1;
		default:return 0;
		}
	case 0x65636F7275656C70:
		switch(wp[1]){
		case 0x00006C6172626572:return 1;
		case 0x000073697365746E:return 1;
		default:return 0;
		}
	case 0x65636F746172656B:
		switch(wp[1]){
		case 0x000073697365746E:return 1;
		default:return 0;
		}
	case 0x65636F7974636964:
		switch(wp[1]){
		case 0x0000656E69746172:return 1;
		default:return 0;
		}
	case 0x65637365646E6F63:
		switch(wp[1]){
		case 0x000065636E65646E:return 1;
		default:return 0;
		}
	case 0x6563736964657270:
		switch(wp[1]){
		case 0x0000746E656D6E72:return 1;
		default:return 0;
		}
	case 0x65637369646E6F6E:
		switch(wp[1]){
		case 0x0000746E656D6E72:return 1;
		default:return 0;
		}
	case 0x6563737265707968:
		switch(wp[1]){
		case 0x00006C6163697470:return 1;
		default:return 0;
		}
	case 0x6563737573657270:
		switch(wp[1]){
		case 0x0000656C62697470:return 1;
		default:return 0;
		}
	case 0x6563756C6F766E69:
		switch(wp[1]){
		case 0x0000646574616C6C:return 1;
		default:return 0;
		}
	case 0x6563786569757165:
		switch(wp[1]){
		case 0x000079636E656C6C:return 1;
		default:return 0;
		}
	case 0x6563796863617262:
		switch(wp[1]){
		case 0x000063696C616870:return 1;
		default:return 0;
		}
	case 0x6564617265746E65:
		switch(wp[1]){
		case 0x000079676F6C6F6E:return 1;
		default:return 0;
		}
	case 0x6564617972636164:
		switch(wp[1]){
		case 0x00006169676C616E:return 1;
		default:return 0;
		}
	case 0x65646561706F7270:
		switch(wp[1]){
		case 0x00006C6163697475:return 1;
		default:return 0;
		}
	case 0x6564656669746E61:
		switch(wp[1]){
		case 0x00006D73696C6172:return 1;
		case 0x00007473696C6172:return 1;
		default:return 0;
		}
	case 0x6564656C62626F68:
		switch(wp[1]){
		case 0x0000687369796F68:return 1;
		case 0x00006D6F64796F68:return 1;
		case 0x00006D7369796F68:return 1;
		default:return 0;
		}
	case 0x6564696363616E75:
		switch(wp[1]){
		case 0x0000796C6C61746E:return 1;
		default:return 0;
		}
	case 0x656469636E696F63:
		switch(wp[1]){
		case 0x0000796C6C61746E:return 1;
		default:return 0;
		}
	case 0x6564697264617571:
		switch(wp[1]){
		case 0x000064657461746E:return 1;
		default:return 0;
		}
	case 0x656469736F726561:
		switch(wp[1]){
		case 0x00006574696C6F72:return 1;
		default:return 0;
		}
	case 0x65646C6174656361:
		switch(wp[1]){
		case 0x0000657361647968:return 1;
		default:return 0;
		}
	case 0x65646D6574706573:
		switch(wp[1]){
		case 0x00007972616E6563:return 1;
		default:return 0;
		}
	case 0x65646E6F636E6F6E:
		switch(wp[1]){
		case 0x0000656C6261736E:return 1;
		case 0x0000656C6269736E:return 1;
		default:return 0;
		}
	case 0x65646E6F70657270:
		switch(wp[1]){
		case 0x0000676E69746172:return 1;
		case 0x00006E6F69746172:return 1;
		case 0x0000796C65746172:return 1;
		case 0x0000796C73756F72:return 1;
		case 0x0000796C746E6172:return 1;
		default:return 0;
		}
	case 0x65646E6F706E6F6E:
		switch(wp[1]){
		case 0x0000797469736F72:return 1;
		default:return 0;
		}
	case 0x65646F6369786F74:
		switch(wp[1]){
		case 0x0000736974696D72:return 1;
		default:return 0;
		}
	case 0x65646F646970656C:
		switch(wp[1]){
		case 0x000064696F72646E:return 1;
		default:return 0;
		}
	case 0x65646F6475657370:
		switch(wp[1]){
		case 0x00006169746E656D:return 1;
		default:return 0;
		}
	case 0x65646F6572746976:
		switch(wp[1]){
		case 0x00006C616E69746E:return 1;
		default:return 0;
		}
	case 0x65646F6E6F697270:
		switch(wp[1]){
		case 0x0000636974616D73:return 1;
		default:return 0;
		}
	case 0x65646F72656C6373:
		switch(wp[1]){
		case 0x0000636974696D72:return 1;
		case 0x0000736974696D72:return 1;
		default:return 0;
		}
	case 0x65646F7473616C62:
		switch(wp[1]){
		case 0x0000636974616D72:return 1;
		default:return 0;
		}
	case 0x6564726574746174:
		switch(wp[1]){
		case 0x00006E6F696C616D:return 1;
		default:return 0;
		}
	case 0x656572677265766F:
		switch(wp[1]){
		case 0x00007373656E6964:return 1;
		default:return 0;
		}
	case 0x6566696E616D6D69:
		switch(wp[1]){
		case 0x00007373656E7473:return 1;
		default:return 0;
		}
	case 0x656669726F6E6F73:
		switch(wp[1]){
		case 0x0000796C73756F72:return 1;
		default:return 0;
		}
	case 0x656669726F706F73:
		switch(wp[1]){
		case 0x0000796C73756F72:return 1;
		default:return 0;
		}
	case 0x6566697463757266:
		switch(wp[1]){
		case 0x0000796C73756F72:return 1;
		default:return 0;
		}
	case 0x65666974756C6173:
		switch(wp[1]){
		case 0x0000796C73756F72:return 1;
		default:return 0;
		}
	case 0x65666D7563726963:
		switch(wp[1]){
		case 0x0000726F746E6572:return 1;
		default:return 0;
		}
	case 0x65666E6969786F74:
		switch(wp[1]){
		case 0x000073756F697463:return 1;
		default:return 0;
		}
	case 0x65666E6F636E6F6E:
		switch(wp[1]){
		case 0x0000656C62617272:return 1;
		case 0x0000657461726564:return 1;
		default:return 0;
		}
	case 0x65666F6475657370:
		switch(wp[1]){
		case 0x0000656E696E696D:return 1;
		case 0x0000687369726576:return 1;
		default:return 0;
		}
	case 0x65666F6E65737261:
		switch(wp[1]){
		case 0x00006E6974617272:return 1;
		default:return 0;
		}
	case 0x6566726570756C70:
		switch(wp[1]){
		case 0x00007373656E7463:return 1;
		default:return 0;
		}
	case 0x6566726F666E6F6E:
		switch(wp[1]){
		case 0x0000656C62617469:return 1;
		default:return 0;
		}
	case 0x65676168706F7365:
		switch(wp[1]){
		case 0x0000616973617463:return 1;
		default:return 0;
		}
	case 0x6567617264617571:
		switch(wp[1]){
		case 0x00006E616972616E:return 1;
		default:return 0;
		}
	case 0x6567617461727473:
		switch(wp[1]){
		case 0x000074736974616D:return 1;
		default:return 0;
		}
	case 0x6567617574706573:
		switch(wp[1]){
		case 0x00006E616972616E:return 1;
		default:return 0;
		}
	case 0x6567676178656E75:
		switch(wp[1]){
		case 0x0000676E69746172:return 1;
		default:return 0;
		}
	case 0x6567697264617571:
		switch(wp[1]){
		case 0x00006574616E696D:return 1;
		case 0x000073756F6E696D:return 1;
		default:return 0;
		}
	case 0x65676E6172647968:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x65676E69746E6F63:
		switch(wp[1]){
		case 0x00007373656E746E:return 1;
		default:return 0;
		}
	case 0x65676F6475657370:
		switch(wp[1]){
		case 0x000063696E616D72:return 1;
		case 0x000073756F72656E:return 1;
		case 0x0000797274656D6F:return 1;
		default:return 0;
		}
	case 0x65676F6863797370:
		switch(wp[1]){
		case 0x000073636974656E:return 1;
		default:return 0;
		}
	case 0x65676F68706C7573:
		switch(wp[1]){
		case 0x000063696E616D72:return 1;
		default:return 0;
		}
	case 0x65676F68746E6178:
		switch(wp[1]){
		case 0x00006564696D616E:return 1;
		default:return 0;
		}
	case 0x65676F6D616E7964:
		switch(wp[1]){
		case 0x0000796C73756F6E:return 1;
		default:return 0;
		}
	case 0x65676F6D69746C75:
		switch(wp[1]){
		case 0x000065727574696E:return 1;
		case 0x000079726174696E:return 1;
		default:return 0;
		}
	case 0x65676F6E756D6D69:
		switch(wp[1]){
		case 0x000073636974656E:return 1;
		case 0x000079746963696E:return 1;
		default:return 0;
		}
	case 0x65676F7265746568:
		switch(wp[1]){
		case 0x000079746963696E:return 1;
		default:return 0;
		}
	case 0x65676F7A69686373:
		switch(wp[1]){
		case 0x0000796C73756F6E:return 1;
		default:return 0;
		}
	case 0x65677265766E6F63:
		switch(wp[1]){
		case 0x000065636E656373:return 1;
		default:return 0;
		}
	case 0x656779786F736964:
		switch(wp[1]){
		case 0x00006E6F6974616E:return 1;
		default:return 0;
		}
	case 0x6568636F68746170:
		switch(wp[1]){
		case 0x000079727473696D:return 1;
		default:return 0;
		}
	case 0x6568636F6874696C:
		switch(wp[1]){
		case 0x000079727473696D:return 1;
		default:return 0;
		}
	case 0x6568636F69646172:
		switch(wp[1]){
		case 0x000079727473696D:return 1;
		default:return 0;
		}
	case 0x6568636F6C6C6F63:
		switch(wp[1]){
		case 0x000079727473696D:return 1;
		default:return 0;
		}
	case 0x6568636F7263616D:
		switch(wp[1]){
		case 0x000079727473696D:return 1;
		default:return 0;
		}
	case 0x6568636F7263696D:
		switch(wp[1]){
		case 0x000079727473696D:return 1;
		default:return 0;
		}
	case 0x6568636F72647968:
		switch(wp[1]){
		case 0x000079727473696D:return 1;
		default:return 0;
		}
	case 0x6568636F72697073:
		switch(wp[1]){
		case 0x0000656469636974:return 1;
		default:return 0;
		}
	case 0x6568636F72746169:
		switch(wp[1]){
		case 0x000079727473696D:return 1;
		default:return 0;
		}
	case 0x6568636F72746570:
		switch(wp[1]){
		case 0x000079727473696D:return 1;
		default:return 0;
		}
	case 0x6568636F72747361:
		switch(wp[1]){
		case 0x000079727473696D:return 1;
		default:return 0;
		}
	case 0x6568636F7275656E:
		switch(wp[1]){
		case 0x000079727473696D:return 1;
		default:return 0;
		}
	case 0x6568636F746F6870:
		switch(wp[1]){
		case 0x000079727473696D:return 1;
		default:return 0;
		}
	case 0x6568636F746F7270:
		switch(wp[1]){
		case 0x000079727473696D:return 1;
		default:return 0;
		}
	case 0x6568636F74736968:
		switch(wp[1]){
		case 0x000079727473696D:return 1;
		default:return 0;
		}
	case 0x6568636F74796870:
		switch(wp[1]){
		case 0x000079727473696D:return 1;
		default:return 0;
		}
	case 0x6568636F7A656970:
		switch(wp[1]){
		case 0x000079727473696D:return 1;
		default:return 0;
		}
	case 0x65686373796C6F70:
		switch(wp[1]){
		case 0x000074736974616D:return 1;
		default:return 0;
		}
	case 0x6568656C7A7A7570:
		switch(wp[1]){
		case 0x0000796C64656461:return 1;
		default:return 0;
		}
	case 0x65686572706D6F63:
		switch(wp[1]){
		case 0x0000656C6269646E:return 1;
		case 0x0000656C6269736E:return 1;
		case 0x0000796C6269736E:return 1;
		default:return 0;
		}
	case 0x6568657275676966:
		switch(wp[1]){
		case 0x0000706968736461:return 1;
		case 0x00007373656C6461:return 1;
		default:return 0;
		}
	case 0x6568676E6F727473:
		switch(wp[1]){
		case 0x0000796C64656461:return 1;
		default:return 0;
		}
	case 0x65686C6168706563:
		switch(wp[1]){
		case 0x0000616D6F74616D:return 1;
		default:return 0;
		}
	case 0x65686F626D6F6872:
		switch(wp[1]){
		case 0x0000796C6C617264:return 1;
		default:return 0;
		}
	case 0x65686F6973697065:
		switch(wp[1]){
		case 0x0000616D6F74616D:return 1;
		default:return 0;
		}
	case 0x65686F7265746E65:
		switch(wp[1]){
		case 0x00007369736F636C:return 1;
		default:return 0;
		}
	case 0x65686F7274736167:
		switch(wp[1]){
		case 0x00007369736F636C:return 1;
		default:return 0;
		}
	case 0x65686F7379726863:
		switch(wp[1]){
		case 0x00006E6964696D72:return 1;
		default:return 0;
		}
	case 0x65686F746172656B:
		switch(wp[1]){
		case 0x00007369736F636C:return 1;
		default:return 0;
		}
	case 0x65686F7972636164:
		switch(wp[1]){
		case 0x00007369736F636C:return 1;
		default:return 0;
		}
	case 0x65687065746F7270:
		switch(wp[1]){
		case 0x000064696F72656D:return 1;
		default:return 0;
		}
	case 0x6568706F6874726F:
		switch(wp[1]){
		case 0x0000656E656C796E:return 1;
		default:return 0;
		}
	case 0x6568706F72706E75:
		switch(wp[1]){
		case 0x0000656C62616973:return 1;
		default:return 0;
		}
	case 0x6568706F74656361:
		switch(wp[1]){
		case 0x000065646974656E:return 1;
		default:return 0;
		}
	case 0x6568706F74796870:
		switch(wp[1]){
		case 0x000079676F6C6F6E:return 1;
		default:return 0;
		}
	case 0x6568706F7A6E6562:
		switch(wp[1]){
		case 0x0000656E697A616E:return 1;
		default:return 0;
		}
	case 0x6568707265707968:
		switch(wp[1]){
		case 0x0000616E656D6F6E:return 1;
		default:return 0;
		}
	case 0x6568707361726170:
		switch(wp[1]){
		case 0x00006C6164696F6E:return 1;
		default:return 0;
		}
	case 0x65687073696D6568:
		switch(wp[1]){
		case 0x00006C6164696F72:return 1;
		default:return 0;
		}
	case 0x65687073696D6573:
		switch(wp[1]){
		case 0x00006C6164696F72:return 1;
		default:return 0;
		}
	case 0x6568707369736162:
		switch(wp[1]){
		case 0x00006C6164696F6E:return 1;
		default:return 0;
		}
	case 0x656870736F6D7461:
		switch(wp[1]){
		case 0x00007373656C6572:return 1;
		case 0x000079676F6C6F72:return 1;
		default:return 0;
		}
	case 0x6568707374736F70:
		switch(wp[1]){
		case 0x00006C6164696F6E:return 1;
		default:return 0;
		}
	case 0x65687079786F7A61:
		switch(wp[1]){
		case 0x0000656C6F74656E:return 1;
		default:return 0;
		}
	case 0x6568726F7263696D:
		switch(wp[1]){
		case 0x0000726574656D6F:return 1;
		default:return 0;
		}
	case 0x6568737265646E75:
		switch(wp[1]){
		case 0x0000676E69687461:return 1;
		case 0x0000797266666972:return 1;
		default:return 0;
		}
	case 0x656874616D6F6962:
		switch(wp[1]){
		case 0x000073636974616D:return 1;
		default:return 0;
		}
	case 0x656874616E616564:
		switch(wp[1]){
		case 0x0000657A6974616D:return 1;
		default:return 0;
		}
	case 0x65687461706D7973:
		switch(wp[1]){
		case 0x00006D7369636974:return 1;
		case 0x0000797469636974:return 1;
		default:return 0;
		}
	case 0x6568746968706D61:
		switch(wp[1]){
		case 0x0000646572657461:return 1;
		default:return 0;
		}
	case 0x6568746E616E7973:
		switch(wp[1]){
		case 0x000079676F6C6F72:return 1;
		default:return 0;
		}
	case 0x6568746F69646172:
		switch(wp[1]){
		case 0x0000747369706172:return 1;
		default:return 0;
		}
	case 0x6568746F6D656863:
		switch(wp[1]){
		case 0x0000747369706172:return 1;
		default:return 0;
		}
	case 0x6568746F7274656D:
		switch(wp[1]){
		case 0x0000747369706172:return 1;
		default:return 0;
		}
	case 0x6568746F7275656E:
		switch(wp[1]){
		case 0x0000747369706172:return 1;
		default:return 0;
		}
	case 0x6568746F746F6870:
		switch(wp[1]){
		case 0x0000747369706172:return 1;
		default:return 0;
		}
	case 0x6568746F74736968:
		switch(wp[1]){
		case 0x0000747369706172:return 1;
		default:return 0;
		}
	case 0x6568776F6C6C6566:
		switch(wp[1]){
		case 0x0000706968737269:return 1;
		default:return 0;
		}
	case 0x656877726568746F:
		switch(wp[1]){
		case 0x00007373656E6572:return 1;
		default:return 0;
		}
	case 0x6568777972657665:
		switch(wp[1]){
		case 0x00007373656E6572:return 1;
		default:return 0;
		}
	case 0x6569636966667573:
		switch(wp[1]){
		case 0x00007373656E746E:return 1;
		default:return 0;
		}
	case 0x65696369666F7270:
		switch(wp[1]){
		case 0x00007373656E746E:return 1;
		default:return 0;
		}
	case 0x65696373696D6573:
		switch(wp[1]){
		case 0x000063696669746E:return 1;
		default:return 0;
		}
	case 0x6569637369746E61:
		switch(wp[1]){
		case 0x000063696669746E:return 1;
		default:return 0;
		}
	case 0x656964656D657270:
		switch(wp[1]){
		case 0x00006D73696C6176:return 1;
		default:return 0;
		}
	case 0x656964656D6F656E:
		switch(wp[1]){
		case 0x00006D73696C6176:return 1;
		default:return 0;
		}
	case 0x6569676E616C6574:
		switch(wp[1]){
		case 0x0000616973617463:return 1;
		case 0x0000636974617463:return 1;
		case 0x0000736973617463:return 1;
		default:return 0;
		}
	case 0x65696863616E6F6E:
		switch(wp[1]){
		case 0x0000746E656D6576:return 1;
		default:return 0;
		}
	case 0x656968636173696D:
		switch(wp[1]){
		case 0x0000746E656D6576:return 1;
		default:return 0;
		}
	case 0x656968636E6F7262:
		switch(wp[1]){
		case 0x0000636974617463:return 1;
		case 0x0000736973617463:return 1;
		default:return 0;
		}
	case 0x65696C6562736964:
		switch(wp[1]){
		case 0x0000796C676E6976:return 1;
		default:return 0;
		}
	case 0x65696C656273696D:
		switch(wp[1]){
		case 0x0000796C676E6976:return 1;
		default:return 0;
		}
	case 0x65696E65766E6F63:
		switch(wp[1]){
		case 0x00007373656E746E:return 1;
		default:return 0;
		}
	case 0x6569706F696C6966:
		switch(wp[1]){
		case 0x0000636974736974:return 1;
		default:return 0;
		}
	case 0x6569727068637261:
		switch(wp[1]){
		case 0x0000646F6F687473:return 1;
		case 0x0000706968737473:return 1;
		default:return 0;
		}
	case 0x6569727465726E75:
		switch(wp[1]){
		case 0x0000796C676E6976:return 1;
		default:return 0;
		}
	case 0x656A6E6F636E6F6E:
		switch(wp[1]){
		case 0x00006C6172757463:return 1;
		default:return 0;
		}
	case 0x656B63696C666E75:
		switch(wp[1]){
		case 0x0000796C676E6972:return 1;
		default:return 0;
		}
	case 0x656B63696E726570:
		switch(wp[1]){
		case 0x00007373656E6974:return 1;
		default:return 0;
		}
	case 0x656B6E61746E6163:
		switch(wp[1]){
		case 0x0000796C73756F72:return 1;
		default:return 0;
		}
	case 0x656C616964627573:
		switch(wp[1]){
		case 0x0000796C6C617463:return 1;
		default:return 0;
		}
	case 0x656C6169646E6F6E:
		switch(wp[1]){
		case 0x00006C6163697463:return 1;
		default:return 0;
		}
	case 0x656C626269726373:
		switch(wp[1]){
		case 0x000061696E616D6F:return 1;
		default:return 0;
		}
	case 0x656C626F7263696D:
		switch(wp[1]){
		case 0x0000616972616870:return 1;
		default:return 0;
		}
	case 0x656C626F72677968:
		switch(wp[1]){
		case 0x0000636972616870:return 1;
		default:return 0;
		}
	case 0x656C627968636170:
		switch(wp[1]){
		case 0x00006E6F72616870:return 1;
		default:return 0;
		}
	case 0x656C637265646E75:
		switch(wp[1]){
		case 0x0000706968736B72:return 1;
		default:return 0;
		}
	case 0x656C63736F726361:
		switch(wp[1]){
		case 0x0000736973616972:return 1;
		default:return 0;
		}
	case 0x656C646C65696873:
		switch(wp[1]){
		case 0x00007373656E7373:return 1;
		default:return 0;
		}
	case 0x656C646E65697266:
		switch(wp[1]){
		case 0x00007373656E7373:return 1;
		default:return 0;
		}
	case 0x656C646E756F7267:
		switch(wp[1]){
		case 0x00007373656E7373:return 1;
		default:return 0;
		}
	case 0x656C647261676572:
		switch(wp[1]){
		case 0x00007373656E7373:return 1;
		default:return 0;
		}
	case 0x656C6563696F6863:
		switch(wp[1]){
		case 0x00007373656E7373:return 1;
		default:return 0;
		}
	case 0x656C65676E616863:
		switch(wp[1]){
		case 0x00007373656E7373:return 1;
		default:return 0;
		}
	case 0x656C6568746E6170:
		switch(wp[1]){
		case 0x00006D736974616D:return 1;
		default:return 0;
		}
	case 0x656C656F7263696D:
		switch(wp[1]){
		case 0x000065646F727463:return 1;
		default:return 0;
		}
	case 0x656C657265707573:
		switch(wp[1]){
		case 0x00006E6F69746176:return 1;
		default:return 0;
		}
	case 0x656C657265746E69:
		switch(wp[1]){
		case 0x000065646F727463:return 1;
		default:return 0;
		}
	case 0x656C657361657267:
		switch(wp[1]){
		case 0x00007373656E7373:return 1;
		default:return 0;
		}
	case 0x656C65736F6E7562:
		switch(wp[1]){
		case 0x0000746E6F646F6E:return 1;
		default:return 0;
		}
	case 0x656C65746F6E6F6D:
		switch(wp[1]){
		case 0x000063696E6F6870:return 1;
		default:return 0;
		}
	case 0x656C65746F707974:
		switch(wp[1]){
		case 0x0000796870617267:return 1;
		default:return 0;
		}
	case 0x656C657574726976:
		switch(wp[1]){
		case 0x00007373656E7373:return 1;
		default:return 0;
		}
	case 0x656C657665656C73:
		switch(wp[1]){
		case 0x00007373656E7373:return 1;
		default:return 0;
		}
	case 0x656C657669746F6D:
		switch(wp[1]){
		case 0x00007373656E7373:return 1;
		default:return 0;
		}
	case 0x656C686365657073:
		switch(wp[1]){
		case 0x00007373656E7373:return 1;
		default:return 0;
		}
	case 0x656C68636E657571:
		switch(wp[1]){
		case 0x00007373656E7373:return 1;
		default:return 0;
		}
	case 0x656C686374657277:
		switch(wp[1]){
		case 0x00007373656E7373:return 1;
		default:return 0;
		}
	case 0x656C687065646E75:
		switch(wp[1]){
		case 0x0000646574616D67:return 1;
		default:return 0;
		}
	case 0x656C687461657262:
		switch(wp[1]){
		case 0x00007373656E7373:return 1;
		default:return 0;
		}
	case 0x656C68746C616568:
		switch(wp[1]){
		case 0x00007373656E7373:return 1;
		default:return 0;
		}
	case 0x656C6964656D6572:
		switch(wp[1]){
		case 0x00007373656E7373:return 1;
		default:return 0;
		}
	case 0x656C6C61696D6573:
		switch(wp[1]){
		case 0x000065636E616967:return 1;
		default:return 0;
		}
	case 0x656C6C65706F7369:
		switch(wp[1]){
		case 0x00006E6972656974:return 1;
		default:return 0;
		}
	case 0x656C6C696D657270:
		switch(wp[1]){
		case 0x00006E616972616E:return 1;
		default:return 0;
		}
	case 0x656C6C69736E6F74:
		switch(wp[1]){
		case 0x000063696D6F7463:return 1;
		default:return 0;
		}
	case 0x656C6C6F63657270:
		switch(wp[1]){
		case 0x0000656C62617463:return 1;
		default:return 0;
		}
	case 0x656C6C6F636E6F6E:
		switch(wp[1]){
		case 0x0000656C62617463:return 1;
		default:return 0;
		}
	case 0x656C6C6F646E6163:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x656C6D6F68746166:
		switch(wp[1]){
		case 0x00007373656E7373:return 1;
		default:return 0;
		}
	case 0x656C6D6F74746F62:
		switch(wp[1]){
		case 0x00007373656E7373:return 1;
		default:return 0;
		}
	case 0x656C6E6769736564:
		switch(wp[1]){
		case 0x00007373656E7373:return 1;
		default:return 0;
		}
	case 0x656C6E6F69746F6D:
		switch(wp[1]){
		case 0x00007373656E7373:return 1;
		default:return 0;
		}
	case 0x656C6E6F73616572:
		switch(wp[1]){
		case 0x00007373656E7373:return 1;
		default:return 0;
		}
	case 0x656C6E6F73696F70:
		switch(wp[1]){
		case 0x00007373656E7373:return 1;
		default:return 0;
		}
	case 0x656C6F6475657370:
		switch(wp[1]){
		case 0x000061696D656B75:return 1;
		case 0x000063696D656B75:return 1;
		default:return 0;
		}
	case 0x656C6F68636F7369:
		switch(wp[1]){
		case 0x00006C6F72657473:return 1;
		case 0x00006E6972657473:return 1;
		default:return 0;
		}
	case 0x656C6F686379786F:
		switch(wp[1]){
		case 0x00006C6F72657473:return 1;
		default:return 0;
		}
	case 0x656C6F7265746568:
		switch(wp[1]){
		case 0x00006C6168746963:return 1;
		default:return 0;
		}
	case 0x656C6F72706E6F6E:
		switch(wp[1]){
		case 0x00006E6169726174:return 1;
		default:return 0;
		}
	case 0x656C6F72746E6563:
		switch(wp[1]){
		case 0x00006C6168746963:return 1;
		default:return 0;
		}
	case 0x656C6F76656E6562:
		switch(wp[1]){
		case 0x00007373656E746E:return 1;
		default:return 0;
		}
	case 0x656C706D6F636E69:
		switch(wp[1]){
		case 0x00007373656E6574:return 1;
		default:return 0;
		}
	case 0x656C706D6F636E75:
		switch(wp[1]){
		case 0x00006C61746E656D:return 1;
		case 0x00007373656E6574:return 1;
		default:return 0;
		}
	case 0x656C707075736E75:
		switch(wp[1]){
		case 0x00006465746E656D:return 1;
		default:return 0;
		}
	case 0x656C70736E617274:
		switch(wp[1]){
		case 0x000079636E65646E:return 1;
		case 0x0000796C6C617275:return 1;
		default:return 0;
		}
	case 0x656C707968636170:
		switch(wp[1]){
		case 0x0000636974697275:return 1;
		default:return 0;
		}
	case 0x656C726568746166:
		switch(wp[1]){
		case 0x00007373656E7373:return 1;
		default:return 0;
		}
	case 0x656C726568746F6D:
		switch(wp[1]){
		case 0x00007373656E7373:return 1;
		default:return 0;
		}
	case 0x656C72656E6E616D:
		switch(wp[1]){
		case 0x00007373656E7373:return 1;
		default:return 0;
		}
	case 0x656C72657473616D:
		switch(wp[1]){
		case 0x00007373656E7373:return 1;
		default:return 0;
		}
	case 0x656C7265776F6C66:
		switch(wp[1]){
		case 0x00007373656E7373:return 1;
		default:return 0;
		}
	case 0x656C726579617270:
		switch(wp[1]){
		case 0x00007373656E7373:return 1;
		default:return 0;
		}
	case 0x656C736569657266:
		switch(wp[1]){
		case 0x00006574696E6562:return 1;
		default:return 0;
		}
	case 0x656C737365727473:
		switch(wp[1]){
		case 0x00007373656E7373:return 1;
		default:return 0;
		}
	case 0x656C7463656A626F:
		switch(wp[1]){
		case 0x00007373656E7373:return 1;
		default:return 0;
		}
	case 0x656C746669726874:
		switch(wp[1]){
		case 0x00007373656E7373:return 1;
		default:return 0;
		}
	case 0x656C746867696577:
		switch(wp[1]){
		case 0x00007373656E7373:return 1;
		default:return 0;
		}
	case 0x656C7469666F7270:
		switch(wp[1]){
		case 0x00007373656E7373:return 1;
		default:return 0;
		}
	case 0x656C746972697073:
		switch(wp[1]){
		case 0x00007373656E7373:return 1;
		default:return 0;
		}
	case 0x656C746C75736572:
		switch(wp[1]){
		case 0x00007373656E7373:return 1;
		default:return 0;
		}
	case 0x656C746E65676E75:
		switch(wp[1]){
		case 0x0000657A696E616D:return 1;
		default:return 0;
		}
	case 0x656C746E656C6572:
		switch(wp[1]){
		case 0x00007373656E7373:return 1;
		default:return 0;
		}
	case 0x656C747369736572:
		switch(wp[1]){
		case 0x00007373656E7373:return 1;
		default:return 0;
		}
	case 0x656C747372696874:
		switch(wp[1]){
		case 0x00007373656E7373:return 1;
		default:return 0;
		}
	case 0x656C74756F766564:
		switch(wp[1]){
		case 0x00007373656E7373:return 1;
		default:return 0;
		}
	case 0x656C756475617266:
		switch(wp[1]){
		case 0x00007373656E746E:return 1;
		default:return 0;
		}
	case 0x656C776F64616873:
		switch(wp[1]){
		case 0x00007373656E7373:return 1;
		default:return 0;
		}
	case 0x656C776F646E6977:
		switch(wp[1]){
		case 0x00007373656E7373:return 1;
		default:return 0;
		}
	case 0x656C776F6E6B6361:
		switch(wp[1]){
		case 0x0000796C64656764:return 1;
		default:return 0;
		}
	case 0x656C796870617473:
		switch(wp[1]){
		case 0x0000616D6F74616D:return 1;
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x656C79746F636964:
		switch(wp[1]){
		case 0x000073756F6E6F64:return 1;
		case 0x00007972616E6F64:return 1;
		default:return 0;
		}
	case 0x656D61636964656D:
		switch(wp[1]){
		case 0x0000796C6C61746E:return 1;
		default:return 0;
		}
	case 0x656D616461727473:
		switch(wp[1]){
		case 0x00006C6163697274:return 1;
		default:return 0;
		}
	case 0x656D6164726F6863:
		switch(wp[1]){
		case 0x00006D7265646F73:return 1;
		default:return 0;
		}
	case 0x656D6169646F7369:
		switch(wp[1]){
		case 0x00006C6163697274:return 1;
		default:return 0;
		}
	case 0x656D616E726F6E75:
		switch(wp[1]){
		case 0x0000796C6C61746E:return 1;
		default:return 0;
		}
	case 0x656D617274736163:
		switch(wp[1]){
		case 0x00006E6F69746174:return 1;
		default:return 0;
		}
	case 0x656D656369726570:
		switch(wp[1]){
		case 0x000073697469746E:return 1;
		default:return 0;
		}
	case 0x656D656C706D6F63:
		switch(wp[1]){
		case 0x0000796C6C61746E:return 1;
		default:return 0;
		}
	case 0x656D656C70707573:
		switch(wp[1]){
		case 0x0000796C6C61746E:return 1;
		default:return 0;
		}
	case 0x656D657265726F66:
		switch(wp[1]){
		case 0x000064657265626D:return 1;
		default:return 0;
		}
	case 0x656D696372657571:
		switch(wp[1]){
		case 0x00006E6972746972:return 1;
		default:return 0;
		}
	case 0x656D696C616B6C61:
		switch(wp[1]){
		case 0x00006C6163697274:return 1;
		default:return 0;
		}
	case 0x656D696C706D6F63:
		switch(wp[1]){
		case 0x0000656C6261746E:return 1;
		case 0x0000796C6C61746E:return 1;
		default:return 0;
		}
	case 0x656D697264617571:
		switch(wp[1]){
		case 0x000063696C6C6174:return 1;
		default:return 0;
		}
	case 0x656D697265707865:
		switch(wp[1]){
		case 0x0000726F7461746E:return 1;
		case 0x0000796C6C61746E:return 1;
		default:return 0;
		}
	case 0x656D69726F6C6163:
		switch(wp[1]){
		case 0x00006C6163697274:return 1;
		default:return 0;
		}
	case 0x656D69726F6C6F63:
		switch(wp[1]){
		case 0x00006C6163697274:return 1;
		default:return 0;
		}
	case 0x656D6D6F636E6F6E:
		switch(wp[1]){
		case 0x0000656C6261646E:return 1;
		default:return 0;
		}
	case 0x656D6D6F63736964:
		switch(wp[1]){
		case 0x0000656C6261646E:return 1;
		case 0x0000796C6261646E:return 1;
		default:return 0;
		}
	case 0x656D6D7563726963:
		switch(wp[1]){
		case 0x00006E6169646972:return 1;
		default:return 0;
		}
	case 0x656D6D7973697861:
		switch(wp[1]){
		case 0x00006C6163697274:return 1;
		default:return 0;
		}
	case 0x656D6D79736E6F6E:
		switch(wp[1]){
		case 0x00006C6163697274:return 1;
		default:return 0;
		}
	case 0x656D6D7973726570:
		switch(wp[1]){
		case 0x00006C6163697274:return 1;
		default:return 0;
		}
	case 0x656D6D7973736964:
		switch(wp[1]){
		case 0x00006C6163697274:return 1;
		default:return 0;
		}
	case 0x656D6E7265766F67:
		switch(wp[1]){
		case 0x0000796C6C61746E:return 1;
		default:return 0;
		}
	case 0x656D6F62656C6870:
		switch(wp[1]){
		case 0x0000736974697274:return 1;
		default:return 0;
		}
	case 0x656D6F636964656D:
		switch(wp[1]){
		case 0x000063696E616863:return 1;
		default:return 0;
		}
	case 0x656D6F64726F6863:
		switch(wp[1]){
		case 0x00006D7265646F73:return 1;
		default:return 0;
		}
	case 0x656D6F6475657370:
		switch(wp[1]){
		case 0x000063696C6C6174:return 1;
		case 0x0000656E6172626D:return 1;
		case 0x00006C6176656964:return 1;
		default:return 0;
		}
	case 0x656D6F65616C6170:
		switch(wp[1]){
		case 0x000063696C6C6174:return 1;
		default:return 0;
		}
	case 0x656D6F65676E6F6E:
		switch(wp[1]){
		case 0x00006C6163697274:return 1;
		default:return 0;
		}
	case 0x656D6F6572657473:
		switch(wp[1]){
		case 0x00006C6163697274:return 1;
		default:return 0;
		}
	case 0x656D6F6863697473:
		switch(wp[1]){
		case 0x00006C6163697274:return 1;
		default:return 0;
		}
	case 0x656D6F6863797370:
		switch(wp[1]){
		case 0x00006C6163697274:return 1;
		default:return 0;
		}
	case 0x656D6F6870617267:
		switch(wp[1]){
		case 0x00006C6163697274:return 1;
		default:return 0;
		}
	case 0x656D6F6870726F6D:
		switch(wp[1]){
		case 0x00006C6163697274:return 1;
		default:return 0;
		}
	case 0x656D6F6870796373:
		switch(wp[1]){
		case 0x000064696F737564:return 1;
		default:return 0;
		}
	case 0x656D6F687265766F:
		switch(wp[1]){
		case 0x00007373656E696C:return 1;
		default:return 0;
		}
	case 0x656D6F68746E6178:
		switch(wp[1]){
		case 0x000073756F6E616C:return 1;
		default:return 0;
		}
	case 0x656D6F6968636F6C:
		switch(wp[1]){
		case 0x0000736974697274:return 1;
		default:return 0;
		}
	case 0x656D6F696E617263:
		switch(wp[1]){
		case 0x00006C6163697274:return 1;
		default:return 0;
		}
	case 0x656D6F6976756C70:
		switch(wp[1]){
		case 0x00006C6163697274:return 1;
		default:return 0;
		}
	case 0x656D6F6C676E6F63:
		switch(wp[1]){
		case 0x00006E6F69746172:return 1;
		default:return 0;
		}
	case 0x656D6F6D616E7964:
		switch(wp[1]){
		case 0x00006C6163697274:return 1;
		default:return 0;
		}
	case 0x656D6F6D72656874:
		switch(wp[1]){
		case 0x0000657A69726574:return 1;
		case 0x00006C6163697274:return 1;
		default:return 0;
		}
	case 0x656D6F6D73696573:
		switch(wp[1]){
		case 0x00006C6163697274:return 1;
		default:return 0;
		}
	case 0x656D6F6D756C6F76:
		switch(wp[1]){
		case 0x00006C6163697274:return 1;
		default:return 0;
		}
	case 0x656D6F6E6167726F:
		switch(wp[1]){
		case 0x000063696C6C6174:return 1;
		default:return 0;
		}
	case 0x656D6F6E69746361:
		switch(wp[1]){
		case 0x00006C6163697274:return 1;
		default:return 0;
		}
	case 0x656D6F6E6E656C62:
		switch(wp[1]){
		case 0x0000736974697274:return 1;
		default:return 0;
		}
	case 0x656D6F6E6F726863:
		switch(wp[1]){
		case 0x00006C6163697274:return 1;
		default:return 0;
		}
	case 0x656D6F7265746568:
		switch(wp[1]){
		case 0x0000656C6F626174:return 1;
		case 0x0000796C6F626174:return 1;
		default:return 0;
		}
	case 0x656D6F726F6C6863:
		switch(wp[1]){
		case 0x00006574696E616C:return 1;
		default:return 0;
		}
	case 0x656D7265666E6F6E:
		switch(wp[1]){
		case 0x0000656C6261746E:return 1;
		default:return 0;
		}
	case 0x656D7365646E7973:
		switch(wp[1]){
		case 0x00006169706F7463:return 1;
		default:return 0;
		}
	case 0x656D747261706564:
		switch(wp[1]){
		case 0x0000796C6C61746E:return 1;
		default:return 0;
		}
	case 0x656D757274736E69:
		switch(wp[1]){
		case 0x0000796C6C61746E:return 1;
		default:return 0;
		}
	case 0x656D796863617262:
		switch(wp[1]){
		case 0x00006169706F7274:return 1;
		case 0x00006369706F7274:return 1;
		default:return 0;
		}
	case 0x656E656172746C75:
		switch(wp[1]){
		case 0x0000636974656772:return 1;
		default:return 0;
		}
	case 0x656E6562696E6D6F:
		switch(wp[1]){
		case 0x0000746E656C6F76:return 1;
		default:return 0;
		}
	case 0x656E656765646E75:
		switch(wp[1]){
		case 0x0000676E69746172:return 1;
		default:return 0;
		}
	case 0x656E656765726E75:
		switch(wp[1]){
		case 0x0000676E69746172:return 1;
		case 0x00006E6F69746172:return 1;
		case 0x0000796C65746172:return 1;
		default:return 0;
		}
	case 0x656E656765727269:
		switch(wp[1]){
		case 0x00006E6F69746172:return 1;
		default:return 0;
		}
	case 0x656E656768637261:
		switch(wp[1]){
		case 0x00006361696C6874:return 1;
		default:return 0;
		}
	case 0x656E65676F6D6F68:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x656E65676F747963:
		switch(wp[1]){
		case 0x0000747369636974:return 1;
		default:return 0;
		}
	case 0x656E65677265766F:
		switch(wp[1]){
		case 0x0000657A696C6172:return 1;
		case 0x0000796C73756F72:return 1;
		case 0x0000797469736F72:return 1;
		default:return 0;
		}
	case 0x656E65706D696E75:
		switch(wp[1]){
		case 0x0000656C62617274:return 1;
		default:return 0;
		}
	case 0x656E657265707573:
		switch(wp[1]){
		case 0x0000636974656772:return 1;
		default:return 0;
		}
	case 0x656E6576756A6572:
		switch(wp[1]){
		case 0x000065636E656373:return 1;
		default:return 0;
		}
	case 0x656E67616D6F6567:
		switch(wp[1]){
		case 0x00006E6169636974:return 1;
		default:return 0;
		}
	case 0x656E69636964656D:
		switch(wp[1]){
		case 0x00007265676E6F6D:return 1;
		default:return 0;
		}
	case 0x656E697375626E75:
		switch(wp[1]){
		case 0x0000656B696C7373:return 1;
		default:return 0;
		}
	case 0x656E6E6169746E61:
		switch(wp[1]){
		case 0x00006E6F69746178:return 1;
		default:return 0;
		}
	case 0x656E6E6F63736964:
		switch(wp[1]){
		case 0x0000796C64657463:return 1;
		default:return 0;
		}
	case 0x656E6F6863797370:
		switch(wp[1]){
		case 0x00006369746F7275:return 1;
		case 0x00007369736F7275:return 1;
		default:return 0;
		}
	case 0x656E6F68706F7274:
		switch(wp[1]){
		case 0x00006369746F7275:return 1;
		case 0x00007369736F7275:return 1;
		default:return 0;
		}
	case 0x656E6F6964726163:
		switch(wp[1]){
		case 0x00007369736F7263:return 1;
		case 0x00007369736F7275:return 1;
		default:return 0;
		}
	case 0x656E6F6D67696874:
		switch(wp[1]){
		case 0x0000657669746167:return 1;
		default:return 0;
		}
	case 0x656E6F6D72656874:
		switch(wp[1]){
		case 0x00007369736F7275:return 1;
		default:return 0;
		}
	case 0x656E6F6D75656E70:
		switch(wp[1]){
		case 0x0000616973617463:return 1;
		default:return 0;
		}
	case 0x656E6F6E69746361:
		switch(wp[1]){
		case 0x0000736974697275:return 1;
		default:return 0;
		}
	case 0x656E6F7061627573:
		switch(wp[1]){
		case 0x00006369746F7275:return 1;
		default:return 0;
		}
	case 0x656E6F7265746E65:
		switch(wp[1]){
		case 0x0000736974697275:return 1;
		default:return 0;
		}
	case 0x656E6F7469726570:
		switch(wp[1]){
		case 0x000065706F63736F:return 1;
		case 0x000079687461706F:return 1;
		case 0x000079706F63736F:return 1;
		default:return 0;
		}
	case 0x656E6F746E6F646F:
		switch(wp[1]){
		case 0x00007369736F7263:return 1;
		default:return 0;
		}
	case 0x656E6F78656E6F6E:
		switch(wp[1]){
		case 0x00006E6F69746172:return 1;
		default:return 0;
		}
	case 0x656E706F68707974:
		switch(wp[1]){
		case 0x000061696E6F6D75:return 1;
		default:return 0;
		}
	case 0x656E706F72647968:
		switch(wp[1]){
		case 0x0000636974616D75:return 1;
		default:return 0;
		}
	case 0x656E756D65726E75:
		switch(wp[1]){
		case 0x0000657669746172:return 1;
		case 0x0000676E69746172:return 1;
		default:return 0;
		}
	case 0x656F6C756373756D:
		switch(wp[1]){
		case 0x000063697473616C:return 1;
		default:return 0;
		}
	case 0x656F726574657275:
		switch(wp[1]){
		case 0x000063697265746E:return 1;
		default:return 0;
		}
	case 0x656F727463656C65:
		switch(wp[1]){
		case 0x000065766172676E:return 1;
		case 0x0000676E69686374:return 1;
		default:return 0;
		}
	case 0x6570616365646F64:
		switch(wp[1]){
		case 0x000073756F6C6174:return 1;
		default:return 0;
		}
	case 0x657061707377656E:
		switch(wp[1]){
		case 0x00006E616D6F7772:return 1;
		default:return 0;
		}
	case 0x6570617274627573:
		switch(wp[1]){
		case 0x00006C6164696F7A:return 1;
		default:return 0;
		}
	case 0x65706564696D6573:
		switch(wp[1]){
		case 0x000065636E65646E:return 1;
		default:return 0;
		}
	case 0x657065646E696572:
		switch(wp[1]){
		case 0x000065636E65646E:return 1;
		default:return 0;
		}
	case 0x657065727473626F:
		switch(wp[1]){
		case 0x0000796C73756F72:return 1;
		case 0x0000797469736F72:return 1;
		default:return 0;
		}
	case 0x65706972746E6563:
		switch(wp[1]){
		case 0x00006D73696C6174:return 1;
		default:return 0;
		}
	case 0x6570697571736573:
		switch(wp[1]){
		case 0x00006E61696C6164:return 1;
		case 0x00007974696C6164:return 1;
		default:return 0;
		}
	case 0x65706C796874656D:
		switch(wp[1]){
		case 0x00007365736F746E:return 1;
		default:return 0;
		}
	case 0x65706C7974656361:
		switch(wp[1]){
		case 0x0000656469786F72:return 1;
		default:return 0;
		}
	case 0x65706D6574657270:
		switch(wp[1]){
		case 0x0000796C65746172:return 1;
		default:return 0;
		}
	case 0x65706D65746E6F63:
		switch(wp[1]){
		case 0x0000657275746172:return 1;
		default:return 0;
		}
	case 0x65706D6574736964:
		switch(wp[1]){
		case 0x0000657275746172:return 1;
		default:return 0;
		}
	case 0x65706D6F636E6F6E:
		switch(wp[1]){
		case 0x000065636E617261:return 1;
		case 0x0000657669746974:return 1;
		default:return 0;
		}
	case 0x65706D6F636F7270:
		switch(wp[1]){
		case 0x00006E6F69746974:return 1;
		default:return 0;
		}
	case 0x65706D7563726963:
		switch(wp[1]){
		case 0x00006E6F6761746E:return 1;
		default:return 0;
		}
	case 0x65706F6361726F63:
		switch(wp[1]){
		case 0x00006C61726F7463:return 1;
		default:return 0;
		}
	case 0x65706F6475657370:
		switch(wp[1]){
		case 0x00006369646F6972:return 1;
		case 0x0000656469786F72:return 1;
		case 0x000068746E616972:return 1;
		case 0x00006D726F666964:return 1;
		case 0x00006D7569646972:return 1;
		case 0x00006D756C756372:return 1;
		case 0x000072616C756372:return 1;
		default:return 0;
		}
	case 0x65706F65616C6170:
		switch(wp[1]){
		case 0x000079676F6C6F64:return 1;
		default:return 0;
		}
	case 0x65706F6574756C67:
		switch(wp[1]){
		case 0x00006C61656E6972:return 1;
		default:return 0;
		}
	case 0x65706F6968637369:
		switch(wp[1]){
		case 0x00006C61656E6972:return 1;
		default:return 0;
		}
	case 0x65706F696C626962:
		switch(wp[1]){
		case 0x0000636974736967:return 1;
		default:return 0;
		}
	case 0x65706F6D61757173:
		switch(wp[1]){
		case 0x00006C61736F7274:return 1;
		default:return 0;
		}
	case 0x65706F6D72656874:
		switch(wp[1]){
		case 0x00006369646F6972:return 1;
		default:return 0;
		}
	case 0x65706F6E65687073:
		switch(wp[1]){
		case 0x00006C61736F7274:return 1;
		default:return 0;
		}
	case 0x65706F6E69676176:
		switch(wp[1]){
		case 0x00006C61656E6972:return 1;
		default:return 0;
		}
	case 0x65706F7265746568:
		switch(wp[1]){
		case 0x000073756F6C6174:return 1;
		default:return 0;
		}
	case 0x65706F7265746E69:
		switch(wp[1]){
		case 0x00006D756C756372:return 1;
		case 0x000072616C756372:return 1;
		default:return 0;
		}
	case 0x65706F7470797263:
		switch(wp[1]){
		case 0x0000657469687472:return 1;
		default:return 0;
		}
	case 0x6570736178656E75:
		switch(wp[1]){
		case 0x0000676E69746172:return 1;
		default:return 0;
		}
	case 0x6570736572657270:
		switch(wp[1]){
		case 0x0000656C62617463:return 1;
		default:return 0;
		}
	case 0x65707365726E6F6E:
		switch(wp[1]){
		case 0x0000656C62617463:return 1;
		default:return 0;
		}
	case 0x6570736F726F7370:
		switch(wp[1]){
		case 0x00007369736F6D72:return 1;
		default:return 0;
		}
	case 0x6570736F72706E75:
		switch(wp[1]){
		case 0x0000796C73756F72:return 1;
		default:return 0;
		}
	case 0x6570736F72746E69:
		switch(wp[1]){
		case 0x0000656C62617463:return 1;
		default:return 0;
		}
	case 0x6570737265646E75:
		switch(wp[1]){
		case 0x0000646569666963:return 1;
		default:return 0;
		}
	case 0x6570737265746E69:
		switch(wp[1]){
		case 0x0000796C64657372:return 1;
		default:return 0;
		}
	case 0x65707374756F6E75:
		switch(wp[1]){
		case 0x0000656C62616B61:return 1;
		default:return 0;
		}
	case 0x6570757264617571:
		switch(wp[1]){
		case 0x00006369746E6164:return 1;
		case 0x00006E6F69746164:return 1;
		default:return 0;
		}
	case 0x65707968696D6568:
		switch(wp[1]){
		case 0x000061696E6F7472:return 1;
		default:return 0;
		}
	case 0x65707968696D6573:
		switch(wp[1]){
		case 0x000063696C6F6272:return 1;
		default:return 0;
		}
	case 0x657079686F736176:
		switch(wp[1]){
		case 0x000063696E6F7472:return 1;
		default:return 0;
		}
	case 0x65707974656C6574:
		switch(wp[1]){
		case 0x0000726574697277:return 1;
		case 0x0000726574746573:return 1;
		default:return 0;
		}
	case 0x657261637265766F:
		switch(wp[1]){
		case 0x0000796C7373656C:return 1;
		default:return 0;
		}
	case 0x6572616870656C62:
		switch(wp[1]){
		case 0x00007369736F636C:return 1;
		default:return 0;
		}
	case 0x657261706F726F63:
		switch(wp[1]){
		case 0x000073697379636C:return 1;
		default:return 0;
		}
	case 0x6572617070616E75:
		switch(wp[1]){
		case 0x00007373656E746E:return 1;
		default:return 0;
		}
	case 0x6572626F6973616E:
		switch(wp[1]){
		case 0x0000636974616D67:return 1;
		default:return 0;
		}
	case 0x6572626F746E656D:
		switch(wp[1]){
		case 0x0000636974616D67:return 1;
		default:return 0;
		}
	case 0x6572627265646E75:
		switch(wp[1]){
		case 0x0000676E69687461:return 1;
		default:return 0;
		}
	case 0x6572627974616C70:
		switch(wp[1]){
		case 0x0000636974616D67:return 1;
		default:return 0;
		}
	case 0x6572636172746C75:
		switch(wp[1]){
		case 0x0000657461646970:return 1;
		case 0x000073756F6C7564:return 1;
		default:return 0;
		}
	case 0x6572636573627573:
		switch(wp[1]){
		case 0x00006C6169726174:return 1;
		default:return 0;
		}
	case 0x65726365736E6F6E:
		switch(wp[1]){
		case 0x00006C6169726174:return 1;
		default:return 0;
		}
	case 0x6572636F70706968:
		switch(wp[1]){
		case 0x00006D726F666970:return 1;
		default:return 0;
		}
	case 0x6572637265707573:
		switch(wp[1]){
		case 0x000065636E656373:return 1;
		default:return 0;
		}
	case 0x6572637265746E69:
		switch(wp[1]){
		case 0x000065636E656373:return 1;
		default:return 0;
		}
	case 0x6572637369646E69:
		switch(wp[1]){
		case 0x00007373656E7465:return 1;
		default:return 0;
		}
	case 0x6572637369646E75:
		switch(wp[1]){
		case 0x00007373656E7465:return 1;
		default:return 0;
		}
	case 0x6572646E696C7963:
		switch(wp[1]){
		case 0x0000616D7968636E:return 1;
		default:return 0;
		}
	case 0x6572656361726170:
		switch(wp[1]){
		case 0x000072616C6C6562:return 1;
		default:return 0;
		}
	case 0x6572656369746E61:
		switch(wp[1]){
		case 0x00006C61696E6F6D:return 1;
		default:return 0;
		}
	case 0x6572656374736F70:
		switch(wp[1]){
		case 0x000072616C6C6562:return 1;
		default:return 0;
		}
	case 0x6572656765636976:
		switch(wp[1]){
		case 0x000070696873746E:return 1;
		default:return 0;
		}
	case 0x657265686F636E69:
		switch(wp[1]){
		case 0x000063696669746E:return 1;
		case 0x00007373656E746E:return 1;
		default:return 0;
		}
	case 0x657265686F636E75:
		switch(wp[1]){
		case 0x00007373656E746E:return 1;
		default:return 0;
		}
	case 0x6572656E65676564:
		switch(wp[1]){
		case 0x000065636E656373:return 1;
		default:return 0;
		}
	case 0x6572656F656C6170:
		switch(wp[1]){
		case 0x000079676F6C6F6D:return 1;
		default:return 0;
		}
	case 0x657265707265766F:
		switch(wp[1]){
		case 0x000079726F74706D:return 1;
		default:return 0;
		}
	case 0x657265746E696E75:
		switch(wp[1]){
		case 0x0000796C64657473:return 1;
		default:return 0;
		}
	case 0x657265746E756F63:
		switch(wp[1]){
		case 0x00006465776F626D:return 1;
		default:return 0;
		}
	case 0x6572657665726E75:
		switch(wp[1]){
		case 0x00007373656E746E:return 1;
		default:return 0;
		}
	case 0x6572667265646E75:
		switch(wp[1]){
		case 0x000079636E657571:return 1;
		default:return 0;
		}
	case 0x65726765736E6F6E:
		switch(wp[1]){
		case 0x00006E6F69746167:return 1;
		default:return 0;
		}
	case 0x6572676761736964:
		switch(wp[1]){
		case 0x0000657669746167:return 1;
		case 0x00006E6F69746167:return 1;
		default:return 0;
		}
	case 0x657267736E617274:
		switch(wp[1]){
		case 0x0000656C62697373:return 1;
		default:return 0;
		}
	case 0x6572686361746163:
		switch(wp[1]){
		case 0x00006C6163697473:return 1;
		default:return 0;
		}
	case 0x65726863796C6F70:
		switch(wp[1]){
		case 0x00006C6163697473:return 1;
		default:return 0;
		}
	case 0x65726F63736F6964:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x65726F6475657370:
		switch(wp[1]){
		case 0x000064656D726F66:return 1;
		default:return 0;
		}
	case 0x65726F6669746E61:
		switch(wp[1]){
		case 0x00006D73696E6769:return 1;
		default:return 0;
		}
	case 0x65726F6E756D6D69:
		switch(wp[1]){
		case 0x00006E6F69746361:return 1;
		default:return 0;
		}
	case 0x65726F70736E6F6E:
		switch(wp[1]){
		case 0x000072656D726F66:return 1;
		default:return 0;
		}
	case 0x657270657273696D:
		switch(wp[1]){
		case 0x00007265746E6573:return 1;
		default:return 0;
		}
	case 0x6572706968637261:
		switch(wp[1]){
		case 0x0000726574796273:return 1;
		default:return 0;
		}
	case 0x6572706D696E6F6E:
		switch(wp[1]){
		case 0x0000646574616E67:return 1;
		default:return 0;
		}
	case 0x6572706D6F636E69:
		switch(wp[1]){
		case 0x00006465646E6568:return 1;
		case 0x0000656C62697373:return 1;
		case 0x0000796C62697373:return 1;
		default:return 0;
		}
	case 0x6572706D6F636E75:
		switch(wp[1]){
		case 0x00006465646E6568:return 1;
		case 0x0000656C62697373:return 1;
		default:return 0;
		}
	case 0x6572706F746F7270:
		switch(wp[1]){
		case 0x0000726574796273:return 1;
		default:return 0;
		}
	case 0x6572707075736E69:
		switch(wp[1]){
		case 0x0000656C62697373:return 1;
		case 0x0000796C62697373:return 1;
		default:return 0;
		}
	case 0x6572707075736E75:
		switch(wp[1]){
		case 0x0000656C62697373:return 1;
		case 0x0000796C62697373:return 1;
		default:return 0;
		}
	case 0x6572707265746E69:
		switch(wp[1]){
		case 0x0000657669746174:return 1;
		case 0x00006C6169726F74:return 1;
		case 0x00006E6F69746174:return 1;
		case 0x0000746E656D6174:return 1;
		case 0x0000796C65766974:return 1;
		default:return 0;
		}
	case 0x6572707365646977:
		switch(wp[1]){
		case 0x00007373656E6461:return 1;
		case 0x0000796C64656461:return 1;
		default:return 0;
		}
	case 0x6572726574627573:
		switch(wp[1]){
		case 0x00006C6169727473:return 1;
		default:return 0;
		}
	case 0x6572726574657270:
		switch(wp[1]){
		case 0x00006C6169727473:return 1;
		default:return 0;
		}
	case 0x65727265746E6F6E:
		switch(wp[1]){
		case 0x00006C6169727473:return 1;
		default:return 0;
		}
	case 0x6572726575676164:
		switch(wp[1]){
		case 0x000063697079746F:return 1;
		case 0x000072657079746F:return 1;
		default:return 0;
		}
	case 0x6572726F63657270:
		switch(wp[1]){
		case 0x00007373656E7463:return 1;
		default:return 0;
		}
	case 0x6572726F636E6F6E:
		switch(wp[1]){
		case 0x00006E6F6974616C:return 1;
		default:return 0;
		}
	case 0x65727275636E6F63:
		switch(wp[1]){
		case 0x00007373656E746E:return 1;
		default:return 0;
		}
	case 0x6572747265646E75:
		switch(wp[1]){
		case 0x0000726572757361:return 1;
		default:return 0;
		}
	case 0x6572747265746661:
		switch(wp[1]){
		case 0x0000746E656D7461:return 1;
		default:return 0;
		}
	case 0x6572747369726570:
		switch(wp[1]){
		case 0x00006C6163696870:return 1;
		default:return 0;
		}
	case 0x65727475706E6F6E:
		switch(wp[1]){
		case 0x0000656C62696373:return 1;
		default:return 0;
		}
	case 0x6572756574736170:
		switch(wp[1]){
		case 0x00007369736F6C6C:return 1;
		default:return 0;
		}
	case 0x6572757361656C70:
		switch(wp[1]){
		case 0x00007265676E6F6D:return 1;
		case 0x0000796C7373656C:return 1;
		default:return 0;
		}
	case 0x6572757461657263:
		switch(wp[1]){
		case 0x00007373656E696C:return 1;
		default:return 0;
		}
	case 0x6573626F7265766F:
		switch(wp[1]){
		case 0x000073756F697571:return 1;
		default:return 0;
		}
	case 0x6573656D74736F70:
		switch(wp[1]){
		case 0x000063697265746E:return 1;
		default:return 0;
		}
	case 0x657365726F666E75:
		switch(wp[1]){
		case 0x00007373656E6E65:return 1;
		case 0x0000796C676E6965:return 1;
		default:return 0;
		}
	case 0x6573696172706E75:
		switch(wp[1]){
		case 0x0000796874726F77:return 1;
		default:return 0;
		}
	case 0x6573697571736573:
		switch(wp[1]){
		case 0x00006C616D697470:return 1;
		default:return 0;
		}
	case 0x65736E6F63627573:
		switch(wp[1]){
		case 0x0000726F74617672:return 1;
		default:return 0;
		}
	case 0x65736E6F636E6F6E:
		switch(wp[1]){
		case 0x000065636E657571:return 1;
		case 0x0000657669747563:return 1;
		default:return 0;
		}
	case 0x65736E6F6373696D:
		switch(wp[1]){
		case 0x000065636E657571:return 1;
		default:return 0;
		}
	case 0x65736E6F6D6D6F63:
		switch(wp[1]){
		case 0x0000656C6269736E:return 1;
		case 0x00006C616369736E:return 1;
		case 0x0000796C6269736E:return 1;
		default:return 0;
		}
	case 0x65736E756F636E75:
		switch(wp[1]){
		case 0x0000656C62616C6C:return 1;
		default:return 0;
		}
	case 0x65736F6863797370:
		switch(wp[1]){
		case 0x0000796C6C617578:return 1;
		default:return 0;
		}
	case 0x65736F68706C7573:
		switch(wp[1]){
		case 0x00006564696E656C:return 1;
		case 0x00006D75696E656C:return 1;
		default:return 0;
		}
	case 0x65736F72706E6F6E:
		switch(wp[1]){
		case 0x00006E6F69747563:return 1;
		default:return 0;
		}
	case 0x65737261666C7573:
		switch(wp[1]){
		case 0x000074657275696E:return 1;
		default:return 0;
		}
	case 0x65737265706E6F6E:
		switch(wp[1]){
		case 0x00006E6F69747563:return 1;
		default:return 0;
		}
	case 0x6573726574627573:
		switch(wp[1]){
		case 0x000073756F75736E:return 1;
		default:return 0;
		}
	case 0x657373617265766F:
		switch(wp[1]){
		case 0x0000746E656D7373:return 1;
		default:return 0;
		}
	case 0x6573756F686E6F6E:
		switch(wp[1]){
		case 0x00007265646C6F68:return 1;
		default:return 0;
		}
	case 0x6573796469746E61:
		switch(wp[1]){
		case 0x000063697265746E:return 1;
		default:return 0;
		}
	case 0x6573796474736F70:
		switch(wp[1]){
		case 0x000063697265746E:return 1;
		default:return 0;
		}
	case 0x6573796870697065:
		switch(wp[1]){
		case 0x0000736973796C6F:return 1;
		default:return 0;
		}
	case 0x657461636F727970:
		switch(wp[1]){
		case 0x00006C6F6E696863:return 1;
		default:return 0;
		}
	case 0x6574616C69626D61:
		switch(wp[1]){
		case 0x00007974696C6172:return 1;
		default:return 0;
		}
	case 0x6574617069726570:
		switch(wp[1]){
		case 0x0000657461636974:return 1;
		default:return 0;
		}
	case 0x6574617266657270:
		switch(wp[1]){
		case 0x0000796C6C616E72:return 1;
		default:return 0;
		}
	case 0x65746174736F7270:
		switch(wp[1]){
		case 0x00007369736F636C:return 1;
		default:return 0;
		}
	case 0x6574636172616863:
		switch(wp[1]){
		case 0x0000636974736972:return 1;
		case 0x000079676F6C6F72:return 1;
		default:return 0;
		}
	case 0x6574636E69687073:
		switch(wp[1]){
		case 0x00006169676C6172:return 1;
		case 0x000073756D736972:return 1;
		case 0x0000796D6F746F72:return 1;
		default:return 0;
		}
	case 0x657465647265766F:
		switch(wp[1]){
		case 0x000064656E696D72:return 1;
		default:return 0;
		}
	case 0x6574656474736F70:
		switch(wp[1]){
		case 0x000064656E696D72:return 1;
		default:return 0;
		}
	case 0x657465686F747561:
		switch(wp[1]){
		case 0x0000656E79646F72:return 1;
		default:return 0;
		}
	case 0x657465726F666E75:
		switch(wp[1]){
		case 0x0000656C62616C6C:return 1;
		default:return 0;
		}
	case 0x65746867696C6E65:
		switch(wp[1]){
		case 0x0000796C676E696E:return 1;
		default:return 0;
		}
	case 0x6574686775616C73:
		switch(wp[1]){
		case 0x00006573756F6872:return 1;
		case 0x0000796C676E6972:return 1;
		case 0x0000796C73756F72:return 1;
		default:return 0;
		}
	case 0x6574696E65706D69:
		switch(wp[1]){
		case 0x00007373656E746E:return 1;
		default:return 0;
		}
	case 0x6574696E65706E75:
		switch(wp[1]){
		case 0x00007373656E746E:return 1;
		default:return 0;
		}
	case 0x65746C6F6F686373:
		switch(wp[1]){
		case 0x0000676E69686361:return 1;
		case 0x0000797265686361:return 1;
		default:return 0;
		}
	case 0x65746C7564616E75:
		switch(wp[1]){
		case 0x0000796C65746172:return 1;
		case 0x0000796C73756F72:return 1;
		default:return 0;
		}
	case 0x65746E6563697274:
		switch(wp[1]){
		case 0x00006E616972616E:return 1;
		default:return 0;
		}
	case 0x65746E6563726574:
		switch(wp[1]){
		case 0x0000657A6972616E:return 1;
		case 0x00006E616972616E:return 1;
		default:return 0;
		}
	case 0x65746E656D726566:
		switch(wp[1]){
		case 0x0000656C62696373:return 1;
		default:return 0;
		}
	case 0x65746E696F6E6572:
		switch(wp[1]){
		case 0x00006C616E697473:return 1;
		default:return 0;
		}
	case 0x65746E697265766F:
		switch(wp[1]){
		case 0x0000646574736572:return 1;
		default:return 0;
		}
	case 0x65746E6974736F70:
		switch(wp[1]){
		case 0x00006C616E697473:return 1;
		default:return 0;
		}
	case 0x65746E6F63657270:
		switch(wp[1]){
		case 0x00006574616C706D:return 1;
		case 0x0000746E656D746E:return 1;
		default:return 0;
		}
	case 0x65746E6F636C616D:
		switch(wp[1]){
		case 0x0000746E656D746E:return 1;
		case 0x0000796C6465746E:return 1;
		default:return 0;
		}
	case 0x65746E6F636E6F6E:
		switch(wp[1]){
		case 0x000073756F69746E:return 1;
		default:return 0;
		}
	case 0x65746E6F63736964:
		switch(wp[1]){
		case 0x0000746E656D746E:return 1;
		case 0x0000796C6465746E:return 1;
		default:return 0;
		}
	case 0x65746E756F636E75:
		switch(wp[1]){
		case 0x00006465636E616E:return 1;
		case 0x0000646574636172:return 1;
		default:return 0;
		}
	case 0x65746F656E6C6162:
		switch(wp[1]){
		case 0x00007363696E6863:return 1;
		default:return 0;
		}
	case 0x65746F656F6D6F68:
		switch(wp[1]){
		case 0x000063697475656C:return 1;
		case 0x00006E6F7475656C:return 1;
		default:return 0;
		}
	case 0x65746F6863797370:
		switch(wp[1]){
		case 0x00007363696E6863:return 1;
		default:return 0;
		}
	case 0x65746F6963617073:
		switch(wp[1]){
		case 0x00006C61726F706D:return 1;
		default:return 0;
		}
	case 0x65746F6972616863:
		switch(wp[1]){
		case 0x0000706968737265:return 1;
		default:return 0;
		}
	case 0x65746F6974617073:
		switch(wp[1]){
		case 0x00006C61726F706D:return 1;
		default:return 0;
		}
	case 0x65746F6D61757173:
		switch(wp[1]){
		case 0x00006C61726F706D:return 1;
		default:return 0;
		}
	case 0x65746F6D73696573:
		switch(wp[1]){
		case 0x000063696E6F7463:return 1;
		default:return 0;
		}
	case 0x65746F6E65687073:
		switch(wp[1]){
		case 0x00006C61726F706D:return 1;
		default:return 0;
		}
	case 0x65746F6E696C6173:
		switch(wp[1]){
		case 0x000073756F657272:return 1;
		default:return 0;
		}
	case 0x65746F726574616C:
		switch(wp[1]){
		case 0x00006C61726F706D:return 1;
		default:return 0;
		}
	case 0x65746F746E6F7266:
		switch(wp[1]){
		case 0x00006C61726F706D:return 1;
		default:return 0;
		}
	case 0x6574706968637261:
		switch(wp[1]){
		case 0x00006C6169677972:return 1;
		case 0x00006D7569677972:return 1;
		default:return 0;
		}
	case 0x6574706F656C6F63:
		switch(wp[1]){
		case 0x000079676F6C6F72:return 1;
		default:return 0;
		}
	case 0x6574706F6874726F:
		switch(wp[1]){
		case 0x000079676F6C6F72:return 1;
		default:return 0;
		}
	case 0x6574706F72696863:
		switch(wp[1]){
		case 0x00006D7569677972:return 1;
		case 0x00006E6169677972:return 1;
		default:return 0;
		}
	case 0x6574706F72756173:
		switch(wp[1]){
		case 0x00006E6169677972:return 1;
		default:return 0;
		}
	case 0x6574706F7275656E:
		switch(wp[1]){
		case 0x000079676F6C6F72:return 1;
		default:return 0;
		}
	case 0x6574707265746E69:
		switch(wp[1]){
		case 0x000064696F677972:return 1;
		default:return 0;
		}
	case 0x657473626F6E6F6E:
		switch(wp[1]){
		case 0x00006C6163697274:return 1;
		default:return 0;
		}
	case 0x6574736E6F636E75:
		switch(wp[1]){
		case 0x0000646574616C6C:return 1;
		default:return 0;
		}
	case 0x6574736F64696361:
		switch(wp[1]){
		case 0x000065747968706F:return 1;
		default:return 0;
		}
	case 0x6574736F67696C6F:
		switch(wp[1]){
		case 0x000073756F6E6F6D:return 1;
		default:return 0;
		}
	case 0x6574736F68637261:
		switch(wp[1]){
		case 0x00007369736F6E67:return 1;
		default:return 0;
		}
	case 0x6574736F69676E61:
		switch(wp[1]){
		case 0x00007369736F6E67:return 1;
		default:return 0;
		}
	case 0x6574736F69726570:
		switch(wp[1]){
		case 0x000065747968706F:return 1;
		default:return 0;
		}
	case 0x6574736F6C706168:
		switch(wp[1]){
		case 0x000073756F6E6F6D:return 1;
		default:return 0;
		}
	case 0x6574736F6C706964:
		switch(wp[1]){
		case 0x000073756F6E6F6D:return 1;
		default:return 0;
		}
	case 0x6574736F6E656461:
		switch(wp[1]){
		case 0x000073756F6E6F6D:return 1;
		default:return 0;
		}
	case 0x6574736F70657270:
		switch(wp[1]){
		case 0x0000796C73756F72:return 1;
		default:return 0;
		}
	case 0x6574736F73696E61:
		switch(wp[1]){
		case 0x000073756F6E6F6D:return 1;
		default:return 0;
		}
	case 0x6574737265746E69:
		switch(wp[1]){
		case 0x00007974696C6972:return 1;
		default:return 0;
		}
	case 0x65747379736F6962:
		switch(wp[1]){
		case 0x000073636974616D:return 1;
		case 0x000074736974616D:return 1;
		default:return 0;
		}
	case 0x657474616C666E75:
		switch(wp[1]){
		case 0x0000796C676E6972:return 1;
		default:return 0;
		}
	case 0x657474696D6D6F63:
		switch(wp[1]){
		case 0x00006E616D6F7765:return 1;
		default:return 0;
		}
	case 0x6574796273657270:
		switch(wp[1]){
		case 0x0000796C6C616972:return 1;
		default:return 0;
		}
	case 0x6575716572666E75:
		switch(wp[1]){
		case 0x00007373656E746E:return 1;
		default:return 0;
		}
	case 0x6575716573627573:
		switch(wp[1]){
		case 0x00007373656E746E:return 1;
		default:return 0;
		}
	case 0x6576617571617571:
		switch(wp[1]){
		case 0x0000796C6C617372:return 1;
		default:return 0;
		}
	case 0x6576657265726F66:
		switch(wp[1]){
		case 0x00006E6F6974616C:return 1;
		default:return 0;
		}
	case 0x6576696C7265766F:
		switch(wp[1]){
		case 0x00007373656E696C:return 1;
		default:return 0;
		}
	case 0x65766D7573727573:
		switch(wp[1]){
		case 0x000065636E656772:return 1;
		default:return 0;
		}
	case 0x65766E697265766F:
		switch(wp[1]){
		case 0x0000746E656D7473:return 1;
		default:return 0;
		}
	case 0x65766E6F636E6F6E:
		switch(wp[1]){
		case 0x0000656C62617372:return 1;
		case 0x0000656C62697472:return 1;
		default:return 0;
		}
	case 0x65766E6F63736964:
		switch(wp[1]){
		case 0x000065636E65696E:return 1;
		case 0x0000656C6369746E:return 1;
		default:return 0;
		}
	case 0x65766F6369746E61:
		switch(wp[1]){
		case 0x00007265746E616E:return 1;
		default:return 0;
		}
	case 0x65766F6769746E61:
		switch(wp[1]){
		case 0x0000746E656D6E72:return 1;
		default:return 0;
		}
	case 0x65766F677265766F:
		switch(wp[1]){
		case 0x0000746E656D6E72:return 1;
		default:return 0;
		}
	case 0x65766F706D696E75:
		switch(wp[1]){
		case 0x0000646568736972:return 1;
		default:return 0;
		}
	case 0x65766F72746E6F63:
		switch(wp[1]){
		case 0x0000656C62697472:return 1;
		case 0x0000796C62697472:return 1;
		default:return 0;
		}
	case 0x65776F707265766F:
		switch(wp[1]){
		case 0x0000796C676E6972:return 1;
		default:return 0;
		}
	case 0x65796D6F72647968:
		switch(wp[1]){
		case 0x0000656C65636F6C:return 1;
		default:return 0;
		}
	case 0x657A6D7563726963:
		switch(wp[1]){
		case 0x00006C616874696E:return 1;
		default:return 0;
		}
	case 0x66617263646F6F77:
		switch(wp[1]){
		case 0x00007373656E6974:return 1;
		default:return 0;
		}
	case 0x6661736F6E656870:
		switch(wp[1]){
		case 0x0000656E696E6172:return 1;
		default:return 0;
		}
	case 0x666562726F736261:
		switch(wp[1]){
		case 0x0000746E65696361:return 1;
		default:return 0;
		}
	case 0x6665636165706E75:
		switch(wp[1]){
		case 0x00007373656E6C75:return 1;
		default:return 0;
		}
	case 0x6665636172676E75:
		switch(wp[1]){
		case 0x00007373656E6C75:return 1;
		default:return 0;
		}
	case 0x6665676E65766572:
		switch(wp[1]){
		case 0x00007373656E6C75:return 1;
		default:return 0;
		}
	case 0x6665677265707865:
		switch(wp[1]){
		case 0x00006E6F69746361:return 1;
		case 0x0000746E65696361:return 1;
		default:return 0;
		}
	case 0x66656C6975676E75:
		switch(wp[1]){
		case 0x00007373656E6C75:return 1;
		default:return 0;
		}
	case 0x66656D6168736E75:
		switch(wp[1]){
		case 0x00007373656E6C75:return 1;
		default:return 0;
		}
	case 0x66656E6562657270:
		switch(wp[1]){
		case 0x0000797261696369:return 1;
		default:return 0;
		}
	case 0x6665736165736964:
		switch(wp[1]){
		case 0x00007373656E6C75:return 1;
		default:return 0;
		}
	case 0x6665736E65707865:
		switch(wp[1]){
		case 0x00007373656E6C75:return 1;
		default:return 0;
		}
	case 0x6665736F70727570:
		switch(wp[1]){
		case 0x00007373656E6C75:return 1;
		default:return 0;
		}
	case 0x666573726F6D6572:
		switch(wp[1]){
		case 0x00007373656E6C75:return 1;
		default:return 0;
		}
	case 0x6665746172676E69:
		switch(wp[1]){
		case 0x00007373656E6C75:return 1;
		default:return 0;
		}
	case 0x6665746172676E75:
		switch(wp[1]){
		case 0x00007373656E6C75:return 1;
		default:return 0;
		}
	case 0x6665746970736564:
		switch(wp[1]){
		case 0x00007373656E6C75:return 1;
		default:return 0;
		}
	case 0x6665747361746E75:
		switch(wp[1]){
		case 0x00007373656E6C75:return 1;
		default:return 0;
		}
	case 0x666575716E697571:
		switch(wp[1]){
		case 0x0000657461696C6F:return 1;
		case 0x000073756F697261:return 1;
		default:return 0;
		}
	case 0x6665766F6F686562:
		switch(wp[1]){
		case 0x00007373656E6C75:return 1;
		default:return 0;
		}
	case 0x6666617265707573:
		switch(wp[1]){
		case 0x000065636E657569:return 1;
		default:return 0;
		}
	case 0x6666657265707573:
		switch(wp[1]){
		case 0x000065636E65756C:return 1;
		case 0x0000657669746365:return 1;
		default:return 0;
		}
	case 0x66666964696D6573:
		switch(wp[1]){
		case 0x000065636E657265:return 1;
		default:return 0;
		}
	case 0x666669646E696E75:
		switch(wp[1]){
		case 0x000065636E657265:return 1;
		case 0x000079636E657265:return 1;
		default:return 0;
		}
	case 0x66666F6172746C75:
		switch(wp[1]){
		case 0x000073756F696369:return 1;
		default:return 0;
		}
	case 0x66666F7265646E75:
		switch(wp[1]){
		case 0x0000646572656369:return 1;
		default:return 0;
		}
	case 0x66666F7265707573:
		switch(wp[1]){
		case 0x0000657669736E65:return 1;
		case 0x000073756F696369:return 1;
		default:return 0;
		}
	case 0x66667573696E6D6F:
		switch(wp[1]){
		case 0x0000746E65696369:return 1;
		default:return 0;
		}
	case 0x6666757369746E61:
		switch(wp[1]){
		case 0x0000747369676172:return 1;
		default:return 0;
		}
	case 0x666675737265766F:
		switch(wp[1]){
		case 0x0000746E65696369:return 1;
		default:return 0;
		}
	case 0x666863616D6F7473:
		switch(wp[1]){
		case 0x00007373656E6C75:return 1;
		default:return 0;
		}
	case 0x6668637461776E75:
		switch(wp[1]){
		case 0x00007373656E6C75:return 1;
		default:return 0;
		}
	case 0x6668746961666E75:
		switch(wp[1]){
		case 0x00007373656E6C75:return 1;
		default:return 0;
		}
	case 0x6668746F6C736E75:
		switch(wp[1]){
		case 0x00007373656E6C75:return 1;
		default:return 0;
		}
	case 0x66687472696D6E75:
		switch(wp[1]){
		case 0x00007373656E6C75:return 1;
		default:return 0;
		}
	case 0x6668747572746E75:
		switch(wp[1]){
		case 0x00007373656E6C75:return 1;
		default:return 0;
		}
	case 0x666963616E696361:
		switch(wp[1]){
		case 0x000073756F696C6F:return 1;
		default:return 0;
		}
	case 0x6669636964617073:
		switch(wp[1]){
		case 0x000073756F726F6C:return 1;
		default:return 0;
		}
	case 0x6669636974726F63:
		switch(wp[1]){
		case 0x0000796C6C616775:return 1;
		default:return 0;
		}
	case 0x66696372656D6E75:
		switch(wp[1]){
		case 0x00007373656E6C75:return 1;
		default:return 0;
		}
	case 0x666964696C6C6170:
		switch(wp[1]){
		case 0x000073756F726F6C:return 1;
		default:return 0;
		}
	case 0x6669646E75636573:
		switch(wp[1]){
		case 0x000073756F726F6C:return 1;
		default:return 0;
		}
	case 0x6669646E75746F72:
		switch(wp[1]){
		case 0x0000657461696C6F:return 1;
		case 0x000073756F696C6F:return 1;
		default:return 0;
		}
	case 0x6669647265707573:
		switch(wp[1]){
		case 0x0000746C75636966:return 1;
		default:return 0;
		}
	case 0x6669647265746E69:
		switch(wp[1]){
		case 0x0000657669737566:return 1;
		case 0x00006E6F69737566:return 1;
		default:return 0;
		}
	case 0x66696873656B616D:
		switch(wp[1]){
		case 0x00007373656E6974:return 1;
		default:return 0;
		}
	case 0x66696C616D6F6E61:
		switch(wp[1]){
		case 0x000073756F726F6C:return 1;
		default:return 0;
		}
	case 0x66696C6175716E75:
		switch(wp[1]){
		case 0x0000796C676E6979:return 1;
		default:return 0;
		}
	case 0x66696C6C6174656D:
		switch(wp[1]){
		case 0x0000657275746361:return 1;
		default:return 0;
		}
	case 0x66696C6C65626D75:
		switch(wp[1]){
		case 0x000073756F726F6C:return 1;
		default:return 0;
		}
	case 0x66696C6F72706D69:
		switch(wp[1]){
		case 0x00006C6163696369:return 1;
		default:return 0;
		}
	case 0x66696C706D657865:
		switch(wp[1]){
		case 0x0000726F74616369:return 1;
		default:return 0;
		}
	case 0x66696C756C6C6563:
		switch(wp[1]){
		case 0x0000796C6C616775:return 1;
		default:return 0;
		}
	case 0x66696D616C616874:
		switch(wp[1]){
		case 0x000073756F726F6C:return 1;
		default:return 0;
		}
	case 0x66696E6769736E69:
		switch(wp[1]){
		case 0x000065636E616369:return 1;
		case 0x000079636E616369:return 1;
		default:return 0;
		}
	case 0x66696E6769736E75:
		switch(wp[1]){
		case 0x000079636E616369:return 1;
		default:return 0;
		}
	case 0x66696E696D617267:
		switch(wp[1]){
		case 0x000073756F696C6F:return 1;
		default:return 0;
		}
	case 0x66696E6D65646E69:
		switch(wp[1]){
		case 0x0000726F74616369:return 1;
		default:return 0;
		}
	case 0x66696E6F73726570:
		switch(wp[1]){
		case 0x0000726F74616369:return 1;
		default:return 0;
		}
	case 0x66696E7265746C61:
		switch(wp[1]){
		case 0x0000657461696C6F:return 1;
		default:return 0;
		}
	case 0x6669726765746E69:
		switch(wp[1]){
		case 0x000073756F696C6F:return 1;
		default:return 0;
		}
	case 0x66697274696E6564:
		switch(wp[1]){
		case 0x0000726F74616369:return 1;
		default:return 0;
		}
	case 0x6669727574726170:
		switch(wp[1]){
		case 0x0000746E65696361:return 1;
		default:return 0;
		}
	case 0x6669736C61666E69:
		switch(wp[1]){
		case 0x0000656C62616369:return 1;
		default:return 0;
		}
	case 0x6669737265766461:
		switch(wp[1]){
		case 0x0000657461696C6F:return 1;
		case 0x000073756F696C6F:return 1;
		default:return 0;
		}
	case 0x6669737265766964:
		switch(wp[1]){
		case 0x0000657461696C6F:return 1;
		case 0x0000657461726F6C:return 1;
		case 0x000073756F696C6F:return 1;
		case 0x000073756F726F6C:return 1;
		default:return 0;
		}
	case 0x6669746E65696373:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x6669747265636E75:
		switch(wp[1]){
		case 0x0000646574616369:return 1;
		default:return 0;
		}
	case 0x6669747375676E61:
		switch(wp[1]){
		case 0x0000657461696C6F:return 1;
		case 0x000073756F696C6F:return 1;
		default:return 0;
		}
	case 0x666978656C706D61:
		switch(wp[1]){
		case 0x0000657461696C6F:return 1;
		default:return 0;
		}
	case 0x666B6E6168746E75:
		switch(wp[1]){
		case 0x00007373656E6C75:return 1;
		default:return 0;
		}
	case 0x666C6C696B736E75:
		switch(wp[1]){
		case 0x00007373656E6C75:return 1;
		default:return 0;
		}
	case 0x666E696164736964:
		switch(wp[1]){
		case 0x00007373656E6C75:return 1;
		default:return 0;
		}
	case 0x666E696F72746572:
		switch(wp[1]){
		case 0x00006E6F69746365:return 1;
		default:return 0;
		}
	case 0x666E697265707573:
		switch(wp[1]){
		case 0x000065636E657265:return 1;
		case 0x000065636E65756C:return 1;
		case 0x00006E6F69746365:return 1;
		case 0x00007974696D7269:return 1;
		default:return 0;
		}
	case 0x666E697265746E69:
		switch(wp[1]){
		case 0x000065636E65756C:return 1;
		default:return 0;
		}
	case 0x666E6F63696D6573:
		switch(wp[1]){
		case 0x00007473696D726F:return 1;
		case 0x00007974696D726F:return 1;
		default:return 0;
		}
	case 0x666E6F6369746E61:
		switch(wp[1]){
		case 0x00007473696D726F:return 1;
		default:return 0;
		}
	case 0x666E6F637265766F:
		switch(wp[1]){
		case 0x000065636E656469:return 1;
		default:return 0;
		}
	case 0x666E6F6973736170:
		switch(wp[1]){
		case 0x00007373656E6C75:return 1;
		default:return 0;
		}
	case 0x666E726F63736E75:
		switch(wp[1]){
		case 0x00007373656E6C75:return 1;
		default:return 0;
		}
	case 0x666F6563696C6973:
		switch(wp[1]){
		case 0x00006369726F756C:return 1;
		default:return 0;
		}
	case 0x666F656863617274:
		switch(wp[1]){
		case 0x0000657275737369:return 1;
		default:return 0;
		}
	case 0x666F676E7972616C:
		switch(wp[1]){
		case 0x0000657275737369:return 1;
		case 0x00006E6F69737369:return 1;
		default:return 0;
		}
	case 0x666F6870736F6870:
		switch(wp[1]){
		case 0x0000657469727265:return 1;
		default:return 0;
		}
	case 0x666F68726579656D:
		switch(wp[1]){
		case 0x0000657469726566:return 1;
		default:return 0;
		}
	case 0x666F6C616D6F6E61:
		switch(wp[1]){
		case 0x000073756F726F6C:return 1;
		default:return 0;
		}
	case 0x666F6C6C65746170:
		switch(wp[1]){
		case 0x00006C61726F6D65:return 1;
		default:return 0;
		}
	case 0x666F6C6F626D7973:
		switch(wp[1]){
		case 0x00006D7369656469:return 1;
		default:return 0;
		}
	case 0x666F6C756373756D:
		switch(wp[1]){
		case 0x000073756F726269:return 1;
		default:return 0;
		}
	case 0x666F6C756C6C6563:
		switch(wp[1]){
		case 0x000073756F726269:return 1;
		default:return 0;
		}
	case 0x666F6E696863616D:
		switch(wp[1]){
		case 0x0000657275746361:return 1;
		default:return 0;
		}
	case 0x666F72646E6F6863:
		switch(wp[1]){
		case 0x0000616D6F726269:return 1;
		default:return 0;
		}
	case 0x666F726F706D6574:
		switch(wp[1]){
		case 0x00006C61746E6F72:return 1;
		default:return 0;
		}
	case 0x666F72707265766F:
		switch(wp[1]){
		case 0x0000746E65696369:return 1;
		default:return 0;
		}
	case 0x666F727463656C65:
		switch(wp[1]){
		case 0x0000676E696D726F:return 1;
		default:return 0;
		}
	case 0x666F746569726170:
		switch(wp[1]){
		case 0x00006C61746E6F72:return 1;
		default:return 0;
		}
	case 0x666F796D6F69656C:
		switch(wp[1]){
		case 0x0000616D6F726269:return 1;
		default:return 0;
		}
	case 0x6670696873726F77:
		switch(wp[1]){
		case 0x00007373656E6C75:return 1;
		default:return 0;
		}
	case 0x6672656568636E75:
		switch(wp[1]){
		case 0x00007373656E6C75:return 1;
		default:return 0;
		}
	case 0x667265746E696572:
		switch(wp[1]){
		case 0x000065636E657265:return 1;
		default:return 0;
		}
	case 0x667265746E756F63:
		switch(wp[1]){
		case 0x0000616C756D726F:return 1;
		case 0x0000746E656D7265:return 1;
		case 0x00007963616C6C61:return 1;
		default:return 0;
		}
	case 0x667265776F706E75:
		switch(wp[1]){
		case 0x00007373656E6C75:return 1;
		default:return 0;
		}
	case 0x6672696170736564:
		switch(wp[1]){
		case 0x00007373656E6C75:return 1;
		default:return 0;
		}
	case 0x6673697461736572:
		switch(wp[1]){
		case 0x00006E6F69746361:return 1;
		default:return 0;
		}
	case 0x6673697461736E69:
		switch(wp[1]){
		case 0x00006E6F69746361:return 1;
		default:return 0;
		}
	case 0x6673697461736E75:
		switch(wp[1]){
		case 0x00006E6F69746361:return 1;
		case 0x0000796C676E6979:return 1;
		case 0x000079726F746361:return 1;
		default:return 0;
		}
	case 0x66736E6172746572:
		switch(wp[1]){
		case 0x000065636E657265:return 1;
		default:return 0;
		}
	case 0x66736E6172746E69:
		switch(wp[1]){
		case 0x0000656C62617265:return 1;
		case 0x0000656C62697375:return 1;
		default:return 0;
		}
	case 0x66736E6172746E75:
		switch(wp[1]){
		case 0x0000646572756769:return 1;
		case 0x0000656C62617265:return 1;
		case 0x0000656C62697375:return 1;
		case 0x0000676E696D726F:return 1;
		default:return 0;
		}
	case 0x6673736563637573:
		switch(wp[1]){
		case 0x00007373656E6C75:return 1;
		default:return 0;
		}
	case 0x667462756F646E75:
		switch(wp[1]){
		case 0x00007373656E6C75:return 1;
		default:return 0;
		}
	case 0x667463656C67656E:
		switch(wp[1]){
		case 0x00007373656E6C75:return 1;
		default:return 0;
		}
	case 0x6674636570736572:
		switch(wp[1]){
		case 0x00007373656E6C75:return 1;
		default:return 0;
		}
	case 0x6674636570737573:
		switch(wp[1]){
		case 0x00007373656E6C75:return 1;
		default:return 0;
		}
	case 0x66746867696C6564:
		switch(wp[1]){
		case 0x00007373656E6C75:return 1;
		default:return 0;
		}
	case 0x6674686769726E75:
		switch(wp[1]){
		case 0x00007373656E6C75:return 1;
		default:return 0;
		}
	case 0x6674686769727073:
		switch(wp[1]){
		case 0x00007373656E6C75:return 1;
		default:return 0;
		}
	case 0x66746867756F6874:
		switch(wp[1]){
		case 0x00007373656E6C75:return 1;
		default:return 0;
		}
	case 0x6674697572666E75:
		switch(wp[1]){
		case 0x00007373656E6C75:return 1;
		default:return 0;
		}
	case 0x66746C7561666E75:
		switch(wp[1]){
		case 0x0000676E69646E69:return 1;
		default:return 0;
		}
	case 0x66746E6572726F74:
		switch(wp[1]){
		case 0x00007373656E6C75:return 1;
		default:return 0;
		}
	case 0x66746E6576656E75:
		switch(wp[1]){
		case 0x00007373656E6C75:return 1;
		default:return 0;
		}
	case 0x6674737567736964:
		switch(wp[1]){
		case 0x00007373656E6C75:return 1;
		default:return 0;
		}
	case 0x66756E616D657270:
		switch(wp[1]){
		case 0x0000657275746361:return 1;
		default:return 0;
		}
	case 0x66756E616D6E6F6E:
		switch(wp[1]){
		case 0x0000657275746361:return 1;
		default:return 0;
		}
	case 0x6675726F6574756C:
		switch(wp[1]){
		case 0x0000746E65637365:return 1;
		default:return 0;
		}
	case 0x6761676E65736964:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x6761687069746E61:
		switch(wp[1]){
		case 0x000063697479636F:return 1;
		default:return 0;
		}
	case 0x676169646F726573:
		switch(wp[1]){
		case 0x0000636974736F6E:return 1;
		default:return 0;
		}
	case 0x676169646F747561:
		switch(wp[1]){
		case 0x0000636974736F6E:return 1;
		default:return 0;
		}
	case 0x6761696474736F70:
		switch(wp[1]){
		case 0x0000636974736F6E:return 1;
		default:return 0;
		}
	case 0x67616B6E69726873:
		switch(wp[1]){
		case 0x0000666F6F727065:return 1;
		default:return 0;
		}
	case 0x67616C666F6D6568:
		switch(wp[1]){
		case 0x00006574616C6C65:return 1;
		default:return 0;
		}
	case 0x67616C666F6E6964:
		switch(wp[1]){
		case 0x00006574616C6C65:return 1;
		default:return 0;
		}
	case 0x67616C666F6E6F6D:
		switch(wp[1]){
		case 0x00006574616C6C65:return 1;
		default:return 0;
		}
	case 0x67616C666F78796D:
		switch(wp[1]){
		case 0x00006574616C6C65:return 1;
		default:return 0;
		}
	case 0x67616C6974726163:
		switch(wp[1]){
		case 0x000073756F656E69:return 1;
		default:return 0;
		}
	case 0x67616C7068637261:
		switch(wp[1]){
		case 0x0000747369726169:return 1;
		default:return 0;
		}
	case 0x67616C706F747561:
		switch(wp[1]){
		case 0x00006D7369726169:return 1;
		default:return 0;
		}
	case 0x67616D6F72647968:
		switch(wp[1]){
		case 0x000065746973656E:return 1;
		default:return 0;
		}
	case 0x67616D6F72726566:
		switch(wp[1]){
		case 0x00006D736974656E:return 1;
		case 0x00006E616973656E:return 1;
		default:return 0;
		}
	case 0x67616D6F7274696E:
		switch(wp[1]){
		case 0x000065746973656E:return 1;
		default:return 0;
		}
	case 0x67616D6F746F6870:
		switch(wp[1]){
		case 0x00006D736974656E:return 1;
		default:return 0;
		}
	case 0x67616D6F746F7270:
		switch(wp[1]){
		case 0x00006D756973656E:return 1;
		default:return 0;
		}
	case 0x67616E616574736F:
		switch(wp[1]){
		case 0x0000736973656E65:return 1;
		default:return 0;
		}
	case 0x67616E616C656F63:
		switch(wp[1]){
		case 0x000063696870796C:return 1;
		default:return 0;
		}
	case 0x67616E616C696F6B:
		switch(wp[1]){
		case 0x000063696870796C:return 1;
		default:return 0;
		}
	case 0x67616F63696D6573:
		switch(wp[1]){
		case 0x0000646574616C75:return 1;
		default:return 0;
		}
	case 0x67616F7470797263:
		switch(wp[1]){
		case 0x0000636974736F6E:return 1;
		default:return 0;
		}
	case 0x6761726669786173:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x6761727069746E61:
		switch(wp[1]){
		case 0x000074736974616D:return 1;
		default:return 0;
		}
	case 0x67617270796C6F70:
		switch(wp[1]){
		case 0x00006D736974616D:return 1;
		case 0x00007473696E6F6D:return 1;
		case 0x000074736974616D:return 1;
		default:return 0;
		}
	case 0x6761737265707573:
		switch(wp[1]){
		case 0x000073756F696361:return 1;
		default:return 0;
		}
	case 0x6761746E61766461:
		switch(wp[1]){
		case 0x0000796C73756F65:return 1;
		default:return 0;
		}
	case 0x67617473696D6573:
		switch(wp[1]){
		case 0x00006E6F6974616E:return 1;
		default:return 0;
		}
	case 0x676175716E697571:
		switch(wp[1]){
		case 0x00006C616D697365:return 1;
		default:return 0;
		}
	case 0x6761766F646E6574:
		switch(wp[1]){
		case 0x0000736974696E69:return 1;
		default:return 0;
		}
	case 0x6761766F766C7576:
		switch(wp[1]){
		case 0x0000736974696E69:return 1;
		default:return 0;
		}
	case 0x6761767968636170:
		switch(wp[1]){
		case 0x0000736974696E69:return 1;
		default:return 0;
		}
	case 0x6764697274726170:
		switch(wp[1]){
		case 0x0000797272656265:return 1;
		default:return 0;
		}
	case 0x67656C6574657270:
		switch(wp[1]){
		case 0x0000636968706172:return 1;
		default:return 0;
		}
	case 0x67656C65746E6F6E:
		switch(wp[1]){
		case 0x0000636968706172:return 1;
		default:return 0;
		}
	case 0x67656C6972636173:
		switch(wp[1]){
		case 0x0000796C73756F69:return 1;
		default:return 0;
		}
	case 0x67656C6C616E6F6E:
		switch(wp[1]){
		case 0x00006C616369726F:return 1;
		default:return 0;
		}
	case 0x67656E6172746C75:
		switch(wp[1]){
		case 0x0000746E6567696C:return 1;
		default:return 0;
		}
	case 0x67656E7265707573:
		switch(wp[1]){
		case 0x0000746E6567696C:return 1;
		default:return 0;
		}
	case 0x6765706F7263696D:
		switch(wp[1]){
		case 0x000065746974616D:return 1;
		default:return 0;
		}
	case 0x6765726172747865:
		switch(wp[1]){
		case 0x0000676E69647261:return 1;
		case 0x0000796C72616C75:return 1;
		default:return 0;
		}
	case 0x6765736172707573:
		switch(wp[1]){
		case 0x00006C61746E656D:return 1;
		default:return 0;
		}
	case 0x6765736172746E69:
		switch(wp[1]){
		case 0x00006C61746E656D:return 1;
		default:return 0;
		}
	case 0x67657369746C756D:
		switch(wp[1]){
		case 0x00006465746E656D:return 1;
		case 0x00006C61746E656D:return 1;
		default:return 0;
		}
	case 0x6765737265746E69:
		switch(wp[1]){
		case 0x00006C61746E656D:return 1;
		default:return 0;
		}
	case 0x676573736E617274:
		switch(wp[1]){
		case 0x00006C61746E656D:return 1;
		default:return 0;
		}
	case 0x67657461636E6F6E:
		switch(wp[1]){
		case 0x00006C616369726F:return 1;
		default:return 0;
		}
	case 0x6765746E69646572:
		switch(wp[1]){
		case 0x0000657669746172:return 1;
		case 0x00006E6F69746172:return 1;
		default:return 0;
		}
	case 0x6765746E69736964:
		switch(wp[1]){
		case 0x0000657669746172:return 1;
		case 0x00006E6F69746172:return 1;
		case 0x000079726F746172:return 1;
		default:return 0;
		}
	case 0x67676F646C6C7562:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x6767756A6F747561:
		switch(wp[1]){
		case 0x00007475616E7265:return 1;
		default:return 0;
		}
	case 0x676775736F747561:
		switch(wp[1]){
		case 0x0000657669747365:return 1;
		case 0x00006E6F69747365:return 1;
		default:return 0;
		}
	case 0x676867756F726874:
		switch(wp[1]){
		case 0x0000676E69676E61:return 1;
		default:return 0;
		}
	case 0x6769617274736E75:
		switch(wp[1]){
		case 0x000064656E657468:return 1;
		case 0x00007373656E7468:return 1;
		default:return 0;
		}
	case 0x6769646172746C75:
		switch(wp[1]){
		case 0x000064656966696E:return 1;
		default:return 0;
		}
	case 0x6769646E75636573:
		switch(wp[1]){
		case 0x0000616469766172:return 1;
		default:return 0;
		}
	case 0x676968746F6C6C61:
		switch(wp[1]){
		case 0x0000636974656E65:return 1;
		default:return 0;
		}
	case 0x67696C6572726F63:
		switch(wp[1]){
		case 0x00007473696E6F69:return 1;
		default:return 0;
		}
	case 0x67696C6C65746E69:
		switch(wp[1]){
		case 0x0000616973746E65:return 1;
		case 0x00006C6169746E65:return 1;
		default:return 0;
		}
	case 0x67696D6D69657270:
		switch(wp[1]){
		case 0x00006E6F69746172:return 1;
		default:return 0;
		}
	case 0x67696D6D696E6F6E:
		switch(wp[1]){
		case 0x00006E6F69746172:return 1;
		default:return 0;
		}
	case 0x67696D6F72746572:
		switch(wp[1]){
		case 0x00006E6F69746172:return 1;
		default:return 0;
		}
	case 0x67696D7265746E69:
		switch(wp[1]){
		case 0x00006E6F69746172:return 1;
		default:return 0;
		}
	case 0x67696D736E617274:
		switch(wp[1]){
		case 0x0000657669746172:return 1;
		case 0x00006E6F69746172:return 1;
		case 0x000079726F746172:return 1;
		default:return 0;
		}
	case 0x6769707265707968:
		switch(wp[1]){
		case 0x00006465746E656D:return 1;
		default:return 0;
		}
	case 0x676972627265766F:
		switch(wp[1]){
		case 0x00007373656E7468:return 1;
		default:return 0;
		}
	case 0x6769726665726E75:
		switch(wp[1]){
		case 0x0000646574617265:return 1;
		default:return 0;
		}
	case 0x6769726666616E75:
		switch(wp[1]){
		case 0x0000796C64657468:return 1;
		default:return 0;
		}
	case 0x6769726874726F66:
		switch(wp[1]){
		case 0x00007373656E7468:return 1;
		default:return 0;
		}
	case 0x6769727265707573:
		switch(wp[1]){
		case 0x000073756F657468:return 1;
		default:return 0;
		}
	case 0x676972746F6E6F6D:
		switch(wp[1]){
		case 0x000063696870796C:return 1;
		default:return 0;
		}
	case 0x6769736564657270:
		switch(wp[1]){
		case 0x00006E6F6974616E:return 1;
		case 0x000079726F74616E:return 1;
		default:return 0;
		}
	case 0x67697365726E6F6E:
		switch(wp[1]){
		case 0x00006E6F6974616E:return 1;
		default:return 0;
		}
	case 0x67697365726F7270:
		switch(wp[1]){
		case 0x00006E6F6974616E:return 1;
		default:return 0;
		}
	case 0x6769737265646E75:
		switch(wp[1]){
		case 0x00006E616D6C616E:return 1;
		default:return 0;
		}
	case 0x67697374726F6873:
		switch(wp[1]){
		case 0x0000796C64657468:return 1;
		default:return 0;
		}
	case 0x6769746D61657473:
		switch(wp[1]){
		case 0x00007373656E7468:return 1;
		default:return 0;
		}
	case 0x6769747265746177:
		switch(wp[1]){
		case 0x00007373656E7468:return 1;
		default:return 0;
		}
	case 0x6769747365766E69:
		switch(wp[1]){
		case 0x0000656C62617461:return 1;
		default:return 0;
		}
	case 0x676C616D616E6F6E:
		switch(wp[1]){
		case 0x0000656C62616D61:return 1;
		default:return 0;
		}
	case 0x676C796F7A6E6562:
		switch(wp[1]){
		case 0x0000656E6963796C:return 1;
		default:return 0;
		}
	case 0x676E616769726570:
		switch(wp[1]){
		case 0x000063696E6F696C:return 1;
		case 0x000073697469696C:return 1;
		default:return 0;
		}
	case 0x676E61676F6E6F6D:
		switch(wp[1]){
		case 0x000063696E6F696C:return 1;
		default:return 0;
		}
	case 0x676E616774736F70:
		switch(wp[1]){
		case 0x000063696E6F696C:return 1;
		default:return 0;
		}
	case 0x676E6167796C6F70:
		switch(wp[1]){
		case 0x000063696E6F696C:return 1;
		default:return 0;
		}
	case 0x676E6168706D796C:
		switch(wp[1]){
		case 0x000079676F6C6F69:return 1;
		case 0x0000796D6F746F69:return 1;
		default:return 0;
		}
	case 0x676E617264617571:
		switch(wp[1]){
		case 0x0000796C72616C75:return 1;
		default:return 0;
		}
	case 0x676E617265707573:
		switch(wp[1]){
		case 0x00006C6163696C65:return 1;
		default:return 0;
		}
	case 0x676E617265707968:
		switch(wp[1]){
		case 0x00006C6163696C65:return 1;
		default:return 0;
		}
	case 0x676E617274736E75:
		switch(wp[1]){
		case 0x0000656C62616C75:return 1;
		default:return 0;
		}
	case 0x676E61737265766F:
		switch(wp[1]){
		case 0x0000796C656E6975:return 1;
		default:return 0;
		}
	case 0x676E617469757165:
		switch(wp[1]){
		case 0x00006C6169746E65:return 1;
		default:return 0;
		}
	case 0x676E61746E656E75:
		switch(wp[1]){
		case 0x0000656C6261656C:return 1;
		case 0x0000746E656D656C:return 1;
		default:return 0;
		}
	case 0x676E6176656E6F6E:
		switch(wp[1]){
		case 0x00006C6163696C65:return 1;
		default:return 0;
		}
	case 0x676E656F696C6568:
		switch(wp[1]){
		case 0x0000676E69766172:return 1;
		default:return 0;
		}
	case 0x676E656F746F6870:
		switch(wp[1]){
		case 0x0000676E69766172:return 1;
		default:return 0;
		}
	case 0x676E657274736E75:
		switch(wp[1]){
		case 0x000064656E656874:return 1;
		default:return 0;
		}
	case 0x676E696172746C75:
		switch(wp[1]){
		case 0x000073756F696E65:return 1;
		default:return 0;
		}
	case 0x676E696C6174656D:
		switch(wp[1]){
		case 0x0000636974736975:return 1;
		default:return 0;
		}
	case 0x676E696C6C696873:
		switch(wp[1]){
		case 0x00006874726F7773:return 1;
		default:return 0;
		}
	case 0x676E697265707573:
		switch(wp[1]){
		case 0x000073756F696E65:return 1;
		case 0x0000797469756E65:return 1;
		default:return 0;
		}
	case 0x676E697265707968:
		switch(wp[1]){
		case 0x0000797469756E65:return 1;
		default:return 0;
		}
	case 0x676E697478656E75:
		switch(wp[1]){
		case 0x0000646568736975:return 1;
		default:return 0;
		}
	case 0x676F626D65736964:
		switch(wp[1]){
		case 0x0000746E656D6575:return 1;
		default:return 0;
		}
	case 0x676F636572657270:
		switch(wp[1]){
		case 0x00006E6F6974696E:return 1;
		default:return 0;
		}
	case 0x676F6365726E6F6E:
		switch(wp[1]){
		case 0x00006E6F6974696E:return 1;
		default:return 0;
		}
	case 0x676F6365726F7270:
		switch(wp[1]){
		case 0x00006E6F6974696E:return 1;
		default:return 0;
		}
	case 0x676F63657273696D:
		switch(wp[1]){
		case 0x00006E6F6974696E:return 1;
		default:return 0;
		}
	case 0x676F636F72746572:
		switch(wp[1]){
		case 0x000065766974696E:return 1;
		case 0x00006E6F6974696E:return 1;
		default:return 0;
		}
	case 0x676F646970696872:
		switch(wp[1]){
		case 0x00006C6173736F6C:return 1;
		default:return 0;
		}
	case 0x676F656168637261:
		switch(wp[1]){
		case 0x0000636968706172:return 1;
		case 0x000079676F6C6F65:return 1;
		default:return 0;
		}
	case 0x676F657361726870:
		switch(wp[1]){
		case 0x0000636968706172:return 1;
		default:return 0;
		}
	case 0x676F666974746570:
		switch(wp[1]){
		case 0x000072657A696C75:return 1;
		default:return 0;
		}
	case 0x676F67617473796D:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x676F687272696373:
		switch(wp[1]){
		case 0x0000616972747361:return 1;
		default:return 0;
		}
	case 0x676F6874726F6E61:
		switch(wp[1]){
		case 0x0000636968706172:return 1;
		default:return 0;
		}
	case 0x676F68747369706F:
		switch(wp[1]){
		case 0x0000636968706172:return 1;
		case 0x000063696870796C:return 1;
		case 0x0000636972747361:return 1;
		case 0x00006C6168706172:return 1;
		case 0x00006C6173736F6C:return 1;
		default:return 0;
		}
	case 0x676F69626F747561:
		switch(wp[1]){
		case 0x0000636968706172:return 1;
		case 0x00006C6168706172:return 1;
		case 0x0000726568706172:return 1;
		default:return 0;
		}
	case 0x676F696469736162:
		switch(wp[1]){
		case 0x0000636974656E65:return 1;
		default:return 0;
		}
	case 0x676F696D61726170:
		switch(wp[1]){
		case 0x0000726568706172:return 1;
		default:return 0;
		}
	case 0x676F696D72657073:
		switch(wp[1]){
		case 0x0000736973656E65:return 1;
		default:return 0;
		}
	case 0x676F697265747261:
		switch(wp[1]){
		case 0x0000736973656E65:return 1;
		default:return 0;
		}
	case 0x676F697365726568:
		switch(wp[1]){
		case 0x0000726568706172:return 1;
		default:return 0;
		}
	case 0x676F6C61656E6567:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x676F6C6168706563:
		switch(wp[1]){
		case 0x0000736973656E65:return 1;
		default:return 0;
		}
	case 0x676F6C6968707973:
		switch(wp[1]){
		case 0x0000726568706172:return 1;
		case 0x0000736973656E65:return 1;
		default:return 0;
		}
	case 0x676F6C6C6174656D:
		switch(wp[1]){
		case 0x0000636968706172:return 1;
		case 0x0000636974656E65:return 1;
		case 0x0000726568706172:return 1;
		default:return 0;
		}
	case 0x676F6C6C6963736F:
		switch(wp[1]){
		case 0x0000636968706172:return 1;
		default:return 0;
		}
	case 0x676F6C6C69676973:
		switch(wp[1]){
		case 0x0000726568706172:return 1;
		default:return 0;
		}
	case 0x676F6C6F65687461:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x676F6C6F656C6574:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x676F6C6F6574736F:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x676F6C6F68746170:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x676F6C6F6874696C:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x676F6C6F68746E61:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x676F6C6F6874796D:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x676F6C6F69636F73:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x676F6C6F69727563:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x676F6C6F6C696870:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x676F6C6F6D736F63:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x676F6C6F6D797465:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x676F6C6F6E656461:
		switch(wp[1]){
		case 0x0000736974696461:return 1;
		default:return 0;
		}
	case 0x676F6C6F6E656870:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x676F6C6F6E687465:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x676F6C6F6E6D696C:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x676F6C6F6E6D7968:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x676F6C6F6E6F6870:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x676F6C6F706F7274:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x676F6C6F70726163:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x676F6C6F7263656E:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x676F6C6F7263696D:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x676F6C6F72647968:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x676F6C6F72696863:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x676F6C6F72746570:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x676F6C6F72747361:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x676F6C6F74736968:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x676F6C6F74756174:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x676F6C6F74796870:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x676F6C6F7972616B:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x676F6C7563736176:
		switch(wp[1]){
		case 0x0000736973656E65:return 1;
		default:return 0;
		}
	case 0x676F6C7972657470:
		switch(wp[1]){
		case 0x0000636968706172:return 1;
		default:return 0;
		}
	case 0x676F6C7974636164:
		switch(wp[1]){
		case 0x0000636968706172:return 1;
		default:return 0;
		}
	case 0x676F6D6779687073:
		switch(wp[1]){
		case 0x0000636968706172:return 1;
		default:return 0;
		}
	case 0x676F6D6F686E6F6E:
		switch(wp[1]){
		case 0x000073756F656E65:return 1;
		case 0x0000797469656E65:return 1;
		default:return 0;
		}
	case 0x676F6D736E617274:
		switch(wp[1]){
		case 0x0000726569666972:return 1;
		default:return 0;
		}
	case 0x676F6E617370696C:
		switch(wp[1]){
		case 0x0000726568706172:return 1;
		default:return 0;
		}
	case 0x676F6E61766C6167:
		switch(wp[1]){
		case 0x0000636968706172:return 1;
		default:return 0;
		}
	case 0x676F6E656863696C:
		switch(wp[1]){
		case 0x0000636968706172:return 1;
		case 0x0000726568706172:return 1;
		default:return 0;
		}
	case 0x676F6E6963726163:
		switch(wp[1]){
		case 0x0000736973656E65:return 1;
		default:return 0;
		}
	case 0x676F6E696C65796D:
		switch(wp[1]){
		case 0x0000636974656E65:return 1;
		case 0x0000736973656E65:return 1;
		default:return 0;
		}
	case 0x676F6E696D697263:
		switch(wp[1]){
		case 0x0000736973656E65:return 1;
		default:return 0;
		}
	case 0x676F6E696D756C61:
		switch(wp[1]){
		case 0x0000636968706172:return 1;
		default:return 0;
		}
	case 0x676F6E6972626966:
		switch(wp[1]){
		case 0x0000636974656E65:return 1;
		default:return 0;
		}
	case 0x676F6E6F68706973:
		switch(wp[1]){
		case 0x000064696874616E:return 1;
		default:return 0;
		}
	case 0x676F6E6F68706E75:
		switch(wp[1]){
		case 0x0000646568706172:return 1;
		default:return 0;
		}
	case 0x676F6E6F68746974:
		switch(wp[1]){
		case 0x0000636968706172:return 1;
		default:return 0;
		}
	case 0x676F6E6F6D726F68:
		switch(wp[1]){
		case 0x0000736973656E65:return 1;
		default:return 0;
		}
	case 0x676F6E756172656B:
		switch(wp[1]){
		case 0x0000636968706172:return 1;
		default:return 0;
		}
	case 0x676F726170796872:
		switch(wp[1]){
		case 0x0000636968706172:return 1;
		case 0x0000726568706172:return 1;
		default:return 0;
		}
	case 0x676F72646E6F6863:
		switch(wp[1]){
		case 0x0000636974656E65:return 1;
		case 0x00006C6173736F6C:return 1;
		case 0x0000736973656E65:return 1;
		case 0x0000737573736F6C:return 1;
		default:return 0;
		}
	case 0x676F726479686E61:
		switch(wp[1]){
		case 0x000065736F636F6C:return 1;
		default:return 0;
		}
	case 0x676F726563796C67:
		switch(wp[1]){
		case 0x00006E6974616C65:return 1;
		default:return 0;
		}
	case 0x676F72656D737964:
		switch(wp[1]){
		case 0x0000636974656E65:return 1;
		case 0x0000736973656E65:return 1;
		default:return 0;
		}
	case 0x676F72656E616870:
		switch(wp[1]){
		case 0x0000636974656E65:return 1;
		case 0x00006C6173736F6C:return 1;
		default:return 0;
		}
	case 0x676F726574657275:
		switch(wp[1]){
		case 0x00006C6174696E65:return 1;
		default:return 0;
		}
	case 0x676F7265746F7270:
		switch(wp[1]){
		case 0x000063696870796C:return 1;
		default:return 0;
		}
	case 0x676F726574737968:
		switch(wp[1]){
		case 0x0000636974656E65:return 1;
		default:return 0;
		}
	case 0x676F726874657275:
		switch(wp[1]){
		case 0x00006C6174696E65:return 1;
		default:return 0;
		}
	case 0x676F726874797265:
		switch(wp[1]){
		case 0x0000736973656E65:return 1;
		default:return 0;
		}
	case 0x676F726F6574656D:
		switch(wp[1]){
		case 0x0000636968706172:return 1;
		default:return 0;
		}
	case 0x676F72706F73616E:
		switch(wp[1]){
		case 0x000063696874616E:return 1;
		default:return 0;
		}
	case 0x676F727463656C65:
		switch(wp[1]){
		case 0x0000636968706172:return 1;
		case 0x0000636974656E65:return 1;
		case 0x0000676E69646C69:return 1;
		case 0x0000736973656E65:return 1;
		default:return 0;
		}
	case 0x676F727463657073:
		switch(wp[1]){
		case 0x0000636968706172:return 1;
		default:return 0;
		}
	case 0x676F7274696E6E75:
		switch(wp[1]){
		case 0x000064657A696E65:return 1;
		default:return 0;
		}
	case 0x676F736F70696461:
		switch(wp[1]){
		case 0x00006C6174696E65:return 1;
		default:return 0;
		}
	case 0x676F74616D6F7473:
		switch(wp[1]){
		case 0x0000636972747361:return 1;
		default:return 0;
		}
	case 0x676F74616D726564:
		switch(wp[1]){
		case 0x0000616968706172:return 1;
		default:return 0;
		}
	case 0x676F74616E616874:
		switch(wp[1]){
		case 0x0000726568706172:return 1;
		default:return 0;
		}
	case 0x676F7463616C6167:
		switch(wp[1]){
		case 0x0000636974656E65:return 1;
		default:return 0;
		}
	case 0x676F74656E67616D:
		switch(wp[1]){
		case 0x0000636968706172:return 1;
		default:return 0;
		}
	case 0x676F746F68706E75:
		switch(wp[1]){
		case 0x0000646568706172:return 1;
		default:return 0;
		}
	case 0x676F747369686373:
		switch(wp[1]){
		case 0x0000616973736F6C:return 1;
		default:return 0;
		}
	case 0x676F74736F726761:
		switch(wp[1]){
		case 0x0000636968706172:return 1;
		case 0x0000726568706172:return 1;
		default:return 0;
		}
	case 0x676F7475616C6574:
		switch(wp[1]){
		case 0x0000636968706172:return 1;
		default:return 0;
		}
	case 0x676F7475616D6568:
		switch(wp[1]){
		case 0x0000636968706172:return 1;
		default:return 0;
		}
	case 0x676F7968706D7973:
		switch(wp[1]){
		case 0x0000636974656E65:return 1;
		case 0x0000736973656E65:return 1;
		default:return 0;
		}
	case 0x676F796874686369:
		switch(wp[1]){
		case 0x0000616968706172:return 1;
		case 0x0000636968706172:return 1;
		case 0x0000726568706172:return 1;
		default:return 0;
		}
	case 0x67726F7369646E75:
		switch(wp[1]){
		case 0x000064657A696E61:return 1;
		default:return 0;
		}
	case 0x6772756765726E75:
		switch(wp[1]){
		case 0x0000646574617469:return 1;
		default:return 0;
		}
	case 0x6772757078656E75:
		switch(wp[1]){
		case 0x0000796C64657461:return 1;
		default:return 0;
		}
	case 0x67736E6172746E75:
		switch(wp[1]){
		case 0x0000646573736572:return 1;
		default:return 0;
		}
	case 0x6775616C736E616D:
		switch(wp[1]){
		case 0x0000726572657468:return 1;
		default:return 0;
		}
	case 0x6779786F696D6573:
		switch(wp[1]){
		case 0x0000646574616E65:return 1;
		case 0x000064657A696E65:return 1;
		default:return 0;
		}
	case 0x6779786F69746E61:
		switch(wp[1]){
		case 0x0000726F74616E65:return 1;
		default:return 0;
		}
	case 0x67797A6F6C75636F:
		switch(wp[1]){
		case 0x0000636974616D6F:return 1;
		default:return 0;
		}
	case 0x6863616D6F696373:
		switch(wp[1]){
		case 0x000079676F6C6F69:return 1;
		default:return 0;
		}
	case 0x6863617261627573:
		switch(wp[1]){
		case 0x00006C6164696F6E:return 1;
		default:return 0;
		}
	case 0x6863617268746E61:
		switch(wp[1]){
		case 0x0000656E6F737972:return 1;
		default:return 0;
		}
	case 0x68636174616D6568:
		switch(wp[1]){
		case 0x0000726574656D6F:return 1;
		case 0x0000797274656D6F:return 1;
		default:return 0;
		}
	case 0x686361746F6D6568:
		switch(wp[1]){
		case 0x0000726574656D6F:return 1;
		default:return 0;
		}
	case 0x6863656D696D6573:
		switch(wp[1]){
		case 0x00006C6163696E61:return 1;
		default:return 0;
		}
	case 0x6863656D6F726561:
		switch(wp[1]){
		case 0x00006C6163696E61:return 1;
		default:return 0;
		}
	case 0x6863656D6F747561:
		switch(wp[1]){
		case 0x00006C6163696E61:return 1;
		default:return 0;
		}
	case 0x686365746F727970:
		switch(wp[1]){
		case 0x00006E616963696E:return 1;
		default:return 0;
		}
	case 0x68636972746F6C75:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x6863697370726168:
		switch(wp[1]){
		case 0x000074736964726F:return 1;
		default:return 0;
		}
	case 0x6863697571736573:
		switch(wp[1]){
		case 0x0000656469726F6C:return 1;
		default:return 0;
		}
	case 0x68636E61626F726F:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x68636E6172666E65:
		switch(wp[1]){
		case 0x0000656C62617369:return 1;
		default:return 0;
		}
	case 0x68636E656C6C6F63:
		switch(wp[1]){
		case 0x0000636974616D79:return 1;
		default:return 0;
		}
	case 0x68636E79736E6F6E:
		switch(wp[1]){
		case 0x000073756F6E6F72:return 1;
		default:return 0;
		}
	case 0x68636F636974706F:
		switch(wp[1]){
		case 0x00006C6163696D65:return 1;
		default:return 0;
		}
	case 0x68636F6475657370:
		switch(wp[1]){
		case 0x00006C6163696D65:return 1;
		case 0x00006D73696E6F72:return 1;
		default:return 0;
		}
	case 0x68636F656F6D6F68:
		switch(wp[1]){
		case 0x000073756F6E6F72:return 1;
		default:return 0;
		}
	case 0x68636F6572657473:
		switch(wp[1]){
		case 0x00006C6163696D65:return 1;
		default:return 0;
		}
	case 0x68636F68706C7573:
		switch(wp[1]){
		case 0x0000656469726F6C:return 1;
		default:return 0;
		}
	case 0x68636F6973796870:
		switch(wp[1]){
		case 0x00006C6163696D65:return 1;
		default:return 0;
		}
	case 0x68636F6D72656874:
		switch(wp[1]){
		case 0x00006C6163696D65:return 1;
		default:return 0;
		}
	case 0x68636F6E6167726F:
		switch(wp[1]){
		case 0x00006D756964726F:return 1;
		default:return 0;
		}
	case 0x68636F6E68636574:
		switch(wp[1]){
		case 0x00006C6163696D65:return 1;
		default:return 0;
		}
	case 0x68636F6E696D6D61:
		switch(wp[1]){
		case 0x0000656469726F6C:return 1;
		default:return 0;
		}
	case 0x68636F6E69746572:
		switch(wp[1]){
		case 0x000064696F69726F:return 1;
		default:return 0;
		}
	case 0x68636F7265746568:
		switch(wp[1]){
		case 0x00006D73696E6F72:return 1;
		case 0x000073756F6D6F72:return 1;
		case 0x000073756F6E6F72:return 1;
		default:return 0;
		}
	case 0x68636F7379726863:
		switch(wp[1]){
		case 0x000073756F726F6C:return 1;
		default:return 0;
		}
	case 0x68636F74616D6568:
		switch(wp[1]){
		case 0x0000616972756C79:return 1;
		default:return 0;
		}
	case 0x68636F7473616C70:
		switch(wp[1]){
		case 0x0000616972646E6F:return 1;
		default:return 0;
		}
	case 0x6863726165736E75:
		switch(wp[1]){
		case 0x0000656B696C7265:return 1;
		default:return 0;
		}
	case 0x6863726167696C6F:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x6863726172656968:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x6863727568636F63:
		switch(wp[1]){
		case 0x00006E6564726177:return 1;
		default:return 0;
		}
	case 0x68637369646E6F6E:
		switch(wp[1]){
		case 0x0000676E69677261:return 1;
		default:return 0;
		}
	case 0x686373696D6E6F6E:
		switch(wp[1]){
		case 0x000073756F766569:return 1;
		default:return 0;
		}
	case 0x6863736F72707563:
		switch(wp[1]){
		case 0x00006574696C6565:return 1;
		default:return 0;
		}
	case 0x6863737265707573:
		switch(wp[1]){
		case 0x0000796C72616C6F:return 1;
		default:return 0;
		}
	case 0x6863746566726166:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x686375617263616D:
		switch(wp[1]){
		case 0x000064696F696E65:return 1;
		default:return 0;
		}
	case 0x6863796E6F697274:
		switch(wp[1]){
		case 0x00006E616564696F:return 1;
		default:return 0;
		}
	case 0x6865727070616572:
		switch(wp[1]){
		case 0x00006E6F69736E65:return 1;
		default:return 0;
		}
	case 0x6865727070616E69:
		switch(wp[1]){
		case 0x0000657669736E65:return 1;
		case 0x00006E6F69736E65:return 1;
		default:return 0;
		}
	case 0x6865727070616E75:
		switch(wp[1]){
		case 0x0000657669736E65:return 1;
		case 0x0000676E69646E65:return 1;
		case 0x00006E6F69736E65:return 1;
		default:return 0;
		}
	case 0x6867696C65646E75:
		switch(wp[1]){
		case 0x0000796C6C756674:return 1;
		default:return 0;
		}
	case 0x6867696C6E656E75:
		switch(wp[1]){
		case 0x0000676E696E6574:return 1;
		default:return 0;
		}
	case 0x68676E696C6C6977:
		switch(wp[1]){
		case 0x0000646574726165:return 1;
		default:return 0;
		}
	case 0x6867756F68746E75:
		switch(wp[1]){
		case 0x0000796C6C756674:return 1;
		default:return 0;
		}
	case 0x6867756F726F6874:
		switch(wp[1]){
		case 0x0000686374697473:return 1;
		case 0x00006874776F7267:return 1;
		default:return 0;
		}
	case 0x686E616F7A616964:
		switch(wp[1]){
		case 0x0000656469726479:return 1;
		default:return 0;
		}
	case 0x686E61726F6C6863:
		switch(wp[1]){
		case 0x0000656469726479:return 1;
		default:return 0;
		}
	case 0x686E656874726165:
		switch(wp[1]){
		case 0x0000646574726165:return 1;
		default:return 0;
		}
	case 0x686E656B63696863:
		switch(wp[1]){
		case 0x0000646574726165:return 1;
		default:return 0;
		}
	case 0x686E697369646E75:
		switch(wp[1]){
		case 0x0000646574697265:return 1;
		default:return 0;
		}
	case 0x686F6361726F6874:
		switch(wp[1]){
		case 0x00006C6172656D75:return 1;
		default:return 0;
		}
	case 0x686F636976726563:
		switch(wp[1]){
		case 0x00006C6172656D75:return 1;
		default:return 0;
		}
	case 0x686F696D6F726361:
		switch(wp[1]){
		case 0x00006C6172656D75:return 1;
		default:return 0;
		}
	case 0x686F696E69746361:
		switch(wp[1]){
		case 0x00006E6974616D65:return 1;
		default:return 0;
		}
	case 0x686F6C6168706563:
		switch(wp[1]){
		case 0x00006C6172656D75:return 1;
		default:return 0;
		}
	case 0x686F6C6379636962:
		switch(wp[1]){
		case 0x0000656E61747065:return 1;
		default:return 0;
		}
	case 0x686F6C7570616373:
		switch(wp[1]){
		case 0x00006C6172656D75:return 1;
		default:return 0;
		}
	case 0x686F747261746574:
		switch(wp[1]){
		case 0x00006D7369726465:return 1;
		default:return 0;
		}
	case 0x6870616D73616C70:
		switch(wp[1]){
		case 0x0000736973657265:return 1;
		default:return 0;
		}
	case 0x6870617267697065:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x68706172676F6567:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x68706172676F6962:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x68706172676F6F7A:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x68706172676F726F:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x68706172676F7369:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x68706174656D6E75:
		switch(wp[1]){
		case 0x00006C616369726F:return 1;
		case 0x00006C6163697379:return 1;
		default:return 0;
		}
	case 0x6870656E6F73656D:
		switch(wp[1]){
		case 0x00006D7569646972:return 1;
		default:return 0;
		}
	case 0x6870656E6F746365:
		switch(wp[1]){
		case 0x00006D7569646972:return 1;
		default:return 0;
		}
	case 0x6870696365646E69:
		switch(wp[1]){
		case 0x0000656C62617265:return 1;
		case 0x0000796C62617265:return 1;
		default:return 0;
		}
	case 0x6870696365646E75:
		switch(wp[1]){
		case 0x0000656C62617265:return 1;
		case 0x0000796C62617265:return 1;
		default:return 0;
		}
	case 0x6870696469746E61:
		switch(wp[1]){
		case 0x0000616972656874:return 1;
		case 0x0000636972656874:return 1;
		case 0x00006E6972656874:return 1;
		default:return 0;
		}
	case 0x6870696474736F70:
		switch(wp[1]){
		case 0x0000636972656874:return 1;
		default:return 0;
		}
	case 0x6870697264617571:
		switch(wp[1]){
		case 0x000073756F6C6C79:return 1;
		default:return 0;
		}
	case 0x68706D656E656461:
		switch(wp[1]){
		case 0x0000636974636172:return 1;
		default:return 0;
		}
	case 0x68706F63616C616D:
		switch(wp[1]){
		case 0x000073756F6C6C79:return 1;
		default:return 0;
		}
	case 0x68706F636964656D:
		switch(wp[1]){
		case 0x00006C6163697379:return 1;
		default:return 0;
		}
	case 0x68706F6369687465:
		switch(wp[1]){
		case 0x00006C6163697379:return 1;
		default:return 0;
		}
	case 0x68706F636973756D:
		switch(wp[1]){
		case 0x00006C6163697379:return 1;
		default:return 0;
		}
	case 0x68706F636C616863:
		switch(wp[1]){
		case 0x00006574696C6C79:return 1;
		default:return 0;
		}
	case 0x68706F6375616C67:
		switch(wp[1]){
		case 0x000073756F6C6C79:return 1;
		default:return 0;
		}
	case 0x68706F646970656C:
		switch(wp[1]){
		case 0x000073756F6C6C79:return 1;
		default:return 0;
		}
	case 0x68706F656F6D6F68:
		switch(wp[1]){
		case 0x000073756F6C6C79:return 1;
		default:return 0;
		}
	case 0x68706F67616C6C61:
		switch(wp[1]){
		case 0x000073756F6C6C79:return 1;
		default:return 0;
		}
	case 0x68706F6863697274:
		switch(wp[1]){
		case 0x00007369736F7479:return 1;
		case 0x000073756F6C6C79:return 1;
		default:return 0;
		}
	case 0x68706F6863797370:
		switch(wp[1]){
		case 0x00006C6163697379:return 1;
		default:return 0;
		}
	case 0x68706F68706C7573:
		switch(wp[1]){
		case 0x000063696C616874:return 1;
		default:return 0;
		}
	case 0x68706F6870726F6D:
		switch(wp[1]){
		case 0x000063696D656E6F:return 1;
		default:return 0;
		}
	case 0x68706F6874617963:
		switch(wp[1]){
		case 0x000064696F6C6C79:return 1;
		case 0x0000656E696C6C79:return 1;
		default:return 0;
		}
	case 0x68706F68746E6178:
		switch(wp[1]){
		case 0x00006574696C6C79:return 1;
		case 0x000073756F6C6C79:return 1;
		default:return 0;
		}
	case 0x68706F6D72656874:
		switch(wp[1]){
		case 0x0000726F6870736F:return 1;
		default:return 0;
		}
	case 0x68706F6F69726570:
		switch(wp[1]){
		case 0x000073697469726F:return 1;
		default:return 0;
		}
	case 0x68706F72656C6373:
		switch(wp[1]){
		case 0x000073756F6C6C79:return 1;
		default:return 0;
		}
	case 0x68706F7265746568:
		switch(wp[1]){
		case 0x0000636974656C79:return 1;
		case 0x0000736973656C79:return 1;
		case 0x000073756F6C6C79:return 1;
		default:return 0;
		}
	case 0x68706F7265746E65:
		switch(wp[1]){
		case 0x0000736973696874:return 1;
		default:return 0;
		}
	case 0x68706F7265747361:
		switch(wp[1]){
		case 0x00006574696C6C79:return 1;
		default:return 0;
		}
	case 0x68706F726870656E:
		switch(wp[1]){
		case 0x0000736973696874:return 1;
		default:return 0;
		}
	case 0x68706F726F6C6863:
		switch(wp[1]){
		case 0x000064696F6C6C79:return 1;
		case 0x00006564696C6C79:return 1;
		case 0x00006573616C6C79:return 1;
		case 0x000065736F6C6C79:return 1;
		case 0x00006574696C6C79:return 1;
		case 0x00006E61696C6C79:return 1;
		case 0x000073756F656379:return 1;
		case 0x000073756F6C6C79:return 1;
		default:return 0;
		}
	case 0x68706F7274736167:
		switch(wp[1]){
		case 0x0000736973696874:return 1;
		default:return 0;
		}
	case 0x68706F736F656874:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x68706F7461636568:
		switch(wp[1]){
		case 0x000073756F6C6C79:return 1;
		default:return 0;
		}
	case 0x68706F7473616C62:
		switch(wp[1]){
		case 0x00006169726F6874:return 1;
		case 0x00006369726F6874:return 1;
		default:return 0;
		}
	case 0x68706F7479726162:
		switch(wp[1]){
		case 0x00006574696C6C79:return 1;
		default:return 0;
		}
	case 0x68706F7A69686373:
		switch(wp[1]){
		case 0x00006361696E6572:return 1;
		default:return 0;
		}
	case 0x6870726F6D616E61:
		switch(wp[1]){
		case 0x000065706F63736F:return 1;
		default:return 0;
		}
	case 0x6870726F6D6F6567:
		switch(wp[1]){
		case 0x000063696E65676F:return 1;
		default:return 0;
		}
	case 0x6870726F70627573:
		switch(wp[1]){
		case 0x0000636974697279:return 1;
		default:return 0;
		}
	case 0x6870726F706E6F6E:
		switch(wp[1]){
		case 0x0000636974697279:return 1;
		default:return 0;
		}
	case 0x6870736172747865:
		switch(wp[1]){
		case 0x00006C6163697265:return 1;
		default:return 0;
		}
	case 0x68707361746E6570:
		switch(wp[1]){
		case 0x00006C6163697265:return 1;
		default:return 0;
		}
	case 0x687073696E616C70:
		switch(wp[1]){
		case 0x00006C6163697265:return 1;
		default:return 0;
		}
	case 0x6870736F626F6C67:
		switch(wp[1]){
		case 0x0000657469726561:return 1;
		default:return 0;
		}
	case 0x6870736F68706E75:
		switch(wp[1]){
		case 0x000064657A697461:return 1;
		default:return 0;
		}
	case 0x6870736F6E617275:
		switch(wp[1]){
		case 0x0000657469726561:return 1;
		default:return 0;
		}
	case 0x6870736F736C6566:
		switch(wp[1]){
		case 0x0000657469726561:return 1;
		default:return 0;
		}
	case 0x6870737265707968:
		switch(wp[1]){
		case 0x00006C6163697265:return 1;
		default:return 0;
		}
	case 0x6870796C67616E61:
		switch(wp[1]){
		case 0x000065706F63736F:return 1;
		default:return 0;
		}
	case 0x68707972636F7061:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x6870797361726170:
		switch(wp[1]){
		case 0x0000636974696C69:return 1;
		case 0x00007369736F6C69:return 1;
		default:return 0;
		}
	case 0x6870797369746E61:
		switch(wp[1]){
		case 0x0000636974696C69:return 1;
		default:return 0;
		}
	case 0x6870797374736F70:
		switch(wp[1]){
		case 0x0000636974696C69:return 1;
		default:return 0;
		}
	case 0x68726569646C6F73:
		switch(wp[1]){
		case 0x0000646574726165:return 1;
		default:return 0;
		}
	case 0x68726F6863797370:
		switch(wp[1]){
		case 0x000061696D687479:return 1;
		case 0x000063696D687479:return 1;
		default:return 0;
		}
	case 0x6872726F6874726F:
		switch(wp[1]){
		case 0x000073756F687061:return 1;
		default:return 0;
		}
	case 0x6872726F6C637963:
		switch(wp[1]){
		case 0x000073756F687061:return 1;
		default:return 0;
		}
	case 0x6873656972686373:
		switch(wp[1]){
		case 0x00006574696D6965:return 1;
		default:return 0;
		}
	case 0x6873696C6F706E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x6873696E69666E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x6873696E75706E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x687372656B737568:
		switch(wp[1]){
		case 0x0000726564646572:return 1;
		default:return 0;
		}
	case 0x6874616365726F66:
		switch(wp[1]){
		case 0x0000676E69707261:return 1;
		default:return 0;
		}
	case 0x6874616670657473:
		switch(wp[1]){
		case 0x0000646F6F687265:return 1;
		default:return 0;
		}
	case 0x68746170656C6574:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x6874617069746E61:
		switch(wp[1]){
		case 0x00006C6163697465:return 1;
		default:return 0;
		}
	case 0x687461706F696469:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x687461706F6C6C61:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x687461706F747963:
		switch(wp[1]){
		case 0x00006369676F6C6F:return 1;
		default:return 0;
		}
	case 0x68746565616C6170:
		switch(wp[1]){
		case 0x000079676F6C6F6E:return 1;
		default:return 0;
		}
	case 0x687465676F746C61:
		switch(wp[1]){
		case 0x00007373656E7265:return 1;
		default:return 0;
		}
	case 0x6874656C6167656D:
		switch(wp[1]){
		case 0x000065706F63736F:return 1;
		default:return 0;
		}
	case 0x6874656D6F6E6F6D:
		switch(wp[1]){
		case 0x0000646574616C79:return 1;
		default:return 0;
		}
	case 0x6874656E65687073:
		switch(wp[1]){
		case 0x00006C6164696F6D:return 1;
		default:return 0;
		}
	case 0x6874656F656C6170:
		switch(wp[1]){
		case 0x000079676F6C6F6E:return 1;
		default:return 0;
		}
	case 0x6874657265707573:
		switch(wp[1]){
		case 0x00006C6164696F6D:return 1;
		default:return 0;
		}
	case 0x6874676E65727473:
		switch(wp[1]){
		case 0x0000796C7373656C:return 1;
		default:return 0;
		}
	case 0x6874687069646E75:
		switch(wp[1]){
		case 0x0000657A69676E6F:return 1;
		default:return 0;
		}
	case 0x6874687069746E61:
		switch(wp[1]){
		case 0x00006C6163697369:return 1;
		default:return 0;
		}
	case 0x687468706F646F70:
		switch(wp[1]){
		case 0x00006574616D6C61:return 1;
		case 0x00006574696D6C61:return 1;
		case 0x00006E61696D6C61:return 1;
		case 0x000073756F6D6C61:return 1;
		default:return 0;
		}
	case 0x687468706F6E6F6D:
		switch(wp[1]){
		case 0x0000657A69676E6F:return 1;
		default:return 0;
		}
	case 0x687468706F74636F:
		switch(wp[1]){
		case 0x000073756F6D6C61:return 1;
		default:return 0;
		}
	case 0x68746970656F6E69:
		switch(wp[1]){
		case 0x0000616D6F696C65:return 1;
		default:return 0;
		}
	case 0x68746E61696C6568:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x68746E61696C656D:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x68746E61696D6573:
		switch(wp[1]){
		case 0x0000657469636172:return 1;
		default:return 0;
		}
	case 0x68746E616C637963:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x68746E616C696870:
		switch(wp[1]){
		case 0x0000657A69706F72:return 1;
		case 0x00006D7369706F72:return 1;
		case 0x00006E6169706F72:return 1;
		case 0x0000747369706F72:return 1;
		default:return 0;
		}
	case 0x68746E616C697370:
		switch(wp[1]){
		case 0x00006D7369706F72:return 1;
		case 0x0000747369706F72:return 1;
		default:return 0;
		}
	case 0x68746E616E656870:
		switch(wp[1]){
		case 0x0000656E69646972:return 1;
		case 0x0000656E696C6F72:return 1;
		case 0x0000656E6F646972:return 1;
		default:return 0;
		}
	case 0x68746E616E6D696C:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x68746E6172616D61:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x68746E657265766F:
		switch(wp[1]){
		case 0x00006D7361697375:return 1;
		default:return 0;
		}
	case 0x68746E696D6C6568:
		switch(wp[1]){
		case 0x00006369676F6761:return 1;
		case 0x00006369676F6C6F:return 1;
		case 0x00006575676F6761:return 1;
		default:return 0;
		}
	case 0x68746E79736E6F6E:
		switch(wp[1]){
		case 0x000064657A697365:return 1;
		default:return 0;
		}
	case 0x68746F65616C6170:
		switch(wp[1]){
		case 0x000064696F697265:return 1;
		case 0x000073756D616C61:return 1;
		default:return 0;
		}
	case 0x68746F656E6C6162:
		switch(wp[1]){
		case 0x0000616970617265:return 1;
		default:return 0;
		}
	case 0x68746F696F6D6F68:
		switch(wp[1]){
		case 0x00006D73696D7265:return 1;
		case 0x000073756F6D7265:return 1;
		default:return 0;
		}
	case 0x68746F6C706F6E61:
		switch(wp[1]){
		case 0x000064696F697265:return 1;
		default:return 0;
		}
	case 0x68746F6D70657473:
		switch(wp[1]){
		case 0x0000646F6F687265:return 1;
		case 0x00007373656C7265:return 1;
		default:return 0;
		}
	case 0x68746F7079686572:
		switch(wp[1]){
		case 0x0000726F74616365:return 1;
		default:return 0;
		}
	case 0x68746F7079686E75:
		switch(wp[1]){
		case 0x0000646574616365:return 1;
		case 0x00006C6163697465:return 1;
		default:return 0;
		}
	case 0x68746F7265746568:
		switch(wp[1]){
		case 0x00006D73696C6C61:return 1;
		default:return 0;
		}
	case 0x68746F7275656C70:
		switch(wp[1]){
		case 0x000063696E6F746F:return 1;
		case 0x000073756E6F746F:return 1;
		default:return 0;
		}
	case 0x68746F746E6F646F:
		switch(wp[1]){
		case 0x0000616970617265:return 1;
		default:return 0;
		}
	case 0x68746F7A69686373:
		switch(wp[1]){
		case 0x000063696361726F:return 1;
		default:return 0;
		}
	case 0x687472616574736F:
		switch(wp[1]){
		case 0x0000796D6F746F72:return 1;
		default:return 0;
		}
	case 0x687472616C637963:
		switch(wp[1]){
		case 0x00006C6169646F72:return 1;
		default:return 0;
		}
	case 0x687473617275656E:
		switch(wp[1]){
		case 0x00006C6163696E65:return 1;
		default:return 0;
		}
	case 0x6874736F72706D65:
		switch(wp[1]){
		case 0x000063696E6F746F:return 1;
		case 0x0000736F6E6F746F:return 1;
		case 0x000073756E6F746F:return 1;
		default:return 0;
		}
	case 0x6874756F6D6D696D:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x6874796D6F656874:
		switch(wp[1]){
		case 0x00007265676F6C6F:return 1;
		default:return 0;
		}
	case 0x68776F6C6C616873:
		switch(wp[1]){
		case 0x0000646574726165:return 1;
		default:return 0;
		}
	case 0x696162736E617274:
		switch(wp[1]){
		case 0x00006E61696C616B:return 1;
		default:return 0;
		}
	case 0x69616E6E6F636572:
		switch(wp[1]){
		case 0x000065636E617373:return 1;
		default:return 0;
		}
	case 0x6961707365646E75:
		switch(wp[1]){
		case 0x0000796C676E6972:return 1;
		default:return 0;
		}
	case 0x6961726265676C61:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x6961726270756E75:
		switch(wp[1]){
		case 0x0000796C676E6964:return 1;
		default:return 0;
		}
	case 0x6961727070616572:
		switch(wp[1]){
		case 0x0000746E656D6573:return 1;
		default:return 0;
		}
	case 0x69617272616E6F6E:
		switch(wp[1]){
		case 0x0000746E656D6E67:return 1;
		default:return 0;
		}
	case 0x69617274736E6F63:
		switch(wp[1]){
		case 0x0000796C676E696E:return 1;
		default:return 0;
		}
	case 0x6961747265746E65:
		switch(wp[1]){
		case 0x0000796C676E696E:return 1;
		default:return 0;
		}
	case 0x6961757163616572:
		switch(wp[1]){
		case 0x000065636E61746E:return 1;
		default:return 0;
		}
	case 0x6961757163616E69:
		switch(wp[1]){
		case 0x000065636E61746E:return 1;
		default:return 0;
		}
	case 0x6961757163616E75:
		switch(wp[1]){
		case 0x000065636E61746E:return 1;
		case 0x0000656C6261746E:return 1;
		case 0x0000796C6465746E:return 1;
		default:return 0;
		}
	case 0x6961777265646E75:
		switch(wp[1]){
		case 0x000074616F637473:return 1;
		default:return 0;
		}
	case 0x696261686E696572:
		switch(wp[1]){
		case 0x00006E6F69746174:return 1;
		default:return 0;
		}
	case 0x696261686F636572:
		switch(wp[1]){
		case 0x00006E6F69746174:return 1;
		default:return 0;
		}
	case 0x696261726573696D:
		switch(wp[1]){
		case 0x000063697473696C:return 1;
		default:return 0;
		}
	case 0x69626D617265766F:
		switch(wp[1]){
		case 0x000064656E6F6974:return 1;
		default:return 0;
		}
	case 0x69626D6F63657270:
		switch(wp[1]){
		case 0x00006E6F6974616E:return 1;
		default:return 0;
		}
	case 0x69626D6F636E6F6E:
		switch(wp[1]){
		case 0x00006E6F6974616E:return 1;
		default:return 0;
		}
	case 0x69626D6F636F7270:
		switch(wp[1]){
		case 0x00006E6F6974616E:return 1;
		default:return 0;
		}
	case 0x69626D6F63786F63:
		switch(wp[1]){
		case 0x00007974696C6163:return 1;
		default:return 0;
		}
	case 0x69626F6863797370:
		switch(wp[1]){
		case 0x00006369676F6C6F:return 1;
		default:return 0;
		}
	case 0x69626F6D6F747561:
		switch(wp[1]){
		case 0x000063697473696C:return 1;
		default:return 0;
		}
	case 0x6962726F68707565:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x6962726F696D6573:
		switch(wp[1]){
		case 0x00006574616C7563:return 1;
		default:return 0;
		}
	case 0x696275636E697571:
		switch(wp[1]){
		case 0x00006D73696C6174:return 1;
		default:return 0;
		}
	case 0x69636162696C6F63:
		switch(wp[1]){
		case 0x00007369736F6C6C:return 1;
		default:return 0;
		}
	case 0x6963617061636E69:
		switch(wp[1]){
		case 0x00006E6F69746174:return 1;
		default:return 0;
		}
	case 0x6963617268746E61:
		switch(wp[1]){
		case 0x000073756F726566:return 1;
		default:return 0;
		}
	case 0x6963636176657270:
		switch(wp[1]){
		case 0x00006E6F6974616E:return 1;
		default:return 0;
		}
	case 0x69636361766E6F6E:
		switch(wp[1]){
		case 0x00006E6F6974616E:return 1;
		default:return 0;
		}
	case 0x69636570736E6F6E:
		switch(wp[1]){
		case 0x000064657A696C61:return 1;
		case 0x0000797469636966:return 1;
		default:return 0;
		}
	case 0x69636966656E6562:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x69636966666F6E75:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x6963696669747261:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x6963696C65666E69:
		switch(wp[1]){
		case 0x0000796C73756F74:return 1;
		default:return 0;
		}
	case 0x6963696C65666E75:
		switch(wp[1]){
		case 0x0000676E69746174:return 1;
		case 0x0000796C73756F74:return 1;
		default:return 0;
		}
	case 0x6963696C6F736E75:
		switch(wp[1]){
		case 0x0000796C73756F74:return 1;
		default:return 0;
		}
	case 0x6963696C706D6973:
		switch(wp[1]){
		case 0x00006E6169726174:return 1;
		default:return 0;
		}
	case 0x696369746E616E75:
		switch(wp[1]){
		case 0x0000657669746170:return 1;
		case 0x0000676E69746170:return 1;
		case 0x00006E6F69746170:return 1;
		default:return 0;
		}
	case 0x6963697473616C70:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x6963697473756163:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x69636D7563726963:
		switch(wp[1]){
		case 0x000065727574636E:return 1;
		default:return 0;
		}
	case 0x69636E6564657263:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x69636E6972706E75:
		switch(wp[1]){
		case 0x0000796C64656C70:return 1;
		default:return 0;
		}
	case 0x69636E69766E6F63:
		switch(wp[1]){
		case 0x00007373656E676E:return 1;
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x69636E69766F7270:
		switch(wp[1]){
		case 0x0000706968736C61:return 1;
		default:return 0;
		}
	case 0x69636E756E6F7270:
		switch(wp[1]){
		case 0x00006F746E656D61:return 1;
		default:return 0;
		}
	case 0x69636F68706C7573:
		switch(wp[1]){
		case 0x000063696D616E6E:return 1;
		default:return 0;
		}
	case 0x6963736572746976:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6963736572747570:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6963736962656C70:
		switch(wp[1]){
		case 0x00006D7369726174:return 1;
		case 0x00006E6169726174:return 1;
		default:return 0;
		}
	case 0x6963736E6F636E75:
		switch(wp[1]){
		case 0x0000656C62616E6F:return 1;
		case 0x0000796C62616E6F:return 1;
		default:return 0;
		}
	case 0x6963736F626F7270:
		switch(wp[1]){
		case 0x000064656D726F66:return 1;
		case 0x00006D726F666964:return 1;
		default:return 0;
		}
	case 0x6963736F6E676F63:
		switch(wp[1]){
		case 0x0000796C65766974:return 1;
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x696373756C6C6F6D:
		switch(wp[1]){
		case 0x000073756F726F76:return 1;
		default:return 0;
		}
	case 0x6963756465727269:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x696378656F747561:
		switch(wp[1]){
		case 0x00006E6F69746174:return 1;
		default:return 0;
		}
	case 0x696378657265766F:
		switch(wp[1]){
		case 0x0000746E656D6574:return 1;
		default:return 0;
		}
	case 0x696461656C73696D:
		switch(wp[1]){
		case 0x00007373656E676E:return 1;
		default:return 0;
		}
	case 0x69646172656C6574:
		switch(wp[1]){
		case 0x0000656E6F68706F:return 1;
		default:return 0;
		}
	case 0x6964617265707968:
		switch(wp[1]){
		case 0x0000797469736F70:return 1;
		default:return 0;
		}
	case 0x696461726F747561:
		switch(wp[1]){
		case 0x000068706172676F:return 1;
		default:return 0;
		}
	case 0x6964617274657270:
		switch(wp[1]){
		case 0x00006C616E6F6974:return 1;
		default:return 0;
		}
	case 0x69646172746E6F63:
		switch(wp[1]){
		case 0x0000656C62617463:return 1;
		case 0x000073756F697463:return 1;
		case 0x000074636E697473:return 1;
		default:return 0;
		}
	case 0x69646172746E6F6E:
		switch(wp[1]){
		case 0x00006C616E6F6974:return 1;
		default:return 0;
		}
	case 0x69646172746F7270:
		switch(wp[1]){
		case 0x00006C616E6F6974:return 1;
		default:return 0;
		}
	case 0x6964646962726F66:
		switch(wp[1]){
		case 0x00007373656E676E:return 1;
		default:return 0;
		}
	case 0x6964656D68637261:
		switch(wp[1]){
		case 0x000079746972636F:return 1;
		default:return 0;
		}
	case 0x69646572636E6F6E:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6964657270627573:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x69646572706E6F6E:
		switch(wp[1]){
		case 0x0000656C62617463:return 1;
		case 0x0000657669746163:return 1;
		default:return 0;
		}
	case 0x6964696C6F736E75:
		switch(wp[1]){
		case 0x0000656C62616966:return 1;
		default:return 0;
		}
	case 0x6964696D61736564:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x6964696F6E707968:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x6964696F72796874:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x6964697261706D69:
		switch(wp[1]){
		case 0x0000657461746967:return 1;
		default:return 0;
		}
	case 0x6964697264617571:
		switch(wp[1]){
		case 0x0000657461746967:return 1;
		default:return 0;
		}
	case 0x696469726F756C66:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x6964697274796863:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x6964697473657270:
		switch(wp[1]){
		case 0x0000657461746967:return 1;
		default:return 0;
		}
	case 0x696469786F726570:
		switch(wp[1]){
		case 0x0000746E656D657A:return 1;
		default:return 0;
		}
	case 0x69646C617A6E6562:
		switch(wp[1]){
		case 0x00006C796E656870:return 1;
		default:return 0;
		}
	case 0x69646C6569796E75:
		switch(wp[1]){
		case 0x00007373656E676E:return 1;
		default:return 0;
		}
	case 0x69646C6968636E75:
		switch(wp[1]){
		case 0x00007373656E6873:return 1;
		default:return 0;
		}
	case 0x69646E6163657270:
		switch(wp[1]){
		case 0x0000657275746164:return 1;
		default:return 0;
		}
	case 0x69646E616C74756F:
		switch(wp[1]){
		case 0x0000656B696C6873:return 1;
		case 0x00007373656E6873:return 1;
		default:return 0;
		}
	case 0x69646E616D6D6F63:
		switch(wp[1]){
		case 0x00007373656E676E:return 1;
		default:return 0;
		}
	case 0x69646E616E726568:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x69646E6172676761:
		switch(wp[1]){
		case 0x0000746E656D657A:return 1;
		default:return 0;
		}
	case 0x69646E6172676E65:
		switch(wp[1]){
		case 0x0000746E656D657A:return 1;
		default:return 0;
		}
	case 0x69646E6563736564:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x69646E6570737573:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x69646E6574657270:
		switch(wp[1]){
		case 0x00007373656E676E:return 1;
		default:return 0;
		}
	case 0x69646E69666C7573:
		switch(wp[1]){
		case 0x0000657461746F67:return 1;
		default:return 0;
		}
	case 0x69646E69766E6F6E:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x69646E6F63657270:
		switch(wp[1]){
		case 0x000064656E6F6974:return 1;
		default:return 0;
		}
	case 0x69646E6F636E6F6E:
		switch(wp[1]){
		case 0x000064656E6F6974:return 1;
		case 0x00006C61746E656D:return 1;
		default:return 0;
		}
	case 0x69646E6F6D616964:
		switch(wp[1]){
		case 0x000073756F726566:return 1;
		default:return 0;
		}
	case 0x69646E756F626572:
		switch(wp[1]){
		case 0x00007373656E676E:return 1;
		default:return 0;
		}
	case 0x69646E79736F7270:
		switch(wp[1]){
		case 0x00006D73696C6163:return 1;
		case 0x00007473696C6163:return 1;
		default:return 0;
		}
	case 0x69646F6265726F66:
		switch(wp[1]){
		case 0x00007373656E676E:return 1;
		default:return 0;
		}
	case 0x69646F63696D6F63:
		switch(wp[1]){
		case 0x0000636974636164:return 1;
		default:return 0;
		}
	case 0x69646F6475657370:
		switch(wp[1]){
		case 0x00006C6172657470:return 1;
		case 0x0000736F72657470:return 1;
		default:return 0;
		}
	case 0x69646F6573617270:
		switch(wp[1]){
		case 0x00006D75696D7964:return 1;
		default:return 0;
		}
	case 0x69646F6C6C796870:
		switch(wp[1]){
		case 0x00006E6F6974616E:return 1;
		default:return 0;
		}
	case 0x69646F6D6F726863:
		switch(wp[1]){
		case 0x000065706F637361:return 1;
		default:return 0;
		}
	case 0x69646F706F63796C:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x69646F70796C6F70:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x69646F7274736167:
		switch(wp[1]){
		case 0x0000736973796C61:return 1;
		default:return 0;
		}
	case 0x6964726163616E61:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x69647261636F796D:
		switch(wp[1]){
		case 0x000068706172676F:return 1;
		default:return 0;
		}
	case 0x6964726174736162:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x6964726F65726F66:
		switch(wp[1]){
		case 0x00006E6F6974616E:return 1;
		default:return 0;
		}
	case 0x6964726F74736F70:
		switch(wp[1]){
		case 0x00006E6F6974616E:return 1;
		default:return 0;
		}
	case 0x69647574656C6176:
		switch(wp[1]){
		case 0x00006D756972616E:return 1;
		case 0x00006E616972616E:return 1;
		case 0x000074736972616E:return 1;
		default:return 0;
		}
	case 0x69647574696C6F73:
		switch(wp[1]){
		case 0x00006E616972616E:return 1;
		default:return 0;
		}
	case 0x696475746974616C:
		switch(wp[1]){
		case 0x00006E616972616E:return 1;
		default:return 0;
		}
	case 0x6964757469746C61:
		switch(wp[1]){
		case 0x00006E616972616E:return 1;
		default:return 0;
		}
	case 0x6964757469747461:
		switch(wp[1]){
		case 0x00006E616972616E:return 1;
		default:return 0;
		}
	case 0x6964796863617262:
		switch(wp[1]){
		case 0x00006C616E6F6761:return 1;
		default:return 0;
		}
	case 0x6965636E616D6F72:
		switch(wp[1]){
		case 0x00007373656E6873:return 1;
		default:return 0;
		}
	case 0x6965637265706D69:
		switch(wp[1]){
		case 0x0000746E61726576:return 1;
		default:return 0;
		}
	case 0x6965687469746E61:
		switch(wp[1]){
		case 0x00006C6163697473:return 1;
		default:return 0;
		}
	case 0x696568746F6C7968:
		switch(wp[1]){
		case 0x00006C6163697473:return 1;
		default:return 0;
		}
	case 0x696568746F6E6F6D:
		switch(wp[1]){
		case 0x00006C6163697473:return 1;
		default:return 0;
		}
	case 0x69656874796C6F70:
		switch(wp[1]){
		case 0x00006C6163697473:return 1;
		default:return 0;
		}
	case 0x6965736F7263696D:
		switch(wp[1]){
		case 0x00006C6163696D73:return 1;
		default:return 0;
		}
	case 0x6965737964617262:
		switch(wp[1]){
		case 0x00006C6163696D73:return 1;
		default:return 0;
		}
	case 0x696665727265766F:
		switch(wp[1]){
		case 0x0000746E656D656E:return 1;
		default:return 0;
		}
	case 0x6966666172746E75:
		switch(wp[1]){
		case 0x0000656C62616B63:return 1;
		default:return 0;
		}
	case 0x6966666F696D6573:
		switch(wp[1]){
		case 0x0000796C6C616963:return 1;
		default:return 0;
		}
	case 0x6966667573657270:
		switch(wp[1]){
		case 0x000079636E656963:return 1;
		default:return 0;
		}
	case 0x6966696361706572:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x6966696361706E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x69666963696C6973:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x6966696375727073:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x6966696465736964:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x69666964696C6176:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x69666964696C6F73:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x69666964696D7568:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x69666964696E6572:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x696669646970616C:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x6966696469756C66:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x696669646F636572:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x696669646F6D6572:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x696669646F6D6E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x6966696C626D7574:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x6966696C65657473:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x6966696C6968696E:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x6966696C6C657473:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x6966696C706D6973:
		switch(wp[1]){
		case 0x0000657669746163:return 1;
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x6966696E616D7568:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x6966696E656C7073:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x6966696E696C6173:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x6966696E696D6573:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x6966696E69736572:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x6966696E6F6D6D61:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x6966696E6F706173:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x6966696E6F73706F:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x6966696E72756265:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x6966696E75697274:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x6966697265627573:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x6966697265687465:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x69666972656C6373:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x69666972656E6567:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x6966697265747365:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x6966697265766572:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x6966697265766E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x696669726F6C6163:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x69666972746E6576:
		switch(wp[1]){
		case 0x00006E6F69746178:return 1;
		default:return 0;
		}
	case 0x6966697274736576:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x6966697274736F6E:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x696669727473756C:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x6966697275706572:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x6966697361676564:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x696669736C756D65:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x6966697373616C63:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		case 0x000079726F746163:return 1;
		default:return 0;
		}
	case 0x69666973736F6564:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x69666973736F6C66:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x69666973736F7267:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x69666974616C6567:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x6966697461727473:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x69666974636E6173:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x6966697463757266:
		switch(wp[1]){
		case 0x0000657669746163:return 1;
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x696669746C757473:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x696669746E617571:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x696669746E656469:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x696669746F6E6572:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x6966697472616E69:
		switch(wp[1]){
		case 0x0000796C6C616963:return 1;
		default:return 0;
		}
	case 0x6966697472616E75:
		switch(wp[1]){
		case 0x0000796C6C616963:return 1;
		default:return 0;
		}
	case 0x6966697473697774:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x6966697473756163:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x6966697473757263:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x6966697473757274:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x6966697474657270:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x6966697475616562:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x69666975676E6173:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x6966697669766572:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x696669786F746564:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x6966697A7A697571:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x69666C7566657270:
		switch(wp[1]){
		case 0x0000746E656D6C6C:return 1;
		default:return 0;
		}
	case 0x69666C75666E6F6E:
		switch(wp[1]){
		case 0x0000746E656D6C6C:return 1;
		default:return 0;
		}
	case 0x69666E6F636E6F6E:
		switch(wp[1]){
		case 0x0000656C62616373:return 1;
		case 0x0000746E656D656E:return 1;
		default:return 0;
		}
	case 0x69666F6369736576:
		switch(wp[1]){
		case 0x00006E6F69746178:return 1;
		default:return 0;
		}
	case 0x69666F6461637963:
		switch(wp[1]){
		case 0x0000656C6163696C:return 1;
		default:return 0;
		}
	case 0x69666F6475657370:
		switch(wp[1]){
		case 0x00006E616972616C:return 1;
		default:return 0;
		}
	case 0x69666F68706C7573:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x69666F6E69676176:
		switch(wp[1]){
		case 0x00006E6F69746178:return 1;
		default:return 0;
		}
	case 0x69666F7265746E61:
		switch(wp[1]){
		case 0x00006E6F69746178:return 1;
		default:return 0;
		}
	case 0x69666F72706E6F6E:
		switch(wp[1]){
		case 0x000065636E656963:return 1;
		case 0x000079636E656963:return 1;
		default:return 0;
		}
	case 0x69666F72746E6576:
		switch(wp[1]){
		case 0x00006E6F69746178:return 1;
		default:return 0;
		}
	case 0x69666F746E656D6F:
		switch(wp[1]){
		case 0x00006E6F69746178:return 1;
		default:return 0;
		}
	case 0x6966726574747562:
		switch(wp[1]){
		case 0x000064657265676E:return 1;
		default:return 0;
		}
	case 0x6967616C6963756D:
		switch(wp[1]){
		case 0x0000796C73756F6E:return 1;
		default:return 0;
		}
	case 0x6967616D69657270:
		switch(wp[1]){
		case 0x00006E6F6974616E:return 1;
		default:return 0;
		}
	case 0x6967616D6973696D:
		switch(wp[1]){
		case 0x00006E6F6974616E:return 1;
		default:return 0;
		}
	case 0x6967617265646E75:
		switch(wp[1]){
		case 0x00006E6F69746174:return 1;
		default:return 0;
		}
	case 0x6967617265707573:
		switch(wp[1]){
		case 0x00006E6F69746174:return 1;
		default:return 0;
		}
	case 0x6967647572676E75:
		switch(wp[1]){
		case 0x00007373656E676E:return 1;
		default:return 0;
		}
	case 0x696767616C666E75:
		switch(wp[1]){
		case 0x00007373656E676E:return 1;
		default:return 0;
		}
	case 0x6967696C626F6E75:
		switch(wp[1]){
		case 0x00007373656E676E:return 1;
		default:return 0;
		}
	case 0x69676C6F6F686373:
		switch(wp[1]){
		case 0x0000646F6F686C72:return 1;
		default:return 0;
		}
	case 0x69676E6168636E75:
		switch(wp[1]){
		case 0x00007373656E676E:return 1;
		default:return 0;
		}
	case 0x69676E6172666572:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x69676E6172666E69:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x69676E61726F7073:
		switch(wp[1]){
		case 0x000065726F68706F:return 1;
		case 0x000065726F70736F:return 1;
		case 0x000073756F726566:return 1;
		default:return 0;
		}
	case 0x69676F6369746E61:
		switch(wp[1]){
		case 0x0000657669746174:return 1;
		default:return 0;
		}
	case 0x69676F6C6F646570:
		switch(wp[1]){
		case 0x00006C6163697473:return 1;
		default:return 0;
		}
	case 0x69676F6C6F656874:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x69676F75676E696C:
		switch(wp[1]){
		case 0x00006C617669676E:return 1;
		default:return 0;
		}
	case 0x696772656D627573:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6967726F66657270:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x6968636565736562:
		switch(wp[1]){
		case 0x00007373656E676E:return 1;
		default:return 0;
		}
	case 0x6968636C65757173:
		switch(wp[1]){
		case 0x00007373656E676E:return 1;
		default:return 0;
		}
	case 0x6968637261746E61:
		switch(wp[1]){
		case 0x00006C6163697473:return 1;
		default:return 0;
		}
	case 0x6968637469776562:
		switch(wp[1]){
		case 0x00007373656E676E:return 1;
		default:return 0;
		}
	case 0x69686769706C616D:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x69686E696F736176:
		switch(wp[1]){
		case 0x000079726F746962:return 1;
		default:return 0;
		}
	case 0x69686F6475657370:
		switch(wp[1]){
		case 0x00006369726F7473:return 1;
		default:return 0;
		}
	case 0x69686F7270657270:
		switch(wp[1]){
		case 0x00006E6F69746962:return 1;
		default:return 0;
		}
	case 0x69686F72706E6F6E:
		switch(wp[1]){
		case 0x0000657669746962:return 1;
		case 0x00006E6F69746962:return 1;
		default:return 0;
		}
	case 0x69686F74616D6568:
		switch(wp[1]){
		case 0x00007369736F7264:return 1;
		default:return 0;
		}
	case 0x696870656E617963:
		switch(wp[1]){
		case 0x00007369736F7264:return 1;
		default:return 0;
		}
	case 0x6968706F7263656E:
		switch(wp[1]){
		case 0x000063697473696C:return 1;
		default:return 0;
		}
	case 0x6968707369726570:
		switch(wp[1]){
		case 0x000064696F74636E:return 1;
		case 0x00006E616574636E:return 1;
		default:return 0;
		}
	case 0x6968707972637565:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x6968736572666572:
		switch(wp[1]){
		case 0x00007373656E676E:return 1;
		default:return 0;
		}
	case 0x696873756C626E75:
		switch(wp[1]){
		case 0x00007373656E676E:return 1;
		default:return 0;
		}
	case 0x69687461706D7973:
		switch(wp[1]){
		case 0x0000796C676E697A:return 1;
		default:return 0;
		}
	case 0x6968746172746574:
		switch(wp[1]){
		case 0x0000736574616E6F:return 1;
		default:return 0;
		}
	case 0x69687463616C6167:
		switch(wp[1]){
		case 0x00007369736F7264:return 1;
		default:return 0;
		}
	case 0x696874646F6F6C62:
		switch(wp[1]){
		case 0x0000676E69747372:return 1;
		case 0x0000796C69747372:return 1;
		default:return 0;
		}
	case 0x696874696D72656D:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x6968746F7A6E6562:
		switch(wp[1]){
		case 0x0000656E6568706F:return 1;
		case 0x00006E617275666F:return 1;
		case 0x00006E617279706F:return 1;
		default:return 0;
		}
	case 0x696874756D736962:
		switch(wp[1]){
		case 0x000073756F726566:return 1;
		default:return 0;
		}
	case 0x696874756F727473:
		switch(wp[1]){
		case 0x00006C656D61636F:return 1;
		default:return 0;
		}
	case 0x696B63696C6C6F72:
		switch(wp[1]){
		case 0x00007373656E676E:return 1;
		default:return 0;
		}
	case 0x696B636974736E75:
		switch(wp[1]){
		case 0x00007373656E676E:return 1;
		default:return 0;
		}
	case 0x696B636F63616570:
		switch(wp[1]){
		case 0x00007373656E6873:return 1;
		default:return 0;
		}
	case 0x696B6E6968746E75:
		switch(wp[1]){
		case 0x00007373656E676E:return 1;
		default:return 0;
		}
	case 0x696C616369646172:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696C616369676F6C:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696C61636973756D:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696C61636F6C6564:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696C61636F766564:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696C616467796D61:
		switch(wp[1]){
		case 0x000073756F726566:return 1;
		default:return 0;
		}
	case 0x696C61646E616373:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696C616572657270:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696C6165726E6F6E:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696C616963657073:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696C616974617073:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696C61697472616D:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696C616D69636564:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696C616E72657465:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696C616E72756F6A:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696C61726562696C:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696C617265646566:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696C6172656E6567:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696C6172656E696D:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696C61726574616C:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696C61726574696C:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696C61726F6C6863:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696C61726F6D6564:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696C6172746E6563:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696C617274736576:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696C61727475656E:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696C61727574616E:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696C61736F726F62:
		switch(wp[1]){
		case 0x00006574616C7963:return 1;
		default:return 0;
		}
	case 0x696C6173796C6F70:
		switch(wp[1]){
		case 0x00006564696C7963:return 1;
		default:return 0;
		}
	case 0x696C6174616C6170:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696C617469676964:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696C617469706163:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696C617469766564:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696C617469766572:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696C617470616863:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696C617571656E69:
		switch(wp[1]){
		case 0x00006E6169726174:return 1;
		default:return 0;
		}
	case 0x696C6175736E6573:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696C617578657361:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696C627570657270:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x696C6275706C616D:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x696C6275706E6F6E:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x696C6275706F7270:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x696C636564657270:
		switch(wp[1]){
		case 0x00006E6F6974616E:return 1;
		default:return 0;
		}
	case 0x696C636E69657270:
		switch(wp[1]){
		case 0x00006E6F6974616E:return 1;
		default:return 0;
		}
	case 0x696C636E696E6F6E:
		switch(wp[1]){
		case 0x00006E6F6974616E:return 1;
		default:return 0;
		}
	case 0x696C636E69736964:
		switch(wp[1]){
		case 0x00006E6F6974616E:return 1;
		default:return 0;
		}
	case 0x696C636E6973696D:
		switch(wp[1]){
		case 0x00006E6F6974616E:return 1;
		default:return 0;
		}
	case 0x696C6464656D6E75:
		switch(wp[1]){
		case 0x00007373656E676E:return 1;
		default:return 0;
		}
	case 0x696C65647265766F:
		switch(wp[1]){
		case 0x0000657461726562:return 1;
		case 0x0000796C65746163:return 1;
		default:return 0;
		}
	case 0x696C65676E617665:
		switch(wp[1]){
		case 0x00006D73696C6163:return 1;
		case 0x00006E6F6974617A:return 1;
		case 0x0000706968737473:return 1;
		case 0x00007974696C6163:return 1;
		default:return 0;
		}
	case 0x696C65686F727970:
		switch(wp[1]){
		case 0x0000726574656D6F:return 1;
		default:return 0;
		}
	case 0x696C656874697065:
		switch(wp[1]){
		case 0x0000636974796C6F:return 1;
		case 0x00006E6973796C6F:return 1;
		case 0x00006E69786F746F:return 1;
		case 0x00006E6F6974617A:return 1;
		case 0x0000736973796C6F:return 1;
		default:return 0;
		}
	case 0x696C656C646E6163:
		switch(wp[1]){
		case 0x0000676E69746867:return 1;
		default:return 0;
		}
	case 0x696C656D61726163:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696C656D6F686E75:
		switch(wp[1]){
		case 0x00007373656E656B:return 1;
		default:return 0;
		}
	case 0x696C656E6E616863:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696C6572676E6F6D:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696C657474616863:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696C6874656E6567:
		switch(wp[1]){
		case 0x00006369676F6C61:return 1;
		case 0x0000796C6C616361:return 1;
		default:return 0;
		}
	case 0x696C6961626D7562:
		switch(wp[1]){
		case 0x0000706968736666:return 1;
		default:return 0;
		}
	case 0x696C696176657270:
		switch(wp[1]){
		case 0x00007373656E676E:return 1;
		default:return 0;
		}
	case 0x696C696261686572:
		switch(wp[1]){
		case 0x0000657669746174:return 1;
		case 0x00006E6F69746174:return 1;
		default:return 0;
		}
	case 0x696C696261727461:
		switch(wp[1]){
		case 0x000073756F697261:return 1;
		default:return 0;
		}
	case 0x696C696265646E75:
		switch(wp[1]){
		case 0x0000676E69746174:return 1;
		default:return 0;
		}
	case 0x696C69626F6D6564:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696C69626F6D6572:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696C69626F6D6D69:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696C69626F727473:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		case 0x000073756F726566:return 1;
		default:return 0;
		}
	case 0x696C6962756C6F73:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696C69647265766F:
		switch(wp[1]){
		case 0x0000796C746E6567:return 1;
		default:return 0;
		}
	case 0x696C6968706F796C:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696C696D61666E75:
		switch(wp[1]){
		case 0x000064657A697261:return 1;
		default:return 0;
		}
	case 0x696C696D68637261:
		switch(wp[1]){
		case 0x0000747369726174:return 1;
		default:return 0;
		}
	case 0x696C696D69746E61:
		switch(wp[1]){
		case 0x00006D7369726174:return 1;
		case 0x0000747369726174:return 1;
		default:return 0;
		}
	case 0x696C6972646E6574:
		switch(wp[1]){
		case 0x000073756F726566:return 1;
		default:return 0;
		}
	case 0x696C6974616C6F76:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696C697475657270:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696C6974756E6F6E:
		switch(wp[1]){
		case 0x00006E6169726174:return 1;
		default:return 0;
		}
	case 0x696C697571656E75:
		switch(wp[1]){
		case 0x0000646574617262:return 1;
		default:return 0;
		}
	case 0x696C697669636564:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696C697669636572:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696C697669636E69:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696C697669636E75:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696C6C6562616C66:
		switch(wp[1]){
		case 0x000064657672656E:return 1;
		default:return 0;
		}
	case 0x696C6C65626E6F6E:
		switch(wp[1]){
		case 0x0000746E65726567:return 1;
		default:return 0;
		}
	case 0x696C6C6563726170:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696C6C6567616C66:
		switch(wp[1]){
		case 0x000073756F726566:return 1;
		default:return 0;
		}
	case 0x696C6C65696D6573:
		switch(wp[1]){
		case 0x00006C6163697470:return 1;
		default:return 0;
		}
	case 0x696C6C6569757165:
		switch(wp[1]){
		case 0x00006C6163697470:return 1;
		default:return 0;
		}
	case 0x696C6C656E757262:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x696C6C657265766F:
		switch(wp[1]){
		case 0x00006C6163697470:return 1;
		default:return 0;
		}
	case 0x696C6C6574696C63:
		switch(wp[1]){
		case 0x000073756F726566:return 1;
		default:return 0;
		}
	case 0x696C6C6574756373:
		switch(wp[1]){
		case 0x000073756F726567:return 1;
		default:return 0;
		}
	case 0x696C6C696D6E6F6E:
		switch(wp[1]){
		case 0x0000657269616E6F:return 1;
		default:return 0;
		}
	case 0x696C6C6972626966:
		switch(wp[1]){
		case 0x000073756F726566:return 1;
		default:return 0;
		}
	case 0x696C6C6974736970:
		switch(wp[1]){
		case 0x000073756F726566:return 1;
		case 0x000073756F726567:return 1;
		default:return 0;
		}
	case 0x696C6C6977657270:
		switch(wp[1]){
		case 0x00007373656E676E:return 1;
		default:return 0;
		}
	case 0x696C6D7563726963:
		switch(wp[1]){
		case 0x00006C61726F7474:return 1;
		default:return 0;
		}
	case 0x696C6F6261726170:
		switch(wp[1]){
		case 0x00006D73696C6163:return 1;
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696C6F6475657370:
		switch(wp[1]){
		case 0x0000797261726574:return 1;
		default:return 0;
		}
	case 0x696C6F65616C6170:
		switch(wp[1]){
		case 0x00006C6163696874:return 1;
		default:return 0;
		}
	case 0x696C6F6669757161:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x696C6F686F636C61:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696C6F6967616C70:
		switch(wp[1]){
		case 0x0000657469726170:return 1;
		default:return 0;
		}
	case 0x696C6F6972746976:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696C6F6D65646E75:
		switch(wp[1]){
		case 0x0000656C62616873:return 1;
		default:return 0;
		}
	case 0x696C6F6F666D6F74:
		switch(wp[1]){
		case 0x00007373656E6873:return 1;
		default:return 0;
		}
	case 0x696C6F706174656D:
		switch(wp[1]){
		case 0x00006E6169636974:return 1;
		default:return 0;
		}
	case 0x696C6F7068637261:
		switch(wp[1]){
		case 0x00006E6169636974:return 1;
		default:return 0;
		}
	case 0x696C6F70696D6573:
		switch(wp[1]){
		case 0x00006E6169636974:return 1;
		default:return 0;
		}
	case 0x696C6F706F656874:
		switch(wp[1]){
		case 0x00006E6169636974:return 1;
		default:return 0;
		}
	case 0x696C6F706F6E6F6D:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696C6F72706E6F6E:
		switch(wp[1]){
		case 0x000073756F726566:return 1;
		default:return 0;
		}
	case 0x696C6F7274786564:
		switch(wp[1]){
		case 0x0000656E656E6F6D:return 1;
		default:return 0;
		}
	case 0x696C6F737265766F:
		switch(wp[1]){
		case 0x000073756F746963:return 1;
		default:return 0;
		}
	case 0x696C6F7473697065:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696C706963736964:
		switch(wp[1]){
		case 0x000065766974616E:return 1;
		case 0x00006E616972616E:return 1;
		case 0x0000796C6972616E:return 1;
		case 0x000079726F74616E:return 1;
		default:return 0;
		}
	case 0x696C7069746C756D:
		switch(wp[1]){
		case 0x0000657669746163:return 1;
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x696C706D6F636361:
		switch(wp[1]){
		case 0x0000656C62616873:return 1;
		case 0x0000706968736563:return 1;
		case 0x0000746E656D6873:return 1;
		default:return 0;
		}
	case 0x696C706D6F636572:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x696C706D6F636E75:
		switch(wp[1]){
		case 0x00006465746E656D:return 1;
		default:return 0;
		}
	case 0x696C707061657270:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x696C7070616C616D:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x696C7070616E6F6E:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x696C70706173696D:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x696C707265746E69:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x696C707564657270:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x696C7075646E6F63:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x696C7075646E6F6E:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x696C7075746E6563:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x696C707574706573:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x696C70786573696D:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x696C756170726174:
		switch(wp[1]){
		case 0x000072656B616D6E:return 1;
		default:return 0;
		}
	case 0x696C756369727475:
		switch(wp[1]){
		case 0x000073756F726566:return 1;
		default:return 0;
		}
	case 0x696C756369736576:
		switch(wp[1]){
		case 0x000073756F726566:return 1;
		case 0x000073756F726567:return 1;
		default:return 0;
		}
	case 0x696C75637265706F:
		switch(wp[1]){
		case 0x000073756F6E6567:return 1;
		case 0x000073756F726566:return 1;
		case 0x000073756F726567:return 1;
		default:return 0;
		}
	case 0x696C756372657473:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x696C75646E616C67:
		switch(wp[1]){
		case 0x000073756F726566:return 1;
		case 0x000073756F726567:return 1;
		default:return 0;
		}
	case 0x696C756E696D6573:
		switch(wp[1]){
		case 0x000073756F726566:return 1;
		default:return 0;
		}
	case 0x696C7968636E6F63:
		switch(wp[1]){
		case 0x000073756F726566:return 1;
		default:return 0;
		}
	case 0x696D61646163616D:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696D61667265766F:
		switch(wp[1]){
		case 0x0000796C7261696C:return 1;
		default:return 0;
		}
	case 0x696D61676C616D61:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696D616C66667573:
		switch(wp[1]){
		case 0x00006E6F6974616E:return 1;
		default:return 0;
		}
	case 0x696D61736E617274:
		switch(wp[1]){
		case 0x00006E6F6974616E:return 1;
		default:return 0;
		}
	case 0x696D6178656E6F6E:
		switch(wp[1]){
		case 0x00006E6F6974616E:return 1;
		default:return 0;
		}
	case 0x696D6178656F7270:
		switch(wp[1]){
		case 0x00006E6F6974616E:return 1;
		default:return 0;
		}
	case 0x696D656869746E61:
		switch(wp[1]){
		case 0x0000657265687073:return 1;
		default:return 0;
		}
	case 0x696D65686F6C6F68:
		switch(wp[1]){
		case 0x00006C6172646568:return 1;
		default:return 0;
		}
	case 0x696D656874736F70:
		switch(wp[1]){
		case 0x0000636967656C70:return 1;
		default:return 0;
		}
	case 0x696D657265707573:
		switch(wp[1]){
		case 0x0000796C746E656E:return 1;
		default:return 0;
		}
	case 0x696D65727265766F:
		switch(wp[1]){
		case 0x00007373656E7373:return 1;
		default:return 0;
		}
	case 0x696D6573696D6564:
		switch(wp[1]){
		case 0x0000726576617571:return 1;
		default:return 0;
		}
	case 0x696D696C656E6F6E:
		switch(wp[1]){
		case 0x00006E6F6974616E:return 1;
		default:return 0;
		}
	case 0x696D696C656F7270:
		switch(wp[1]){
		case 0x00006E6F6974616E:return 1;
		default:return 0;
		}
	case 0x696D6972636E6F6E:
		switch(wp[1]){
		case 0x00007974696C616E:return 1;
		default:return 0;
		}
	case 0x696D697263736964:
		switch(wp[1]){
		case 0x000065766974616E:return 1;
		case 0x0000676E6974616E:return 1;
		case 0x00006C61746E616E:return 1;
		case 0x00006E6F6974616E:return 1;
		case 0x0000796C6574616E:return 1;
		case 0x000079726F74616E:return 1;
		default:return 0;
		}
	case 0x696D697265746E69:
		switch(wp[1]){
		case 0x00006C6163697473:return 1;
		default:return 0;
		}
	case 0x696D697369726576:
		switch(wp[1]){
		case 0x000065647574696C:return 1;
		default:return 0;
		}
	case 0x696D697373616564:
		switch(wp[1]){
		case 0x00006E6F6974616C:return 1;
		default:return 0;
		}
	case 0x696D697373616572:
		switch(wp[1]){
		case 0x00006E6F6974616C:return 1;
		default:return 0;
		}
	case 0x696D697373616E69:
		switch(wp[1]){
		case 0x00006E6F6974616C:return 1;
		default:return 0;
		}
	case 0x696D697373616E75:
		switch(wp[1]){
		case 0x000065766974616C:return 1;
		case 0x0000676E6974616C:return 1;
		default:return 0;
		}
	case 0x696D69746967656C:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696D6C6572657473:
		switch(wp[1]){
		case 0x000073756F68746E:return 1;
		default:return 0;
		}
	case 0x696D6C6F6F686373:
		switch(wp[1]){
		case 0x0000737365727473:return 1;
		default:return 0;
		}
	case 0x696D6C75636E6F6E:
		switch(wp[1]){
		case 0x00006E6F6974616E:return 1;
		default:return 0;
		}
	case 0x696D6D6F63657270:
		switch(wp[1]){
		case 0x00006C6172757373:return 1;
		default:return 0;
		}
	case 0x696D6D6F636E6F6E:
		switch(wp[1]){
		case 0x0000796C6C617474:return 1;
		default:return 0;
		}
	case 0x696D6F6365626E75:
		switch(wp[1]){
		case 0x00007373656E676E:return 1;
		default:return 0;
		}
	case 0x696D6F6365726F66:
		switch(wp[1]){
		case 0x00007373656E676E:return 1;
		default:return 0;
		}
	case 0x696D6F6475657370:
		switch(wp[1]){
		case 0x000079726174696C:return 1;
		default:return 0;
		}
	case 0x696D6F72706D6F63:
		switch(wp[1]){
		case 0x0000796C676E6973:return 1;
		default:return 0;
		}
	case 0x696D6F72706E6F6E:
		switch(wp[1]){
		case 0x000073756F756373:return 1;
		default:return 0;
		}
	case 0x696D726564697065:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696D7265676E6F6E:
		switch(wp[1]){
		case 0x00006E6F6974616E:return 1;
		default:return 0;
		}
	case 0x696D7265676F7270:
		switch(wp[1]){
		case 0x00006E6F6974616E:return 1;
		default:return 0;
		}
	case 0x696D7265706E6F6E:
		switch(wp[1]){
		case 0x0000656C62697373:return 1;
		default:return 0;
		}
	case 0x696D7265746E6F63:
		switch(wp[1]){
		case 0x0000796C73756F6E:return 1;
		default:return 0;
		}
	case 0x696D7265746E6F6E:
		switch(wp[1]){
		case 0x0000676E6974616E:return 1;
		default:return 0;
		}
	case 0x696D726F66696E75:
		switch(wp[1]){
		case 0x00006E6169726174:return 1;
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696D746E65736261:
		switch(wp[1]){
		case 0x0000796C6465646E:return 1;
		default:return 0;
		}
	case 0x696D756C6C696572:
		switch(wp[1]){
		case 0x00006E6F6974616E:return 1;
		default:return 0;
		}
	case 0x696D756C6C696E75:
		switch(wp[1]){
		case 0x0000676E6974616E:return 1;
		case 0x00006E6F6974616E:return 1;
		default:return 0;
		}
	case 0x696D756E616D6E75:
		switch(wp[1]){
		case 0x0000656C62697373:return 1;
		default:return 0;
		}
	case 0x696D757373616E75:
		switch(wp[1]){
		case 0x00007373656E676E:return 1;
		default:return 0;
		}
	case 0x696D796E6F6E6F6D:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696D796E6F726170:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696E616761706572:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696E6167726F6564:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696E6167726F6572:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696E6167726F6E69:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696E616D75686564:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696E6172626D656D:
		switch(wp[1]){
		case 0x000073756F726566:return 1;
		default:return 0;
		}
	case 0x696E61736E617274:
		switch(wp[1]){
		case 0x00006E6F6974616D:return 1;
		default:return 0;
		}
	case 0x696E65676F6D6F68:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696E656874616568:
		switch(wp[1]){
		case 0x00007373656E6873:return 1;
		default:return 0;
		}
	case 0x696E656B6E617266:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x696E656D69726570:
		switch(wp[1]){
		case 0x000073697469676E:return 1;
		default:return 0;
		}
	case 0x696E656D75626C61:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696E656D7563656F:
		switch(wp[1]){
		case 0x00006D73696C6163:return 1;
		default:return 0;
		}
	case 0x696E676965666E75:
		switch(wp[1]){
		case 0x00007373656E676E:return 1;
		default:return 0;
		}
	case 0x696E676965726F66:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696E676973657270:
		switch(wp[1]){
		case 0x0000746E61636966:return 1;
		default:return 0;
		}
	case 0x696E6769736E6F63:
		switch(wp[1]){
		case 0x0000657461636966:return 1;
		case 0x0000746E61636966:return 1;
		default:return 0;
		}
	case 0x696E6769736E6F6E:
		switch(wp[1]){
		case 0x0000746E61636966:return 1;
		default:return 0;
		}
	case 0x696E686365746E69:
		switch(wp[1]){
		case 0x00007974696C6163:return 1;
		default:return 0;
		}
	case 0x696E686365746E75:
		switch(wp[1]){
		case 0x0000657A696C6163:return 1;
		default:return 0;
		}
	case 0x696E696469726570:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x696E69656C6C616D:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696E696665646E69:
		switch(wp[1]){
		case 0x00007373656E6574:return 1;
		case 0x0000796C65766974:return 1;
		default:return 0;
		}
	case 0x696E69666E696E75:
		switch(wp[1]){
		case 0x00007373656E6574:return 1;
		default:return 0;
		}
	case 0x696E696863697274:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		case 0x000073756F726566:return 1;
		default:return 0;
		}
	case 0x696E696870726F6D:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696E696C616B6C61:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696E696D61726F66:
		switch(wp[1]){
		case 0x000073756F726566:return 1;
		default:return 0;
		}
	case 0x696E696D64616E75:
		switch(wp[1]){
		case 0x0000646572657473:return 1;
		default:return 0;
		}
	case 0x696E696D65666665:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696E696D65666E75:
		switch(wp[1]){
		case 0x00007373656E656E:return 1;
		default:return 0;
		}
	case 0x696E696D69646E69:
		switch(wp[1]){
		case 0x0000656C62616873:return 1;
		default:return 0;
		}
	case 0x696E696D69646E75:
		switch(wp[1]){
		case 0x0000656C62616873:return 1;
		case 0x0000796C62616873:return 1;
		default:return 0;
		}
	case 0x696E696D75626C61:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		case 0x000073756F726170:return 1;
		case 0x000073756F726566:return 1;
		default:return 0;
		}
	case 0x696E696D75726563:
		switch(wp[1]){
		case 0x000073756F726566:return 1;
		default:return 0;
		}
	case 0x696E696D75746962:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		case 0x000073756F726566:return 1;
		default:return 0;
		}
	case 0x696E69706F657270:
		switch(wp[1]){
		case 0x0000646574616E6F:return 1;
		default:return 0;
		}
	case 0x696E69706F727461:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696E697265627573:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696E697274636F64:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696E697369626D61:
		switch(wp[1]){
		case 0x000073756F727473:return 1;
		default:return 0;
		}
	case 0x696E6974616C6564:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696E6974616C6567:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		case 0x000073756F726566:return 1;
		case 0x000073756F726567:return 1;
		default:return 0;
		}
	case 0x696E6974616C6572:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696E69746172656B:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696E697475726373:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		case 0x0000796C676E697A:return 1;
		default:return 0;
		}
	case 0x696E6975676E6173:
		switch(wp[1]){
		case 0x000073756F6C6F63:return 1;
		case 0x000073756F726566:return 1;
		case 0x000073756F726F76:return 1;
		default:return 0;
		}
	case 0x696E6D6F69757165:
		switch(wp[1]){
		case 0x0000746E65746F70:return 1;
		default:return 0;
		}
	case 0x696E6E61636F7865:
		switch(wp[1]){
		case 0x00006D73696C6162:return 1;
		default:return 0;
		}
	case 0x696E6E616D727562:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x696E6F6375616C67:
		switch(wp[1]){
		case 0x000073756F726566:return 1;
		default:return 0;
		}
	case 0x696E6F6761726170:
		switch(wp[1]){
		case 0x000073697361696D:return 1;
		default:return 0;
		}
	case 0x696E6F6761746E61:
		switch(wp[1]){
		case 0x00006C6163697473:return 1;
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696E6F676F64656F:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x696E6F68636E6963:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696E6F6974636966:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696E6F6C6F636572:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696E6F6D656C6F70:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x696E6F6D69746E61:
		switch(wp[1]){
		case 0x0000646574657275:return 1;
		case 0x000073756F726566:return 1;
		default:return 0;
		}
	case 0x696E6F6E61636564:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696E6F7061736E75:
		switch(wp[1]){
		case 0x0000656C62616966:return 1;
		default:return 0;
		}
	case 0x696E6F7268746E65:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696E6F7268746E69:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696E6F73696E6576:
		switch(wp[1]){
		case 0x000073756F726F76:return 1;
		default:return 0;
		}
	case 0x696E6F7473616572:
		switch(wp[1]){
		case 0x0000746E656D6873:return 1;
		default:return 0;
		}
	case 0x696E6F7473616E75:
		switch(wp[1]){
		case 0x0000746E656D6873:return 1;
		default:return 0;
		}
	case 0x696E6F7972626D65:
		switch(wp[1]){
		case 0x000073756F726566:return 1;
		default:return 0;
		}
	case 0x696E7261636E6F6E:
		switch(wp[1]){
		case 0x000073756F726F76:return 1;
		default:return 0;
		}
	case 0x696E7261746E6F6E:
		switch(wp[1]){
		case 0x0000656C62616873:return 1;
		default:return 0;
		}
	case 0x696E7265636E6F63:
		switch(wp[1]){
		case 0x00007373656E676E:return 1;
		default:return 0;
		}
	case 0x696E726574617266:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696E726574617571:
		switch(wp[1]){
		case 0x00006E6169726174:return 1;
		default:return 0;
		}
	case 0x696E726574736577:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x696E727566736964:
		switch(wp[1]){
		case 0x0000746E656D6873:return 1;
		default:return 0;
		}
	case 0x696E75707265766F:
		switch(wp[1]){
		case 0x0000746E656D6873:return 1;
		default:return 0;
		}
	case 0x696E757265707573:
		switch(wp[1]){
		case 0x00006C6173726576:return 1;
		default:return 0;
		}
	case 0x696E757961636970:
		switch(wp[1]){
		case 0x00007373656E6873:return 1;
		default:return 0;
		}
	case 0x696E79676F73696D:
		switch(wp[1]){
		case 0x00006C6163697473:return 1;
		default:return 0;
		}
	case 0x696F6C7078656E75:
		switch(wp[1]){
		case 0x00006E6F69746174:return 1;
		default:return 0;
		}
	case 0x696F6E6E6F636572:
		switch(wp[1]){
		case 0x000065636E617373:return 1;
		default:return 0;
		}
	case 0x696F707061657270:
		switch(wp[1]){
		case 0x0000746E656D746E:return 1;
		default:return 0;
		}
	case 0x696F7070616C616D:
		switch(wp[1]){
		case 0x0000746E656D746E:return 1;
		default:return 0;
		}
	case 0x696F7070616E6F6E:
		switch(wp[1]){
		case 0x0000746E656D746E:return 1;
		default:return 0;
		}
	case 0x696F7070616F7270:
		switch(wp[1]){
		case 0x0000746E656D746E:return 1;
		default:return 0;
		}
	case 0x696F707061736964:
		switch(wp[1]){
		case 0x0000746E656D746E:return 1;
		case 0x0000796C6465746E:return 1;
		default:return 0;
		}
	case 0x696F70706173696D:
		switch(wp[1]){
		case 0x0000746E656D746E:return 1;
		default:return 0;
		}
	case 0x696F727463656C65:
		switch(wp[1]){
		case 0x000065736C75706D:return 1;
		default:return 0;
		}
	case 0x696F7A6570617274:
		switch(wp[1]){
		case 0x00006D726F666964:return 1;
		default:return 0;
		}
	case 0x6970616369746E61:
		switch(wp[1]){
		case 0x00006D73696C6174:return 1;
		case 0x00007473696C6174:return 1;
		default:return 0;
		}
	case 0x697061637265766F:
		switch(wp[1]){
		case 0x0000657A696C6174:return 1;
		default:return 0;
		}
	case 0x6970617069746E61:
		switch(wp[1]){
		case 0x00006C6163697473:return 1;
		default:return 0;
		}
	case 0x6970656172746C75:
		switch(wp[1]){
		case 0x00006C61706F6373:return 1;
		default:return 0;
		}
	case 0x6970656475657370:
		switch(wp[1]){
		case 0x0000616870617267:return 1;
		case 0x0000796870617267:return 1;
		default:return 0;
		}
	case 0x6970656968637261:
		switch(wp[1]){
		case 0x00006C61706F6373:return 1;
		default:return 0;
		}
	case 0x6970656F6574736F:
		switch(wp[1]){
		case 0x0000736973796870:return 1;
		default:return 0;
		}
	case 0x6970656F7275656E:
		switch(wp[1]){
		case 0x00006C616D726564:return 1;
		default:return 0;
		}
	case 0x6970656F746F6870:
		switch(wp[1]){
		case 0x000063697473616E:return 1;
		default:return 0;
		}
	case 0x6970657263627573:
		switch(wp[1]){
		case 0x00006E6F69746174:return 1;
		default:return 0;
		}
	case 0x69706C61736F796D:
		switch(wp[1]){
		case 0x000073697469676E:return 1;
		default:return 0;
		}
	case 0x69706C61736F7970:
		switch(wp[1]){
		case 0x000073697469676E:return 1;
		default:return 0;
		}
	case 0x69706D6F63657270:
		switch(wp[1]){
		case 0x00006E6F6974616C:return 1;
		default:return 0;
		}
	case 0x69706F6373697065:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x6970706F74706974:
		switch(wp[1]){
		case 0x00007373656E6873:return 1;
		default:return 0;
		}
	case 0x6970726563736964:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x697073616F747561:
		switch(wp[1]){
		case 0x00006E6F69746172:return 1;
		default:return 0;
		}
	case 0x6970736572657270:
		switch(wp[1]){
		case 0x00006E6F69746172:return 1;
		default:return 0;
		}
	case 0x69707369746C756D:
		switch(wp[1]){
		case 0x00006574616C7563:return 1;
		default:return 0;
		}
	case 0x6970736E6F636E75:
		switch(wp[1]){
		case 0x0000796C676E6972:return 1;
		default:return 0;
		}
	case 0x6970737265707573:
		switch(wp[1]){
		case 0x00006C6175746972:return 1;
		default:return 0;
		}
	case 0x6970737265746E69:
		switch(wp[1]){
		case 0x00006E6F69746172:return 1;
		default:return 0;
		}
	case 0x69707563636F6E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x69707573696D6573:
		switch(wp[1]){
		case 0x00006E6F6974616E:return 1;
		default:return 0;
		}
	case 0x6970796863617262:
		switch(wp[1]){
		case 0x000064696F63616E:return 1;
		default:return 0;
		}
	case 0x6972616562726F66:
		switch(wp[1]){
		case 0x00007373656E676E:return 1;
		default:return 0;
		}
	case 0x6972616863636173:
		switch(wp[1]){
		case 0x000063697274656D:return 1;
		case 0x00006E6F6974617A:return 1;
		case 0x000073756F726566:return 1;
		default:return 0;
		}
	case 0x6972616967616C70:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x6972616C6F706564:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x6972616C6F706964:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x6972616C75626174:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x6972616C7562656E:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x6972616C75636573:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x6972616C7564696E:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x6972616C75676572:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x6972616C75676E61:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x6972616C75706F70:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x6972616C75766972:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x6972616D616C6163:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x6972616E696D616C:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x69726174696C696D:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x6972617674736F70:
		switch(wp[1]){
		case 0x000072616C6C6563:return 1;
		default:return 0;
		}
	case 0x6972626166657270:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x6972626172746C75:
		switch(wp[1]){
		case 0x0000746E61696C6C:return 1;
		default:return 0;
		}
	case 0x6972626867696577:
		switch(wp[1]){
		case 0x00006E616D656764:return 1;
		default:return 0;
		}
	case 0x6972626D696E6F6E:
		switch(wp[1]){
		case 0x0000676E69746163:return 1;
		default:return 0;
		}
	case 0x6972627265646E75:
		switch(wp[1]){
		case 0x0000726569646167:return 1;
		default:return 0;
		}
	case 0x6972636173657270:
		switch(wp[1]){
		case 0x00006C6169636966:return 1;
		default:return 0;
		}
	case 0x69726361736E6F6E:
		switch(wp[1]){
		case 0x00006C6169636966:return 1;
		default:return 0;
		}
	case 0x6972637265707968:
		switch(wp[1]){
		case 0x0000657A69636974:return 1;
		case 0x00006D7369636974:return 1;
		default:return 0;
		}
	case 0x6972637369646E69:
		switch(wp[1]){
		case 0x00006574616E696D:return 1;
		default:return 0;
		}
	case 0x697263736E617274:
		switch(wp[1]){
		case 0x00006C6172757470:return 1;
		default:return 0;
		}
	case 0x69726373756E616D:
		switch(wp[1]){
		case 0x00006C6172757470:return 1;
		default:return 0;
		}
	case 0x6972646E6165616D:
		switch(wp[1]){
		case 0x00006D726F66696E:return 1;
		default:return 0;
		}
	case 0x6972646E696C7963:
		switch(wp[1]){
		case 0x00007974696C6163:return 1;
		default:return 0;
		}
	case 0x697265646C6F6D73:
		switch(wp[1]){
		case 0x00007373656E676E:return 1;
		default:return 0;
		}
	case 0x697265676E617267:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x6972656863756176:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x6972656C636F7270:
		switch(wp[1]){
		case 0x00006D73696C6163:return 1;
		default:return 0;
		}
	case 0x6972656C64776F62:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x6972656C7373656E:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x6972656D6174656D:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x6972656D6D617473:
		switch(wp[1]){
		case 0x00007373656E676E:return 1;
		default:return 0;
		}
	case 0x6972656D74736F70:
		switch(wp[1]){
		case 0x00006C616E6F6964:return 1;
		default:return 0;
		}
	case 0x6972656D796C6F70:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x6972656E7469656C:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x6972657069746E61:
		switch(wp[1]){
		case 0x0000636974617473:return 1;
		case 0x0000736973617473:return 1;
		default:return 0;
		}
	case 0x697265706F627574:
		switch(wp[1]){
		case 0x00006C61656E6F74:return 1;
		default:return 0;
		}
	case 0x697265706F6D6568:
		switch(wp[1]){
		case 0x00006D75656E6F74:return 1;
		default:return 0;
		}
	case 0x697265706F726561:
		switch(wp[1]){
		case 0x00006D75656E6F74:return 1;
		default:return 0;
		}
	case 0x697265706F726573:
		switch(wp[1]){
		case 0x00006D75656E6F74:return 1;
		default:return 0;
		}
	case 0x697265706F746E65:
		switch(wp[1]){
		case 0x00006C6172656870:return 1;
		default:return 0;
		}
	case 0x6972657073696877:
		switch(wp[1]){
		case 0x00007373656E676E:return 1;
		default:return 0;
		}
	case 0x6972657078656E75:
		switch(wp[1]){
		case 0x00006465746E656D:return 1;
		case 0x00006C6169746E65:return 1;
		case 0x00006C61746E656D:return 1;
		default:return 0;
		}
	case 0x69726574616D6D69:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x6972657465646E75:
		switch(wp[1]){
		case 0x000064657461726F:return 1;
		default:return 0;
		}
	case 0x69726574666F7263:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x697265746E756F63:
		switch(wp[1]){
		case 0x000065736C75706D:return 1;
		case 0x000065746174696D:return 1;
		default:return 0;
		}
	case 0x6972657472617571:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x6972657474616C66:
		switch(wp[1]){
		case 0x00007373656E676E:return 1;
		default:return 0;
		}
	case 0x697265766F706D69:
		switch(wp[1]){
		case 0x0000746E656D6873:return 1;
		default:return 0;
		}
	case 0x6972666172746C75:
		switch(wp[1]){
		case 0x000073756F6C6F76:return 1;
		default:return 0;
		}
	case 0x69726665726E6F6E:
		switch(wp[1]){
		case 0x0000746E61726567:return 1;
		default:return 0;
		}
	case 0x6972696170736564:
		switch(wp[1]){
		case 0x00007373656E676E:return 1;
		default:return 0;
		}
	case 0x6972697073616E75:
		switch(wp[1]){
		case 0x00007373656E676E:return 1;
		default:return 0;
		}
	case 0x69726F63696D6573:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x69726F636F707968:
		switch(wp[1]){
		case 0x00006C6163697473:return 1;
		default:return 0;
		}
	case 0x69726F6372657473:
		switch(wp[1]){
		case 0x000073756F6C6F63:return 1;
		default:return 0;
		}
	case 0x69726F67656C6C61:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x69726F6765746163:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x69726F68706C7573:
		switch(wp[1]){
		case 0x00006574616E6963:return 1;
		default:return 0;
		}
	case 0x69726F6B6F707968:
		switch(wp[1]){
		case 0x00006E6F6B697473:return 1;
		default:return 0;
		}
	case 0x69726F6C61766572:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x69726F6C666E6F6E:
		switch(wp[1]){
		case 0x000073756F726566:return 1;
		default:return 0;
		}
	case 0x69726F6C68636564:
		switch(wp[1]){
		case 0x00006E6F6974616E:return 1;
		default:return 0;
		}
	case 0x69726F6C6F636564:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x69726F6D656D6E75:
		switch(wp[1]){
		case 0x000064657A696C61:return 1;
		default:return 0;
		}
	case 0x69726F6D6F6E7963:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x69726F6D746E6F6D:
		switch(wp[1]){
		case 0x00006574696E6F6C:return 1;
		default:return 0;
		}
	case 0x69726F7061766572:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x69726F70736F6F7A:
		switch(wp[1]){
		case 0x000073756F726566:return 1;
		default:return 0;
		}
	case 0x69726F7461707565:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x69726F7463617274:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x69726F74636F7270:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x6972706564657270:
		switch(wp[1]){
		case 0x00006E6F69746176:return 1;
		default:return 0;
		}
	case 0x6972706D6F636E75:
		switch(wp[1]){
		case 0x0000796C676E6973:return 1;
		default:return 0;
		}
	case 0x6972706F6D697270:
		switch(wp[1]){
		case 0x000065766974696D:return 1;
		default:return 0;
		}
	case 0x6972707265646E75:
		switch(wp[1]){
		case 0x00006C617069636E:return 1;
		default:return 0;
		}
	case 0x6972707265746E65:
		switch(wp[1]){
		case 0x00007373656C6573:return 1;
		case 0x0000796C676E6973:return 1;
		default:return 0;
		}
	case 0x6972707265746E69:
		switch(wp[1]){
		case 0x0000636974616D73:return 1;
		default:return 0;
		}
	case 0x6972707369646E75:
		switch(wp[1]){
		case 0x0000646569636176:return 1;
		default:return 0;
		}
	case 0x6972726574627573:
		switch(wp[1]){
		case 0x00006C6169726F74:return 1;
		default:return 0;
		}
	case 0x6972726574657270:
		switch(wp[1]){
		case 0x00006C6169726F74:return 1;
		default:return 0;
		}
	case 0x69727265746E6F6E:
		switch(wp[1]){
		case 0x00006C6169726F74:return 1;
		default:return 0;
		}
	case 0x697272696F747561:
		switch(wp[1]){
		case 0x00006E6F69746167:return 1;
		default:return 0;
		}
	case 0x697272697265766F:
		switch(wp[1]){
		case 0x00006E6F69746167:return 1;
		default:return 0;
		}
	case 0x6972727574627573:
		switch(wp[1]){
		case 0x00006574616C7563:return 1;
		default:return 0;
		}
	case 0x697274616D657270:
		switch(wp[1]){
		case 0x00006C61696E6F6D:return 1;
		default:return 0;
		}
	case 0x697274616D6E6F6E:
		switch(wp[1]){
		case 0x00006C61696E6F6D:return 1;
		default:return 0;
		}
	case 0x697274616D6F7270:
		switch(wp[1]){
		case 0x00006C61696E6F6D:return 1;
		default:return 0;
		}
	case 0x697274636F646E69:
		switch(wp[1]){
		case 0x00006E6F6974616E:return 1;
		default:return 0;
		}
	case 0x6972746564657270:
		switch(wp[1]){
		case 0x00006C61746E656D:return 1;
		default:return 0;
		}
	case 0x69727465646E6F6E:
		switch(wp[1]){
		case 0x00006C61746E656D:return 1;
		default:return 0;
		}
	case 0x697274656D6D7973:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		case 0x00007974696C6163:return 1;
		default:return 0;
		}
	case 0x697274657473626F:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x6972746E6F636572:
		switch(wp[1]){
		case 0x00006E6F69747562:return 1;
		default:return 0;
		}
	case 0x6972746E6F636E75:
		switch(wp[1]){
		case 0x0000676E69747562:return 1;
		case 0x000079726F747562:return 1;
		default:return 0;
		}
	case 0x6972746F726F7073:
		switch(wp[1]){
		case 0x00006369746F6863:return 1;
		case 0x00007369736F6863:return 1;
		default:return 0;
		}
	case 0x6972747265707968:
		switch(wp[1]){
		case 0x00007369736F6863:return 1;
		default:return 0;
		}
	case 0x6972747265746E69:
		switch(wp[1]){
		case 0x000073756F6E6967:return 1;
		default:return 0;
		}
	case 0x6972747361676E65:
		switch(wp[1]){
		case 0x000063696874796D:return 1;
		default:return 0;
		}
	case 0x6972747365726E75:
		switch(wp[1]){
		case 0x0000656C62617463:return 1;
		case 0x0000796C64657463:return 1;
		default:return 0;
		}
	case 0x6972747365757165:
		switch(wp[1]){
		case 0x0000706968736E61:return 1;
		default:return 0;
		}
	case 0x6972747369646572:
		switch(wp[1]){
		case 0x0000657669747562:return 1;
		case 0x00006E6F69747562:return 1;
		case 0x000079726F747562:return 1;
		default:return 0;
		}
	case 0x697274737265766F:
		switch(wp[1]){
		case 0x00007373656E7463:return 1;
		case 0x0000796C746E6564:return 1;
		default:return 0;
		}
	case 0x6972747375646E69:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x69727474616E6F6E:
		switch(wp[1]){
		case 0x0000657669747562:return 1;
		case 0x00006E6F69747562:return 1;
		default:return 0;
		}
	case 0x697274746173696D:
		switch(wp[1]){
		case 0x00006E6F69747562:return 1;
		default:return 0;
		}
	case 0x69727478656E6F6E:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x6972756574616D61:
		switch(wp[1]){
		case 0x00007373656E6873:return 1;
		default:return 0;
		}
	case 0x6972756574736170:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x69727568706C7573:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		case 0x000073756F726566:return 1;
		default:return 0;
		}
	case 0x6972756F6C666572:
		switch(wp[1]){
		case 0x0000746E656D6873:return 1;
		default:return 0;
		}
	case 0x6972756F6E6C616D:
		switch(wp[1]){
		case 0x0000746E656D6873:return 1;
		default:return 0;
		}
	case 0x69727574616E6564:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x6972776C65656877:
		switch(wp[1]){
		case 0x0000676E69746867:return 1;
		default:return 0;
		}
	case 0x6972796D6F63796D:
		switch(wp[1]){
		case 0x000073697469676E:return 1;
		default:return 0;
		}
	case 0x697361656C706E75:
		switch(wp[1]){
		case 0x00007373656E676E:return 1;
		default:return 0;
		}
	case 0x6973617573726570:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6973617573736964:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x6973627573657270:
		switch(wp[1]){
		case 0x000065636E657473:return 1;
		default:return 0;
		}
	case 0x69736275736E6F63:
		switch(wp[1]){
		case 0x000079636E657473:return 1;
		default:return 0;
		}
	case 0x69736275736E6F6E:
		switch(wp[1]){
		case 0x000065636E657473:return 1;
		default:return 0;
		}
	case 0x6973656465726F66:
		switch(wp[1]){
		case 0x0000746E656D6E67:return 1;
		default:return 0;
		}
	case 0x69736568746E7973:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x6973656C66666172:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x697365726870736F:
		switch(wp[1]){
		case 0x00006369676F6C6F:return 1;
		case 0x0000726574656D6F:return 1;
		case 0x0000797274656D6F:return 1;
		default:return 0;
		}
	case 0x6973696365646E69:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x6973696365646E75:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x6973696461726170:
		switch(wp[1]){
		case 0x0000796C6C616361:return 1;
		default:return 0;
		}
	case 0x6973697270727573:
		switch(wp[1]){
		case 0x00007373656E676E:return 1;
		default:return 0;
		}
	case 0x6973697571736573:
		switch(wp[1]){
		case 0x000065746163696C:return 1;
		default:return 0;
		}
	case 0x6973697571736964:
		switch(wp[1]){
		case 0x00006C6169726F74:return 1;
		case 0x00006C616E6F6974:return 1;
		case 0x0000796C65766974:return 1;
		default:return 0;
		}
	case 0x6973697669646E69:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x69736C75706D6F63:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x69736C75766E6F63:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x69736E6172746E69:
		switch(wp[1]){
		case 0x0000796C65766974:return 1;
		case 0x0000796C746E6567:return 1;
		case 0x0000797469766974:return 1;
		default:return 0;
		}
	case 0x69736E6564657263:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x69736E6568657270:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x69736E656C636564:
		switch(wp[1]){
		case 0x0000796C6C616E6F:return 1;
		default:return 0;
		}
	case 0x69736E6570616964:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x69736E65706E6F6E:
		switch(wp[1]){
		case 0x0000656C62616E6F:return 1;
		default:return 0;
		}
	case 0x69736E6570737573:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x69736E65736E6F6E:
		switch(wp[1]){
		case 0x00007974696C6163:return 1;
		default:return 0;
		}
	case 0x69736E6574657270:
		switch(wp[1]){
		case 0x00007373656C6E6F:return 1;
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x69736E6574736964:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x69736E697265766F:
		switch(wp[1]){
		case 0x000065636E657473:return 1;
		default:return 0;
		}
	case 0x69736E6972746E69:
		switch(wp[1]){
		case 0x00007974696C6163:return 1;
		default:return 0;
		}
	case 0x69736E6972747865:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		case 0x00007974696C6163:return 1;
		default:return 0;
		}
	case 0x69736E6F636E6F6E:
		switch(wp[1]){
		case 0x0000746E656D6E67:return 1;
		default:return 0;
		}
	case 0x69736E6F70736572:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x69736F636C616863:
		switch(wp[1]){
		case 0x0000657469726564:return 1;
		default:return 0;
		}
	case 0x69736F64616E6176:
		switch(wp[1]){
		case 0x000065746163696C:return 1;
		default:return 0;
		}
	case 0x69736F646970656C:
		switch(wp[1]){
		case 0x000064696F6E6572:return 1;
		default:return 0;
		}
	case 0x69736F6475657370:
		switch(wp[1]){
		case 0x00006C616E6F6870:return 1;
		default:return 0;
		}
	case 0x69736F68706C7573:
		switch(wp[1]){
		case 0x000065646963696C:return 1;
		default:return 0;
		}
	case 0x69736F6870726163:
		switch(wp[1]){
		case 0x0000657469726564:return 1;
		default:return 0;
		}
	case 0x69736F68746E6178:
		switch(wp[1]){
		case 0x0000657469726564:return 1;
		default:return 0;
		}
	case 0x69736F6C6C796870:
		switch(wp[1]){
		case 0x000063696E6F6870:return 1;
		default:return 0;
		}
	case 0x69736F6E61746974:
		switch(wp[1]){
		case 0x000065746163696C:return 1;
		default:return 0;
		}
	case 0x69736F7070616E69:
		switch(wp[1]){
		case 0x00007373656E6574:return 1;
		default:return 0;
		}
	case 0x69736F7074736F70:
		switch(wp[1]){
		case 0x00006C616E6F6974:return 1;
		case 0x0000796C65766974:return 1;
		default:return 0;
		}
	case 0x69736F726F6C6863:
		switch(wp[1]){
		case 0x000065746163696C:return 1;
		default:return 0;
		}
	case 0x697370616C6C6F63:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x697372656D627573:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x69737265706E6F6E:
		switch(wp[1]){
		case 0x000065636E657473:return 1;
		default:return 0;
		}
	case 0x6973726570706F63:
		switch(wp[1]){
		case 0x00006E616D736564:return 1;
		default:return 0;
		}
	case 0x6973726570736964:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6973726574736261:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x6973726576696E75:
		switch(wp[1]){
		case 0x0000656B696C7974:return 1;
		case 0x00006E6169726174:return 1;
		case 0x0000706968737974:return 1;
		case 0x00007373656C7974:return 1;
		default:return 0;
		}
	case 0x69737265766E6F63:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6973727563736964:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x697373616C616874:
		switch(wp[1]){
		case 0x000065747968706F:return 1;
		case 0x00006E616964696E:return 1;
		default:return 0;
		}
	case 0x697373616C636E75:
		switch(wp[1]){
		case 0x0000656C62616966:return 1;
		default:return 0;
		}
	case 0x697373616E726170:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x69737361706D6F63:
		switch(wp[1]){
		case 0x0000656C62616E6F:return 1;
		case 0x00007373656C6E6F:return 1;
		default:return 0;
		}
	case 0x6973736170727573:
		switch(wp[1]){
		case 0x00007373656E676E:return 1;
		default:return 0;
		}
	case 0x6973736563637573:
		switch(wp[1]){
		case 0x00007373656C6E6F:return 1;
		case 0x00007373656E6576:return 1;
		case 0x0000796C6C616E6F:return 1;
		default:return 0;
		}
	case 0x69737365636E6F63:
		switch(wp[1]){
		case 0x0000657269616E6F:return 1;
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x69737365636F7270:
		switch(wp[1]){
		case 0x0000657369776E6F:return 1;
		case 0x0000796C6C616E6F:return 1;
		default:return 0;
		}
	case 0x69737365666F7270:
		switch(wp[1]){
		case 0x00007373656C6E6F:return 1;
		case 0x0000796C6C616E6F:return 1;
		default:return 0;
		}
	case 0x6973736572676572:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x6973736572676761:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x6973736572676964:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x6973736572676E69:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x6973736572706564:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		case 0x00007373656E676E:return 1;
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6973736572706572:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x6973736572706D69:
		switch(wp[1]){
		case 0x0000656C62616E6F:return 1;
		case 0x00007373656C6E6F:return 1;
		case 0x00007373656E6576:return 1;
		case 0x0000796C62616E6F:return 1;
		case 0x0000796C6C616E6F:return 1;
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x697373657270706F:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x6973736572707865:
		switch(wp[1]){
		case 0x0000656C62616E6F:return 1;
		case 0x00007373656C6E6F:return 1;
		case 0x00007373656E6576:return 1;
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6973736573736F70:
		switch(wp[1]){
		case 0x00007373656C6E6F:return 1;
		case 0x00007373656E6576:return 1;
		case 0x00007373656E676E:return 1;
		default:return 0;
		}
	case 0x697373696D616E69:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x697373696D627573:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x697373696D6D6F63:
		switch(wp[1]){
		case 0x0000657269616E6F:return 1;
		case 0x0000706968736E6F:return 1;
		default:return 0;
		}
	case 0x697373696D726570:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6973736F706D6F63:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6973736F72676E65:
		switch(wp[1]){
		case 0x00007373656E676E:return 1;
		default:return 0;
		}
	case 0x6973737563726570:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x697375616C706D69:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6973756C636E6F63:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		case 0x0000796C6C616E6F:return 1;
		default:return 0;
		}
	case 0x69737572746F7270:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x69746163696C6973:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x697461646E756F66:
		switch(wp[1]){
		case 0x00007373656C6E6F:return 1;
		case 0x0000796C6C616E6F:return 1;
		default:return 0;
		}
	case 0x6974616572636572:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x6974616572636E75:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x6974616572746572:
		switch(wp[1]){
		case 0x00007373656E676E:return 1;
		default:return 0;
		}
	case 0x69746167696C626F:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x69746168706C7573:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x697461696E69706F:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x6974616C65727269:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x6974616C72616373:
		switch(wp[1]){
		case 0x00006D726F66696E:return 1;
		default:return 0;
		}
	case 0x6974616C756D7563:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x6974616C75706F70:
		switch(wp[1]){
		case 0x00007373656C6E6F:return 1;
		default:return 0;
		}
	case 0x6974616D65686373:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x6974616D657A6365:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x6974616D67617270:
		switch(wp[1]){
		case 0x00007974696C6163:return 1;
		default:return 0;
		}
	case 0x6974616D67696E65:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x6974616D67697473:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		case 0x000073756F726566:return 1;
		default:return 0;
		}
	case 0x6974616D6D617267:
		switch(wp[1]){
		case 0x00006C6163697473:return 1;
		case 0x0000726574736163:return 1;
		default:return 0;
		}
	case 0x6974616D6F697861:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x6974616D6F747561:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x6974616D72657073:
		switch(wp[1]){
		case 0x000065726F68706F:return 1;
		case 0x000073756F726566:return 1;
		default:return 0;
		}
	case 0x6974616D73697270:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x697461707563636F:
		switch(wp[1]){
		case 0x00007373656C6E6F:return 1;
		case 0x0000796C6C616E6F:return 1;
		default:return 0;
		}
	case 0x6974617261706573:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x6974617264617571:
		switch(wp[1]){
		case 0x000073756F726566:return 1;
		default:return 0;
		}
	case 0x69746172656E6567:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x69746172656E6576:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x6974617265706D69:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x697461726F636564:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x697461726F6C6F63:
		switch(wp[1]){
		case 0x0000796C6C616E6F:return 1;
		default:return 0;
		}
	case 0x6974617275676966:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x6974617465676576:
		switch(wp[1]){
		case 0x00007373656C6E6F:return 1;
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x697461746964656D:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x6974617469676F63:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x6974617469727269:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x6974617469736568:
		switch(wp[1]){
		case 0x00007373656E676E:return 1;
		default:return 0;
		}
	case 0x697461746E616C70:
		switch(wp[1]){
		case 0x0000656B696C6E6F:return 1;
		default:return 0;
		}
	case 0x697461746F6E6564:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x697461746F727269:
		switch(wp[1]){
		case 0x0000796C6C616E6F:return 1;
		default:return 0;
		}
	case 0x6974617470616461:
		switch(wp[1]){
		case 0x0000796C6C616E6F:return 1;
		default:return 0;
		}
	case 0x69746174706D6574:
		switch(wp[1]){
		case 0x00007373656C6E6F:return 1;
		default:return 0;
		}
	case 0x6974617472696C66:
		switch(wp[1]){
		case 0x00007373656C6E6F:return 1;
		default:return 0;
		}
	case 0x6974617473657270:
		switch(wp[1]){
		case 0x00006C6163697473:return 1;
		default:return 0;
		}
	case 0x69746174736E6F6E:
		switch(wp[1]){
		case 0x00006C6163697473:return 1;
		default:return 0;
		}
	case 0x69746174756C6173:
		switch(wp[1]){
		case 0x00007373656C6E6F:return 1;
		default:return 0;
		}
	case 0x6974617475706572:
		switch(wp[1]){
		case 0x00007373656C6E6F:return 1;
		default:return 0;
		}
	case 0x6974617475706D69:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x6974617669726564:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		case 0x0000796C6C616E6F:return 1;
		default:return 0;
		}
	case 0x697462756F646E75:
		switch(wp[1]){
		case 0x00007373656E676E:return 1;
		default:return 0;
		}
	case 0x697463616C617473:
		switch(wp[1]){
		case 0x00006D726F666974:return 1;
		default:return 0;
		}
	case 0x697463616F747561:
		switch(wp[1]){
		case 0x00006E6F69746176:return 1;
		default:return 0;
		}
	case 0x697463617265766F:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x6974636172666572:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x6974636172706D69:
		switch(wp[1]){
		case 0x00007974696C6163:return 1;
		default:return 0;
		}
	case 0x6974636172706E75:
		switch(wp[1]){
		case 0x00007974696C6163:return 1;
		default:return 0;
		}
	case 0x6974636172746564:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x6974636172746572:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6974636172746574:
		switch(wp[1]){
		case 0x000064696C6C656E:return 1;
		default:return 0;
		}
	case 0x6974636172747461:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		case 0x0000796C6C616E6F:return 1;
		default:return 0;
		}
	case 0x6974636566726570:
		switch(wp[1]){
		case 0x00006D73696C6962:return 1;
		case 0x00006E61696C6962:return 1;
		case 0x000072657A696E6F:return 1;
		case 0x0000726F74616E6F:return 1;
		case 0x00007373656E6576:return 1;
		case 0x0000746E656D6E6F:return 1;
		case 0x00007473696C6962:return 1;
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x697463656A627573:
		switch(wp[1]){
		case 0x0000636974736976:return 1;
		case 0x00007373656E6576:return 1;
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x697463656C666572:
		switch(wp[1]){
		case 0x00007373656C6E6F:return 1;
		case 0x00007373656E6576:return 1;
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x697463656C666E69:
		switch(wp[1]){
		case 0x00007373656C6E6F:return 1;
		case 0x0000796C6C616E6F:return 1;
		default:return 0;
		}
	case 0x697463656C6C6F63:
		switch(wp[1]){
		case 0x0000636974736976:return 1;
		case 0x00007373656E6576:return 1;
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6974636570736572:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x6974636572726F63:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x69746365746F7270:
		switch(wp[1]){
		case 0x0000706968736E6F:return 1;
		case 0x00007373656E6576:return 1;
		case 0x00007373656E676E:return 1;
		default:return 0;
		}
	case 0x6974636964657270:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x69746369646E6976:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x697463696C666661:
		switch(wp[1]){
		case 0x00007373656C6E6F:return 1;
		default:return 0;
		}
	case 0x6974636972747361:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x69746369766E6F63:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x6974636E61736E75:
		switch(wp[1]){
		case 0x0000656C62616E6F:return 1;
		case 0x0000796C64656966:return 1;
		default:return 0;
		}
	case 0x69746375646E6F63:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x69746375646F7270:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6974637572666E69:
		switch(wp[1]){
		case 0x000073756F726566:return 1;
		default:return 0;
		}
	case 0x697463796E6F6567:
		switch(wp[1]){
		case 0x00006369706F7274:return 1;
		case 0x000063697473616E:return 1;
		default:return 0;
		}
	case 0x69746568706F7270:
		switch(wp[1]){
		case 0x00007974696C6163:return 1;
		default:return 0;
		}
	case 0x69746568746E7973:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x6974656E6F6D6564:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x6974656E6F6D6572:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x69746572636E7973:
		switch(wp[1]){
		case 0x00006C6163697473:return 1;
		default:return 0;
		}
	case 0x6974657263736964:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		case 0x0000796C6C616E6F:return 1;
		default:return 0;
		}
	case 0x69746572696D6573:
		switch(wp[1]){
		case 0x00006574616C7563:return 1;
		case 0x0000746E656D6572:return 1;
		default:return 0;
		}
	case 0x697465726F656874:
		switch(wp[1]){
		case 0x00006D73696C6163:return 1;
		default:return 0;
		}
	case 0x6974696261686E69:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x6974696369726573:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x69746967656C6C69:
		switch(wp[1]){
		case 0x0000657A6974616D:return 1;
		case 0x00006E6F6974616D:return 1;
		case 0x0000796C6574616D:return 1;
		default:return 0;
		}
	case 0x6974696870617267:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x6974696D6F6C6F64:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x6974696E656C6573:
		switch(wp[1]){
		case 0x000073756F726566:return 1;
		default:return 0;
		}
	case 0x6974696E69666564:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x6974696E6F6D696C:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x6974696E6F6D6D61:
		switch(wp[1]){
		case 0x000073756F726566:return 1;
		default:return 0;
		}
	case 0x697469726F6C6863:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x697469736E617274:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		case 0x0000796C6C616E6F:return 1;
		default:return 0;
		}
	case 0x697469736F707061:
		switch(wp[1]){
		case 0x0000796C6C616E6F:return 1;
		default:return 0;
		}
	case 0x697469736F70706F:
		switch(wp[1]){
		case 0x00007373656C6E6F:return 1;
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x6974697465706572:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x69746C7563657270:
		switch(wp[1]){
		case 0x00006E6F69746176:return 1;
		default:return 0;
		}
	case 0x69746C75636C616D:
		switch(wp[1]){
		case 0x00006E6F69746176:return 1;
		default:return 0;
		}
	case 0x69746C75636E6F6E:
		switch(wp[1]){
		case 0x00006E6F69746176:return 1;
		default:return 0;
		}
	case 0x69746E616372656D:
		switch(wp[1]){
		case 0x000063697473696C:return 1;
		default:return 0;
		}
	case 0x69746E61666C7573:
		switch(wp[1]){
		case 0x00006564696E6F6D:return 1;
		default:return 0;
		}
	case 0x69746E6168636E65:
		switch(wp[1]){
		case 0x00007373656E676E:return 1;
		default:return 0;
		}
	case 0x69746E6169746E61:
		switch(wp[1]){
		case 0x0000656D797A6E65:return 1;
		default:return 0;
		}
	case 0x69746E616D616964:
		switch(wp[1]){
		case 0x000073756F726566:return 1;
		default:return 0;
		}
	case 0x69746E616F696874:
		switch(wp[1]){
		case 0x00006574616E6F6D:return 1;
		case 0x00006574696E6F6D:return 1;
		default:return 0;
		}
	case 0x69746E616F707968:
		switch(wp[1]){
		case 0x00006574616E6F6D:return 1;
		default:return 0;
		}
	case 0x69746E616F727970:
		switch(wp[1]){
		case 0x00006574616E6F6D:return 1;
		default:return 0;
		}
	case 0x69746E6170727574:
		switch(wp[1]){
		case 0x000064656577656E:return 1;
		default:return 0;
		}
	case 0x69746E6175716E75:
		switch(wp[1]){
		case 0x0000657669746174:return 1;
		default:return 0;
		}
	case 0x69746E6563616C70:
		switch(wp[1]){
		case 0x000073756F726566:return 1;
		case 0x000073756F726567:return 1;
		default:return 0;
		}
	case 0x69746E6564627573:
		switch(wp[1]){
		case 0x00006574616C7563:return 1;
		default:return 0;
		}
	case 0x69746E6564696E75:
		switch(wp[1]){
		case 0x0000656C62616966:return 1;
		case 0x00006574616C7563:return 1;
		case 0x0000796C62616966:return 1;
		case 0x0000796C64656966:return 1;
		default:return 0;
		}
	case 0x69746E6564697274:
		switch(wp[1]){
		case 0x000073756F726566:return 1;
		default:return 0;
		}
	case 0x69746E6564757270:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x69746E6568747561:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x69746E656D696C61:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x69746E656D726173:
		switch(wp[1]){
		case 0x000073756F726566:return 1;
		default:return 0;
		}
	case 0x69746E656D726F74:
		switch(wp[1]){
		case 0x00007373656E676E:return 1;
		default:return 0;
		}
	case 0x69746E6570726573:
		switch(wp[1]){
		case 0x000073756F726566:return 1;
		case 0x000073756F726F76:return 1;
		case 0x0000796C676E696E:return 1;
		default:return 0;
		}
	case 0x69746E6570727574:
		switch(wp[1]){
		case 0x000064656577656E:return 1;
		default:return 0;
		}
	case 0x69746E6572707061:
		switch(wp[1]){
		case 0x0000646F6F686563:return 1;
		case 0x0000706968736563:return 1;
		case 0x0000746E656D6563:return 1;
		default:return 0;
		}
	case 0x69746E6573657270:
		switch(wp[1]){
		case 0x00006C61746E656D:return 1;
		case 0x00007373656E6576:return 1;
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x69746E65736E6F63:
		switch(wp[1]){
		case 0x00007373656E676E:return 1;
		default:return 0;
		}
	case 0x69746E6573726570:
		switch(wp[1]){
		case 0x000079636E656373:return 1;
		default:return 0;
		}
	case 0x69746E6575676E75:
		switch(wp[1]){
		case 0x000073756F726566:return 1;
		default:return 0;
		}
	case 0x69746E6576657270:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x69746E65766E6F63:
		switch(wp[1]){
		case 0x0000796C6C616E6F:return 1;
		default:return 0;
		}
	case 0x69746E65766E6F6E:
		switch(wp[1]){
		case 0x00006E6F6974616C:return 1;
		default:return 0;
		}
	case 0x69746E6F63627573:
		switch(wp[1]){
		case 0x00006C61746E656E:return 1;
		default:return 0;
		}
	case 0x69746E6F63657270:
		switch(wp[1]){
		case 0x00006C61746E656E:return 1;
		default:return 0;
		}
	case 0x69746E6F63697065:
		switch(wp[1]){
		case 0x00006C61746E656E:return 1;
		default:return 0;
		}
	case 0x69746E6F636E6F6E:
		switch(wp[1]){
		case 0x000065636E61756E:return 1;
		case 0x00006C61746E656E:return 1;
		default:return 0;
		}
	case 0x69746E6F63736964:
		switch(wp[1]){
		case 0x000065636E61756E:return 1;
		case 0x0000656C6261756E:return 1;
		default:return 0;
		}
	case 0x69746E6F6373696D:
		switch(wp[1]){
		case 0x000065636E61756E:return 1;
		default:return 0;
		}
	case 0x69746E6F72666661:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		case 0x00007373656E676E:return 1;
		default:return 0;
		}
	case 0x69746F63696C6973:
		switch(wp[1]){
		case 0x00006574616E6174:return 1;
		default:return 0;
		}
	case 0x69746F67656E6572:
		switch(wp[1]){
		case 0x0000736E6F697461:return 1;
		default:return 0;
		}
	case 0x69746F6C6C697567:
		switch(wp[1]){
		case 0x0000746E656D656E:return 1;
		default:return 0;
		}
	case 0x69746F6D6F636F6C:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x69746F72656C6373:
		switch(wp[1]){
		case 0x0000796D6F746F63:return 1;
		default:return 0;
		}
	case 0x6974706164616572:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x69747065636E6F63:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x6974706563726570:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6974706563737573:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6974706D65646572:
		switch(wp[1]){
		case 0x00007373656C6E6F:return 1;
		default:return 0;
		}
	case 0x6974706D65746E75:
		switch(wp[1]){
		case 0x00007373656E676E:return 1;
		default:return 0;
		}
	case 0x697470726F736261:
		switch(wp[1]){
		case 0x0000726574656D6F:return 1;
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x6974707572726F63:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6974707572736964:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x69747261696D6573:
		switch(wp[1]){
		case 0x00006574616C7563:return 1;
		default:return 0;
		}
	case 0x6974726169757165:
		switch(wp[1]){
		case 0x00006574616C7563:return 1;
		default:return 0;
		}
	case 0x6974726170627573:
		switch(wp[1]){
		case 0x000064656E6F6974:return 1;
		default:return 0;
		}
	case 0x69747261706E6F6E:
		switch(wp[1]){
		case 0x0000746E61706963:return 1;
		default:return 0;
		}
	case 0x697472617265766F:
		switch(wp[1]){
		case 0x00006C6169636966:return 1;
		default:return 0;
		}
	case 0x69747261746C756D:
		switch(wp[1]){
		case 0x00006574616C7563:return 1;
		default:return 0;
		}
	case 0x6974726570736576:
		switch(wp[1]){
		case 0x000064696E6F696C:return 1;
		default:return 0;
		}
	case 0x69747265766E6F63:
		switch(wp[1]){
		case 0x00007373656E676E:return 1;
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6974726576726570:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x6974726F6D616E75:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x6974726F706F7270:
		switch(wp[1]){
		case 0x0000656C62616E6F:return 1;
		case 0x00007373656C6E6F:return 1;
		case 0x0000746E656D6E6F:return 1;
		case 0x0000796C62616E6F:return 1;
		case 0x0000796C6C616E6F:return 1;
		default:return 0;
		}
	case 0x6974726F74736964:
		switch(wp[1]){
		case 0x00007373656C6E6F:return 1;
		default:return 0;
		}
	case 0x697472756F636E75:
		switch(wp[1]){
		case 0x0000656B696C7265:return 1;
		default:return 0;
		}
	case 0x69747361636E6F6E:
		switch(wp[1]){
		case 0x00006E6F69746167:return 1;
		default:return 0;
		}
	case 0x697473616964656D:
		switch(wp[1]){
		case 0x0000796D6F746F6E:return 1;
		default:return 0;
		}
	case 0x6974736172666E69:
		switch(wp[1]){
		case 0x00006C6174616D67:return 1;
		default:return 0;
		}
	case 0x69747361746E6166:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		case 0x00007974696C6163:return 1;
		default:return 0;
		}
	case 0x6974736275736572:
		switch(wp[1]){
		case 0x00006E6F69747574:return 1;
		default:return 0;
		}
	case 0x6974736275736962:
		switch(wp[1]){
		case 0x00006E6F69747574:return 1;
		default:return 0;
		}
	case 0x6974736275736964:
		switch(wp[1]){
		case 0x00006E6F69747574:return 1;
		default:return 0;
		}
	case 0x6974736564657270:
		switch(wp[1]){
		case 0x000065766974616E:return 1;
		case 0x00006E616972616E:return 1;
		case 0x00006E6F6974616E:return 1;
		case 0x00006E6F69747574:return 1;
		case 0x0000796C6574616E:return 1;
		default:return 0;
		}
	case 0x6974736567677573:
		switch(wp[1]){
		case 0x0000656C62616E6F:return 1;
		case 0x00007373656E6576:return 1;
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x697473657265766F:
		switch(wp[1]){
		case 0x00006E6F6974616D:return 1;
		default:return 0;
		}
	case 0x69747365726E6F6E:
		switch(wp[1]){
		case 0x00006E6F69747574:return 1;
		default:return 0;
		}
	case 0x6974736575716E75:
		switch(wp[1]){
		case 0x0000656C62616E6F:return 1;
		case 0x0000796C62616E6F:return 1;
		case 0x0000796C64656E6F:return 1;
		default:return 0;
		}
	case 0x6974736963736166:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x6974736964627573:
		switch(wp[1]){
		case 0x000068736975676E:return 1;
		case 0x00006E6F6974636E:return 1;
		default:return 0;
		}
	case 0x6974736964657270:
		switch(wp[1]){
		case 0x000068736975676E:return 1;
		case 0x00006E6F6974636E:return 1;
		default:return 0;
		}
	case 0x69747369646E6F6E:
		switch(wp[1]){
		case 0x000065766974636E:return 1;
		default:return 0;
		}
	case 0x697473696473696D:
		switch(wp[1]){
		case 0x000068736975676E:return 1;
		default:return 0;
		}
	case 0x6974736968706F73:
		switch(wp[1]){
		case 0x0000657669746163:return 1;
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x6974736972706572:
		switch(wp[1]){
		case 0x00006E6F6974616E:return 1;
		default:return 0;
		}
	case 0x6974736973726570:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x6974736E696C616D:
		switch(wp[1]){
		case 0x00006E6F69747574:return 1;
		default:return 0;
		}
	case 0x6974736E696E6F6E:
		switch(wp[1]){
		case 0x00006E6F69747574:return 1;
		default:return 0;
		}
	case 0x6974736E6F636572:
		switch(wp[1]){
		case 0x00006E6F69747574:return 1;
		default:return 0;
		}
	case 0x6974736F6372616E:
		switch(wp[1]){
		case 0x0000746E616C756D:return 1;
		default:return 0;
		}
	case 0x6974736F72657470:
		switch(wp[1]){
		case 0x0000636974616D67:return 1;
		default:return 0;
		}
	case 0x6974737265707573:
		switch(wp[1]){
		case 0x00006574616C756D:return 1;
		default:return 0;
		}
	case 0x6974737265746E69:
		switch(wp[1]){
		case 0x00006574616C756D:return 1;
		case 0x0000796C6C616974:return 1;
		default:return 0;
		}
	case 0x6974737561687865:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x69747375626D6F63:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x69747375666E6F63:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x6974737567736964:
		switch(wp[1]){
		case 0x00007373656E676E:return 1;
		default:return 0;
		}
	case 0x6974737572746E61:
		switch(wp[1]){
		case 0x0000706968736E6F:return 1;
		default:return 0;
		}
	case 0x6974746575716F63:
		switch(wp[1]){
		case 0x00007373656E6873:return 1;
		default:return 0;
		}
	case 0x6974756C676E6F63:
		switch(wp[1]){
		case 0x000065766974616E:return 1;
		case 0x00006E6F6974616E:return 1;
		default:return 0;
		}
	case 0x6974756C6F736261:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x6974756C6F766572:
		switch(wp[1]){
		case 0x000072657A696E6F:return 1;
		case 0x0000796C6C616E6F:return 1;
		default:return 0;
		}
	case 0x6974756E696D6964:
		switch(wp[1]){
		case 0x00007373656E6576:return 1;
		default:return 0;
		}
	case 0x6974757263736E75:
		switch(wp[1]){
		case 0x0000676E697A696E:return 1;
		default:return 0;
		}
	case 0x6974757266667573:
		switch(wp[1]){
		case 0x000065736F6C7563:return 1;
		default:return 0;
		}
	case 0x69747865696D6573:
		switch(wp[1]){
		case 0x00006E6F6974636E:return 1;
		default:return 0;
		}
	case 0x697567646F6F6C62:
		switch(wp[1]){
		case 0x00007373656C746C:return 1;
		default:return 0;
		}
	case 0x6975676E61736E75:
		switch(wp[1]){
		case 0x00007373656E656E:return 1;
		default:return 0;
		}
	case 0x6975676E61737865:
		switch(wp[1]){
		case 0x00006E6F6974616E:return 1;
		default:return 0;
		}
	case 0x6975676E69747865:
		switch(wp[1]){
		case 0x0000656C62616873:return 1;
		case 0x0000746E656D6873:return 1;
		default:return 0;
		}
	case 0x6975676E75696E75:
		switch(wp[1]){
		case 0x00006574616C7563:return 1;
		default:return 0;
		}
	case 0x69757163616E6F6E:
		switch(wp[1]){
		case 0x0000657669746973:return 1;
		case 0x0000746E65637365:return 1;
		default:return 0;
		}
	case 0x69757163616F7270:
		switch(wp[1]){
		case 0x00006E6F69746973:return 1;
		default:return 0;
		}
	case 0x697571656C726168:
		switch(wp[1]){
		case 0x000065757173656E:return 1;
		default:return 0;
		}
	case 0x6975716572657270:
		switch(wp[1]){
		case 0x00006E6F69746973:return 1;
		case 0x0000746E656D6572:return 1;
		default:return 0;
		}
	case 0x69757165726E6F6E:
		switch(wp[1]){
		case 0x00006E6F69746973:return 1;
		case 0x0000746E656D6572:return 1;
		default:return 0;
		}
	case 0x697571696C657270:
		switch(wp[1]){
		case 0x00006E6F69746164:return 1;
		default:return 0;
		}
	case 0x697571696C6E6F6E:
		switch(wp[1]){
		case 0x0000676E69746164:return 1;
		case 0x00006E6F69746164:return 1;
		default:return 0;
		}
	case 0x6975716E61766E75:
		switch(wp[1]){
		case 0x0000656C62616873:return 1;
		default:return 0;
		}
	case 0x6975716E69657270:
		switch(wp[1]){
		case 0x00006E6F69746973:return 1;
		default:return 0;
		}
	case 0x6975716E696C6572:
		switch(wp[1]){
		case 0x0000746E656D6873:return 1;
		default:return 0;
		}
	case 0x6975716F6C6C6F63:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x6975716F6E696D61:
		switch(wp[1]){
		case 0x0000656E696C6F6E:return 1;
		default:return 0;
		}
	case 0x6975716F72647968:
		switch(wp[1]){
		case 0x0000656E696C6F6E:return 1;
		default:return 0;
		}
	case 0x6975716F7A6E6562:
		switch(wp[1]){
		case 0x0000656E696C6F6E:return 1;
		default:return 0;
		}
	case 0x6975746970737964:
		switch(wp[1]){
		case 0x00006D7369726174:return 1;
		default:return 0;
		}
	case 0x69766172676E6F6E:
		switch(wp[1]){
		case 0x00006E6F69746174:return 1;
		default:return 0;
		}
	case 0x697669646E696E75:
		switch(wp[1]){
		case 0x0000646574617564:return 1;
		default:return 0;
		}
	case 0x6976696563726570:
		switch(wp[1]){
		case 0x00007373656E676E:return 1;
		default:return 0;
		}
	case 0x6976697268746E75:
		switch(wp[1]){
		case 0x00007373656E676E:return 1;
		default:return 0;
		}
	case 0x69766974616C6572:
		switch(wp[1]){
		case 0x00006E6F6974617A:return 1;
		default:return 0;
		}
	case 0x69766F6475657370:
		switch(wp[1]){
		case 0x0000656E69726570:return 1;
		default:return 0;
		}
	case 0x69766F6964726163:
		switch(wp[1]){
		case 0x00006C6172656373:return 1;
		default:return 0;
		}
	case 0x69766F6E69736572:
		switch(wp[1]){
		case 0x000073756F657274:return 1;
		default:return 0;
		}
	case 0x69766F7275656C70:
		switch(wp[1]){
		case 0x00006C6172656373:return 1;
		default:return 0;
		}
	case 0x69767265736E6F6E:
		switch(wp[1]){
		case 0x00006C6169746E65:return 1;
		default:return 0;
		}
	case 0x6976726573736964:
		switch(wp[1]){
		case 0x0000656C62616563:return 1;
		case 0x0000796C62616563:return 1;
		default:return 0;
		}
	case 0x6977747265746E69:
		switch(wp[1]){
		case 0x0000746E656D656E:return 1;
		case 0x0000796C676E696E:return 1;
		default:return 0;
		}
	case 0x6978656C706D6F63:
		switch(wp[1]){
		case 0x00007373656C6E6F:return 1;
		case 0x0000796C62616E6F:return 1;
		case 0x0000796C6C616E6F:return 1;
		default:return 0;
		}
	case 0x69786F6461726170:
		switch(wp[1]){
		case 0x00006D73696C6163:return 1;
		case 0x00007974696C6163:return 1;
		default:return 0;
		}
	case 0x69786F6F746F6870:
		switch(wp[1]){
		case 0x0000657669746164:return 1;
		case 0x00006E6F69746164:return 1;
		default:return 0;
		}
	case 0x69786F7265707968:
		switch(wp[1]){
		case 0x00006E6F69746164:return 1;
		default:return 0;
		}
	case 0x69786F746E696E75:
		switch(wp[1]){
		case 0x0000676E69746163:return 1;
		default:return 0;
		}
	case 0x69786F746F747561:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x6978756C666E6F63:
		switch(wp[1]){
		case 0x00007974696C6962:return 1;
		default:return 0;
		}
	case 0x697966696C6C6F6D:
		switch(wp[1]){
		case 0x00007373656E676E:return 1;
		default:return 0;
		}
	case 0x6979667369746173:
		switch(wp[1]){
		case 0x00007373656E676E:return 1;
		default:return 0;
		}
	case 0x6A626F7265707573:
		switch(wp[1]){
		case 0x00006E6F69746365:return 1;
		default:return 0;
		}
	case 0x6A626F7265746E69:
		switch(wp[1]){
		case 0x0000657669746365:return 1;
		default:return 0;
		}
	case 0x6A65647265707573:
		switch(wp[1]){
		case 0x00006E6F69746365:return 1;
		default:return 0;
		}
	case 0x6A6E696F7263696D:
		switch(wp[1]){
		case 0x00006E6F69746365:return 1;
		default:return 0;
		}
	case 0x6A6E697265707573:
		switch(wp[1]){
		case 0x0000656369747375:return 1;
		default:return 0;
		}
	case 0x6A6F6E65646F7564:
		switch(wp[1]){
		case 0x00006C616E756A65:return 1;
		default:return 0;
		}
	case 0x6A7265746E756F63:
		switch(wp[1]){
		case 0x0000676E69676475:return 1;
		default:return 0;
		}
	case 0x6B616D7373657264:
		switch(wp[1]){
		case 0x0000706968737265:return 1;
		default:return 0;
		}
	case 0x6B61747265646E75:
		switch(wp[1]){
		case 0x0000656B696C7265:return 1;
		default:return 0;
		}
	case 0x6B63616265726F66:
		switch(wp[1]){
		case 0x0000796C64726177:return 1;
		default:return 0;
		}
	case 0x6B636168736D6172:
		switch(wp[1]){
		case 0x00007373656E656C:return 1;
		default:return 0;
		}
	case 0x6B6E616475657370:
		switch(wp[1]){
		case 0x00007369736F6C79:return 1;
		default:return 0;
		}
	case 0x6B6E6972776E6F6E:
		switch(wp[1]){
		case 0x0000656C6261656C:return 1;
		default:return 0;
		}
	case 0x6B6F727463656C65:
		switch(wp[1]){
		case 0x0000636974656E69:return 1;
		default:return 0;
		}
	case 0x6B6F766F72706E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x6B726F7768637261:
		switch(wp[1]){
		case 0x000072657473616D:return 1;
		default:return 0;
		}
	case 0x6B736F6475657370:
		switch(wp[1]){
		case 0x00006C6174656C65:return 1;
		case 0x00006E6F74656C65:return 1;
		default:return 0;
		}
	case 0x6B736F72656C6373:
		switch(wp[1]){
		case 0x00006C6174656C65:return 1;
		case 0x00006E6F74656C65:return 1;
		default:return 0;
		}
	case 0x6C61636172746E69:
		switch(wp[1]){
		case 0x000072616C756369:return 1;
		default:return 0;
		}
	case 0x6C61636172747865:
		switch(wp[1]){
		case 0x000072616C756369:return 1;
		default:return 0;
		}
	case 0x6C616365646E6F6E:
		switch(wp[1]){
		case 0x0000646569666963:return 1;
		default:return 0;
		}
	case 0x6C61636F68706F6C:
		switch(wp[1]){
		case 0x000073706F726874:return 1;
		default:return 0;
		}
	case 0x6C61636F69626974:
		switch(wp[1]){
		case 0x00006E61656E6163:return 1;
		default:return 0;
		}
	case 0x6C6163736E617274:
		switch(wp[1]){
		case 0x0000746E65637365:return 1;
		default:return 0;
		}
	case 0x6C61657665726E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x6C616665646E6F6E:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x6C61676172747361:
		switch(wp[1]){
		case 0x000079636E616D6F:return 1;
		case 0x0000796D6F746365:return 1;
		default:return 0;
		}
	case 0x6C61687065636E65:
		switch(wp[1]){
		case 0x0000616D7968706F:return 1;
		case 0x0000636972656D6F:return 1;
		case 0x0000656C656F636F:return 1;
		case 0x000065706F63736F:return 1;
		case 0x000068706172676F:return 1;
		case 0x0000726574656D6F:return 1;
		case 0x000079687461706F:return 1;
		case 0x000079706F63736F:return 1;
		default:return 0;
		}
	case 0x6C6168706F707968:
		switch(wp[1]){
		case 0x00006D7369676E61:return 1;
		default:return 0;
		}
	case 0x6C616870796C6F70:
		switch(wp[1]){
		case 0x00006D7369676E61:return 1;
		default:return 0;
		}
	case 0x6C6169636F736E75:
		switch(wp[1]){
		case 0x0000656C62617A69:return 1;
		default:return 0;
		}
	case 0x6C61697369746E61:
		switch(wp[1]){
		case 0x00006575676F6761:return 1;
		default:return 0;
		}
	case 0x6C61697571736573:
		switch(wp[1]){
		case 0x000073756F726574:return 1;
		default:return 0;
		}
	case 0x6C616C6C696E6176:
		switch(wp[1]){
		case 0x0000656479686564:return 1;
		default:return 0;
		}
	case 0x6C616C6F63796C67:
		switch(wp[1]){
		case 0x0000656479686564:return 1;
		default:return 0;
		}
	case 0x6C616D616E6E6963:
		switch(wp[1]){
		case 0x0000656479686564:return 1;
		default:return 0;
		}
	case 0x6C616D6F7274656D:
		switch(wp[1]){
		case 0x00007369736F6361:return 1;
		default:return 0;
		}
	case 0x6C616D7265746E69:
		switch(wp[1]){
		case 0x000072616C6F656C:return 1;
		default:return 0;
		}
	case 0x6C616E696D697263:
		switch(wp[1]){
		case 0x0000736369747369:return 1;
		default:return 0;
		}
	case 0x6C616E69746E6F66:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x6C616E6F69746172:
		switch(wp[1]){
		case 0x0000656C62617A69:return 1;
		default:return 0;
		}
	case 0x6C616E6F746F7263:
		switch(wp[1]){
		case 0x0000656479686564:return 1;
		default:return 0;
		}
	case 0x6C616F63696C6973:
		switch(wp[1]){
		case 0x0000656E696C616B:return 1;
		default:return 0;
		}
	case 0x6C616F6475657370:
		switch(wp[1]){
		case 0x000064696F6C616B:return 1;
		case 0x000072616C6F6576:return 1;
		default:return 0;
		}
	case 0x6C616F7265746568:
		switch(wp[1]){
		case 0x000065736F6D7562:return 1;
		default:return 0;
		}
	case 0x6C616F74616C6170:
		switch(wp[1]){
		case 0x000072616C6F6576:return 1;
		default:return 0;
		}
	case 0x6C616F7465676576:
		switch(wp[1]){
		case 0x000064696F6C616B:return 1;
		case 0x0000656E696C616B:return 1;
		default:return 0;
		}
	case 0x6C61706973736966:
		switch(wp[1]){
		case 0x00006E6F6974616D:return 1;
		default:return 0;
		}
	case 0x6C61706F696D6573:
		switch(wp[1]){
		case 0x0000746E65637365:return 1;
		default:return 0;
		}
	case 0x6C61706F6C75636F:
		switch(wp[1]){
		case 0x00006C6172626570:return 1;
		default:return 0;
		}
	case 0x6C61707265746E69:
		switch(wp[1]){
		case 0x00006C6172626570:return 1;
		default:return 0;
		}
	case 0x6C61726563796C67:
		switch(wp[1]){
		case 0x0000656479686564:return 1;
		default:return 0;
		}
	case 0x6C61727461726576:
		switch(wp[1]){
		case 0x0000656479686564:return 1;
		default:return 0;
		}
	case 0x6C61727566727566:
		switch(wp[1]){
		case 0x0000656479686564:return 1;
		default:return 0;
		}
	case 0x6C61736F74656361:
		switch(wp[1]){
		case 0x000063696C796369:return 1;
		default:return 0;
		}
	case 0x6C617465726E6F6E:
		switch(wp[1]){
		case 0x00006E6F69746169:return 1;
		default:return 0;
		}
	case 0x6C6174726F6D6D69:
		switch(wp[1]){
		case 0x0000656C62617A69:return 1;
		default:return 0;
		}
	case 0x6C6174736E696572:
		switch(wp[1]){
		case 0x00006E6F6974616C:return 1;
		default:return 0;
		}
	case 0x6C617665726E6F6E:
		switch(wp[1]){
		case 0x00006E6F69746175:return 1;
		default:return 0;
		}
	case 0x6C61766968636E75:
		switch(wp[1]){
		case 0x0000796C73756F72:return 1;
		default:return 0;
		}
	case 0x6C61766E6F636572:
		switch(wp[1]){
		case 0x0000746E65637365:return 1;
		default:return 0;
		}
	case 0x6C61767265646E75:
		switch(wp[1]){
		case 0x00006E6F69746175:return 1;
		case 0x0000746E656D6575:return 1;
		case 0x0000796C676E6975:return 1;
		default:return 0;
		}
	case 0x6C6176736E617274:
		switch(wp[1]){
		case 0x00006E6F69746175:return 1;
		default:return 0;
		}
	case 0x6C6179686F747963:
		switch(wp[1]){
		case 0x00006D73616C706F:return 1;
		default:return 0;
		}
	case 0x6C626F6572657473:
		switch(wp[1]){
		case 0x0000616C75747361:return 1;
		default:return 0;
		}
	case 0x6C626F68706D796C:
		switch(wp[1]){
		case 0x0000616D6F747361:return 1;
		default:return 0;
		}
	case 0x6C626F6E69746572:
		switch(wp[1]){
		case 0x0000616D6F747361:return 1;
		default:return 0;
		}
	case 0x6C626F72656C6373:
		switch(wp[1]){
		case 0x0000616D65747361:return 1;
		default:return 0;
		}
	case 0x6C626F7461726574:
		switch(wp[1]){
		case 0x0000616D6F747361:return 1;
		default:return 0;
		}
	case 0x6C62756F72746E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x6C63617463657073:
		switch(wp[1]){
		case 0x000072656B616D65:return 1;
		default:return 0;
		}
	case 0x6C636E697265766F:
		switch(wp[1]){
		case 0x0000656C62616E69:return 1;
		default:return 0;
		}
	case 0x6C636E6F636E6F6E:
		switch(wp[1]){
		case 0x000079636E656475:return 1;
		default:return 0;
		}
	case 0x6C636F6475657370:
		switch(wp[1]){
		case 0x00006C6163697265:return 1;
		default:return 0;
		}
	case 0x6C636F65616C6170:
		switch(wp[1]){
		case 0x0000636974616D69:return 1;
		default:return 0;
		}
	case 0x6C636F6863797370:
		switch(wp[1]){
		case 0x00006C6163696E69:return 1;
		default:return 0;
		}
	case 0x6C636F6C6C796870:
		switch(wp[1]){
		case 0x000064696F696461:return 1;
		default:return 0;
		}
	case 0x6C63736F63616870:
		switch(wp[1]){
		case 0x00007369736F7265:return 1;
		default:return 0;
		}
	case 0x6C63736F6574736F:
		switch(wp[1]){
		case 0x00007369736F7265:return 1;
		default:return 0;
		}
	case 0x6C63736F69676E61:
		switch(wp[1]){
		case 0x00006369746F7265:return 1;
		case 0x00007369736F7265:return 1;
		default:return 0;
		}
	case 0x6C63736F6C65796D:
		switch(wp[1]){
		case 0x00007369736F7265:return 1;
		default:return 0;
		}
	case 0x6C63736F6E656461:
		switch(wp[1]){
		case 0x00007369736F7265:return 1;
		default:return 0;
		}
	case 0x6C63736F72657475:
		switch(wp[1]){
		case 0x00007369736F7265:return 1;
		default:return 0;
		}
	case 0x6C63736F7275656E:
		switch(wp[1]){
		case 0x00007369736F7265:return 1;
		default:return 0;
		}
	case 0x6C63736F74726F61:
		switch(wp[1]){
		case 0x00007369736F7265:return 1;
		default:return 0;
		}
	case 0x6C65626172746C75:
		switch(wp[1]){
		case 0x0000676E69766569:return 1;
		default:return 0;
		}
	case 0x6C65636172666E69:
		switch(wp[1]){
		case 0x00006C6169747365:return 1;
		default:return 0;
		}
	case 0x6C65636E61636572:
		switch(wp[1]){
		case 0x00006E6F6974616C:return 1;
		default:return 0;
		}
	case 0x6C65636F6C796D61:
		switch(wp[1]){
		case 0x000065736F6C756C:return 1;
		default:return 0;
		}
	case 0x6C65636F6E67696C:
		switch(wp[1]){
		case 0x000065736F6C756C:return 1;
		default:return 0;
		}
	case 0x6C65636F70696461:
		switch(wp[1]){
		case 0x000065736F6C756C:return 1;
		default:return 0;
		}
	case 0x6C65636F72647968:
		switch(wp[1]){
		case 0x000065736F6C756C:return 1;
		default:return 0;
		}
	case 0x6C65636F7274696E:
		switch(wp[1]){
		case 0x000065736F6C756C:return 1;
		default:return 0;
		}
	case 0x6C65636F74636570:
		switch(wp[1]){
		case 0x000065736F6C756C:return 1;
		default:return 0;
		}
	case 0x6C65636F746F6870:
		switch(wp[1]){
		case 0x000065736F6C756C:return 1;
		default:return 0;
		}
	case 0x6C65637265707573:
		switch(wp[1]){
		case 0x00006C6169747365:return 1;
		default:return 0;
		}
	case 0x6C6567616C666E65:
		switch(wp[1]){
		case 0x00006E6F6974616C:return 1;
		default:return 0;
		}
	case 0x6C6567616C667865:
		switch(wp[1]){
		case 0x00006E6F6974616C:return 1;
		default:return 0;
		}
	case 0x6C65686F6C696870:
		switch(wp[1]){
		case 0x00006E61696E656C:return 1;
		default:return 0;
		}
	case 0x6C6568746F646E65:
		switch(wp[1]){
		case 0x0000657479636F69:return 1;
		default:return 0;
		}
	case 0x6C6568777265766F:
		switch(wp[1]){
		case 0x0000796C676E696D:return 1;
		default:return 0;
		}
	case 0x6C656C6C61726170:
		switch(wp[1]){
		case 0x0000646570697065:return 1;
		case 0x000064657069706F:return 1;
		case 0x0000656D6F72646F:return 1;
		case 0x000068706172676F:return 1;
		case 0x0000726574656D6F:return 1;
		default:return 0;
		}
	case 0x6C656D6F646F6872:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x6C656D6F6C6F6561:
		switch(wp[1]){
		case 0x00006E6F6369646F:return 1;
		default:return 0;
		}
	case 0x6C656D75746E6F63:
		switch(wp[1]){
		case 0x0000796C73756F69:return 1;
		default:return 0;
		}
	case 0x6C656E696772616D:
		switch(wp[1]){
		case 0x00006D726F66696C:return 1;
		default:return 0;
		}
	case 0x6C656F6572657473:
		switch(wp[1]){
		case 0x0000636972746365:return 1;
		default:return 0;
		}
	case 0x6C656F6572746976:
		switch(wp[1]){
		case 0x0000636972746365:return 1;
		default:return 0;
		}
	case 0x6C656F6D616E7964:
		switch(wp[1]){
		case 0x0000636972746365:return 1;
		default:return 0;
		}
	case 0x6C656F6D72656874:
		switch(wp[1]){
		case 0x0000636972746365:return 1;
		default:return 0;
		}
	case 0x6C656F6E69736572:
		switch(wp[1]){
		case 0x0000636972746365:return 1;
		default:return 0;
		}
	case 0x6C656F6E69746361:
		switch(wp[1]){
		case 0x0000636972746365:return 1;
		default:return 0;
		}
	case 0x6C6570706173696D:
		switch(wp[1]){
		case 0x00006E6F6974616C:return 1;
		default:return 0;
		}
	case 0x6C65707265746E69:
		switch(wp[1]){
		case 0x00006E6F6974616C:return 1;
		default:return 0;
		}
	case 0x6C65726172746C75:
		switch(wp[1]){
		case 0x000073756F696769:return 1;
		default:return 0;
		}
	case 0x6C65726F69636F73:
		switch(wp[1]){
		case 0x000073756F696769:return 1;
		default:return 0;
		}
	case 0x6C65726F746F7270:
		switch(wp[1]){
		case 0x000073756F696769:return 1;
		default:return 0;
		}
	case 0x6C65727061706170:
		switch(wp[1]){
		case 0x00006C6163697461:return 1;
		default:return 0;
		}
	case 0x6C65727068637261:
		switch(wp[1]){
		case 0x00006C6163697461:return 1;
		default:return 0;
		}
	case 0x6C65727265746E69:
		switch(wp[1]){
		case 0x000073756F696769:return 1;
		case 0x0000796C64657461:return 1;
		default:return 0;
		}
	case 0x6C65736172746E69:
		switch(wp[1]){
		case 0x00006E6F69746365:return 1;
		default:return 0;
		}
	case 0x6C65736F64616C63:
		switch(wp[1]){
		case 0x00006E6169686361:return 1;
		default:return 0;
		}
	case 0x6C65736F72647968:
		switch(wp[1]){
		case 0x0000746572756E65:return 1;
		default:return 0;
		}
	case 0x6C6574616C696870:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x6C65746172747865:
		switch(wp[1]){
		case 0x00006E616972756C:return 1;
		default:return 0;
		}
	case 0x6C65746E69657270:
		switch(wp[1]){
		case 0x0000746E6567696C:return 1;
		default:return 0;
		}
	case 0x6C65746E696E6F6E:
		switch(wp[1]){
		case 0x0000746E6567696C:return 1;
		default:return 0;
		}
	case 0x6C65746F666C7573:
		switch(wp[1]){
		case 0x000065646972756C:return 1;
		default:return 0;
		}
	case 0x6C65746F69646172:
		switch(wp[1]){
		case 0x0000656E6F687065:return 1;
		case 0x0000687061726765:return 1;
		case 0x0000796E6F687065:return 1;
		default:return 0;
		}
	case 0x6C65746F6D736F63:
		switch(wp[1]){
		case 0x00006E616972756C:return 1;
		default:return 0;
		}
	case 0x6C65746F6E6F6870:
		switch(wp[1]){
		case 0x0000726574656D65:return 1;
		default:return 0;
		}
	case 0x6C65746F7263696D:
		switch(wp[1]){
		case 0x0000656E6F687065:return 1;
		default:return 0;
		}
	case 0x6C65746F746F6870:
		switch(wp[1]){
		case 0x0000656E6F687065:return 1;
		case 0x000065706F637365:return 1;
		case 0x0000687061726765:return 1;
		case 0x0000796E6F687065:return 1;
		default:return 0;
		}
	case 0x6C6575716E697571:
		switch(wp[1]){
		case 0x000064657461626F:return 1;
		case 0x00006C6172657461:return 1;
		case 0x00006C6172657469:return 1;
		case 0x000072616C75636F:return 1;
		default:return 0;
		}
	case 0x6C65766564657270:
		switch(wp[1]){
		case 0x0000746E656D706F:return 1;
		default:return 0;
		}
	case 0x6C657665646C616D:
		switch(wp[1]){
		case 0x0000746E656D706F:return 1;
		default:return 0;
		}
	case 0x6C657665646E6F6E:
		switch(wp[1]){
		case 0x0000656C6261706F:return 1;
		case 0x0000746E656D706F:return 1;
		default:return 0;
		}
	case 0x6C6665727265766F:
		switch(wp[1]){
		case 0x0000657669746365:return 1;
		case 0x00006E6F69746365:return 1;
		default:return 0;
		}
	case 0x6C6666617265766F:
		switch(wp[1]){
		case 0x00006E6F69746369:return 1;
		default:return 0;
		}
	case 0x6C666963696C6973:
		switch(wp[1]){
		case 0x0000656469726F75:return 1;
		default:return 0;
		}
	case 0x6C66696E61746974:
		switch(wp[1]){
		case 0x0000656469726F75:return 1;
		default:return 0;
		}
	case 0x6C666C7974656361:
		switch(wp[1]){
		case 0x0000656469726F75:return 1;
		default:return 0;
		}
	case 0x6C666E6974736F70:
		switch(wp[1]){
		case 0x00006C617A6E6575:return 1;
		default:return 0;
		}
	case 0x6C666E6F636E6F6E:
		switch(wp[1]){
		case 0x0000676E69746369:return 1;
		default:return 0;
		}
	case 0x6C666F63696C6973:
		switch(wp[1]){
		case 0x0000656469726F75:return 1;
		default:return 0;
		}
	case 0x6C666F6E61746974:
		switch(wp[1]){
		case 0x0000656469726F75:return 1;
		default:return 0;
		}
	case 0x6C67656E7265766F:
		switch(wp[1]){
		case 0x000065636E656769:return 1;
		default:return 0;
		}
	case 0x6C67676169746E61:
		switch(wp[1]){
		case 0x00006E696E697475:return 1;
		default:return 0;
		}
	case 0x6C6767616F747561:
		switch(wp[1]){
		case 0x00006E696E697475:return 1;
		default:return 0;
		}
	case 0x6C676C796E656870:
		switch(wp[1]){
		case 0x000063696C6F6379:return 1;
		default:return 0;
		}
	case 0x6C676E6166646C6F:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x6C676E616677656E:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x6C676F6475657370:
		switch(wp[1]){
		case 0x00006E696C75626F:return 1;
		case 0x0000737265646E61:return 1;
		default:return 0;
		}
	case 0x6C676F6572796874:
		switch(wp[1]){
		case 0x00006E696C75626F:return 1;
		default:return 0;
		}
	case 0x6C676F6863697274:
		switch(wp[1]){
		case 0x0000656E6973736F:return 1;
		default:return 0;
		}
	case 0x6C676F68706D796C:
		switch(wp[1]){
		case 0x0000616C75646E61:return 1;
		default:return 0;
		}
	case 0x6C676F696E656174:
		switch(wp[1]){
		case 0x000065746173736F:return 1;
		default:return 0;
		}
	case 0x6C676F74616D6568:
		switch(wp[1]){
		case 0x00006E696C75626F:return 1;
		default:return 0;
		}
	case 0x6C676F746E6F646F:
		switch(wp[1]){
		case 0x000065746173736F:return 1;
		default:return 0;
		}
	case 0x6C67796863617274:
		switch(wp[1]){
		case 0x000065746173736F:return 1;
		default:return 0;
		}
	case 0x6C68706F6574736F:
		switch(wp[1]){
		case 0x0000736974696265:return 1;
		default:return 0;
		}
	case 0x6C68706F6D726564:
		switch(wp[1]){
		case 0x0000736974696265:return 1;
		default:return 0;
		}
	case 0x6C68706F7274656D:
		switch(wp[1]){
		case 0x0000736974696265:return 1;
		default:return 0;
		}
	case 0x6C69617269746E61:
		switch(wp[1]){
		case 0x0000747369796177:return 1;
		default:return 0;
		}
	case 0x6C696261626F7270:
		switch(wp[1]){
		case 0x00006D7369726F69:return 1;
		case 0x0000747369726F69:return 1;
		default:return 0;
		}
	case 0x6C69626F72647968:
		switch(wp[1]){
		case 0x00006E6962757269:return 1;
		default:return 0;
		}
	case 0x6C69636564697274:
		switch(wp[1]){
		case 0x00006C6172657461:return 1;
		default:return 0;
		}
	case 0x6C69636974726576:
		switch(wp[1]){
		case 0x00006E6F6974616C:return 1;
		case 0x000072657473616C:return 1;
		case 0x0000796C6574616C:return 1;
		default:return 0;
		}
	case 0x6C69636E6F636572:
		switch(wp[1]){
		case 0x0000657669746169:return 1;
		case 0x00006E6F69746169:return 1;
		case 0x000079726F746169:return 1;
		default:return 0;
		}
	case 0x6C69636E6F636E75:
		switch(wp[1]){
		case 0x0000676E69746169:return 1;
		case 0x000079726F746169:return 1;
		default:return 0;
		}
	case 0x6C69637265707573:
		switch(wp[1]){
		case 0x0000796C73756F69:return 1;
		case 0x0000797469736F69:return 1;
		default:return 0;
		}
	case 0x6C69666661657270:
		switch(wp[1]){
		case 0x00006E6F69746169:return 1;
		default:return 0;
		}
	case 0x6C69666661736964:
		switch(wp[1]){
		case 0x00006E6F69746169:return 1;
		default:return 0;
		}
	case 0x6C69677265707361:
		switch(wp[1]){
		case 0x00006D726F66696C:return 1;
		default:return 0;
		}
	case 0x6C6968706F726561:
		switch(wp[1]){
		case 0x000063696C657461:return 1;
		default:return 0;
		}
	case 0x6C69687265707968:
		switch(wp[1]){
		case 0x000073756F697261:return 1;
		default:return 0;
		}
	case 0x6C696D6166657270:
		switch(wp[1]){
		case 0x0000797469726169:return 1;
		default:return 0;
		}
	case 0x6C696D7568657270:
		switch(wp[1]){
		case 0x00006E6F69746169:return 1;
		default:return 0;
		}
	case 0x6C696F726170616C:
		switch(wp[1]){
		case 0x0000796D6F746F65:return 1;
		default:return 0;
		}
	case 0x6C697061636E6F6E:
		switch(wp[1]){
		case 0x000079746972616C:return 1;
		default:return 0;
		}
	case 0x6C6972627265766F:
		switch(wp[1]){
		case 0x000079636E61696C:return 1;
		default:return 0;
		}
	case 0x6C69726361736E75:
		switch(wp[1]){
		case 0x000073756F696765:return 1;
		default:return 0;
		}
	case 0x6C69726F74636570:
		switch(wp[1]){
		case 0x00006C616975716F:return 1;
		case 0x00006D736975716F:return 1;
		case 0x000073756F75716F:return 1;
		default:return 0;
		}
	case 0x6C697369746C756D:
		switch(wp[1]){
		case 0x000073756F757169:return 1;
		default:return 0;
		}
	case 0x6C69736B63697571:
		switch(wp[1]){
		case 0x0000676E69726576:return 1;
		case 0x0000687369726576:return 1;
		default:return 0;
		}
	case 0x6C69736F72746570:
		switch(wp[1]){
		case 0x000073756F656369:return 1;
		case 0x000073756F696369:return 1;
		default:return 0;
		}
	case 0x6C69747265666E75:
		switch(wp[1]){
		case 0x0000656C62617A69:return 1;
		default:return 0;
		}
	case 0x6C69747365706E75:
		switch(wp[1]){
		case 0x00006C6169746E65:return 1;
		default:return 0;
		}
	case 0x6C69747369646572:
		switch(wp[1]){
		case 0x00006E6F6974616C:return 1;
		default:return 0;
		}
	case 0x6C69757165627573:
		switch(wp[1]){
		case 0x00006C6172657461:return 1;
		default:return 0;
		}
	case 0x6C697571656E6F6E:
		switch(wp[1]){
		case 0x00006C6172657461:return 1;
		case 0x00006D7569726269:return 1;
		default:return 0;
		}
	case 0x6C69757165736964:
		switch(wp[1]){
		case 0x0000657461726269:return 1;
		case 0x00006D7569726269:return 1;
		default:return 0;
		}
	case 0x6C6975716E697571:
		switch(wp[1]){
		case 0x00006C6172657469:return 1;
		default:return 0;
		}
	case 0x6C6C616373706172:
		switch(wp[1]){
		case 0x00006D73696E6F69:return 1;
		default:return 0;
		}
	case 0x6C6C616F696E6D61:
		switch(wp[1]){
		case 0x000063696F746E61:return 1;
		default:return 0;
		}
	case 0x6C6C617261706E75:
		switch(wp[1]){
		case 0x0000656C62616C65:return 1;
		case 0x00007373656E6C65:return 1;
		case 0x0000796C64656C65:return 1;
		default:return 0;
		}
	case 0x6C6C617265707573:
		switch(wp[1]){
		case 0x000065636E61776F:return 1;
		default:return 0;
		}
	case 0x6C6C617473797263:
		switch(wp[1]){
		case 0x000063696E65676F:return 1;
		case 0x0000656C62617A69:return 1;
		case 0x000079636E616D6F:return 1;
		case 0x0000797274656D6F:return 1;
		default:return 0;
		}
	case 0x6C6C617574636976:
		switch(wp[1]){
		case 0x0000706968737265:return 1;
		default:return 0;
		}
	case 0x6C6C656265726563:
		switch(wp[1]){
		case 0x00006C6167756669:return 1;
		case 0x00006C6174657069:return 1;
		default:return 0;
		}
	case 0x6C6C65636E616863:
		switch(wp[1]){
		case 0x000070696873726F:return 1;
		default:return 0;
		}
	case 0x6C6C65636F63756D:
		switch(wp[1]){
		case 0x00006369736F6C75:return 1;
		default:return 0;
		}
	case 0x6C6C65636F757161:
		switch(wp[1]){
		case 0x0000736974696C6F:return 1;
		default:return 0;
		}
	case 0x6C6C65667265766F:
		switch(wp[1]){
		case 0x0000656B696C776F:return 1;
		default:return 0;
		}
	case 0x6C6C656679616C70:
		switch(wp[1]){
		case 0x000070696873776F:return 1;
		default:return 0;
		}
	case 0x6C6C656D7265766F:
		switch(wp[1]){
		case 0x00007373656E776F:return 1;
		default:return 0;
		}
	case 0x6C6C65726F6C6863:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x6C6C65746E696E75:
		switch(wp[1]){
		case 0x000065636E656769:return 1;
		case 0x0000656C62696769:return 1;
		case 0x0000657669746365:return 1;
		case 0x00006C6175746365:return 1;
		case 0x0000796C62696769:return 1;
		default:return 0;
		}
	case 0x6C6C69676E697266:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x6C6C696D65746E61:
		switch(wp[1]){
		case 0x00006C61696E6E65:return 1;
		default:return 0;
		}
	case 0x6C6C696D74736F70:
		switch(wp[1]){
		case 0x00006C61696E6E65:return 1;
		case 0x00006E61696E6E65:return 1;
		default:return 0;
		}
	case 0x6C6C69746E696373:
		switch(wp[1]){
		case 0x000065706F63736F:return 1;
		case 0x0000726574656D6F:return 1;
		case 0x0000746E65637365:return 1;
		default:return 0;
		}
	case 0x6C6C6F6365727269:
		switch(wp[1]){
		case 0x00006E6F69746365:return 1;
		default:return 0;
		}
	case 0x6C6C6F63696D6573:
		switch(wp[1]){
		case 0x0000657461696765:return 1;
		case 0x00006C616975716F:return 1;
		default:return 0;
		}
	case 0x6C6C6F636F747561:
		switch(wp[1]){
		case 0x0000726F74616D69:return 1;
		default:return 0;
		}
	case 0x6C6C6F6669726570:
		switch(wp[1]){
		case 0x000072616C756369:return 1;
		default:return 0;
		}
	case 0x6C6C6F72746E6F63:
		switch(wp[1]){
		case 0x0000706968737265:return 1;
		default:return 0;
		}
	case 0x6C6C756B736D756E:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x6C6C797369726170:
		switch(wp[1]){
		case 0x00006C6163696261:return 1;
		default:return 0;
		}
	case 0x6C6C79736F6E6F6D:
		switch(wp[1]){
		case 0x00006C6163696261:return 1;
		default:return 0;
		}
	case 0x6C6C797372746574:
		switch(wp[1]){
		case 0x00006C6163696261:return 1;
		default:return 0;
		}
	case 0x6C6C7973796C6F70:
		switch(wp[1]){
		case 0x00006C6163696261:return 1;
		default:return 0;
		}
	case 0x6C6D6F7369726863:
		switch(wp[1]){
		case 0x0000676E69736F6F:return 1;
		default:return 0;
		}
	case 0x6C6F626968706D61:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F626D79736E75:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x6C6F627265707968:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x6C6F636172747865:
		switch(wp[1]){
		case 0x0000616C6C656D75:return 1;
		default:return 0;
		}
	case 0x6C6F636568746970:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F636568746E61:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F63656D72796D:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F636973796870:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F636976726563:
		switch(wp[1]){
		case 0x00006C6175676E69:return 1;
		default:return 0;
		}
	case 0x6C6F636F626D756C:
		switch(wp[1]){
		case 0x0000796D6F74736F:return 1;
		default:return 0;
		}
	case 0x6C6F636F696C6563:
		switch(wp[1]){
		case 0x0000796D6F746F70:return 1;
		default:return 0;
		}
	case 0x6C6F636F72647968:
		switch(wp[1]){
		case 0x0000656E6964696C:return 1;
		default:return 0;
		}
	case 0x6C6F636F7274656D:
		switch(wp[1]){
		case 0x0000656C65636F70:return 1;
		default:return 0;
		}
	case 0x6C6F636F72747479:
		switch(wp[1]){
		case 0x0000657469626D75:return 1;
		default:return 0;
		}
	case 0x6C6F636F746F6870:
		switch(wp[1]){
		case 0x0000657079746F6C:return 1;
		default:return 0;
		}
	case 0x6C6F636F74737963:
		switch(wp[1]){
		case 0x0000796D6F74736F:return 1;
		default:return 0;
		}
	case 0x6C6F637265646E75:
		switch(wp[1]){
		case 0x0000726F7463656C:return 1;
		default:return 0;
		}
	case 0x6C6F637265746E69:
		switch(wp[1]){
		case 0x00006E616967656C:return 1;
		default:return 0;
		}
	case 0x6C6F646972657470:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F646F6874656D:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F656168637261:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F6561706F7274:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x6C6F65676F656874:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F65676F726761:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F656863617274:
		switch(wp[1]){
		case 0x00006C6175676E69:return 1;
		default:return 0;
		}
	case 0x6C6F656874657270:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F6568746E6F6E:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F656C75726563:
		switch(wp[1]){
		case 0x0000657469746361:return 1;
		default:return 0;
		}
	case 0x6C6F657361726870:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F666972756C70:
		switch(wp[1]){
		case 0x00006574616C6F69:return 1;
		default:return 0;
		}
	case 0x6C6F6669746C756D:
		switch(wp[1]){
		case 0x00006574616C6F69:return 1;
		default:return 0;
		}
	case 0x6C6F666D65636564:
		switch(wp[1]){
		case 0x00006574616C6F69:return 1;
		default:return 0;
		}
	case 0x6C6F666F7263696D:
		switch(wp[1]){
		case 0x00006E6F69746169:return 1;
		default:return 0;
		}
	case 0x6C6F667265707573:
		switch(wp[1]){
		case 0x00006E6F69746169:return 1;
		default:return 0;
		}
	case 0x6C6F676E7972616C:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F6863656E7973:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F686369746E61:
		switch(wp[1]){
		case 0x00006575676F6761:return 1;
		default:return 0;
		}
	case 0x6C6F6870756E6F6E:
		switch(wp[1]){
		case 0x0000646572657473:return 1;
		default:return 0;
		}
	case 0x6C6F6874696E726F:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F68746E616361:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F69626174656D:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F69626F726561:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F69626F726573:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F69626F726761:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F69636F736E75:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F696870617267:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F696D65646E65:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F697265746F73:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F697269706D65:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F6973616D6573:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F6973656E696B:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F697465616E61:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F6C6968706E75:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F6C6973736F66:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F6C6F65766C61:
		switch(wp[1]){
		case 0x00006C6175676E69:return 1;
		default:return 0;
		}
	case 0x6C6F6C7972657470:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F6D6172666E69:
		switch(wp[1]){
		case 0x000072616C756365:return 1;
		default:return 0;
		}
	case 0x6C6F6D6172707573:
		switch(wp[1]){
		case 0x000072616C756365:return 1;
		default:return 0;
		}
	case 0x6C6F6D6172746E69:
		switch(wp[1]){
		case 0x000072616C756365:return 1;
		default:return 0;
		}
	case 0x6C6F6D6172747865:
		switch(wp[1]){
		case 0x000072616C756365:return 1;
		default:return 0;
		}
	case 0x6C6F6D69746C756D:
		switch(wp[1]){
		case 0x000072616C756365:return 1;
		default:return 0;
		}
	case 0x6C6F6D69786F7270:
		switch(wp[1]){
		case 0x00006C6175676E69:return 1;
		default:return 0;
		}
	case 0x6C6F6D7265746E69:
		switch(wp[1]){
		case 0x000072616C756365:return 1;
		default:return 0;
		}
	case 0x6C6F6D7974656E75:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F6E61636C6F76:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F6E61636C7576:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F6E61706D6163:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F6E656863696C:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F6E6863617261:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F6E6874656E75:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F6E6963726163:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F6E696D617267:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F6E696D697263:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F6E696D726574:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F6E6F6D6F6E67:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F6F6863736E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x6C6F6F7A6F746E65:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F706F69636F73:
		switch(wp[1]){
		case 0x00006C6163697469:return 1;
		default:return 0;
		}
	case 0x6C6F706F6C696870:
		switch(wp[1]){
		case 0x00006C6163696D65:return 1;
		default:return 0;
		}
	case 0x6C6F706F6D736F63:
		switch(wp[1]){
		case 0x00006C6163697469:return 1;
		case 0x0000796C6E617469:return 1;
		default:return 0;
		}
	case 0x6C6F706F7274656D:
		switch(wp[1]){
		case 0x00006C6163697469:return 1;
		case 0x000079636E617469:return 1;
		default:return 0;
		}
	case 0x6C6F707265746E69:
		switch(wp[1]){
		case 0x00006574616E696C:return 1;
		case 0x00006C6163697469:return 1;
		default:return 0;
		}
	case 0x6C6F726574706964:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F726574736F70:
		switch(wp[1]){
		case 0x00006C6172657461:return 1;
		default:return 0;
		}
	case 0x6C6F726863736961:
		switch(wp[1]){
		case 0x0000616965727461:return 1;
		default:return 0;
		}
	case 0x6C6F726F6574656D:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F727463656C65:
		switch(wp[1]){
		case 0x0000656C62617A79:return 1;
		case 0x00006C616369676F:return 1;
		case 0x00006C6163697479:return 1;
		default:return 0;
		}
	case 0x6C6F727463657073:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F7275746C7563:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F72797472616D:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F736E6F636E75:
		switch(wp[1]){
		case 0x0000646574616469:return 1;
		default:return 0;
		}
	case 0x6C6F737265707573:
		switch(wp[1]){
		case 0x00007373656E6D65:return 1;
		case 0x00007974696E6D65:return 1;
		default:return 0;
		}
	case 0x6C6F737369726570:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F746168637365:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F74616D696C63:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F74616D6C6574:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F74616D6F7473:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F74616D726564:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F74616E616874:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F74656D736F63:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F746570726568:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F746E61676967:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F746E616D6573:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F746F6874726F:
		switch(wp[1]){
		case 0x0000656E69646975:return 1;
		default:return 0;
		}
	case 0x6C6F746F74656361:
		switch(wp[1]){
		case 0x0000656E69646975:return 1;
		default:return 0;
		}
	case 0x6C6F74736F726761:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F747561746E75:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F7479786F7A61:
		switch(wp[1]){
		case 0x0000656E69646975:return 1;
		default:return 0;
		}
	case 0x6C6F76696C6C696D:
		switch(wp[1]){
		case 0x0000726574656D74:return 1;
		default:return 0;
		}
	case 0x6C6F766E69657270:
		switch(wp[1]){
		case 0x0000746E656D6576:return 1;
		default:return 0;
		}
	case 0x6C6F776F666C7573:
		switch(wp[1]){
		case 0x000063696D617266:return 1;
		default:return 0;
		}
	case 0x6C6F78656C666572:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		default:return 0;
		}
	case 0x6C6F796874686369:
		switch(wp[1]){
		case 0x00006C616369676F:return 1;
		case 0x000073756F727461:return 1;
		default:return 0;
		}
	case 0x6C70696461726170:
		switch(wp[1]){
		case 0x0000636974616D6F:return 1;
		default:return 0;
		}
	case 0x6C70697264617571:
		switch(wp[1]){
		case 0x0000646574616369:return 1;
		default:return 0;
		}
	case 0x6C70697274627573:
		switch(wp[1]){
		case 0x0000646574616369:return 1;
		default:return 0;
		}
	case 0x6C706D6178656E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x6C706D6F6373696D:
		switch(wp[1]){
		case 0x000065636E656361:return 1;
		default:return 0;
		}
	case 0x6C706E6F6D6D6F63:
		switch(wp[1]){
		case 0x00006D7369656361:return 1;
		default:return 0;
		}
	case 0x6C706F6964697269:
		switch(wp[1]){
		case 0x00006D756E697461:return 1;
		default:return 0;
		}
	case 0x6C706F6C6C656870:
		switch(wp[1]){
		case 0x0000736369747361:return 1;
		default:return 0;
		}
	case 0x6C706F6D61746F70:
		switch(wp[1]){
		case 0x00006E6F746B6E61:return 1;
		default:return 0;
		}
	case 0x6C706F726F6C6863:
		switch(wp[1]){
		case 0x000063696E697461:return 1;
		default:return 0;
		}
	case 0x6C706F7279706170:
		switch(wp[1]){
		case 0x0000736369747361:return 1;
		default:return 0;
		}
	case 0x6C706F746E6F646F:
		switch(wp[1]){
		case 0x00007369736F7265:return 1;
		default:return 0;
		}
	case 0x6C72617069746E61:
		switch(wp[1]){
		case 0x0000746E656D6169:return 1;
		default:return 0;
		}
	case 0x6C7265746E756F63:
		switch(wp[1]){
		case 0x0000676E69687461:return 1;
		case 0x0000676E696B636F:return 1;
		default:return 0;
		}
	case 0x6C7265766F6E6F6E:
		switch(wp[1]){
		case 0x0000676E69707061:return 1;
		default:return 0;
		}
	case 0x6C736E6172746E69:
		switch(wp[1]){
		case 0x0000656C62617461:return 1;
		default:return 0;
		}
	case 0x6C736E6172746E75:
		switch(wp[1]){
		case 0x0000656C62617461:return 1;
		case 0x0000796C62617461:return 1;
		default:return 0;
		}
	case 0x6C7561636F697265:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x6C756269646E616D:
		switch(wp[1]){
		case 0x000064696F79686F:return 1;
		default:return 0;
		}
	case 0x6C756361666E6F6E:
		switch(wp[1]){
		case 0x0000657669746174:return 1;
		default:return 0;
		}
	case 0x6C7563616E726576:
		switch(wp[1]){
		case 0x00007373656E7261:return 1;
		default:return 0;
		}
	case 0x6C7563636F657270:
		switch(wp[1]){
		case 0x00006E6F69746174:return 1;
		default:return 0;
		}
	case 0x6C75636963736970:
		switch(wp[1]){
		case 0x0000747369727574:return 1;
		default:return 0;
		}
	case 0x6C756369726F6C66:
		switch(wp[1]){
		case 0x0000747369727574:return 1;
		default:return 0;
		}
	case 0x6C75636972746963:
		switch(wp[1]){
		case 0x0000747369727574:return 1;
		default:return 0;
		}
	case 0x6C75636974726170:
		switch(wp[1]){
		case 0x00007373656E7261:return 1;
		default:return 0;
		}
	case 0x6C75636974726F68:
		switch(wp[1]){
		case 0x0000747369727574:return 1;
		default:return 0;
		}
	case 0x6C75636974736567:
		switch(wp[1]){
		case 0x000073756F696361:return 1;
		case 0x000073756F697261:return 1;
		default:return 0;
		}
	case 0x6C756369766C6973:
		switch(wp[1]){
		case 0x0000747369727574:return 1;
		default:return 0;
		}
	case 0x6C75636E756E6172:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x6C75637265627574:
		switch(wp[1]){
		case 0x000061696E616D6F:return 1;
		case 0x0000616D7265646F:return 1;
		case 0x00006E696469636F:return 1;
		case 0x00006E69786F746F:return 1;
		case 0x00007373656E7261:return 1;
		case 0x0000796C64657461:return 1;
		default:return 0;
		}
	case 0x6C75637269636E75:
		switch(wp[1]){
		case 0x000064657A697261:return 1;
		default:return 0;
		}
	case 0x6C756378656E6F6E:
		switch(wp[1]){
		case 0x00006E6F69746170:return 1;
		default:return 0;
		}
	case 0x6C75667369646E75:
		switch(wp[1]){
		case 0x000064656C6C6966:return 1;
		default:return 0;
		}
	case 0x6C75676574627573:
		switch(wp[1]){
		case 0x000073756F656E61:return 1;
		default:return 0;
		}
	case 0x6C75676E6174636F:
		switch(wp[1]){
		case 0x00007373656E7261:return 1;
		default:return 0;
		}
	case 0x6C756C6C75706572:
		switch(wp[1]){
		case 0x0000746E65637365:return 1;
		default:return 0;
		}
	case 0x6C756D6F72706572:
		switch(wp[1]){
		case 0x00006E6F69746167:return 1;
		default:return 0;
		}
	case 0x6C756E61706D6163:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x6C75706172746E69:
		switch(wp[1]){
		case 0x00007972616E6F6D:return 1;
		default:return 0;
		}
	case 0x6C75706172747865:
		switch(wp[1]){
		case 0x00007972616E6F6D:return 1;
		default:return 0;
		}
	case 0x6C75706F72746572:
		switch(wp[1]){
		case 0x00007972616E6F6D:return 1;
		default:return 0;
		}
	case 0x6C75706F74736F63:
		switch(wp[1]){
		case 0x00007972616E6F6D:return 1;
		default:return 0;
		}
	case 0x6C75707265707968:
		switch(wp[1]){
		case 0x00007972616E6F6D:return 1;
		default:return 0;
		}
	case 0x6C75707265746E69:
		switch(wp[1]){
		case 0x00007972616E6F6D:return 1;
		default:return 0;
		}
	case 0x6C7570736E617274:
		switch(wp[1]){
		case 0x00007972616E6F6D:return 1;
		default:return 0;
		}
	case 0x6C757369646F7A61:
		switch(wp[1]){
		case 0x000063696E6F6870:return 1;
		default:return 0;
		}
	case 0x6C75736C79687465:
		switch(wp[1]){
		case 0x0000636972756870:return 1;
		default:return 0;
		}
	case 0x6C75736E6F636572:
		switch(wp[1]){
		case 0x00006E6F69746174:return 1;
		default:return 0;
		}
	case 0x6C75736F64696D61:
		switch(wp[1]){
		case 0x00006C616E6F6870:return 1;
		default:return 0;
		}
	case 0x6C75736F6E696D61:
		switch(wp[1]){
		case 0x000063696E6F6870:return 1;
		default:return 0;
		}
	case 0x6C75736F72647968:
		switch(wp[1]){
		case 0x0000636972756870:return 1;
		case 0x00006C7972756870:return 1;
		case 0x0000746572756870:return 1;
		default:return 0;
		}
	case 0x6C75736F7274696E:
		switch(wp[1]){
		case 0x000063696E6F6870:return 1;
		case 0x0000636972756870:return 1;
		default:return 0;
		}
	case 0x6C75737265707573:
		switch(wp[1]){
		case 0x0000746572756870:return 1;
		default:return 0;
		}
	case 0x6C7574616E6E6570:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x6C79636F6E616C70:
		switch(wp[1]){
		case 0x0000636972646E69:return 1;
		default:return 0;
		}
	case 0x6C79676E6F727473:
		switch(wp[1]){
		case 0x00007369736F6469:return 1;
		default:return 0;
		}
	case 0x6C7968706172656B:
		switch(wp[1]){
		case 0x0000656C65636F6C:return 1;
		default:return 0;
		}
	case 0x6C7968706F747561:
		switch(wp[1]){
		case 0x0000796E65676F6C:return 1;
		default:return 0;
		}
	case 0x6C796B6E61786F63:
		switch(wp[1]){
		case 0x0000726574656D6F:return 1;
		default:return 0;
		}
	case 0x6C797361746E6570:
		switch(wp[1]){
		case 0x00006D736962616C:return 1;
		default:return 0;
		}
	case 0x6C797473796E6F67:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x6C79786F72647968:
		switch(wp[1]){
		case 0x0000656E6F746361:return 1;
		default:return 0;
		}
	case 0x6D61667369726F66:
		switch(wp[1]){
		case 0x0000657461696C69:return 1;
		default:return 0;
		}
	case 0x6D616870736F6870:
		switch(wp[1]){
		case 0x00006D75696E6F6D:return 1;
		default:return 0;
		}
	case 0x6D616C69666E6F6E:
		switch(wp[1]){
		case 0x000073756F746E65:return 1;
		default:return 0;
		}
	case 0x6D616C69746C756D:
		switch(wp[1]){
		case 0x0000646574616E69:return 1;
		case 0x00006574616C6C65:return 1;
		case 0x000073756F6C6C65:return 1;
		default:return 0;
		}
	case 0x6D616D6F656C6170:
		switch(wp[1]){
		case 0x000079676F6C616D:return 1;
		default:return 0;
		}
	case 0x6D616D6F746F7270:
		switch(wp[1]){
		case 0x00006E61696C616D:return 1;
		default:return 0;
		}
	case 0x6D616D7563726963:
		switch(wp[1]){
		case 0x000065636E656962:return 1;
		case 0x00006574616C7562:return 1;
		case 0x000079636E656962:return 1;
		default:return 0;
		}
	case 0x6D616E79646F796D:
		switch(wp[1]){
		case 0x0000726574656D6F:return 1;
		default:return 0;
		}
	case 0x6D6172646F6C656D:
		switch(wp[1]){
		case 0x00006C6163697461:return 1;
		default:return 0;
		}
	case 0x6D61726761726170:
		switch(wp[1]){
		case 0x000074736974616D:return 1;
		default:return 0;
		}
	case 0x6D6172676174656D:
		switch(wp[1]){
		case 0x0000657A6974616D:return 1;
		case 0x00006D736974616D:return 1;
		default:return 0;
		}
	case 0x6D6172676F70696C:
		switch(wp[1]){
		case 0x00006D736974616D:return 1;
		case 0x000074736974616D:return 1;
		default:return 0;
		}
	case 0x6D6174656D6E6F6E:
		switch(wp[1]){
		case 0x000063696870726F:return 1;
		default:return 0;
		}
	case 0x6D61746E6F636E69:
		switch(wp[1]){
		case 0x0000656C62616E69:return 1;
		default:return 0;
		}
	case 0x6D61746E6F636E75:
		switch(wp[1]){
		case 0x0000646574616E69:return 1;
		case 0x0000656C62616E69:return 1;
		default:return 0;
		}
	case 0x6D61747365746E75:
		switch(wp[1]){
		case 0x0000797261746E65:return 1;
		default:return 0;
		}
	case 0x6D64617265707573:
		switch(wp[1]){
		case 0x0000656C62617269:return 1;
		default:return 0;
		}
	case 0x6D65646E6F636572:
		switch(wp[1]){
		case 0x00006E6F6974616E:return 1;
		default:return 0;
		}
	case 0x6D6564726567656C:
		switch(wp[1]){
		case 0x00007473696E6961:return 1;
		default:return 0;
		}
	case 0x6D65647265707968:
		switch(wp[1]){
		case 0x000079636172636F:return 1;
		default:return 0;
		}
	case 0x6D65656465726E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x6D6568636F727970:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x6D656863736E6F6E:
		switch(wp[1]){
		case 0x000064657A697461:return 1;
		default:return 0;
		}
	case 0x6D65686F6D736564:
		switch(wp[1]){
		case 0x00007473616C626F:return 1;
		default:return 0;
		}
	case 0x6D656874616D6E75:
		switch(wp[1]){
		case 0x00006C6163697461:return 1;
		default:return 0;
		}
	case 0x6D65687468706568:
		switch(wp[1]){
		case 0x00006C6172656D69:return 1;
		default:return 0;
		}
	case 0x6D656C6574736F70:
		switch(wp[1]){
		case 0x0000797261746E65:return 1;
		default:return 0;
		}
	case 0x6D656C697275656E:
		switch(wp[1]){
		case 0x000073756F74616D:return 1;
		default:return 0;
		}
	case 0x6D656D65726E6F6E:
		switch(wp[1]){
		case 0x000065636E617262:return 1;
		default:return 0;
		}
	case 0x6D656D657273696D:
		switch(wp[1]){
		case 0x000065636E617262:return 1;
		default:return 0;
		}
	case 0x6D656D6D6F636E75:
		switch(wp[1]){
		case 0x000064657461726F:return 1;
		default:return 0;
		}
	case 0x6D656D7968746E65:
		switch(wp[1]){
		case 0x00006C6163697461:return 1;
		default:return 0;
		}
	case 0x6D656E61656C6574:
		switch(wp[1]){
		case 0x000068706172676F:return 1;
		default:return 0;
		}
	case 0x6D656E6F6C706F68:
		switch(wp[1]){
		case 0x0000656E69747265:return 1;
		case 0x00006E6165747265:return 1;
		default:return 0;
		}
	case 0x6D656E6F70657274:
		switch(wp[1]){
		case 0x00006C6164696369:return 1;
		default:return 0;
		}
	case 0x6D656F7268747261:
		switch(wp[1]){
		case 0x0000736973657970:return 1;
		default:return 0;
		}
	case 0x6D657265696D6573:
		switch(wp[1]){
		case 0x00006C6163697469:return 1;
		default:return 0;
		}
	case 0x6D65736572657270:
		switch(wp[1]){
		case 0x000065636E616C62:return 1;
		default:return 0;
		}
	case 0x6D657365726E6F6E:
		switch(wp[1]){
		case 0x000065636E616C62:return 1;
		default:return 0;
		}
	case 0x6D6573657273696D:
		switch(wp[1]){
		case 0x000065636E616C62:return 1;
		default:return 0;
		}
	case 0x6D65737265707573:
		switch(wp[1]){
		case 0x0000726F74616E69:return 1;
		default:return 0;
		}
	case 0x6D65737369646E75:
		switch(wp[1]){
		case 0x0000646574616E69:return 1;
		default:return 0;
		}
	case 0x6D65746E6F636E69:
		switch(wp[1]){
		case 0x0000656C62697470:return 1;
		default:return 0;
		}
	case 0x6D65746E6F636E75:
		switch(wp[1]){
		case 0x0000646574616C70:return 1;
		case 0x000073756F757470:return 1;
		case 0x0000797261726F70:return 1;
		default:return 0;
		}
	case 0x6D6574736F646F70:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x6D65747379736E75:
		switch(wp[1]){
		case 0x000064657A697461:return 1;
		case 0x0000656C62617A69:return 1;
		case 0x00006C6163697461:return 1;
		default:return 0;
		}
	case 0x6D676568746F7061:
		switch(wp[1]){
		case 0x00006C6163697461:return 1;
		default:return 0;
		}
	case 0x6D67656C68706564:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x6D67696461726170:
		switch(wp[1]){
		case 0x00006C6163697461:return 1;
		default:return 0;
		}
	case 0x6D6867756F726F62:
		switch(wp[1]){
		case 0x0000797265676E6F:return 1;
		default:return 0;
		}
	case 0x6D68746972616E75:
		switch(wp[1]){
		case 0x00006C6163697465:return 1;
		default:return 0;
		}
	case 0x6D68747968726E75:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x6D68747968727261:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x6D6968746F6C6C61:
		switch(wp[1]){
		case 0x000063696870726F:return 1;
		default:return 0;
		}
	case 0x6D696C6172707573:
		switch(wp[1]){
		case 0x0000796C6C616E69:return 1;
		default:return 0;
		}
	case 0x6D696C6363616E75:
		switch(wp[1]){
		case 0x000064657A697461:return 1;
		default:return 0;
		}
	case 0x6D696C656F707968:
		switch(wp[1]){
		case 0x0000726F74616E69:return 1;
		default:return 0;
		}
	case 0x6D696C6F656C6170:
		switch(wp[1]){
		case 0x000079676F6C6F6E:return 1;
		default:return 0;
		}
	case 0x6D696D6F746E6170:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x6D6972627265766F:
		switch(wp[1]){
		case 0x0000796C676E696D:return 1;
		default:return 0;
		}
	case 0x6D69737261706E75:
		switch(wp[1]){
		case 0x000073756F696E6F:return 1;
		default:return 0;
		}
	case 0x6D697373616E6F6E:
		switch(wp[1]){
		case 0x0000656C62616C69:return 1;
		default:return 0;
		}
	case 0x6D69737369646E75:
		switch(wp[1]){
		case 0x0000646574616C75:return 1;
		default:return 0;
		}
	case 0x6D69746E6174656D:
		switch(wp[1]){
		case 0x000073756F696E6F:return 1;
		default:return 0;
		}
	case 0x6D6C61646E616373:
		switch(wp[1]){
		case 0x0000676E69676E6F:return 1;
		case 0x0000797265676E6F:return 1;
		default:return 0;
		}
	case 0x6D6C61687468706F:
		switch(wp[1]){
		case 0x000061656872726F:return 1;
		case 0x000061696E79646F:return 1;
		case 0x00006169706F636F:return 1;
		case 0x00006369676F6C6F:return 1;
		case 0x000065706F63736F:return 1;
		case 0x000065706F72746F:return 1;
		case 0x000065726F68706F:return 1;
		case 0x0000726574656D6F:return 1;
		case 0x000079687461706F:return 1;
		case 0x0000796D6F746365:return 1;
		case 0x000079706F63736F:return 1;
		case 0x0000797274656D6F:return 1;
		default:return 0;
		}
	case 0x6D6C656869746E61:
		switch(wp[1]){
		case 0x0000636968746E69:return 1;
		default:return 0;
		}
	case 0x6D6C656E6E616C66:
		switch(wp[1]){
		case 0x000064656874756F:return 1;
		default:return 0;
		}
	case 0x6D6C75666174656D:
		switch(wp[1]){
		case 0x0000636972756E69:return 1;
		default:return 0;
		}
	case 0x6D6D617267616964:
		switch(wp[1]){
		case 0x00006C6163697461:return 1;
		default:return 0;
		}
	case 0x6D6D617267616E61:
		switch(wp[1]){
		case 0x00006C6163697461:return 1;
		default:return 0;
		}
	case 0x6D6D617267697065:
		switch(wp[1]){
		case 0x00006C6163697461:return 1;
		case 0x000072657A697461:return 1;
		default:return 0;
		}
	case 0x6D6D6172676F656E:
		switch(wp[1]){
		case 0x00006C6163697461:return 1;
		default:return 0;
		}
	case 0x6D6D6F6363616E75:
		switch(wp[1]){
		case 0x000064657461646F:return 1;
		case 0x0000656C6261646F:return 1;
		default:return 0;
		}
	case 0x6D6D6F63696D6573:
		switch(wp[1]){
		case 0x00006C6169637265:return 1;
		default:return 0;
		}
	case 0x6D6D6F6369746E61:
		switch(wp[1]){
		case 0x00006C6169637265:return 1;
		default:return 0;
		}
	case 0x6D6D6F637265766F:
		switch(wp[1]){
		case 0x00007373656E6E6F:return 1;
		default:return 0;
		}
	case 0x6D6D6F6374736F70:
		switch(wp[1]){
		case 0x0000657275737369:return 1;
		default:return 0;
		}
	case 0x6D6D757274736F6E:
		switch(wp[1]){
		case 0x0000797265676E6F:return 1;
		default:return 0;
		}
	case 0x6D6E6F68706C7573:
		switch(wp[1]){
		case 0x0000656E61687465:return 1;
		default:return 0;
		}
	case 0x6D6E6F6968736166:
		switch(wp[1]){
		case 0x0000676E69676E6F:return 1;
		default:return 0;
		}
	case 0x6D6F636361657270:
		switch(wp[1]){
		case 0x0000657461646F6D:return 1;
		default:return 0;
		}
	case 0x6D6F636361736964:
		switch(wp[1]){
		case 0x0000657461646F6D:return 1;
		default:return 0;
		}
	case 0x6D6F636568746970:
		switch(wp[1]){
		case 0x000063696870726F:return 1;
		default:return 0;
		}
	case 0x6D6F636965646966:
		switch(wp[1]){
		case 0x00006D757373696D:return 1;
		case 0x0000726F7373696D:return 1;
		default:return 0;
		}
	case 0x6D6F636967617274:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x6D6F63696E727574:
		switch(wp[1]){
		case 0x000063696870726F:return 1;
		default:return 0;
		}
	case 0x6D6F636973796870:
		switch(wp[1]){
		case 0x000063696870726F:return 1;
		case 0x00006C6163696465:return 1;
		default:return 0;
		}
	case 0x6D6F6369746C756D:
		switch(wp[1]){
		case 0x0000746E656E6F70:return 1;
		default:return 0;
		}
	case 0x6D6F636F69726573:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x6D6F637265646E75:
		switch(wp[1]){
		case 0x00007265646E616D:return 1;
		default:return 0;
		}
	case 0x6D6F637265707968:
		switch(wp[1]){
		case 0x0000657469736F70:return 1;
		default:return 0;
		}
	case 0x6D6F637265746E69:
		switch(wp[1]){
		case 0x00006567616E6F6D:return 1;
		case 0x00006E6F696E756D:return 1;
		case 0x00007974696E756D:return 1;
		default:return 0;
		}
	case 0x6D6F676E696E656D:
		switch(wp[1]){
		case 0x0000616963616C61:return 1;
		default:return 0;
		}
	case 0x6D6F676E6972796D:
		switch(wp[1]){
		case 0x00007369736F6379:return 1;
		default:return 0;
		}
	case 0x6D6F6772616C6570:
		switch(wp[1]){
		case 0x000063696870726F:return 1;
		default:return 0;
		}
	case 0x6D6F677963636F63:
		switch(wp[1]){
		case 0x000063696870726F:return 1;
		default:return 0;
		}
	case 0x6D6F68636E6F7262:
		switch(wp[1]){
		case 0x00007369736F6379:return 1;
		default:return 0;
		}
	case 0x6D6F6874696E726F:
		switch(wp[1]){
		case 0x000063696870726F:return 1;
		case 0x0000747369746E61:return 1;
		default:return 0;
		}
	case 0x6D6F6964696E6170:
		switch(wp[1]){
		case 0x000063696870726F:return 1;
		default:return 0;
		}
	case 0x6D6F696469707968:
		switch(wp[1]){
		case 0x000063696870726F:return 1;
		default:return 0;
		}
	case 0x6D6F697265747261:
		switch(wp[1]){
		case 0x0000616963616C61:return 1;
		default:return 0;
		}
	case 0x6D6F69746E616E65:
		switch(wp[1]){
		case 0x000063696870726F:return 1;
		default:return 0;
		}
	case 0x6D6F6C6573707963:
		switch(wp[1]){
		case 0x000063696870726F:return 1;
		default:return 0;
		}
	case 0x6D6F6C69736E6F74:
		switch(wp[1]){
		case 0x00007369736F6379:return 1;
		default:return 0;
		}
	case 0x6D6F6C6C69706170:
		switch(wp[1]){
		case 0x00007369736F7461:return 1;
		default:return 0;
		}
	case 0x6D6F6D7265746E69:
		switch(wp[1]){
		case 0x0000797261746E65:return 1;
		default:return 0;
		}
	case 0x6D6F6E616863656D:
		switch(wp[1]){
		case 0x000063696870726F:return 1;
		default:return 0;
		}
	case 0x6D6F6E61706D7974:
		switch(wp[1]){
		case 0x000064696F747361:return 1;
		case 0x00006C61656C6C61:return 1;
		default:return 0;
		}
	case 0x6D6F6E6572706E75:
		switch(wp[1]){
		case 0x0000646574616E69:return 1;
		default:return 0;
		}
	case 0x6D6F6E67696E6F6E:
		switch(wp[1]){
		case 0x000073756F696E69:return 1;
		default:return 0;
		}
	case 0x6D6F6E6963726163:
		switch(wp[1]){
		case 0x000063696870726F:return 1;
		case 0x00007369736F7461:return 1;
		default:return 0;
		}
	case 0x6D6F6E6F63656E75:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x6D6F6E6F68747970:
		switch(wp[1]){
		case 0x000063696870726F:return 1;
		default:return 0;
		}
	case 0x6D6F6E6F726F6870:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x6D6F6E6F7274656D:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x6D6F6E6F72747361:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x6D6F706F72696863:
		switch(wp[1]){
		case 0x000078796C6F6870:return 1;
		default:return 0;
		}
	case 0x6D6F726265726563:
		switch(wp[1]){
		case 0x0000616963616C61:return 1;
		default:return 0;
		}
	case 0x6D6F72626F6E6F6D:
		switch(wp[1]){
		case 0x0000646574616E69:return 1;
		default:return 0;
		}
	case 0x6D6F726361746163:
		switch(wp[1]){
		case 0x00006E6169646F79:return 1;
		default:return 0;
		}
	case 0x6D6F7264616D6568:
		switch(wp[1]){
		case 0x000068706172676F:return 1;
		case 0x0000726574656D6F:return 1;
		default:return 0;
		}
	case 0x6D6F726469746E61:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x6D6F72646E6F6863:
		switch(wp[1]){
		case 0x0000616963616C61:return 1;
		default:return 0;
		}
	case 0x6D6F72646F6D6568:
		switch(wp[1]){
		case 0x000068706172676F:return 1;
		case 0x0000726574656D6F:return 1;
		default:return 0;
		}
	case 0x6D6F72646F786F6C:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x6D6F72656D737964:
		switch(wp[1]){
		case 0x000063696870726F:return 1;
		default:return 0;
		}
	case 0x6D6F726574756564:
		switch(wp[1]){
		case 0x000063696870726F:return 1;
		default:return 0;
		}
	case 0x6D6F72686379786F:
		switch(wp[1]){
		case 0x000063696E697461:return 1;
		default:return 0;
		}
	case 0x6D6F726F68706F6F:
		switch(wp[1]){
		case 0x0000616963616C61:return 1;
		default:return 0;
		}
	case 0x6D6F726F706D6574:
		switch(wp[1]){
		case 0x000064696F747361:return 1;
		default:return 0;
		}
	case 0x6D6F727065646966:
		switch(wp[1]){
		case 0x00006E6F69737369:return 1;
		default:return 0;
		}
	case 0x6D6F72707265766F:
		switch(wp[1]){
		case 0x000065636E656E69:return 1;
		case 0x00007373656E7470:return 1;
		default:return 0;
		}
	case 0x6D6F727463656C65:
		switch(wp[1]){
		case 0x0000656761737361:return 1;
		case 0x00006C6163696465:return 1;
		default:return 0;
		}
	case 0x6D6F736E6574656D:
		switch(wp[1]){
		case 0x00007369736F7461:return 1;
		default:return 0;
		}
	case 0x6D6F737265646E75:
		switch(wp[1]){
		case 0x0000676E69687465:return 1;
		default:return 0;
		}
	case 0x6D6F74616D6F7473:
		switch(wp[1]){
		case 0x0000616963616C61:return 1;
		case 0x00007369736F6379:return 1;
		default:return 0;
		}
	case 0x6D6F74616D726564:
		switch(wp[1]){
		case 0x00007369736F6379:return 1;
		default:return 0;
		}
	case 0x6D6F74616E616E75:
		switch(wp[1]){
		case 0x0000656C62617A69:return 1;
		default:return 0;
		}
	case 0x6D6F746569726170:
		switch(wp[1]){
		case 0x000064696F747361:return 1;
		default:return 0;
		}
	case 0x6D6F74656E67616D:
		switch(wp[1]){
		case 0x0000656E69686361:return 1;
		default:return 0;
		}
	case 0x6D6F746E616C7461:
		switch(wp[1]){
		case 0x000064696F747361:return 1;
		default:return 0;
		}
	case 0x6D6F746E6F6E6574:
		switch(wp[1]){
		case 0x0000796D6F746F79:return 1;
		default:return 0;
		}
	case 0x6D6F746F68636964:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x6D6F7473616C656D:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x6D6F747365726863:
		switch(wp[1]){
		case 0x0000736369687461:return 1;
		default:return 0;
		}
	case 0x6D6F747375636361:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x6D6F7475616E6170:
		switch(wp[1]){
		case 0x000063696870726F:return 1;
		default:return 0;
		}
	case 0x6D6F747561707968:
		switch(wp[1]){
		case 0x000063696870726F:return 1;
		default:return 0;
		}
	case 0x6D6F776573726F68:
		switch(wp[1]){
		case 0x0000706968736E61:return 1;
		default:return 0;
		}
	case 0x6D6F796874686369:
		switch(wp[1]){
		case 0x000063696870726F:return 1;
		default:return 0;
		}
	case 0x6D7069687364696D:
		switch(wp[1]){
		case 0x0000706968736E61:return 1;
		default:return 0;
		}
	case 0x6D706F6C65766564:
		switch(wp[1]){
		case 0x0000747369746E65:return 1;
		case 0x0000797261746E65:return 1;
		default:return 0;
		}
	case 0x6D7265646F707968:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x6D7265646F726361:
		switch(wp[1]){
		case 0x0000736974697461:return 1;
		default:return 0;
		}
	case 0x6D7265646F726573:
		switch(wp[1]){
		case 0x00007369736F7461:return 1;
		default:return 0;
		}
	case 0x6D72656874616964:
		switch(wp[1]){
		case 0x0000726574656D6F:return 1;
		case 0x0000797469656E61:return 1;
		default:return 0;
		}
	case 0x6D726568746F6567:
		switch(wp[1]){
		case 0x0000726574656D6F:return 1;
		default:return 0;
		}
	case 0x6D72657465646E69:
		switch(wp[1]){
		case 0x0000656C62616E69:return 1;
		case 0x0000796C62616E69:return 1;
		default:return 0;
		}
	case 0x6D72657465646E75:
		switch(wp[1]){
		case 0x0000656C62616E69:return 1;
		default:return 0;
		}
	case 0x6D7265746E696E75:
		switch(wp[1]){
		case 0x000064656C676E69:return 1;
		case 0x0000657461696465:return 1;
		case 0x0000657669737369:return 1;
		case 0x0000676E69747469:return 1;
		case 0x00006E6F69737369:return 1;
		case 0x0000746E65747469:return 1;
		default:return 0;
		}
	case 0x6D7265746E756F63:
		switch(wp[1]){
		case 0x0000656761737365:return 1;
		case 0x0000657275736165:return 1;
		case 0x00006E6F69737369:return 1;
		default:return 0;
		}
	case 0x6D72657474616863:
		switch(wp[1]){
		case 0x0000676E69676761:return 1;
		default:return 0;
		}
	case 0x6D72657478656E69:
		switch(wp[1]){
		case 0x0000656C62616E69:return 1;
		default:return 0;
		}
	case 0x6D72657478656E75:
		switch(wp[1]){
		case 0x0000646574616E69:return 1;
		case 0x0000656C62616E69:return 1;
		default:return 0;
		}
	case 0x6D72657669746E61:
		switch(wp[1]){
		case 0x000072616C756369:return 1;
		default:return 0;
		}
	case 0x6D726F6665646E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x6D726F6665726E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x6D7361746E616870:
		switch(wp[1]){
		case 0x00006169726F6761:return 1;
		case 0x00006369726F6761:return 1;
		case 0x000065706F637361:return 1;
		case 0x000068706172676F:return 1;
		case 0x00006C6163697461:return 1;
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x6D73656C61736E75:
		switch(wp[1]){
		case 0x0000656B696C6E61:return 1;
		default:return 0;
		}
	case 0x6D73696261727473:
		switch(wp[1]){
		case 0x0000726574656D6F:return 1;
		case 0x0000797274656D6F:return 1;
		default:return 0;
		}
	case 0x6D7369626F696874:
		switch(wp[1]){
		case 0x0000657469687475:return 1;
		default:return 0;
		}
	case 0x6D736E6172746572:
		switch(wp[1]){
		case 0x0000657669737369:return 1;
		case 0x00006E6F69737369:return 1;
		default:return 0;
		}
	case 0x6D736E6172746E69:
		switch(wp[1]){
		case 0x0000656C62617475:return 1;
		default:return 0;
		}
	case 0x6D736E6172746E75:
		switch(wp[1]){
		case 0x0000656C62617475:return 1;
		default:return 0;
		}
	case 0x6D73726570706F63:
		switch(wp[1]){
		case 0x0000676E69687469:return 1;
		default:return 0;
		}
	case 0x6D737265766C6973:
		switch(wp[1]){
		case 0x0000676E69687469:return 1;
		default:return 0;
		}
	case 0x6D73796874656C70:
		switch(wp[1]){
		case 0x000068706172676F:return 1;
		default:return 0;
		}
	case 0x6D74686775617264:
		switch(wp[1]){
		case 0x0000706968736E61:return 1;
		default:return 0;
		}
	case 0x6D747261706D6F63:
		switch(wp[1]){
		case 0x0000657A69746E65:return 1;
		default:return 0;
		}
	case 0x6D747265636E6F63:
		switch(wp[1]){
		case 0x0000726574736965:return 1;
		default:return 0;
		}
	case 0x6D75636E65736964:
		switch(wp[1]){
		case 0x000065636E617262:return 1;
		default:return 0;
		}
	case 0x6D75636F64657270:
		switch(wp[1]){
		case 0x0000797261746E65:return 1;
		default:return 0;
		}
	case 0x6D75636F646E6F6E:
		switch(wp[1]){
		case 0x0000797261746E65:return 1;
		default:return 0;
		}
	case 0x6D75637269636E75:
		switch(wp[1]){
		case 0x00006E6F69736963:return 1;
		case 0x0000747069726373:return 1;
		default:return 0;
		}
	case 0x6D75657279706D65:
		switch(wp[1]){
		case 0x00006C6163697461:return 1;
		default:return 0;
		}
	case 0x6D75686365746163:
		switch(wp[1]){
		case 0x00006C6163696E65:return 1;
		case 0x0000706968736E65:return 1;
		default:return 0;
		}
	case 0x6D75686968706978:
		switch(wp[1]){
		case 0x000073696C617265:return 1;
		default:return 0;
		}
	case 0x6D75687265707573:
		switch(wp[1]){
		case 0x00007373656E6E61:return 1;
		default:return 0;
		}
	case 0x6D756C6F6D656E75:
		switch(wp[1]){
		case 0x0000797261746E65:return 1;
		default:return 0;
		}
	case 0x6D756C70696D6573:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x6D756C706F6C6966:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x6D756C7563697073:
		switch(wp[1]){
		case 0x00007369726F6D61:return 1;
		default:return 0;
		}
	case 0x6D756E65646E6F6E:
		switch(wp[1]){
		case 0x0000656C62617265:return 1;
		default:return 0;
		}
	case 0x6D75736572706E75:
		switch(wp[1]){
		case 0x000073756F757470:return 1;
		default:return 0;
		}
	case 0x6D79646964697065:
		switch(wp[1]){
		case 0x0000796D6F746365:return 1;
		default:return 0;
		}
	case 0x6D796C6F69676E61:
		switch(wp[1]){
		case 0x0000736974696870:return 1;
		default:return 0;
		}
	case 0x6D796E6F72746170:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x6D79736F6874726F:
		switch(wp[1]){
		case 0x000063697274656D:return 1;
		default:return 0;
		}
	case 0x6D79736F69676E61:
		switch(wp[1]){
		case 0x0000736973796870:return 1;
		default:return 0;
		}
	case 0x6D79786F6C796361:
		switch(wp[1]){
		case 0x0000656E61687465:return 1;
		default:return 0;
		}
	case 0x6E61636172746E69:
		switch(wp[1]){
		case 0x00006C6163696E6F:return 1;
		default:return 0;
		}
	case 0x6E61636172747865:
		switch(wp[1]){
		case 0x00006C6163696E6F:return 1;
		default:return 0;
		}
	case 0x6E61636568746970:
		switch(wp[1]){
		case 0x000065706F726874:return 1;
		default:return 0;
		}
	case 0x6E61636F746F7270:
		switch(wp[1]){
		case 0x00006C6163696E6F:return 1;
		default:return 0;
		}
	case 0x6E61637265707573:
		switch(wp[1]){
		case 0x00006C6163696E6F:return 1;
		default:return 0;
		}
	case 0x6E61666172746C75:
		switch(wp[1]){
		case 0x0000636974736174:return 1;
		default:return 0;
		}
	case 0x6E61667265707573:
		switch(wp[1]){
		case 0x0000636974736174:return 1;
		default:return 0;
		}
	case 0x6E616761706F7270:
		switch(wp[1]){
		case 0x0000636974736964:return 1;
		default:return 0;
		}
	case 0x6E61676F63616C70:
		switch(wp[1]){
		case 0x00006E616564696F:return 1;
		default:return 0;
		}
	case 0x6E61676F6C65796D:
		switch(wp[1]){
		case 0x0000736974696C67:return 1;
		default:return 0;
		}
	case 0x6E61676F6C706964:
		switch(wp[1]){
		case 0x0000657461696C67:return 1;
		default:return 0;
		}
	case 0x6E61676F746E6170:
		switch(wp[1]){
		case 0x0000736974696C67:return 1;
		default:return 0;
		}
	case 0x6E616863656D6D69:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x6E616863656D6E75:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x6E61686369757165:
		switch(wp[1]){
		case 0x0000656C62616567:return 1;
		default:return 0;
		}
	case 0x6E61686378656E75:
		switch(wp[1]){
		case 0x0000656C62616567:return 1;
		default:return 0;
		}
	case 0x6E61686378656F63:
		switch(wp[1]){
		case 0x0000656C62616567:return 1;
		default:return 0;
		}
	case 0x6E6168706F637973:
		switch(wp[1]){
		case 0x0000796C68736974:return 1;
		default:return 0;
		}
	case 0x6E61697261766E69:
		switch(wp[1]){
		case 0x0000796C65766974:return 1;
		default:return 0;
		}
	case 0x6E61697264617571:
		switch(wp[1]){
		case 0x00006574616C756E:return 1;
		default:return 0;
		}
	case 0x6E616972656C6176:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x6E61697274627573:
		switch(wp[1]){
		case 0x00006574616C7567:return 1;
		default:return 0;
		}
	case 0x6E616C6162736964:
		switch(wp[1]){
		case 0x0000746E656D6563:return 1;
		default:return 0;
		}
	case 0x6E616C706D696572:
		switch(wp[1]){
		case 0x00006E6F69746174:return 1;
		default:return 0;
		}
	case 0x6E616C706F6C6F68:
		switch(wp[1]){
		case 0x000063696E6F746B:return 1;
		default:return 0;
		}
	case 0x6E616C706F707968:
		switch(wp[1]){
		case 0x000063696E6F746B:return 1;
		default:return 0;
		}
	case 0x6E616C706F72656D:
		switch(wp[1]){
		case 0x000063696E6F746B:return 1;
		default:return 0;
		}
	case 0x6E616C706F73656D:
		switch(wp[1]){
		case 0x000063696E6F746B:return 1;
		default:return 0;
		}
	case 0x6E616C7265646E75:
		switch(wp[1]){
		case 0x0000646567617567:return 1;
		default:return 0;
		}
	case 0x6E616D6972706572:
		switch(wp[1]){
		case 0x0000796C676E6964:return 1;
		default:return 0;
		}
	case 0x6E616D6F7263696D:
		switch(wp[1]){
		case 0x0000726574656D6F:return 1;
		default:return 0;
		}
	case 0x6E616D6F72657270:
		switch(wp[1]){
		case 0x00006D7369636974:return 1;
		default:return 0;
		}
	case 0x6E616D6F726F7270:
		switch(wp[1]){
		case 0x00006D7369636974:return 1;
		default:return 0;
		}
	case 0x6E616D6F72707563:
		switch(wp[1]){
		case 0x00006573656E6167:return 1;
		default:return 0;
		}
	case 0x6E616D6F72726566:
		switch(wp[1]){
		case 0x00006573656E6167:return 1;
		default:return 0;
		}
	case 0x6E616D6F746F7270:
		switch(wp[1]){
		case 0x00006573656E6167:return 1;
		default:return 0;
		}
	case 0x6E616D7265707573:
		switch(wp[1]){
		case 0x00007373656E696C:return 1;
		default:return 0;
		}
	case 0x6E616D73696C6174:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x6E616E6574737573:
		switch(wp[1]){
		case 0x00007373656C6563:return 1;
		default:return 0;
		}
	case 0x6E616F6475657370:
		switch(wp[1]){
		case 0x000063696D6F7461:return 1;
		default:return 0;
		}
	case 0x6E616F6863797370:
		switch(wp[1]){
		case 0x0000636974796C61:return 1;
		case 0x000072657A796C61:return 1;
		case 0x0000736973796C61:return 1;
		default:return 0;
		}
	case 0x6E616F6E6167726F:
		switch(wp[1]){
		case 0x0000796E6F6D6974:return 1;
		default:return 0;
		}
	case 0x6E616F7265666E69:
		switch(wp[1]){
		case 0x0000726F69726574:return 1;
		default:return 0;
		}
	case 0x6E616F7265707573:
		switch(wp[1]){
		case 0x0000726F69726574:return 1;
		default:return 0;
		}
	case 0x6E616F726574616C:
		switch(wp[1]){
		case 0x0000726F69726574:return 1;
		default:return 0;
		}
	case 0x6E61706F736F7270:
		switch(wp[1]){
		case 0x0000736974697274:return 1;
		default:return 0;
		}
	case 0x6E61707265707968:
		switch(wp[1]){
		case 0x0000636972796765:return 1;
		default:return 0;
		}
	case 0x6E617078656E6F6E:
		switch(wp[1]){
		case 0x0000796C65766973:return 1;
		default:return 0;
		}
	case 0x6E61726261726170:
		switch(wp[1]){
		case 0x0000657461696863:return 1;
		default:return 0;
		}
	case 0x6E6172626964756E:
		switch(wp[1]){
		case 0x0000657461696863:return 1;
		default:return 0;
		}
	case 0x6E617262696C6966:
		switch(wp[1]){
		case 0x0000657461696863:return 1;
		default:return 0;
		}
	case 0x6E617262696D6568:
		switch(wp[1]){
		case 0x0000657461696863:return 1;
		default:return 0;
		}
	case 0x6E61726269736162:
		switch(wp[1]){
		case 0x0000657461696863:return 1;
		default:return 0;
		}
	case 0x6E6172626F646F70:
		switch(wp[1]){
		case 0x0000657461696863:return 1;
		default:return 0;
		}
	case 0x6E6172626F677970:
		switch(wp[1]){
		case 0x0000657461696863:return 1;
		default:return 0;
		}
	case 0x6E6172626F67797A:
		switch(wp[1]){
		case 0x0000657461696863:return 1;
		default:return 0;
		}
	case 0x6E6172626F6E6F6D:
		switch(wp[1]){
		case 0x0000657461696863:return 1;
		default:return 0;
		}
	case 0x6E6172626F707968:
		switch(wp[1]){
		case 0x0000657461696863:return 1;
		default:return 0;
		}
	case 0x6E6172626F726561:
		switch(wp[1]){
		case 0x0000657461696863:return 1;
		default:return 0;
		}
	case 0x6E6172626F746E65:
		switch(wp[1]){
		case 0x0000657461696863:return 1;
		default:return 0;
		}
	case 0x6E617262796C6F70:
		switch(wp[1]){
		case 0x0000657461696863:return 1;
		default:return 0;
		}
	case 0x6E61726666616E75:
		switch(wp[1]){
		case 0x0000646573696863:return 1;
		default:return 0;
		}
	case 0x6E6172666E656E75:
		switch(wp[1]){
		case 0x0000646573696863:return 1;
		default:return 0;
		}
	case 0x6E6172667265766F:
		switch(wp[1]){
		case 0x0000646573696863:return 1;
		default:return 0;
		}
	case 0x6E61726770657473:
		switch(wp[1]){
		case 0x0000646C69686364:return 1;
		default:return 0;
		}
	case 0x6E61726F706D6574:
		switch(wp[1]){
		case 0x0000796C73756F65:return 1;
		default:return 0;
		}
	case 0x6E61727074736F70:
		switch(wp[1]){
		case 0x0000796C6C616964:return 1;
		default:return 0;
		}
	case 0x6E61727261657270:
		switch(wp[1]){
		case 0x0000746E656D6567:return 1;
		default:return 0;
		}
	case 0x6E617272616C616D:
		switch(wp[1]){
		case 0x0000746E656D6567:return 1;
		default:return 0;
		}
	case 0x6E61727261736964:
		switch(wp[1]){
		case 0x0000746E656D6567:return 1;
		default:return 0;
		}
	case 0x6E6172726173696D:
		switch(wp[1]){
		case 0x0000746E656D6567:return 1;
		default:return 0;
		}
	case 0x6E617274696D6573:
		switch(wp[1]){
		case 0x0000657372657673:return 1;
		default:return 0;
		}
	case 0x6E6172746F6D6F68:
		switch(wp[1]){
		case 0x0000746E616C7073:return 1;
		default:return 0;
		}
	case 0x6E6172746F747561:
		switch(wp[1]){
		case 0x0000746E616C7073:return 1;
		default:return 0;
		}
	case 0x6E61736F72636173:
		switch(wp[1]){
		case 0x00007373656E7463:return 1;
		default:return 0;
		}
	case 0x6E61746C756D6973:
		switch(wp[1]){
		case 0x0000796C73756F65:return 1;
		default:return 0;
		}
	case 0x6E61746E656D6F6D:
		switch(wp[1]){
		case 0x0000796C73756F65:return 1;
		default:return 0;
		}
	case 0x6E61746F6E617275:
		switch(wp[1]){
		case 0x00006574696C6174:return 1;
		default:return 0;
		}
	case 0x6E61746F72747479:
		switch(wp[1]){
		case 0x00006574696C6174:return 1;
		default:return 0;
		}
	case 0x6E617474656C6964:
		switch(wp[1]){
		case 0x0000706968736574:return 1;
		default:return 0;
		}
	case 0x6E61747563627573:
		switch(wp[1]){
		case 0x0000796C73756F65:return 1;
		default:return 0;
		}
	case 0x6E61747563726570:
		switch(wp[1]){
		case 0x0000796C73756F65:return 1;
		default:return 0;
		}
	case 0x6E61766461657270:
		switch(wp[1]){
		case 0x0000746E656D6563:return 1;
		default:return 0;
		}
	case 0x6E617664616E6F6E:
		switch(wp[1]){
		case 0x0000746E656D6563:return 1;
		default:return 0;
		}
	case 0x6E61766572746574:
		switch(wp[1]){
		case 0x00006D75696C6567:return 1;
		default:return 0;
		}
	case 0x6E617665746F7270:
		switch(wp[1]){
		case 0x00006D75696C6567:return 1;
		case 0x00006E6F696C6567:return 1;
		default:return 0;
		}
	case 0x6E61796369727561:
		switch(wp[1]){
		case 0x0000636972647968:return 1;
		default:return 0;
		}
	case 0x6E61796863617274:
		switch(wp[1]){
		case 0x0000657469736564:return 1;
		default:return 0;
		}
	case 0x6E65626E65646F62:
		switch(wp[1]){
		case 0x0000657469726564:return 1;
		default:return 0;
		}
	case 0x6E65626F6E696D61:
		switch(wp[1]){
		case 0x00006564696D617A:return 1;
		default:return 0;
		}
	case 0x6E65636E6F636564:
		switch(wp[1]){
		case 0x0000726F74617274:return 1;
		default:return 0;
		}
	case 0x6E65636F696C6568:
		switch(wp[1]){
		case 0x00006C6163697274:return 1;
		default:return 0;
		}
	case 0x6E65636F70706968:
		switch(wp[1]){
		case 0x0000636972756174:return 1;
		default:return 0;
		}
	case 0x6E6563736E617274:
		switch(wp[1]){
		case 0x00006C61746E6564:return 1;
		case 0x0000796C676E6964:return 1;
		case 0x0000796C746E6564:return 1;
		default:return 0;
		}
	case 0x6E65646572636E75:
		switch(wp[1]){
		case 0x000064656C616974:return 1;
		default:return 0;
		}
	case 0x6E656469616D6E75:
		switch(wp[1]){
		case 0x00007373656E696C:return 1;
		default:return 0;
		}
	case 0x6E656469666E6F63:
		switch(wp[1]){
		case 0x0000796C6C616974:return 1;
		default:return 0;
		}
	case 0x6E65646973657270:
		switch(wp[1]){
		case 0x0000796C6C616974:return 1;
		default:return 0;
		}
	case 0x6E656469766F7270:
		switch(wp[1]){
		case 0x0000796C6C616974:return 1;
		default:return 0;
		}
	case 0x6E65646E6F636572:
		switch(wp[1]){
		case 0x00006E6F69746173:return 1;
		default:return 0;
		}
	case 0x6E6566666F657270:
		switch(wp[1]){
		case 0x0000796C65766973:return 1;
		default:return 0;
		}
	case 0x6E65667265746E69:
		switch(wp[1]){
		case 0x00006C6172747365:return 1;
		default:return 0;
		}
	case 0x6E65676C75646E69:
		switch(wp[1]){
		case 0x0000796C6C616974:return 1;
		default:return 0;
		}
	case 0x6E65676E69736964:
		switch(wp[1]){
		case 0x0000796C73756F75:return 1;
		default:return 0;
		}
	case 0x6E65676E6974636F:
		switch(wp[1]){
		case 0x00007972616E6574:return 1;
		default:return 0;
		}
	case 0x6E65676E6F636E69:
		switch(wp[1]){
		case 0x00007974696C6169:return 1;
		default:return 0;
		}
	case 0x6E65676E6F636E75:
		switch(wp[1]){
		case 0x00007974696C6169:return 1;
		default:return 0;
		}
	case 0x6E65676F62727574:
		switch(wp[1]){
		case 0x0000726F74617265:return 1;
		default:return 0;
		}
	case 0x6E65676F63796C67:
		switch(wp[1]){
		case 0x0000736973796C6F:return 1;
		default:return 0;
		}
	case 0x6E65676F6C796870:
		switch(wp[1]){
		case 0x00006C6163697465:return 1;
		default:return 0;
		}
	case 0x6E65676F6D6D616D:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x6E65676F72647968:
		switch(wp[1]){
		case 0x0000736973796C6F:return 1;
		default:return 0;
		}
	case 0x6E65676F746F6870:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x6E65676F74796870:
		switch(wp[1]){
		case 0x00006C6163697465:return 1;
		default:return 0;
		}
	case 0x6E65677265646E75:
		switch(wp[1]){
		case 0x00006E616D656C74:return 1;
		default:return 0;
		}
	case 0x6E6567746E656F72:
		switch(wp[1]){
		case 0x00006369676F6C6F:return 1;
		case 0x000065706F63736F:return 1;
		case 0x000068706172676F:return 1;
		case 0x0000726574656D6F:return 1;
		case 0x000079706F63736F:return 1;
		case 0x0000797274656D6F:return 1;
		default:return 0;
		}
	case 0x6E65686572706572:
		switch(wp[1]){
		case 0x0000796C65766973:return 1;
		case 0x000079726F746164:return 1;
		default:return 0;
		}
	case 0x6E65686572707061:
		switch(wp[1]){
		case 0x0000796C65766973:return 1;
		case 0x0000796C676E6964:return 1;
		default:return 0;
		}
	case 0x6E6568706174656D:
		switch(wp[1]){
		case 0x00006C616E656D6F:return 1;
		case 0x00006E6F6E656D6F:return 1;
		default:return 0;
		}
	case 0x6E65687074656361:
		switch(wp[1]){
		case 0x00006E6964697465:return 1;
		default:return 0;
		}
	case 0x6E65687475616572:
		switch(wp[1]){
		case 0x0000657461636974:return 1;
		default:return 0;
		}
	case 0x6E65687475616E69:
		switch(wp[1]){
		case 0x0000797469636974:return 1;
		default:return 0;
		}
	case 0x6E65687475616E75:
		switch(wp[1]){
		case 0x0000797469636974:return 1;
		default:return 0;
		}
	case 0x6E656963736E6F63:
		switch(wp[1]){
		case 0x0000657369776563:return 1;
		case 0x00007373656C6563:return 1;
		default:return 0;
		}
	case 0x6E65696465707865:
		switch(wp[1]){
		case 0x0000796C6C616974:return 1;
		default:return 0;
		}
	case 0x6E65696779686E75:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x6E65697265707865:
		switch(wp[1]){
		case 0x0000656C62616563:return 1;
		case 0x00007373656C6563:return 1;
		case 0x0000796C6C616974:return 1;
		default:return 0;
		}
	case 0x6E6569726F736964:
		switch(wp[1]){
		case 0x00006E6F69746174:return 1;
		default:return 0;
		}
	case 0x6E656B6177616E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x6E656C6974736570:
		switch(wp[1]){
		case 0x0000646565776563:return 1;
		case 0x000074726F776563:return 1;
		case 0x0000796C6C616974:return 1;
		default:return 0;
		}
	case 0x6E656D61646E7566:
		switch(wp[1]){
		case 0x00006D73696C6174:return 1;
		case 0x00007473696C6174:return 1;
		case 0x00007974696C6174:return 1;
		default:return 0;
		}
	case 0x6E656D61656E696C:
		switch(wp[1]){
		case 0x00006E6F69746174:return 1;
		default:return 0;
		}
	case 0x6E656D6172636173:
		switch(wp[1]){
		case 0x00006D73696C6174:return 1;
		case 0x00006E6169726174:return 1;
		case 0x00007473696C6174:return 1;
		case 0x0000747369726174:return 1;
		case 0x00007974696C6174:return 1;
		default:return 0;
		}
	case 0x6E656D6172746E69:
		switch(wp[1]){
		case 0x00006C6165676E69:return 1;
		default:return 0;
		}
	case 0x6E656D6174736574:
		switch(wp[1]){
		case 0x00006E6F69746174:return 1;
		case 0x0000796C69726174:return 1;
		default:return 0;
		}
	case 0x6E656D656C676572:
		switch(wp[1]){
		case 0x00006E6F69746174:return 1;
		default:return 0;
		}
	case 0x6E656D656C706D69:
		switch(wp[1]){
		case 0x00006E6F69746174:return 1;
		default:return 0;
		}
	case 0x6E656D6572636361:
		switch(wp[1]){
		case 0x00006C6169746974:return 1;
		case 0x00006E6F69746974:return 1;
		default:return 0;
		}
	case 0x6E656D6572636572:
		switch(wp[1]){
		case 0x00006C6169746974:return 1;
		default:return 0;
		}
	case 0x6E656D6572636E69:
		switch(wp[1]){
		case 0x00006E6F69746174:return 1;
		default:return 0;
		}
	case 0x6E656D6572637865:
		switch(wp[1]){
		case 0x00006C6169746974:return 1;
		default:return 0;
		}
	case 0x6E656D6765736564:
		switch(wp[1]){
		case 0x00006E6F69746174:return 1;
		default:return 0;
		}
	case 0x6E656D6765736572:
		switch(wp[1]){
		case 0x00006E6F69746174:return 1;
		default:return 0;
		}
	case 0x6E656D6769706564:
		switch(wp[1]){
		case 0x00006E6F69746174:return 1;
		default:return 0;
		}
	case 0x6E656D6964696E75:
		switch(wp[1]){
		case 0x00006C616E6F6973:return 1;
		default:return 0;
		}
	case 0x6E656D6964697274:
		switch(wp[1]){
		case 0x000064656E6F6973:return 1;
		case 0x00006C616E6F6973:return 1;
		default:return 0;
		}
	case 0x6E656D6972746564:
		switch(wp[1]){
		case 0x00007974696C6174:return 1;
		default:return 0;
		}
	case 0x6E656D69746E6573:
		switch(wp[1]){
		case 0x0000657A696C6174:return 1;
		case 0x00006D73696C6174:return 1;
		case 0x00007473696C6174:return 1;
		case 0x00007974696C6174:return 1;
		default:return 0;
		}
	case 0x6E656D6D6F636572:
		switch(wp[1]){
		case 0x00006E6F69746164:return 1;
		case 0x0000746E656D6563:return 1;
		case 0x000079726F746164:return 1;
		default:return 0;
		}
	case 0x6E656D6D6F636E69:
		switch(wp[1]){
		case 0x0000657461727573:return 1;
		default:return 0;
		}
	case 0x6E656D6D6F636E75:
		switch(wp[1]){
		case 0x0000657461727573:return 1;
		default:return 0;
		}
	case 0x6E656D6F67696C6F:
		switch(wp[1]){
		case 0x000061656872726F:return 1;
		default:return 0;
		}
	case 0x6E656D6F6D6F7262:
		switch(wp[1]){
		case 0x000061656872726F:return 1;
		default:return 0;
		}
	case 0x6E656D6F6E656461:
		switch(wp[1]){
		case 0x00006C6165676E69:return 1;
		default:return 0;
		}
	case 0x6E656D6F7470656C:
		switch(wp[1]){
		case 0x00006C6165676E69:return 1;
		default:return 0;
		}
	case 0x6E656D7265646E75:
		switch(wp[1]){
		case 0x000064656E6F6974:return 1;
		default:return 0;
		}
	case 0x6E656D7265666F63:
		switch(wp[1]){
		case 0x00006E6F69746174:return 1;
		default:return 0;
		}
	case 0x6E656D7265707573:
		switch(wp[1]){
		case 0x00007974696C6174:return 1;
		default:return 0;
		}
	case 0x6E656D7265707968:
		switch(wp[1]){
		case 0x000061656872726F:return 1;
		default:return 0;
		}
	case 0x6E656D7265746E69:
		switch(wp[1]){
		case 0x00006C6165676E69:return 1;
		case 0x00006C6175727473:return 1;
		case 0x00006D7575727473:return 1;
		default:return 0;
		}
	case 0x6E656D736E617274:
		switch(wp[1]){
		case 0x00006E6F69746174:return 1;
		default:return 0;
		}
	case 0x6E656E69746E6F63:
		switch(wp[1]){
		case 0x00006D73696C6174:return 1;
		case 0x00007473696C6174:return 1;
		case 0x00007974696C6174:return 1;
		default:return 0;
		}
	case 0x6E65706D6F636564:
		switch(wp[1]){
		case 0x00006E6F69746173:return 1;
		default:return 0;
		}
	case 0x6E65706D6F636572:
		switch(wp[1]){
		case 0x00006E6F69746173:return 1;
		default:return 0;
		}
	case 0x6E65706D6F636E69:
		switch(wp[1]){
		case 0x00006E6F69746173:return 1;
		default:return 0;
		}
	case 0x6E65706F6C637963:
		switch(wp[1]){
		case 0x0000656E6F6E6174:return 1;
		default:return 0;
		}
	case 0x6E65707265746E69:
		switch(wp[1]){
		case 0x0000657461727465:return 1;
		case 0x0000746E61727465:return 1;
		default:return 0;
		}
	case 0x6E6570786573696D:
		switch(wp[1]){
		case 0x0000657275746964:return 1;
		default:return 0;
		}
	case 0x6E65726566657270:
		switch(wp[1]){
		case 0x0000796C6C616974:return 1;
		default:return 0;
		}
	case 0x6E65726566666964:
		switch(wp[1]){
		case 0x0000656C62616974:return 1;
		case 0x0000726F74616974:return 1;
		case 0x0000796C676E6963:return 1;
		case 0x0000796C6C616974:return 1;
		default:return 0;
		}
	case 0x6E65727275736E75:
		switch(wp[1]){
		case 0x0000676E69726564:return 1;
		default:return 0;
		}
	case 0x6E65727465726E75:
		switch(wp[1]){
		case 0x0000656C62616863:return 1;
		default:return 0;
		}
	case 0x6E6572746E696E75:
		switch(wp[1]){
		case 0x0000656C62616863:return 1;
		default:return 0;
		}
	case 0x6E65736172707573:
		switch(wp[1]){
		case 0x0000657669746973:return 1;
		default:return 0;
		}
	case 0x6E657362616E6F6E:
		switch(wp[1]){
		case 0x00006E6F69746174:return 1;
		default:return 0;
		}
	case 0x6E65736572706572:
		switch(wp[1]){
		case 0x0000657669746174:return 1;
		case 0x00006E6F69746174:return 1;
		default:return 0;
		}
	case 0x6E65736F69646172:
		switch(wp[1]){
		case 0x0000657669746973:return 1;
		default:return 0;
		}
	case 0x6E65736F746F6870:
		switch(wp[1]){
		case 0x0000657669746973:return 1;
		case 0x0000657A69746973:return 1;
		default:return 0;
		}
	case 0x6E65737265707573:
		switch(wp[1]){
		case 0x0000657669746973:return 1;
		case 0x0000796C6C617573:return 1;
		default:return 0;
		}
	case 0x6E65737265707968:
		switch(wp[1]){
		case 0x0000657669746973:return 1;
		case 0x0000657A69746973:return 1;
		default:return 0;
		}
	case 0x6E65737265746661:
		switch(wp[1]){
		case 0x00006E6F69746173:return 1;
		default:return 0;
		}
	case 0x6E65737269616C63:
		switch(wp[1]){
		case 0x000065636E656974:return 1;
		default:return 0;
		}
	case 0x6E657373616E6F6E:
		switch(wp[1]){
		case 0x00006E6F69746174:return 1;
		default:return 0;
		}
	case 0x6E65746572706E75:
		switch(wp[1]){
		case 0x0000796C676E6964:return 1;
		default:return 0;
		}
	case 0x6E65746867697266:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x6E65746F6962616C:
		switch(wp[1]){
		case 0x00006D756C756361:return 1;
		default:return 0;
		}
	case 0x6E65746F7275656E:
		switch(wp[1]){
		case 0x000073756F6E6964:return 1;
		default:return 0;
		}
	case 0x6E6574736F6E6F6E:
		switch(wp[1]){
		case 0x00006E6F69746174:return 1;
		default:return 0;
		}
	case 0x6E657478656E6F6E:
		switch(wp[1]){
		case 0x00006C616E6F6973:return 1;
		case 0x000079726F746175:return 1;
		default:return 0;
		}
	case 0x6E6575716E697571:
		switch(wp[1]){
		case 0x0000796C6C61696E:return 1;
		default:return 0;
		}
	case 0x6E65766275736E75:
		switch(wp[1]){
		case 0x000064656E6F6974:return 1;
		default:return 0;
		}
	case 0x6E657664616E6F6E:
		switch(wp[1]){
		case 0x000073756F727574:return 1;
		default:return 0;
		}
	case 0x6E65766461736964:
		switch(wp[1]){
		case 0x000073756F727574:return 1;
		default:return 0;
		}
	case 0x6E6576646173696D:
		switch(wp[1]){
		case 0x000073756F727574:return 1;
		default:return 0;
		}
	case 0x6E65766973726F64:
		switch(wp[1]){
		case 0x0000796C6C617274:return 1;
		default:return 0;
		}
	case 0x6E65766E6F636572:
		switch(wp[1]){
		case 0x00006C616E6F6974:return 1;
		default:return 0;
		}
	case 0x6E65766E6F636E69:
		switch(wp[1]){
		case 0x0000796C746E6569:return 1;
		default:return 0;
		}
	case 0x6E65766E6F636E75:
		switch(wp[1]){
		case 0x000064656E6F6974:return 1;
		case 0x00006C616E6F6974:return 1;
		case 0x0000796C746E6569:return 1;
		default:return 0;
		}
	case 0x6E65766F73726F64:
		switch(wp[1]){
		case 0x0000796C6C617274:return 1;
		default:return 0;
		}
	case 0x6E65767265707968:
		switch(wp[1]){
		case 0x00006574616C6974:return 1;
		default:return 0;
		}
	case 0x6E65767265746E69:
		switch(wp[1]){
		case 0x000061696C617274:return 1;
		case 0x00006C616E6F6974:return 1;
		default:return 0;
		}
	case 0x6E676970706F6E75:
		switch(wp[1]){
		case 0x000064657461726F:return 1;
		default:return 0;
		}
	case 0x6E67697365646E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x6E676F6365726E75:
		switch(wp[1]){
		case 0x0000656C62617A69:return 1;
		case 0x0000796C62617A69:return 1;
		default:return 0;
		}
	case 0x6E676F6365727269:
		switch(wp[1]){
		case 0x0000656C62617A69:return 1;
		case 0x0000796C62617A69:return 1;
		default:return 0;
		}
	case 0x6E676F65616C6170:
		switch(wp[1]){
		case 0x000073756F687461:return 1;
		default:return 0;
		}
	case 0x6E676F6870616373:
		switch(wp[1]){
		case 0x0000657469687461:return 1;
		default:return 0;
		}
	case 0x6E676F6973796870:
		switch(wp[1]){
		case 0x000063696E6F6D6F:return 1;
		case 0x00006C6163696D6F:return 1;
		default:return 0;
		}
	case 0x6E676F74616C6170:
		switch(wp[1]){
		case 0x000073756F687461:return 1;
		default:return 0;
		}
	case 0x6E676F74616D656E:
		switch(wp[1]){
		case 0x000073756F687461:return 1;
		default:return 0;
		}
	case 0x6E676F7463656C70:
		switch(wp[1]){
		case 0x000073756F687461:return 1;
		default:return 0;
		}
	case 0x6E676F7465616863:
		switch(wp[1]){
		case 0x000073756F687461:return 1;
		default:return 0;
		}
	case 0x6E676F746E657665:
		switch(wp[1]){
		case 0x000073756F687461:return 1;
		default:return 0;
		}
	case 0x6E676F746E6F646F:
		switch(wp[1]){
		case 0x000073756F687461:return 1;
		default:return 0;
		}
	case 0x6E676F7A69686373:
		switch(wp[1]){
		case 0x00006D7369687461:return 1;
		case 0x000073756F687461:return 1;
		default:return 0;
		}
	case 0x6E67796863617262:
		switch(wp[1]){
		case 0x00006D7369687461:return 1;
		case 0x000073756F687461:return 1;
		default:return 0;
		}
	case 0x6E68636574657270:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x6E68636E616C7073:
		switch(wp[1]){
		case 0x000061696E79646F:return 1;
		case 0x000065626972746F:return 1;
		case 0x0000656C656F636F:return 1;
		case 0x00007473616C626F:return 1;
		case 0x000079687461706F:return 1;
		case 0x000079706F63736F:return 1;
		default:return 0;
		}
	case 0x6E687465656C6170:
		switch(wp[1]){
		case 0x00006369676F6C6F:return 1;
		default:return 0;
		}
	case 0x6E6961647265766F:
		switch(wp[1]){
		case 0x00007373656E6974:return 1;
		default:return 0;
		}
	case 0x6E696172746E6F63:
		switch(wp[1]){
		case 0x0000657461636964:return 1;
		default:return 0;
		}
	case 0x6E69617274736572:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x6E6962616E6E6163:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x6E69636E6F636E69:
		switch(wp[1]){
		case 0x0000796C6574616E:return 1;
		default:return 0;
		}
	case 0x6E69636F74656361:
		switch(wp[1]){
		case 0x0000656E656D616E:return 1;
		default:return 0;
		}
	case 0x6E69647574736574:
		switch(wp[1]){
		case 0x000073756F697261:return 1;
		default:return 0;
		}
	case 0x6E6965726F747561:
		switch(wp[1]){
		case 0x00006E6F69737566:return 1;
		default:return 0;
		}
	case 0x6E69666E6F636E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x6E69666F746F6870:
		switch(wp[1]){
		case 0x0000676E69687369:return 1;
		default:return 0;
		}
	case 0x6E696761636E756A:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x6E6967617463796E:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x6E696769726F6E75:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x6E69676E656E6F6E:
		switch(wp[1]){
		case 0x0000676E69726565:return 1;
		default:return 0;
		}
	case 0x6E6968746870616E:
		switch(wp[1]){
		case 0x0000656E696C7564:return 1;
		default:return 0;
		}
	case 0x6E696B6F72647968:
		switch(wp[1]){
		case 0x00006C6163697465:return 1;
		default:return 0;
		}
	case 0x6E696C6564657270:
		switch(wp[1]){
		case 0x00006E6F69746165:return 1;
		case 0x000079636E657571:return 1;
		default:return 0;
		}
	case 0x6E696C65646E6F6E:
		switch(wp[1]){
		case 0x00006E6F69746165:return 1;
		default:return 0;
		}
	case 0x6E696C656D6D6F63:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x6E696C666E696B73:
		switch(wp[1]){
		case 0x00007373656E6974:return 1;
		default:return 0;
		}
	case 0x6E696C697274616D:
		switch(wp[1]){
		case 0x00006D7369726165:return 1;
		default:return 0;
		}
	case 0x6E696C6974636572:
		switch(wp[1]){
		case 0x00006D7369726165:return 1;
		case 0x00006E6F69746165:return 1;
		case 0x0000797469726165:return 1;
		default:return 0;
		}
	case 0x6E696C6976727563:
		switch(wp[1]){
		case 0x0000797469726165:return 1;
		default:return 0;
		}
	case 0x6E696C6C61726F63:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x6E696C6F6E616C70:
		switch(wp[1]){
		case 0x00006C6163697264:return 1;
		default:return 0;
		}
	case 0x6E696C7265646E75:
		switch(wp[1]){
		case 0x00006E6F69746165:return 1;
		default:return 0;
		}
	case 0x6E696C7265746E69:
		switch(wp[1]){
		case 0x00006E6F69746165:return 1;
		case 0x0000796C69726165:return 1;
		default:return 0;
		}
	case 0x6E696C7963627573:
		switch(wp[1]){
		case 0x00006C6163697264:return 1;
		default:return 0;
		}
	case 0x6E696D61736C6162:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x6E696D6F72746572:
		switch(wp[1]){
		case 0x0000796C746E6567:return 1;
		default:return 0;
		}
	case 0x6E696D7265746564:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x6E696D7265746E69:
		switch(wp[1]){
		case 0x00006D6F64656C67:return 1;
		default:return 0;
		}
	case 0x6E696D7265747865:
		switch(wp[1]){
		case 0x0000737365727461:return 1;
		default:return 0;
		}
	case 0x6E696D756C6E6F6E:
		switch(wp[1]){
		case 0x0000746E65637365:return 1;
		default:return 0;
		}
	case 0x6E696D756C6F6962:
		switch(wp[1]){
		case 0x0000746E65637365:return 1;
		default:return 0;
		}
	case 0x6E696D756C79786F:
		switch(wp[1]){
		case 0x0000746E65637365:return 1;
		default:return 0;
		}
	case 0x6E696E746867696C:
		switch(wp[1]){
		case 0x0000666F6F727067:return 1;
		default:return 0;
		}
	case 0x6E696F6574756C67:
		switch(wp[1]){
		case 0x00006C616E697567:return 1;
		default:return 0;
		}
	case 0x6E696F7265707573:
		switch(wp[1]){
		case 0x00006C616E726574:return 1;
		default:return 0;
		}
	case 0x6E696F7265746E61:
		switch(wp[1]){
		case 0x00006C616E726574:return 1;
		case 0x0000726F69726566:return 1;
		case 0x0000726F69726574:return 1;
		default:return 0;
		}
	case 0x6E696F72746E6576:
		switch(wp[1]){
		case 0x00006C616E697567:return 1;
		default:return 0;
		}
	case 0x6E69707265707968:
		switch(wp[1]){
		case 0x00006D73696C6165:return 1;
		default:return 0;
		}
	case 0x6E69726175736163:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x6E6972636F646E65:
		switch(wp[1]){
		case 0x000079687461706F:return 1;
		default:return 0;
		}
	case 0x6E6972666E696E75:
		switch(wp[1]){
		case 0x0000656C62616567:return 1;
		default:return 0;
		}
	case 0x6E69727473726570:
		switch(wp[1]){
		case 0x0000746E656D6567:return 1;
		default:return 0;
		}
	case 0x6E69736E69657270:
		switch(wp[1]){
		case 0x0000657669746175:return 1;
		case 0x0000676E69746175:return 1;
		case 0x00006E6F69746175:return 1;
		default:return 0;
		}
	case 0x6E69737265707573:
		switch(wp[1]){
		case 0x0000797469726563:return 1;
		default:return 0;
		}
	case 0x6E69737361737361:
		switch(wp[1]){
		case 0x0000737365727461:return 1;
		default:return 0;
		}
	case 0x6E69746361786568:
		switch(wp[1]){
		case 0x0000656E696C6C65:return 1;
		default:return 0;
		}
	case 0x6E69746C61626F63:
		switch(wp[1]){
		case 0x0000657469727469:return 1;
		default:return 0;
		}
	case 0x6E69746E65677261:
		switch(wp[1]){
		case 0x0000657461727469:return 1;
		default:return 0;
		}
	case 0x6E69747261676967:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x6E69747369646E69:
		switch(wp[1]){
		case 0x00007373656E7463:return 1;
		default:return 0;
		}
	case 0x6E69747369646E75:
		switch(wp[1]){
		case 0x00007373656E7463:return 1;
		default:return 0;
		}
	case 0x6E6974756C676761:
		switch(wp[1]){
		case 0x000063696E65676F:return 1;
		case 0x000065706F63736F:return 1;
		default:return 0;
		}
	case 0x6E697571696D6573:
		switch(wp[1]){
		case 0x0000646966657571:return 1;
		default:return 0;
		}
	case 0x6E697571756C6F74:
		switch(wp[1]){
		case 0x0000656E69646C61:return 1;
		default:return 0;
		}
	case 0x6E69766E6F636E75:
		switch(wp[1]){
		case 0x0000796C676E6963:return 1;
		default:return 0;
		}
	case 0x6E697A6F746F6870:
		switch(wp[1]){
		case 0x0000657079746F63:return 1;
		case 0x0000797079746F63:return 1;
		default:return 0;
		}
	case 0x6E6B65726F666E75:
		switch(wp[1]){
		case 0x0000656C6261776F:return 1;
		default:return 0;
		}
	case 0x6E6D6F73696D6573:
		switch(wp[1]){
		case 0x000065636E656C6F:return 1;
		default:return 0;
		}
	case 0x6E6E6163696D6573:
		switch(wp[1]){
		case 0x000063696C616269:return 1;
		default:return 0;
		}
	case 0x6E6E617265707573:
		switch(wp[1]){
		case 0x00006E6F69746175:return 1;
		case 0x0000746E61746975:return 1;
		default:return 0;
		}
	case 0x6E6E656C626F746F:
		switch(wp[1]){
		case 0x000061656872726F:return 1;
		default:return 0;
		}
	case 0x6E6E6570666C6168:
		switch(wp[1]){
		case 0x00006874726F7779:return 1;
		default:return 0;
		}
	case 0x6E6E65706C617774:
		switch(wp[1]){
		case 0x00006874726F7779:return 1;
		default:return 0;
		}
	case 0x6E6E6F63696D6573:
		switch(wp[1]){
		case 0x00006E6F69746365:return 1;
		default:return 0;
		}
	case 0x6E6E757265726F66:
		switch(wp[1]){
		case 0x0000706968737265:return 1;
		default:return 0;
		}
	case 0x6E6F636172666E69:
		switch(wp[1]){
		case 0x000073756F696373:return 1;
		default:return 0;
		}
	case 0x6E6F636172707573:
		switch(wp[1]){
		case 0x000064696F6C7964:return 1;
		case 0x0000726F74637564:return 1;
		case 0x000073756F696373:return 1;
		default:return 0;
		}
	case 0x6E6F636172746C75:
		switch(wp[1]){
		case 0x00007265736E6564:return 1;
		case 0x0000746E65646966:return 1;
		default:return 0;
		}
	case 0x6E6F636172747865:
		switch(wp[1]){
		case 0x000073756F696373:return 1;
		default:return 0;
		}
	case 0x6E6F636968637261:
		switch(wp[1]){
		case 0x0000746E656E6974:return 1;
		default:return 0;
		}
	case 0x6E6F636968706D61:
		switch(wp[1]){
		case 0x000073756F6C7964:return 1;
		default:return 0;
		}
	case 0x6E6F6369746C756D:
		switch(wp[1]){
		case 0x0000726F74637564:return 1;
		default:return 0;
		}
	case 0x6E6F636F69646172:
		switch(wp[1]){
		case 0x0000726F74637564:return 1;
		default:return 0;
		}
	case 0x6E6F636F7263616D:
		switch(wp[1]){
		case 0x0000746E6167756A:return 1;
		default:return 0;
		}
	case 0x6E6F636F7263696D:
		switch(wp[1]){
		case 0x0000746E6167756A:return 1;
		default:return 0;
		}
	case 0x6E6F636F72726566:
		switch(wp[1]){
		case 0x0000726F74657263:return 1;
		default:return 0;
		}
	case 0x6E6F636F746E656D:
		switch(wp[1]){
		case 0x00006C61696C7964:return 1;
		default:return 0;
		}
	case 0x6E6F637265646E75:
		switch(wp[1]){
		case 0x000064656E726563:return 1;
		case 0x0000656C62617473:return 1;
		case 0x00006E6F69746964:return 1;
		default:return 0;
		}
	case 0x6E6F637265707573:
		switch(wp[1]){
		case 0x00006E6F69737566:return 1;
		case 0x0000726F74637564:return 1;
		case 0x000073756F696373:return 1;
		case 0x0000746E65646966:return 1;
		default:return 0;
		}
	case 0x6E6F637265707968:
		switch(wp[1]){
		case 0x000073756F696373:return 1;
		case 0x0000746E65646966:return 1;
		default:return 0;
		}
	case 0x6E6F637265746E69:
		switch(wp[1]){
		case 0x0000646574726F74:return 1;
		case 0x000064696F6C7964:return 1;
		case 0x00007265736E6564:return 1;
		default:return 0;
		}
	case 0x6E6F637369646E75:
		switch(wp[1]){
		case 0x000064657463656E:return 1;
		case 0x0000646574726563:return 1;
		case 0x00006465756E6974:return 1;
		default:return 0;
		}
	case 0x6E6F63736E617274:
		switch(wp[1]){
		case 0x000064696F6C7964:return 1;
		case 0x000073756F696373:return 1;
		default:return 0;
		}
	case 0x6E6F646F69726570:
		switch(wp[1]){
		case 0x000079676F6C6F74:return 1;
		default:return 0;
		}
	case 0x6E6F646F69746E61:
		switch(wp[1]){
		case 0x00006369676C6174:return 1;
		default:return 0;
		}
	case 0x6E6F647261706E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x6E6F676172746574:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x6E6F67696C656874:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x6E6F686172746C75:
		switch(wp[1]){
		case 0x0000656C6261726F:return 1;
		default:return 0;
		}
	case 0x6E6F686369726570:
		switch(wp[1]){
		case 0x0000736974697264:return 1;
		default:return 0;
		}
	case 0x6E6F68636E796872:
		switch(wp[1]){
		case 0x000064696F6C6C65:return 1;
		default:return 0;
		}
	case 0x6E6F68636F707968:
		switch(wp[1]){
		case 0x0000747361697264:return 1;
		default:return 0;
		}
	case 0x6E6F6870656C6574:
		switch(wp[1]){
		case 0x000068706172676F:return 1;
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x6E6F687069746E61:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x6E6F68706F636163:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x6E6F68706F747561:
		switch(wp[1]){
		case 0x000065706F63736F:return 1;
		default:return 0;
		}
	case 0x6E6F687075656E75:
		switch(wp[1]){
		case 0x0000796C73756F69:return 1;
		default:return 0;
		}
	case 0x6E6F687468706964:
		switch(wp[1]){
		case 0x0000657A696C6167:return 1;
		case 0x00006E6F69746167:return 1;
		default:return 0;
		}
	case 0x6E6F696C676E6167:
		switch(wp[1]){
		case 0x0000616D6F727565:return 1;
		case 0x0000796D6F746365:return 1;
		default:return 0;
		}
	case 0x6E6F696C69706170:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x6E6F696D72656874:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x6E6F696E6F6D6D61:
		switch(wp[1]){
		case 0x0000657461727469:return 1;
		default:return 0;
		}
	case 0x6E6F697274736968:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x6E6F69736163636F:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x6E6F6974616E6E75:
		switch(wp[1]){
		case 0x000064657A696C61:return 1;
		default:return 0;
		}
	case 0x6E6F697461727269:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x6E6F697463616572:
		switch(wp[1]){
		case 0x00006D7369797261:return 1;
		default:return 0;
		}
	case 0x6E6F697463617274:
		switch(wp[1]){
		case 0x0000676E69726565:return 1;
		default:return 0;
		}
	case 0x6E6F697463697266:
		switch(wp[1]){
		case 0x0000796C7373656C:return 1;
		default:return 0;
		}
	case 0x6E6F697469626D61:
		switch(wp[1]){
		case 0x0000796C7373656C:return 1;
		default:return 0;
		}
	case 0x6E6F69746F766564:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x6E6F697473657571:
		switch(wp[1]){
		case 0x0000796C7373656C:return 1;
		default:return 0;
		}
	case 0x6E6F6C61666E6F67:
		switch(wp[1]){
		case 0x0000657461726569:return 1;
		default:return 0;
		}
	case 0x6E6F6C756373616D:
		switch(wp[1]){
		case 0x00007375656C6375:return 1;
		default:return 0;
		}
	case 0x6E6F6D6172746C75:
		switch(wp[1]){
		case 0x00006D73696E6174:return 1;
		case 0x00007473696E6174:return 1;
		default:return 0;
		}
	case 0x6E6F6D63696E6170:
		switch(wp[1]){
		case 0x0000676E69726567:return 1;
		default:return 0;
		}
	case 0x6E6F6D6563616570:
		switch(wp[1]){
		case 0x0000676E69726567:return 1;
		default:return 0;
		}
	case 0x6E6F6D6563616C70:
		switch(wp[1]){
		case 0x0000676E69726567:return 1;
		default:return 0;
		}
	case 0x6E6F6D6564627573:
		switch(wp[1]){
		case 0x0000657461727473:return 1;
		default:return 0;
		}
	case 0x6E6F6D6564657270:
		switch(wp[1]){
		case 0x0000657461727473:return 1;
		default:return 0;
		}
	case 0x6E6F6D656C626166:
		switch(wp[1]){
		case 0x0000676E69726567:return 1;
		default:return 0;
		}
	case 0x6E6F6D6572616373:
		switch(wp[1]){
		case 0x0000676E69726567:return 1;
		default:return 0;
		}
	case 0x6E6F6D6572656163:
		switch(wp[1]){
		case 0x0000737569726169:return 1;
		default:return 0;
		}
	case 0x6E6F6D6573726576:
		switch(wp[1]){
		case 0x0000676E69726567:return 1;
		default:return 0;
		}
	case 0x6E6F6D6972657571:
		switch(wp[1]){
		case 0x0000796C73756F69:return 1;
		default:return 0;
		}
	case 0x6E6F6D697274616D:
		switch(wp[1]){
		case 0x0000796C73756F69:return 1;
		default:return 0;
		}
	case 0x6E6F6D6973726170:
		switch(wp[1]){
		case 0x0000796C73756F69:return 1;
		default:return 0;
		}
	case 0x6E6F6D6974736574:
		switch(wp[1]){
		case 0x0000657A696C6169:return 1;
		case 0x00007473696C6169:return 1;
		default:return 0;
		}
	case 0x6E6F6D6C65766F6E:
		switch(wp[1]){
		case 0x0000676E69726567:return 1;
		default:return 0;
		}
	case 0x6E6F6D6F6E656F63:
		switch(wp[1]){
		case 0x00006D736963656F:return 1;
		default:return 0;
		}
	case 0x6E6F6D6F72646E61:
		switch(wp[1]){
		case 0x00006D736963656F:return 1;
		default:return 0;
		}
	case 0x6E6F6D6F72647968:
		switch(wp[1]){
		case 0x0000656E616C706F:return 1;
		default:return 0;
		}
	case 0x6E6F6D7261686E65:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x6E6F6D7261686E69:
		switch(wp[1]){
		case 0x0000796C73756F69:return 1;
		default:return 0;
		}
	case 0x6E6F6D7261686E75:
		switch(wp[1]){
		case 0x0000796C73756F69:return 1;
		default:return 0;
		}
	case 0x6E6F6D7261686F63:
		switch(wp[1]){
		case 0x0000796C73756F69:return 1;
		default:return 0;
		}
	case 0x6E6F6D746972656D:
		switch(wp[1]){
		case 0x0000676E69726567:return 1;
		default:return 0;
		}
	case 0x6E6F6D79656E6F6D:
		switch(wp[1]){
		case 0x0000676E69726567:return 1;
		default:return 0;
		}
	case 0x6E6F707265707573:
		switch(wp[1]){
		case 0x0000746E61726564:return 1;
		default:return 0;
		}
	case 0x6E6F707365646E75:
		switch(wp[1]){
		case 0x0000796C746E6564:return 1;
		default:return 0;
		}
	case 0x6E6F707365726E75:
		switch(wp[1]){
		case 0x0000796C65766973:return 1;
		default:return 0;
		}
	case 0x6E6F70736F70656C:
		switch(wp[1]){
		case 0x000073756F6C7964:return 1;
		default:return 0;
		}
	case 0x6E6F7073796C6F70:
		switch(wp[1]){
		case 0x000073756F6C7964:return 1;
		default:return 0;
		}
	case 0x6E6F726269726570:
		switch(wp[1]){
		case 0x0000736974696863:return 1;
		default:return 0;
		}
	case 0x6E6F72626F646E65:
		switch(wp[1]){
		case 0x0000736974696863:return 1;
		default:return 0;
		}
	case 0x6E6F726863616E61:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x6E6F7268636E7973:
		switch(wp[1]){
		case 0x0000656C62617A69:return 1;
		case 0x000068706172676F:return 1;
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x6E6F7270696D6573:
		switch(wp[1]){
		case 0x00006C616E696D6F:return 1;
		default:return 0;
		}
	case 0x6E6F72707265766F:
		switch(wp[1]){
		case 0x00006465636E756F:return 1;
		default:return 0;
		}
	case 0x6E6F727461706E75:
		switch(wp[1]){
		case 0x0000656C62617A69:return 1;
		default:return 0;
		}
	case 0x6E6F727463656C65:
		switch(wp[1]){
		case 0x000073756F767265:return 1;
		default:return 0;
		}
	case 0x6E6F737265706D69:
		switch(wp[1]){
		case 0x0000737365727461:return 1;
		default:return 0;
		}
	case 0x6E6F746172666E69:
		switch(wp[1]){
		case 0x000072616C6C6973:return 1;
		default:return 0;
		}
	case 0x6E6F746172707573:
		switch(wp[1]){
		case 0x000072616C6C6973:return 1;
		default:return 0;
		}
	case 0x6E6F746172746E69:
		switch(wp[1]){
		case 0x000072616C6C6973:return 1;
		default:return 0;
		}
	case 0x6E6F747065727473:
		switch(wp[1]){
		case 0x000073756F727565:return 1;
		default:return 0;
		}
	case 0x6E6F747361696863:
		switch(wp[1]){
		case 0x000073756F727565:return 1;
		default:return 0;
		}
	case 0x6E706F7265746E65:
		switch(wp[1]){
		case 0x00006E6174737565:return 1;
		default:return 0;
		}
	case 0x6E72656874756F73:
		switch(wp[1]){
		case 0x00007373656E696C:return 1;
		default:return 0;
		}
	case 0x6E72657075736E75:
		switch(wp[1]){
		case 0x00006C6172757461:return 1;
		default:return 0;
		}
	case 0x6E7265746E756F63:
		switch(wp[1]){
		case 0x00006C6172757461:return 1;
		default:return 0;
		}
	case 0x6E72657474616C73:
		switch(wp[1]){
		case 0x00007373656E696C:return 1;
		default:return 0;
		}
	case 0x6E7265766F676E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x6E726F65616C6170:
		switch(wp[1]){
		case 0x0000656E69687469:return 1;
		default:return 0;
		}
	case 0x6E74726170657270:
		switch(wp[1]){
		case 0x0000706968737265:return 1;
		default:return 0;
		}
	case 0x6E7562617265766F:
		switch(wp[1]){
		case 0x0000796C746E6164:return 1;
		default:return 0;
		}
	case 0x6E75636566657270:
		switch(wp[1]){
		case 0x00006E6F69746164:return 1;
		case 0x000079726F746164:return 1;
		default:return 0;
		}
	case 0x6E75646570627573:
		switch(wp[1]){
		case 0x00006574616C7563:return 1;
		default:return 0;
		}
	case 0x6E756C7265707573:
		switch(wp[1]){
		case 0x00006C6163697461:return 1;
		default:return 0;
		}
	case 0x6E756D6D6F636E69:
		switch(wp[1]){
		case 0x0000656C62616369:return 1;
		case 0x0000796C62616369:return 1;
		default:return 0;
		}
	case 0x6E756D6D6F636E75:
		switch(wp[1]){
		case 0x0000646574616369:return 1;
		case 0x0000656C62616369:return 1;
		case 0x0000796C62616369:return 1;
		default:return 0;
		}
	case 0x6E756D6D6F637865:
		switch(wp[1]){
		case 0x0000656C62616369:return 1;
		case 0x0000726F74616369:return 1;
		default:return 0;
		}
	case 0x6E756D7265707573:
		switch(wp[1]){
		case 0x00006C6170696369:return 1;
		default:return 0;
		}
	case 0x6E756D7265746E69:
		switch(wp[1]){
		case 0x00006C6170696369:return 1;
		default:return 0;
		}
	case 0x6E756D7563726963:
		switch(wp[1]){
		case 0x00006574616C7564:return 1;
		default:return 0;
		}
	case 0x6E756F6E65726E75:
		switch(wp[1]){
		case 0x0000656C62616563:return 1;
		default:return 0;
		}
	case 0x6E756F6E6E616572:
		switch(wp[1]){
		case 0x0000746E656D6563:return 1;
		default:return 0;
		}
	case 0x6E75707265746E69:
		switch(wp[1]){
		case 0x0000657461757463:return 1;
		default:return 0;
		}
	case 0x6E75746972726566:
		switch(wp[1]){
		case 0x0000657469747367:return 1;
		default:return 0;
		}
	case 0x6E75746F72707563:
		switch(wp[1]){
		case 0x0000657469747367:return 1;
		default:return 0;
		}
	case 0x6E776F6576616C73:
		switch(wp[1]){
		case 0x0000706968737265:return 1;
		default:return 0;
		}
	case 0x6E776F6E65726E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x6E776F7265746E69:
		switch(wp[1]){
		case 0x0000706968737265:return 1;
		default:return 0;
		}
	case 0x6E79646172746574:
		switch(wp[1]){
		case 0x000073756F696D61:return 1;
		default:return 0;
		}
	case 0x6E79646F72647968:
		switch(wp[1]){
		case 0x00006C6163696D61:return 1;
		default:return 0;
		}
	case 0x6E79646F746F6870:
		switch(wp[1]){
		case 0x00006C6163696D61:return 1;
		default:return 0;
		}
	case 0x6E7972616C6F746F:
		switch(wp[1]){
		case 0x000079676F6C6F67:return 1;
		default:return 0;
		}
	case 0x6E79736F6372616E:
		switch(wp[1]){
		case 0x0000736973656874:return 1;
		default:return 0;
		}
	case 0x6E79736F646E6574:
		switch(wp[1]){
		case 0x000073697469766F:return 1;
		default:return 0;
		}
	case 0x6E79736F6574736F:
		switch(wp[1]){
		case 0x0000736973656874:return 1;
		case 0x000073697469766F:return 1;
		default:return 0;
		}
	case 0x6E79736F67696C6F:
		switch(wp[1]){
		case 0x0000636974656874:return 1;
		default:return 0;
		}
	case 0x6E79736F6C796D61:
		switch(wp[1]){
		case 0x0000736973656874:return 1;
		default:return 0;
		}
	case 0x6E79736F6D656863:
		switch(wp[1]){
		case 0x0000636974656874:return 1;
		case 0x0000736973656874:return 1;
		default:return 0;
		}
	case 0x6E79736F6D726564:
		switch(wp[1]){
		case 0x000073697469766F:return 1;
		default:return 0;
		}
	case 0x6E79736F7274656D:
		switch(wp[1]){
		case 0x0000736973657A69:return 1;
		default:return 0;
		}
	case 0x6E79736F746F6870:
		switch(wp[1]){
		case 0x0000636974656874:return 1;
		case 0x0000736973656874:return 1;
		default:return 0;
		}
	case 0x6E79736F746F7270:
		switch(wp[1]){
		case 0x000065736F6E6F74:return 1;
		default:return 0;
		}
	case 0x6E79736F74796870:
		switch(wp[1]){
		case 0x0000736973656874:return 1;
		default:return 0;
		}
	case 0x6E79737265707573:
		switch(wp[1]){
		case 0x0000657461636964:return 1;
		default:return 0;
		}
	case 0x6F6261646E756F72:
		switch(wp[1]){
		case 0x00007373656E7475:return 1;
		default:return 0;
		}
	case 0x6F6261757173756A:
		switch(wp[1]){
		case 0x0000656D73697475:return 1;
		default:return 0;
		}
	case 0x6F626C6F6F686373:
		switch(wp[1]){
		case 0x0000796C68736979:return 1;
		default:return 0;
		}
	case 0x6F626D6169746E61:
		switch(wp[1]){
		case 0x0000726F74706563:return 1;
		default:return 0;
		}
	case 0x6F626F65616C6170:
		switch(wp[1]){
		case 0x00007473696E6174:return 1;
		default:return 0;
		}
	case 0x6F627261636F7369:
		switch(wp[1]){
		case 0x00006C6972797473:return 1;
		default:return 0;
		}
	case 0x6F6361636F7A616D:
		switch(wp[1]){
		case 0x0000736973656874:return 1;
		default:return 0;
		}
	case 0x6F63616475657370:
		switch(wp[1]){
		case 0x0000656E6974696E:return 1;
		default:return 0;
		}
	case 0x6F63616D72616870:
		switch(wp[1]){
		case 0x00006169626F6870:return 1;
		case 0x00006169736F6E67:return 1;
		case 0x00006361696E616D:return 1;
		case 0x00006C6169656F70:return 1;
		case 0x00006E6169656F70:return 1;
		case 0x0000736369646570:return 1;
		case 0x00007369736F6E67:return 1;
		case 0x0000747369656F70:return 1;
		case 0x0000747369676F6C:return 1;
		case 0x00007473696C6F70:return 1;
		case 0x0000796870617267:return 1;
		default:return 0;
		}
	case 0x6F63616F69646172:
		switch(wp[1]){
		case 0x0000736369747375:return 1;
		default:return 0;
		}
	case 0x6F63617265707968:
		switch(wp[1]){
		case 0x0000736369747375:return 1;
		default:return 0;
		}
	case 0x6F63617268746E61:
		switch(wp[1]){
		case 0x000063696874696C:return 1;
		case 0x000063697274656D:return 1;
		default:return 0;
		}
	case 0x6F63636165726F66:
		switch(wp[1]){
		case 0x0000676E69746E75:return 1;
		default:return 0;
		}
	case 0x6F6365647265766F:
		switch(wp[1]){
		case 0x0000657669746172:return 1;
		case 0x00006E6F69746172:return 1;
		default:return 0;
		}
	case 0x6F63656F656C6170:
		switch(wp[1]){
		case 0x0000747369676F6C:return 1;
		default:return 0;
		}
	case 0x6F63656F68746E61:
		switch(wp[1]){
		case 0x0000747369676F6C:return 1;
		default:return 0;
		}
	case 0x6F63656F72647968:
		switch(wp[1]){
		case 0x00007363696D6F6E:return 1;
		default:return 0;
		}
	case 0x6F63656F74796870:
		switch(wp[1]){
		case 0x0000747369676F6C:return 1;
		default:return 0;
		}
	case 0x6F63657270697065:
		switch(wp[1]){
		case 0x000064696F636172:return 1;
		default:return 0;
		}
	case 0x6F63696E65726870:
		switch(wp[1]){
		case 0x00006C616E65696C:return 1;
		case 0x00006C6174736F63:return 1;
		default:return 0;
		}
	case 0x6F63697065746365:
		switch(wp[1]){
		case 0x000072616C79646E:return 1;
		default:return 0;
		}
	case 0x6F63697065746E65:
		switch(wp[1]){
		case 0x000072616C79646E:return 1;
		default:return 0;
		}
	case 0x6F636972746E6576:
		switch(wp[1]){
		case 0x000072616E6D756C:return 1;
		case 0x00007373656E6573:return 1;
		default:return 0;
		}
	case 0x6F63697461706568:
		switch(wp[1]){
		case 0x0000747369676F6C:return 1;
		default:return 0;
		}
	case 0x6F636974696C6F70:
		switch(wp[1]){
		case 0x00006169626F6870:return 1;
		default:return 0;
		}
	case 0x6F636C6169746E61:
		switch(wp[1]){
		case 0x00006D73696C6F68:return 1;
		case 0x00007473696C6F68:return 1;
		default:return 0;
		}
	case 0x6F636D7563726963:
		switch(wp[1]){
		case 0x000072616E6D756C:return 1;
		default:return 0;
		}
	case 0x6F636F6462616872:
		switch(wp[1]){
		case 0x00006E6164696C65:return 1;
		default:return 0;
		}
	case 0x6F636F6475657370:
		switch(wp[1]){
		case 0x00006564756C636E:return 1;
		case 0x000073756F656E72:return 1;
		default:return 0;
		}
	case 0x6F636F6573617270:
		switch(wp[1]){
		case 0x00006369746C6162:return 1;
		default:return 0;
		}
	case 0x6F636F68746E6178:
		switch(wp[1]){
		case 0x00006369746C6162:return 1;
		default:return 0;
		}
	case 0x6F636F6D75656E70:
		switch(wp[1]){
		case 0x000061696D656363:return 1;
		case 0x00007369736F696E:return 1;
		default:return 0;
		}
	case 0x6F636F6E65726461:
		switch(wp[1]){
		case 0x00006C6163697472:return 1;
		default:return 0;
		}
	case 0x6F636F6E72657473:
		switch(wp[1]){
		case 0x000064696F636172:return 1;
		default:return 0;
		}
	case 0x6F636F726170616C:
		switch(wp[1]){
		case 0x0000796D6F746F6C:return 1;
		default:return 0;
		}
	case 0x6F636F726870656E:
		switch(wp[1]){
		case 0x0000797865706F6C:return 1;
		default:return 0;
		}
	case 0x6F636F7274736167:
		switch(wp[1]){
		case 0x0000796D6F746F6C:return 1;
		default:return 0;
		}
	case 0x6F636F746375657A:
		switch(wp[1]){
		case 0x000063696D6F6C65:return 1;
		default:return 0;
		}
	case 0x6F637261736F796D:
		switch(wp[1]){
		case 0x000073756F74616D:return 1;
		default:return 0;
		}
	case 0x6F63736964657270:
		switch(wp[1]){
		case 0x000065756E69746E:return 1;
		default:return 0;
		}
	case 0x6F6373696E617275:
		switch(wp[1]){
		case 0x0000616D73616863:return 1;
		case 0x0000797473616C70:return 1;
		default:return 0;
		}
	case 0x6F63736F6870796B:
		switch(wp[1]){
		case 0x00006369746F696C:return 1;
		case 0x00007369736F696C:return 1;
		default:return 0;
		}
	case 0x6F63736F72647968:
		switch(wp[1]){
		case 0x0000797469636970:return 1;
		default:return 0;
		}
	case 0x6F63736F72677968:
		switch(wp[1]){
		case 0x0000797469636970:return 1;
		default:return 0;
		}
	case 0x6F6373756C6C6F6D:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F63796C676F7968:
		switch(wp[1]){
		case 0x000063696C6F6863:return 1;
		default:return 0;
		}
	case 0x6F64617265707573:
		switch(wp[1]){
		case 0x0000746E656D6E72:return 1;
		default:return 0;
		}
	case 0x6F6469656E6F6870:
		switch(wp[1]){
		case 0x00006369706F6373:return 1;
		default:return 0;
		}
	case 0x6F646965746F7270:
		switch(wp[1]){
		case 0x000073756F6E6567:return 1;
		default:return 0;
		}
	case 0x6F64696D61727970:
		switch(wp[1]){
		case 0x0000747369676F6C:return 1;
		default:return 0;
		}
	case 0x6F64696F726F6863:
		switch(wp[1]){
		case 0x0000736974697269:return 1;
		default:return 0;
		}
	case 0x6F646E656D657274:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F646E6570757473:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F646E6F636E6F6E:
		switch(wp[1]){
		case 0x00006E6F6974616E:return 1;
		default:return 0;
		}
	case 0x6F646F72746E6563:
		switch(wp[1]){
		case 0x0000796C6C617372:return 1;
		default:return 0;
		}
	case 0x6F646F72746E6576:
		switch(wp[1]){
		case 0x0000796C6C617372:return 1;
		default:return 0;
		}
	case 0x6F647261706F656A:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F64796863617274:
		switch(wp[1]){
		case 0x000065746972656C:return 1;
		default:return 0;
		}
	case 0x6F65636164657270:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F656361696C6F66:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F65636174736574:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		case 0x0000796870617267:return 1;
		default:return 0;
		}
	case 0x6F65636176727563:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F656761706D6172:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F65676172626D75:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F6567617274756F:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F65676172756F63:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F65676F656C6170:
		switch(wp[1]){
		case 0x0000796870617267:return 1;
		default:return 0;
		}
	case 0x6F65676F6E687465:
		switch(wp[1]){
		case 0x0000796870617267:return 1;
		default:return 0;
		}
	case 0x6F65676F7263696D:
		switch(wp[1]){
		case 0x0000747369676F6C:return 1;
		default:return 0;
		}
	case 0x6F65676F74796870:
		switch(wp[1]){
		case 0x0000796870617267:return 1;
		default:return 0;
		}
	case 0x6F65677265707968:
		switch(wp[1]){
		case 0x000063697274656D:return 1;
		default:return 0;
		}
	case 0x6F65687469746E61:
		switch(wp[1]){
		case 0x00006E6169676F6C:return 1;
		default:return 0;
		}
	case 0x6F656C6170657270:
		switch(wp[1]){
		case 0x000063696874696C:return 1;
		default:return 0;
		}
	case 0x6F656C6170697065:
		switch(wp[1]){
		case 0x000063696874696C:return 1;
		default:return 0;
		}
	case 0x6F656C65746E6170:
		switch(wp[1]){
		case 0x00006D7369676F6C:return 1;
		default:return 0;
		}
	case 0x6F656C6574737964:
		switch(wp[1]){
		case 0x0000747369676F6C:return 1;
		default:return 0;
		}
	case 0x6F656E61636C6163:
		switch(wp[1]){
		case 0x000064696F627563:return 1;
		case 0x00006C6169626974:return 1;
		default:return 0;
		}
	case 0x6F656E6172747865:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F656E6174656F63:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F656E696D617267:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F656E6F72746C75:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F657261636C6163:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F6572617463656E:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F657275666C7573:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F6574656D6F6962:
		switch(wp[1]){
		case 0x000079676F6C6F72:return 1;
		default:return 0;
		}
	case 0x6F65746970736964:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F6665636E656874:
		switch(wp[1]){
		case 0x0000736472617772:return 1;
		default:return 0;
		}
	case 0x6F66657274617571:
		switch(wp[1]){
		case 0x000064657461696C:return 1;
		default:return 0;
		}
	case 0x6F666D6F63736964:
		switch(wp[1]){
		case 0x0000656C62617472:return 1;
		default:return 0;
		}
	case 0x6F666E6F63627573:
		switch(wp[1]){
		case 0x0000656C62616D72:return 1;
		default:return 0;
		}
	case 0x6F666E6F636E6F6E:
		switch(wp[1]){
		case 0x000065636E616D72:return 1;
		case 0x0000656C62616D72:return 1;
		case 0x0000796C62616D72:return 1;
		default:return 0;
		}
	case 0x6F666E6F63736964:
		switch(wp[1]){
		case 0x0000656C62616D72:return 1;
		default:return 0;
		}
	case 0x6F666F7465726568:
		switch(wp[1]){
		case 0x0000656D69746572:return 1;
		default:return 0;
		}
	case 0x6F667265706E6F6E:
		switch(wp[1]){
		case 0x000065636E616D72:return 1;
		case 0x0000676E69746172:return 1;
		default:return 0;
		}
	case 0x6F6672657073696D:
		switch(wp[1]){
		case 0x000065636E616D72:return 1;
		default:return 0;
		}
	case 0x6F676168706F7365:
		switch(wp[1]){
		case 0x0000616967656C70:return 1;
		case 0x00007369736F7470:return 1;
		case 0x0000797473616C70:return 1;
		default:return 0;
		}
	case 0x6F6761746E616E75:
		switch(wp[1]){
		case 0x000063697473696E:return 1;
		case 0x0000676E697A696E:return 1;
		default:return 0;
		}
	case 0x6F6769727265766F:
		switch(wp[1]){
		case 0x0000796C73756F72:return 1;
		default:return 0;
		}
	case 0x6F6769766E696572:
		switch(wp[1]){
		case 0x00006E6F69746172:return 1;
		default:return 0;
		}
	case 0x6F676E616C616870:
		switch(wp[1]){
		case 0x0000747369676F6C:return 1;
		default:return 0;
		}
	case 0x6F676E69706C6173:
		switch(wp[1]){
		case 0x0000736973657963:return 1;
		default:return 0;
		}
	case 0x6F676E7972616870:
		switch(wp[1]){
		case 0x0000616967656C70:return 1;
		case 0x0000636967656C70:return 1;
		case 0x000068636E617262:return 1;
		case 0x0000796870617267:return 1;
		case 0x0000797473616C70:return 1;
		default:return 0;
		}
	case 0x6F676F6C616D6F68:
		switch(wp[1]){
		case 0x000073756F74616E:return 1;
		default:return 0;
		}
	case 0x6F676F6C6F656874:
		switch(wp[1]){
		case 0x00006E6F6E656D75:return 1;
		default:return 0;
		}
	case 0x6F676F7265746568:
		switch(wp[1]){
		case 0x0000796C73756F6E:return 1;
		default:return 0;
		}
	case 0x6F676F726870656E:
		switch(wp[1]){
		case 0x000074637564616E:return 1;
		default:return 0;
		}
	case 0x6F67797A6F6D6F68:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F68636172707573:
		switch(wp[1]){
		case 0x0000616564696F72:return 1;
		case 0x00006C6164696F72:return 1;
		default:return 0;
		}
	case 0x6F68636172746162:
		switch(wp[1]){
		case 0x00006169626F6870:return 1;
		case 0x0000797473616C70:return 1;
		default:return 0;
		}
	case 0x6F68636172746574:
		switch(wp[1]){
		case 0x000073756F6D6F74:return 1;
		default:return 0;
		}
	case 0x6F68636964627573:
		switch(wp[1]){
		case 0x0000657A696D6F74:return 1;
		case 0x000073756F6D6F74:return 1;
		default:return 0;
		}
	case 0x6F686369646E6F6E:
		switch(wp[1]){
		case 0x000073756F6D6167:return 1;
		case 0x000073756F6D6F74:return 1;
		default:return 0;
		}
	case 0x6F68636972746964:
		switch(wp[1]){
		case 0x000073756F6D6F74:return 1;
		default:return 0;
		}
	case 0x6F68636E616C656D:
		switch(wp[1]){
		case 0x00007373656E696C:return 1;
		default:return 0;
		}
	case 0x6F68636F656C6170:
		switch(wp[1]){
		case 0x000079676F6C6F72:return 1;
		default:return 0;
		}
	case 0x6F68636F6574736F:
		switch(wp[1]){
		case 0x0000616D6F72646E:return 1;
		case 0x000073756F72646E:return 1;
		default:return 0;
		}
	case 0x6F68636F69676E61:
		switch(wp[1]){
		case 0x0000616D6F72646E:return 1;
		default:return 0;
		}
	case 0x6F68636F696F6C63:
		switch(wp[1]){
		case 0x0000636974696E61:return 1;
		default:return 0;
		}
	case 0x6F68636F6E656461:
		switch(wp[1]){
		case 0x0000616D6F72646E:return 1;
		default:return 0;
		}
	case 0x6F68636F72626966:
		switch(wp[1]){
		case 0x0000616D6F72646E:return 1;
		default:return 0;
		}
	case 0x6F68636F7275656E:
		switch(wp[1]){
		case 0x000065746972646E:return 1;
		default:return 0;
		}
	case 0x6F68636F7473616D:
		switch(wp[1]){
		case 0x0000616D6F72646E:return 1;
		default:return 0;
		}
	case 0x6F686372616E6F6D:
		switch(wp[1]){
		case 0x000063696863616D:return 1;
		default:return 0;
		}
	case 0x6F686373696D6573:
		switch(wp[1]){
		case 0x000063697473616C:return 1;
		default:return 0;
		}
	case 0x6F68637369746E61:
		switch(wp[1]){
		case 0x000063697473616C:return 1;
		default:return 0;
		}
	case 0x6F686F6475657370:
		switch(wp[1]){
		case 0x0000636974706F6C:return 1;
		default:return 0;
		}
	case 0x6F68706172746574:
		switch(wp[1]){
		case 0x0000657461687073:return 1;
		default:return 0;
		}
	case 0x6F68706F6874726F:
		switch(wp[1]){
		case 0x0000657461687073:return 1;
		default:return 0;
		}
	case 0x6F68706F6C796D61:
		switch(wp[1]){
		case 0x0000657461687073:return 1;
		default:return 0;
		}
	case 0x6F68706F7463616C:
		switch(wp[1]){
		case 0x0000657461687073:return 1;
		default:return 0;
		}
	case 0x6F68707265707573:
		switch(wp[1]){
		case 0x0000657461687073:return 1;
		default:return 0;
		}
	case 0x6F6872736E617274:
		switch(wp[1]){
		case 0x00006E61696E6164:return 1;
		default:return 0;
		}
	case 0x6F68746162697065:
		switch(wp[1]){
		case 0x000063696874696C:return 1;
		default:return 0;
		}
	case 0x6F687461636E6F6E:
		switch(wp[1]){
		case 0x000079746963696C:return 1;
		default:return 0;
		}
	case 0x6F687461706F6F7A:
		switch(wp[1]){
		case 0x0000747369676F6C:return 1;
		default:return 0;
		}
	case 0x6F68746574736E75:
		switch(wp[1]){
		case 0x00006465706F6373:return 1;
		default:return 0;
		}
	case 0x6F68747265746661:
		switch(wp[1]){
		case 0x0000646574686775:return 1;
		default:return 0;
		}
	case 0x6F69626968706D61:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F69626F656C6170:
		switch(wp[1]){
		case 0x0000747369676F6C:return 1;
		default:return 0;
		}
	case 0x6F69626F68746170:
		switch(wp[1]){
		case 0x0000747369676F6C:return 1;
		default:return 0;
		}
	case 0x6F69626F7263696D:
		switch(wp[1]){
		case 0x0000747369676F6C:return 1;
		default:return 0;
		}
	case 0x6F69626F72647968:
		switch(wp[1]){
		case 0x0000747369676F6C:return 1;
		default:return 0;
		}
	case 0x6F69626F7275656E:
		switch(wp[1]){
		case 0x0000636974636174:return 1;
		default:return 0;
		}
	case 0x6F696361646E656D:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F6963616474756F:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F6963616C6C6166:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F6963616E677570:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F69636172626D75:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F69636172676E75:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F69636175716573:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F69636175716F6C:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F6963656F6E6F6D:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F6963656F6E7973:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F6963656F726170:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F6963656F747561:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F6963696E726570:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F69636970737561:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F69636970737573:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F69636972617661:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F69636972706163:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F69636F63657270:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F69646966726570:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F6964696D736564:
		switch(wp[1]){
		case 0x0000747369676F6C:return 1;
		default:return 0;
		}
	case 0x6F69646974736166:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F69646F6D6D6F63:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F69646F72646E61:
		switch(wp[1]){
		case 0x000073756F696365:return 1;
		default:return 0;
		}
	case 0x6F696761746E6F63:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F696769646F7270:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F6967727574696C:
		switch(wp[1]){
		case 0x0000747369676F6C:return 1;
		default:return 0;
		}
	case 0x6F696863696F7473:
		switch(wp[1]){
		case 0x000063697274656D:return 1;
		default:return 0;
		}
	case 0x6F6968636E617262:
		switch(wp[1]){
		case 0x000064696D6F7473:return 1;
		case 0x00006C6167657473:return 1;
		case 0x00006D736972656D:return 1;
		case 0x000073756F646F70:return 1;
		case 0x000073756F6E6567:return 1;
		default:return 0;
		}
	case 0x6F6968636E6F7262:
		switch(wp[1]){
		case 0x0000736973697263:return 1;
		default:return 0;
		}
	case 0x6F69687475727473:
		switch(wp[1]){
		case 0x00006D726F66696E:return 1;
		default:return 0;
		}
	case 0x6F696C6568616964:
		switch(wp[1]){
		case 0x00006369706F7274:return 1;
		default:return 0;
		}
	case 0x6F696C6568727970:
		switch(wp[1]){
		case 0x000063697274656D:return 1;
		default:return 0;
		}
	case 0x6F696C6974706572:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F696C6C65626572:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F696C7974636164:
		switch(wp[1]){
		case 0x0000796870617267:return 1;
		case 0x0000796870796C67:return 1;
		default:return 0;
		}
	case 0x6F696D6564697065:
		switch(wp[1]){
		case 0x0000747369676F6C:return 1;
		case 0x0000796870617267:return 1;
		default:return 0;
		}
	case 0x6F696D6568697274:
		switch(wp[1]){
		case 0x00006E6F696C6F62:return 1;
		default:return 0;
		}
	case 0x6F696D656F726170:
		switch(wp[1]){
		case 0x0000747369676F6C:return 1;
		case 0x0000796870617267:return 1;
		default:return 0;
		}
	case 0x6F696D6574736261:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F696E6964657275:
		switch(wp[1]){
		case 0x00006369726F7073:return 1;
		default:return 0;
		}
	case 0x6F696E6D756C6163:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F696E6F68707565:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F696E6F6D726168:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F69726162726162:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F69726163657270:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F69726167657267:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F6972616F727075:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F6972627567756C:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F697262756C6173:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F6972646E6F6863:
		switch(wp[1]){
		case 0x0000657265687073:return 1;
		default:return 0;
		}
	case 0x6F69726574636162:
		switch(wp[1]){
		case 0x00006169626F6870:return 1;
		case 0x0000616967616870:return 1;
		case 0x0000636967616870:return 1;
		case 0x000063696E6F7370:return 1;
		case 0x00006369706F6373:return 1;
		case 0x00006369706F7274:return 1;
		case 0x0000636974617473:return 1;
		case 0x00006E696E6F7370:return 1;
		case 0x00006E69706F7274:return 1;
		case 0x0000736973617473:return 1;
		case 0x000073756F6E6567:return 1;
		case 0x0000747369676F6C:return 1;
		default:return 0;
		}
	case 0x6F69726574736F70:
		switch(wp[1]){
		case 0x0000636974736972:return 1;
		default:return 0;
		}
	case 0x6F6972657473796D:
		switch(wp[1]){
		case 0x0000636968706F73:return 1;
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F69726F6C676E69:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F69726F6C676E75:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F69726F736E6563:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F69726F74636976:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F69726F74736968:
		switch(wp[1]){
		case 0x000063697274656D:return 1;
		case 0x0000796870617267:return 1;
		default:return 0;
		}
	case 0x6F6972706F6E6F6D:
		switch(wp[1]){
		case 0x00006E616964696E:return 1;
		default:return 0;
		}
	case 0x6F6972746F6C6C61:
		switch(wp[1]){
		case 0x0000616967616870:return 1;
		case 0x00006169746E6F64:return 1;
		default:return 0;
		}
	case 0x6F6972747A6E6562:
		switch(wp[1]){
		case 0x0000656E697A6178:return 1;
		default:return 0;
		}
	case 0x6F6972756A726570:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F69736568747365:
		switch(wp[1]){
		case 0x000063697274656D:return 1;
		case 0x0000796870617267:return 1;
		default:return 0;
		}
	case 0x6F6973656C636365:
		switch(wp[1]){
		case 0x00006169626F6870:return 1;
		case 0x0000747369676F6C:return 1;
		case 0x0000796870617267:return 1;
		default:return 0;
		}
	case 0x6F69736968746870:
		switch(wp[1]){
		case 0x00006169626F6870:return 1;
		case 0x0000747369676F6C:return 1;
		default:return 0;
		}
	case 0x6F697369766F7270:
		switch(wp[1]){
		case 0x000073736572656E:return 1;
		case 0x00007974696C616E:return 1;
		default:return 0;
		}
	case 0x6F69736E656D6964:
		switch(wp[1]){
		case 0x00007974696C616E:return 1;
		default:return 0;
		}
	case 0x6F69737361706D69:
		switch(wp[1]){
		case 0x0000796C6574616E:return 1;
		default:return 0;
		}
	case 0x6F69737361706E75:
		switch(wp[1]){
		case 0x0000796C6574616E:return 1;
		default:return 0;
		}
	case 0x6F69737365636573:
		switch(wp[1]){
		case 0x00007473696C616E:return 1;
		default:return 0;
		}
	case 0x6F69746163756465:
		switch(wp[1]){
		case 0x00006D73696C616E:return 1;
		case 0x00007473696C616E:return 1;
		default:return 0;
		}
	case 0x6F69746164617267:
		switch(wp[1]){
		case 0x0000796C6574616E:return 1;
		default:return 0;
		}
	case 0x6F6974616E6E6170:
		switch(wp[1]){
		case 0x00006D73696C616E:return 1;
		default:return 0;
		}
	case 0x6F6974616E6F7270:
		switch(wp[1]){
		case 0x00006D73696C616E:return 1;
		case 0x00007473696C616E:return 1;
		default:return 0;
		}
	case 0x6F6974617265706F:
		switch(wp[1]){
		case 0x00006D73696C616E:return 1;
		case 0x00007473696C616E:return 1;
		default:return 0;
		}
	case 0x6F697461726E6F6E:
		switch(wp[1]){
		case 0x00007473696C616E:return 1;
		default:return 0;
		}
	case 0x6F697461736E6573:
		switch(wp[1]){
		case 0x000063697473696E:return 1;
		case 0x0000657A696C616E:return 1;
		case 0x00006D73696C616E:return 1;
		case 0x00007473696C616E:return 1;
		default:return 0;
		}
	case 0x6F69746365666661:
		switch(wp[1]){
		case 0x0000796C6574616E:return 1;
		default:return 0;
		}
	case 0x6F69746365666E69:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F69746365736564:
		switch(wp[1]){
		case 0x0000657A696C616E:return 1;
		default:return 0;
		}
	case 0x6F69746375646572:
		switch(wp[1]){
		case 0x000063697473696E:return 1;
		default:return 0;
		}
	case 0x6F697465616C6170:
		switch(wp[1]){
		case 0x0000747369676F6C:return 1;
		default:return 0;
		}
	case 0x6F69746964617274:
		switch(wp[1]){
		case 0x0000657A696C616E:return 1;
		case 0x00006D73696C616E:return 1;
		case 0x00007473696C616E:return 1;
		case 0x0000796C6574616E:return 1;
		case 0x0000796C6972616E:return 1;
		case 0x00007974696C616E:return 1;
		default:return 0;
		}
	case 0x6F697469646E6F63:
		switch(wp[1]){
		case 0x0000657A696C616E:return 1;
		case 0x00006D73696C616E:return 1;
		case 0x00007473696C616E:return 1;
		case 0x00007974696C616E:return 1;
		default:return 0;
		}
	case 0x6F69746967616C66:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F697469706F7270:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F6974697274756E:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F69746974636966:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F69746975746E69:
		switch(wp[1]){
		case 0x000063697473696E:return 1;
		case 0x00006D73696C616E:return 1;
		case 0x00007473696C616E:return 1;
		default:return 0;
		}
	case 0x6F69746E6563696C:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F69746E656D6E75:
		switch(wp[1]){
		case 0x000073656C62616E:return 1;
		default:return 0;
		}
	case 0x6F69746E65746E69:
		switch(wp[1]){
		case 0x00006D73696C616E:return 1;
		case 0x00007974696C616E:return 1;
		default:return 0;
		}
	case 0x6F69746E65746F70:
		switch(wp[1]){
		case 0x000063697274656D:return 1;
		default:return 0;
		}
	case 0x6F69746F6D656E75:
		switch(wp[1]){
		case 0x00006D73696C616E:return 1;
		default:return 0;
		}
	case 0x6F69747065637865:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		case 0x00007974696C616E:return 1;
		default:return 0;
		}
	case 0x6F697472616D6168:
		switch(wp[1]){
		case 0x0000747369676F6C:return 1;
		default:return 0;
		}
	case 0x6F6974726F747865:
		switch(wp[1]){
		case 0x0000796C6574616E:return 1;
		default:return 0;
		}
	case 0x6F69747375626F72:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F69747561636E69:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F69747561636E75:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F69747563657865:
		switch(wp[1]){
		case 0x000073736572656E:return 1;
		default:return 0;
		}
	case 0x6F6975716573626F:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F6976626F657270:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F6976696373616C:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F69767265706D69:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F6976756C666665:
		switch(wp[1]){
		case 0x0000796870617267:return 1;
		default:return 0;
		}
	case 0x6F6978656E6E6F63:
		switch(wp[1]){
		case 0x00006D73696C616E:return 1;
		default:return 0;
		}
	case 0x6F6C61646E616373:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F6C6168636F7274:
		switch(wp[1]){
		case 0x000073756F646F70:return 1;
		default:return 0;
		}
	case 0x6F6C63656C626174:
		switch(wp[1]){
		case 0x0000657369776874:return 1;
		default:return 0;
		}
	case 0x6F6C656863617274:
		switch(wp[1]){
		case 0x0000797473616C70:return 1;
		default:return 0;
		}
	case 0x6F6C666F746F6870:
		switch(wp[1]){
		case 0x0000706D616C646F:return 1;
		default:return 0;
		}
	case 0x6F6C6761746E6570:
		switch(wp[1]){
		case 0x00006C6163697474:return 1;
		default:return 0;
		}
	case 0x6F6C676E6F636E69:
		switch(wp[1]){
		case 0x000065746172656D:return 1;
		default:return 0;
		}
	case 0x6F6C676F746E6170:
		switch(wp[1]){
		case 0x00006C6163697373:return 1;
		default:return 0;
		}
	case 0x6F6C676F746F7270:
		switch(wp[1]){
		case 0x000065736F6C7562:return 1;
		default:return 0;
		}
	case 0x6F6C686369746E61:
		switch(wp[1]){
		case 0x0000636974736972:return 1;
		default:return 0;
		}
	case 0x6F6C68637265766F:
		switch(wp[1]){
		case 0x00006574616E6972:return 1;
		default:return 0;
		}
	case 0x6F6C687069746E61:
		switch(wp[1]){
		case 0x0000636974736967:return 1;
		default:return 0;
		}
	case 0x6F6C687074736F70:
		switch(wp[1]){
		case 0x0000636974736967:return 1;
		default:return 0;
		}
	case 0x6F6C6870756C6F70:
		switch(wp[1]){
		case 0x000063696F627369:return 1;
		default:return 0;
		}
	case 0x6F6C69646E616C62:
		switch(wp[1]){
		case 0x000065636E657571:return 1;
		case 0x000073756F697571:return 1;
		default:return 0;
		}
	case 0x6F6C69646E617267:
		switch(wp[1]){
		case 0x000065636E657571:return 1;
		default:return 0;
		}
	case 0x6F6C6968636F7274:
		switch(wp[1]){
		case 0x000073756F646F70:return 1;
		default:return 0;
		}
	case 0x6F6C6968706F656E:
		switch(wp[1]){
		case 0x0000747369676F6C:return 1;
		default:return 0;
		}
	case 0x6F6C697264617571:
		switch(wp[1]){
		case 0x00006574616C7563:return 1;
		default:return 0;
		}
	case 0x6F6C697272756373:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F6C6972746E6576:
		switch(wp[1]){
		case 0x00006E6F69747563:return 1;
		case 0x0000796C6C617571:return 1;
		default:return 0;
		}
	case 0x6F6C69746C757473:
		switch(wp[1]){
		case 0x000065636E657571:return 1;
		case 0x000073756F697571:return 1;
		default:return 0;
		}
	case 0x6F6C6C616F747561:
		switch(wp[1]){
		case 0x000073756F6D6167:return 1;
		default:return 0;
		}
	case 0x6F6C6C6972697073:
		switch(wp[1]){
		case 0x00006369706F7274:return 1;
		default:return 0;
		}
	case 0x6F6C6C6F6373696D:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x6F6C6C79736E6F6E:
		switch(wp[1]){
		case 0x0000636974736967:return 1;
		case 0x0000676E697A6967:return 1;
		default:return 0;
		}
	case 0x6F6C6D7563726963:
		switch(wp[1]){
		case 0x00006E6F69747563:return 1;
		case 0x000079726F747563:return 1;
		default:return 0;
		}
	case 0x6F6C6F6369626D61:
		switch(wp[1]){
		case 0x00006E6F69746172:return 1;
		default:return 0;
		}
	case 0x6F6C6F68636E6963:
		switch(wp[1]){
		case 0x000063696E6F7069:return 1;
		default:return 0;
		}
	case 0x6F6C6F68696D6568:
		switch(wp[1]){
		case 0x00006C6172646568:return 1;
		default:return 0;
		}
	case 0x6F6C6F686F636C61:
		switch(wp[1]){
		case 0x000061696C696870:return 1;
		case 0x000063697274656D:return 1;
		default:return 0;
		}
	case 0x6F6C6F727475656E:
		switch(wp[1]){
		case 0x0000636974736967:return 1;
		default:return 0;
		}
	case 0x6F6C6F7473697065:
		switch(wp[1]){
		case 0x0000796870617267:return 1;
		default:return 0;
		}
	case 0x6F6C706964736964:
		switch(wp[1]){
		case 0x0000657A6974616D:return 1;
		default:return 0;
		}
	case 0x6F6C75636172696D:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F6C756369646570:
		switch(wp[1]){
		case 0x00006169626F6870:return 1;
		default:return 0;
		}
	case 0x6F6C756369646972:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F6C756369727475:
		switch(wp[1]){
		case 0x0000797473616C70:return 1;
		default:return 0;
		}
	case 0x6F6C75636974656D:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F6C756369746572:
		switch(wp[1]){
		case 0x000065736F6D6172:return 1;
		case 0x000065736F6E6576:return 1;
		default:return 0;
		}
	case 0x6F6C756469727473:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F6C75646E616C67:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F6C75666F726373:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F6C75706F706E75:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F6C757075726373:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F6C79646E6F7073:
		switch(wp[1]){
		case 0x00007369736F7970:return 1;
		default:return 0;
		}
	case 0x6F6C796870617473:
		switch(wp[1]){
		case 0x00006169736F7470:return 1;
		case 0x0000616E69676E61:return 1;
		case 0x0000636963636F63:return 1;
		case 0x0000636968706172:return 1;
		case 0x00006C6163636F63:return 1;
		case 0x00007369736F7470:return 1;
		case 0x0000737563636F63:return 1;
		case 0x000073756F74616D:return 1;
		case 0x0000797473616C70:return 1;
		default:return 0;
		}
	case 0x6F6D61676F6E6F6D:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F6D656469746E61:
		switch(wp[1]){
		case 0x0000636974617263:return 1;
		default:return 0;
		}
	case 0x6F6D65656C656E75:
		switch(wp[1]){
		case 0x00007972616E7973:return 1;
		default:return 0;
		}
	case 0x6F6D656861726170:
		switch(wp[1]){
		case 0x00006E69626F6C67:return 1;
		default:return 0;
		}
	case 0x6F6D656869746E61:
		switch(wp[1]){
		case 0x00006E69626F6C67:return 1;
		default:return 0;
		}
	case 0x6F6D65686F747561:
		switch(wp[1]){
		case 0x0000656761687272:return 1;
		default:return 0;
		}
	case 0x6F6D657265707968:
		switch(wp[1]){
		case 0x0000797469766974:return 1;
		default:return 0;
		}
	case 0x6F6D657365656863:
		switch(wp[1]){
		case 0x0000796C7265676E:return 1;
		default:return 0;
		}
	case 0x6F6D657473697065:
		switch(wp[1]){
		case 0x000061696C696870:return 1;
		case 0x000063696C696870:return 1;
		case 0x0000747369676F6C:return 1;
		default:return 0;
		}
	case 0x6F6D67616C617473:
		switch(wp[1]){
		case 0x000063697274656D:return 1;
		default:return 0;
		}
	case 0x6F6D6874656F7365:
		switch(wp[1]){
		case 0x0000736974696469:return 1;
		default:return 0;
		}
	case 0x6F6D696E61757165:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F6D6972746F7369:
		switch(wp[1]){
		case 0x00006D7369687072:return 1;
		case 0x000073756F687072:return 1;
		default:return 0;
		}
	case 0x6F6D697369746E61:
		switch(wp[1]){
		case 0x00006C616361696E:return 1;
		default:return 0;
		}
	case 0x6F6D69747265766F:
		switch(wp[1]){
		case 0x0000796C73756F72:return 1;
		default:return 0;
		}
	case 0x6F6D6F63656E7967:
		switch(wp[1]){
		case 0x000073756F687072:return 1;
		default:return 0;
		}
	case 0x6F6D6F6475657370:
		switch(wp[1]){
		case 0x000063697473616E:return 1;
		case 0x0000656E69687072:return 1;
		case 0x000065736F687072:return 1;
		case 0x00006D7369687072:return 1;
		case 0x000073756F687072:return 1;
		default:return 0;
		}
	case 0x6F6D6F656F6D6F68:
		switch(wp[1]){
		case 0x00006D7369687072:return 1;
		case 0x000073756F687072:return 1;
		default:return 0;
		}
	case 0x6F6D6F6863697274:
		switch(wp[1]){
		case 0x000073697361696E:return 1;
		default:return 0;
		}
	case 0x6F6D6F6863797370:
		switch(wp[1]){
		case 0x00006D7369687072:return 1;
		case 0x00007974696C6974:return 1;
		default:return 0;
		}
	case 0x6F6D6F68706D796C:
		switch(wp[1]){
		case 0x0000657479636F6E:return 1;
		default:return 0;
		}
	case 0x6F6D6F6964726163:
		switch(wp[1]){
		case 0x00007974696C6974:return 1;
		default:return 0;
		}
	case 0x6F6D6F6972656874:
		switch(wp[1]){
		case 0x00006D7369687072:return 1;
		case 0x000073756F687072:return 1;
		default:return 0;
		}
	case 0x6F6D6F6973656C70:
		switch(wp[1]){
		case 0x00006D7369687072:return 1;
		case 0x000073756F687072:return 1;
		default:return 0;
		}
	case 0x6F6D6F6C656C6C61:
		switch(wp[1]){
		case 0x00006D7369687072:return 1;
		default:return 0;
		}
	case 0x6F6D6F6E69746361:
		switch(wp[1]){
		case 0x000073756F687072:return 1;
		default:return 0;
		}
	case 0x6F6D6F7262697274:
		switch(wp[1]){
		case 0x00006C6F6E656870:return 1;
		default:return 0;
		}
	case 0x6F6D6F7265746568:
		switch(wp[1]){
		case 0x0000657469687072:return 1;
		case 0x00006D7369687072:return 1;
		case 0x000073756F687072:return 1;
		default:return 0;
		}
	case 0x6F6D6F7379726863:
		switch(wp[1]){
		case 0x0000656E6964616E:return 1;
		default:return 0;
		}
	case 0x6F6D6F7461647968:
		switch(wp[1]){
		case 0x00006D7369687072:return 1;
		default:return 0;
		}
	case 0x6F6D6F7461677265:
		switch(wp[1]){
		case 0x00006D7369687072:return 1;
		default:return 0;
		}
	case 0x6F6D6F7469727269:
		switch(wp[1]){
		case 0x00007974696C6974:return 1;
		default:return 0;
		}
	case 0x6F6D6F7473697261:
		switch(wp[1]){
		case 0x000079686372616E:return 1;
		default:return 0;
		}
	case 0x6F6D6F7475616568:
		switch(wp[1]){
		case 0x00006D7369687072:return 1;
		default:return 0;
		}
	case 0x6F6D6F76696E6769:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F6D7365646E7973:
		switch(wp[1]){
		case 0x0000796870617267:return 1;
		case 0x0000797473616C70:return 1;
		default:return 0;
		}
	case 0x6F6D75656E686369:
		switch(wp[1]){
		case 0x00006D726F66696E:return 1;
		case 0x000079676F6C6F6E:return 1;
		default:return 0;
		}
	case 0x6F6D7568696D6573:
		switch(wp[1]){
		case 0x0000796C73756F72:return 1;
		default:return 0;
		}
	case 0x6F6D756874736F70:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F6D796E6F6E7973:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F6D79786F736564:
		switch(wp[1]){
		case 0x0000656E69687072:return 1;
		default:return 0;
		}
	case 0x6F6E616870616964:
		switch(wp[1]){
		case 0x000063697274656D:return 1;
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F6E616874656964:
		switch(wp[1]){
		case 0x0000656E696D616C:return 1;
		default:return 0;
		}
	case 0x6F6E656769646E69:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F6E656874726170:
		switch(wp[1]){
		case 0x0000636970726163:return 1;
		case 0x000073756F6E6567:return 1;
		case 0x000073756F726170:return 1;
		default:return 0;
		}
	case 0x6F6E69616C6C6976:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F6E69646962696C:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F6E696761656C6F:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F6E6967696C7566:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F6E6967756E616C:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F6E696870726F6D:
		switch(wp[1]){
		case 0x00006361696E616D:return 1;
		default:return 0;
		}
	case 0x6F6E696C63697274:
		switch(wp[1]){
		case 0x0000636972646568:return 1;
		default:return 0;
		}
	case 0x6F6E696D6F646261:
		switch(wp[1]){
		case 0x0000636974737963:return 1;
		default:return 0;
		}
	case 0x6F6E696D75626C61:
		switch(wp[1]){
		case 0x000061696C6F6863:return 1;
		case 0x00006E6972626966:return 1;
		case 0x00007373656E7375:return 1;
		case 0x000073756F6E6567:return 1;
		default:return 0;
		}
	case 0x6F6E696D756C6F76:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F6E6974616C6567:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F6E6974616D6568:
		switch(wp[1]){
		case 0x000063697274656D:return 1;
		default:return 0;
		}
	case 0x6F6E6B6361657270:
		switch(wp[1]){
		case 0x0000656764656C77:return 1;
		default:return 0;
		}
	case 0x6F6E6B6361736964:
		switch(wp[1]){
		case 0x0000656764656C77:return 1;
		default:return 0;
		}
	case 0x6F6E6B636173696D:
		switch(wp[1]){
		case 0x0000656764656C77:return 1;
		default:return 0;
		}
	case 0x6F6E6B7265707573:
		switch(wp[1]){
		case 0x0000656764656C77:return 1;
		default:return 0;
		}
	case 0x6F6E6B7265746661:
		switch(wp[1]){
		case 0x0000656764656C77:return 1;
		default:return 0;
		}
	case 0x6F6E6B7265746E69:
		switch(wp[1]){
		case 0x0000656764656C77:return 1;
		default:return 0;
		}
	case 0x6F6E6E6F636E6F6E:
		switch(wp[1]){
		case 0x0000657669746174:return 1;
		default:return 0;
		}
	case 0x6F6E6F63696E6170:
		switch(wp[1]){
		case 0x0000796870617267:return 1;
		default:return 0;
		}
	case 0x6F6E6F6769746E61:
		switch(wp[1]){
		case 0x0000636963636F63:return 1;
		case 0x0000636965687272:return 1;
		default:return 0;
		}
	case 0x6F6E6F676F6E6F6D:
		switch(wp[1]){
		case 0x000073756F726F70:return 1;
		default:return 0;
		}
	case 0x6F6E6F6774736F70:
		switch(wp[1]){
		case 0x0000636965687272:return 1;
		default:return 0;
		}
	case 0x6F6E6F68746F7270:
		switch(wp[1]){
		case 0x00006C6169726174:return 1;
		case 0x0000746169726174:return 1;
		default:return 0;
		}
	case 0x6F6E6F6D69746E61:
		switch(wp[1]){
		case 0x00007473696C6F70:return 1;
		default:return 0;
		}
	case 0x6F6E6F6D75656E70:
		switch(wp[1]){
		case 0x0000796870617267:return 1;
		default:return 0;
		}
	case 0x6F6E6F7265746568:
		switch(wp[1]){
		case 0x0000796C73756F6D:return 1;
		default:return 0;
		}
	case 0x6F6E6F746E6F646F:
		switch(wp[1]){
		case 0x000079676F6C6F73:return 1;
		default:return 0;
		}
	case 0x6F6E6F746F6E6F6D:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F6E6F746F726561:
		switch(wp[1]){
		case 0x000063697274656D:return 1;
		default:return 0;
		}
	case 0x6F6E6F7474756C67:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F6E70797275656E:
		switch(wp[1]){
		case 0x0000747369676F6C:return 1;
		default:return 0;
		}
	case 0x6F6E796863736561:
		switch(wp[1]){
		case 0x000073756F6E656D:return 1;
		default:return 0;
		}
	case 0x6F6F6C677265766F:
		switch(wp[1]){
		case 0x00007373656E696D:return 1;
		default:return 0;
		}
	case 0x6F6F6D737265766F:
		switch(wp[1]){
		case 0x00007373656E6874:return 1;
		default:return 0;
		}
	case 0x6F6F6D79656E6F68:
		switch(wp[1]){
		case 0x0000656E6968736E:return 1;
		case 0x0000746867696C6E:return 1;
		default:return 0;
		}
	case 0x6F6F727463656C65:
		switch(wp[1]){
		case 0x00006369746F6D73:return 1;
		case 0x00006C6163697470:return 1;
		case 0x00007369736F6D73:return 1;
		default:return 0;
		}
	case 0x6F6F74656E67616D:
		switch(wp[1]){
		case 0x00006C6163697470:return 1;
		default:return 0;
		}
	case 0x6F6F7A6F656C6170:
		switch(wp[1]){
		case 0x0000747369676F6C:return 1;
		default:return 0;
		}
	case 0x6F6F7A6F746F7270:
		switch(wp[1]){
		case 0x0000747369676F6C:return 1;
		default:return 0;
		}
	case 0x6F70617265707968:
		switch(wp[1]){
		case 0x0000736973796870:return 1;
		default:return 0;
		}
	case 0x6F7061726870656E:
		switch(wp[1]){
		case 0x0000736973617473:return 1;
		default:return 0;
		}
	case 0x6F706172746E6F63:
		switch(wp[1]){
		case 0x0000657669746973:return 1;
		case 0x00006E6F69746973:return 1;
		default:return 0;
		}
	case 0x6F70617275656C70:
		switch(wp[1]){
		case 0x0000736973796870:return 1;
		default:return 0;
		}
	case 0x6F706176656E6F6E:
		switch(wp[1]){
		case 0x00006E6F69746172:return 1;
		default:return 0;
		}
	case 0x6F70697264617571:
		switch(wp[1]){
		case 0x0000737563697472:return 1;
		default:return 0;
		}
	case 0x6F706D65746E6F63:
		switch(wp[1]){
		case 0x00006E61656E6172:return 1;
		case 0x0000796C69726172:return 1;
		default:return 0;
		}
	case 0x6F706D65746E6F6E:
		switch(wp[1]){
		case 0x0000676E697A6972:return 1;
		default:return 0;
		}
	case 0x6F706D6F63657270:
		switch(wp[1]){
		case 0x0000676E69646E75:return 1;
		case 0x00006E6F69746973:return 1;
		default:return 0;
		}
	case 0x6F706D6F636E696E:
		switch(wp[1]){
		case 0x0000646F6F68706F:return 1;
		default:return 0;
		}
	case 0x6F706D6F63736964:
		switch(wp[1]){
		case 0x0000796C676E6973:return 1;
		default:return 0;
		}
	case 0x6F706D7563726963:
		switch(wp[1]){
		case 0x00006E6F69746973:return 1;
		default:return 0;
		}
	case 0x6F706F6475657370:
		switch(wp[1]){
		case 0x00006C6163697465:return 1;
		default:return 0;
		}
	case 0x6F706F696C626962:
		switch(wp[1]){
		case 0x000063697473696C:return 1;
		default:return 0;
		}
	case 0x6F706F6C6C796870:
		switch(wp[1]){
		case 0x00006D726F666964:return 1;
		default:return 0;
		}
	case 0x6F706F6D67696874:
		switch(wp[1]){
		case 0x0000657669746973:return 1;
		default:return 0;
		}
	case 0x6F706F6D72656874:
		switch(wp[1]){
		case 0x000061656E70796C:return 1;
		default:return 0;
		}
	case 0x6F706F6E6F6D6E75:
		switch(wp[1]){
		case 0x0000676E697A696C:return 1;
		default:return 0;
		}
	case 0x6F706F726574616C:
		switch(wp[1]){
		case 0x00006E6F69746973:return 1;
		default:return 0;
		}
	case 0x6F706F7265746568:
		switch(wp[1]){
		case 0x000079746972616C:return 1;
		default:return 0;
		}
	case 0x6F706F7268746E61:
		switch(wp[1]){
		case 0x00006169626F6870:return 1;
		case 0x0000616968746170:return 1;
		case 0x0000636967616870:return 1;
		case 0x0000636968746170:return 1;
		case 0x000063696874696C:return 1;
		case 0x000063696D736F63:return 1;
		case 0x000063697274616C:return 1;
		case 0x000063697274656D:return 1;
		case 0x00006369746E616D:return 1;
		case 0x00006D7369656874:return 1;
		case 0x00006D7369756870:return 1;
		case 0x00007363696D6F6E:return 1;
		case 0x000073756F6E6567:return 1;
		case 0x0000747369676F6C:return 1;
		case 0x00007473696D6F6E:return 1;
		case 0x00007473696D6F74:return 1;
		case 0x00007473696E6567:return 1;
		case 0x0000796870617267:return 1;
		default:return 0;
		}
	case 0x6F706F7268747261:
		switch(wp[1]){
		case 0x000073756F74616D:return 1;
		default:return 0;
		}
	case 0x6F706F7470797263:
		switch(wp[1]){
		case 0x0000737563697472:return 1;
		default:return 0;
		}
	case 0x6F70707573657270:
		switch(wp[1]){
		case 0x00006E6F69746973:return 1;
		default:return 0;
		}
	case 0x6F70726574627573:
		switch(wp[1]){
		case 0x00006E6F69746973:return 1;
		default:return 0;
		}
	case 0x6F70726F63627573:
		switch(wp[1]){
		case 0x00006E6F69746172:return 1;
		default:return 0;
		}
	case 0x6F70726F636F7270:
		switch(wp[1]){
		case 0x00006E6F69746172:return 1;
		default:return 0;
		}
	case 0x6F70736564657270:
		switch(wp[1]){
		case 0x000079636E65646E:return 1;
		default:return 0;
		}
	case 0x6F70736572657270:
		switch(wp[1]){
		case 0x0000656C6269736E:return 1;
		default:return 0;
		}
	case 0x6F70736572726F63:
		switch(wp[1]){
		case 0x000065636E65646E:return 1;
		case 0x000079636E65646E:return 1;
		default:return 0;
		}
	case 0x6F70736964657270:
		switch(wp[1]){
		case 0x00006E6F69746973:return 1;
		default:return 0;
		}
	case 0x6F7073696473696D:
		switch(wp[1]){
		case 0x00006E6F69746973:return 1;
		default:return 0;
		}
	case 0x6F70736F63726173:
		switch(wp[1]){
		case 0x00006C6169646972:return 1;
		case 0x00006E6169646972:return 1;
		default:return 0;
		}
	case 0x6F70736F6C637963:
		switch(wp[1]){
		case 0x000063696C79646E:return 1;
		default:return 0;
		}
	case 0x6F70736F6C706964:
		switch(wp[1]){
		case 0x000063696C79646E:return 1;
		default:return 0;
		}
	case 0x6F70736F6D656168:
		switch(wp[1]){
		case 0x00006E6169646972:return 1;
		default:return 0;
		}
	case 0x6F70736F70726163:
		switch(wp[1]){
		case 0x00006169676E6172:return 1;
		default:return 0;
		}
	case 0x6F70736F7263616D:
		switch(wp[1]){
		case 0x00006C7968706F72:return 1;
		default:return 0;
		}
	case 0x6F70736F7263696D:
		switch(wp[1]){
		case 0x00006E6169646972:return 1;
		case 0x0000736973616972:return 1;
		default:return 0;
		}
	case 0x6F70736F74636574:
		switch(wp[1]){
		case 0x000063696C79646E:return 1;
		default:return 0;
		}
	case 0x6F70796865746E61:
		switch(wp[1]){
		case 0x0000736973796870:return 1;
		default:return 0;
		}
	case 0x6F70796874736F70:
		switch(wp[1]){
		case 0x0000736973796870:return 1;
		default:return 0;
		}
	case 0x6F7079746F6C7978:
		switch(wp[1]){
		case 0x0000796870617267:return 1;
		default:return 0;
		}
	case 0x6F7079746F747561:
		switch(wp[1]){
		case 0x0000796870617267:return 1;
		default:return 0;
		}
	case 0x6F72616863636173:
		switch(wp[1]){
		case 0x000063697274656D:return 1;
		case 0x000065736F697274:return 1;
		case 0x000065746563796D:return 1;
		case 0x0000726F74706563:return 1;
		case 0x0000796C6C796870:return 1;
		default:return 0;
		}
	case 0x6F72616870656C62:
		switch(wp[1]){
		case 0x0000616967656C70:return 1;
		case 0x00007369736F636E:return 1;
		case 0x00007369736F7470:return 1;
		case 0x000073756E6F6C63:return 1;
		case 0x0000797473616C70:return 1;
		default:return 0;
		}
	case 0x6F72617069766976:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F72617074736F70:
		switch(wp[1]){
		case 0x00006C616D737978:return 1;
		default:return 0;
		}
	case 0x6F726172746E6F63:
		switch(wp[1]){
		case 0x00006E6F69746174:return 1;
		default:return 0;
		}
	case 0x6F72626172746E69:
		switch(wp[1]){
		case 0x00006C616968636E:return 1;
		default:return 0;
		}
	case 0x6F72626172747865:
		switch(wp[1]){
		case 0x00006C616968636E:return 1;
		default:return 0;
		}
	case 0x6F72626574726576:
		switch(wp[1]){
		case 0x00006C6172636173:return 1;
		case 0x00006C6174736F63:return 1;
		default:return 0;
		}
	case 0x6F72626B636F7473:
		switch(wp[1]){
		case 0x000065676172656B:return 1;
		default:return 0;
		}
	case 0x6F72626F69646172:
		switch(wp[1]){
		case 0x0000747361636461:return 1;
		default:return 0;
		}
	case 0x6F72626F72746572:
		switch(wp[1]){
		case 0x00006C616968636E:return 1;
		default:return 0;
		}
	case 0x6F72627265646C65:
		switch(wp[1]){
		case 0x0000796C72656874:return 1;
		default:return 0;
		}
	case 0x6F72627265746E69:
		switch(wp[1]){
		case 0x00006C616968636E:return 1;
		default:return 0;
		}
	case 0x6F7263696D627573:
		switch(wp[1]){
		case 0x00006369706F6373:return 1;
		default:return 0;
		}
	case 0x6F72636F6E657473:
		switch(wp[1]){
		case 0x0000616968706174:return 1;
		default:return 0;
		}
	case 0x6F72637369746E61:
		switch(wp[1]){
		case 0x000073756F6C7566:return 1;
		default:return 0;
		}
	case 0x6F72646E616E7967:
		switch(wp[1]){
		case 0x0000796870726F6D:return 1;
		default:return 0;
		}
	case 0x6F72646E696C7963:
		switch(wp[1]){
		case 0x000063697274656D:return 1;
		case 0x00006C617669676F:return 1;
		case 0x000073756F74616D:return 1;
		default:return 0;
		}
	case 0x6F72646E6F686361:
		switch(wp[1]){
		case 0x0000616973616C70:return 1;
		default:return 0;
		}
	case 0x6F726479686E6F6E:
		switch(wp[1]){
		case 0x000073756F6E6567:return 1;
		default:return 0;
		}
	case 0x6F726479686F6567:
		switch(wp[1]){
		case 0x0000747369676F6C:return 1;
		default:return 0;
		}
	case 0x6F726479686F726F:
		switch(wp[1]){
		case 0x0000796870617267:return 1;
		default:return 0;
		}
	case 0x6F726479686F7270:
		switch(wp[1]){
		case 0x00006369706F7274:return 1;
		default:return 0;
		}
	case 0x6F726479686F7369:
		switch(wp[1]){
		case 0x0000636962726F73:return 1;
		case 0x000063696E617963:return 1;
		default:return 0;
		}
	case 0x6F72647968726570:
		switch(wp[1]){
		case 0x00006574616E6567:return 1;
		case 0x0000657A696E6567:return 1;
		default:return 0;
		}
	case 0x6F7265626D756C73:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F7265646E616C73:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F7265646E756874:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F72656669636F76:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F7265666963756C:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F726566696E6769:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F72656769726F6D:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F726568746F7369:
		switch(wp[1]){
		case 0x000065736F72626D:return 1;
		default:return 0;
		}
	case 0x6F72656E65676E75:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F726570736F7270:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F72657265707573:
		switch(wp[1]){
		case 0x0000657669746167:return 1;
		case 0x00006E6F69746167:return 1;
		case 0x0000796C746E6167:return 1;
		case 0x000079726F746167:return 1;
		default:return 0;
		}
	case 0x6F7265746E756F63:
		switch(wp[1]){
		case 0x0000676E696E6570:return 1;
		default:return 0;
		}
	case 0x6F7265746F6C6574:
		switch(wp[1]){
		case 0x0000636968746170:return 1;
		default:return 0;
		}
	case 0x6F72657473696F62:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F72657661646163:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F72666E6F636E75:
		switch(wp[1]){
		case 0x0000656C6261746E:return 1;
		default:return 0;
		}
	case 0x6F72676564697262:
		switch(wp[1]){
		case 0x0000706968736D6F:return 1;
		default:return 0;
		}
	case 0x6F72676F69726573:
		switch(wp[1]){
		case 0x0000657571736574:return 1;
		default:return 0;
		}
	case 0x6F726779686E6F6E:
		switch(wp[1]){
		case 0x00006369706F6373:return 1;
		case 0x000063697274656D:return 1;
		default:return 0;
		}
	case 0x6F72686361726170:
		switch(wp[1]){
		case 0x000063697473696E:return 1;
		case 0x00006D736974616D:return 1;
		default:return 0;
		}
	case 0x6F7268636174656D:
		switch(wp[1]){
		case 0x00006D736974616D:return 1;
		default:return 0;
		}
	case 0x6F72686368637261:
		switch(wp[1]){
		case 0x000072656C63696E:return 1;
		default:return 0;
		}
	case 0x6F7268636F656C70:
		switch(wp[1]){
		case 0x00006D736974616D:return 1;
		default:return 0;
		}
	case 0x6F7268636F696469:
		switch(wp[1]){
		case 0x0000656D6F736F6D:return 1;
		default:return 0;
		}
	case 0x6F7268636F6D6F68:
		switch(wp[1]){
		case 0x0000656D6F736F6D:return 1;
		case 0x00006D736974616D:return 1;
		default:return 0;
		}
	case 0x6F7268636F6E6F6D:
		switch(wp[1]){
		case 0x00006D736974616D:return 1;
		default:return 0;
		}
	case 0x6F7268636F78696D:
		switch(wp[1]){
		case 0x0000656D6F736F6D:return 1;
		default:return 0;
		}
	case 0x6F726863796C6F70:
		switch(wp[1]){
		case 0x0000657A6974616D:return 1;
		case 0x00006D736974616D:return 1;
		case 0x000074736974616D:return 1;
		default:return 0;
		}
	case 0x6F72687061746E61:
		switch(wp[1]){
		case 0x0000636169736964:return 1;
		default:return 0;
		}
	case 0x6F726874656C7970:
		switch(wp[1]){
		case 0x00007369736F626D:return 1;
		default:return 0;
		}
	case 0x6F72687472616E61:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		case 0x000073756F646F70:return 1;
		default:return 0;
		}
	case 0x6F72697365646E75:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F7269737574626F:
		switch(wp[1]){
		case 0x0000657461727473:return 1;
		default:return 0;
		}
	case 0x6F726B616D627573:
		switch(wp[1]){
		case 0x000063696C656B73:return 1;
		default:return 0;
		}
	case 0x6F726C6176696863:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F726D7563726963:
		switch(wp[1]){
		case 0x00006E6F69746174:return 1;
		case 0x000079726F746174:return 1;
		default:return 0;
		}
	case 0x6F726F6365646E69:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F726F6365646E75:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F726F646F6C616D:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F726F6475657370:
		switch(wp[1]){
		case 0x00006369746E616D:return 1;
		default:return 0;
		}
	case 0x6F726F6C68636964:
		switch(wp[1]){
		case 0x0000636974656361:return 1;
		case 0x00006E6972647968:return 1;
		default:return 0;
		}
	case 0x6F726F6D75686E75:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F726F6E69636166:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F726F7268746E61:
		switch(wp[1]){
		case 0x00006874696C6F70:return 1;
		default:return 0;
		}
	case 0x6F726F726F6D6566:
		switch(wp[1]){
		case 0x00006E61696C7574:return 1;
		default:return 0;
		}
	case 0x6F726F72706E6F6E:
		switch(wp[1]){
		case 0x00006E6F69746167:return 1;
		default:return 0;
		}
	case 0x6F726F7274786564:
		switch(wp[1]){
		case 0x00006E6F69746174:return 1;
		case 0x0000797261746174:return 1;
		default:return 0;
		}
	case 0x6F726F7463656C61:
		switch(wp[1]){
		case 0x000073756F646F70:return 1;
		default:return 0;
		}
	case 0x6F726F7469617274:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F726F746E657473:
		switch(wp[1]){
		case 0x000063696E6F6870:return 1;
		default:return 0;
		}
	case 0x6F726F7472657473:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F726F76696E6D6F:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F72706172746E69:
		switch(wp[1]){
		case 0x0000636974617473:return 1;
		default:return 0;
		}
	case 0x6F72706172747865:
		switch(wp[1]){
		case 0x0000636974617473:return 1;
		default:return 0;
		}
	case 0x6F72706968706D61:
		switch(wp[1]){
		case 0x000072616C797473:return 1;
		default:return 0;
		}
	case 0x6F72706D69657270:
		switch(wp[1]){
		case 0x0000746E656D6576:return 1;
		default:return 0;
		}
	case 0x6F72706D696E6F6E:
		switch(wp[1]){
		case 0x0000746E656D6576:return 1;
		default:return 0;
		}
	case 0x6F72706D69736964:
		switch(wp[1]){
		case 0x0000746E656D6576:return 1;
		default:return 0;
		}
	case 0x6F72706D6973696D:
		switch(wp[1]){
		case 0x0000746E656D6576:return 1;
		default:return 0;
		}
	case 0x6F72706D6F636E75:
		switch(wp[1]){
		case 0x0000676E6973696D:return 1;
		default:return 0;
		}
	case 0x6F72706F67696C6F:
		switch(wp[1]){
		case 0x0000636974656874:return 1;
		default:return 0;
		}
	case 0x6F72706F6E696D61:
		switch(wp[1]){
		case 0x000063696E6F6970:return 1;
		default:return 0;
		}
	case 0x6F72706F7263696D:
		switch(wp[1]){
		case 0x0000726F7463656A:return 1;
		default:return 0;
		}
	case 0x6F72706F7470656C:
		switch(wp[1]){
		case 0x000073756F706F73:return 1;
		default:return 0;
		}
	case 0x6F72707061627573:
		switch(wp[1]){
		case 0x00006E6F69746162:return 1;
		default:return 0;
		}
	case 0x6F72707061657270:
		switch(wp[1]){
		case 0x00006E6F69746162:return 1;
		default:return 0;
		}
	case 0x6F727070616C616D:
		switch(wp[1]){
		case 0x0000657461697270:return 1;
		default:return 0;
		}
	case 0x6F72707061736964:
		switch(wp[1]){
		case 0x0000657461697270:return 1;
		case 0x0000657669746162:return 1;
		case 0x00006E6F69746162:return 1;
		case 0x0000796C676E6976:return 1;
		case 0x000079726F746162:return 1;
		default:return 0;
		}
	case 0x6F7270706173696D:
		switch(wp[1]){
		case 0x0000657461697270:return 1;
		default:return 0;
		}
	case 0x6F72707265746177:
		switch(wp[1]){
		case 0x00007373656E666F:return 1;
		default:return 0;
		}
	case 0x6F72707265746E69:
		switch(wp[1]){
		case 0x00006574616D6978:return 1;
		default:return 0;
		}
	case 0x6F7274616C6F6469:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F72746172666E69:
		switch(wp[1]){
		case 0x00007261656C6863:return 1;
		default:return 0;
		}
	case 0x6F72746172707573:
		switch(wp[1]){
		case 0x00007261656C6863:return 1;
		default:return 0;
		}
	case 0x6F7274656D6D7973:
		switch(wp[1]){
		case 0x00006169626F6870:return 1;
		default:return 0;
		}
	case 0x6F727465726E6F6E:
		switch(wp[1]){
		case 0x0000657669746361:return 1;
		default:return 0;
		}
	case 0x6F7274696E697274:
		switch(wp[1]){
		case 0x0000656E656C7978:return 1;
		case 0x00006C6F6E656870:return 1;
		case 0x00006C6F73657263:return 1;
		default:return 0;
		}
	case 0x6F7274696E6E6F6E:
		switch(wp[1]){
		case 0x000073756F6E6567:return 1;
		default:return 0;
		}
	case 0x6F72746E6F636E69:
		switch(wp[1]){
		case 0x0000656C62616C6C:return 1;
		case 0x0000796C62616C6C:return 1;
		default:return 0;
		}
	case 0x6F72746E6F636E75:
		switch(wp[1]){
		case 0x0000646574726576:return 1;
		case 0x0000656C62616C6C:return 1;
		case 0x0000796C62616C6C:return 1;
		case 0x0000796C64656C6C:return 1;
		default:return 0;
		}
	case 0x6F7274706F746163:
		switch(wp[1]){
		case 0x00006369746E616D:return 1;
		default:return 0;
		}
	case 0x6F72747361736964:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F72747361746163:
		switch(wp[1]){
		case 0x00006C6163696870:return 1;
		default:return 0;
		}
	case 0x6F72747364616568:
		switch(wp[1]){
		case 0x00007373656E676E:return 1;
		default:return 0;
		}
	case 0x6F727473696E6973:
		switch(wp[1]){
		case 0x0000657461727967:return 1;
		case 0x00006C61756E616D:return 1;
		case 0x0000796C6C617372:return 1;
		default:return 0;
		}
	case 0x6F7274736F6C7978:
		switch(wp[1]){
		case 0x000064696F74616D:return 1;
		default:return 0;
		}
	case 0x6F72747375616C63:
		switch(wp[1]){
		case 0x00006169626F6870:return 1;
		default:return 0;
		}
	case 0x6F727561746E6563:
		switch(wp[1]){
		case 0x000061696863616D:return 1;
		default:return 0;
		}
	case 0x6F727568706C7573:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F72796870726F70:
		switch(wp[1]){
		case 0x00006574696E6567:return 1;
		default:return 0;
		}
	case 0x6F7279706F6C7978:
		switch(wp[1]){
		case 0x0000796870617267:return 1;
		default:return 0;
		}
	case 0x6F72797469746E61:
		switch(wp[1]){
		case 0x00006573616E6973:return 1;
		default:return 0;
		}
	case 0x6F73626169746E61:
		switch(wp[1]){
		case 0x000074736974756C:return 1;
		default:return 0;
		}
	case 0x6F7363696C6F7266:
		switch(wp[1]){
		case 0x00007373656E656D:return 1;
		default:return 0;
		}
	case 0x6F73646E61686E75:
		switch(wp[1]){
		case 0x00007373656E656D:return 1;
		default:return 0;
		}
	case 0x6F73656874696C62:
		switch(wp[1]){
		case 0x00007373656E656D:return 1;
		default:return 0;
		}
	case 0x6F73656C626D6167:
		switch(wp[1]){
		case 0x00007373656E656D:return 1;
		default:return 0;
		}
	case 0x6F73656C64646173:
		switch(wp[1]){
		case 0x00007373656E6572:return 1;
		default:return 0;
		}
	case 0x6F73656C6464656D:
		switch(wp[1]){
		case 0x00007373656E656D:return 1;
		default:return 0;
		}
	case 0x6F73656C7474656D:
		switch(wp[1]){
		case 0x00007373656E656D:return 1;
		default:return 0;
		}
	case 0x6F73656D69736162:
		switch(wp[1]){
		case 0x0000736973617473:return 1;
		default:return 0;
		}
	case 0x6F7365726F696874:
		switch(wp[1]){
		case 0x00006C6F6E696372:return 1;
		default:return 0;
		}
	case 0x6F7365727265766F:
		switch(wp[1]){
		case 0x0000796C6574756C:return 1;
		default:return 0;
		}
	case 0x6F73657567616C70:
		switch(wp[1]){
		case 0x00007373656E656D:return 1;
		default:return 0;
		}
	case 0x6F736874676E656C:
		switch(wp[1]){
		case 0x00007373656E656D:return 1;
		default:return 0;
		}
	case 0x6F7368746C616568:
		switch(wp[1]){
		case 0x00007373656E656D:return 1;
		default:return 0;
		}
	case 0x6F736C6165776E75:
		switch(wp[1]){
		case 0x00007373656E656D:return 1;
		default:return 0;
		}
	case 0x6F736C75706D6F63:
		switch(wp[1]){
		case 0x00007373656E6972:return 1;
		default:return 0;
		}
	case 0x6F736E6564727562:
		switch(wp[1]){
		case 0x00007373656E656D:return 1;
		default:return 0;
		}
	case 0x6F736E697265766F:
		switch(wp[1]){
		case 0x0000796C746E656C:return 1;
		default:return 0;
		}
	case 0x6F736E6F63657270:
		switch(wp[1]){
		case 0x00006C61746E616E:return 1;
		case 0x00006E6F6974616C:return 1;
		default:return 0;
		}
	case 0x6F736E6F63697274:
		switch(wp[1]){
		case 0x00006C61746E616E:return 1;
		default:return 0;
		}
	case 0x6F736E6F63736964:
		switch(wp[1]){
		case 0x00006E6F6974616C:return 1;
		case 0x0000796C6574616C:return 1;
		default:return 0;
		}
	case 0x6F736F626D756C70:
		switch(wp[1]){
		case 0x000079636E65766C:return 1;
		default:return 0;
		}
	case 0x6F736F6475657370:
		switch(wp[1]){
		case 0x00006C6163696870:return 1;
		case 0x00006E6F6974756C:return 1;
		default:return 0;
		}
	case 0x6F736F6863797370:
		switch(wp[1]){
		case 0x000073636974616D:return 1;
		default:return 0;
		}
	case 0x6F736F7265746568:
		switch(wp[1]){
		case 0x000073756F74616D:return 1;
		default:return 0;
		}
	case 0x6F73706F67696C6F:
		switch(wp[1]){
		case 0x000063697473696E:return 1;
		default:return 0;
		}
	case 0x6F737265626D7563:
		switch(wp[1]){
		case 0x00007373656E656D:return 1;
		default:return 0;
		}
	case 0x6F73726570696E75:
		switch(wp[1]){
		case 0x00007473696C616E:return 1;
		case 0x00007974696C616E:return 1;
		default:return 0;
		}
	case 0x6F73726570697274:
		switch(wp[1]){
		case 0x00006D73696C616E:return 1;
		case 0x00007473696C616E:return 1;
		case 0x00007974696C616E:return 1;
		default:return 0;
		}
	case 0x6F73726570736964:
		switch(wp[1]){
		case 0x0000657A696C616E:return 1;
		default:return 0;
		}
	case 0x6F73726576696E75:
		switch(wp[1]){
		case 0x0000747369676F6C:return 1;
		default:return 0;
		}
	case 0x6F7373616C616874:
		switch(wp[1]){
		case 0x00006169626F6870:return 1;
		case 0x0000796870617267:return 1;
		default:return 0;
		}
	case 0x6F737365666F7270:
		switch(wp[1]){
		case 0x0000796C6C616972:return 1;
		default:return 0;
		}
	case 0x6F73736573736F70:
		switch(wp[1]){
		case 0x00007373656E6972:return 1;
		default:return 0;
		}
	case 0x6F73736964657270:
		switch(wp[1]){
		case 0x00006E6F6974756C:return 1;
		default:return 0;
		}
	case 0x6F737369646E6F6E:
		switch(wp[1]){
		case 0x00006E6F6974756C:return 1;
		default:return 0;
		}
	case 0x6F737369646F7270:
		switch(wp[1]){
		case 0x00006E6F6974756C:return 1;
		default:return 0;
		}
	case 0x6F73746867697262:
		switch(wp[1]){
		case 0x00007373656E656D:return 1;
		default:return 0;
		}
	case 0x6F73796D6F747561:
		switch(wp[1]){
		case 0x00006169626F6870:return 1;
		default:return 0;
		}
	case 0x6F7461636E757274:
		switch(wp[1]){
		case 0x0000646E75746F72:return 1;
		default:return 0;
		}
	case 0x6F746167696C626F:
		switch(wp[1]){
		case 0x00007373656E6972:return 1;
		default:return 0;
		}
	case 0x6F7461676F726564:
		switch(wp[1]){
		case 0x00007373656E6972:return 1;
		default:return 0;
		}
	case 0x6F746168706C7573:
		switch(wp[1]){
		case 0x0000636974656361:return 1;
		default:return 0;
		}
	case 0x6F74616967676562:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x6F74616D656E6963:
		switch(wp[1]){
		case 0x0000796870617267:return 1;
		default:return 0;
		}
	case 0x6F74616D67696E65:
		switch(wp[1]){
		case 0x0000796870617267:return 1;
		default:return 0;
		}
	case 0x6F74616D6F726863:
		switch(wp[1]){
		case 0x00006169626F6870:return 1;
		case 0x0000616968746170:return 1;
		case 0x000061696C696870:return 1;
		case 0x0000636968746170:return 1;
		case 0x000063696C696870:return 1;
		case 0x00006369726F6870:return 1;
		case 0x0000657265687073:return 1;
		case 0x000073756F6E6567:return 1;
		case 0x0000796870617267:return 1;
		default:return 0;
		}
	case 0x6F74616D6F727473:
		switch(wp[1]){
		case 0x000064696F726F70:return 1;
		default:return 0;
		}
	case 0x6F74616D72656874:
		switch(wp[1]){
		case 0x0000747369676F6C:return 1;
		default:return 0;
		}
	case 0x6F74616D72657073:
		switch(wp[1]){
		case 0x0000636974737963:return 1;
		case 0x0000636974796870:return 1;
		case 0x00006C61696E6F67:return 1;
		case 0x00006C61726F6870:return 1;
		case 0x00006D75696E6F67:return 1;
		case 0x000073756F6E6567:return 1;
		default:return 0;
		}
	case 0x6F74616D73616C70:
		switch(wp[1]){
		case 0x000073756F726170:return 1;
		default:return 0;
		}
	case 0x6F74616D75616874:
		switch(wp[1]){
		case 0x0000796870617267:return 1;
		default:return 0;
		}
	case 0x6F74616D75617274:
		switch(wp[1]){
		case 0x0000636974636174:return 1;
		default:return 0;
		}
	case 0x6F74616D75656872:
		switch(wp[1]){
		case 0x0000796C6C616469:return 1;
		default:return 0;
		}
	case 0x6F74616D75656E70:
		switch(wp[1]){
		case 0x00006169626F6870:return 1;
		case 0x0000616964726163:return 1;
		case 0x000063696E6F6870:return 1;
		case 0x0000636974636174:return 1;
		case 0x0000636974737963:return 1;
		case 0x000073756F6E6567:return 1;
		case 0x0000747369676F6C:return 1;
		case 0x0000796870617267:return 1;
		default:return 0;
		}
	case 0x6F746172656C6373:
		switch(wp[1]){
		case 0x000073756F6E6567:return 1;
		default:return 0;
		}
	case 0x6F74617265706D69:
		switch(wp[1]){
		case 0x0000796C6C616972:return 1;
		default:return 0;
		}
	case 0x6F74617274726174:
		switch(wp[1]){
		case 0x0000636972726566:return 1;
		default:return 0;
		}
	case 0x6F74617375636361:
		switch(wp[1]){
		case 0x0000796C6C616972:return 1;
		default:return 0;
		}
	case 0x6F746174736F7270:
		switch(wp[1]){
		case 0x000061656F687272:return 1;
		case 0x0000796C6167656D:return 1;
		default:return 0;
		}
	case 0x6F7463616C796870:
		switch(wp[1]){
		case 0x00006C6170726163:return 1;
		default:return 0;
		}
	case 0x6F74636172666572:
		switch(wp[1]){
		case 0x000063697274656D:return 1;
		case 0x00007373656E6972:return 1;
		default:return 0;
		}
	case 0x6F74636566657270:
		switch(wp[1]){
		case 0x0000796C6C616972:return 1;
		default:return 0;
		}
	case 0x6F7463656C616964:
		switch(wp[1]){
		case 0x0000747369676F6C:return 1;
		default:return 0;
		}
	case 0x6F746375646E6F63:
		switch(wp[1]){
		case 0x000063697274656D:return 1;
		default:return 0;
		}
	case 0x6F74656361697274:
		switch(wp[1]){
		case 0x0000656E696D616E:return 1;
		default:return 0;
		}
	case 0x6F74656469746E61:
		switch(wp[1]){
		case 0x0000676E6974616E:return 1;
		default:return 0;
		}
	case 0x6F746963696C6566:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F746963696C6F73:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F74696D616C6163:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F7469706963636F:
		switch(wp[1]){
		case 0x000064696F6C7461:return 1;
		case 0x00006C616863756E:return 1;
		case 0x00006C6169636166:return 1;
		case 0x00006C61746E656D:return 1;
		default:return 0;
		}
	case 0x6F74697361726170:
		switch(wp[1]){
		case 0x00006169626F6870:return 1;
		case 0x00006369706F7274:return 1;
		case 0x0000747369676F6C:return 1;
		default:return 0;
		}
	case 0x6F7469736E617274:
		switch(wp[1]){
		case 0x00007373656E6972:return 1;
		default:return 0;
		}
	case 0x6F7469736F707865:
		switch(wp[1]){
		case 0x00007373656E6972:return 1;
		case 0x0000796C6C616972:return 1;
		default:return 0;
		}
	case 0x6F74697563726963:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F74697571696275:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F74697571696E69:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F74697574617267:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F74697574726F66:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F746E65656C6170:
		switch(wp[1]){
		case 0x000079676F6C6F6D:return 1;
		default:return 0;
		}
	case 0x6F746E6574726F70:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F746E696F747561:
		switch(wp[1]){
		case 0x0000746E61636978:return 1;
		default:return 0;
		}
	case 0x6F746E6F656C6170:
		switch(wp[1]){
		case 0x0000747369676F6C:return 1;
		case 0x0000796870617267:return 1;
		default:return 0;
		}
	case 0x6F746F6863697274:
		switch(wp[1]){
		case 0x0000796C73756F6D:return 1;
		default:return 0;
		}
	case 0x6F746F6870616964:
		switch(wp[1]){
		case 0x00006369706F7274:return 1;
		default:return 0;
		}
	case 0x6F746F68706E6F6E:
		switch(wp[1]){
		case 0x00006369746F6962:return 1;
		default:return 0;
		}
	case 0x6F746F68706F7270:
		switch(wp[1]){
		case 0x00006369706F7274:return 1;
		default:return 0;
		}
	case 0x6F746F726870656E:
		switch(wp[1]){
		case 0x0000797469636978:return 1;
		default:return 0;
		}
	case 0x6F74706563657270:
		switch(wp[1]){
		case 0x0000796C6C616972:return 1;
		default:return 0;
		}
	case 0x6F7470656C697065:
		switch(wp[1]){
		case 0x000073756F6E6567:return 1;
		case 0x0000747369676F6C:return 1;
		default:return 0;
		}
	case 0x6F74706D65726570:
		switch(wp[1]){
		case 0x00007373656E6972:return 1;
		default:return 0;
		}
	case 0x6F74736172747865:
		switch(wp[1]){
		case 0x00006C616863616D:return 1;
		default:return 0;
		}
	case 0x6F74736572657270:
		switch(wp[1]){
		case 0x00006E6F69746172:return 1;
		default:return 0;
		}
	case 0x6F747365726F7270:
		switch(wp[1]){
		case 0x00006E6F69746172:return 1;
		default:return 0;
		}
	case 0x6F74736968636174:
		switch(wp[1]){
		case 0x00006369706F6373:return 1;
		default:return 0;
		}
	case 0x6F74736972616E75:
		switch(wp[1]){
		case 0x0000636974617263:return 1;
		default:return 0;
		}
	case 0x6F747369746F7270:
		switch(wp[1]){
		case 0x0000747369676F6C:return 1;
		default:return 0;
		}
	case 0x6F74736F6574736F:
		switch(wp[1]){
		case 0x000073756F74616D:return 1;
		default:return 0;
		}
	case 0x6F74736F6C637963:
		switch(wp[1]){
		case 0x000073756F74616D:return 1;
		default:return 0;
		}
	case 0x6F74736F6C696863:
		switch(wp[1]){
		case 0x000073756F74616D:return 1;
		default:return 0;
		}
	case 0x6F74736F6E657463:
		switch(wp[1]){
		case 0x000073756F74616D:return 1;
		default:return 0;
		}
	case 0x6F74736F6E657473:
		switch(wp[1]){
		case 0x000073756F74616D:return 1;
		default:return 0;
		}
	case 0x6F74736F70657274:
		switch(wp[1]){
		case 0x000073756F74616D:return 1;
		default:return 0;
		}
	case 0x6F74736F7263616D:
		switch(wp[1]){
		case 0x000073756F74616D:return 1;
		default:return 0;
		}
	case 0x6F74736F7263696D:
		switch(wp[1]){
		case 0x000073756F74616D:return 1;
		default:return 0;
		}
	case 0x6F74736F73796870:
		switch(wp[1]){
		case 0x000073756F74616D:return 1;
		default:return 0;
		}
	case 0x6F74736F746E6170:
		switch(wp[1]){
		case 0x000073756F74616D:return 1;
		default:return 0;
		}
	case 0x6F74736F7A696872:
		switch(wp[1]){
		case 0x000073756F74616D:return 1;
		default:return 0;
		}
	case 0x6F747561696D6573:
		switch(wp[1]){
		case 0x000073756F6D6F6E:return 1;
		default:return 0;
		}
	case 0x6F747561796C6F70:
		switch(wp[1]){
		case 0x0000796870617267:return 1;
		default:return 0;
		}
	case 0x6F74756C706E6F6E:
		switch(wp[1]){
		case 0x0000636974617263:return 1;
		default:return 0;
		}
	case 0x6F747968706F6F7A:
		switch(wp[1]){
		case 0x0000747369676F6C:return 1;
		case 0x0000796870617267:return 1;
		default:return 0;
		}
	case 0x6F756769746E6F63:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F756C666F726F62:
		switch(wp[1]){
		case 0x0000636972647968:return 1;
		default:return 0;
		}
	case 0x6F756E69746E6F63:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F757274736E656D:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F75736E65736E75:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F75746972697073:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F75746C756D7574:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F757470756C6F76:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F75747269766E75:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F75747365636E69:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F76656E65626E75:
		switch(wp[1]){
		case 0x0000796C746E656C:return 1;
		default:return 0;
		}
	case 0x6F76656F7263616D:
		switch(wp[1]){
		case 0x00006E6F6974756C:return 1;
		default:return 0;
		}
	case 0x6F76656F7263696D:
		switch(wp[1]){
		case 0x00006E6F6974756C:return 1;
		default:return 0;
		}
	case 0x6F766572696D6573:
		switch(wp[1]){
		case 0x00006E6F6974756C:return 1;
		default:return 0;
		}
	case 0x6F76696C636F7270:
		switch(wp[1]){
		case 0x00007373656E7375:return 1;
		default:return 0;
		}
	case 0x6F766D7563726963:
		switch(wp[1]){
		case 0x00006E6F6974756C:return 1;
		case 0x000079726F74756C:return 1;
		default:return 0;
		}
	case 0x6F766F6475657370:
		switch(wp[1]){
		case 0x000063696E61636C:return 1;
		default:return 0;
		}
	case 0x6F766F65616C6170:
		switch(wp[1]){
		case 0x000063696E61636C:return 1;
		default:return 0;
		}
	case 0x6F766F6976756C66:
		switch(wp[1]){
		case 0x000063696E61636C:return 1;
		default:return 0;
		}
	case 0x6F766F6E65687073:
		switch(wp[1]){
		case 0x0000656E6972656D:return 1;
		default:return 0;
		}
	case 0x6F766F7270657270:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x6F766F72706E6F6E:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x6F77656C746E6567:
		switch(wp[1]){
		case 0x00006873696E616D:return 1;
		default:return 0;
		}
	case 0x6F78657265707968:
		switch(wp[1]){
		case 0x00006169726F6870:return 1;
		default:return 0;
		}
	case 0x6F78696D6F707968:
		switch(wp[1]){
		case 0x00006E616964796C:return 1;
		default:return 0;
		}
	case 0x6F796C6769746E61:
		switch(wp[1]){
		case 0x00006573616C6178:return 1;
		default:return 0;
		}
	case 0x6F796D6F696C6563:
		switch(wp[1]){
		case 0x0000796D6F746F6D:return 1;
		default:return 0;
		}
	case 0x6F796D6F72626966:
		switch(wp[1]){
		case 0x000073756F74616D:return 1;
		default:return 0;
		}
	case 0x6F796D6F746F7270:
		switch(wp[1]){
		case 0x000065736F6E6973:return 1;
		default:return 0;
		}
	case 0x6F796D7265707968:
		switch(wp[1]){
		case 0x00007968706F7274:return 1;
		default:return 0;
		}
	case 0x6F7A616F64696D61:
		switch(wp[1]){
		case 0x00006C6F7A6E6562:return 1;
		default:return 0;
		}
	case 0x6F7A617265707573:
		switch(wp[1]){
		case 0x00006E6F69746174:return 1;
		default:return 0;
		}
	case 0x6F7A6F636964656D:
		switch(wp[1]){
		case 0x00006369676F6C6F:return 1;
		default:return 0;
		}
	case 0x7061636963736970:
		switch(wp[1]){
		case 0x0000747369727574:return 1;
		default:return 0;
		}
	case 0x7061637265646E75:
		switch(wp[1]){
		case 0x000064656C617469:return 1;
		default:return 0;
		}
	case 0x7061637265746E69:
		switch(wp[1]){
		case 0x00007972616C6C69:return 1;
		default:return 0;
		}
	case 0x7061637374736F70:
		switch(wp[1]){
		case 0x0000736972616C75:return 1;
		default:return 0;
		}
	case 0x70616964696D6573:
		switch(wp[1]){
		case 0x000073756F6E6168:return 1;
		default:return 0;
		}
	case 0x70616C6172666E69:
		switch(wp[1]){
		case 0x00006E6169726173:return 1;
		default:return 0;
		}
	case 0x70616C6172707573:
		switch(wp[1]){
		case 0x00006E6169726173:return 1;
		default:return 0;
		}
	case 0x70616C7265707573:
		switch(wp[1]){
		case 0x00006E6169726173:return 1;
		default:return 0;
		}
	case 0x70616E6174706568:
		switch(wp[1]){
		case 0x0000656E65687468:return 1;
		default:return 0;
		}
	case 0x70616E6F68706973:
		switch(wp[1]){
		case 0x000073756F726574:return 1;
		default:return 0;
		}
	case 0x70616E6F74656361:
		switch(wp[1]){
		case 0x0000656E6F687468:return 1;
		default:return 0;
		}
	case 0x70616E7370696E73:
		switch(wp[1]){
		case 0x00006D75726F6E73:return 1;
		default:return 0;
		}
	case 0x70616F6475657370:
		switch(wp[1]){
		case 0x00007978656C706F:return 1;
		default:return 0;
		}
	case 0x7061706172666E69:
		switch(wp[1]){
		case 0x00007972616C6C69:return 1;
		default:return 0;
		}
	case 0x7061706172707573:
		switch(wp[1]){
		case 0x00007972616C6C69:return 1;
		default:return 0;
		}
	case 0x7061706F72626966:
		switch(wp[1]){
		case 0x0000616D6F6C6C69:return 1;
		default:return 0;
		}
	case 0x7061707265746E69:
		switch(wp[1]){
		case 0x00007972616C6C69:return 1;
		default:return 0;
		}
	case 0x7061726173736574:
		switch(wp[1]){
		case 0x0000676E6F687468:return 1;
		default:return 0;
		}
	case 0x7061747369726570:
		switch(wp[1]){
		case 0x0000656E696C7968:return 1;
		default:return 0;
		}
	case 0x7062757361726170:
		switch(wp[1]){
		case 0x00006574616E6F68:return 1;
		default:return 0;
		}
	case 0x70656363616E6F6E:
		switch(wp[1]){
		case 0x00006E6F69746174:return 1;
		default:return 0;
		}
	case 0x706563656D616863:
		switch(wp[1]){
		case 0x000073756F6C6168:return 1;
		default:return 0;
		}
	case 0x7065636E65627573:
		switch(wp[1]){
		case 0x00006369746C6168:return 1;
		default:return 0;
		}
	case 0x7065636E65726F70:
		switch(wp[1]){
		case 0x000073756F6C6168:return 1;
		default:return 0;
		}
	case 0x7065636E65727967:
		switch(wp[1]){
		case 0x00006574616C6168:return 1;
		case 0x000073756F6C6168:return 1;
		default:return 0;
		}
	case 0x7065636F626D7963:
		switch(wp[1]){
		case 0x000073756F6C6168:return 1;
		default:return 0;
		}
	case 0x7065636F63736964:
		switch(wp[1]){
		case 0x000073756F6C6168:return 1;
		default:return 0;
		}
	case 0x7065636F656C6574:
		switch(wp[1]){
		case 0x000073756F6C6168:return 1;
		default:return 0;
		}
	case 0x7065636F6574736F:
		switch(wp[1]){
		case 0x0000616D6F6C6168:return 1;
		default:return 0;
		}
	case 0x7065636F67657473:
		switch(wp[1]){
		case 0x00006E61696C6168:return 1;
		case 0x000073756F6C6168:return 1;
		default:return 0;
		}
	case 0x7065636F68746E61:
		switch(wp[1]){
		case 0x000073756F6C6168:return 1;
		default:return 0;
		}
	case 0x7065636F6874726F:
		switch(wp[1]){
		case 0x000073756F6C6168:return 1;
		default:return 0;
		}
	case 0x7065636F6C657461:
		switch(wp[1]){
		case 0x000073756F6C6168:return 1;
		default:return 0;
		}
	case 0x7065636F6C706964:
		switch(wp[1]){
		case 0x000073756F6C6168:return 1;
		default:return 0;
		}
	case 0x7065636F6E657473:
		switch(wp[1]){
		case 0x000073756F6C6168:return 1;
		default:return 0;
		}
	case 0x7065636F6E696C63:
		switch(wp[1]){
		case 0x00006D73696C6168:return 1;
		case 0x000073756F6C6168:return 1;
		default:return 0;
		}
	case 0x7065636F7263616D:
		switch(wp[1]){
		case 0x00006D73696C6168:return 1;
		case 0x000073756F6C6168:return 1;
		default:return 0;
		}
	case 0x7065636F7263696D:
		switch(wp[1]){
		case 0x00006D73696C6168:return 1;
		case 0x000073756F6C6168:return 1;
		default:return 0;
		}
	case 0x7065636F72646E61:
		switch(wp[1]){
		case 0x000073756F6C6168:return 1;
		default:return 0;
		}
	case 0x7065636F72647968:
		switch(wp[1]){
		case 0x000064696F6C6168:return 1;
		case 0x000073756F6C6168:return 1;
		default:return 0;
		}
	case 0x7065636F72756174:
		switch(wp[1]){
		case 0x000073756F6C6168:return 1;
		default:return 0;
		}
	case 0x7065636F73707968:
		switch(wp[1]){
		case 0x000073756F6C6168:return 1;
		default:return 0;
		}
	case 0x7065636F7470656C:
		switch(wp[1]){
		case 0x000064696F6C6168:return 1;
		case 0x000073756F6C6168:return 1;
		default:return 0;
		}
	case 0x7065636F7A696872:
		switch(wp[1]){
		case 0x000073756F6C6168:return 1;
		default:return 0;
		}
	case 0x7065637265706D69:
		switch(wp[1]){
		case 0x0000797469766974:return 1;
		default:return 0;
		}
	case 0x7065637265707061:
		switch(wp[1]){
		case 0x0000796C65766974:return 1;
		default:return 0;
		}
	case 0x706563737265766F:
		switch(wp[1]){
		case 0x00006D7369636974:return 1;
		default:return 0;
		}
	case 0x7065637968636170:
		switch(wp[1]){
		case 0x000073756F6C6168:return 1;
		default:return 0;
		}
	case 0x7065637974616C70:
		switch(wp[1]){
		case 0x000064696F6C6168:return 1;
		case 0x00006D73696C6168:return 1;
		case 0x000073756F6C6168:return 1;
		default:return 0;
		}
	case 0x7065646172647968:
		switch(wp[1]){
		case 0x000073756F676168:return 1;
		default:return 0;
		}
	case 0x7065646E69657270:
		switch(wp[1]){
		case 0x0000746E65646E65:return 1;
		default:return 0;
		}
	case 0x7065646E696E6F6E:
		switch(wp[1]){
		case 0x0000746E65646E65:return 1;
		default:return 0;
		}
	case 0x7065646F6964656D:
		switch(wp[1]){
		case 0x0000646573736572:return 1;
		default:return 0;
		}
	case 0x7065647265746E69:
		switch(wp[1]){
		case 0x0000746E65646E65:return 1;
		default:return 0;
		}
	case 0x7065656B656D6974:
		switch(wp[1]){
		case 0x0000706968737265:return 1;
		default:return 0;
		}
	case 0x7065686F6C637963:
		switch(wp[1]){
		case 0x0000656E6F6E6174:return 1;
		default:return 0;
		}
	case 0x70656E6F6874696C:
		switch(wp[1]){
		case 0x0000736974697268:return 1;
		default:return 0;
		}
	case 0x70656E6F6C657970:
		switch(wp[1]){
		case 0x0000636974697268:return 1;
		case 0x00007369736F7268:return 1;
		case 0x0000736974697268:return 1;
		default:return 0;
		}
	case 0x70656E6F6C706964:
		switch(wp[1]){
		case 0x0000616964697268:return 1;
		default:return 0;
		}
	case 0x70656E6F72647968:
		switch(wp[1]){
		case 0x00006369746F7268:return 1;
		case 0x00006574696C6568:return 1;
		case 0x00007369736F7268:return 1;
		default:return 0;
		}
	case 0x70656E6F74737963:
		switch(wp[1]){
		case 0x00007369736F7268:return 1;
		default:return 0;
		}
	case 0x70656F6863797370:
		switch(wp[1]){
		case 0x0000797370656C69:return 1;
		default:return 0;
		}
	case 0x70656F7274736167:
		switch(wp[1]){
		case 0x000063696F6C7069:return 1;
		default:return 0;
		}
	case 0x7065726369746E61:
		switch(wp[1]){
		case 0x0000656C75637375:return 1;
		default:return 0;
		}
	case 0x7065726F746F7270:
		switch(wp[1]){
		case 0x00006E61696C6974:return 1;
		default:return 0;
		}
	case 0x7065727265646E75:
		switch(wp[1]){
		case 0x0000746E65736572:return 1;
		default:return 0;
		}
	case 0x7065727265746E69:
		switch(wp[1]){
		case 0x00006E6F69736C75:return 1;
		case 0x0000746E656C6C65:return 1;
		default:return 0;
		}
	case 0x70657272696E6F6E:
		switch(wp[1]){
		case 0x0000656C62617261:return 1;
		default:return 0;
		}
	case 0x7065727369646E75:
		switch(wp[1]){
		case 0x0000656C62617475:return 1;
		default:return 0;
		}
	case 0x70657273696D6572:
		switch(wp[1]){
		case 0x0000746E65736572:return 1;
		default:return 0;
		}
	case 0x706575716E697571:
		switch(wp[1]){
		case 0x0000657469747261:return 1;
		case 0x00006C6174636E75:return 1;
		default:return 0;
		}
	case 0x70696365726E6F6E:
		switch(wp[1]){
		case 0x0000797469636F72:return 1;
		default:return 0;
		}
	case 0x7069636572706E75:
		switch(wp[1]){
		case 0x0000646574617469:return 1;
		default:return 0;
		}
	case 0x706963696C707564:
		switch(wp[1]){
		case 0x00006574616E6E65:return 1;
		default:return 0;
		}
	case 0x7069636974726170:
		switch(wp[1]){
		case 0x0000657A696C6169:return 1;
		case 0x0000737365727461:return 1;
		case 0x00007974696C6169:return 1;
		default:return 0;
		}
	case 0x7069636974726F63:
		switch(wp[1]){
		case 0x0000796C6C617465:return 1;
		default:return 0;
		}
	case 0x706964696C6C6170:
		switch(wp[1]){
		case 0x0000657461706C61:return 1;
		default:return 0;
		}
	case 0x7069647265707573:
		switch(wp[1]){
		case 0x00007963616D6F6C:return 1;
		default:return 0;
		}
	case 0x70696C756C6C6563:
		switch(wp[1]){
		case 0x0000796C6C617465:return 1;
		default:return 0;
		}
	case 0x70696E7265746C61:
		switch(wp[1]){
		case 0x00006574616E6E69:return 1;
		default:return 0;
		}
	case 0x7069726373627573:
		switch(wp[1]){
		case 0x0000796C65766974:return 1;
		default:return 0;
		}
	case 0x7069726373657270:
		switch(wp[1]){
		case 0x00006C6169726F74:return 1;
		case 0x0000796C65766974:return 1;
		default:return 0;
		}
	case 0x70697263736E6F63:
		switch(wp[1]){
		case 0x00006C616E6F6974:return 1;
		default:return 0;
		}
	case 0x70697263736F7270:
		switch(wp[1]){
		case 0x00006C616E6F6974:return 1;
		case 0x0000796C65766974:return 1;
		default:return 0;
		}
	case 0x7069737065727473:
		switch(wp[1]){
		case 0x000073756F726574:return 1;
		default:return 0;
		}
	case 0x706974616D6C6170:
		switch(wp[1]){
		case 0x0000657469747261:return 1;
		default:return 0;
		}
	case 0x706974616E6E6570:
		switch(wp[1]){
		case 0x0000657469747261:return 1;
		default:return 0;
		}
	case 0x706974616E6E6970:
		switch(wp[1]){
		case 0x0000657469747261:return 1;
		default:return 0;
		}
	case 0x706974616E726574:
		switch(wp[1]){
		case 0x00006574616E6E69:return 1;
		default:return 0;
		}
	case 0x7069746C756D6E75:
		switch(wp[1]){
		case 0x0000656C6261696C:return 1;
		case 0x0000796C6465696C:return 1;
		default:return 0;
		}
	case 0x706C75736F707968:
		switch(wp[1]){
		case 0x000073756F727568:return 1;
		default:return 0;
		}
	case 0x706D616F69646172:
		switch(wp[1]){
		case 0x000072656966696C:return 1;
		default:return 0;
		}
	case 0x706D616F746F7270:
		switch(wp[1]){
		case 0x00006E6169626968:return 1;
		default:return 0;
		}
	case 0x706D6562656C6870:
		switch(wp[1]){
		case 0x0000736978617268:return 1;
		default:return 0;
		}
	case 0x706D656964726163:
		switch(wp[1]){
		case 0x0000616978617268:return 1;
		default:return 0;
		}
	case 0x706D656E656C7073:
		switch(wp[1]){
		case 0x0000736978617268:return 1;
		default:return 0;
		}
	case 0x706D657265707573:
		switch(wp[1]){
		case 0x0000657A69736168:return 1;
		default:return 0;
		}
	case 0x706D657265707968:
		switch(wp[1]){
		case 0x0000657A69736168:return 1;
		default:return 0;
		}
	case 0x706D65726870656E:
		switch(wp[1]){
		case 0x0000736978617268:return 1;
		default:return 0;
		}
	case 0x706D65736E617274:
		switch(wp[1]){
		case 0x00006C6163697269:return 1;
		default:return 0;
		}
	case 0x706D657469746E61:
		switch(wp[1]){
		case 0x000065636E617265:return 1;
		default:return 0;
		}
	case 0x706D697265707573:
		switch(wp[1]){
		case 0x0000656C6261736F:return 1;
		case 0x0000676E69646E65:return 1;
		case 0x0000746E6174726F:return 1;
		default:return 0;
		}
	case 0x706D69737265766F:
		switch(wp[1]){
		case 0x000079746963696C:return 1;
		default:return 0;
		}
	case 0x706D6F6363616E75:
		switch(wp[1]){
		case 0x000064656873696C:return 1;
		case 0x0000656C62616E61:return 1;
		case 0x0000676E69796E61:return 1;
		default:return 0;
		}
	case 0x706D6F6365646E69:
		switch(wp[1]){
		case 0x0000656C6261736F:return 1;
		case 0x0000656C62696E6F:return 1;
		default:return 0;
		}
	case 0x706D6F6365646E75:
		switch(wp[1]){
		case 0x00006465646E756F:return 1;
		case 0x0000656C6261736F:return 1;
		default:return 0;
		}
	case 0x706D6F63696E6D6F:
		switch(wp[1]){
		case 0x000065636E657465:return 1;
		default:return 0;
		}
	case 0x706D6F6369746E61:
		switch(wp[1]){
		case 0x0000746E656D656C:return 1;
		default:return 0;
		}
	case 0x706D6F637265766F:
		switch(wp[1]){
		case 0x0000657461736E65:return 1;
		case 0x0000746E6563616C:return 1;
		case 0x000079746978656C:return 1;
		default:return 0;
		}
	case 0x706D6F7262697274:
		switch(wp[1]){
		case 0x00006574616E6568:return 1;
		default:return 0;
		}
	case 0x706E65626D6F6872:
		switch(wp[1]){
		case 0x000072796870726F:return 1;
		default:return 0;
		}
	case 0x706F626D6F726874:
		switch(wp[1]){
		case 0x000063697473616C:return 1;
		case 0x00006E697473616C:return 1;
		default:return 0;
		}
	case 0x706F63617274736F:
		switch(wp[1]){
		case 0x000073756F726F68:return 1;
		default:return 0;
		}
	case 0x706F63656C6F6373:
		switch(wp[1]){
		case 0x000073756F676168:return 1;
		default:return 0;
		}
	case 0x706F63656D72796D:
		switch(wp[1]){
		case 0x000064696F676168:return 1;
		case 0x0000656E69676168:return 1;
		case 0x00006D73696C6968:return 1;
		case 0x000073756F676168:return 1;
		case 0x000073756F6C6968:return 1;
		default:return 0;
		}
	case 0x706F63696D656863:
		switch(wp[1]){
		case 0x0000736369737968:return 1;
		default:return 0;
		}
	case 0x706F6369706F7274:
		switch(wp[1]){
		case 0x00006E6174696C6F:return 1;
		default:return 0;
		}
	case 0x706F63736167656D:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x706F6373656C6574:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x706F63736F726561:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x706F63736F727967:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x706F6462796C6F6D:
		switch(wp[1]){
		case 0x0000736973657261:return 1;
		default:return 0;
		}
	case 0x706F646970696872:
		switch(wp[1]){
		case 0x000073756F726574:return 1;
		default:return 0;
		}
	case 0x706F646972657470:
		switch(wp[1]){
		case 0x00006D73696C6968:return 1;
		case 0x000073756F747968:return 1;
		case 0x00007473696C6968:return 1;
		default:return 0;
		}
	case 0x706F646E75636573:
		switch(wp[1]){
		case 0x00007972616D6972:return 1;
		default:return 0;
		}
	case 0x706F646E75726F63:
		switch(wp[1]){
		case 0x00006574696C6968:return 1;
		default:return 0;
		}
	case 0x706F656863617274:
		switch(wp[1]){
		case 0x0000656E696E6F68:return 1;
		default:return 0;
		}
	case 0x706F656E69726570:
		switch(wp[1]){
		case 0x000063697473616C:return 1;
		default:return 0;
		}
	case 0x706F67697473616D:
		switch(wp[1]){
		case 0x000073756F726F68:return 1;
		default:return 0;
		}
	case 0x706F677972657470:
		switch(wp[1]){
		case 0x00006C6174616C61:return 1;
		default:return 0;
		}
	case 0x706F68636E796872:
		switch(wp[1]){
		case 0x000073756F726F68:return 1;
		default:return 0;
		}
	case 0x706F6870736F6870:
		switch(wp[1]){
		case 0x00006E6965746F72:return 1;
		default:return 0;
		}
	case 0x706F687373617267:
		switch(wp[1]){
		case 0x0000687369726570:return 1;
		case 0x00006D6F64726570:return 1;
		default:return 0;
		}
	case 0x706F68746963656C:
		switch(wp[1]){
		case 0x00006E6965746F72:return 1;
		default:return 0;
		}
	case 0x706F6874696E726F:
		switch(wp[1]){
		case 0x00006574696C6968:return 1;
		case 0x000073756F6C6968:return 1;
		case 0x00007473696C6968:return 1;
		default:return 0;
		}
	case 0x706F68746E616361:
		switch(wp[1]){
		case 0x000073756F726574:return 1;
		case 0x000073756F726F68:return 1;
		default:return 0;
		}
	case 0x706F696461746163:
		switch(wp[1]){
		case 0x00006C6163697274:return 1;
		default:return 0;
		}
	case 0x706F6964696E6F63:
		switch(wp[1]){
		case 0x000073756F726F68:return 1;
		default:return 0;
		}
	case 0x706F6964696F6F7A:
		switch(wp[1]){
		case 0x000073756F6C6968:return 1;
		default:return 0;
		}
	case 0x706F69676E6F7073:
		switch(wp[1]){
		case 0x000063696D73616C:return 1;
		default:return 0;
		}
	case 0x706F69726174736F:
		switch(wp[1]){
		case 0x00006C6169737968:return 1;
		case 0x000073756F737968:return 1;
		default:return 0;
		}
	case 0x706F697265747261:
		switch(wp[1]){
		case 0x0000726F73736572:return 1;
		default:return 0;
		}
	case 0x706F6C6168706563:
		switch(wp[1]){
		case 0x000073756F726F68:return 1;
		default:return 0;
		}
	case 0x706F6C6168706D6F:
		switch(wp[1]){
		case 0x0000636968637973:return 1;
		default:return 0;
		}
	case 0x706F6C6172746574:
		switch(wp[1]){
		case 0x0000746E6F646F68:return 1;
		default:return 0;
		}
	case 0x706F6C6379636E65:
		switch(wp[1]){
		case 0x0000747361696465:return 1;
		default:return 0;
		}
	case 0x706F6C6973707968:
		switch(wp[1]){
		case 0x0000746E6F646F68:return 1;
		default:return 0;
		}
	case 0x706F6C6C6174656D:
		switch(wp[1]){
		case 0x000063697473616C:return 1;
		default:return 0;
		}
	case 0x706F6C6C6978616D:
		switch(wp[1]){
		case 0x00006C6174616C61:return 1;
		default:return 0;
		}
	case 0x706F6C756373756D:
		switch(wp[1]){
		case 0x000063696E657268:return 1;
		case 0x00006C61696C6C61:return 1;
		default:return 0;
		}
	case 0x706F6D65686F7369:
		switch(wp[1]){
		case 0x0000656C6F727279:return 1;
		default:return 0;
		}
	case 0x706F6D6F72686361:
		switch(wp[1]){
		case 0x000073756F6C6968:return 1;
		default:return 0;
		}
	case 0x706F6E6169746E61:
		switch(wp[1]){
		case 0x0000656E696C6568:return 1;
		default:return 0;
		}
	case 0x706F6E6173796874:
		switch(wp[1]){
		case 0x000073756F726574:return 1;
		default:return 0;
		}
	case 0x706F6E61766C6167:
		switch(wp[1]){
		case 0x0000636968637973:return 1;
		case 0x000063697473616C:return 1;
		default:return 0;
		}
	case 0x706F6E6863617261:
		switch(wp[1]){
		case 0x000073756F676168:return 1;
		default:return 0;
		}
	case 0x706F6E6963726163:
		switch(wp[1]){
		case 0x000073756F676168:return 1;
		case 0x0000737570796C6F:return 1;
		default:return 0;
		}
	case 0x706F6E696C696E61:
		switch(wp[1]){
		case 0x000073756F6C6968:return 1;
		default:return 0;
		}
	case 0x706F6E696D726163:
		switch(wp[1]){
		case 0x000073756F6C6968:return 1;
		default:return 0;
		}
	case 0x706F6E6972626966:
		switch(wp[1]){
		case 0x000063697473616C:return 1;
		case 0x00006E697473616C:return 1;
		default:return 0;
		}
	case 0x706F6E6F68706973:
		switch(wp[1]){
		case 0x000073756F726F68:return 1;
		default:return 0;
		}
	case 0x706F6E6F6D726F68:
		switch(wp[1]){
		case 0x000063697465696F:return 1;
		case 0x000073697365696F:return 1;
		default:return 0;
		}
	case 0x706F706169746E61:
		switch(wp[1]){
		case 0x000063697463656C:return 1;
		default:return 0;
		}
	case 0x706F70617275656E:
		switch(wp[1]){
		case 0x00006C6165737968:return 1;
		case 0x00006C6169737968:return 1;
		default:return 0;
		}
	case 0x706F706174736F70:
		switch(wp[1]){
		case 0x000063697463656C:return 1;
		default:return 0;
		}
	case 0x706F706F69626974:
		switch(wp[1]){
		case 0x00006C616574696C:return 1;
		default:return 0;
		}
	case 0x706F726265726563:
		switch(wp[1]){
		case 0x0000656C69746E6F:return 1;
		default:return 0;
		}
	case 0x706F72646E6F6863:
		switch(wp[1]){
		case 0x000063697473616C:return 1;
		case 0x00006E6965746F72:return 1;
		default:return 0;
		}
	case 0x706F726563736976:
		switch(wp[1]){
		case 0x00006C617275656C:return 1;
		default:return 0;
		}
	case 0x706F726574657275:
		switch(wp[1]){
		case 0x0000616D67656C68:return 1;
		default:return 0;
		}
	case 0x706F726765746E69:
		switch(wp[1]){
		case 0x00006C61696C6C61:return 1;
		default:return 0;
		}
	case 0x706F726874657275:
		switch(wp[1]){
		case 0x000063697473616C:return 1;
		default:return 0;
		}
	case 0x706F726874797265:
		switch(wp[1]){
		case 0x000063697465696F:return 1;
		case 0x000064697473616C:return 1;
		case 0x0000656E69656C68:return 1;
		case 0x00006E696C6C7968:return 1;
		case 0x000073697365696F:return 1;
		case 0x000073756F676168:return 1;
		case 0x000073756F6C6968:return 1;
		default:return 0;
		}
	case 0x706F726968746870:
		switch(wp[1]){
		case 0x000073756F676168:return 1;
		default:return 0;
		}
	case 0x706F726F706D6574:
		switch(wp[1]){
		case 0x0000656E69746E6F:return 1;
		default:return 0;
		}
	case 0x706F72706D696E75:
		switch(wp[1]){
		case 0x0000646574616972:return 1;
		default:return 0;
		}
	case 0x706F727070616E69:
		switch(wp[1]){
		case 0x0000656C62616972:return 1;
		default:return 0;
		}
	case 0x706F727070616E75:
		switch(wp[1]){
		case 0x0000646574616972:return 1;
		case 0x0000656C62616972:return 1;
		default:return 0;
		}
	case 0x706F72707265766F:
		switch(wp[1]){
		case 0x00006E6F6974726F:return 1;
		default:return 0;
		}
	case 0x706F727078656E75:
		switch(wp[1]){
		case 0x0000646574616972:return 1;
		case 0x0000656C62616972:return 1;
		default:return 0;
		}
	case 0x706F727463656C65:
		switch(wp[1]){
		case 0x000063696E657268:return 1;
		case 0x0000676E6974616C:return 1;
		case 0x0000736369737968:return 1;
		default:return 0;
		}
	case 0x706F7274656D6E75:
		switch(wp[1]){
		case 0x00006E6174696C6F:return 1;
		default:return 0;
		}
	case 0x706F72746F697465:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x706F72746F6C6C61:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x706F72746F6E6F6D:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x706F72746F747561:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x706F727470656373:
		switch(wp[1]){
		case 0x000073756F726568:return 1;
		default:return 0;
		}
	case 0x706F7274736F7061:
		switch(wp[1]){
		case 0x00006E6F69746168:return 1;
		default:return 0;
		}
	case 0x706F727574747567:
		switch(wp[1]){
		case 0x00006C6174616C61:return 1;
		default:return 0;
		}
	case 0x706F736565617270:
		switch(wp[1]){
		case 0x00006C6165676168:return 1;
		default:return 0;
		}
	case 0x706F736569726570:
		switch(wp[1]){
		case 0x00006C6165676168:return 1;
		default:return 0;
		}
	case 0x706F73656F627573:
		switch(wp[1]){
		case 0x00006C6165676168:return 1;
		default:return 0;
		}
	case 0x706F736574736F70:
		switch(wp[1]){
		case 0x00006C6165676168:return 1;
		default:return 0;
		}
	case 0x706F736F6C696870:
		switch(wp[1]){
		case 0x0000636974736968:return 1;
		case 0x0000656469636968:return 1;
		case 0x0000726574736168:return 1;
		case 0x0000726574736968:return 1;
		case 0x0000737365726568:return 1;
		case 0x0000797274736168:return 1;
		default:return 0;
		}
	case 0x706F737572726173:
		switch(wp[1]){
		case 0x00007473696E6F68:return 1;
		default:return 0;
		}
	case 0x706F74616D656168:
		switch(wp[1]){
		case 0x0000656E696C6968:return 1;
		default:return 0;
		}
	case 0x706F74616D6F6E6F:
		switch(wp[1]){
		case 0x00006C616369656F:return 1;
		default:return 0;
		}
	case 0x706F74616D6F7473:
		switch(wp[1]){
		case 0x000063697473616C:return 1;
		case 0x000073756F726F68:return 1;
		default:return 0;
		}
	case 0x706F74616D726564:
		switch(wp[1]){
		case 0x000063697473616C:return 1;
		default:return 0;
		}
	case 0x706F74616E616874:
		switch(wp[1]){
		case 0x0000636169626F68:return 1;
		case 0x00006E6169646968:return 1;
		default:return 0;
		}
	case 0x706F74616E726574:
		switch(wp[1]){
		case 0x00006574616E6E69:return 1;
		default:return 0;
		}
	case 0x706F7463616C6167:
		switch(wp[1]){
		case 0x000063697465696F:return 1;
		case 0x000073697365696F:return 1;
		case 0x0000736973796C68:return 1;
		case 0x000073756F676168:return 1;
		case 0x000073756F677968:return 1;
		case 0x000073756F726F68:return 1;
		case 0x0000747369676168:return 1;
		default:return 0;
		}
	case 0x706F74656E67616D:
		switch(wp[1]){
		case 0x00007265746E6972:return 1;
		default:return 0;
		}
	case 0x706F74696D726574:
		switch(wp[1]){
		case 0x000073756F676168:return 1;
		case 0x000073756F6C6968:return 1;
		default:return 0;
		}
	case 0x706F747361677265:
		switch(wp[1]){
		case 0x000063696D73616C:return 1;
		default:return 0;
		}
	case 0x706F796273657270:
		switch(wp[1]){
		case 0x000061696E657268:return 1;
		case 0x000063696E657268:return 1;
		default:return 0;
		}
	case 0x706F796874686369:
		switch(wp[1]){
		case 0x0000657A69676168:return 1;
		case 0x00006E6169676168:return 1;
		case 0x000073756F676168:return 1;
		case 0x0000747369676168:return 1;
		default:return 0;
		}
	case 0x706F7A6E65626964:
		switch(wp[1]){
		case 0x0000656C6F727279:return 1;
		default:return 0;
		}
	case 0x7070616F7263696D:
		switch(wp[1]){
		case 0x0000737574617261:return 1;
		default:return 0;
		}
	case 0x7070617369646E75:
		switch(wp[1]){
		case 0x00006465746E696F:return 1;
		case 0x0000676E69726165:return 1;
		default:return 0;
		}
	case 0x707261636F6E6F6D:
		switch(wp[1]){
		case 0x00007972616C6C65:return 1;
		default:return 0;
		}
	case 0x707261636F746365:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x70726163796C6F70:
		switch(wp[1]){
		case 0x00007972616C6C65:return 1;
		default:return 0;
		}
	case 0x7072656874616577:
		switch(wp[1]){
		case 0x00006465666F6F72:return 1;
		default:return 0;
		}
	case 0x707265746E656E75:
		switch(wp[1]){
		case 0x0000676E69736972:return 1;
		default:return 0;
		}
	case 0x707265746E696E75:
		switch(wp[1]){
		case 0x000064656461656C:return 1;
		case 0x0000646574616C6F:return 1;
		default:return 0;
		}
	case 0x707265746E756F63:
		switch(wp[1]){
		case 0x00006465746E696F:return 1;
		case 0x000065636E65746F:return 1;
		case 0x0000657275746369:return 1;
		case 0x0000676E6974736F:return 1;
		case 0x00006E6F69737361:return 1;
		case 0x0000737365636F72:return 1;
		case 0x00007463656A6F72:return 1;
		case 0x0000746568706F72:return 1;
		case 0x0000746E61737361:return 1;
		case 0x0000746E65646E65:return 1;
		case 0x0000747365746F72:return 1;
		case 0x0000786F64617261:return 1;
		case 0x000079636E65746F:return 1;
		case 0x000079746C616E65:return 1;
		default:return 0;
		}
	case 0x70726F636E696E75:
		switch(wp[1]){
		case 0x000064657461726F:return 1;
		default:return 0;
		}
	case 0x70726F68706D6163:
		switch(wp[1]){
		case 0x0000656E6F726F68:return 1;
		default:return 0;
		}
	case 0x70726F6D6174656D:
		switch(wp[1]){
		case 0x0000616973706F68:return 1;
		case 0x00006E6169736F68:return 1;
		default:return 0;
		}
	case 0x70726F6D796C6F70:
		switch(wp[1]){
		case 0x0000636974736968:return 1;
		default:return 0;
		}
	case 0x7072757369746E61:
		switch(wp[1]){
		case 0x00006E616963696C:return 1;
		default:return 0;
		}
	case 0x7073616E69746572:
		switch(wp[1]){
		case 0x00006D75746C6168:return 1;
		default:return 0;
		}
	case 0x7073656C6464696D:
		switch(wp[1]){
		case 0x000072657474696C:return 1;
		default:return 0;
		}
	case 0x70736D7563726963:
		switch(wp[1]){
		case 0x0000657669746365:return 1;
		case 0x00006E6F69746365:return 1;
		default:return 0;
		}
	case 0x70736E6172746E69:
		switch(wp[1]){
		case 0x000079636E657261:return 1;
		default:return 0;
		}
	case 0x70736E6172746E75:
		switch(wp[1]){
		case 0x00006465746E616C:return 1;
		default:return 0;
		}
	case 0x70736E6F63657270:
		switch(wp[1]){
		case 0x0000726F74617269:return 1;
		default:return 0;
		}
	case 0x70736E6F636E6F6E:
		switch(wp[1]){
		case 0x0000726F74617269:return 1;
		default:return 0;
		}
	case 0x70736F6469707361:
		switch(wp[1]){
		case 0x0000656E696D7265:return 1;
		default:return 0;
		}
	case 0x70736F646E657865:
		switch(wp[1]){
		case 0x000073756F6D7265:return 1;
		default:return 0;
		}
	case 0x70736F6475657370:
		switch(wp[1]){
		case 0x0000656C63617269:return 1;
		case 0x00006C6172746365:return 1;
		case 0x00006D75696D7265:return 1;
		case 0x000073756F6D7265:return 1;
		default:return 0;
		}
	case 0x70736F6863697274:
		switch(wp[1]){
		case 0x000065676E61726F:return 1;
		default:return 0;
		}
	case 0x70736F68706F7274:
		switch(wp[1]){
		case 0x00006C6169676E6F:return 1;
		case 0x00006D7569676E6F:return 1;
		default:return 0;
		}
	case 0x70736F68746E6178:
		switch(wp[1]){
		case 0x000073756F6D7265:return 1;
		default:return 0;
		}
	case 0x70736F6C75676E61:
		switch(wp[1]){
		case 0x00006C61696E656C:return 1;
		default:return 0;
		}
	case 0x70736F6D61757173:
		switch(wp[1]){
		case 0x000064696F6E6568:return 1;
		default:return 0;
		}
	case 0x70736F6E616C656D:
		switch(wp[1]){
		case 0x000073756F6D7265:return 1;
		default:return 0;
		}
	case 0x70736F7373696567:
		switch(wp[1]){
		case 0x0000656E696D7265:return 1;
		default:return 0;
		}
	case 0x70736F7461726563:
		switch(wp[1]){
		case 0x00006E6169676E6F:return 1;
		default:return 0;
		}
	case 0x70736F746962726F:
		switch(wp[1]){
		case 0x000064696F6E6568:return 1;
		default:return 0;
		}
	case 0x70737573696D6573:
		switch(wp[1]){
		case 0x00006E6F69736E65:return 1;
		default:return 0;
		}
	case 0x707375737265766F:
		switch(wp[1]){
		case 0x000073756F696369:return 1;
		default:return 0;
		}
	case 0x7073796863617274:
		switch(wp[1]){
		case 0x000073756F6D7265:return 1;
		default:return 0;
		}
	case 0x7075706F64697269:
		switch(wp[1]){
		case 0x00007972616C6C69:return 1;
		default:return 0;
		}
	case 0x7075706F6C75636F:
		switch(wp[1]){
		case 0x00007972616C6C69:return 1;
		default:return 0;
		}
	case 0x7075707265746E69:
		switch(wp[1]){
		case 0x00007972616C6C69:return 1;
		default:return 0;
		}
	case 0x7075727265746E69:
		switch(wp[1]){
		case 0x0000796C65766974:return 1;
		case 0x0000796C676E6974:return 1;
		default:return 0;
		}
	case 0x7075737265707573:
		switch(wp[1]){
		case 0x00007963616D6572:return 1;
		default:return 0;
		}
	case 0x70757473756E616D:
		switch(wp[1]){
		case 0x00006E6F69746172:return 1;
		default:return 0;
		}
	case 0x70776F6369726570:
		switch(wp[1]){
		case 0x0000736974697265:return 1;
		default:return 0;
		}
	case 0x7078657265707573:
		switch(wp[1]){
		case 0x00006E6F69736E61:return 1;
		default:return 0;
		}
	case 0x7079686F69676E61:
		switch(wp[1]){
		case 0x000061696E6F746F:return 1;
		default:return 0;
		}
	case 0x7079686F7275656E:
		switch(wp[1]){
		case 0x00006D7369746F6E:return 1;
		case 0x000079676F6C6F6E:return 1;
		default:return 0;
		}
	case 0x7079686F746F6870:
		switch(wp[1]){
		case 0x0000797473616E6F:return 1;
		default:return 0;
		}
	case 0x7079687265707573:
		switch(wp[1]){
		case 0x000065746972636F:return 1;
		default:return 0;
		}
	case 0x7079687265707968:
		switch(wp[1]){
		case 0x000079736972636F:return 1;
		default:return 0;
		}
	case 0x70796C61636F7061:
		switch(wp[1]){
		case 0x00006D7369636974:return 1;
		default:return 0;
		}
	case 0x707972656B756F6A:
		switch(wp[1]){
		case 0x00007972656B7761:return 1;
		default:return 0;
		}
	case 0x7079746568637261:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x7079746F6870696E:
		switch(wp[1]){
		case 0x00007369736F6C68:return 1;
		default:return 0;
		}
	case 0x7079746F696C6568:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x7079746F6E656870:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x7079746F6E6F6870:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x7079746F746F6870:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x7079746F746F7270:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x716572667265766F:
		switch(wp[1]){
		case 0x0000796C746E6575:return 1;
		default:return 0;
		}
	case 0x7165736E6F636E69:
		switch(wp[1]){
		case 0x0000796C746E6575:return 1;
		default:return 0;
		}
	case 0x716962696C6C756E:
		switch(wp[1]){
		case 0x000073756F746975:return 1;
		default:return 0;
		}
	case 0x716E696C65726E75:
		switch(wp[1]){
		case 0x0000646568736975:return 1;
		default:return 0;
		}
	case 0x716F68746870616E:
		switch(wp[1]){
		case 0x0000656E6F6E6975:return 1;
		default:return 0;
		}
	case 0x716F6C6963756170:
		switch(wp[1]){
		case 0x0000796C746E6575:return 1;
		default:return 0;
		}
	case 0x716F6C696E67616D:
		switch(wp[1]){
		case 0x0000796C746E6575:return 1;
		default:return 0;
		}
	case 0x716F6C6C6F636E75:
		switch(wp[1]){
		case 0x0000796C6C616975:return 1;
		default:return 0;
		}
	case 0x7173616D69746E61:
		switch(wp[1]){
		case 0x0000656461726575:return 1;
		default:return 0;
		}
	case 0x7173657574617473:
		switch(wp[1]){
		case 0x00007373656E6575:return 1;
		default:return 0;
		}
	case 0x71736F6475657370:
		switch(wp[1]){
		case 0x00006574616D6175:return 1;
		default:return 0;
		}
	case 0x71736F6C75706170:
		switch(wp[1]){
		case 0x000073756F6D6175:return 1;
		default:return 0;
		}
	case 0x7178657265707573:
		switch(wp[1]){
		case 0x0000657469736975:return 1;
		default:return 0;
		}
	case 0x7261626C65656877:
		switch(wp[1]){
		case 0x00006C7566776F72:return 1;
		default:return 0;
		}
	case 0x7261626D656E6F6E:
		switch(wp[1]){
		case 0x00006E6F6974616B:return 1;
		default:return 0;
		}
	case 0x7261626D65736964:
		switch(wp[1]){
		case 0x00006E6F6974616B:return 1;
		default:return 0;
		}
	case 0x7261626F7263696D:
		switch(wp[1]){
		case 0x000068706172676F:return 1;
		default:return 0;
		}
	case 0x7261626F72647968:
		switch(wp[1]){
		case 0x0000726574656D6F:return 1;
		default:return 0;
		}
	case 0x7261627265707968:
		switch(wp[1]){
		case 0x000073756F726162:return 1;
		default:return 0;
		}
	case 0x72616369746C756D:
		switch(wp[1]){
		case 0x0000646574616E69:return 1;
		default:return 0;
		}
	case 0x7261636974736574:
		switch(wp[1]){
		case 0x00006574616E6964:return 1;
		default:return 0;
		}
	case 0x7261636974736F63:
		switch(wp[1]){
		case 0x00006567616C6974:return 1;
		default:return 0;
		}
	case 0x7261636E69736964:
		switch(wp[1]){
		case 0x0000657461726563:return 1;
		case 0x00006E6F6974616E:return 1;
		default:return 0;
		}
	case 0x7261636F63726173:
		switch(wp[1]){
		case 0x0000616D6F6E6963:return 1;
		default:return 0;
		}
	case 0x7261636F6574736F:
		switch(wp[1]){
		case 0x0000616D6F6E6963:return 1;
		default:return 0;
		}
	case 0x7261636F666C7573:
		switch(wp[1]){
		case 0x00006564696D6162:return 1;
		case 0x00006564696D6962:return 1;
		case 0x00006574616C6F62:return 1;
		default:return 0;
		}
	case 0x7261636F6E656461:
		switch(wp[1]){
		case 0x0000616D6F6E6963:return 1;
		default:return 0;
		}
	case 0x7261636F6E697571:
		switch(wp[1]){
		case 0x00006D75696E6F62:return 1;
		default:return 0;
		}
	case 0x7261636F72626966:
		switch(wp[1]){
		case 0x0000616D6F6E6963:return 1;
		case 0x00006567616C6974:return 1;
		default:return 0;
		}
	case 0x7261636F72647968:
		switch(wp[1]){
		case 0x00006574616E6F62:return 1;
		case 0x000073756F6E6F62:return 1;
		default:return 0;
		}
	case 0x7261636F7274656D:
		switch(wp[1]){
		case 0x0000616D6F6E6963:return 1;
		default:return 0;
		}
	case 0x7261636F7473616D:
		switch(wp[1]){
		case 0x0000616D6F6E6963:return 1;
		default:return 0;
		}
	case 0x7261636F74737963:
		switch(wp[1]){
		case 0x0000616D6F6E6963:return 1;
		default:return 0;
		}
	case 0x7261636F74756564:
		switch(wp[1]){
		case 0x00006574616E6F62:return 1;
		default:return 0;
		}
	case 0x7261636F79726163:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x7261637265707573:
		switch(wp[1]){
		case 0x00006574616E6F62:return 1;
		case 0x0000657A696E6F62:return 1;
		case 0x0000706968736F67:return 1;
		default:return 0;
		}
	case 0x7261657269757173:
		switch(wp[1]){
		case 0x00006C6163696863:return 1;
		default:return 0;
		}
	case 0x726166656B6F6D73:
		switch(wp[1]){
		case 0x000073676E696874:return 1;
		default:return 0;
		}
	case 0x72616669746C756D:
		switch(wp[1]){
		case 0x0000796C73756F69:return 1;
		default:return 0;
		}
	case 0x7261676572736964:
		switch(wp[1]){
		case 0x0000796C6C756664:return 1;
		default:return 0;
		}
	case 0x726168637265766F:
		switch(wp[1]){
		case 0x0000656C62617469:return 1;
		case 0x0000746E656D6567:return 1;
		case 0x0000796C62617469:return 1;
		default:return 0;
		}
	case 0x7261687069726570:
		switch(wp[1]){
		case 0x00006C6165676E79:return 1;
		default:return 0;
		}
	case 0x726168706F707968:
		switch(wp[1]){
		case 0x00006C6165676E79:return 1;
		default:return 0;
		}
	case 0x726168706F73616E:
		switch(wp[1]){
		case 0x00006C6165676E79:return 1;
		default:return 0;
		}
	case 0x7261687074736F70:
		switch(wp[1]){
		case 0x00006C6165676E79:return 1;
		default:return 0;
		}
	case 0x72616870796C6F70:
		switch(wp[1]){
		case 0x000074736963616D:return 1;
		default:return 0;
		}
	case 0x726168746E697073:
		switch(wp[1]){
		case 0x000065706F637369:return 1;
		default:return 0;
		}
	case 0x72616C6172746E69:
		switch(wp[1]){
		case 0x00006C6165676E79:return 1;
		default:return 0;
		}
	case 0x72616C6C69706163:
		switch(wp[1]){
		case 0x0000726574656D69:return 1;
		default:return 0;
		}
	case 0x72616C6E656F7270:
		switch(wp[1]){
		case 0x0000746E656D6567:return 1;
		default:return 0;
		}
	case 0x72616C6F706E6F6E:
		switch(wp[1]){
		case 0x0000656C62617A69:return 1;
		default:return 0;
		}
	case 0x72616C6F72746572:
		switch(wp[1]){
		case 0x00006C6165676E79:return 1;
		default:return 0;
		}
	case 0x72616C7265707573:
		switch(wp[1]){
		case 0x00006C6165676E79:return 1;
		default:return 0;
		}
	case 0x72616C7265746E69:
		switch(wp[1]){
		case 0x00006E6F69746164:return 1;
		default:return 0;
		}
	case 0x72616C79646E6F63:
		switch(wp[1]){
		case 0x000073756F726874:return 1;
		default:return 0;
		}
	case 0x72616D7265707573:
		switch(wp[1]){
		case 0x000073756F6C6576:return 1;
		default:return 0;
		}
	case 0x72616E656C6C696D:
		switch(wp[1]){
		case 0x00006D73696E6169:return 1;
		default:return 0;
		}
	case 0x72616E65746E6563:
		switch(wp[1]){
		case 0x00006D73696E6169:return 1;
		default:return 0;
		}
	case 0x72616E6F6D6E6F6E:
		switch(wp[1]){
		case 0x00006C6163696863:return 1;
		default:return 0;
		}
	case 0x72616E6F6D6F7270:
		switch(wp[1]){
		case 0x00006C6163696863:return 1;
		default:return 0;
		}
	case 0x72616F63696C6973:
		switch(wp[1]){
		case 0x00006564696E6573:return 1;
		default:return 0;
		}
	case 0x72616F636973756D:
		switch(wp[1]){
		case 0x0000636974736974:return 1;
		default:return 0;
		}
	case 0x72616F6475657370:
		switch(wp[1]){
		case 0x0000636974736974:return 1;
		case 0x00006D7369616863:return 1;
		case 0x0000747369616863:return 1;
		default:return 0;
		}
	case 0x72616F68706C7573:
		switch(wp[1]){
		case 0x00006574696E6573:return 1;
		default:return 0;
		}
	case 0x72616F6964726163:
		switch(wp[1]){
		case 0x00006C6169726574:return 1;
		default:return 0;
		}
	case 0x7261706172746E69:
		switch(wp[1]){
		case 0x00006C616968636F:return 1;
		default:return 0;
		}
	case 0x7261706172747865:
		switch(wp[1]){
		case 0x00006C616968636F:return 1;
		default:return 0;
		}
	case 0x726170646E617267:
		switch(wp[1]){
		case 0x0000656761746E65:return 1;
		default:return 0;
		}
	case 0x7261706572706E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x7261706974786573:
		switch(wp[1]){
		case 0x00006E6F69746974:return 1;
		default:return 0;
		}
	case 0x7261706F64697269:
		switch(wp[1]){
		case 0x0000736973796C61:return 1;
		default:return 0;
		}
	case 0x7261706F69676E61:
		switch(wp[1]){
		case 0x0000636974796C61:return 1;
		case 0x0000736973796C61:return 1;
		default:return 0;
		}
	case 0x7261706F6C65796D:
		switch(wp[1]){
		case 0x0000736973796C61:return 1;
		default:return 0;
		}
	case 0x7261706F6D65616C:
		switch(wp[1]){
		case 0x0000736973796C61:return 1;
		default:return 0;
		}
	case 0x7261706F7263696D:
		switch(wp[1]){
		case 0x0000636974697361:return 1;
		default:return 0;
		}
	case 0x7261706F7274656D:
		switch(wp[1]){
		case 0x0000736973796C61:return 1;
		default:return 0;
		}
	case 0x7261706F7275656E:
		switch(wp[1]){
		case 0x0000636974796C61:return 1;
		case 0x0000736973796C61:return 1;
		default:return 0;
		}
	case 0x7261706F736E6573:
		switch(wp[1]){
		case 0x0000736973796C61:return 1;
		default:return 0;
		}
	case 0x7261706F74737963:
		switch(wp[1]){
		case 0x0000736973796C61:return 1;
		default:return 0;
		}
	case 0x7261707265707573:
		switch(wp[1]){
		case 0x0000636974697361:return 1;
		case 0x0000746E756F6D61:return 1;
		default:return 0;
		}
	case 0x7261707265707968:
		switch(wp[1]){
		case 0x0000636974697361:return 1;
		default:return 0;
		}
	case 0x7261707265746E69:
		switch(wp[1]){
		case 0x0000656C61746569:return 1;
		default:return 0;
		}
	case 0x726170736E617274:
		switch(wp[1]){
		case 0x0000657A69746E65:return 1;
		default:return 0;
		}
	case 0x726172646E6F6863:
		switch(wp[1]){
		case 0x00006574696E6573:return 1;
		default:return 0;
		}
	case 0x72617369646E6F6E:
		switch(wp[1]){
		case 0x0000746E656D616D:return 1;
		default:return 0;
		}
	case 0x72617369646F7270:
		switch(wp[1]){
		case 0x0000746E656D616D:return 1;
		default:return 0;
		}
	case 0x7261736F72647968:
		switch(wp[1]){
		case 0x0000656C65636F63:return 1;
		default:return 0;
		}
	case 0x7261737265707573:
		switch(wp[1]){
		case 0x0000636974736163:return 1;
		default:return 0;
		}
	case 0x726173736563656E:
		switch(wp[1]){
		case 0x00006D73696E6169:return 1;
		default:return 0;
		}
	case 0x7261746365736E75:
		switch(wp[1]){
		case 0x0000657A696E6169:return 1;
		case 0x00006D73696E6169:return 1;
		default:return 0;
		}
	case 0x7261746569636F73:
		switch(wp[1]){
		case 0x00006D73696E6169:return 1;
		default:return 0;
		}
	case 0x726174656C6F7270:
		switch(wp[1]){
		case 0x0000657A696E6169:return 1;
		case 0x00006D73696E6169:return 1;
		case 0x00006D7369746169:return 1;
		default:return 0;
		}
	case 0x726174696C616765:
		switch(wp[1]){
		case 0x00006D73696E6169:return 1;
		default:return 0;
		}
	case 0x726174696C697475:
		switch(wp[1]){
		case 0x0000657A696E6169:return 1;
		case 0x00006D73696E6169:return 1;
		case 0x00007473696E6169:return 1;
		default:return 0;
		}
	case 0x726174726562696C:
		switch(wp[1]){
		case 0x00006D73696E6169:return 1;
		default:return 0;
		}
	case 0x72617473696D6573:
		switch(wp[1]){
		case 0x00006E6F69746176:return 1;
		default:return 0;
		}
	case 0x7261757169746E61:
		switch(wp[1]){
		case 0x0000657A696E6169:return 1;
		case 0x00006D73696E6169:return 1;
		default:return 0;
		}
	case 0x7262656B69727473:
		switch(wp[1]){
		case 0x0000676E696B6165:return 1;
		default:return 0;
		}
	case 0x72626D65796C6F70:
		switch(wp[1]){
		case 0x00006574616E6F79:return 1;
		default:return 0;
		}
	case 0x72626F6361726F63:
		switch(wp[1]){
		case 0x00006C6169686361:return 1;
		default:return 0;
		}
	case 0x72626F6475657370:
		switch(wp[1]){
		case 0x0000616968636E61:return 1;
		case 0x00006574696B6F6F:return 1;
		case 0x00006C6169686361:return 1;
		case 0x00006D7569686361:return 1;
		default:return 0;
		}
	case 0x72626F6863697274:
		switch(wp[1]){
		case 0x0000616968636E61:return 1;
		default:return 0;
		}
	case 0x72626F6C6C796870:
		switch(wp[1]){
		case 0x0000616968636E61:return 1;
		default:return 0;
		}
	case 0x72626F6E69746361:
		switch(wp[1]){
		case 0x0000616968636E61:return 1;
		default:return 0;
		}
	case 0x72626F7268747261:
		switch(wp[1]){
		case 0x0000616968636E61:return 1;
		default:return 0;
		}
	case 0x72626F7275656C70:
		switch(wp[1]){
		case 0x0000616968636E61:return 1;
		default:return 0;
		}
	case 0x7262756C7265766F:
		switch(wp[1]){
		case 0x00006F6974616369:return 1;
		default:return 0;
		}
	case 0x7263617368637261:
		switch(wp[1]){
		case 0x0000726563696669:return 1;
		default:return 0;
		}
	case 0x7263656168637261:
		switch(wp[1]){
		case 0x0000657461696E61:return 1;
		default:return 0;
		}
	case 0x7263657269746E61:
		switch(wp[1]){
		case 0x0000676E69746975:return 1;
		default:return 0;
		}
	case 0x7263696D796C6F70:
		switch(wp[1]){
		case 0x000065706F63736F:return 1;
		default:return 0;
		}
	case 0x72636D7563726963:
		switch(wp[1]){
		case 0x0000746E65637365:return 1;
		default:return 0;
		}
	case 0x72636F63656E7967:
		switch(wp[1]){
		case 0x00006C6163697461:return 1;
		default:return 0;
		}
	case 0x72636F6475657370:
		switch(wp[1]){
		case 0x00006C6163697469:return 1;
		default:return 0;
		}
	case 0x72636F7079686E75:
		switch(wp[1]){
		case 0x00006C6163697469:return 1;
		default:return 0;
		}
	case 0x72636F7269656E6F:
		switch(wp[1]){
		case 0x00006C6163697469:return 1;
		default:return 0;
		}
	case 0x72636F72706E6F6E:
		switch(wp[1]){
		case 0x00006E6F69746165:return 1;
		default:return 0;
		}
	case 0x72636F7473697261:
		switch(wp[1]){
		case 0x00006C6163697461:return 1;
		default:return 0;
		}
	case 0x7263736275736572:
		switch(wp[1]){
		case 0x00006E6F69747069:return 1;
		default:return 0;
		}
	case 0x7263736564657270:
		switch(wp[1]){
		case 0x00006E6F69747069:return 1;
		default:return 0;
		}
	case 0x726373656473696D:
		switch(wp[1]){
		case 0x0000657669747069:return 1;
		case 0x00006E6F69747069:return 1;
		default:return 0;
		}
	case 0x7263736572706D69:
		switch(wp[1]){
		case 0x0000656C62616269:return 1;
		default:return 0;
		}
	case 0x7263736E69657270:
		switch(wp[1]){
		case 0x00006E6F69747069:return 1;
		default:return 0;
		}
	case 0x7263736F72706E75:
		switch(wp[1]){
		case 0x0000656C62616269:return 1;
		default:return 0;
		}
	case 0x7263737265706D69:
		switch(wp[1]){
		case 0x0000656C62617475:return 1;
		default:return 0;
		}
	case 0x7263737265707573:
		switch(wp[1]){
		case 0x00006E6F69747069:return 1;
		default:return 0;
		}
	case 0x7263737265746E69:
		switch(wp[1]){
		case 0x00006E6F69747069:return 1;
		default:return 0;
		}
	case 0x7263756165727562:
		switch(wp[1]){
		case 0x00006C6163697461:return 1;
		default:return 0;
		}
	case 0x7264687469776E75:
		switch(wp[1]){
		case 0x0000656C62617761:return 1;
		default:return 0;
		}
	case 0x72646E616D657274:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x72646E61796C6F70:
		switch(wp[1]){
		case 0x00006D73696E6169:return 1;
		default:return 0;
		}
	case 0x72646F636973756D:
		switch(wp[1]){
		case 0x0000636974616D61:return 1;
		default:return 0;
		}
	case 0x72646F6475657370:
		switch(wp[1]){
		case 0x0000636974616D61:return 1;
		default:return 0;
		}
	case 0x72646F6C656D6E75:
		switch(wp[1]){
		case 0x0000636974616D61:return 1;
		default:return 0;
		}
	case 0x726479686F696874:
		switch(wp[1]){
		case 0x0000736973796C6F:return 1;
		default:return 0;
		}
	case 0x726479686F726561:
		switch(wp[1]){
		case 0x0000656E616C706F:return 1;
		case 0x000079687461706F:return 1;
		default:return 0;
		}
	case 0x726479687A6E6562:
		switch(wp[1]){
		case 0x000063696D61786F:return 1;
		default:return 0;
		}
	case 0x72656269676E697A:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x726562697A6E697A:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x7265626D756E6E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x7265627574657270:
		switch(wp[1]){
		case 0x000073756F6C7563:return 1;
		default:return 0;
		}
	case 0x7265627574696E75:
		switch(wp[1]){
		case 0x00006574616C7563:return 1;
		default:return 0;
		}
	case 0x7265627574697065:
		switch(wp[1]){
		case 0x000073756F6C7563:return 1;
		default:return 0;
		}
	case 0x7265627574697274:
		switch(wp[1]){
		case 0x00006D73696C7563:return 1;
		default:return 0;
		}
	case 0x72656275746E6F6E:
		switch(wp[1]){
		case 0x000073756F6C7563:return 1;
		default:return 0;
		}
	case 0x72656275746F7270:
		switch(wp[1]){
		case 0x00006C6169746E61:return 1;
		default:return 0;
		}
	case 0x7265627574786573:
		switch(wp[1]){
		case 0x00006574616C7563:return 1;
		default:return 0;
		}
	case 0x7265627761727473:
		switch(wp[1]){
		case 0x0000656B696C7972:return 1;
		default:return 0;
		}
	case 0x7265636974737963:
		switch(wp[1]){
		case 0x00006C6164696F63:return 1;
		default:return 0;
		}
	case 0x7265636F64697269:
		switch(wp[1]){
		case 0x0000636974697461:return 1;
		default:return 0;
		}
	case 0x7265636F68636E6F:
		switch(wp[1]){
		case 0x0000736973616963:return 1;
		default:return 0;
		}
	case 0x7265636F6874726F:
		switch(wp[1]){
		case 0x0000636974697461:return 1;
		default:return 0;
		}
	case 0x7265636F6E696872:
		switch(wp[1]){
		case 0x0000656B696C736F:return 1;
		default:return 0;
		}
	case 0x7265636F72647968:
		switch(wp[1]){
		case 0x0000657469737375:return 1;
		default:return 0;
		}
	case 0x7265636F74727963:
		switch(wp[1]){
		case 0x0000636974697461:return 1;
		default:return 0;
		}
	case 0x7265637369646E69:
		switch(wp[1]){
		case 0x0000656C62697470:return 1;
		case 0x0000796C62697470:return 1;
		default:return 0;
		}
	case 0x7265637369646E75:
		switch(wp[1]){
		case 0x0000796C676E696E:return 1;
		default:return 0;
		}
	case 0x72656378656E6F6E:
		switch(wp[1]){
		case 0x0000656C62697470:return 1;
		default:return 0;
		}
	case 0x7265646C69776562:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x7265646E61757173:
		switch(wp[1]){
		case 0x00006361696E616D:return 1;
		default:return 0;
		}
	case 0x7265646E6F706D69:
		switch(wp[1]){
		case 0x000061696C696261:return 1;
		default:return 0;
		}
	case 0x7265646F63616C70:
		switch(wp[1]){
		case 0x000073756F74616D:return 1;
		default:return 0;
		}
	case 0x7265646F6375656C:
		switch(wp[1]){
		case 0x000073756F74616D:return 1;
		default:return 0;
		}
	case 0x7265646F6574736F:
		switch(wp[1]){
		case 0x000073756F74616D:return 1;
		default:return 0;
		}
	case 0x7265646F6D6F7270:
		switch(wp[1]){
		case 0x000063697473696E:return 1;
		default:return 0;
		}
	case 0x7265646F746F6870:
		switch(wp[1]){
		case 0x00006D736974616D:return 1;
		default:return 0;
		}
	case 0x7265646F7470656C:
		switch(wp[1]){
		case 0x000073756F74616D:return 1;
		default:return 0;
		}
	case 0x726564726F736964:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		case 0x00007373656E696C:return 1;
		default:return 0;
		}
	case 0x7265647968636170:
		switch(wp[1]){
		case 0x000064696F74616D:return 1;
		case 0x000073756F74616D:return 1;
		default:return 0;
		}
	case 0x72656665646E6F6E:
		switch(wp[1]){
		case 0x00006C6169746E65:return 1;
		default:return 0;
		}
	case 0x7265666669646E69:
		switch(wp[1]){
		case 0x00006C6169746E65:return 1;
		case 0x00006D7369746E65:return 1;
		case 0x0000747369746E65:return 1;
		default:return 0;
		}
	case 0x7265666669646E75:
		switch(wp[1]){
		case 0x00006C6169746E65:return 1;
		default:return 0;
		}
	case 0x7265666E65737261:
		switch(wp[1]){
		case 0x000065736F746172:return 1;
		default:return 0;
		}
	case 0x7265667265746E69:
		switch(wp[1]){
		case 0x00006C6169746E65:return 1;
		case 0x0000726574656D6F:return 1;
		case 0x0000797274656D6F:return 1;
		case 0x00007974696C6974:return 1;
		default:return 0;
		}
	case 0x726566736E617274:
		switch(wp[1]){
		case 0x0000657079746F72:return 1;
		case 0x00006C6169746E65:return 1;
		default:return 0;
		}
	case 0x7265676F666C7573:
		switch(wp[1]){
		case 0x00006574616E616D:return 1;
		default:return 0;
		}
	case 0x7265676F6C796870:
		switch(wp[1]){
		case 0x00006D7369746E6F:return 1;
		default:return 0;
		}
	case 0x726568636E657274:
		switch(wp[1]){
		case 0x0000676E696B616D:return 1;
		default:return 0;
		}
	case 0x726568636E696863:
		switch(wp[1]){
		case 0x0000656568636E69:return 1;
		default:return 0;
		}
	case 0x7265686968637261:
		switch(wp[1]){
		case 0x00006C6163697465:return 1;
		default:return 0;
		}
	case 0x7265686E69657270:
		switch(wp[1]){
		case 0x000065636E617469:return 1;
		default:return 0;
		}
	case 0x7265686E696E6F6E:
		switch(wp[1]){
		case 0x0000656C62617469:return 1;
		default:return 0;
		}
	case 0x7265686E69736964:
		switch(wp[1]){
		case 0x000065636E617469:return 1;
		case 0x0000656C62617469:return 1;
		default:return 0;
		}
	case 0x7265687061726170:
		switch(wp[1]){
		case 0x00006E61696C616E:return 1;
		default:return 0;
		}
	case 0x7265687069726570:
		switch(wp[1]){
		case 0x000065736F68706F:return 1;
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x7265687073627573:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x7265687461666E75:
		switch(wp[1]){
		case 0x00007373656E696C:return 1;
		default:return 0;
		}
	case 0x7265687461696373:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x7265687461696461:
		switch(wp[1]){
		case 0x000073756F6E616D:return 1;
		default:return 0;
		}
	case 0x72656874656C6574:
		switch(wp[1]){
		case 0x00006D6172676F6D:return 1;
		default:return 0;
		}
	case 0x7265687468706964:
		switch(wp[1]){
		case 0x00006E69786F746F:return 1;
		default:return 0;
		}
	case 0x726568746F696373:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x726568746F6E656F:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x7265687475656C65:
		switch(wp[1]){
		case 0x000061696E616D6F:return 1;
		case 0x00006870726F6D6F:return 1;
		default:return 0;
		}
	case 0x726569667265766F:
		switch(wp[1]){
		case 0x00007373656E6563:return 1;
		default:return 0;
		}
	case 0x72656B7265707968:
		switch(wp[1]){
		case 0x00007369736F7461:return 1;
		default:return 0;
		}
	case 0x72656C61766F7369:
		switch(wp[1]){
		case 0x00006574616E6169:return 1;
		default:return 0;
		}
	case 0x72656C626D696874:
		switch(wp[1]){
		case 0x0000676E69676769:return 1;
		case 0x0000797265676769:return 1;
		default:return 0;
		}
	case 0x72656D6172666E69:
		switch(wp[1]){
		case 0x00006C6169727563:return 1;
		case 0x00006E6169727563:return 1;
		default:return 0;
		}
	case 0x72656D6D6F636E75:
		switch(wp[1]){
		case 0x0000656C62616963:return 1;
		case 0x0000796C6C616963:return 1;
		default:return 0;
		}
	case 0x72656D6F65757161:
		switch(wp[1]){
		case 0x00006C6169727563:return 1;
		default:return 0;
		}
	case 0x72656D6F74756174:
		switch(wp[1]){
		case 0x0000656C62617A69:return 1;
		default:return 0;
		}
	case 0x72656D7265746E69:
		switch(wp[1]){
		case 0x00006C6169727563:return 1;
		default:return 0;
		}
	case 0x72656E6567627573:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x72656E6569746E61:
		switch(wp[1]){
		case 0x0000636974736967:return 1;
		default:return 0;
		}
	case 0x72656E6963627573:
		switch(wp[1]){
		case 0x000073756F697469:return 1;
		default:return 0;
		}
	case 0x72656E6E616D6E75:
		switch(wp[1]){
		case 0x00007373656E696C:return 1;
		default:return 0;
		}
	case 0x72656F6475657370:
		switch(wp[1]){
		case 0x00006E6972687479:return 1;
		default:return 0;
		}
	case 0x72656F6C6C796870:
		switch(wp[1]){
		case 0x00006E6972687479:return 1;
		default:return 0;
		}
	case 0x72657069746C756D:
		switch(wp[1]){
		case 0x0000657461726F66:return 1;
		default:return 0;
		}
	case 0x7265706F6964656D:
		switch(wp[1]){
		case 0x0000657461726F66:return 1;
		default:return 0;
		}
	case 0x7265706F7263696D:
		switch(wp[1]){
		case 0x0000636974696874:return 1;
		default:return 0;
		}
	case 0x7265706F746F6870:
		switch(wp[1]){
		case 0x00006D7369646F69:return 1;
		case 0x0000726574656D69:return 1;
		default:return 0;
		}
	case 0x7265706F746F7270:
		switch(wp[1]){
		case 0x00006E616972616C:return 1;
		default:return 0;
		}
	case 0x72657073796C6F70:
		switch(wp[1]){
		case 0x000073756F74616D:return 1;
		default:return 0;
		}
	case 0x7265707573627573:
		switch(wp[1]){
		case 0x00006C6169636966:return 1;
		default:return 0;
		}
	case 0x7265707573657270:
		switch(wp[1]){
		case 0x00006C6169636966:return 1;
		case 0x00006E6F69736976:return 1;
		case 0x000073756F756C66:return 1;
		case 0x0000797469756C66:return 1;
		default:return 0;
		}
	case 0x72657075736F7270:
		switch(wp[1]){
		case 0x00006E6F69736976:return 1;
		default:return 0;
		}
	case 0x72657078656E6F6E:
		switch(wp[1]){
		case 0x00006465636E6569:return 1;
		default:return 0;
		}
	case 0x726570796874756F:
		switch(wp[1]){
		case 0x0000657A696C6F62:return 1;
		default:return 0;
		}
	case 0x726573626F657270:
		switch(wp[1]){
		case 0x00006E6F69746176:return 1;
		default:return 0;
		}
	case 0x726573626F6C616D:
		switch(wp[1]){
		case 0x00006E6F69746176:return 1;
		default:return 0;
		}
	case 0x726573626F6E6F6E:
		switch(wp[1]){
		case 0x00006E6F69746176:return 1;
		default:return 0;
		}
	case 0x72657365726E6F6E:
		switch(wp[1]){
		case 0x00006E6F69746176:return 1;
		default:return 0;
		}
	case 0x7265736E6F636E75:
		switch(wp[1]){
		case 0x0000657669746176:return 1;
		default:return 0;
		}
	case 0x7265736F72746572:
		switch(wp[1]){
		case 0x00006574616C7572:return 1;
		default:return 0;
		}
	case 0x7265736F74796870:
		switch(wp[1]){
		case 0x00006369676F6C6F:return 1;
		default:return 0;
		}
	case 0x726574616C697274:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x726574616C6C6F63:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x726574616D6E6F6E:
		switch(wp[1]){
		case 0x00007974696C6169:return 1;
		default:return 0;
		}
	case 0x7265746172666E75:
		switch(wp[1]){
		case 0x0000676E697A696E:return 1;
		default:return 0;
		}
	case 0x7265746564627573:
		switch(wp[1]){
		case 0x0000746E616E696D:return 1;
		default:return 0;
		}
	case 0x7265746564657270:
		switch(wp[1]){
		case 0x00006574616E696D:return 1;
		case 0x00006D73696E696D:return 1;
		case 0x0000746E616E696D:return 1;
		default:return 0;
		}
	case 0x72657465646E6F6E:
		switch(wp[1]){
		case 0x00007473696E696D:return 1;
		default:return 0;
		}
	case 0x7265746572706E75:
		switch(wp[1]){
		case 0x000064657474696D:return 1;
		default:return 0;
		}
	case 0x7265746867756164:
		switch(wp[1]){
		case 0x00007373656E696C:return 1;
		default:return 0;
		}
	case 0x726574696C657270:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x726574696C697274:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x7265746C61627573:
		switch(wp[1]){
		case 0x0000676E6974616E:return 1;
		case 0x00006E6F6974616E:return 1;
		case 0x0000796C6574616E:return 1;
		default:return 0;
		}
	case 0x7265746E6573656D:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x7265746E69627573:
		switch(wp[1]){
		case 0x0000726F73736563:return 1;
		default:return 0;
		}
	case 0x7265746E69657270:
		switch(wp[1]){
		case 0x000065676E616863:return 1;
		case 0x0000657372756F63:return 1;
		default:return 0;
		}
	case 0x7265746E696E6F6E:
		switch(wp[1]){
		case 0x0000646574707572:return 1;
		case 0x0000657372756F63:return 1;
		case 0x0000676E69726566:return 1;
		case 0x0000726F74636573:return 1;
		default:return 0;
		}
	case 0x7265746E69736964:
		switch(wp[1]){
		case 0x0000676E69747365:return 1;
		default:return 0;
		}
	case 0x7265746E6973696D:
		switch(wp[1]){
		case 0x0000726574657270:return 1;
		default:return 0;
		}
	case 0x726574706F646E65:
		switch(wp[1]){
		case 0x00006369746F6779:return 1;
		default:return 0;
		}
	case 0x7265747265707573:
		switch(wp[1]){
		case 0x00006E61656E6172:return 1;
		default:return 0;
		}
	case 0x726574736967616D:
		switch(wp[1]){
		case 0x00007974696C6169:return 1;
		default:return 0;
		}
	case 0x72657473696E696D:
		switch(wp[1]){
		case 0x00006D73696C6169:return 1;
		case 0x00007473696C6169:return 1;
		case 0x00007974696C6169:return 1;
		default:return 0;
		}
	case 0x72657473696F6C63:
		switch(wp[1]){
		case 0x00007373656E696C:return 1;
		default:return 0;
		}
	case 0x7265747369726570:
		switch(wp[1]){
		case 0x00006870726F6D6F:return 1;
		case 0x00006E61646F706F:return 1;
		case 0x0000796C6968706F:return 1;
		default:return 0;
		}
	case 0x7265747369736E75:
		switch(wp[1]){
		case 0x00007373656E696C:return 1;
		default:return 0;
		}
	case 0x726574736F727970:
		switch(wp[1]){
		case 0x0000657079746F65:return 1;
		default:return 0;
		}
	case 0x726574736F73656D:
		switch(wp[1]){
		case 0x00006C617262656E:return 1;
		default:return 0;
		}
	case 0x7265747374736F70:
		switch(wp[1]){
		case 0x000073756F726F74:return 1;
		default:return 0;
		}
	case 0x72657473796D6E75:
		switch(wp[1]){
		case 0x0000796C73756F69:return 1;
		default:return 0;
		}
	case 0x72657474656C6E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x72657478656E6F6E:
		switch(wp[1]){
		case 0x00007974696C616E:return 1;
		case 0x0000797469726F69:return 1;
		default:return 0;
		}
	case 0x726575716E697571:
		switch(wp[1]){
		case 0x0000657461696461:return 1;
		default:return 0;
		}
	case 0x7265766172746E69:
		switch(wp[1]){
		case 0x00006C6172626574:return 1;
		default:return 0;
		}
	case 0x72657664616F7270:
		switch(wp[1]){
		case 0x0000676E69736974:return 1;
		default:return 0;
		}
	case 0x7265766967726574:
		switch(wp[1]){
		case 0x00006E6F69746173:return 1;
		case 0x000079726F746173:return 1;
		default:return 0;
		}
	case 0x7265766F626D756C:
		switch(wp[1]){
		case 0x00006C6172626574:return 1;
		default:return 0;
		}
	case 0x7265766F6C637963:
		switch(wp[1]){
		case 0x00006C6172626574:return 1;
		default:return 0;
		}
	case 0x7265766F72636173:
		switch(wp[1]){
		case 0x00006C6172626574:return 1;
		default:return 0;
		}
	case 0x7265766F72746E69:
		switch(wp[1]){
		case 0x0000796C65766973:return 1;
		default:return 0;
		}
	case 0x7265766F74656361:
		switch(wp[1]){
		case 0x0000656E6F727461:return 1;
		default:return 0;
		}
	case 0x7265766F746F7270:
		switch(wp[1]){
		case 0x0000656E69727461:return 1;
		case 0x00006C6172626574:return 1;
		default:return 0;
		}
	case 0x7265766F74736F63:
		switch(wp[1]){
		case 0x00006C6172626574:return 1;
		default:return 0;
		}
	case 0x7265767265746E69:
		switch(wp[1]){
		case 0x00006C6172626574:return 1;
		default:return 0;
		}
	case 0x726576736E617274:
		switch(wp[1]){
		case 0x0000657461726562:return 1;
		case 0x00006E6F69746162:return 1;
		case 0x00007373656E6573:return 1;
		case 0x00007974696C6173:return 1;
		default:return 0;
		}
	case 0x72666669646E6F6E:
		switch(wp[1]){
		case 0x0000657669746361:return 1;
		default:return 0;
		}
	case 0x7267617265746E69:
		switch(wp[1]){
		case 0x0000746E656D6565:return 1;
		default:return 0;
		}
	case 0x72676172746E6F63:
		switch(wp[1]){
		case 0x0000746E65696465:return 1;
		default:return 0;
		}
	case 0x7267617369646E75:
		switch(wp[1]){
		case 0x0000656C62616565:return 1;
		default:return 0;
		}
	case 0x7267676169746E61:
		switch(wp[1]){
		case 0x0000657669737365:return 1;
		case 0x00006E6F69737365:return 1;
		default:return 0;
		}
	case 0x72676964696D6573:
		switch(wp[1]){
		case 0x00006E6F69737365:return 1;
		default:return 0;
		}
	case 0x7267697461727473:
		switch(wp[1]){
		case 0x0000747369687061:return 1;
		default:return 0;
		}
	case 0x7267697571656E69:
		switch(wp[1]){
		case 0x000072616C756E61:return 1;
		default:return 0;
		}
	case 0x72676E65646C7567:
		switch(wp[1]){
		case 0x00006E656863736F:return 1;
		default:return 0;
		}
	case 0x72676E656972616D:
		switch(wp[1]){
		case 0x00006E656863736F:return 1;
		default:return 0;
		}
	case 0x72676E6572726568:
		switch(wp[1]){
		case 0x0000657469646E75:return 1;
		default:return 0;
		}
	case 0x72676F636978656C:
		switch(wp[1]){
		case 0x00006E6169687061:return 1;
		case 0x0000747369687061:return 1;
		default:return 0;
		}
	case 0x72676F636C616863:
		switch(wp[1]){
		case 0x0000747369687061:return 1;
		default:return 0;
		}
	case 0x72676F6475657370:
		switch(wp[1]){
		case 0x0000656D65687061:return 1;
		case 0x0000657A69687061:return 1;
		default:return 0;
		}
	case 0x72676F65616C6170:
		switch(wp[1]){
		case 0x0000747369687061:return 1;
		default:return 0;
		}
	case 0x72676F6863796E6F:
		switch(wp[1]){
		case 0x00007369736F7079:return 1;
		default:return 0;
		}
	case 0x72676F6863797370:
		switch(wp[1]){
		case 0x0000747369687061:return 1;
		default:return 0;
		}
	case 0x72676F6870726F6D:
		switch(wp[1]){
		case 0x0000747369687061:return 1;
		default:return 0;
		}
	case 0x72676F696C626962:
		switch(wp[1]){
		case 0x0000657A69687061:return 1;
		default:return 0;
		}
	case 0x72676F6C65706D61:
		switch(wp[1]){
		case 0x0000747369687061:return 1;
		default:return 0;
		}
	case 0x72676F6E6165636F:
		switch(wp[1]){
		case 0x0000747369687061:return 1;
		default:return 0;
		}
	case 0x72676F6E6167726F:
		switch(wp[1]){
		case 0x0000747369687061:return 1;
		default:return 0;
		}
	case 0x72676F6E65687073:
		switch(wp[1]){
		case 0x0000747369687061:return 1;
		default:return 0;
		}
	case 0x72676F6E656C6573:
		switch(wp[1]){
		case 0x0000747369687061:return 1;
		default:return 0;
		}
	case 0x72676F7265646973:
		switch(wp[1]){
		case 0x0000747369687061:return 1;
		default:return 0;
		}
	case 0x72676F7268747261:
		switch(wp[1]){
		case 0x00007369736F7079:return 1;
		default:return 0;
		}
	case 0x72676F72706E6F6E:
		switch(wp[1]){
		case 0x0000657669737365:return 1;
		default:return 0;
		}
	case 0x72676F736F63756D:
		switch(wp[1]){
		case 0x000072616C756E61:return 1;
		default:return 0;
		}
	case 0x72676F7470797263:
		switch(wp[1]){
		case 0x0000747369687061:return 1;
		default:return 0;
		}
	case 0x72676F7472616863:
		switch(wp[1]){
		case 0x0000747369687061:return 1;
		default:return 0;
		}
	case 0x72676F7473616C62:
		switch(wp[1]){
		case 0x0000636974696E61:return 1;
		default:return 0;
		}
	case 0x72677265626C6973:
		switch(wp[1]){
		case 0x00006E656863736F:return 1;
		default:return 0;
		}
	case 0x7267726574657270:
		switch(wp[1]){
		case 0x00006E6F69737365:return 1;
		default:return 0;
		}
	case 0x7267776F64616873:
		switch(wp[1]){
		case 0x0000747369687061:return 1;
		default:return 0;
		}
	case 0x7268636172746574:
		switch(wp[1]){
		case 0x0000636974616D6F:return 1;
		default:return 0;
		}
	case 0x72686361746E6170:
		switch(wp[1]){
		case 0x0000636974616D6F:return 1;
		default:return 0;
		}
	case 0x7268636968706D61:
		switch(wp[1]){
		case 0x0000636974616D6F:return 1;
		default:return 0;
		}
	case 0x7268636E79736E75:
		switch(wp[1]){
		case 0x000064657A696E6F:return 1;
		default:return 0;
		}
	case 0x7268636F63616C70:
		switch(wp[1]){
		case 0x0000636974616D6F:return 1;
		default:return 0;
		}
	case 0x7268636F63636F63:
		switch(wp[1]){
		case 0x0000636974616D6F:return 1;
		default:return 0;
		}
	case 0x7268636F656D6F68:
		switch(wp[1]){
		case 0x0000636974616D6F:return 1;
		default:return 0;
		}
	case 0x7268636F67696C6F:
		switch(wp[1]){
		case 0x000061696D656D6F:return 1;
		default:return 0;
		}
	case 0x7268636F68746162:
		switch(wp[1]){
		case 0x0000636974616D6F:return 1;
		default:return 0;
		}
	case 0x7268636F6874696C:
		switch(wp[1]){
		case 0x0000636974616D6F:return 1;
		default:return 0;
		}
	case 0x7268636F6874726F:
		switch(wp[1]){
		case 0x0000636974616D6F:return 1;
		default:return 0;
		}
	case 0x7268636F73696E61:
		switch(wp[1]){
		case 0x0000636974616D6F:return 1;
		default:return 0;
		}
	case 0x7268636F746F6870:
		switch(wp[1]){
		case 0x0000636974616D6F:return 1;
		default:return 0;
		}
	case 0x726863796C626D61:
		switch(wp[1]){
		case 0x0000636974616D6F:return 1;
		default:return 0;
		}
	case 0x726870616D726568:
		switch(wp[1]){
		case 0x000063697469646F:return 1;
		default:return 0;
		}
	case 0x7268737265646E75:
		switch(wp[1]){
		case 0x0000797265766569:return 1;
		default:return 0;
		}
	case 0x7268746E61656874:
		switch(wp[1]){
		case 0x00006C616369706F:return 1;
		default:return 0;
		}
	case 0x7268746E6173696D:
		switch(wp[1]){
		case 0x00006C616369706F:return 1;
		default:return 0;
		}
	case 0x7268746E65736964:
		switch(wp[1]){
		case 0x0000746E656D6C61:return 1;
		default:return 0;
		}
	case 0x7268747261786F63:
		switch(wp[1]){
		case 0x000079687461706F:return 1;
		default:return 0;
		}
	case 0x7268747265646E75:
		switch(wp[1]){
		case 0x0000676E6974616F:return 1;
		default:return 0;
		}
	case 0x7268747265746E69:
		switch(wp[1]){
		case 0x0000676E69676E6F:return 1;
		default:return 0;
		}
	case 0x7269636F72647968:
		switch(wp[1]){
		case 0x0000656C65636F73:return 1;
		default:return 0;
		}
	case 0x7269637265746E69:
		switch(wp[1]){
		case 0x00006574616C7563:return 1;
		default:return 0;
		}
	case 0x7269647265707573:
		switch(wp[1]){
		case 0x00006E6F69746365:return 1;
		default:return 0;
		}
	case 0x7269666661657270:
		switch(wp[1]){
		case 0x000065766974616D:return 1;
		case 0x00006E6F6974616D:return 1;
		default:return 0;
		}
	case 0x72696666616E6F6E:
		switch(wp[1]){
		case 0x00006E6F6974616D:return 1;
		default:return 0;
		}
	case 0x7269666661736964:
		switch(wp[1]){
		case 0x000065766974616D:return 1;
		case 0x00006E6F6974616D:return 1;
		default:return 0;
		}
	case 0x7269666E6F636572:
		switch(wp[1]){
		case 0x00006E6F6974616D:return 1;
		default:return 0;
		}
	case 0x7269666E6F636E75:
		switch(wp[1]){
		case 0x000065766974616D:return 1;
		default:return 0;
		}
	case 0x72696863656C6574:
		switch(wp[1]){
		case 0x000068706172676F:return 1;
		default:return 0;
		}
	case 0x72696C6C656D616C:
		switch(wp[1]){
		case 0x00006C617274736F:return 1;
		default:return 0;
		}
	case 0x72696E696772616D:
		switch(wp[1]){
		case 0x00006C617274736F:return 1;
		default:return 0;
		}
	case 0x7269706D6574656D:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x726970736E617274:
		switch(wp[1]){
		case 0x0000726574656D6F:return 1;
		default:return 0;
		}
	case 0x7269746172726573:
		switch(wp[1]){
		case 0x00006C617274736F:return 1;
		default:return 0;
		}
	case 0x7269766F6574756C:
		switch(wp[1]){
		case 0x0000746E65637365:return 1;
		default:return 0;
		}
	case 0x7269767275636572:
		switch(wp[1]){
		case 0x00006C617274736F:return 1;
		default:return 0;
		}
	case 0x72697A6F72726566:
		switch(wp[1]){
		case 0x00006D75696E6F63:return 1;
		default:return 0;
		}
	case 0x726C696172657270:
		switch(wp[1]){
		case 0x000065746964616F:return 1;
		default:return 0;
		}
	case 0x726F62656C6C6568:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x726F62686769656E:
		switch(wp[1]){
		case 0x00007373656E696C:return 1;
		default:return 0;
		}
	case 0x726F627261627573:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		case 0x0000746E65637365:return 1;
		default:return 0;
		}
	case 0x726F627573657270:
		switch(wp[1]){
		case 0x00006574616E6964:return 1;
		default:return 0;
		}
	case 0x726F636172707573:
		switch(wp[1]){
		case 0x0000656E696C6C61:return 1;
		default:return 0;
		}
	case 0x726F636172746574:
		switch(wp[1]){
		case 0x0000656E696C6C61:return 1;
		default:return 0;
		}
	case 0x726F636172746E69:
		switch(wp[1]){
		case 0x00006C6165726F70:return 1;
		default:return 0;
		}
	case 0x726F636172747865:
		switch(wp[1]){
		case 0x00006C6165726F70:return 1;
		default:return 0;
		}
	case 0x726F636E69657270:
		switch(wp[1]){
		case 0x0000657461726F70:return 1;
		default:return 0;
		}
	case 0x726F636E69736964:
		switch(wp[1]){
		case 0x0000657461726F70:return 1;
		default:return 0;
		}
	case 0x726F636F72647968:
		switch(wp[1]){
		case 0x0000656E696C6C61:return 1;
		default:return 0;
		}
	case 0x726F637265746E69:
		switch(wp[1]){
		case 0x00006574616C6572:return 1;
		case 0x0000657461726F70:return 1;
		default:return 0;
		}
	case 0x726F63736E617274:
		switch(wp[1]){
		case 0x0000657461726F70:return 1;
		case 0x00006C6165726F70:return 1;
		default:return 0;
		}
	case 0x726F6461766C6173:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x726F64696863726F:
		switch(wp[1]){
		case 0x0000796870616872:return 1;
		default:return 0;
		}
	case 0x726F646E65627573:
		switch(wp[1]){
		case 0x0000746E656D6573:return 1;
		default:return 0;
		}
	case 0x726F646E656E6F6E:
		switch(wp[1]){
		case 0x0000746E656D6573:return 1;
		default:return 0;
		}
	case 0x726F646F6D656168:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x726F656863617274:
		switch(wp[1]){
		case 0x0000616967616872:return 1;
		default:return 0;
		}
	case 0x726F656E69726570:
		switch(wp[1]){
		case 0x0000796870616872:return 1;
		default:return 0;
		}
	case 0x726F65726F666E75:
		switch(wp[1]){
		case 0x000064656E696164:return 1;
		default:return 0;
		}
	case 0x726F666172747865:
		switch(wp[1]){
		case 0x000073756F656E61:return 1;
		default:return 0;
		}
	case 0x726F666572657270:
		switch(wp[1]){
		case 0x00006E6F6974616D:return 1;
		case 0x000079726F74616D:return 1;
		default:return 0;
		}
	case 0x726F6665726E6F6E:
		switch(wp[1]){
		case 0x00006E6F6974616D:return 1;
		default:return 0;
		}
	case 0x726F666E656E6F6E:
		switch(wp[1]){
		case 0x0000656C62616563:return 1;
		case 0x0000746E656D6563:return 1;
		default:return 0;
		}
	case 0x726F666E656F7270:
		switch(wp[1]){
		case 0x0000746E656D6563:return 1;
		default:return 0;
		}
	case 0x726F666E69657270:
		switch(wp[1]){
		case 0x00006E6F6974616D:return 1;
		default:return 0;
		}
	case 0x726F666E696E6F6E:
		switch(wp[1]){
		case 0x000065766974616D:return 1;
		default:return 0;
		}
	case 0x726F666E6973696D:
		switch(wp[1]){
		case 0x00006E6F6974616D:return 1;
		default:return 0;
		}
	case 0x726F667265707573:
		switch(wp[1]){
		case 0x00006574616E7574:return 1;
		case 0x00006E6F6974616D:return 1;
		default:return 0;
		}
	case 0x726F66736E617274:
		switch(wp[1]){
		case 0x000063697473696D:return 1;
		case 0x000065766974616D:return 1;
		case 0x00006E6F6974616D:return 1;
		case 0x0000796C676E696D:return 1;
		default:return 0;
		}
	case 0x726F676E696E656D:
		switch(wp[1]){
		case 0x0000616967616872:return 1;
		default:return 0;
		}
	case 0x726F676E7972616C:
		switch(wp[1]){
		case 0x0000616967616872:return 1;
		default:return 0;
		}
	case 0x726F686369726570:
		switch(wp[1]){
		case 0x00006C6164696F69:return 1;
		default:return 0;
		}
	case 0x726F686369746E61:
		switch(wp[1]){
		case 0x000063696E616D6F:return 1;
		default:return 0;
		}
	case 0x726F68636E6F7262:
		switch(wp[1]){
		case 0x0000616967616872:return 1;
		case 0x0000796870616872:return 1;
		default:return 0;
		}
	case 0x726F6870616D6573:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x726F68706174656D:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x726F6870736F6870:
		switch(wp[1]){
		case 0x000063696E65676F:return 1;
		case 0x000065706F63736F:return 1;
		case 0x000068706172676F:return 1;
		case 0x0000746E65637365:return 1;
		default:return 0;
		}
	case 0x726F687365726F66:
		switch(wp[1]){
		case 0x0000676E696E6574:return 1;
		default:return 0;
		}
	case 0x726F687475616E75:
		switch(wp[1]){
		case 0x0000656C62617A69:return 1;
		case 0x0000796C64657A69:return 1;
		default:return 0;
		}
	case 0x726F696863617262:
		switch(wp[1]){
		case 0x0000616D75656872:return 1;
		default:return 0;
		}
	case 0x726F696C6C796373:
		switch(wp[1]){
		case 0x000064696F6E6968:return 1;
		default:return 0;
		}
	case 0x726F697265747261:
		switch(wp[1]){
		case 0x0000616967616872:return 1;
		case 0x0000736978656872:return 1;
		case 0x0000796870616872:return 1;
		default:return 0;
		}
	case 0x726F6C616379786F:
		switch(wp[1]){
		case 0x0000726574656D69:return 1;
		default:return 0;
		}
	case 0x726F6C6168706D6F:
		switch(wp[1]){
		case 0x0000616967616872:return 1;
		case 0x0000736978656872:return 1;
		default:return 0;
		}
	case 0x726F6C656870656E:
		switch(wp[1]){
		case 0x0000726574656D6F:return 1;
		default:return 0;
		}
	case 0x726F6C667265766F:
		switch(wp[1]){
		case 0x00007373656E6469:return 1;
		default:return 0;
		}
	case 0x726F6C676E696176:
		switch(wp[1]){
		case 0x0000796C73756F69:return 1;
		default:return 0;
		}
	case 0x726F6C68636F7369:
		switch(wp[1]){
		case 0x00006C6C7968706F:return 1;
		default:return 0;
		}
	case 0x726F6C6863726570:
		switch(wp[1]){
		case 0x0000656E61687465:return 1;
		default:return 0;
		}
	case 0x726F6C6F63736964:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x726F6C7573706163:
		switch(wp[1]){
		case 0x0000796870616872:return 1;
		default:return 0;
		}
	case 0x726F6D6F68706F73:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x726F6D6F72746572:
		switch(wp[1]){
		case 0x00006465736F6870:return 1;
		case 0x00007369736F6870:return 1;
		default:return 0;
		}
	case 0x726F6D6F746F6870:
		switch(wp[1]){
		case 0x00007369736F6870:return 1;
		default:return 0;
		}
	case 0x726F6D6F74796870:
		switch(wp[1]){
		case 0x00007369736F6870:return 1;
		default:return 0;
		}
	case 0x726F6D7265707968:
		switch(wp[1]){
		case 0x00007369736F6870:return 1;
		default:return 0;
		}
	case 0x726F6E656D6F7473:
		switch(wp[1]){
		case 0x0000616967616872:return 1;
		default:return 0;
		}
	case 0x726F6E6963637573:
		switch(wp[1]){
		case 0x00006C6F6E697365:return 1;
		default:return 0;
		}
	case 0x726F6E696C6C696D:
		switch(wp[1]){
		case 0x00007974696C616D:return 1;
		default:return 0;
		}
	case 0x726F7065646E6F6E:
		switch(wp[1]){
		case 0x00006E6F69746174:return 1;
		default:return 0;
		}
	case 0x726F7065646F7270:
		switch(wp[1]){
		case 0x00006E6F69746174:return 1;
		default:return 0;
		}
	case 0x726F706D65746F63:
		switch(wp[1]){
		case 0x000073756F656E61:return 1;
		default:return 0;
		}
	case 0x726F706D65747865:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		case 0x000073756F656E61:return 1;
		case 0x0000797469656E61:return 1;
		default:return 0;
		}
	case 0x726F706D69657270:
		switch(wp[1]){
		case 0x00006E6F69746174:return 1;
		case 0x0000796C746E6174:return 1;
		default:return 0;
		}
	case 0x726F706D696E6F6E:
		switch(wp[1]){
		case 0x00006E6F69746174:return 1;
		default:return 0;
		}
	case 0x726F706F72706E75:
		switch(wp[1]){
		case 0x000064656E6F6974:return 1;
		case 0x00006C616E6F6974:return 1;
		default:return 0;
		}
	case 0x726F706F72727970:
		switch(wp[1]){
		case 0x00006E6972796870:return 1;
		default:return 0;
		}
	case 0x726F706F746F7270:
		switch(wp[1]){
		case 0x00006E6972796870:return 1;
		default:return 0;
		}
	case 0x726F70726F636E69:
		switch(wp[1]){
		case 0x0000657A696C6165:return 1;
		case 0x00006D73696C6165:return 1;
		case 0x00007473696C6165:return 1;
		case 0x00007974696C6165:return 1;
		default:return 0;
		}
	case 0x726F70736167656D:
		switch(wp[1]){
		case 0x00006C6C7968706F:return 1;
		case 0x00006D7569676E61:return 1;
		default:return 0;
		}
	case 0x726F70736E617274:
		switch(wp[1]){
		case 0x0000657669746174:return 1;
		case 0x00006E6F69746174:return 1;
		case 0x0000796C676E6974:return 1;
		default:return 0;
		}
	case 0x726F70736F67797A:
		switch(wp[1]){
		case 0x000065726F68706F:return 1;
		case 0x00006D7569676E61:return 1;
		default:return 0;
		}
	case 0x726F70736F6E6F6D:
		switch(wp[1]){
		case 0x00006D7569676E61:return 1;
		default:return 0;
		}
	case 0x726F70736F6E7967:
		switch(wp[1]){
		case 0x00006D7569676E61:return 1;
		default:return 0;
		}
	case 0x726F7073796C6F70:
		switch(wp[1]){
		case 0x00006D7569676E61:return 1;
		default:return 0;
		}
	case 0x726F7078656E6F6E:
		switch(wp[1]){
		case 0x00006E6F69746174:return 1;
		default:return 0;
		}
	case 0x726F726570736568:
		switch(wp[1]){
		case 0x000064696874696E:return 1;
		default:return 0;
		}
	case 0x726F726574657275:
		switch(wp[1]){
		case 0x0000616967616872:return 1;
		case 0x0000796870616872:return 1;
		default:return 0;
		}
	case 0x726F726574737968:
		switch(wp[1]){
		case 0x0000736978656872:return 1;
		case 0x0000796870616872:return 1;
		default:return 0;
		}
	case 0x726F726874657275:
		switch(wp[1]){
		case 0x0000616967616872:return 1;
		case 0x0000796870616872:return 1;
		default:return 0;
		}
	case 0x726F726874797265:
		switch(wp[1]){
		case 0x0000736978656872:return 1;
		default:return 0;
		}
	case 0x726F726F68706F6F:
		switch(wp[1]){
		case 0x0000796870616872:return 1;
		default:return 0;
		}
	case 0x726F736E65636E75:
		switch(wp[1]){
		case 0x0000796C73756F69:return 1;
		default:return 0;
		}
	case 0x726F746163736970:
		switch(wp[1]){
		case 0x00007473696C6169:return 1;
		default:return 0;
		}
	case 0x726F74616964656D:
		switch(wp[1]){
		case 0x00006D73696C6169:return 1;
		default:return 0;
		}
	case 0x726F74616D6F7473:
		switch(wp[1]){
		case 0x0000616967616872:return 1;
		default:return 0;
		}
	case 0x726F74616D726564:
		switch(wp[1]){
		case 0x0000616967616872:return 1;
		default:return 0;
		}
	case 0x726F746174636964:
		switch(wp[1]){
		case 0x00006D73696C6169:return 1;
		default:return 0;
		}
	case 0x726F746568726E75:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x726F7469646F7270:
		switch(wp[1]){
		case 0x0000796C73756F69:return 1;
		default:return 0;
		}
	case 0x726F746972726574:
		switch(wp[1]){
		case 0x0000657A696C6169:return 1;
		case 0x00006D73696C6169:return 1;
		case 0x00007473696C6169:return 1;
		case 0x00007974696C6169:return 1;
		default:return 0;
		}
	case 0x726F747265737361:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x726F747369686E75:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x726F756C666E6F6E:
		switch(wp[1]){
		case 0x0000746E65637365:return 1;
		default:return 0;
		}
	case 0x726F766964657270:
		switch(wp[1]){
		case 0x0000746E656D6563:return 1;
		default:return 0;
		}
	case 0x726F77726568746F:
		switch(wp[1]){
		case 0x00007373656E646C:return 1;
		default:return 0;
		}
	case 0x726F796874686369:
		switch(wp[1]){
		case 0x000063696874696E:return 1;
		default:return 0;
		}
	case 0x72706172746E6F63:
		switch(wp[1]){
		case 0x00006C61736F706F:return 1;
		default:return 0;
		}
	case 0x72706173696D6568:
		switch(wp[1]){
		case 0x000065747968706F:return 1;
		default:return 0;
		}
	case 0x72706173696D6573:
		switch(wp[1]){
		case 0x000065747968706F:return 1;
		default:return 0;
		}
	case 0x727061736F6C6F68:
		switch(wp[1]){
		case 0x000065747968706F:return 1;
		default:return 0;
		}
	case 0x727065616D616863:
		switch(wp[1]){
		case 0x00006369706F736F:return 1;
		default:return 0;
		}
	case 0x7270656468637261:
		switch(wp[1]){
		case 0x0000726F74616465:return 1;
		default:return 0;
		}
	case 0x727065647265766F:
		switch(wp[1]){
		case 0x0000657669737365:return 1;
		default:return 0;
		}
	case 0x7270656474736F70:
		switch(wp[1]){
		case 0x0000657669737365:return 1;
		default:return 0;
		}
	case 0x7270696365726E75:
		switch(wp[1]){
		case 0x000064657461636F:return 1;
		default:return 0;
		}
	case 0x7270697465726574:
		switch(wp[1]){
		case 0x0000726F74616E6F:return 1;
		default:return 0;
		}
	case 0x72706D6965726F66:
		switch(wp[1]){
		case 0x00006E6F69737365:return 1;
		default:return 0;
		}
	case 0x72706D6F636E6F6E:
		switch(wp[1]){
		case 0x00006E6F69737365:return 1;
		default:return 0;
		}
	case 0x72706F6475657370:
		switch(wp[1]){
		case 0x0000746E616E6765:return 1;
		case 0x0000796C65636E69:return 1;
		case 0x0000796C74736569:return 1;
		default:return 0;
		}
	case 0x72706F68706D796C:
		switch(wp[1]){
		case 0x000065736165746F:return 1;
		default:return 0;
		}
	case 0x72706F7265746568:
		switch(wp[1]){
		case 0x000065646965746F:return 1;
		case 0x000065736F65746F:return 1;
		default:return 0;
		}
	case 0x72706F72706E6F6E:
		switch(wp[1]){
		case 0x0000797261746569:return 1;
		default:return 0;
		}
	case 0x7270707573657270:
		switch(wp[1]){
		case 0x00006E6F69737365:return 1;
		default:return 0;
		}
	case 0x72707075736E6F6E:
		switch(wp[1]){
		case 0x00006E6F69737365:return 1;
		default:return 0;
		}
	case 0x72707265676E6966:
		switch(wp[1]){
		case 0x0000676E69746E69:return 1;
		default:return 0;
		}
	case 0x7270796863617262:
		switch(wp[1]){
		case 0x00006369706F736F:return 1;
		default:return 0;
		}
	case 0x727261626D656E75:
		switch(wp[1]){
		case 0x0000676E69737361:return 1;
		default:return 0;
		}
	case 0x727261627265766F:
		switch(wp[1]){
		case 0x00007373656E6E65:return 1;
		default:return 0;
		}
	case 0x727265746964656D:
		switch(wp[1]){
		case 0x000073756F656E61:return 1;
		default:return 0;
		}
	case 0x72726574696C6F73:
		switch(wp[1]){
		case 0x000073756F656E61:return 1;
		default:return 0;
		}
	case 0x727265746E696572:
		switch(wp[1]){
		case 0x00006E6F69747075:return 1;
		default:return 0;
		}
	case 0x727265746E696E75:
		switch(wp[1]){
		case 0x000064657461676F:return 1;
		case 0x0000656C6261676F:return 1;
		case 0x0000676E69747075:return 1;
		case 0x00006E6F69747075:return 1;
		default:return 0;
		}
	case 0x727265746E756F63:
		switch(wp[1]){
		case 0x00006574736F7069:return 1;
		case 0x0000676E69736961:return 1;
		case 0x0000746165727465:return 1;
		case 0x0000746E61706D61:return 1;
		default:return 0;
		}
	case 0x7272697265707968:
		switch(wp[1]){
		case 0x0000656C62617469:return 1;
		default:return 0;
		}
	case 0x72726F637265766F:
		switch(wp[1]){
		case 0x00006E6F69746365:return 1;
		case 0x00006E6F69747075:return 1;
		default:return 0;
		}
	case 0x72726F6D75656E70:
		switch(wp[1]){
		case 0x0000736968636168:return 1;
		default:return 0;
		}
	case 0x72726F74616D6568:
		switch(wp[1]){
		case 0x0000736968636168:return 1;
		default:return 0;
		}
	case 0x7274616568746E75:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x7274616D75616874:
		switch(wp[1]){
		case 0x00006C616369706F:return 1;
		default:return 0;
		}
	case 0x7274617069746E61:
		switch(wp[1]){
		case 0x00006D7369746F69:return 1;
		default:return 0;
		}
	case 0x727461706D696572:
		switch(wp[1]){
		case 0x00006E6F69746169:return 1;
		default:return 0;
		}
	case 0x727461706F6C6C61:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x72746275736E6F6E:
		switch(wp[1]){
		case 0x00006E6F69746361:return 1;
		default:return 0;
		}
	case 0x727463656C656962:
		switch(wp[1]){
		case 0x0000736973796C6F:return 1;
		default:return 0;
		}
	case 0x727463656C656964:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x727463656C656E61:
		switch(wp[1]){
		case 0x000063696E6F746F:return 1;
		case 0x000073756E6F746F:return 1;
		default:return 0;
		}
	case 0x727463656C656E75:
		switch(wp[1]){
		case 0x0000676E69796669:return 1;
		default:return 0;
		}
	case 0x7274656D656C6574:
		switch(wp[1]){
		case 0x000068706172676F:return 1;
		default:return 0;
		}
	case 0x7274656D69726570:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x7274656D69746C61:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x7274656D6D797361:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x7274656D6F646570:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x7274656D6F676C61:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x7274656D6F676F6C:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x7274656D6F6C6F63:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x7274656D6F6D6F68:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x7274656D6F726162:
		switch(wp[1]){
		case 0x000068706172676F:return 1;
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x7274656D6F727970:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x7274656D72656874:
		switch(wp[1]){
		case 0x000068706172676F:return 1;
		default:return 0;
		}
	case 0x7274656D756C6F76:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x72746572656D6E75:
		switch(wp[1]){
		case 0x000073756F696369:return 1;
		default:return 0;
		}
	case 0x72746572696D6573:
		switch(wp[1]){
		case 0x0000656C69746361:return 1;
		default:return 0;
		}
	case 0x727465746F747561:
		switch(wp[1]){
		case 0x000064696F6C7061:return 1;
		default:return 0;
		}
	case 0x727469627A6E6562:
		switch(wp[1]){
		case 0x0000656C6F7A6169:return 1;
		default:return 0;
		}
	case 0x72746C7974656361:
		switch(wp[1]){
		case 0x0000656E6965706F:return 1;
		default:return 0;
		}
	case 0x72746D7563726963:
		switch(wp[1]){
		case 0x00006C616369706F:return 1;
		default:return 0;
		}
	case 0x72746E65636E6F63:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x72746E65636F6567:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x72746E6574706573:
		switch(wp[1]){
		case 0x00006574616E6F69:return 1;
		default:return 0;
		}
	case 0x72746E65766F7270:
		switch(wp[1]){
		case 0x000072616C756369:return 1;
		case 0x000073756C756369:return 1;
		default:return 0;
		}
	case 0x72746E6F63627573:
		switch(wp[1]){
		case 0x0000797465697261:return 1;
		default:return 0;
		}
	case 0x72746E6F63657270:
		switch(wp[1]){
		case 0x000065636E617669:return 1;
		case 0x0000657669746361:return 1;
		case 0x00006C6175746361:return 1;
		case 0x000079737265766F:return 1;
		default:return 0;
		}
	case 0x72746E6F636E6F6E:
		switch(wp[1]){
		case 0x000065636E617669:return 1;
		case 0x0000676E696C6C6F:return 1;
		case 0x00006E6F69746361:return 1;
		case 0x0000726F74756269:return 1;
		default:return 0;
		}
	case 0x72746E6F6874696C:
		switch(wp[1]){
		case 0x0000747369747069:return 1;
		default:return 0;
		}
	case 0x72746F63696D6F63:
		switch(wp[1]){
		case 0x00006C6163696761:return 1;
		default:return 0;
		}
	case 0x72746F636C616863:
		switch(wp[1]){
		case 0x0000657469686369:return 1;
		default:return 0;
		}
	case 0x72746F6475657370:
		switch(wp[1]){
		case 0x00006C6165686361:return 1;
		case 0x00006C6172656D69:return 1;
		default:return 0;
		}
	case 0x72746F6E616C656D:
		switch(wp[1]){
		case 0x000073756F686369:return 1;
		default:return 0;
		}
	case 0x72746F6E69746361:
		switch(wp[1]){
		case 0x00006D7569686369:return 1;
		default:return 0;
		}
	case 0x72746F6E72657473:
		switch(wp[1]){
		case 0x00006C6165686361:return 1;
		default:return 0;
		}
	case 0x72746F7265746568:
		switch(wp[1]){
		case 0x000073756F686369:return 1;
		default:return 0;
		}
	case 0x72746F72706E6F6E:
		switch(wp[1]){
		case 0x0000656C69746361:return 1;
		default:return 0;
		}
	case 0x7274736167697065:
		switch(wp[1]){
		case 0x0000656C65636F69:return 1;
		default:return 0;
		}
	case 0x72747361676F7865:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x727473616C656F63:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x7274736172666E69:
		switch(wp[1]){
		case 0x0000657275746375:return 1;
		default:return 0;
		}
	case 0x7274736172746C75:
		switch(wp[1]){
		case 0x000073756F756E65:return 1;
		default:return 0;
		}
	case 0x727473626F657270:
		switch(wp[1]){
		case 0x00006E6F69746375:return 1;
		default:return 0;
		}
	case 0x727473626F6E6F6E:
		switch(wp[1]){
		case 0x0000657669746375:return 1;
		default:return 0;
		}
	case 0x7274736564657270:
		switch(wp[1]){
		case 0x00006E6F69746375:return 1;
		default:return 0;
		}
	case 0x72747365646E6170:
		switch(wp[1]){
		case 0x00006E6F69746375:return 1;
		default:return 0;
		}
	case 0x72747365646E6F6E:
		switch(wp[1]){
		case 0x0000657669746375:return 1;
		default:return 0;
		}
	case 0x7274736572657270:
		switch(wp[1]){
		case 0x00006E6F69746369:return 1;
		default:return 0;
		}
	case 0x72747365726E6F6E:
		switch(wp[1]){
		case 0x0000657669746369:return 1;
		case 0x00006E6F69746369:return 1;
		default:return 0;
		}
	case 0x72747365726F7270:
		switch(wp[1]){
		case 0x00006E6F69746369:return 1;
		default:return 0;
		}
	case 0x7274736572726574:
		switch(wp[1]){
		case 0x0000657A696C6169:return 1;
		case 0x00006D73696C6169:return 1;
		case 0x00007974696C6169:return 1;
		default:return 0;
		}
	case 0x7274736575716573:
		switch(wp[1]){
		case 0x0000796D6F746365:return 1;
		default:return 0;
		}
	case 0x7274736964657270:
		switch(wp[1]){
		case 0x00006C7566747375:return 1;
		case 0x0000726F74756269:return 1;
		default:return 0;
		}
	case 0x7274736E656D6E75:
		switch(wp[1]){
		case 0x0000676E69746175:return 1;
		default:return 0;
		}
	case 0x7274736E69657270:
		switch(wp[1]){
		case 0x0000657669746375:return 1;
		case 0x00006E6F69746375:return 1;
		default:return 0;
		}
	case 0x7274736E696C616D:
		switch(wp[1]){
		case 0x00006E6F69746375:return 1;
		default:return 0;
		}
	case 0x7274736E696E6F6E:
		switch(wp[1]){
		case 0x00006E6F69746375:return 1;
		default:return 0;
		}
	case 0x7274736E6973696D:
		switch(wp[1]){
		case 0x0000657669746375:return 1;
		case 0x00006E6F69746375:return 1;
		default:return 0;
		}
	case 0x7274736E6F636572:
		switch(wp[1]){
		case 0x0000657669746375:return 1;
		case 0x00006E6F69746375:return 1;
		default:return 0;
		}
	case 0x7274736E6F636E75:
		switch(wp[1]){
		case 0x0000657669746375:return 1;
		case 0x0000676E696E6961:return 1;
		default:return 0;
		}
	case 0x7274736E6F6D6564:
		switch(wp[1]){
		case 0x0000656C62617461:return 1;
		case 0x0000796C64657461:return 1;
		default:return 0;
		}
	case 0x7274736F7263616D:
		switch(wp[1]){
		case 0x0000657275746375:return 1;
		default:return 0;
		}
	case 0x7274736F7263696D:
		switch(wp[1]){
		case 0x0000657275746375:return 1;
		default:return 0;
		}
	case 0x7274736F746F7270:
		switch(wp[1]){
		case 0x00006D7569746E6F:return 1;
		default:return 0;
		}
	case 0x7274737265646E75:
		switch(wp[1]){
		case 0x0000676E69707061:return 1;
		default:return 0;
		}
	case 0x7274737265707573:
		switch(wp[1]){
		case 0x0000657275746375:return 1;
		case 0x00006E6F69746375:return 1;
		case 0x000073756F756E65:return 1;
		case 0x000079726F746375:return 1;
		default:return 0;
		}
	case 0x7274737265746E69:
		switch(wp[1]){
		case 0x00006E6F69746169:return 1;
		default:return 0;
		}
	case 0x727473736D657262:
		switch(wp[1]){
		case 0x0000676E756C6861:return 1;
		default:return 0;
		}
	case 0x7274737572666E75:
		switch(wp[1]){
		case 0x0000656C62617461:return 1;
		default:return 0;
		}
	case 0x7274757069746E61:
		switch(wp[1]){
		case 0x0000746E65637365:return 1;
		default:return 0;
		}
	case 0x7275616C61726170:
		switch(wp[1]){
		case 0x00006574696E6F69:return 1;
		default:return 0;
		}
	case 0x7275616F72746572:
		switch(wp[1]){
		case 0x000072616C756369:return 1;
		default:return 0;
		}
	case 0x7275617264617571:
		switch(wp[1]){
		case 0x000072616C756369:return 1;
		default:return 0;
		}
	case 0x7275617265746E69:
		switch(wp[1]){
		case 0x000072616C756369:return 1;
		default:return 0;
		}
	case 0x7275627369646572:
		switch(wp[1]){
		case 0x0000746E656D6573:return 1;
		default:return 0;
		}
	case 0x7275637265746E69:
		switch(wp[1]){
		case 0x00006E6F69746173:return 1;
		case 0x0000796C746E6572:return 1;
		default:return 0;
		}
	case 0x727563736E617274:
		switch(wp[1]){
		case 0x00006E6F69746176:return 1;
		case 0x0000796C746E6572:return 1;
		default:return 0;
		}
	case 0x72756373736F7263:
		switch(wp[1]){
		case 0x00006465746E6572:return 1;
		default:return 0;
		}
	case 0x7275656E69746E61:
		switch(wp[1]){
		case 0x00006E69786F746F:return 1;
		default:return 0;
		}
	case 0x7275656E6F747561:
		switch(wp[1]){
		case 0x00006E69786F746F:return 1;
		default:return 0;
		}
	case 0x7275656E796C6F70:
		switch(wp[1]){
		case 0x000079687461706F:return 1;
		default:return 0;
		}
	case 0x7275667265646E75:
		switch(wp[1]){
		case 0x000072656873696E:return 1;
		default:return 0;
		}
	case 0x72756E6F74656361:
		switch(wp[1]){
		case 0x0000726574656D6F:return 1;
		default:return 0;
		}
	case 0x72756F6C6F636E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x72756F6D7265766F:
		switch(wp[1]){
		case 0x0000796C6C75666E:return 1;
		default:return 0;
		}
	case 0x7275706F666C7573:
		switch(wp[1]){
		case 0x0000657461727570:return 1;
		default:return 0;
		}
	case 0x7275707265707573:
		switch(wp[1]){
		case 0x00006E6F69746167:return 1;
		default:return 0;
		}
	case 0x72757361656D6E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x72757369656C6E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x7275736F746F6870:
		switch(wp[1]){
		case 0x0000676E69796576:return 1;
		default:return 0;
		}
	case 0x727574616E6E6F63:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x727574616E6E6F6E:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x7275746F6D687465:
		switch(wp[1]){
		case 0x00006574616E6962:return 1;
		default:return 0;
		}
	case 0x7275747069726373:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x7275747265706D69:
		switch(wp[1]){
		case 0x00006E6F69746162:return 1;
		default:return 0;
		}
	case 0x7275747369646E75:
		switch(wp[1]){
		case 0x0000796C676E6962:return 1;
		default:return 0;
		}
	case 0x7275796863617473:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x727968746F707968:
		switch(wp[1]){
		case 0x00006D736964696F:return 1;
		default:return 0;
		}
	case 0x72796D7265707968:
		switch(wp[1]){
		case 0x0000616D61726F69:return 1;
		default:return 0;
		}
	case 0x7279706172747865:
		switch(wp[1]){
		case 0x00006C6164696D61:return 1;
		default:return 0;
		}
	case 0x7279706F7263696D:
		switch(wp[1]){
		case 0x0000726574656D6F:return 1;
		default:return 0;
		}
	case 0x7361636974697263:
		switch(wp[1]){
		case 0x00006D7369726574:return 1;
		default:return 0;
		}
	case 0x7361647265626168:
		switch(wp[1]){
		case 0x0000737365726568:return 1;
		default:return 0;
		}
	case 0x7361656874726F6E:
		switch(wp[1]){
		case 0x0000736472617774:return 1;
		default:return 0;
		}
	case 0x7361656874756F73:
		switch(wp[1]){
		case 0x0000736472617774:return 1;
		default:return 0;
		}
	case 0x7361656C70736964:
		switch(wp[1]){
		case 0x0000656C62617275:return 1;
		case 0x0000796C62617275:return 1;
		default:return 0;
		}
	case 0x7361657070616E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x73616572746E6F6E:
		switch(wp[1]){
		case 0x0000656C62616E6F:return 1;
		default:return 0;
		}
	case 0x7361696C676E6167:
		switch(wp[1]){
		case 0x000061696E656874:return 1;
		default:return 0;
		}
	case 0x73616C626F6E6F67:
		switch(wp[1]){
		case 0x00006C6169646974:return 1;
		case 0x00006D7569646974:return 1;
		default:return 0;
		}
	case 0x73616C626F747963:
		switch(wp[1]){
		case 0x000073756F6D6574:return 1;
		default:return 0;
		}
	case 0x73616C6369746E61:
		switch(wp[1]){
		case 0x0000747369636973:return 1;
		default:return 0;
		}
	case 0x73616C6374736F70:
		switch(wp[1]){
		case 0x00006D7369636973:return 1;
		default:return 0;
		}
	case 0x73616C66696D6573:
		switch(wp[1]){
		case 0x0000666F6F727068:return 1;
		default:return 0;
		}
	case 0x73616C706F6D6568:
		switch(wp[1]){
		case 0x00006D7569646F6D:return 1;
		default:return 0;
		}
	case 0x73616D6172746574:
		switch(wp[1]){
		case 0x000065746F676974:return 1;
		default:return 0;
		}
	case 0x73616D7265707573:
		switch(wp[1]){
		case 0x0000656E696C7563:return 1;
		default:return 0;
		}
	case 0x7361706D69736964:
		switch(wp[1]){
		case 0x000064656E6F6973:return 1;
		default:return 0;
		}
	case 0x7361706D6F636E75:
		switch(wp[1]){
		case 0x000064656E6F6973:return 1;
		default:return 0;
		}
	case 0x7361726265726563:
		switch(wp[1]){
		case 0x000061696E656874:return 1;
		case 0x000063696E656874:return 1;
		default:return 0;
		}
	case 0x7361727261626D65:
		switch(wp[1]){
		case 0x0000796C676E6973:return 1;
		default:return 0;
		}
	case 0x7361746F7263696D:
		switch(wp[1]){
		case 0x0000726574656D69:return 1;
		default:return 0;
		}
	case 0x7361746F72647968:
		switch(wp[1]){
		case 0x0000726574656D69:return 1;
		default:return 0;
		}
	case 0x7361766F64756566:
		switch(wp[1]){
		case 0x00006D73696C6173:return 1;
		default:return 0;
		}
	case 0x73626F6172746C75:
		switch(wp[1]){
		case 0x00006574616E6974:return 1;
		default:return 0;
		}
	case 0x73626F7265707573:
		switch(wp[1]){
		case 0x00006574616E6974:return 1;
		default:return 0;
		}
	case 0x736275737265766F:
		switch(wp[1]){
		case 0x0000726562697263:return 1;
		default:return 0;
		}
	case 0x73646C65666E6F6E:
		switch(wp[1]){
		case 0x0000636968746170:return 1;
		default:return 0;
		}
	case 0x7365616F746F6870:
		switch(wp[1]){
		case 0x0000636974656874:return 1;
		default:return 0;
		}
	case 0x7365636375736E75:
		switch(wp[1]){
		case 0x0000796C65766973:return 1;
		case 0x0000796C6C756673:return 1;
		default:return 0;
		}
	case 0x736563656E657270:
		switch(wp[1]){
		case 0x0000657461746973:return 1;
		default:return 0;
		}
	case 0x7365636F72746572:
		switch(wp[1]){
		case 0x00006C616E6F6973:return 1;
		default:return 0;
		}
	case 0x7365637265746E69:
		switch(wp[1]){
		case 0x00006C6169726F73:return 1;
		case 0x00006C616E6F6973:return 1;
		default:return 0;
		}
	case 0x7365646E61636E69:
		switch(wp[1]){
		case 0x0000796C746E6563:return 1;
		default:return 0;
		}
	case 0x7365646E69657270:
		switch(wp[1]){
		case 0x00006574616E6769:return 1;
		default:return 0;
		}
	case 0x7365646F656C6574:
		switch(wp[1]){
		case 0x00006E616563616D:return 1;
		default:return 0;
		}
	case 0x7365666E69736964:
		switch(wp[1]){
		case 0x00006E6F69746174:return 1;
		default:return 0;
		}
	case 0x7365666F72706E75:
		switch(wp[1]){
		case 0x00006C6169726F73:return 1;
		case 0x00006C616E6F6973:return 1;
		default:return 0;
		}
	case 0x7365676F72657475:
		switch(wp[1]){
		case 0x00006E6F69746174:return 1;
		default:return 0;
		}
	case 0x7365686365657262:
		switch(wp[1]){
		case 0x00007265776F6C66:return 1;
		default:return 0;
		}
	case 0x73656863726F6E75:
		switch(wp[1]){
		case 0x0000646574617274:return 1;
		default:return 0;
		}
	case 0x7365687473656E61:
		switch(wp[1]){
		case 0x0000726574656D69:return 1;
		case 0x000079676F6C6F69:return 1;
		default:return 0;
		}
	case 0x73656C61766E6F63:
		switch(wp[1]){
		case 0x0000796C746E6563:return 1;
		default:return 0;
		}
	case 0x73656D6F6C656F63:
		switch(wp[1]){
		case 0x00007473616C626F:return 1;
		default:return 0;
		}
	case 0x73656D6F7263616D:
		switch(wp[1]){
		case 0x0000797265746E65:return 1;
		default:return 0;
		}
	case 0x73656D6F7263696D:
		switch(wp[1]){
		case 0x0000797265746E65:return 1;
		default:return 0;
		}
	case 0x73656D7265746E69:
		switch(wp[1]){
		case 0x00007265676E6573:return 1;
		default:return 0;
		}
	case 0x73656E61696D6568:
		switch(wp[1]){
		case 0x0000616973656874:return 1;
		default:return 0;
		}
	case 0x73656E616C6C6170:
		switch(wp[1]){
		case 0x0000616973656874:return 1;
		default:return 0;
		}
	case 0x73656E616D6C6170:
		switch(wp[1]){
		case 0x0000616973656874:return 1;
		default:return 0;
		}
	case 0x73656E616F726361:
		switch(wp[1]){
		case 0x0000616973656874:return 1;
		default:return 0;
		}
	case 0x73656E6174736F70:
		switch(wp[1]){
		case 0x0000636974656874:return 1;
		default:return 0;
		}
	case 0x73656E65666E6F6E:
		switch(wp[1]){
		case 0x0000646574617274:return 1;
		default:return 0;
		}
	case 0x73656E696C6F6863:
		switch(wp[1]){
		case 0x0000657361726574:return 1;
		default:return 0;
		}
	case 0x73656F696C6C6170:
		switch(wp[1]){
		case 0x0000657469786573:return 1;
		default:return 0;
		}
	case 0x73656F6D72656874:
		switch(wp[1]){
		case 0x0000616973656874:return 1;
		default:return 0;
		}
	case 0x7365706D65746E69:
		switch(wp[1]){
		case 0x0000796C65766974:return 1;
		case 0x0000797469766974:return 1;
		default:return 0;
		}
	case 0x73657263696D6573:
		switch(wp[1]){
		case 0x00006369746E6563:return 1;
		default:return 0;
		}
	case 0x7365726665726E75:
		switch(wp[1]){
		case 0x0000796C676E6968:return 1;
		default:return 0;
		}
	case 0x7365726767616E75:
		switch(wp[1]){
		case 0x0000796C65766973:return 1;
		default:return 0;
		}
	case 0x7365726F66736964:
		switch(wp[1]){
		case 0x00006E6F69746174:return 1;
		default:return 0;
		}
	case 0x7365727068637261:
		switch(wp[1]){
		case 0x0000797265747962:return 1;
		default:return 0;
		}
	case 0x736572706D696E75:
		switch(wp[1]){
		case 0x0000796C65766973:return 1;
		default:return 0;
		}
	case 0x73657270706F6E75:
		switch(wp[1]){
		case 0x0000796C65766973:return 1;
		default:return 0;
		}
	case 0x7365727078656E69:
		switch(wp[1]){
		case 0x000073656C626973:return 1;
		case 0x0000796C65766973:return 1;
		default:return 0;
		}
	case 0x7365727078656E75:
		switch(wp[1]){
		case 0x0000796C65766973:return 1;
		default:return 0;
		}
	case 0x7365727265646E75:
		switch(wp[1]){
		case 0x0000646574636570:return 1;
		default:return 0;
		}
	case 0x7365727265707968:
		switch(wp[1]){
		case 0x000065636E616E6F:return 1;
		default:return 0;
		}
	case 0x7365737265746E69:
		switch(wp[1]){
		case 0x00006C616E6F6973:return 1;
		default:return 0;
		}
	case 0x7365746564657270:
		switch(wp[1]){
		case 0x00006E6F69746174:return 1;
		default:return 0;
		}
	case 0x73657474616E6F6E:
		switch(wp[1]){
		case 0x00006E6F69746174:return 1;
		default:return 0;
		}
	case 0x736575716E697571:
		switch(wp[1]){
		case 0x0000657461697265:return 1;
		case 0x0000657461747065:return 1;
		case 0x00006E6F69746365:return 1;
		default:return 0;
		}
	case 0x7365766E69657270:
		switch(wp[1]){
		case 0x0000657461676974:return 1;
		default:return 0;
		}
	case 0x7365766E69736964:
		switch(wp[1]){
		case 0x0000657275746974:return 1;
		default:return 0;
		}
	case 0x7365767265666665:
		switch(wp[1]){
		case 0x0000796C676E6963:return 1;
		default:return 0;
		}
	case 0x7365767265746E69:
		switch(wp[1]){
		case 0x000072616C756369:return 1;
		default:return 0;
		}
	case 0x736576736E617274:
		switch(wp[1]){
		case 0x00006D7369746974:return 1;
		default:return 0;
		}
	case 0x7365776874726F6E:
		switch(wp[1]){
		case 0x0000736472617774:return 1;
		default:return 0;
		}
	case 0x7369626F72707563:
		switch(wp[1]){
		case 0x000065746974756D:return 1;
		default:return 0;
		}
	case 0x7369627265646E75:
		switch(wp[1]){
		case 0x0000636972706F68:return 1;
		default:return 0;
		}
	case 0x7369646572706E75:
		switch(wp[1]){
		case 0x0000676E69736F70:return 1;
		default:return 0;
		}
	case 0x73696573656C6574:
		switch(wp[1]){
		case 0x000079676F6C6F6D:return 1;
		default:return 0;
		}
	case 0x73696664726F7773:
		switch(wp[1]){
		case 0x00006E616D726568:return 1;
		default:return 0;
		}
	case 0x7369666E6F636572:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x736967616D6F7270:
		switch(wp[1]){
		case 0x00006C6169726574:return 1;
		default:return 0;
		}
	case 0x736967656C627573:
		switch(wp[1]){
		case 0x000065727574616C:return 1;
		case 0x00006E6F6974616C:return 1;
		default:return 0;
		}
	case 0x736967656C657270:
		switch(wp[1]){
		case 0x000065766974616C:return 1;
		default:return 0;
		}
	case 0x736967656C6F7270:
		switch(wp[1]){
		case 0x000065766974616C:return 1;
		default:return 0;
		}
	case 0x73696765726E6F6E:
		switch(wp[1]){
		case 0x0000656C62617274:return 1;
		default:return 0;
		}
	case 0x7369686F656C6170:
		switch(wp[1]){
		case 0x000079676F6C6F74:return 1;
		default:return 0;
		}
	case 0x7369686F7263696D:
		switch(wp[1]){
		case 0x000079676F6C6F74:return 1;
		default:return 0;
		}
	case 0x7369686F7275656E:
		switch(wp[1]){
		case 0x000079676F6C6F74:return 1;
		default:return 0;
		}
	case 0x7369686F746F7270:
		switch(wp[1]){
		case 0x00006E6169726F74:return 1;
		default:return 0;
		}
	case 0x736968706F736564:
		switch(wp[1]){
		case 0x0000657461636974:return 1;
		default:return 0;
		}
	case 0x736968706F736E75:
		switch(wp[1]){
		case 0x0000657461636974:return 1;
		default:return 0;
		}
	case 0x73696D6275736E75:
		switch(wp[1]){
		case 0x0000796C65766973:return 1;
		default:return 0;
		}
	case 0x73696D6D6F636E75:
		switch(wp[1]){
		case 0x000064656E6F6973:return 1;
		case 0x0000646574617265:return 1;
		default:return 0;
		}
	case 0x73696D736E617274:
		switch(wp[1]){
		case 0x00006C616E6F6973:return 1;
		case 0x0000796C65766973:return 1;
		case 0x0000797469766973:return 1;
		default:return 0;
		}
	case 0x73696E656C706572:
		switch(wp[1]){
		case 0x0000796C676E6968:return 1;
		default:return 0;
		}
	case 0x73696E696D6E6F6E:
		switch(wp[1]){
		case 0x00006C6169726574:return 1;
		default:return 0;
		}
	case 0x73696F6475657370:
		switch(wp[1]){
		case 0x0000636972656D6F:return 1;
		case 0x000079706F72746F:return 1;
		default:return 0;
		}
	case 0x73696F6572657473:
		switch(wp[1]){
		case 0x0000636972656D6F:return 1;
		default:return 0;
		}
	case 0x73696F6D6F726863:
		switch(wp[1]){
		case 0x0000636972656D6F:return 1;
		default:return 0;
		}
	case 0x73696F7571727574:
		switch(wp[1]){
		case 0x0000797272656265:return 1;
		default:return 0;
		}
	case 0x7369706569746E61:
		switch(wp[1]){
		case 0x0000747369706F63:return 1;
		default:return 0;
		}
	case 0x7369726169746E61:
		switch(wp[1]){
		case 0x0000746172636F74:return 1;
		default:return 0;
		}
	case 0x73697261706E6F6E:
		switch(wp[1]){
		case 0x000072656E6F6968:return 1;
		default:return 0;
		}
	case 0x7369726561687073:
		switch(wp[1]){
		case 0x00006D7569726574:return 1;
		default:return 0;
		}
	case 0x736972706D696572:
		switch(wp[1]){
		case 0x0000746E656D6E6F:return 1;
		default:return 0;
		}
	case 0x736972706D696E75:
		switch(wp[1]){
		case 0x0000656C62616E6F:return 1;
		default:return 0;
		}
	case 0x7369727070616E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x7369736E6F636E69:
		switch(wp[1]){
		case 0x0000796C746E6574:return 1;
		default:return 0;
		}
	case 0x7369737265766964:
		switch(wp[1]){
		case 0x000073756F726F70:return 1;
		default:return 0;
		}
	case 0x7369746173736964:
		switch(wp[1]){
		case 0x0000796C64656966:return 1;
		default:return 0;
		}
	case 0x7369746E6F726870:
		switch(wp[1]){
		case 0x00006D7569726574:return 1;
		case 0x00006E6F69726574:return 1;
		default:return 0;
		}
	case 0x7369747261706962:
		switch(wp[1]){
		case 0x0000706968736E61:return 1;
		default:return 0;
		}
	case 0x7369747375676E61:
		switch(wp[1]){
		case 0x00006574616C6C65:return 1;
		case 0x0000657461747065:return 1;
		default:return 0;
		}
	case 0x736976646173696D:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x73697665726F7270:
		switch(wp[1]){
		case 0x00007473696E6F69:return 1;
		default:return 0;
		}
	case 0x73697669646E6F6E:
		switch(wp[1]){
		case 0x00007974696C6269:return 1;
		default:return 0;
		}
	case 0x73697669766F7270:
		switch(wp[1]){
		case 0x00006E6F69746365:return 1;
		default:return 0;
		}
	case 0x7369767265707573:
		switch(wp[1]){
		case 0x000070696873726F:return 1;
		case 0x00007972616E6F69:return 1;
		default:return 0;
		}
	case 0x7369767265707968:
		switch(wp[1]){
		case 0x0000797469736F63:return 1;
		default:return 0;
		}
	case 0x736C6F62696D6573:
		switch(wp[1]){
		case 0x0000747369766568:return 1;
		default:return 0;
		}
	case 0x736E61656C636E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x736E617274627573:
		switch(wp[1]){
		case 0x0000746E6563756C:return 1;
		case 0x0000746E65726170:return 1;
		default:return 0;
		}
	case 0x736E617274657270:
		switch(wp[1]){
		case 0x00006E6F6974616C:return 1;
		case 0x00006E6F69746361:return 1;
		default:return 0;
		}
	case 0x736E6172746E6F6E:
		switch(wp[1]){
		case 0x0000676E69736F70:return 1;
		case 0x0000746E65726170:return 1;
		default:return 0;
		}
	case 0x736E6172746F7270:
		switch(wp[1]){
		case 0x00006E6F6974616C:return 1;
		default:return 0;
		}
	case 0x736E61727473696D:
		switch(wp[1]){
		case 0x00006E6F6974616C:return 1;
		default:return 0;
		}
	case 0x736E656369746E61:
		switch(wp[1]){
		case 0x000070696873726F:return 1;
		default:return 0;
		}
	case 0x736E657369746E61:
		switch(wp[1]){
		case 0x000072657A697469:return 1;
		default:return 0;
		}
	case 0x736E65736F747561:
		switch(wp[1]){
		case 0x000064657A697469:return 1;
		default:return 0;
		}
	case 0x736E696172746C75:
		switch(wp[1]){
		case 0x0000746E65747369:return 1;
		default:return 0;
		}
	case 0x736E697265707573:
		switch(wp[1]){
		case 0x0000657475746974:return 1;
		case 0x0000746E65747369:return 1;
		default:return 0;
		}
	case 0x736E697265746E69:
		switch(wp[1]){
		case 0x000065636E617275:return 1;
		default:return 0;
		}
	case 0x736E6F6365726E75:
		switch(wp[1]){
		case 0x0000646572656469:return 1;
		default:return 0;
		}
	case 0x736E6F6369746E61:
		switch(wp[1]){
		case 0x000065636E656963:return 1;
		default:return 0;
		}
	case 0x736E6F6D65646E69:
		switch(wp[1]){
		case 0x0000656C62617274:return 1;
		case 0x0000796C62617274:return 1;
		default:return 0;
		}
	case 0x736E6F6D65646E75:
		switch(wp[1]){
		case 0x0000646574617274:return 1;
		case 0x0000656C62617274:return 1;
		case 0x0000796C62617274:return 1;
		default:return 0;
		}
	case 0x736E6F6D65726E75:
		switch(wp[1]){
		case 0x0000646574617274:return 1;
		default:return 0;
		}
	case 0x736F6361726F6874:
		switch(wp[1]){
		case 0x00006E6163617274:return 1;
		case 0x0000736973696863:return 1;
		default:return 0;
		}
	case 0x736F6365746E6570:
		switch(wp[1]){
		case 0x00006D73696C6174:return 1;
		case 0x00006E6F69726174:return 1;
		case 0x00007473696C6174:return 1;
		default:return 0;
		}
	case 0x736F636974726F63:
		switch(wp[1]){
		case 0x0000656E6F726574:return 1;
		case 0x0000657461697274:return 1;
		default:return 0;
		}
	case 0x736F636F656C6170:
		switch(wp[1]){
		case 0x000079676F6C6F6D:return 1;
		default:return 0;
		}
	case 0x736F636F7263616D:
		switch(wp[1]){
		case 0x000079676F6C6F6D:return 1;
		default:return 0;
		}
	case 0x736F636F7263696D:
		switch(wp[1]){
		case 0x000079676F6C6F6D:return 1;
		default:return 0;
		}
	case 0x736F636F72696863:
		switch(wp[1]){
		case 0x000073636974656D:return 1;
		default:return 0;
		}
	case 0x736F64616C6C6170:
		switch(wp[1]){
		case 0x0000656E696D6D61:return 1;
		default:return 0;
		}
	case 0x736F64696C656373:
		switch(wp[1]){
		case 0x000064696F727561:return 1;
		case 0x00006E6169727561:return 1;
		default:return 0;
		}
	case 0x736F656863617274:
		switch(wp[1]){
		case 0x0000736973696863:return 1;
		case 0x0000747369706F63:return 1;
		default:return 0;
		}
	case 0x736F656E69726570:
		switch(wp[1]){
		case 0x00006C61746F7263:return 1;
		default:return 0;
		}
	case 0x736F676E7972616C:
		switch(wp[1]){
		case 0x0000747369706F63:return 1;
		default:return 0;
		}
	case 0x736F676F72726566:
		switch(wp[1]){
		case 0x000065746972616C:return 1;
		default:return 0;
		}
	case 0x736F677972657470:
		switch(wp[1]){
		case 0x000073756F6E6970:return 1;
		default:return 0;
		}
	case 0x736F6863616C6573:
		switch(wp[1]){
		case 0x000073756F6D6F74:return 1;
		default:return 0;
		}
	case 0x736F6863696C6F64:
		switch(wp[1]){
		case 0x000073756F6C7974:return 1;
		default:return 0;
		}
	case 0x736F68636E6F7262:
		switch(wp[1]){
		case 0x0000747369706F63:return 1;
		default:return 0;
		}
	case 0x736F68706174656D:
		switch(wp[1]){
		case 0x00006369726F6870:return 1;
		default:return 0;
		}
	case 0x736F68706F696874:
		switch(wp[1]){
		case 0x00006369726F6870:return 1;
		case 0x00006C79726F6870:return 1;
		default:return 0;
		}
	case 0x736F68706F707968:
		switch(wp[1]){
		case 0x00006369726F6870:return 1;
		default:return 0;
		}
	case 0x736F68706F727970:
		switch(wp[1]){
		case 0x00006369726F6870:return 1;
		default:return 0;
		}
	case 0x736F6870796C6F70:
		switch(wp[1]){
		case 0x00006369726F6870:return 1;
		default:return 0;
		}
	case 0x736F6874696E726F:
		switch(wp[1]){
		case 0x00006E6169727561:return 1;
		case 0x0000747369706F63:return 1;
		default:return 0;
		}
	case 0x736F696469736162:
		switch(wp[1]){
		case 0x000073756F726F70:return 1;
		default:return 0;
		}
	case 0x736F696D6F726361:
		switch(wp[1]){
		case 0x00006C616E726574:return 1;
		default:return 0;
		}
	case 0x736F6C6168706D6F:
		switch(wp[1]){
		case 0x000073697370656B:return 1;
		case 0x000073756F6E6970:return 1;
		default:return 0;
		}
	case 0x736F6C636E696E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x736F6C66696D6573:
		switch(wp[1]){
		case 0x000065736F6C7563:return 1;
		case 0x000073756F6C7563:return 1;
		default:return 0;
		}
	case 0x736F6C6968706564:
		switch(wp[1]){
		case 0x0000657A6968706F:return 1;
		default:return 0;
		}
	case 0x736F6C6968706E75:
		switch(wp[1]){
		case 0x0000657A6968706F:return 1;
		default:return 0;
		}
	case 0x736F6C6C69706170:
		switch(wp[1]){
		case 0x0000616D6F637261:return 1;
		default:return 0;
		}
	case 0x736F6C6C69707570:
		switch(wp[1]){
		case 0x0000636974706F63:return 1;
		default:return 0;
		}
	case 0x736F6C706964626F:
		switch(wp[1]){
		case 0x0000796E6F6D6574:return 1;
		default:return 0;
		}
	case 0x736F6C7974636164:
		switch(wp[1]){
		case 0x00006C616E726574:return 1;
		default:return 0;
		}
	case 0x736F6D74616E6F6E:
		switch(wp[1]){
		case 0x0000636972656870:return 1;
		default:return 0;
		}
	case 0x736F6E6170797274:
		switch(wp[1]){
		case 0x0000636974616D6F:return 1;
		default:return 0;
		}
	case 0x736F6E61766C6167:
		switch(wp[1]){
		case 0x0000797265677275:return 1;
		default:return 0;
		}
	case 0x736F6E676174656D:
		switch(wp[1]){
		case 0x00006D7369636974:return 1;
		default:return 0;
		}
	case 0x736F6E6963726163:
		switch(wp[1]){
		case 0x0000616D6F637261:return 1;
		default:return 0;
		}
	case 0x736F6E6975676E69:
		switch(wp[1]){
		case 0x00006C61746F7263:return 1;
		default:return 0;
		}
	case 0x736F6E6F68706973:
		switch(wp[1]){
		case 0x000073756F6D6F74:return 1;
		default:return 0;
		}
	case 0x736F706572706E75:
		switch(wp[1]){
		case 0x000073756F726574:return 1;
		default:return 0;
		}
	case 0x736F706D6F636E69:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x736F706F6964656D:
		switch(wp[1]){
		case 0x0000726F69726574:return 1;
		default:return 0;
		}
	case 0x736F706F72636173:
		switch(wp[1]){
		case 0x0000726F69726574:return 1;
		default:return 0;
		}
	case 0x736F706F736F7270:
		switch(wp[1]){
		case 0x0000736973696863:return 1;
		default:return 0;
		}
	case 0x736F706F73726F64:
		switch(wp[1]){
		case 0x0000646169726574:return 1;
		case 0x0000726F69726574:return 1;
		default:return 0;
		}
	case 0x736F706F746E656D:
		switch(wp[1]){
		case 0x0000726F69726574:return 1;
		default:return 0;
		}
	case 0x736F707265646E75:
		switch(wp[1]){
		case 0x0000726F73736573:return 1;
		default:return 0;
		}
	case 0x736F707369646E69:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x736F707369646E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x736F726265726563:
		switch(wp[1]){
		case 0x0000746E616E6970:return 1;
		default:return 0;
		}
	case 0x736F72636964756C:
		switch(wp[1]){
		case 0x000073756F697265:return 1;
		default:return 0;
		}
	case 0x736F72646E6F6863:
		switch(wp[1]){
		case 0x0000616D6F637261:return 1;
		case 0x00006C616E726574:return 1;
		default:return 0;
		}
	case 0x736F726563736976:
		switch(wp[1]){
		case 0x0000636974616D6F:return 1;
		case 0x000079726F736E65:return 1;
		default:return 0;
		}
	case 0x736F726574657275:
		switch(wp[1]){
		case 0x0000616D6F6E6574:return 1;
		default:return 0;
		}
	case 0x736F726F746F7270:
		switch(wp[1]){
		case 0x000064696F727561:return 1;
		case 0x00006E6169727561:return 1;
		default:return 0;
		}
	case 0x736F7270696D6573:
		switch(wp[1]){
		case 0x0000636974656874:return 1;
		default:return 0;
		}
	case 0x736F72707265766F:
		switch(wp[1]){
		case 0x000073756F726570:return 1;
		case 0x0000797469726570:return 1;
		default:return 0;
		}
	case 0x736F727463656C65:
		switch(wp[1]){
		case 0x0000736369746174:return 1;
		case 0x0000797265677275:return 1;
		default:return 0;
		}
	case 0x736F727463657073:
		switch(wp[1]){
		case 0x0000747369706F63:return 1;
		default:return 0;
		}
	case 0x736F746169646172:
		switch(wp[1]){
		case 0x0000657461636C75:return 1;
		case 0x0000657461697274:return 1;
		default:return 0;
		}
	case 0x736F746172726573:
		switch(wp[1]){
		case 0x000065736F6E6970:return 1;
		default:return 0;
		}
	case 0x736F7461746E6564:
		switch(wp[1]){
		case 0x0000657461727265:return 1;
		case 0x0000657461756E69:return 1;
		default:return 0;
		}
	case 0x736F746E61676967:
		switch(wp[1]){
		case 0x00006E6163617274:return 1;
		default:return 0;
		}
	case 0x736F7473676E7574:
		switch(wp[1]){
		case 0x0000636963696C69:return 1;
		default:return 0;
		}
	case 0x736F747369686373:
		switch(wp[1]){
		case 0x000061696E726574:return 1;
		default:return 0;
		}
	case 0x736F796874686369:
		switch(wp[1]){
		case 0x000064696F727561:return 1;
		case 0x00006E6169727561:return 1;
		default:return 0;
		}
	case 0x736F796D61726170:
		switch(wp[1]){
		case 0x00006E65676F6E69:return 1;
		default:return 0;
		}
	case 0x736F796D6F69656C:
		switch(wp[1]){
		case 0x0000616D6F637261:return 1;
		default:return 0;
		}
	case 0x737061636F757161:
		switch(wp[1]){
		case 0x0000736974696C75:return 1;
		default:return 0;
		}
	case 0x73726168706C7573:
		switch(wp[1]){
		case 0x0000657461696E65:return 1;
		case 0x000073756F696E65:return 1;
		default:return 0;
		}
	case 0x7372617265707573:
		switch(wp[1]){
		case 0x0000657461696E65:return 1;
		default:return 0;
		}
	case 0x7372657070696877:
		switch(wp[1]){
		case 0x000072657070616E:return 1;
		default:return 0;
		}
	case 0x7372657070696E73:
		switch(wp[1]){
		case 0x000072657070616E:return 1;
		default:return 0;
		}
	case 0x737265707265766F:
		switch(wp[1]){
		case 0x00006E6F69736175:return 1;
		default:return 0;
		}
	case 0x7372657075736E75:
		switch(wp[1]){
		case 0x0000646562697263:return 1;
		default:return 0;
		}
	case 0x737265746E696E75:
		switch(wp[1]){
		case 0x0000646573726570:return 1;
		default:return 0;
		}
	case 0x737265746E696F63:
		switch(wp[1]){
		case 0x0000676E69746365:return 1;
		default:return 0;
		}
	case 0x737265746E756F63:
		switch(wp[1]){
		case 0x0000656369767265:return 1;
		case 0x0000657475746174:return 1;
		case 0x00007463656A6275:return 1;
		case 0x000074686769656C:return 1;
		case 0x0000746E61746174:return 1;
		case 0x0000746E65696C61:return 1;
		default:return 0;
		}
	case 0x73726F6D65726E75:
		switch(wp[1]){
		case 0x0000796C6C756665:return 1;
		default:return 0;
		}
	case 0x737361706D696E75:
		switch(wp[1]){
		case 0x00006574616E6F69:return 1;
		default:return 0;
		}
	case 0x737361707265766F:
		switch(wp[1]){
		case 0x00006574616E6F69:return 1;
		default:return 0;
		}
	case 0x7373617265707573:
		switch(wp[1]){
		case 0x000065746169636F:return 1;
		case 0x00006E6F69747265:return 1;
		default:return 0;
		}
	case 0x7373617373616E75:
		switch(wp[1]){
		case 0x0000646574616E69:return 1;
		default:return 0;
		}
	case 0x7373656172747865:
		switch(wp[1]){
		case 0x00006C6169746E65:return 1;
		default:return 0;
		}
	case 0x73736563656E6E75:
		switch(wp[1]){
		case 0x0000646574617469:return 1;
		default:return 0;
		}
	case 0x7373657265707573:
		switch(wp[1]){
		case 0x00006C6169746E65:return 1;
		default:return 0;
		}
	case 0x73736572676E6F63:
		switch(wp[1]){
		case 0x00007473696E6F69:return 1;
		default:return 0;
		}
	case 0x73736572676F7270:
		switch(wp[1]){
		case 0x00006D73696E6F69:return 1;
		case 0x00007473696E6F69:return 1;
		case 0x00007972616E6F69:return 1;
		default:return 0;
		}
	case 0x73736572706D6F63:
		switch(wp[1]){
		case 0x0000726574656D6F:return 1;
		default:return 0;
		}
	case 0x7373657270707573:
		switch(wp[1]){
		case 0x00007473696E6F69:return 1;
		default:return 0;
		}
	case 0x7373657274736964:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x7373657274736E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x737365746E697571:
		switch(wp[1]){
		case 0x00006C6169746E65:return 1;
		default:return 0;
		}
	case 0x7373696468637261:
		switch(wp[1]){
		case 0x000072656C626D65:return 1;
		default:return 0;
		}
	case 0x7373696469766976:
		switch(wp[1]){
		case 0x00006E6F69746365:return 1;
		default:return 0;
		}
	case 0x7373696D69746E61:
		switch(wp[1]){
		case 0x00007972616E6F69:return 1;
		default:return 0;
		}
	case 0x73736F66696D6573:
		switch(wp[1]){
		case 0x000064657A696C69:return 1;
		default:return 0;
		}
	case 0x7373756A65646966:
		switch(wp[1]){
		case 0x00007972616E6F69:return 1;
		default:return 0;
		}
	case 0x737474656B636972:
		switch(wp[1]){
		case 0x0000786F706C6169:return 1;
		default:return 0;
		}
	case 0x7375616878656E69:
		switch(wp[1]){
		case 0x0000796C65766974:return 1;
		default:return 0;
		}
	case 0x7375636972756C70:
		switch(wp[1]){
		case 0x0000657461646970:return 1;
		default:return 0;
		}
	case 0x73756369746C756D:
		switch(wp[1]){
		case 0x0000657461646970:return 1;
		default:return 0;
		}
	case 0x7375637265706572:
		switch(wp[1]){
		case 0x0000796C65766973:return 1;
		default:return 0;
		}
	case 0x737566736E617274:
		switch(wp[1]){
		case 0x00007473696E6F69:return 1;
		default:return 0;
		}
	case 0x737568746E656E75:
		switch(wp[1]){
		case 0x0000636974736169:return 1;
		default:return 0;
		}
	case 0x7375697262616373:
		switch(wp[1]){
		case 0x000065736F6C7563:return 1;
		case 0x000073756F6C7563:return 1;
		default:return 0;
		}
	case 0x73756C6C69736964:
		switch(wp[1]){
		case 0x0000657A696E6F69:return 1;
		case 0x00007473696E6F69:return 1;
		default:return 0;
		}
	case 0x737963656C6F6863:
		switch(wp[1]){
		case 0x00006169676C6174:return 1;
		case 0x00006D6172676F74:return 1;
		case 0x0000796D6F746F74:return 1;
		case 0x0000797865706F74:return 1;
		default:return 0;
		}
	case 0x7379636F63726173:
		switch(wp[1]){
		case 0x00006E6165646974:return 1;
		case 0x00006E6169646974:return 1;
		default:return 0;
		}
	case 0x7379636F6874696C:
		switch(wp[1]){
		case 0x0000796D6F746F74:return 1;
		default:return 0;
		}
	case 0x7379636F6C65796D:
		switch(wp[1]){
		case 0x0000656C65636F74:return 1;
		default:return 0;
		}
	case 0x7379636F706C6F63:
		switch(wp[1]){
		case 0x0000656C65636F74:return 1;
		default:return 0;
		}
	case 0x7379636F72657475:
		switch(wp[1]){
		case 0x0000796D6F746F74:return 1;
		default:return 0;
		}
	case 0x7379636F74636572:
		switch(wp[1]){
		case 0x0000796D6F746F74:return 1;
		default:return 0;
		}
	case 0x7379637972636164:
		switch(wp[1]){
		case 0x00006169676C6174:return 1;
		default:return 0;
		}
	case 0x7379646F6574736F:
		switch(wp[1]){
		case 0x00007968706F7274:return 1;
		default:return 0;
		}
	case 0x7379646F6C796D61:
		switch(wp[1]){
		case 0x0000616973706570:return 1;
		default:return 0;
		}
	case 0x7379646F746F6870:
		switch(wp[1]){
		case 0x00006169726F6870:return 1;
		default:return 0;
		}
	case 0x737968706174656D:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x737968706F707968:
		switch(wp[1]){
		case 0x0000796D6F746365:return 1;
		default:return 0;
		}
	case 0x737968706F726573:
		switch(wp[1]){
		case 0x000079676F6C6F69:return 1;
		default:return 0;
		}
	case 0x737968706F747963:
		switch(wp[1]){
		case 0x000079676F6C6F69:return 1;
		default:return 0;
		}
	case 0x73796C6361746163:
		switch(wp[1]){
		case 0x000074736974616D:return 1;
		default:return 0;
		}
	case 0x737972636F6D6568:
		switch(wp[1]){
		case 0x00006E696C6C6174:return 1;
		default:return 0;
		}
	case 0x7379726569746E61:
		switch(wp[1]){
		case 0x000073616C657069:return 1;
		default:return 0;
		}
	case 0x7461626F72706572:
		switch(wp[1]){
		case 0x00007972616E6F69:return 1;
		default:return 0;
		}
	case 0x7461626F72706E75:
		switch(wp[1]){
		case 0x00007972616E6F69:return 1;
		default:return 0;
		}
	case 0x7461627265707968:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x7461636172747865:
		switch(wp[1]){
		case 0x00006C6172646568:return 1;
		default:return 0;
		}
	case 0x74616369646E6976:
		switch(wp[1]){
		case 0x000070696873726F:return 1;
		default:return 0;
		}
	case 0x7461636966696E75:
		switch(wp[1]){
		case 0x00007473696E6F69:return 1;
		default:return 0;
		}
	case 0x7461636E6F636E75:
		switch(wp[1]){
		case 0x0000646574616E65:return 1;
		default:return 0;
		}
	case 0x7461636F6C696870:
		switch(wp[1]){
		case 0x0000636974726168:return 1;
		default:return 0;
		}
	case 0x7461636F6C736964:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x7461636F72647968:
		switch(wp[1]){
		case 0x0000736973796C61:return 1;
		default:return 0;
		}
	case 0x7461636F74656D65:
		switch(wp[1]){
		case 0x0000636974726168:return 1;
		default:return 0;
		}
	case 0x7461636F746F6870:
		switch(wp[1]){
		case 0x0000636974796C61:return 1;
		case 0x000072657A796C61:return 1;
		case 0x0000736973796C61:return 1;
		default:return 0;
		}
	case 0x7461636F746F7270:
		switch(wp[1]){
		case 0x0000636975686365:return 1;
		default:return 0;
		}
	case 0x7461636F766E6F63:
		switch(wp[1]){
		case 0x00007473696E6F69:return 1;
		default:return 0;
		}
	case 0x7461637265707968:
		switch(wp[1]){
		case 0x0000636974726168:return 1;
		case 0x0000736973726168:return 1;
		case 0x0000736978656C61:return 1;
		default:return 0;
		}
	case 0x7461637265746E69:
		switch(wp[1]){
		case 0x0000646574616E65:return 1;
		default:return 0;
		}
	case 0x7461637564656E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x7461646572706564:
		switch(wp[1]){
		case 0x00007473696E6F69:return 1;
		default:return 0;
		}
	case 0x746164697571696C:
		switch(wp[1]){
		case 0x000070696873726F:return 1;
		default:return 0;
		}
	case 0x7461656665646E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x74616572636E6170:
		switch(wp[1]){
		case 0x000063696E65676F:return 1;
		case 0x000079687461706F:return 1;
		case 0x0000796D6F746365:return 1;
		default:return 0;
		}
	case 0x746166646E617267:
		switch(wp[1]){
		case 0x0000687369726568:return 1;
		default:return 0;
		}
	case 0x7461676572676573:
		switch(wp[1]){
		case 0x00007473696E6F69:return 1;
		default:return 0;
		}
	case 0x746168706D656E75:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x746169636F737361:
		switch(wp[1]){
		case 0x00006D73696E6F69:return 1;
		case 0x00007373656E6465:return 1;
		case 0x00007473696E6F69:return 1;
		default:return 0;
		}
	case 0x7461696475706572:
		switch(wp[1]){
		case 0x00007473696E6F69:return 1;
		default:return 0;
		}
	case 0x7461696C61746572:
		switch(wp[1]){
		case 0x00007473696E6F69:return 1;
		default:return 0;
		}
	case 0x7461697469766E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x74616B6F72756174:
		switch(wp[1]){
		case 0x0000616973706168:return 1;
		default:return 0;
		}
	case 0x74616C6669746E61:
		switch(wp[1]){
		case 0x0000676E69726574:return 1;
		default:return 0;
		}
	case 0x74616C69746C756D:
		switch(wp[1]){
		case 0x0000796C6C617265:return 1;
		default:return 0;
		}
	case 0x74616C6C6F636E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x74616C6F766E6F6E:
		switch(wp[1]){
		case 0x000064657A696C69:return 1;
		default:return 0;
		}
	case 0x74616C736967656C:
		switch(wp[1]){
		case 0x000070696873726F:return 1;
		default:return 0;
		}
	case 0x74616C736E617274:
		switch(wp[1]){
		case 0x000070696873726F:return 1;
		default:return 0;
		}
	case 0x74616D6172646E75:
		switch(wp[1]){
		case 0x0000656C62617A69:return 1;
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x74616D656874616D:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x74616D6568746170:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x74616D656C626D65:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x74616D656E67797A:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x74616D65736F7061:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x74616D6574737973:
		switch(wp[1]){
		case 0x00007373656E6369:return 1;
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x74616D67656C6870:
		switch(wp[1]){
		case 0x00007373656E6369:return 1;
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x74616D6769747361:
		switch(wp[1]){
		case 0x000065706F63736F:return 1;
		case 0x0000726574656D6F:return 1;
		case 0x0000796C6C616369:return 1;
		case 0x000079706F63736F:return 1;
		default:return 0;
		}
	case 0x74616D696C627573:
		switch(wp[1]){
		case 0x00007473696E6F69:return 1;
		default:return 0;
		}
	case 0x74616D696C636361:
		switch(wp[1]){
		case 0x0000656C62617A69:return 1;
		default:return 0;
		}
	case 0x74616D696E616E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x74616D6D656C6964:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x74616D6D65727473:
		switch(wp[1]){
		case 0x000068706172676F:return 1;
		default:return 0;
		}
	case 0x74616D6F6C706964:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x74616D6F6E6F6369:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x74616D6F72686361:
		switch(wp[1]){
		case 0x0000656C62617A69:return 1;
		case 0x0000656C6968706F:return 1;
		case 0x0000736973796C6F:return 1;
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x74616D726F666572:
		switch(wp[1]){
		case 0x00007473696E6F69:return 1;
		case 0x00007972616E6F69:return 1;
		default:return 0;
		}
	case 0x74616D7369686373:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x74616D73696D756E:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x74616D7369726F70:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x74616E6167726F6D:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x74616E61696D6568:
		switch(wp[1]){
		case 0x000073756F706F72:return 1;
		default:return 0;
		}
	case 0x74616E61696D6573:
		switch(wp[1]){
		case 0x00006C6163696D6F:return 1;
		case 0x000073756F706F72:return 1;
		default:return 0;
		}
	case 0x74616E6769736572:
		switch(wp[1]){
		case 0x00006D73696E6F69:return 1;
		default:return 0;
		}
	case 0x74616E6963636176:
		switch(wp[1]){
		case 0x00007473696E6F69:return 1;
		default:return 0;
		}
	case 0x74616E696D617865:
		switch(wp[1]){
		case 0x00006D73696E6F69:return 1;
		case 0x00007473696E6F69:return 1;
		default:return 0;
		}
	case 0x74616E7261636E69:
		switch(wp[1]){
		case 0x00007473696E6F69:return 1;
		default:return 0;
		}
	case 0x74616E7265707573:
		switch(wp[1]){
		case 0x0000796C6C617275:return 1;
		default:return 0;
		}
	case 0x74616E7265746C61:
		switch(wp[1]){
		case 0x00007473696E6F69:return 1;
		default:return 0;
		}
	case 0x74616F7274736167:
		switch(wp[1]){
		case 0x0000616968706F72:return 1;
		default:return 0;
		}
	case 0x746170656C646461:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x7461706973736964:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x7461706D79736E75:
		switch(wp[1]){
		case 0x0000676E697A6968:return 1;
		default:return 0;
		}
	case 0x7461706F656C6170:
		switch(wp[1]){
		case 0x000079676F6C6F68:return 1;
		default:return 0;
		}
	case 0x7461706F656D6F68:
		switch(wp[1]){
		case 0x00006E6169636968:return 1;
		case 0x0000797469636968:return 1;
		default:return 0;
		}
	case 0x7461706F6D736564:
		switch(wp[1]){
		case 0x000079676F6C6F68:return 1;
		default:return 0;
		}
	case 0x7461706F70706968:
		switch(wp[1]){
		case 0x000079676F6C6F68:return 1;
		default:return 0;
		}
	case 0x7461706F7263696D:
		switch(wp[1]){
		case 0x000079676F6C6F68:return 1;
		default:return 0;
		}
	case 0x7461706F7275656E:
		switch(wp[1]){
		case 0x000079676F6C6F68:return 1;
		default:return 0;
		}
	case 0x7461706F746F7270:
		switch(wp[1]){
		case 0x00006E6169636972:return 1;
		default:return 0;
		}
	case 0x7461706F74736968:
		switch(wp[1]){
		case 0x000079676F6C6F68:return 1;
		default:return 0;
		}
	case 0x7461706F74796870:
		switch(wp[1]){
		case 0x000079676F6C6F68:return 1;
		default:return 0;
		}
	case 0x7461707265707573:
		switch(wp[1]){
		case 0x00006369746F6972:return 1;
		default:return 0;
		}
	case 0x7461707265707968:
		switch(wp[1]){
		case 0x00006369746F6972:return 1;
		default:return 0;
		}
	case 0x7461707269747865:
		switch(wp[1]){
		case 0x00007473696E6F69:return 1;
		default:return 0;
		}
	case 0x7461707369646E75:
		switch(wp[1]){
		case 0x0000656C62616863:return 1;
		default:return 0;
		}
	case 0x7461726170657270:
		switch(wp[1]){
		case 0x00007473696E6F69:return 1;
		default:return 0;
		}
	case 0x74617262656C6563:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x746172636573626F:
		switch(wp[1]){
		case 0x00007972616E6F69:return 1;
		default:return 0;
		}
	case 0x746172636F656874:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x746172636F6D6564:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x746172636F747561:
		switch(wp[1]){
		case 0x00006C616369726F:return 1;
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x7461726574696572:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x746172677265766F:
		switch(wp[1]){
		case 0x0000796C6C756665:return 1;
		default:return 0;
		}
	case 0x7461726970736E69:
		switch(wp[1]){
		case 0x00007473696E6F69:return 1;
		default:return 0;
		}
	case 0x7461726F6E676970:
		switch(wp[1]){
		case 0x000073756F697469:return 1;
		default:return 0;
		}
	case 0x7461726F70726F63:
		switch(wp[1]){
		case 0x00006D73696E6F69:return 1;
		default:return 0;
		}
	case 0x7461726F74736572:
		switch(wp[1]){
		case 0x00006D73696E6F69:return 1;
		case 0x00007473696E6F69:return 1;
		default:return 0;
		}
	case 0x7461727469627261:
		switch(wp[1]){
		case 0x000070696873726F:return 1;
		case 0x00007473696E6F69:return 1;
		default:return 0;
		}
	case 0x7461727563627573:
		switch(wp[1]){
		case 0x000070696873726F:return 1;
		default:return 0;
		}
	case 0x74617275636F7270:
		switch(wp[1]){
		case 0x000070696873726F:return 1;
		default:return 0;
		}
	case 0x7461736E75697274:
		switch(wp[1]){
		case 0x0000646574617275:return 1;
		default:return 0;
		}
	case 0x746174616D726564:
		switch(wp[1]){
		case 0x0000616968706F72:return 1;
		default:return 0;
		}
	case 0x7461746365666661:
		switch(wp[1]){
		case 0x00007473696E6F69:return 1;
		default:return 0;
		}
	case 0x7461746369646F63:
		switch(wp[1]){
		case 0x000070696873726F:return 1;
		default:return 0;
		}
	case 0x7461746967616E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x7461746E6574736F:
		switch(wp[1]){
		case 0x0000796C73756F69:return 1;
		default:return 0;
		}
	case 0x746174736174656D:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x746174736F707968:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x746174736F727967:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x746174756D726570:
		switch(wp[1]){
		case 0x00007473696E6F69:return 1;
		default:return 0;
		}
	case 0x7461747570736964:
		switch(wp[1]){
		case 0x0000796C73756F69:return 1;
		default:return 0;
		}
	case 0x7461757169746E61:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x74617574636E7570:
		switch(wp[1]){
		case 0x00007473696E6F69:return 1;
		default:return 0;
		}
	case 0x7461767265736572:
		switch(wp[1]){
		case 0x00007473696E6F69:return 1;
		default:return 0;
		}
	case 0x746265646E696572:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x746265646E696E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x74626F7265707968:
		switch(wp[1]){
		case 0x0000657669737572:return 1;
		default:return 0;
		}
	case 0x74636166656E6562:
		switch(wp[1]){
		case 0x000070696873726F:return 1;
		default:return 0;
		}
	case 0x7463616669747261:
		switch(wp[1]){
		case 0x000073756F697469:return 1;
		default:return 0;
		}
	case 0x74636166756E616D:
		switch(wp[1]){
		case 0x0000656C62617275:return 1;
		default:return 0;
		}
	case 0x7463616C6F726573:
		switch(wp[1]){
		case 0x0000746E65637365:return 1;
		default:return 0;
		}
	case 0x7463617262696E75:
		switch(wp[1]){
		case 0x00006574616C6F65:return 1;
		default:return 0;
		}
	case 0x7463617262697274:
		switch(wp[1]){
		case 0x00006574616C6F65:return 1;
		default:return 0;
		}
	case 0x7463617265746E69:
		switch(wp[1]){
		case 0x00006D73696E6F69:return 1;
		case 0x00007473696E6F69:return 1;
		default:return 0;
		}
	case 0x7463617266666964:
		switch(wp[1]){
		case 0x0000726574656D6F:return 1;
		default:return 0;
		}
	case 0x74636172746E6F63:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		case 0x00007473696E6F69:return 1;
		default:return 0;
		}
	case 0x74636172746F7270:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x7463617274736261:
		switch(wp[1]){
		case 0x00006D73696E6F69:return 1;
		case 0x00007373656E6465:return 1;
		case 0x000073756F697469:return 1;
		case 0x00007473696E6F69:return 1;
		default:return 0;
		}
	case 0x7463617274736964:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x746361736E617274:
		switch(wp[1]){
		case 0x00007265656E6F69:return 1;
		default:return 0;
		}
	case 0x7463617461726170:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x7463656666616E75:
		switch(wp[1]){
		case 0x00006574616E6F69:return 1;
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x7463656666656E69:
		switch(wp[1]){
		case 0x00007974696C6175:return 1;
		default:return 0;
		}
	case 0x7463656C65617270:
		switch(wp[1]){
		case 0x000070696873726F:return 1;
		default:return 0;
		}
	case 0x7463656C656C6163:
		switch(wp[1]){
		case 0x0000797469636972:return 1;
		default:return 0;
		}
	case 0x7463656C656E6F6E:
		switch(wp[1]){
		case 0x0000646569666972:return 1;
		case 0x00006574796C6F72:return 1;
		default:return 0;
		}
	case 0x7463656C65726170:
		switch(wp[1]){
		case 0x0000796D6F6E6F72:return 1;
		default:return 0;
		}
	case 0x7463656C706F7061:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x74636570696D6573:
		switch(wp[1]){
		case 0x0000646574616E69:return 1;
		default:return 0;
		}
	case 0x74636570736E6F6E:
		switch(wp[1]){
		case 0x000072616C756361:return 1;
		default:return 0;
		}
	case 0x74636570736F7270:
		switch(wp[1]){
		case 0x00007373656C7375:return 1;
		default:return 0;
		}
	case 0x7463657073726570:
		switch(wp[1]){
		case 0x000068706172676F:return 1;
		case 0x0000726574656D6F:return 1;
		default:return 0;
		}
	case 0x7463657078656E69:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x7463657078656E75:
		switch(wp[1]){
		case 0x000064657461726F:return 1;
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x746365726F6C6F63:
		switch(wp[1]){
		case 0x0000796D6F74736F:return 1;
		default:return 0;
		}
	case 0x7463657369766976:
		switch(wp[1]){
		case 0x00007473696E6F69:return 1;
		default:return 0;
		}
	case 0x7463696464616E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x74636964656E6562:
		switch(wp[1]){
		case 0x00007972616E6F69:return 1;
		default:return 0;
		}
	case 0x7463696469746E61:
		switch(wp[1]){
		case 0x00007972616E6F69:return 1;
		default:return 0;
		}
	case 0x7463697274736572:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		case 0x00007473696E6F69:return 1;
		case 0x00007972616E6F69:return 1;
		default:return 0;
		}
	case 0x74636E7566726570:
		switch(wp[1]){
		case 0x000073756F69726F:return 1;
		case 0x00007972616E6F69:return 1;
		default:return 0;
		}
	case 0x74636E756A6E6F63:
		switch(wp[1]){
		case 0x0000736974697669:return 1;
		default:return 0;
		}
	case 0x74636E7570627573:
		switch(wp[1]){
		case 0x00006E6F69746175:return 1;
		default:return 0;
		}
	case 0x74636E75706D6F63:
		switch(wp[1]){
		case 0x0000796C73756F69:return 1;
		case 0x00007972616E6F69:return 1;
		default:return 0;
		}
	case 0x74636E75706E6F6E:
		switch(wp[1]){
		case 0x0000656C62617275:return 1;
		case 0x00006E6F69746175:return 1;
		default:return 0;
		}
	case 0x74636E757073696D:
		switch(wp[1]){
		case 0x00006E6F69746175:return 1;
		default:return 0;
		}
	case 0x74636E7570756361:
		switch(wp[1]){
		case 0x00006E6F69746175:return 1;
		case 0x0000726F74617275:return 1;
		default:return 0;
		}
	case 0x74636F647265766F:
		switch(wp[1]){
		case 0x0000657A696E6972:return 1;
		default:return 0;
		}
	case 0x7463756C666E6F6E:
		switch(wp[1]){
		case 0x0000676E69746175:return 1;
		default:return 0;
		}
	case 0x746375727473626F:
		switch(wp[1]){
		case 0x00006D73696E6F69:return 1;
		case 0x00007473696E6F69:return 1;
		default:return 0;
		}
	case 0x7463757274736564:
		switch(wp[1]){
		case 0x00006D73696E6F69:return 1;
		case 0x00007473696E6F69:return 1;
		default:return 0;
		}
	case 0x7463757274736E69:
		switch(wp[1]){
		case 0x000070696873726F:return 1;
		case 0x00007373656E6465:return 1;
		case 0x00007972616E6F69:return 1;
		default:return 0;
		}
	case 0x7465626168706C61:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x7465636165617270:
		switch(wp[1]){
		case 0x000072616C756261:return 1;
		default:return 0;
		}
	case 0x7465636174736F70:
		switch(wp[1]){
		case 0x000072616C756261:return 1;
		default:return 0;
		}
	case 0x7465646F7263696D:
		switch(wp[1]){
		case 0x00006E6F69746365:return 1;
		default:return 0;
		}
	case 0x7465647265746E69:
		switch(wp[1]){
		case 0x0000656E696D7265:return 1;
		default:return 0;
		}
	case 0x7465676578657065:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x7465676F6C6F7061:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x746567726F666E75:
		switch(wp[1]){
		case 0x0000796C676E6974:return 1;
		default:return 0;
		}
	case 0x7465686365746163:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x746568746174656D:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x7465687469746E61:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x746568746F707968:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x7465687473656E61:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x74656874736F7270:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x74656972706F7270:
		switch(wp[1]){
		case 0x000070696873726F:return 1;
		default:return 0;
		}
	case 0x7465697571736964:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x74656C65646E6F6E:
		switch(wp[1]){
		case 0x000073756F697265:return 1;
		default:return 0;
		}
	case 0x74656C6874616E75:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x74656C796E656870:
		switch(wp[1]){
		case 0x0000656E656C7968:return 1;
		default:return 0;
		}
	case 0x74656D61666C7573:
		switch(wp[1]){
		case 0x0000656E697A6168:return 1;
		default:return 0;
		}
	case 0x74656D6172746574:
		switch(wp[1]){
		case 0x0000656E656C7968:return 1;
		case 0x00006D75696C7968:return 1;
		default:return 0;
		}
	case 0x74656D61746E6570:
		switch(wp[1]){
		case 0x0000656E656C7968:return 1;
		default:return 0;
		}
	case 0x74656D6174706568:
		switch(wp[1]){
		case 0x0000656E656C7968:return 1;
		default:return 0;
		}
	case 0x74656D6874697261:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x74656D69746C756D:
		switch(wp[1]){
		case 0x00006D73696C6C61:return 1;
		case 0x00007473696C6C61:return 1;
		default:return 0;
		}
	case 0x74656D6F6E6F6365:
		switch(wp[1]){
		case 0x00006E6169636972:return 1;
		default:return 0;
		}
	case 0x74656D6F72756170:
		switch(wp[1]){
		case 0x000063696C6F6261:return 1;
		default:return 0;
		}
	case 0x74656D6F746F6870:
		switch(wp[1]){
		case 0x00006E6169636972:return 1;
		default:return 0;
		}
	case 0x74656D6F74736968:
		switch(wp[1]){
		case 0x0000736973616261:return 1;
		default:return 0;
		}
	case 0x74656D7265746E69:
		switch(wp[1]){
		case 0x0000636972656D61:return 1;
		default:return 0;
		}
	case 0x74656E6567697065:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x74656E65676E6170:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x74656E65676F6962:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x74656E6570657270:
		switch(wp[1]){
		case 0x00006E6F69746172:return 1;
		default:return 0;
		}
	case 0x74656E65706D6F63:
		switch(wp[1]){
		case 0x00006E6F69746172:return 1;
		default:return 0;
		}
	case 0x74656E67616D6564:
		switch(wp[1]){
		case 0x0000656C62617A69:return 1;
		default:return 0;
		}
	case 0x74656E696B616E61:
		switch(wp[1]){
		case 0x0000636972656D6F:return 1;
		default:return 0;
		}
	case 0x74656E6F68706E75:
		switch(wp[1]){
		case 0x00007373656E6369:return 1;
		default:return 0;
		}
	case 0x74656E7574726F66:
		switch(wp[1]){
		case 0x0000676E696C6C65:return 1;
		default:return 0;
		}
	case 0x7465706F7263696D:
		switch(wp[1]){
		case 0x000079676F6C6F72:return 1;
		default:return 0;
		}
	case 0x7465707265646E75:
		switch(wp[1]){
		case 0x000074616F636974:return 1;
		default:return 0;
		}
	case 0x7465707265746E69:
		switch(wp[1]){
		case 0x00007972616C6F69:return 1;
		default:return 0;
		}
	case 0x7465726574627573:
		switch(wp[1]){
		case 0x00006C6165726568:return 1;
		default:return 0;
		}
	case 0x7465726574737968:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x7465726F7275656E:
		switch(wp[1]){
		case 0x0000736974696E69:return 1;
		default:return 0;
		}
	case 0x7465727265746E69:
		switch(wp[1]){
		case 0x000072616C756369:return 1;
		default:return 0;
		}
	case 0x74657274736E6F6E:
		switch(wp[1]){
		case 0x0000656C62616863:return 1;
		default:return 0;
		}
	case 0x7465727569726570:
		switch(wp[1]){
		case 0x0000736974697265:return 1;
		case 0x0000736974697268:return 1;
		default:return 0;
		}
	case 0x7465746F7A6E6562:
		switch(wp[1]){
		case 0x0000656C6F7A6172:return 1;
		case 0x0000656E697A6172:return 1;
		default:return 0;
		}
	case 0x746575716F636E75:
		switch(wp[1]){
		case 0x0000796C68736974:return 1;
		default:return 0;
		}
	case 0x7466616572656874:
		switch(wp[1]){
		case 0x0000647261777265:return 1;
		default:return 0;
		}
	case 0x7466617263726961:
		switch(wp[1]){
		case 0x00006E616D6F7773:return 1;
		default:return 0;
		}
	case 0x746867696C626E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x7468676972657270:
		switch(wp[1]){
		case 0x0000796C73756F65:return 1;
		default:return 0;
		}
	case 0x7468676972666E75:
		switch(wp[1]){
		case 0x0000656C62616E65:return 1;
		default:return 0;
		}
	case 0x7468676973726166:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x746870616E656361:
		switch(wp[1]){
		case 0x0000656E656C7968:return 1;
		default:return 0;
		}
	case 0x746870616E6F7A61:
		switch(wp[1]){
		case 0x0000656E656C6168:return 1;
		default:return 0;
		}
	case 0x74687069646E6F6E:
		switch(wp[1]){
		case 0x00006C61676E6F68:return 1;
		default:return 0;
		}
	case 0x7468706F666C7573:
		switch(wp[1]){
		case 0x00006E69656C6168:return 1;
		default:return 0;
		}
	case 0x7468706F69726465:
		switch(wp[1]){
		case 0x000063696D6C6168:return 1;
		default:return 0;
		}
	case 0x7468706F69726570:
		switch(wp[1]){
		case 0x000063696D6C6168:return 1;
		default:return 0;
		}
	case 0x7468706F69746E61:
		switch(wp[1]){
		case 0x000063696D6C6168:return 1;
		default:return 0;
		}
	case 0x7468706F6E656461:
		switch(wp[1]){
		case 0x000061696D6C6168:return 1;
		default:return 0;
		}
	case 0x7468706F7263696D:
		switch(wp[1]){
		case 0x000061696D6C6168:return 1;
		case 0x000063696D6C6168:return 1;
		case 0x0000736F6D6C6168:return 1;
		case 0x000073756D6C6168:return 1;
		default:return 0;
		}
	case 0x7468706F72647968:
		switch(wp[1]){
		case 0x000061696D6C6168:return 1;
		case 0x0000736F6D6C6168:return 1;
		case 0x000073756D6C6168:return 1;
		default:return 0;
		}
	case 0x7468706F72677968:
		switch(wp[1]){
		case 0x000063696D6C6168:return 1;
		default:return 0;
		}
	case 0x7468706F726F7370:
		switch(wp[1]){
		case 0x000061696D6C6168:return 1;
		case 0x000063696D6C6168:return 1;
		default:return 0;
		}
	case 0x7468706F73726963:
		switch(wp[1]){
		case 0x000061696D6C6168:return 1;
		default:return 0;
		}
	case 0x7468706F796C6F70:
		switch(wp[1]){
		case 0x000063696D6C6168:return 1;
		default:return 0;
		}
	case 0x746961667265766F:
		switch(wp[1]){
		case 0x0000796C6C756668:return 1;
		default:return 0;
		}
	case 0x7469617765646974:
		switch(wp[1]){
		case 0x0000706968737265:return 1;
		default:return 0;
		}
	case 0x74696269686F7270:
		switch(wp[1]){
		case 0x00006D73696E6F69:return 1;
		case 0x00007473696E6F69:return 1;
		case 0x00007972616E6F69:return 1;
		default:return 0;
		}
	case 0x74696272616F7270:
		switch(wp[1]){
		case 0x00006E6F69746172:return 1;
		default:return 0;
		}
	case 0x7469627275637563:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x7469636C61636572:
		switch(wp[1]){
		case 0x00006E6F69746172:return 1;
		default:return 0;
		}
	case 0x746964656D657270:
		switch(wp[1]){
		case 0x0000796C64657461:return 1;
		default:return 0;
		}
	case 0x746964696C6C6170:
		switch(wp[1]){
		case 0x0000657461737261:return 1;
		default:return 0;
		}
	case 0x7469646E6F636E69:
		switch(wp[1]){
		case 0x00006574616E6F69:return 1;
		default:return 0;
		}
	case 0x7469646E6F636E75:
		switch(wp[1]){
		case 0x00006574616E6F69:return 1;
		default:return 0;
		}
	case 0x7469647561627573:
		switch(wp[1]){
		case 0x00007473696E6F69:return 1;
		default:return 0;
		}
	case 0x7469666F72706E75:
		switch(wp[1]){
		case 0x0000676E69726565:return 1;
		default:return 0;
		}
	case 0x7469676E6F6C626F:
		switch(wp[1]){
		case 0x00006C616E696475:return 1;
		default:return 0;
		}
	case 0x74696863756C6162:
		switch(wp[1]){
		case 0x00006D7569726568:return 1;
		default:return 0;
		}
	case 0x74696C6374736F70:
		switch(wp[1]){
		case 0x00006E61696C6C65:return 1;
		default:return 0;
		}
	case 0x74696C65676E6F63:
		switch(wp[1]){
		case 0x0000657461627275:return 1;
		default:return 0;
		}
	case 0x74696C656C6F6863:
		switch(wp[1]){
		case 0x0000736973616968:return 1;
		case 0x0000796D6F746F68:return 1;
		default:return 0;
		}
	case 0x74696C6968707973:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x74696C6C616E6F6E:
		switch(wp[1]){
		case 0x0000646574617265:return 1;
		default:return 0;
		}
	case 0x74696C6C65746173:
		switch(wp[1]){
		case 0x00006C616D697365:return 1;
		default:return 0;
		}
	case 0x74696C6F6C616973:
		switch(wp[1]){
		case 0x0000736973616968:return 1;
		default:return 0;
		}
	case 0x74696C6F6C657970:
		switch(wp[1]){
		case 0x0000796D6F746F68:return 1;
		default:return 0;
		}
	case 0x74696C6F6E686369:
		switch(wp[1]){
		case 0x000079676F6C6F68:return 1;
		default:return 0;
		}
	case 0x74696C6F70657270:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x74696C6F706F6567:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x74696C6F72747361:
		switch(wp[1]){
		case 0x000079676F6C6F68:return 1;
		default:return 0;
		}
	case 0x74696C6F74737963:
		switch(wp[1]){
		case 0x0000736973616968:return 1;
		default:return 0;
		}
	case 0x74696C6F74796870:
		switch(wp[1]){
		case 0x000079676F6C6F68:return 1;
		default:return 0;
		}
	case 0x74696C736E617274:
		switch(wp[1]){
		case 0x0000726F74617265:return 1;
		default:return 0;
		}
	case 0x74696C75706D6163:
		switch(wp[1]){
		case 0x000073756F706F72:return 1;
		default:return 0;
		}
	case 0x74696D61736C6162:
		switch(wp[1]){
		case 0x00007373656E6369:return 1;
		default:return 0;
		}
	case 0x74696D7265746E69:
		switch(wp[1]){
		case 0x0000796C676E6974:return 1;
		case 0x0000796C746E6574:return 1;
		default:return 0;
		}
	case 0x74696E65676E6F63:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x74696E65676F7270:
		switch(wp[1]){
		case 0x000070696873726F:return 1;
		default:return 0;
		}
	case 0x7469706172747865:
		switch(wp[1]){
		case 0x0000797261746975:return 1;
		default:return 0;
		}
	case 0x7469706569746E61:
		switch(wp[1]){
		case 0x00006C61696C6568:return 1;
		default:return 0;
		}
	case 0x746970656D736564:
		switch(wp[1]){
		case 0x00006D75696C6568:return 1;
		default:return 0;
		}
	case 0x746970657275656E:
		switch(wp[1]){
		case 0x00006D75696C6568:return 1;
		default:return 0;
		}
	case 0x7469706963657270:
		switch(wp[1]){
		case 0x00006E65676F6E69:return 1;
		case 0x0000796C64657461:return 1;
		default:return 0;
		}
	case 0x746970697463796E:
		switch(wp[1]){
		case 0x0000656E69636568:return 1;
		default:return 0;
		}
	case 0x7469706F63726563:
		switch(wp[1]){
		case 0x000064696F636568:return 1;
		default:return 0;
		}
	case 0x7469706F6E6D6573:
		switch(wp[1]){
		case 0x0000656E69636568:return 1;
		default:return 0;
		}
	case 0x7469706F72706572:
		switch(wp[1]){
		case 0x00006E6F69746169:return 1;
		default:return 0;
		}
	case 0x7469706F72706E75:
		switch(wp[1]){
		case 0x0000796C73756F69:return 1;
		case 0x000079726F746169:return 1;
		default:return 0;
		}
	case 0x7469706F746F6870:
		switch(wp[1]){
		case 0x0000726574656D6F:return 1;
		default:return 0;
		}
	case 0x746972616772616D:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		case 0x000079636E616D6F:return 1;
		default:return 0;
		}
	case 0x7469726172746C75:
		switch(wp[1]){
		case 0x00006D73696C6175:return 1;
		default:return 0;
		}
	case 0x746972636F707968:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x746972637265766F:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x74697265706F796D:
		switch(wp[1]){
		case 0x0000736974696E6F:return 1;
		default:return 0;
		}
	case 0x74697265706F7970:
		switch(wp[1]){
		case 0x0000736974696E6F:return 1;
		default:return 0;
		}
	case 0x7469726970736564:
		switch(wp[1]){
		case 0x0000657A696C6175:return 1;
		default:return 0;
		}
	case 0x7469726970736964:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x7469726970736E75:
		switch(wp[1]){
		case 0x0000657A696C6175:return 1;
		case 0x00007974696C6175:return 1;
		default:return 0;
		}
	case 0x7469727265707968:
		switch(wp[1]){
		case 0x00006D73696C6175:return 1;
		default:return 0;
		}
	case 0x746972746F727970:
		switch(wp[1]){
		case 0x0000636972747261:return 1;
		default:return 0;
		}
	case 0x7469736975716572:
		switch(wp[1]){
		case 0x00007473696E6F69:return 1;
		case 0x00007972616E6F69:return 1;
		default:return 0;
		}
	case 0x7469736975716E69:
		switch(wp[1]){
		case 0x000070696873726F:return 1;
		case 0x000073756F69726F:return 1;
		case 0x0000746E65697275:return 1;
		case 0x00007473696E6F69:return 1;
		default:return 0;
		}
	case 0x7469736F706F7270:
		switch(wp[1]){
		case 0x0000657A696E6F69:return 1;
		default:return 0;
		}
	case 0x7469736F70707573:
		switch(wp[1]){
		case 0x000073756F697469:return 1;
		case 0x00007972616E6F69:return 1;
		default:return 0;
		}
	case 0x746973736563656E:
		switch(wp[1]){
		case 0x0000796C64657461:return 1;
		default:return 0;
		}
	case 0x746974616C617274:
		switch(wp[1]){
		case 0x0000796C73756F69:return 1;
		default:return 0;
		}
	case 0x74697465706D6F63:
		switch(wp[1]){
		case 0x000070696873726F:return 1;
		default:return 0;
		}
	case 0x7469746963736461:
		switch(wp[1]){
		case 0x0000796C73756F69:return 1;
		default:return 0;
		}
	case 0x7469746964627573:
		switch(wp[1]){
		case 0x0000796C73756F69:return 1;
		default:return 0;
		}
	case 0x7469746E65766461:
		switch(wp[1]){
		case 0x0000796C73756F69:return 1;
		default:return 0;
		}
	case 0x7469746F7263696D:
		switch(wp[1]){
		case 0x00006E6F69746172:return 1;
		default:return 0;
		}
	case 0x746974706572626F:
		switch(wp[1]){
		case 0x0000796C73756F69:return 1;
		default:return 0;
		}
	case 0x7469747069726373:
		switch(wp[1]){
		case 0x0000796C73756F69:return 1;
		default:return 0;
		}
	case 0x7469757165726E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x74697573656A6E75:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x7469766172746E69:
		switch(wp[1]){
		case 0x0000656E696C6C65:return 1;
		default:return 0;
		}
	case 0x7469766F746F6870:
		switch(wp[1]){
		case 0x0000657079746F72:return 1;
		default:return 0;
		}
	case 0x7469767265646E75:
		switch(wp[1]){
		case 0x000064657A696C61:return 1;
		default:return 0;
		}
	case 0x746C756369726761:
		switch(wp[1]){
		case 0x0000796C6C617275:return 1;
		default:return 0;
		}
	case 0x746C756D69736E75:
		switch(wp[1]){
		case 0x000073756F656E61:return 1;
		default:return 0;
		}
	case 0x746E6163696D6573:
		switch(wp[1]){
		case 0x0000726576656C69:return 1;
		default:return 0;
		}
	case 0x746E6163796C6163:
		switch(wp[1]){
		case 0x000073756F6D6568:return 1;
		default:return 0;
		}
	case 0x746E6165616C6170:
		switch(wp[1]){
		case 0x00006369706F7268:return 1;
		default:return 0;
		}
	case 0x746E6168706C7573:
		switch(wp[1]){
		case 0x000063696E6F6D69:return 1;
		default:return 0;
		}
	case 0x746E616972656874:
		switch(wp[1]){
		case 0x00006369706F7268:return 1;
		default:return 0;
		}
	case 0x746E616C6C616E61:
		switch(wp[1]){
		case 0x00006E616564696F:return 1;
		default:return 0;
		}
	case 0x746E616C70627573:
		switch(wp[1]){
		case 0x0000656461726769:return 1;
		default:return 0;
		}
	case 0x746E616C706E6F6E:
		switch(wp[1]){
		case 0x0000676E696E776F:return 1;
		default:return 0;
		}
	case 0x746E616D6F726E75:
		switch(wp[1]){
		case 0x000064657A696369:return 1;
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x746E616E65616870:
		switch(wp[1]){
		case 0x000073756F726568:return 1;
		default:return 0;
		}
	case 0x746E616F656C6170:
		switch(wp[1]){
		case 0x00006369706F7268:return 1;
		default:return 0;
		}
	case 0x746E616F72796874:
		switch(wp[1]){
		case 0x00006E69786F7469:return 1;
		default:return 0;
		}
	case 0x746E616F746F7270:
		switch(wp[1]){
		case 0x00006369706F7268:return 1;
		default:return 0;
		}
	case 0x746E617265746E69:
		switch(wp[1]){
		case 0x00007972616E6E65:return 1;
		default:return 0;
		}
	case 0x746E6172746E6F63:
		switch(wp[1]){
		case 0x00006E6F69637369:return 1;
		default:return 0;
		}
	case 0x746E617279677261:
		switch(wp[1]){
		case 0x000073756F6D6568:return 1;
		default:return 0;
		}
	case 0x746E6173696D6E75:
		switch(wp[1]){
		case 0x00006369706F7268:return 1;
		default:return 0;
		}
	case 0x746E617473627573:
		switch(wp[1]){
		case 0x0000657669746169:return 1;
		case 0x0000657A696C6169:return 1;
		case 0x00006D73696C6169:return 1;
		case 0x00006E6F69746169:return 1;
		case 0x00007473696C6169:return 1;
		case 0x0000796C6C617669:return 1;
		case 0x00007974696C6169:return 1;
		default:return 0;
		}
	case 0x746E617664616E75:
		switch(wp[1]){
		case 0x000073756F656761:return 1;
		default:return 0;
		}
	case 0x746E65636174656D:
		switch(wp[1]){
		case 0x0000797469636972:return 1;
		default:return 0;
		}
	case 0x746E656363616E69:
		switch(wp[1]){
		case 0x00006E6F69746175:return 1;
		default:return 0;
		}
	case 0x746E6563696D6573:
		switch(wp[1]){
		case 0x00006C61696E6E65:return 1;
		default:return 0;
		}
	case 0x746E65636E697571:
		switch(wp[1]){
		case 0x00006C61696E6E65:return 1;
		default:return 0;
		}
	case 0x746E65636F656874:
		switch(wp[1]){
		case 0x00006D7369636972:return 1;
		default:return 0;
		}
	case 0x746E65636F74636F:
		switch(wp[1]){
		case 0x00006C61696E6E65:return 1;
		default:return 0;
		}
	case 0x746E65637265766F:
		switch(wp[1]){
		case 0x0000657A696C6172:return 1;
		default:return 0;
		}
	case 0x746E656469636361:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		case 0x00007974696C6169:return 1;
		default:return 0;
		}
	case 0x746E656469636E69:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x746E656469736572:
		switch(wp[1]){
		case 0x00007974696C6169:return 1;
		default:return 0;
		}
	case 0x746E6568706D796C:
		switch(wp[1]){
		case 0x0000736974697265:return 1;
		default:return 0;
		}
	case 0x746E656963736E75:
		switch(wp[1]){
		case 0x00006C6163696669:return 1;
		default:return 0;
		}
	case 0x746E6569726F6E75:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		default:return 0;
		}
	case 0x746E656A65746E61:
		switch(wp[1]){
		case 0x000072616C756361:return 1;
		default:return 0;
		}
	case 0x746E656C68707974:
		switch(wp[1]){
		case 0x0000736974697265:return 1;
		default:return 0;
		}
	case 0x746E656C696D6573:
		switch(wp[1]){
		case 0x000072616C756369:return 1;
		default:return 0;
		}
	case 0x746E656C69726570:
		switch(wp[1]){
		case 0x000072616C756369:return 1;
		default:return 0;
		}
	case 0x746E656C74736F70:
		switch(wp[1]){
		case 0x000072616C756369:return 1;
		default:return 0;
		}
	case 0x746E656D6163756E:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x746E656D67617266:
		switch(wp[1]){
		case 0x000073756F697469:return 1;
		default:return 0;
		}
	case 0x746E656D696D6564:
		switch(wp[1]){
		case 0x0000657265696E6F:return 1;
		default:return 0;
		}
	case 0x746E656D75677261:
		switch(wp[1]){
		case 0x000073756F697461:return 1;
		default:return 0;
		}
	case 0x746E656E6E656C62:
		switch(wp[1]){
		case 0x0000736974697265:return 1;
		default:return 0;
		}
	case 0x746E656E6F707865:
		switch(wp[1]){
		case 0x00006E6F69746169:return 1;
		default:return 0;
		}
	case 0x746E657265666564:
		switch(wp[1]){
		case 0x0000796D6F746365:return 1;
		case 0x00007974696C6169:return 1;
		default:return 0;
		}
	case 0x746E657265666E69:
		switch(wp[1]){
		case 0x00006D73696C6169:return 1;
		case 0x00007473696C6169:return 1;
		default:return 0;
		}
	case 0x746E657265766572:
		switch(wp[1]){
		case 0x00007974696C6169:return 1;
		default:return 0;
		}
	case 0x746E657373656E69:
		switch(wp[1]){
		case 0x00007974696C6169:return 1;
		default:return 0;
		}
	case 0x746E657373656F63:
		switch(wp[1]){
		case 0x00007974696C6169:return 1;
		default:return 0;
		}
	case 0x746E65746F706564:
		switch(wp[1]){
		case 0x00006E6F69746169:return 1;
		default:return 0;
		}
	case 0x746E657473697865:
		switch(wp[1]){
		case 0x0000657A696C6169:return 1;
		case 0x00006D73696C6169:return 1;
		case 0x00007473696C6169:return 1;
		default:return 0;
		}
	case 0x746E6574736F6E75:
		switch(wp[1]){
		case 0x000073756F697461:return 1;
		default:return 0;
		}
	case 0x746E65756C666E69:
		switch(wp[1]){
		case 0x00007974696C6169:return 1;
		default:return 0;
		}
	case 0x746E69616D657270:
		switch(wp[1]){
		case 0x000065636E616E65:return 1;
		default:return 0;
		}
	case 0x746E69616D6E6F6E:
		switch(wp[1]){
		case 0x000065636E616E65:return 1;
		default:return 0;
		}
	case 0x746E696175716361:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x746E696265726574:
		switch(wp[1]){
		case 0x00006574616E6968:return 1;
		case 0x000073756F6E6968:return 1;
		default:return 0;
		}
	case 0x746E696C7964616C:
		switch(wp[1]){
		case 0x0000657469687779:return 1;
		default:return 0;
		}
	case 0x746E696F6A736964:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x746E697265707573:
		switch(wp[1]){
		case 0x0000746E65646E65:return 1;
		default:return 0;
		}
	case 0x746E69727962616C:
		switch(wp[1]){
		case 0x00006D726F666968:return 1;
		case 0x0000746E6F646F68:return 1;
		default:return 0;
		}
	case 0x746E6F6369746E61:
		switch(wp[1]){
		case 0x000073756F696761:return 1;
		default:return 0;
		}
	case 0x746E6F637265766F:
		switch(wp[1]){
		case 0x0000657475626972:return 1;
		default:return 0;
		}
	case 0x746E6F7073627573:
		switch(wp[1]){
		case 0x000073756F656E61:return 1;
		default:return 0;
		}
	case 0x746E6F7073657270:
		switch(wp[1]){
		case 0x000073756F656E61:return 1;
		case 0x0000797469656E61:return 1;
		default:return 0;
		}
	case 0x746E6F70736E6F6E:
		switch(wp[1]){
		case 0x000073756F656E61:return 1;
		default:return 0;
		}
	case 0x746E6F7A69726F68:
		switch(wp[1]){
		case 0x00007373656E6C61:return 1;
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x746E756C6F766E75:
		switch(wp[1]){
		case 0x0000676E69726565:return 1;
		default:return 0;
		}
	case 0x746E756F63736964:
		switch(wp[1]){
		case 0x000065636E616E65:return 1;
		default:return 0;
		}
	case 0x746E756F6D6E6F6E:
		switch(wp[1]){
		case 0x000073756F6E6961:return 1;
		default:return 0;
		}
	case 0x746E757267736964:
		switch(wp[1]){
		case 0x0000746E656D656C:return 1;
		default:return 0;
		}
	case 0x746E7973796C6F70:
		switch(wp[1]){
		case 0x0000657A69746568:return 1;
		case 0x00006D7369736568:return 1;
		case 0x00006D7369746568:return 1;
		default:return 0;
		}
	case 0x746F626F656C6170:
		switch(wp[1]){
		case 0x00006C6163696E61:return 1;
		default:return 0;
		}
	case 0x746F626F6E687465:
		switch(wp[1]){
		case 0x00006C6163696E61:return 1;
		default:return 0;
		}
	case 0x746F63696C616863:
		switch(wp[1]){
		case 0x0000646969726568:return 1;
		default:return 0;
		}
	case 0x746F636973796870:
		switch(wp[1]){
		case 0x0000797061726568:return 1;
		default:return 0;
		}
	case 0x746F636F72647968:
		switch(wp[1]){
		case 0x0000656E696E7261:return 1;
		default:return 0;
		}
	case 0x746F64696863726F:
		switch(wp[1]){
		case 0x0000797061726568:return 1;
		default:return 0;
		}
	case 0x746F646E65627573:
		switch(wp[1]){
		case 0x00006C61696C6568:return 1;
		default:return 0;
		}
	case 0x746F67656E657270:
		switch(wp[1]){
		case 0x00006E6F69746169:return 1;
		default:return 0;
		}
	case 0x746F67656E6E6F6E:
		switch(wp[1]){
		case 0x00006E6F69746169:return 1;
		default:return 0;
		}
	case 0x746F67656E6F7270:
		switch(wp[1]){
		case 0x00006E6F69746169:return 1;
		default:return 0;
		}
	case 0x746F676E696E656D:
		switch(wp[1]){
		case 0x000064696F687079:return 1;
		default:return 0;
		}
	case 0x746F676E7972616C:
		switch(wp[1]){
		case 0x000064696F687079:return 1;
		default:return 0;
		}
	case 0x746F68636E6F7262:
		switch(wp[1]){
		case 0x000064696F687079:return 1;
		default:return 0;
		}
	case 0x746F6870656C6574:
		switch(wp[1]){
		case 0x000068706172676F:return 1;
		default:return 0;
		}
	case 0x746F68706F6C6F68:
		switch(wp[1]){
		case 0x0000726574656D6F:return 1;
		default:return 0;
		}
	case 0x746F68706F727970:
		switch(wp[1]){
		case 0x000068706172676F:return 1;
		case 0x0000726574656D6F:return 1;
		default:return 0;
		}
	case 0x746F68706F747561:
		switch(wp[1]){
		case 0x000068706172676F:return 1;
		case 0x0000797274656D6F:return 1;
		default:return 0;
		}
	case 0x746F6874696E726F:
		switch(wp[1]){
		case 0x00006C6163696D6F:return 1;
		default:return 0;
		}
	case 0x746F69626174656D:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x746F69626F726561:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x746F696874726570:
		switch(wp[1]){
		case 0x000065727968706F:return 1;
		default:return 0;
		}
	case 0x746F696C65687061:
		switch(wp[1]){
		case 0x00006D7369706F72:return 1;
		default:return 0;
		}
	case 0x746F697265747261:
		switch(wp[1]){
		case 0x0000736973706572:return 1;
		default:return 0;
		}
	case 0x746F6C6168706563:
		switch(wp[1]){
		case 0x0000726F74636172:return 1;
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x746F6C696B696F70:
		switch(wp[1]){
		case 0x000063696D726568:return 1;
		default:return 0;
		}
	case 0x746F6C6C6174656D:
		switch(wp[1]){
		case 0x0000797061726568:return 1;
		default:return 0;
		}
	case 0x746F6C79706D6163:
		switch(wp[1]){
		case 0x000073756F706F72:return 1;
		default:return 0;
		}
	case 0x746F6D646E617267:
		switch(wp[1]){
		case 0x00006D7369726568:return 1;
		default:return 0;
		}
	case 0x746F6D6F7263696D:
		switch(wp[1]){
		case 0x000065706F63736F:return 1;
		default:return 0;
		}
	case 0x746F6D6F72686361:
		switch(wp[1]){
		case 0x0000616968636972:return 1;
		default:return 0;
		}
	case 0x746F6D736F646E65:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x746F6E616863656D:
		switch(wp[1]){
		case 0x0000797061726568:return 1;
		default:return 0;
		}
	case 0x746F6E61766C6167:
		switch(wp[1]){
		case 0x00006D7369706F72:return 1;
		case 0x0000797061726568:return 1;
		default:return 0;
		}
	case 0x746F6E6963636176:
		switch(wp[1]){
		case 0x0000797061726568:return 1;
		default:return 0;
		}
	case 0x746F6E696D756C61:
		switch(wp[1]){
		case 0x000063696D726568:return 1;
		default:return 0;
		}
	case 0x746F6E7079686E75:
		switch(wp[1]){
		case 0x0000656C62617A69:return 1;
		default:return 0;
		}
	case 0x746F70696E656C70:
		switch(wp[1]){
		case 0x00006C6169746E65:return 1;
		default:return 0;
		}
	case 0x746F706F656C6170:
		switch(wp[1]){
		case 0x0000796F6C6F6D61:return 1;
		default:return 0;
		}
	case 0x746F726479687061:
		switch(wp[1]){
		case 0x00006D7369706F72:return 1;
		default:return 0;
		}
	case 0x746F726563736976:
		switch(wp[1]){
		case 0x0000636968706F72:return 1;
		default:return 0;
		}
	case 0x746F72656F747561:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x746F726574736167:
		switch(wp[1]){
		case 0x00006E6168636972:return 1;
		default:return 0;
		}
	case 0x746F726F7461766F:
		switch(wp[1]){
		case 0x0000657461646E75:return 1;
		default:return 0;
		}
	case 0x746F727463656C65:
		switch(wp[1]){
		case 0x000063696D726568:return 1;
		case 0x000063696E686365:return 1;
		case 0x00006C616D726568:return 1;
		case 0x00006D7369706F72:return 1;
		case 0x0000797061726568:return 1;
		default:return 0;
		}
	case 0x746F7274696E6964:
		switch(wp[1]){
		case 0x0000656E65756C6F:return 1;
		default:return 0;
		}
	case 0x746F74616D656168:
		switch(wp[1]){
		case 0x00006C616D726568:return 1;
		default:return 0;
		}
	case 0x746F74616D696C63:
		switch(wp[1]){
		case 0x0000797061726568:return 1;
		default:return 0;
		}
	case 0x746F74616D726564:
		switch(wp[1]){
		case 0x0000797061726568:return 1;
		default:return 0;
		}
	case 0x746F7463616C6167:
		switch(wp[1]){
		case 0x0000797061726568:return 1;
		default:return 0;
		}
	case 0x746F74656E67616D:
		switch(wp[1]){
		case 0x0000797061726568:return 1;
		default:return 0;
		}
	case 0x746F747065727473:
		switch(wp[1]){
		case 0x00006C6168636972:return 1;
		case 0x00006E6963697268:return 1;
		default:return 0;
		}
	case 0x746F74706D797361:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x746F747369656C63:
		switch(wp[1]){
		case 0x00006D7569636568:return 1;
		default:return 0;
		}
	case 0x746F74736F6E7973:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x746F767275636572:
		switch(wp[1]){
		case 0x00006574616E7265:return 1;
		default:return 0;
		}
	case 0x746F79706F747561:
		switch(wp[1]){
		case 0x0000797061726568:return 1;
		default:return 0;
		}
	case 0x747061637265766F:
		switch(wp[1]){
		case 0x0000796C73756F69:return 1;
		default:return 0;
		}
	case 0x7470656365646E75:
		switch(wp[1]){
		case 0x000073756F697469:return 1;
		default:return 0;
		}
	case 0x7470656C6174656D:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x7470656C6F707968:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x7470657369746E61:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x747065736F747561:
		switch(wp[1]){
		case 0x000061696D656369:return 1;
		default:return 0;
		}
	case 0x7470697263736461:
		switch(wp[1]){
		case 0x000073756F697469:return 1;
		default:return 0;
		}
	case 0x7470697263736564:
		switch(wp[1]){
		case 0x00007473696E6F69:return 1;
		default:return 0;
		}
	case 0x7470697263736E69:
		switch(wp[1]){
		case 0x00007473696E6F69:return 1;
		default:return 0;
		}
	case 0x7470697263736E75:
		switch(wp[1]){
		case 0x0000796C6C617275:return 1;
		default:return 0;
		}
	case 0x74706D6163616E61:
		switch(wp[1]){
		case 0x0000726574656D6F:return 1;
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x74706D65746E6F63:
		switch(wp[1]){
		case 0x0000796C73756F75:return 1;
		default:return 0;
		}
	case 0x74706D7573657270:
		switch(wp[1]){
		case 0x0000796C73756F69:return 1;
		case 0x0000796C73756F75:return 1;
		default:return 0;
		}
	case 0x74706D7973657270:
		switch(wp[1]){
		case 0x0000636974616D6F:return 1;
		default:return 0;
		}
	case 0x74706D79736E6F6E:
		switch(wp[1]){
		case 0x0000636974616D6F:return 1;
		default:return 0;
		}
	case 0x74706F6863697274:
		switch(wp[1]){
		case 0x0000646967797265:return 1;
		default:return 0;
		}
	case 0x74706F6D6F726863:
		switch(wp[1]){
		case 0x0000726574656D6F:return 1;
		default:return 0;
		}
	case 0x7470796C67616E61:
		switch(wp[1]){
		case 0x000068706172676F:return 1;
		default:return 0;
		}
	case 0x74707972636F7270:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x747261636F726561:
		switch(wp[1]){
		case 0x000068706172676F:return 1;
		default:return 0;
		}
	case 0x7472616469656C63:
		switch(wp[1]){
		case 0x0000736974697268:return 1;
		default:return 0;
		}
	case 0x7472616475657370:
		switch(wp[1]){
		case 0x00007369736F7268:return 1;
		default:return 0;
		}
	case 0x7472616568676962:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x7472616568736964:
		switch(wp[1]){
		case 0x0000746E656D6E65:return 1;
		default:return 0;
		}
	case 0x7472616568746F68:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x7472616874657473:
		switch(wp[1]){
		case 0x0000736974697265:return 1;
		default:return 0;
		}
	case 0x7472616968706D61:
		switch(wp[1]){
		case 0x00007369736F7268:return 1;
		default:return 0;
		}
	case 0x74726169746C756D:
		switch(wp[1]){
		case 0x000072616C756369:return 1;
		default:return 0;
		}
	case 0x7472616D75656872:
		switch(wp[1]){
		case 0x0000736974697268:return 1;
		default:return 0;
		}
	case 0x7472616D75656E70:
		switch(wp[1]){
		case 0x00007369736F7268:return 1;
		default:return 0;
		}
	case 0x7472616F6574736F:
		switch(wp[1]){
		case 0x0000736974697268:return 1;
		default:return 0;
		}
	case 0x747261707265766F:
		switch(wp[1]){
		case 0x000072616C756369:return 1;
		case 0x00007974696C6169:return 1;
		default:return 0;
		}
	case 0x7472617074736F70:
		switch(wp[1]){
		case 0x0000746E65697275:return 1;
		default:return 0;
		}
	case 0x7472617265746E69:
		switch(wp[1]){
		case 0x000072616C756369:return 1;
		default:return 0;
		}
	case 0x747261796870736F:
		switch(wp[1]){
		case 0x0000736974697268:return 1;
		default:return 0;
		}
	case 0x7472656669746E61:
		switch(wp[1]){
		case 0x000072657A696C69:return 1;
		default:return 0;
		}
	case 0x7472657070616E75:
		switch(wp[1]){
		case 0x0000676E696E6961:return 1;
		default:return 0;
		}
	case 0x747265746E656E75:
		switch(wp[1]){
		case 0x0000676E696E6961:return 1;
		default:return 0;
		}
	case 0x747265746E756F63:
		switch(wp[1]){
		case 0x00006E6F73616572:return 1;
		case 0x0000746867756F68:return 1;
		default:return 0;
		}
	case 0x74726F6172746C75:
		switch(wp[1]){
		case 0x000079786F646F68:return 1;
		default:return 0;
		}
	case 0x74726F6365646E75:
		switch(wp[1]){
		case 0x0000646574616369:return 1;
		default:return 0;
		}
	case 0x74726F6378656E75:
		switch(wp[1]){
		case 0x0000646574616369:return 1;
		default:return 0;
		}
	case 0x74726F6D6D696E75:
		switch(wp[1]){
		case 0x000064657A696C61:return 1;
		default:return 0;
		}
	case 0x74726F7065726E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x74726F7764616F72:
		switch(wp[1]){
		case 0x00007373656E6968:return 1;
		default:return 0;
		}
	case 0x74726F7765746F6E:
		switch(wp[1]){
		case 0x00007373656E6968:return 1;
		default:return 0;
		}
	case 0x74726F7772616564:
		switch(wp[1]){
		case 0x00007373656E6968:return 1;
		default:return 0;
		}
	case 0x74726F777377656E:
		switch(wp[1]){
		case 0x00007373656E6968:return 1;
		default:return 0;
		}
	case 0x7472756F63736964:
		switch(wp[1]){
		case 0x0000796C73756F65:return 1;
		default:return 0;
		}
	case 0x7473616365726F66:
		switch(wp[1]){
		case 0x000064616568656C:return 1;
		default:return 0;
		}
	case 0x74736163696D6573:
		switch(wp[1]){
		case 0x00006E6F69746172:return 1;
		default:return 0;
		}
	case 0x747361667265766F:
		switch(wp[1]){
		case 0x000073756F696469:return 1;
		default:return 0;
		}
	case 0x747361676F707968:
		switch(wp[1]){
		case 0x0000656C65636F72:return 1;
		default:return 0;
		}
	case 0x74736168636F7473:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x7473616C6F686373:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x7473616D64616568:
		switch(wp[1]){
		case 0x0000706968737265:return 1;
		default:return 0;
		}
	case 0x7473616D6B736174:
		switch(wp[1]){
		case 0x0000706968737265:return 1;
		default:return 0;
		}
	case 0x7473616D74736F70:
		switch(wp[1]){
		case 0x0000656B696C7265:return 1;
		case 0x0000706968737265:return 1;
		default:return 0;
		}
	case 0x7473616E616E7973:
		switch(wp[1]){
		case 0x00007369736F6D6F:return 1;
		default:return 0;
		}
	case 0x7473616E6F656C70:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x7473616E6F707968:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x74736172636F7270:
		switch(wp[1]){
		case 0x0000726F74616E69:return 1;
		default:return 0;
		}
	case 0x7473617265646570:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x747361726F6C6863:
		switch(wp[1]){
		case 0x00006574696C6F72:return 1;
		default:return 0;
		}
	case 0x74736172746E6F63:
		switch(wp[1]){
		case 0x000073756C756D69:return 1;
		default:return 0;
		}
	case 0x74736261696D6573:
		switch(wp[1]){
		case 0x0000646574636172:return 1;
		default:return 0;
		}
	case 0x747362617265766F:
		switch(wp[1]){
		case 0x000073756F696D65:return 1;
		default:return 0;
		}
	case 0x7473627573657270:
		switch(wp[1]){
		case 0x00006C6169746E61:return 1;
		default:return 0;
		}
	case 0x7473627573697274:
		switch(wp[1]){
		case 0x0000646574757469:return 1;
		default:return 0;
		}
	case 0x74736275736E6F63:
		switch(wp[1]){
		case 0x0000657669746E61:return 1;
		case 0x00006C6169746E61:return 1;
		default:return 0;
		}
	case 0x74736275736E6F6E:
		switch(wp[1]){
		case 0x0000657669746E61:return 1;
		case 0x00006C6169746E61:return 1;
		default:return 0;
		}
	case 0x74736275736F7270:
		switch(wp[1]){
		case 0x0000657669746E61:return 1;
		default:return 0;
		}
	case 0x7473656170616E61:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x74736566696E616D:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x7473656769646E69:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x74736569706F7369:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x7473656D6F646E75:
		switch(wp[1]){
		case 0x0000646574616369:return 1;
		default:return 0;
		}
	case 0x7473656E65666564:
		switch(wp[1]){
		case 0x00006E6F69746172:return 1;
		default:return 0;
		}
	case 0x7473656E6D616E61:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x7473657265707573:
		switch(wp[1]){
		case 0x00006873696C6261:return 1;
		default:return 0;
		}
	case 0x7473657265746E69:
		switch(wp[1]){
		case 0x0000656E69726175:return 1;
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x747365746F667572:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x7473657474616E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x747365766E696E75:
		switch(wp[1]){
		case 0x0000646574616769:return 1;
		case 0x0000656C62616769:return 1;
		default:return 0;
		}
	case 0x7473676E6976696C:
		switch(wp[1]){
		case 0x0000657469656E6F:return 1;
		default:return 0;
		}
	case 0x7473687469776E75:
		switch(wp[1]){
		case 0x0000676E69646E61:return 1;
		default:return 0;
		}
	case 0x74736963656C6F73:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x7473696469757165:
		switch(wp[1]){
		case 0x00006C6169746E61:return 1;
		default:return 0;
		}
	case 0x747369646F726170:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x747369647265766F:
		switch(wp[1]){
		case 0x00006E6F69746E65:return 1;
		default:return 0;
		}
	case 0x7473696664726168:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x7473696669636170:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x7473696765726572:
		switch(wp[1]){
		case 0x00006E6F69746172:return 1;
		default:return 0;
		}
	case 0x7473696765726E65:
		switch(wp[1]){
		case 0x00006E6F69746172:return 1;
		default:return 0;
		}
	case 0x747369676F6C7565:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x7473696863616C65:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x74736968696D6573:
		switch(wp[1]){
		case 0x00006C616369726F:return 1;
		default:return 0;
		}
	case 0x7473696869746E61:
		switch(wp[1]){
		case 0x000063696E696D61:return 1;
		default:return 0;
		}
	case 0x7473696C61626163:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x7473696C61656469:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x7473696C6167656C:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x7473696C61726F6D:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x7473696C61746166:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x7473696C61746976:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x7473696C6176616E:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x7473696C65766F6E:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x7473696C69677570:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x7473696D6974706F:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x7473696E616D7568:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x7473696E696D6461:
		switch(wp[1]){
		case 0x0000657669746172:return 1;
		case 0x00006E6F69746172:return 1;
		case 0x0000786972746172:return 1;
		default:return 0;
		}
	case 0x7473696E6F646568:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x7473696F67656E75:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x74736972616C6F73:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x7473697264617571:
		switch(wp[1]){
		case 0x0000657461726165:return 1;
		default:return 0;
		}
	case 0x7473697268636564:
		switch(wp[1]){
		case 0x0000657A696E6169:return 1;
		default:return 0;
		}
	case 0x7473697268636E75:
		switch(wp[1]){
		case 0x0000657A696E6169:return 1;
		case 0x00007974696E6169:return 1;
		default:return 0;
		}
	case 0x747369726F687061:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x747369726F697270:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x747369726F6C7970:
		switch(wp[1]){
		case 0x00007369736F6E65:return 1;
		default:return 0;
		}
	case 0x747369727574616E:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x7473697365726E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x7473697472616E69:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x7473697472616E75:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x74736975676E696C:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x7473697568707565:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x7473697572746C61:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x74736978656E6F6E:
		switch(wp[1]){
		case 0x00006C6169746E65:return 1;
		default:return 0;
		}
	case 0x74736D7563726963:
		switch(wp[1]){
		case 0x00006C6169746E61:return 1;
		default:return 0;
		}
	case 0x74736E6970736E75:
		switch(wp[1]){
		case 0x0000656B696C7265:return 1;
		default:return 0;
		}
	case 0x74736E6F63657270:
		switch(wp[1]){
		case 0x0000746E65757469:return 1;
		default:return 0;
		}
	case 0x74736E6F636E6F6E:
		switch(wp[1]){
		case 0x0000656C62617572:return 1;
		case 0x0000746E65757469:return 1;
		default:return 0;
		}
	case 0x74736E6F6373696D:
		switch(wp[1]){
		case 0x0000656C62617572:return 1;
		default:return 0;
		}
	case 0x74736F62656C6870:
		switch(wp[1]){
		case 0x00007369736F6E65:return 1;
		case 0x0000736973706572:return 1;
		default:return 0;
		}
	case 0x74736F63616C616D:
		switch(wp[1]){
		case 0x000073756F636172:return 1;
		default:return 0;
		}
	case 0x74736F65616C6170:
		switch(wp[1]){
		case 0x00006C6174616972:return 1;
		case 0x00006D7574616972:return 1;
		default:return 0;
		}
	case 0x74736F6863797370:
		switch(wp[1]){
		case 0x00006C6163697461:return 1;
		default:return 0;
		}
	case 0x74736F6870617267:
		switch(wp[1]){
		case 0x00006C6163697461:return 1;
		default:return 0;
		}
	case 0x74736F68706C7573:
		switch(wp[1]){
		case 0x00006564696E6E61:return 1;
		case 0x00006574616E6E61:return 1;
		case 0x00006574696E6E61:return 1;
		case 0x000073756F6E6E61:return 1;
		default:return 0;
		}
	case 0x74736F696E617263:
		switch(wp[1]){
		case 0x00007369736F6E65:return 1;
		default:return 0;
		}
	case 0x74736F697261766F:
		switch(wp[1]){
		case 0x0000736973657265:return 1;
		default:return 0;
		}
	case 0x74736F6973697065:
		switch(wp[1]){
		case 0x00007369736F6E65:return 1;
		default:return 0;
		}
	case 0x74736F6C68707974:
		switch(wp[1]){
		case 0x00007369736F6E65:return 1;
		default:return 0;
		}
	case 0x74736F6D6F746E65:
		switch(wp[1]){
		case 0x000073756F636172:return 1;
		default:return 0;
		}
	case 0x74736F6E65737261:
		switch(wp[1]){
		case 0x00006C6F63617279:return 1;
		default:return 0;
		}
	case 0x74736F6E67616964:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x74736F6E676F6567:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x74736F6E676F7270:
		switch(wp[1]){
		case 0x0000656C62616369:return 1;
		case 0x0000726F74616369:return 1;
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x74736F7065746E61:
		switch(wp[1]){
		case 0x000073756F6D7568:return 1;
		default:return 0;
		}
	case 0x74736F72656C6373:
		switch(wp[1]){
		case 0x00007369736F6E65:return 1;
		default:return 0;
		}
	case 0x74736F7265746568:
		switch(wp[1]){
		case 0x0000636968706F72:return 1;
		default:return 0;
		}
	case 0x74736F7265746E65:
		switch(wp[1]){
		case 0x00007369736F6E65:return 1;
		default:return 0;
		}
	case 0x74736F7268747261:
		switch(wp[1]){
		case 0x0000616D67697265:return 1;
		default:return 0;
		}
	case 0x74736F726F6C7970:
		switch(wp[1]){
		case 0x00007369736F6E65:return 1;
		default:return 0;
		}
	case 0x74736F7274736167:
		switch(wp[1]){
		case 0x00007369736F6E65:return 1;
		default:return 0;
		}
	case 0x74736F7274796C65:
		switch(wp[1]){
		case 0x00007369736F6E65:return 1;
		default:return 0;
		}
	case 0x74736F73736F6C67:
		switch(wp[1]){
		case 0x0000736973657265:return 1;
		default:return 0;
		}
	case 0x74736F74616D6568:
		switch(wp[1]){
		case 0x0000657469696269:return 1;
		default:return 0;
		}
	case 0x74736F74636F7270:
		switch(wp[1]){
		case 0x00007369736F6E65:return 1;
		default:return 0;
		}
	case 0x74736F7972636164:
		switch(wp[1]){
		case 0x00007369736F6E65:return 1;
		default:return 0;
		}
	case 0x7473756363616E75:
		switch(wp[1]){
		case 0x0000796C64656D6F:return 1;
		default:return 0;
		}
	case 0x7473756C6B63616C:
		switch(wp[1]){
		case 0x00007373656E7265:return 1;
		default:return 0;
		}
	case 0x7473756C6C696572:
		switch(wp[1]){
		case 0x00006E6F69746172:return 1;
		default:return 0;
		}
	case 0x7473756C6C696E75:
		switch(wp[1]){
		case 0x0000657669746172:return 1;
		default:return 0;
		}
	case 0x7473757263616E61:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x7473757263627573:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x74737572636E6F6E:
		switch(wp[1]){
		case 0x000073756F656361:return 1;
		default:return 0;
		}
	case 0x74737572666E6F6E:
		switch(wp[1]){
		case 0x00006E6F69746172:return 1;
		default:return 0;
		}
	case 0x747379646F70696C:
		switch(wp[1]){
		case 0x0000616968706F72:return 1;
		default:return 0;
		}
	case 0x747379687265766F:
		switch(wp[1]){
		case 0x00006C6163697265:return 1;
		default:return 0;
		}
	case 0x7473796874736F70:
		switch(wp[1]){
		case 0x00006C6163697265:return 1;
		default:return 0;
		}
	case 0x7473796D68637261:
		switch(wp[1]){
		case 0x00006575676F6761:return 1;
		default:return 0;
		}
	case 0x7473797263627573:
		switch(wp[1]){
		case 0x0000656E696C6C61:return 1;
		default:return 0;
		}
	case 0x7473797263657270:
		switch(wp[1]){
		case 0x0000656E696C6C61:return 1;
		default:return 0;
		}
	case 0x7473797263697065:
		switch(wp[1]){
		case 0x0000656E696C6C61:return 1;
		default:return 0;
		}
	case 0x74737972636E6F6E:
		switch(wp[1]){
		case 0x0000656E696C6C61:return 1;
		default:return 0;
		}
	case 0x7473797263737964:
		switch(wp[1]){
		case 0x0000656E696C6C61:return 1;
		default:return 0;
		}
	case 0x747379736F6C6F68:
		switch(wp[1]){
		case 0x0000636974616D65:return 1;
		default:return 0;
		}
	case 0x747379736F72656D:
		switch(wp[1]){
		case 0x0000636974616D65:return 1;
		default:return 0;
		}
	case 0x747379737265766F:
		switch(wp[1]){
		case 0x0000636974616D65:return 1;
		default:return 0;
		}
	case 0x7474617265707573:
		switch(wp[1]){
		case 0x0000746E61646E65:return 1;
		default:return 0;
		}
	case 0x7474617265746E69:
		switch(wp[1]){
		case 0x00006E6F69746972:return 1;
		default:return 0;
		}
	case 0x747469627265766F:
		switch(wp[1]){
		case 0x00007373656E7265:return 1;
		default:return 0;
		}
	case 0x747469776B63616C:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x74746F6765626E75:
		switch(wp[1]){
		case 0x00007373656E6E65:return 1;
		default:return 0;
		}
	case 0x74746F6C67697065:
		switch(wp[1]){
		case 0x0000736974696469:return 1;
		default:return 0;
		}
	case 0x74746F70736E7573:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x7474796F656C6170:
		switch(wp[1]){
		case 0x00006D7569627265:return 1;
		default:return 0;
		}
	case 0x747561637265766F:
		switch(wp[1]){
		case 0x0000796C73756F69:return 1;
		default:return 0;
		}
	case 0x7475616E6F726561:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x7475616F69646172:
		switch(wp[1]){
		case 0x000068706172676F:return 1;
		default:return 0;
		}
	case 0x7475636172746E69:
		switch(wp[1]){
		case 0x000073756F656E61:return 1;
		default:return 0;
		}
	case 0x7475636172747865:
		switch(wp[1]){
		case 0x000073756F656E61:return 1;
		default:return 0;
		}
	case 0x7475636F6C6F7270:
		switch(wp[1]){
		case 0x000070696873726F:return 1;
		default:return 0;
		}
	case 0x7475636F6D6C7570:
		switch(wp[1]){
		case 0x000073756F656E61:return 1;
		default:return 0;
		}
	case 0x7475637265746E69:
		switch(wp[1]){
		case 0x000073756F656E61:return 1;
		default:return 0;
		}
	case 0x747565696C627573:
		switch(wp[1]){
		case 0x000079636E616E65:return 1;
		default:return 0;
		}
	case 0x7475656F7263696D:
		switch(wp[1]){
		case 0x0000636974697861:return 1;
		default:return 0;
		}
	case 0x7475657265707968:
		switch(wp[1]){
		case 0x000064696F746365:return 1;
		default:return 0;
		}
	case 0x7475676972756C70:
		switch(wp[1]){
		case 0x00006574616C7574:return 1;
		default:return 0;
		}
	case 0x74756769746C756D:
		switch(wp[1]){
		case 0x00006574616C7574:return 1;
		default:return 0;
		}
	case 0x74756C6767616E69:
		switch(wp[1]){
		case 0x0000656C62616E69:return 1;
		default:return 0;
		}
	case 0x74756C6F73736964:
		switch(wp[1]){
		case 0x00006D73696E6F69:return 1;
		case 0x00007473696E6F69:return 1;
		default:return 0;
		}
	case 0x74756C6F76656E75:
		switch(wp[1]){
		case 0x00007972616E6F69:return 1;
		default:return 0;
		}
	case 0x74756C6F766E6F63:
		switch(wp[1]){
		case 0x00007972616E6F69:return 1;
		default:return 0;
		}
	case 0x74756E7265646E75:
		switch(wp[1]){
		case 0x00006E6F69746972:return 1;
		default:return 0;
		}
	case 0x74756E7265707573:
		switch(wp[1]){
		case 0x00006E6F69746972:return 1;
		default:return 0;
		}
	case 0x74756E7265707968:
		switch(wp[1]){
		case 0x00006E6F69746972:return 1;
		default:return 0;
		}
	case 0x7475707369646E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		case 0x000073756F697461:return 1;
		default:return 0;
		}
	case 0x747572747265766F:
		switch(wp[1]){
		case 0x0000796C6C756668:return 1;
		default:return 0;
		}
	case 0x7475746974736572:
		switch(wp[1]){
		case 0x00006D73696E6F69:return 1;
		case 0x00007473696E6F69:return 1;
		default:return 0;
		}
	case 0x7475746974736E69:
		switch(wp[1]){
		case 0x0000657A696E6F69:return 1;
		case 0x00007972616E6F69:return 1;
		default:return 0;
		}
	case 0x7478656469626D61:
		switch(wp[1]){
		case 0x0000796C73756F72:return 1;
		default:return 0;
		}
	case 0x7478656F72647968:
		switch(wp[1]){
		case 0x0000726F74636172:return 1;
		default:return 0;
		}
	case 0x7478657265707573:
		switch(wp[1]){
		case 0x00006E6F69736E65:return 1;
		default:return 0;
		}
	case 0x7478657265707968:
		switch(wp[1]){
		case 0x00006E6F69736E65:return 1;
		default:return 0;
		}
	case 0x7479636976616C63:
		switch(wp[1]){
		case 0x00006D7569726568:return 1;
		default:return 0;
		}
	case 0x7479636F6375656C:
		switch(wp[1]){
		case 0x000061696E65706F:return 1;
		case 0x000063696E65706F:return 1;
		case 0x0000636974796C6F:return 1;
		case 0x00006E6973796C6F:return 1;
		case 0x0000726574656D6F:return 1;
		case 0x0000736973796C6F:return 1;
		case 0x00007473616C626F:return 1;
		default:return 0;
		}
	case 0x7479636F67616870:
		switch(wp[1]){
		case 0x0000636974796C6F:return 1;
		case 0x0000736973796C6F:return 1;
		case 0x00007473616C626F:return 1;
		default:return 0;
		}
	case 0x7479636F6C65796D:
		switch(wp[1]){
		case 0x000061696D656168:return 1;
		default:return 0;
		}
	case 0x747968706F646E65:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x747968706F726578:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x747968706F746E65:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x747968706F747561:
		switch(wp[1]){
		case 0x000068706172676F:return 1;
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x74796872796C6F70:
		switch(wp[1]){
		case 0x00006C6163696D68:return 1;
		default:return 0;
		}
	case 0x74796C6F63796C67:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x7561636572706E75:
		switch(wp[1]){
		case 0x000064656E6F6974:return 1;
		default:return 0;
		}
	case 0x756163696E67616D:
		switch(wp[1]){
		case 0x000073756F746164:return 1;
		default:return 0;
		}
	case 0x7561637265746E69:
		switch(wp[1]){
		case 0x0000657669746173:return 1;
		default:return 0;
		}
	case 0x75616C7265646E75:
		switch(wp[1]){
		case 0x000073736572646E:return 1;
		default:return 0;
		}
	case 0x75616C7265746E69:
		switch(wp[1]){
		case 0x00006E6F69746164:return 1;
		default:return 0;
		}
	case 0x756174736E696572:
		switch(wp[1]){
		case 0x00006E6F69746172:return 1;
		default:return 0;
		}
	case 0x7562617265707573:
		switch(wp[1]){
		case 0x000065636E61646E:return 1;
		case 0x000079636E61646E:return 1;
		default:return 0;
		}
	case 0x7562656764697262:
		switch(wp[1]){
		case 0x0000676E69646C69:return 1;
		default:return 0;
		}
	case 0x7562656B63617262:
		switch(wp[1]){
		case 0x0000657469686373:return 1;
		default:return 0;
		}
	case 0x75626972746E6F63:
		switch(wp[1]){
		case 0x00006C6169726F74:return 1;
		case 0x00006C616E6F6974:return 1;
		case 0x0000796C65766974:return 1;
		default:return 0;
		}
	case 0x7562697274736964:
		switch(wp[1]){
		case 0x00006C616E6F6974:return 1;
		case 0x0000796C65766974:return 1;
		default:return 0;
		}
	case 0x75626D6165746E61:
		switch(wp[1]){
		case 0x00006E6F6974616C:return 1;
		default:return 0;
		}
	case 0x75626D616E6D6F73:
		switch(wp[1]){
		case 0x000063697473696C:return 1;
		case 0x00006E6F6974616C:return 1;
		default:return 0;
		}
	case 0x75626D6174636F6E:
		switch(wp[1]){
		case 0x000063697473696C:return 1;
		case 0x00006E6F6974616C:return 1;
		default:return 0;
		}
	case 0x75626D6F636E6F6E:
		switch(wp[1]){
		case 0x0000656C62697473:return 1;
		default:return 0;
		}
	case 0x75626F6475657370:
		switch(wp[1]){
		case 0x0000656E656C7974:return 1;
		default:return 0;
		}
	case 0x7562726163627573:
		switch(wp[1]){
		case 0x0000646574746572:return 1;
		default:return 0;
		}
	case 0x7563616F7461766F:
		switch(wp[1]){
		case 0x00006574616E696D:return 1;
		default:return 0;
		}
	case 0x7563617265707968:
		switch(wp[1]){
		case 0x00007373656E6574:return 1;
		default:return 0;
		}
	case 0x75636172696D6E75:
		switch(wp[1]){
		case 0x0000796C73756F6C:return 1;
		default:return 0;
		}
	case 0x7563617463657073:
		switch(wp[1]){
		case 0x00006D736972616C:return 1;
		case 0x000079746972616C:return 1;
		default:return 0;
		}
	case 0x756363617265766F:
		switch(wp[1]){
		case 0x00006574616C756D:return 1;
		case 0x0000796C65746172:return 1;
		default:return 0;
		}
	case 0x7563636F65746E61:
		switch(wp[1]){
		case 0x00006E6F69746170:return 1;
		default:return 0;
		}
	case 0x7563636F6C666564:
		switch(wp[1]){
		case 0x00006E6F6974616C:return 1;
		default:return 0;
		}
	case 0x7563657073657270:
		switch(wp[1]){
		case 0x00006E6F6974616C:return 1;
		default:return 0;
		}
	case 0x75636570736E6F6E:
		switch(wp[1]){
		case 0x000065766974616C:return 1;
		case 0x00006E6F6974616C:return 1;
		default:return 0;
		}
	case 0x75636570736F7270:
		switch(wp[1]){
		case 0x00006E6F6974616C:return 1;
		default:return 0;
		}
	case 0x7563696369726573:
		switch(wp[1]){
		case 0x00006C617275746C:return 1;
		default:return 0;
		}
	case 0x756369657274736F:
		switch(wp[1]){
		case 0x00006C617275746C:return 1;
		default:return 0;
		}
	case 0x7563696C616E6163:
		switch(wp[1]){
		case 0x00006E6F6974616C:return 1;
		default:return 0;
		}
	case 0x7563696E696D6461:
		switch(wp[1]){
		case 0x00006E6F6974616C:return 1;
		default:return 0;
		}
	case 0x7563697072697473:
		switch(wp[1]){
		case 0x00006C617275746C:return 1;
		default:return 0;
		}
	case 0x7563697264617571:
		switch(wp[1]){
		case 0x00006C6164697073:return 1;
		default:return 0;
		}
	case 0x7563697267616E75:
		switch(wp[1]){
		case 0x00006C617275746C:return 1;
		default:return 0;
		}
	case 0x756369726F627261:
		switch(wp[1]){
		case 0x00006C617275746C:return 1;
		default:return 0;
		}
	case 0x75636972746E6576:
		switch(wp[1]){
		case 0x00006D6172676F6C:return 1;
		default:return 0;
		}
	case 0x7563697461727473:
		switch(wp[1]){
		case 0x00006E6F6974616C:return 1;
		default:return 0;
		}
	case 0x7563697463757266:
		switch(wp[1]){
		case 0x00006C617275746C:return 1;
		default:return 0;
		}
	case 0x7563697472616261:
		switch(wp[1]){
		case 0x00006E6F6974616C:return 1;
		default:return 0;
		}
	case 0x7563697472616564:
		switch(wp[1]){
		case 0x00006E6F6974616C:return 1;
		default:return 0;
		}
	case 0x7563697472616E69:
		switch(wp[1]){
		case 0x00006E6F6974616C:return 1;
		case 0x0000796C6574616C:return 1;
		default:return 0;
		}
	case 0x7563697472617865:
		switch(wp[1]){
		case 0x00006E6F6974616C:return 1;
		default:return 0;
		}
	case 0x75636C6163657270:
		switch(wp[1]){
		case 0x00006E6F6974616C:return 1;
		default:return 0;
		}
	case 0x75636C616373696D:
		switch(wp[1]){
		case 0x00006E6F6974616C:return 1;
		default:return 0;
		}
	case 0x75636E6F63657270:
		switch(wp[1]){
		case 0x000065636E657272:return 1;
		default:return 0;
		}
	case 0x75636E6F636E6F6E:
		switch(wp[1]){
		case 0x000065636E657272:return 1;
		case 0x000079636E657272:return 1;
		default:return 0;
		}
	case 0x75636F6475657370:
		switch(wp[1]){
		case 0x0000656E6964696D:return 1;
		case 0x00006C617275746C:return 1;
		default:return 0;
		}
	case 0x75636F68706C6564:
		switch(wp[1]){
		case 0x0000656E69726172:return 1;
		default:return 0;
		}
	case 0x75636F6E69627573:
		switch(wp[1]){
		case 0x00006E6F6974616C:return 1;
		default:return 0;
		}
	case 0x75636F6E696E6F6E:
		switch(wp[1]){
		case 0x00006E6F6974616C:return 1;
		default:return 0;
		}
	case 0x75636F72706E6F6E:
		switch(wp[1]){
		case 0x0000746E656D6572:return 1;
		default:return 0;
		}
	case 0x75636F7274786564:
		switch(wp[1]){
		case 0x000079746972616C:return 1;
		default:return 0;
		}
	case 0x7563726963657270:
		switch(wp[1]){
		case 0x00006E6F6974616C:return 1;
		default:return 0;
		}
	case 0x75637269636E6F6E:
		switch(wp[1]){
		case 0x00006E6F6974616C:return 1;
		default:return 0;
		}
	case 0x7563736F746F6870:
		switch(wp[1]){
		case 0x000065727574706C:return 1;
		default:return 0;
		}
	case 0x7563737570726F63:
		switch(wp[1]){
		case 0x00006E616972616C:return 1;
		case 0x000079746972616C:return 1;
		default:return 0;
		}
	case 0x7564657069746E61:
		switch(wp[1]){
		case 0x000072616C75636E:return 1;
		default:return 0;
		}
	case 0x7564657265707573:
		switch(wp[1]){
		case 0x00006E6F69746163:return 1;
		default:return 0;
		}
	case 0x7564697669646E69:
		switch(wp[1]){
		case 0x000072657A696C61:return 1;
		default:return 0;
		}
	case 0x75646E697265766F:
		switch(wp[1]){
		case 0x000065636E65676C:return 1;
		default:return 0;
		}
	case 0x75646E6F636E6F6E:
		switch(wp[1]){
		case 0x0000656C62697463:return 1;
		default:return 0;
		}
	case 0x75646F6D7265766F:
		switch(wp[1]){
		case 0x00006E6F6974616C:return 1;
		default:return 0;
		}
	case 0x75646F6E756A656A:
		switch(wp[1]){
		case 0x00006C616E65646F:return 1;
		default:return 0;
		}
	case 0x75646F7274736167:
		switch(wp[1]){
		case 0x00006C616E65646F:return 1;
		default:return 0;
		}
	case 0x75646F7461706568:
		switch(wp[1]){
		case 0x00006C616E65646F:return 1;
		default:return 0;
		}
	case 0x7565666E69627573:
		switch(wp[1]){
		case 0x00006E6F69746164:return 1;
		case 0x000079726F746164:return 1;
		default:return 0;
		}
	case 0x7565666E69736964:
		switch(wp[1]){
		case 0x00006E6F69746164:return 1;
		default:return 0;
		}
	case 0x7565667265707573:
		switch(wp[1]){
		case 0x00006E6F69746164:return 1;
		default:return 0;
		}
	case 0x75656C65636F7270:
		switch(wp[1]){
		case 0x0000636974616D73:return 1;
		default:return 0;
		}
	case 0x75656C6F746F7270:
		switch(wp[1]){
		case 0x0000657479636F63:return 1;
		case 0x0000657479636F6B:return 1;
		default:return 0;
		}
	case 0x75656E6F6574736F:
		switch(wp[1]){
		case 0x00006169676C6172:return 1;
		default:return 0;
		}
	case 0x75656E6F696C6F70:
		switch(wp[1]){
		case 0x00006572656D6F72:return 1;
		default:return 0;
		}
	case 0x75656E6F74737963:
		switch(wp[1]){
		case 0x00006169676C6172:return 1;
		default:return 0;
		}
	case 0x75656E706F6E6F6D:
		switch(wp[1]){
		case 0x00006E61696E6F6D:return 1;
		case 0x000073756F6E6F6D:return 1;
		default:return 0;
		}
	case 0x75656F6475657370:
		switch(wp[1]){
		case 0x00007363696E6567:return 1;
		default:return 0;
		}
	case 0x7565726874657275:
		switch(wp[1]){
		case 0x00007265746E7972:return 1;
		default:return 0;
		}
	case 0x7566697264617571:
		switch(wp[1]){
		case 0x0000646574616372:return 1;
		default:return 0;
		}
	case 0x75666972746E6563:
		switch(wp[1]){
		case 0x0000657A696C6167:return 1;
		case 0x00006E6F69746167:return 1;
		case 0x000072656C6C6167:return 1;
		default:return 0;
		}
	case 0x75666E6F636E6F6E:
		switch(wp[1]){
		case 0x00006E6F69746174:return 1;
		default:return 0;
		}
	case 0x7566746E65736572:
		switch(wp[1]){
		case 0x00007373656E6C6C:return 1;
		default:return 0;
		}
	case 0x7567616F63657270:
		switch(wp[1]){
		case 0x00006E6F6974616C:return 1;
		default:return 0;
		}
	case 0x7567616F636E6F63:
		switch(wp[1]){
		case 0x00006E6F6974616C:return 1;
		default:return 0;
		}
	case 0x7567616F636E6F6E:
		switch(wp[1]){
		case 0x00006E6F6974616C:return 1;
		default:return 0;
		}
	case 0x7567656C626D7572:
		switch(wp[1]){
		case 0x00006E6F6974706D:return 1;
		default:return 0;
		}
	case 0x756765726F6D736F:
		switch(wp[1]){
		case 0x00006E6F6974616C:return 1;
		default:return 0;
		}
	case 0x756765726F747561:
		switch(wp[1]){
		case 0x00006E6F6974616C:return 1;
		default:return 0;
		}
	case 0x756765727265766F:
		switch(wp[1]){
		case 0x00006E6F6974616C:return 1;
		case 0x000079746972616C:return 1;
		default:return 0;
		}
	case 0x75676966696D6573:
		switch(wp[1]){
		case 0x0000657669746172:return 1;
		default:return 0;
		}
	case 0x75676E6169757165:
		switch(wp[1]){
		case 0x000079746972616C:return 1;
		default:return 0;
		}
	case 0x75676E61736E6F63:
		switch(wp[1]){
		case 0x000073756F656E69:return 1;
		default:return 0;
		}
	case 0x75676E6174636572:
		switch(wp[1]){
		case 0x000079746972616C:return 1;
		default:return 0;
		}
	case 0x75676E696C6F6962:
		switch(wp[1]){
		case 0x0000736369747369:return 1;
		default:return 0;
		}
	case 0x75676E6974736964:
		switch(wp[1]){
		case 0x0000676E69687369:return 1;
		default:return 0;
		}
	case 0x756775616E696572:
		switch(wp[1]){
		case 0x00006E6F69746172:return 1;
		default:return 0;
		}
	case 0x7568636172746C75:
		switch(wp[1]){
		case 0x00006D7369686372:return 1;
		default:return 0;
		}
	case 0x7568706C75736564:
		switch(wp[1]){
		case 0x00006E6F69746172:return 1;
		default:return 0;
		}
	case 0x756A6572706E6F6E:
		switch(wp[1]){
		case 0x00006C6169636964:return 1;
		default:return 0;
		}
	case 0x756A6E6F636E6F6E:
		switch(wp[1]){
		case 0x00006E6F6974636E:return 1;
		default:return 0;
		}
	case 0x756A6E6F6373696D:
		switch(wp[1]){
		case 0x00006E6F69746167:return 1;
		case 0x00006E6F6974636E:return 1;
		default:return 0;
		}
	case 0x756A6F6D72656874:
		switch(wp[1]){
		case 0x00006E6F6974636E:return 1;
		default:return 0;
		}
	case 0x756A736964627573:
		switch(wp[1]){
		case 0x000065766974636E:return 1;
		default:return 0;
		}
	case 0x756A7369646E6F6E:
		switch(wp[1]){
		case 0x000065766974636E:return 1;
		case 0x00006E6F6974636E:return 1;
		default:return 0;
		}
	case 0x756C616668676968:
		switch(wp[1]){
		case 0x00006D73696E6974:return 1;
		default:return 0;
		}
	case 0x756C636E6F636E69:
		switch(wp[1]){
		case 0x0000796C65766973:return 1;
		default:return 0;
		}
	case 0x756C636E6F636E75:
		switch(wp[1]){
		case 0x0000796C65766973:return 1;
		default:return 0;
		}
	case 0x756C666F72647968:
		switch(wp[1]){
		case 0x00006369726F626F:return 1;
		default:return 0;
		}
	case 0x756C667265707573:
		switch(wp[1]){
		case 0x000065636E617469:return 1;
		default:return 0;
		}
	case 0x756C6767616D6568:
		switch(wp[1]){
		case 0x00006574616E6974:return 1;
		default:return 0;
		}
	case 0x756C696465746E61:
		switch(wp[1]){
		case 0x0000796C6C616976:return 1;
		default:return 0;
		}
	case 0x756C6C6563696E75:
		switch(wp[1]){
		case 0x000079746972616C:return 1;
		default:return 0;
		}
	case 0x756C6C697265766F:
		switch(wp[1]){
		case 0x0000657461727473:return 1;
		default:return 0;
		}
	case 0x756C6F6374736F70:
		switch(wp[1]){
		case 0x000072616C6C656D:return 1;
		default:return 0;
		}
	case 0x756C6F7365727269:
		switch(wp[1]){
		case 0x00007373656E6574:return 1;
		default:return 0;
		}
	case 0x756D697473657270:
		switch(wp[1]){
		case 0x00006E6F6974616C:return 1;
		default:return 0;
		}
	case 0x756D6D6F63657270:
		switch(wp[1]){
		case 0x000065746163696E:return 1;
		default:return 0;
		}
	case 0x756D6D6F636E6F6E:
		switch(wp[1]){
		case 0x000063697473696E:return 1;
		case 0x0000657669746174:return 1;
		case 0x0000746E6163696E:return 1;
		default:return 0;
		}
	case 0x756D6D6F636F7270:
		switch(wp[1]){
		case 0x00006E6F69746174:return 1;
		default:return 0;
		}
	case 0x756D6D6F6373696D:
		switch(wp[1]){
		case 0x000065746163696E:return 1;
		default:return 0;
		}
	case 0x756D6F6461726166:
		switch(wp[1]){
		case 0x000072616C756373:return 1;
		default:return 0;
		}
	case 0x756D6F7469637865:
		switch(wp[1]){
		case 0x000072616C756373:return 1;
		default:return 0;
		}
	case 0x756D726F66657270:
		switch(wp[1]){
		case 0x00006E6F6974616C:return 1;
		default:return 0;
		}
	case 0x756D726F666E6F6E:
		switch(wp[1]){
		case 0x00006E6F6974616C:return 1;
		default:return 0;
		}
	case 0x756D756363616572:
		switch(wp[1]){
		case 0x00006E6F6974616C:return 1;
		default:return 0;
		}
	case 0x756D756363616E75:
		switch(wp[1]){
		case 0x00006E6F6974616C:return 1;
		default:return 0;
		}
	case 0x756D7574636E6974:
		switch(wp[1]){
		case 0x00006E6F69746174:return 1;
		default:return 0;
		}
	case 0x756E696D7265766F:
		switch(wp[1]){
		case 0x00007373656E6574:return 1;
		default:return 0;
		}
	case 0x756E697264617571:
		switch(wp[1]){
		case 0x0000657461656C63:return 1;
		default:return 0;
		}
	case 0x756E6D7563726963:
		switch(wp[1]){
		case 0x00006E6F69746174:return 1;
		case 0x000079726F746174:return 1;
		default:return 0;
		}
	case 0x756E6F7263696D61:
		switch(wp[1]){
		case 0x0000657461656C63:return 1;
		default:return 0;
		}
	case 0x756E6F7469637865:
		switch(wp[1]){
		case 0x0000746E65697274:return 1;
		default:return 0;
		}
	case 0x756F637369646E75:
		switch(wp[1]){
		case 0x0000676E69676172:return 1;
		default:return 0;
		}
	case 0x756F646E656C7073:
		switch(wp[1]){
		case 0x0000666F6F727072:return 1;
		default:return 0;
		}
	case 0x756F666E6F636E75:
		switch(wp[1]){
		case 0x0000796C6465646E:return 1;
		default:return 0;
		}
	case 0x756F687265646E75:
		switch(wp[1]){
		case 0x00006469616D6573:return 1;
		default:return 0;
		}
	case 0x756F687465726F66:
		switch(wp[1]){
		case 0x00006C7566746867:return 1;
		default:return 0;
		}
	case 0x756F68747265766F:
		switch(wp[1]){
		case 0x00006C7566746867:return 1;
		default:return 0;
		}
	case 0x756F6A6461657270:
		switch(wp[1]){
		case 0x0000746E656D6E72:return 1;
		default:return 0;
		}
	case 0x756F6A64616E6F6E:
		switch(wp[1]){
		case 0x0000746E656D6E72:return 1;
		default:return 0;
		}
	case 0x756F6A64616F7270:
		switch(wp[1]){
		case 0x0000746E656D6E72:return 1;
		default:return 0;
		}
	case 0x756F6D7275736E69:
		switch(wp[1]){
		case 0x0000656C6261746E:return 1;
		case 0x0000796C6261746E:return 1;
		default:return 0;
		}
	case 0x756F6D7275736E75:
		switch(wp[1]){
		case 0x0000656C6261746E:return 1;
		case 0x0000796C6261746E:return 1;
		default:return 0;
		}
	case 0x756F6D796C61656D:
		switch(wp[1]){
		case 0x0000796C64656874:return 1;
		default:return 0;
		}
	case 0x756F6E7265646E75:
		switch(wp[1]){
		case 0x0000646568736972:return 1;
		default:return 0;
		}
	case 0x756F706D6F636564:
		switch(wp[1]){
		case 0x0000656C6261646E:return 1;
		default:return 0;
		}
	case 0x756F706D6F636E75:
		switch(wp[1]){
		case 0x0000656C6261646E:return 1;
		case 0x0000796C6465646E:return 1;
		default:return 0;
		}
	case 0x7570617268746E61:
		switch(wp[1]){
		case 0x00006E6972757072:return 1;
		default:return 0;
		}
	case 0x75706172746E6F63:
		switch(wp[1]){
		case 0x0000796C6C61746E:return 1;
		default:return 0;
		}
	case 0x75706572696D6573:
		switch(wp[1]){
		case 0x00006E6163696C62:return 1;
		default:return 0;
		}
	case 0x7570657269746E61:
		switch(wp[1]){
		case 0x00006E6163696C62:return 1;
		default:return 0;
		}
	case 0x7570696E616D6572:
		switch(wp[1]){
		case 0x00006E6F6974616C:return 1;
		default:return 0;
		}
	case 0x75706974736E6F6E:
		switch(wp[1]){
		case 0x00006E6F6974616C:return 1;
		default:return 0;
		}
	case 0x75706D6F636E6F6E:
		switch(wp[1]){
		case 0x00006E6F69746174:return 1;
		default:return 0;
		}
	case 0x75706D6F6373696D:
		switch(wp[1]){
		case 0x00006E6F69746174:return 1;
		default:return 0;
		}
	case 0x75706F6475657370:
		switch(wp[1]){
		case 0x00006E6972757072:return 1;
		default:return 0;
		}
	case 0x75706F68746E6178:
		switch(wp[1]){
		case 0x00006E6972757072:return 1;
		default:return 0;
		}
	case 0x75706F6964726163:
		switch(wp[1]){
		case 0x000065727574636E:return 1;
		default:return 0;
		}
	case 0x75706F696E617263:
		switch(wp[1]){
		case 0x000065727574636E:return 1;
		default:return 0;
		}
	case 0x75706F696E726568:
		switch(wp[1]){
		case 0x000065727574636E:return 1;
		default:return 0;
		}
	case 0x75706F6C75706170:
		switch(wp[1]){
		case 0x000072616C757473:return 1;
		default:return 0;
		}
	case 0x75706F707265766F:
		switch(wp[1]){
		case 0x00006E6F6974616C:return 1;
		case 0x000079746972616C:return 1;
		default:return 0;
		}
	case 0x75706F7274736167:
		switch(wp[1]){
		case 0x000063696E6F6D6C:return 1;
		default:return 0;
		}
	case 0x75706F736F63756D:
		switch(wp[1]){
		case 0x0000746E656C7572:return 1;
		default:return 0;
		}
	case 0x7570707573657270:
		switch(wp[1]){
		case 0x0000657669746172:return 1;
		default:return 0;
		}
	case 0x75707075736E6F6E:
		switch(wp[1]){
		case 0x0000657669746172:return 1;
		default:return 0;
		}
	case 0x7570726F636E6F6E:
		switch(wp[1]){
		case 0x000072616C756373:return 1;
		default:return 0;
		}
	case 0x7570736964657270:
		switch(wp[1]){
		case 0x00006E6F69746174:return 1;
		default:return 0;
		}
	case 0x7570757263736E75:
		switch(wp[1]){
		case 0x0000796C73756F6C:return 1;
		case 0x0000797469736F6C:return 1;
		default:return 0;
		}
	case 0x7571617268746E61:
		switch(wp[1]){
		case 0x00006C796E6F6E69:return 1;
		default:return 0;
		}
	case 0x75716573626F6E75:
		switch(wp[1]){
		case 0x0000796C73756F69:return 1;
		default:return 0;
		}
	case 0x7571697274627573:
		switch(wp[1]){
		case 0x000073756F727465:return 1;
		default:return 0;
		}
	case 0x7571697571736573:
		switch(wp[1]){
		case 0x0000656C69746E69:return 1;
		case 0x0000656C69747261:return 1;
		case 0x0000657461726461:return 1;
		default:return 0;
		}
	case 0x75716E6172746E69:
		switch(wp[1]){
		case 0x00007974696C6C69:return 1;
		default:return 0;
		}
	case 0x75716E6172746E75:
		switch(wp[1]){
		case 0x000064657A696C69:return 1;
		case 0x0000657A696C6C69:return 1;
		default:return 0;
		}
	case 0x75716E6F63657270:
		switch(wp[1]){
		case 0x00006C6175747365:return 1;
		default:return 0;
		}
	case 0x75716F6C696C6F73:
		switch(wp[1]){
		case 0x000073756F696361:return 1;
		default:return 0;
		}
	case 0x75716F74616C6170:
		switch(wp[1]){
		case 0x0000657461726461:return 1;
		default:return 0;
		}
	case 0x7571736172707573:
		switch(wp[1]){
		case 0x00006C61736F6D61:return 1;
		default:return 0;
		}
	case 0x7571736F72746570:
		switch(wp[1]){
		case 0x00006C61736F6D61:return 1;
		default:return 0;
		}
	case 0x7571737265707573:
		switch(wp[1]){
		case 0x00006C61736F6D61:return 1;
		default:return 0;
		}
	case 0x757263737265766F:
		switch(wp[1]){
		case 0x000073756F6C7570:return 1;
		default:return 0;
		}
	case 0x7572706972726566:
		switch(wp[1]){
		case 0x0000657461697373:return 1;
		default:return 0;
		}
	case 0x7572706F72726566:
		switch(wp[1]){
		case 0x0000657461697373:return 1;
		default:return 0;
		}
	case 0x7572706F7274696E:
		switch(wp[1]){
		case 0x0000657461697373:return 1;
		default:return 0;
		}
	case 0x75727265666E6F63:
		switch(wp[1]){
		case 0x00006574616E696D:return 1;
		default:return 0;
		}
	case 0x75727473626F6E75:
		switch(wp[1]){
		case 0x0000796C64657463:return 1;
		default:return 0;
		}
	case 0x7572747365646E69:
		switch(wp[1]){
		case 0x0000656C62697463:return 1;
		case 0x0000796C62697463:return 1;
		default:return 0;
		}
	case 0x7572747365646E75:
		switch(wp[1]){
		case 0x0000656C62697463:return 1;
		default:return 0;
		}
	case 0x757274736E696E75:
		switch(wp[1]){
		case 0x0000656C62697463:return 1;
		case 0x00006C61746E656D:return 1;
		case 0x0000796C64657463:return 1;
		default:return 0;
		}
	case 0x757361656D657270:
		switch(wp[1]){
		case 0x0000746E656D6572:return 1;
		default:return 0;
		}
	case 0x757361656D73696D:
		switch(wp[1]){
		case 0x0000746E656D6572:return 1;
		default:return 0;
		}
	case 0x757369626174656D:
		switch(wp[1]){
		case 0x000065746968706C:return 1;
		default:return 0;
		}
	case 0x7573697264617571:
		switch(wp[1]){
		case 0x000064657461636C:return 1;
		case 0x000065646968706C:return 1;
		default:return 0;
		}
	case 0x7573697571736573:
		switch(wp[1]){
		case 0x000065646968706C:return 1;
		case 0x000065746168706C:return 1;
		default:return 0;
		}
	case 0x75736C796874656D:
		switch(wp[1]){
		case 0x00006C6F6E61666C:return 1;
		default:return 0;
		}
	case 0x75736E656D6D6F63:
		switch(wp[1]){
		case 0x00006E6F69746172:return 1;
		case 0x0000796C65746172:return 1;
		default:return 0;
		}
	case 0x75736E6F63657270:
		switch(wp[1]){
		case 0x00006E6F6974706D:return 1;
		default:return 0;
		}
	case 0x75736E6F636E6F6E:
		switch(wp[1]){
		case 0x00006E6F6974706D:return 1;
		default:return 0;
		}
	case 0x75736E757265766F:
		switch(wp[1]){
		case 0x0000656C62617469:return 1;
		default:return 0;
		}
	case 0x75736F636964656D:
		switch(wp[1]){
		case 0x00006C6163696772:return 1;
		default:return 0;
		}
	case 0x75736F68706C7573:
		switch(wp[1]){
		case 0x000063696E696363:return 1;
		default:return 0;
		}
	case 0x75736F7265746E61:
		switch(wp[1]){
		case 0x0000726F69726570:return 1;
		default:return 0;
		}
	case 0x75736F7479726162:
		switch(wp[1]){
		case 0x000065746168706C:return 1;
		default:return 0;
		}
	case 0x7573736165726E75:
		switch(wp[1]){
		case 0x0000796C676E6972:return 1;
		default:return 0;
		}
	case 0x757373617265766F:
		switch(wp[1]){
		case 0x00006E6F6974706D:return 1;
		default:return 0;
		}
	case 0x757373696D6D6F63:
		switch(wp[1]){
		case 0x0000796D6F746F72:return 1;
		default:return 0;
		}
	case 0x7574616566736964:
		switch(wp[1]){
		case 0x0000746E656D6572:return 1;
		default:return 0;
		}
	case 0x7574616D75616874:
		switch(wp[1]){
		case 0x00006C6163696772:return 1;
		default:return 0;
		}
	case 0x75746172676E6F63:
		switch(wp[1]){
		case 0x00006E6F6974616C:return 1;
		case 0x000079726F74616C:return 1;
		default:return 0;
		}
	case 0x75746173696D6573:
		switch(wp[1]){
		case 0x00006E6F69746172:return 1;
		default:return 0;
		}
	case 0x757461737265766F:
		switch(wp[1]){
		case 0x00006E6F69746172:return 1;
		default:return 0;
		}
	case 0x757463656A6E6F63:
		switch(wp[1]){
		case 0x00007473696C6172:return 1;
		case 0x00007974696C6172:return 1;
		default:return 0;
		}
	case 0x7574656C61766E75:
		switch(wp[1]){
		case 0x00007972616E6964:return 1;
		default:return 0;
		}
	case 0x75746575736E6F63:
		switch(wp[1]){
		case 0x00007972616E6964:return 1;
		default:return 0;
		}
	case 0x75746962696D6573:
		switch(wp[1]){
		case 0x000073756F6E696D:return 1;
		default:return 0;
		}
	case 0x757469626F727970:
		switch(wp[1]){
		case 0x000073756F6E696D:return 1;
		default:return 0;
		}
	case 0x75746963696C6F73:
		switch(wp[1]){
		case 0x000073756F6E6964:return 1;
		default:return 0;
		}
	case 0x7574696C696D6973:
		switch(wp[1]){
		case 0x0000657A696E6964:return 1;
		default:return 0;
		}
	case 0x7574696C69746E61:
		switch(wp[1]){
		case 0x00006C6163696772:return 1;
		default:return 0;
		}
	case 0x7574697061636572:
		switch(wp[1]){
		case 0x000065766974616C:return 1;
		case 0x00006E6F6974616C:return 1;
		case 0x000079726F74616C:return 1;
		default:return 0;
		}
	case 0x7574697473627573:
		switch(wp[1]){
		case 0x00006C616E6F6974:return 1;
		case 0x0000796C65766974:return 1;
		case 0x0000796C676E6974:return 1;
		default:return 0;
		}
	case 0x75746974736E6F63:
		switch(wp[1]){
		case 0x00006C616E6F6974:return 1;
		case 0x000072656E6F6974:return 1;
		case 0x0000796C65766974:return 1;
		default:return 0;
		}
	case 0x75746975676E6970:
		switch(wp[1]){
		case 0x000073756F6E6964:return 1;
		default:return 0;
		}
	case 0x75746F63696C6973:
		switch(wp[1]){
		case 0x000063697473676E:return 1;
		default:return 0;
		}
	case 0x75746F6475657370:
		switch(wp[1]){
		case 0x00006C616E696272:return 1;
		default:return 0;
		}
	case 0x75746F68706C7573:
		switch(wp[1]){
		case 0x000063697473676E:return 1;
		default:return 0;
		}
	case 0x75746F6E65687073:
		switch(wp[1]){
		case 0x00006C616E696272:return 1;
		default:return 0;
		}
	case 0x75746F6E65737261:
		switch(wp[1]){
		case 0x000063697473676E:return 1;
		default:return 0;
		}
	case 0x75746F7274736167:
		switch(wp[1]){
		case 0x0000796D6F746F62:return 1;
		default:return 0;
		}
	case 0x7574726F66657270:
		switch(wp[1]){
		case 0x0000796C6574616E:return 1;
		default:return 0;
		}
	case 0x7574726F6673696D:
		switch(wp[1]){
		case 0x0000796C6574616E:return 1;
		default:return 0;
		}
	case 0x7574736964657270:
		switch(wp[1]){
		case 0x000065636E616272:return 1;
		default:return 0;
		}
	case 0x75747369646E6F6E:
		switch(wp[1]){
		case 0x000065636E616272:return 1;
		default:return 0;
		}
	case 0x7578756C7265766F:
		switch(wp[1]){
		case 0x000065636E616972:return 1;
		default:return 0;
		}
	case 0x7661636F626C7562:
		switch(wp[1]){
		case 0x000073756F6E7265:return 1;
		default:return 0;
		}
	case 0x7661636F69676E61:
		switch(wp[1]){
		case 0x000073756F6E7265:return 1;
		default:return 0;
		}
	case 0x7661637265746E69:
		switch(wp[1]){
		case 0x000073756F6E7265:return 1;
		default:return 0;
		}
	case 0x76616C6374736F70:
		switch(wp[1]){
		case 0x000072616C756369:return 1;
		default:return 0;
		}
	case 0x76616C7369746E61:
		switch(wp[1]){
		case 0x00006D7369797265:return 1;
		default:return 0;
		}
	case 0x76616D7563726963:
		switch(wp[1]){
		case 0x00006E6F69746169:return 1;
		default:return 0;
		}
	case 0x76616E6F656E7563:
		switch(wp[1]){
		case 0x000072616C756369:return 1;
		default:return 0;
		}
	case 0x76616E6F69626974:
		switch(wp[1]){
		case 0x000072616C756369:return 1;
		default:return 0;
		}
	case 0x7661727065646E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x7661727478656E75:
		switch(wp[1]){
		case 0x0000646574617361:return 1;
		case 0x000065636E616761:return 1;
		default:return 0;
		}
	case 0x7664617265746E69:
		switch(wp[1]){
		case 0x00006C6175746E65:return 1;
		default:return 0;
		}
	case 0x7665646F72746572:
		switch(wp[1]){
		case 0x00006E6F69746169:return 1;
		default:return 0;
		}
	case 0x76656C637265766F:
		switch(wp[1]){
		case 0x00007373656E7265:return 1;
		default:return 0;
		}
	case 0x76656C7065727269:
		switch(wp[1]){
		case 0x0000656C62617369:return 1;
		default:return 0;
		}
	case 0x76657270696E6D6F:
		switch(wp[1]){
		case 0x000065636E656C61:return 1;
		default:return 0;
		}
	case 0x766572706F726573:
		switch(wp[1]){
		case 0x00006E6F69746E65:return 1;
		default:return 0;
		}
	case 0x76657272696E6F6E:
		switch(wp[1]){
		case 0x0000656C6261636F:return 1;
		default:return 0;
		}
	case 0x7665736F6C6C696D:
		switch(wp[1]){
		case 0x0000657469686369:return 1;
		default:return 0;
		}
	case 0x7665737265706E75:
		switch(wp[1]){
		case 0x000065636E617265:return 1;
		default:return 0;
		}
	case 0x766575716E697571:
		switch(wp[1]){
		case 0x000065636E656C61:return 1;
		case 0x00006C6169627265:return 1;
		case 0x000073756F766C61:return 1;
		case 0x000079636E656C61:return 1;
		default:return 0;
		}
	case 0x7669636172747865:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x7669637265707573:
		switch(wp[1]){
		case 0x000064657A696C69:return 1;
		default:return 0;
		}
	case 0x7669637265707968:
		switch(wp[1]){
		case 0x000064657A696C69:return 1;
		default:return 0;
		}
	case 0x76696863696D6573:
		switch(wp[1]){
		case 0x000073756F726C61:return 1;
		default:return 0;
		}
	case 0x76696C65646E6F6E:
		switch(wp[1]){
		case 0x000065636E617265:return 1;
		default:return 0;
		}
	case 0x76696E6E61627573:
		switch(wp[1]){
		case 0x0000797261737265:return 1;
		default:return 0;
		}
	case 0x766C6F7362616E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x766C6F7365726E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x766D7573726F6564:
		switch(wp[1]){
		case 0x00006E6F69737265:return 1;
		default:return 0;
		}
	case 0x766E6F63696D6573:
		switch(wp[1]){
		case 0x00006E6F69737265:return 1;
		case 0x0000746E65677265:return 1;
		default:return 0;
		}
	case 0x766E6F6369746E61:
		switch(wp[1]){
		case 0x0000657669736C75:return 1;
		default:return 0;
		}
	case 0x766E6F636F747561:
		switch(wp[1]){
		case 0x00006E6F69746365:return 1;
		default:return 0;
		}
	case 0x766E6F6374736F70:
		switch(wp[1]){
		case 0x0000657669736C75:return 1;
		default:return 0;
		}
	case 0x766F6365726E6F6E:
		switch(wp[1]){
		case 0x0000656C62617265:return 1;
		default:return 0;
		}
	case 0x766F636976726563:
		switch(wp[1]){
		case 0x00006C6163697365:return 1;
		case 0x00006C616E696761:return 1;
		default:return 0;
		}
	case 0x766F637369646E69:
		switch(wp[1]){
		case 0x0000656C62617265:return 1;
		case 0x0000796C62617265:return 1;
		default:return 0;
		}
	case 0x766F637369646E75:
		switch(wp[1]){
		case 0x0000656C62617265:return 1;
		case 0x0000796C62617265:return 1;
		default:return 0;
		}
	case 0x766F656E69726570:
		switch(wp[1]){
		case 0x00006C616E696761:return 1;
		default:return 0;
		}
	case 0x766F677265646E75:
		switch(wp[1]){
		case 0x00007373656E7265:return 1;
		default:return 0;
		}
	case 0x766F697265747261:
		switch(wp[1]){
		case 0x00006E6F69737265:return 1;
		default:return 0;
		}
	case 0x766F6C6F69726176:
		switch(wp[1]){
		case 0x0000656E69636361:return 1;
		default:return 0;
		}
	case 0x766F72616870657A:
		switch(wp[1]){
		case 0x0000657469686369:return 1;
		default:return 0;
		}
	case 0x766F726574657275:
		switch(wp[1]){
		case 0x00006C6163697365:return 1;
		case 0x00006C616E696761:return 1;
		default:return 0;
		}
	case 0x766F726574736F70:
		switch(wp[1]){
		case 0x00006C6172746E65:return 1;
		default:return 0;
		}
	case 0x766F726874657275:
		switch(wp[1]){
		case 0x00006C6163697365:return 1;
		case 0x00006C616E696761:return 1;
		default:return 0;
		}
	case 0x766F727065726E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x766F72706D696E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x766F727463656C65:
		switch(wp[1]){
		case 0x000065636E656C61:return 1;
		case 0x00006E6F69746365:return 1;
		case 0x000073756F637369:return 1;
		case 0x000079636E656C61:return 1;
		default:return 0;
		}
	case 0x766F737265646E75:
		switch(wp[1]){
		case 0x00006E6769657265:return 1;
		default:return 0;
		}
	case 0x766F737265707573:
		switch(wp[1]){
		case 0x00006E6769657265:return 1;
		default:return 0;
		}
	case 0x766F746569726170:
		switch(wp[1]){
		case 0x00006C616E696761:return 1;
		default:return 0;
		}
	case 0x767265636F646E65:
		switch(wp[1]){
		case 0x0000736974696369:return 1;
		default:return 0;
		}
	case 0x7672656666656E69:
		switch(wp[1]){
		case 0x0000746E65637365:return 1;
		default:return 0;
		}
	case 0x7672656666656E75:
		switch(wp[1]){
		case 0x0000746E65637365:return 1;
		default:return 0;
		}
	case 0x7672657075736E75:
		switch(wp[1]){
		case 0x0000796C64657369:return 1;
		default:return 0;
		}
	case 0x7672657365646E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x7672657365726E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x767265746E696572:
		switch(wp[1]){
		case 0x00006E6F69746E65:return 1;
		default:return 0;
		}
	case 0x776F626D65736964:
		switch(wp[1]){
		case 0x0000746E656D6C65:return 1;
		default:return 0;
		}
	case 0x776F647966666164:
		switch(wp[1]){
		case 0x0000796C6C69646E:return 1;
		default:return 0;
		}
	case 0x776F6C6C61686E75:
		switch(wp[1]){
		case 0x00007373656E6465:return 1;
		default:return 0;
		}
	case 0x776F6C6C65666E75:
		switch(wp[1]){
		case 0x0000646570696873:return 1;
		default:return 0;
		}
	case 0x776F6E6B63616E75:
		switch(wp[1]){
		case 0x000064656764656C:return 1;
		default:return 0;
		}
	case 0x777265687461656C:
		switch(wp[1]){
		case 0x0000676E696B726F:return 1;
		default:return 0;
		}
	case 0x777265746E756F63:
		switch(wp[1]){
		case 0x0000676E696C6C69:return 1;
		case 0x00007373656E7469:return 1;
		default:return 0;
		}
	case 0x77736F6475657370:
		switch(wp[1]){
		case 0x0000676E69746165:return 1;
		default:return 0;
		}
	case 0x7774656E69626163:
		switch(wp[1]){
		case 0x0000676E696B726F:return 1;
		default:return 0;
		}
	case 0x78616D6172666E69:
		switch(wp[1]){
		case 0x00007972616C6C69:return 1;
		default:return 0;
		}
	case 0x78616D6172707573:
		switch(wp[1]){
		case 0x00007972616C6C69:return 1;
		default:return 0;
		}
	case 0x78616D6F6C797473:
		switch(wp[1]){
		case 0x00007972616C6C69:return 1;
		default:return 0;
		}
	case 0x78616D6F6D687465:
		switch(wp[1]){
		case 0x00007972616C6C69:return 1;
		default:return 0;
		}
	case 0x78616D6F72746572:
		switch(wp[1]){
		case 0x00007972616C6C69:return 1;
		default:return 0;
		}
	case 0x78616D6F74706573:
		switch(wp[1]){
		case 0x00007972616C6C69:return 1;
		default:return 0;
		}
	case 0x78616D7265707573:
		switch(wp[1]){
		case 0x00007972616C6C69:return 1;
		default:return 0;
		}
	case 0x78616D7265746E69:
		switch(wp[1]){
		case 0x00007972616C6C69:return 1;
		default:return 0;
		}
	case 0x78616D7563726963:
		switch(wp[1]){
		case 0x00007972616C6C69:return 1;
		default:return 0;
		}
	case 0x78616F72746E6576:
		switch(wp[1]){
		case 0x00007972616C6C69:return 1;
		default:return 0;
		}
	case 0x78656F6D72656874:
		switch(wp[1]){
		case 0x000079726F746963:return 1;
		default:return 0;
		}
	case 0x78656F7265707573:
		switch(wp[1]){
		case 0x00006C616E726574:return 1;
		default:return 0;
		}
	case 0x78656F7265746E61:
		switch(wp[1]){
		case 0x00006C616E726574:return 1;
		default:return 0;
		}
	case 0x7865737265746E69:
		switch(wp[1]){
		case 0x00006D73696C6175:return 1;
		case 0x00007974696C6175:return 1;
		default:return 0;
		}
	case 0x786F646F6874726F:
		switch(wp[1]){
		case 0x0000796C6C616369:return 1;
		default:return 0;
		}
	case 0x786F7261706F7270:
		switch(wp[1]){
		case 0x000063696E6F7479:return 1;
		default:return 0;
		}
	case 0x786F72646E6F6863:
		switch(wp[1]){
		case 0x000064696F687069:return 1;
		default:return 0;
		}
	case 0x786F727570727570:
		switch(wp[1]){
		case 0x00006E6968746E61:return 1;
		default:return 0;
		}
	case 0x786F74616D726564:
		switch(wp[1]){
		case 0x0000616973617265:return 1;
		default:return 0;
		}
	case 0x786F746F72796874:
		switch(wp[1]){
		case 0x00007369736F6369:return 1;
		default:return 0;
		}
	case 0x78756C6172746C75:
		switch(wp[1]){
		case 0x000073756F697275:return 1;
		default:return 0;
		}
	case 0x78756C7265707573:
		switch(wp[1]){
		case 0x000073756F697275:return 1;
		default:return 0;
		}
	case 0x79617368746F6F73:
		switch(wp[1]){
		case 0x0000706968737265:return 1;
		default:return 0;
		}
	case 0x79636568706F7270:
		switch(wp[1]){
		case 0x00007265676E6F6D:return 1;
		default:return 0;
		}
	case 0x79636F6475657370:
		switch(wp[1]){
		case 0x00007369736F6C63:return 1;
		default:return 0;
		}
	case 0x79636F68706C7573:
		switch(wp[1]){
		case 0x00006E65676F6E61:return 1;
		default:return 0;
		}
	case 0x79636F68706D796C:
		switch(wp[1]){
		case 0x000061696D656874:return 1;
		case 0x00007369736F7473:return 1;
		default:return 0;
		}
	case 0x79636F68746E6178:
		switch(wp[1]){
		case 0x00007973706F6E61:return 1;
		default:return 0;
		}
	case 0x79636F6968636172:
		switch(wp[1]){
		case 0x00007369736F6870:return 1;
		default:return 0;
		}
	case 0x79636F6E6E656C62:
		switch(wp[1]){
		case 0x0000736974697473:return 1;
		default:return 0;
		}
	case 0x79636F726870656E:
		switch(wp[1]){
		case 0x00007369736F7473:return 1;
		case 0x0000736974697473:return 1;
		default:return 0;
		}
	case 0x79636F74616D6568:
		switch(wp[1]){
		case 0x00006E6F6F7A6F74:return 1;
		default:return 0;
		}
	case 0x79636F7972636164:
		switch(wp[1]){
		case 0x0000736974697473:return 1;
		default:return 0;
		}
	case 0x79646F6863797370:
		switch(wp[1]){
		case 0x00007363696D616E:return 1;
		default:return 0;
		}
	case 0x79646F68706F7274:
		switch(wp[1]){
		case 0x00007363696D616E:return 1;
		default:return 0;
		}
	case 0x79646F6964726163:
		switch(wp[1]){
		case 0x00007363696D616E:return 1;
		default:return 0;
		}
	case 0x79646F6D72656874:
		switch(wp[1]){
		case 0x00007363696D616E:return 1;
		case 0x00007473696D616E:return 1;
		default:return 0;
		}
	case 0x79646F6D75656E70:
		switch(wp[1]){
		case 0x00007363696D616E:return 1;
		default:return 0;
		}
	case 0x79646F74616D6568:
		switch(wp[1]){
		case 0x00007363696D616E:return 1;
		default:return 0;
		}
	case 0x79676D7563726963:
		switch(wp[1]){
		case 0x00006E6F69746172:return 1;
		case 0x000079726F746172:return 1;
		default:return 0;
		}
	case 0x79676F7274786564:
		switch(wp[1]){
		case 0x00006E6F69746172:return 1;
		case 0x000079726F746172:return 1;
		default:return 0;
		}
	case 0x7967726172647968:
		switch(wp[1]){
		case 0x0000736973616972:return 1;
		default:return 0;
		}
	case 0x7968616365646F64:
		switch(wp[1]){
		case 0x0000646574617264:return 1;
		default:return 0;
		}
	case 0x796863616D736564:
		switch(wp[1]){
		case 0x000073756F74616D:return 1;
		default:return 0;
		}
	case 0x7968636E656E6963:
		switch(wp[1]){
		case 0x000073756F74616D:return 1;
		default:return 0;
		}
	case 0x7968636E65726170:
		switch(wp[1]){
		case 0x000073756F74616D:return 1;
		default:return 0;
		}
	case 0x7968636E6572656D:
		switch(wp[1]){
		case 0x000073756F74616D:return 1;
		default:return 0;
		}
	case 0x7968636E6573656D:
		switch(wp[1]){
		case 0x000073756F74616D:return 1;
		default:return 0;
		}
	case 0x796865766C657774:
		switch(wp[1]){
		case 0x00006E616D65646E:return 1;
		default:return 0;
		}
	case 0x7968697571736573:
		switch(wp[1]){
		case 0x0000646574617264:return 1;
		default:return 0;
		}
	case 0x79686F6E72657473:
		switch(wp[1]){
		case 0x00006E616564696F:return 1;
		default:return 0;
		}
	case 0x79686F726870656E:
		switch(wp[1]){
		case 0x00007369736F7264:return 1;
		default:return 0;
		}
	case 0x7968706F656C6170:
		switch(wp[1]){
		case 0x000079676F6C6F74:return 1;
		default:return 0;
		}
	case 0x7968706F68746E61:
		switch(wp[1]){
		case 0x0000636974696C6C:return 1;
		default:return 0;
		}
	case 0x7968706F7263696D:
		switch(wp[1]){
		case 0x000079676F6C6F74:return 1;
		default:return 0;
		}
	case 0x7968706F72647968:
		switch(wp[1]){
		case 0x00006D756963616C:return 1;
		default:return 0;
		}
	case 0x7968706F72746169:
		switch(wp[1]){
		case 0x0000747369636973:return 1;
		default:return 0;
		}
	case 0x7968706F72747361:
		switch(wp[1]){
		case 0x0000747369636973:return 1;
		default:return 0;
		}
	case 0x7968706F746F6870:
		switch(wp[1]){
		case 0x0000747369636973:return 1;
		default:return 0;
		}
	case 0x7968706F74796870:
		switch(wp[1]){
		case 0x0000796E65676F6C:return 1;
		default:return 0;
		}
	case 0x7968706F75656373:
		switch(wp[1]){
		case 0x00006D756963616C:return 1;
		default:return 0;
		}
	case 0x7968706F79726163:
		switch(wp[1]){
		case 0x000073756F656C6C:return 1;
		default:return 0;
		}
	case 0x7968726F6D726564:
		switch(wp[1]){
		case 0x000073756F68636E:return 1;
		default:return 0;
		}
	case 0x7968727968636170:
		switch(wp[1]){
		case 0x000073756F68636E:return 1;
		default:return 0;
		}
	case 0x7968727974616C70:
		switch(wp[1]){
		case 0x000073756F68636E:return 1;
		default:return 0;
		}
	case 0x79687461626F726F:
		switch(wp[1]){
		case 0x000063697274656D:return 1;
		default:return 0;
		}
	case 0x796874656D697274:
		switch(wp[1]){
		case 0x0000656E696D616C:return 1;
		default:return 0;
		}
	case 0x796874656F6E6F6D:
		switch(wp[1]){
		case 0x0000656E696D616C:return 1;
		default:return 0;
		}
	case 0x7968747265707968:
		switch(wp[1]){
		case 0x00007369736F6572:return 1;
		default:return 0;
		}
	case 0x796B6C616F747561:
		switch(wp[1]){
		case 0x00006E6F6974616C:return 1;
		default:return 0;
		}
	case 0x796C676469756C66:
		switch(wp[1]){
		case 0x0000657461726563:return 1;
		default:return 0;
		}
	case 0x796C676F72656968:
		switch(wp[1]){
		case 0x00006C6163696870:return 1;
		default:return 0;
		}
	case 0x796C6F706F6E6F6D:
		switch(wp[1]){
		case 0x0000747369676F6C:return 1;
		default:return 0;
		}
	case 0x796D6F6469636563:
		switch(wp[1]){
		case 0x000073756F646969:return 1;
		default:return 0;
		}
	case 0x796D6F6475657370:
		switch(wp[1]){
		case 0x00006C6163696874:return 1;
		default:return 0;
		}
	case 0x796D6F6968636172:
		switch(wp[1]){
		case 0x0000736974696C65:return 1;
		default:return 0;
		}
	case 0x796D6F6E656D7968:
		switch(wp[1]){
		case 0x000064696F746563:return 1;
		case 0x000073756F746563:return 1;
		default:return 0;
		}
	case 0x796D6F6E65727970:
		switch(wp[1]){
		case 0x000073756F746563:return 1;
		default:return 0;
		}
	case 0x796D6F6E69746361:
		switch(wp[1]){
		case 0x000073756F746563:return 1;
		default:return 0;
		}
	case 0x796D6F7268706574:
		switch(wp[1]){
		case 0x0000636974696C65:return 1;
		default:return 0;
		}
	case 0x796D6F74616D6568:
		switch(wp[1]){
		case 0x0000736974696C65:return 1;
		default:return 0;
		}
	case 0x796D6F7473616C62:
		switch(wp[1]){
		case 0x000073756F746563:return 1;
		default:return 0;
		}
	case 0x796D6F7A69686373:
		switch(wp[1]){
		case 0x000073756F746563:return 1;
		default:return 0;
		}
	case 0x796E656870697274:
		switch(wp[1]){
		case 0x0000656E696D616C:return 1;
		default:return 0;
		}
	case 0x796E6976796C6F70:
		switch(wp[1]){
		case 0x0000656E6564696C:return 1;
		default:return 0;
		}
	case 0x796E6F6475657370:
		switch(wp[1]){
		case 0x0000656C636E756D:return 1;
		case 0x0000796C73756F6D:return 1;
		default:return 0;
		}
	case 0x796E6F7265746568:
		switch(wp[1]){
		case 0x0000796C73756F6D:return 1;
		default:return 0;
		}
	case 0x7970617268746E61:
		switch(wp[1]){
		case 0x0000656E69646972:return 1;
		default:return 0;
		}
	case 0x79706F6475657370:
		switch(wp[1]){
		case 0x00006D726F666972:return 1;
		default:return 0;
		}
	case 0x79706F7265746568:
		switch(wp[1]){
		case 0x00007369736F6E63:return 1;
		default:return 0;
		}
	case 0x79706F726870656E:
		switch(wp[1]){
		case 0x0000736974696C65:return 1;
		default:return 0;
		}
	case 0x79706F72706F7369:
		switch(wp[1]){
		case 0x0000656E696D616C:return 1;
		default:return 0;
		}
	case 0x79706F7972636164:
		switch(wp[1]){
		case 0x000061656872726F:return 1;
		default:return 0;
		}
	case 0x7972616C69726570:
		switch(wp[1]){
		case 0x000073697469676E:return 1;
		default:return 0;
		}
	case 0x7972616F63697263:
		switch(wp[1]){
		case 0x000064696F6E6574:return 1;
		default:return 0;
		}
	case 0x7972616F72796874:
		switch(wp[1]){
		case 0x000064696F6E6574:return 1;
		default:return 0;
		}
	case 0x7972617265746E69:
		switch(wp[1]){
		case 0x000064696F6E6574:return 1;
		default:return 0;
		}
	case 0x7972636F6E697275:
		switch(wp[1]){
		case 0x000079706F63736F:return 1;
		default:return 0;
		}
	case 0x79726561746E6570:
		switch(wp[1]){
		case 0x0000657469726874:return 1;
		default:return 0;
		}
	case 0x7972657470616E61:
		switch(wp[1]){
		case 0x00006D7369746F67:return 1;
		case 0x000073756F746F67:return 1;
		default:return 0;
		}
	case 0x79726574706F7865:
		switch(wp[1]){
		case 0x00006D7369746F67:return 1;
		case 0x000073756F746F67:return 1;
		default:return 0;
		}
	case 0x7973616365646F64:
		switch(wp[1]){
		case 0x0000636962616C6C:return 1;
		case 0x0000656C62616C6C:return 1;
		default:return 0;
		}
	case 0x7973697261706D69:
		switch(wp[1]){
		case 0x0000636962616C6C:return 1;
		default:return 0;
		}
	case 0x7973697264617571:
		switch(wp[1]){
		case 0x0000636962616C6C:return 1;
		case 0x0000656C62616C6C:return 1;
		default:return 0;
		}
	case 0x79736F6465726568:
		switch(wp[1]){
		case 0x000073696C696870:return 1;
		default:return 0;
		}
	case 0x79736F6475657370:
		switch(wp[1]){
		case 0x000073696C696870:return 1;
		case 0x0000797274656D6D:return 1;
		default:return 0;
		}
	case 0x79736F6D65656C65:
		switch(wp[1]){
		case 0x0000796C6972616E:return 1;
		default:return 0;
		}
	case 0x79736F7265746568:
		switch(wp[1]){
		case 0x0000636962616C6C:return 1;
		default:return 0;
		}
	case 0x79736F7265746E65:
		switch(wp[1]){
		case 0x000073696C696870:return 1;
		default:return 0;
		}
	case 0x79736F72746E6563:
		switch(wp[1]){
		case 0x0000797274656D6D:return 1;
		default:return 0;
		}
	case 0x7973706172746E69:
		switch(wp[1]){
		case 0x00006C6163696863:return 1;
		default:return 0;
		}
	case 0x7973706D6574656D:
		switch(wp[1]){
		case 0x00006C61736F6863:return 1;
		case 0x00007365736F6863:return 1;
		case 0x00007369736F6863:return 1;
		default:return 0;
		}
	case 0x7973706F68746170:
		switch(wp[1]){
		case 0x00007369736F6863:return 1;
		default:return 0;
		}
	case 0x7973706F7275656E:
		switch(wp[1]){
		case 0x00007369736F6863:return 1;
		default:return 0;
		}
	case 0x7974696E616D7568:
		switch(wp[1]){
		case 0x00007265676E6F6D:return 1;
		default:return 0;
		}
	case 0x79746F63796C6F70:
		switch(wp[1]){
		case 0x0000796E6F64656C:return 1;
		default:return 0;
		}
	case 0x79746F696E617263:
		switch(wp[1]){
		case 0x000063696E61706D:return 1;
		default:return 0;
		}
	case 0x79786F7265707573:
		switch(wp[1]){
		case 0x00006574616E6567:return 1;
		default:return 0;
		}
	case 0x79786F7265707968:
		switch(wp[1]){
		case 0x00006574616E6567:return 1;
		case 0x0000657A696E6567:return 1;
		default:return 0;
		}
	case 0x797A6F7265746568:
		switch(wp[1]){
		case 0x0000797469736F67:return 1;
		default:return 0;
		}
	case 0x797A6F7470797263:
		switch(wp[1]){
		case 0x0000797469736F67:return 1;
		default:return 0;
		}
	case 0x7A6569706F6D6568:
		switch(wp[1]){
		case 0x0000726574656D6F:return 1;
		default:return 0;
		}
	case 0x7A656D6F746F6870:
		switch(wp[1]){
		case 0x0000657079746F7A:return 1;
		default:return 0;
		}
	case 0x7A6F726568746E61:
		switch(wp[1]){
		case 0x00006C6164696F6F:return 1;
		default:return 0;
		}
	case 0x7A6F726874797265:
		switch(wp[1]){
		case 0x0000657469636E69:return 1;
		default:return 0;
		}
	case 0x7A796D6F72746570:
		switch(wp[1]){
		case 0x000064696F746E6F:return 1;
		default:return 0;
		}
	default:return 0;
	}
}
