#include <stdint.h>
unsigned int contains15(uint64_t * wp) {
	switch(wp[0] | (uint64_t)(0x2020202020202020)){
	case 0x6162656E79726F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616972657463:return 1;
		default:return 0;
		}
	case 0x6162697263736E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x61626D696C636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x61626F6475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D756972657463:return 1;
		default:return 0;
		}
	case 0x61626F6D72656874:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0068706172676F72:return 1;
		case 0x00726574656D6F72:return 1;
		default:return 0;
		}
	case 0x61626F6E6F726863:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00726574656D6F72:return 1;
		default:return 0;
		}
	case 0x61626F7268747261:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D756972657463:return 1;
		default:return 0;
		}
	case 0x61626F7469746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007473696E6F6363:return 1;
		default:return 0;
		}
	case 0x6163616E61746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697472616874:return 1;
		default:return 0;
		}
	case 0x616365646174636F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065746172647968:return 1;
		default:return 0;
		}
	case 0x6163656461786568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064696F72646568:return 1;
		default:return 0;
		}
	case 0x61636964656D6D69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6163696666617274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6163696666656E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C73756F6963:return 1;
		default:return 0;
		}
	case 0x6163696669646F6D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007473696E6F6974:return 1;
		default:return 0;
		}
	case 0x6163696669746172:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007473696E6F6974:return 1;
		default:return 0;
		}
	case 0x6163696C706D6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646574:return 1;
		default:return 0;
		}
	case 0x6163697073726570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C73756F6963:return 1;
		default:return 0;
		}
	case 0x6163697264617571:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616C757370:return 1;
		default:return 0;
		}
	case 0x6163697463617270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6163697571736573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616E6F6272:return 1;
		default:return 0;
		}
	case 0x616369786F746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646574:return 1;
		default:return 0;
		}
	case 0x61636C75766E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C62617A696E:return 1;
		default:return 0;
		}
	case 0x61636C796E656870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006564696D696272:return 1;
		default:return 0;
		}
	case 0x61636C7974656361:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6F7A616272:return 1;
		default:return 0;
		}
	case 0x61636F6369736576:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6E726576:return 1;
		default:return 0;
		}
	case 0x61636F6475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064696F6E696372:return 1;
		case 0x006564696D616272:return 1;
		case 0x006D756C75746970:return 1;
		default:return 0;
		}
	case 0x61636F656863736F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00616D6F6E696372:return 1;
		default:return 0;
		}
	case 0x61636F6863797370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073697372616874:return 1;
		default:return 0;
		}
	case 0x61636F68706C7573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006564696D616272:return 1;
		case 0x006564696D696272:return 1;
		case 0x006574616C6F6272:return 1;
		case 0x006574616E6F6272:return 1;
		default:return 0;
		}
	case 0x61636F69636C6163:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657469746F6E72:return 1;
		default:return 0;
		}
	case 0x61636F696863726F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073697361626174:return 1;
		default:return 0;
		}
	case 0x61636F6968637369:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6E726576:return 1;
		default:return 0;
		}
	case 0x61636F69726F6863:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00616D6F6E696372:return 1;
		case 0x007972616C6C6970:return 1;
		default:return 0;
		}
	case 0x61636F6C656C6C61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00636974796C6174:return 1;
		default:return 0;
		}
	case 0x61636F6C75626966:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61656E61636C:return 1;
		default:return 0;
		}
	case 0x61636F6D65636172:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616E6F6272:return 1;
		default:return 0;
		}
	case 0x61636F6D6D617370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00616D6F6E696372:return 1;
		default:return 0;
		}
	case 0x61636F6E616C656D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00616D6F6E696372:return 1;
		default:return 0;
		}
	case 0x61636F6E6F6D6D61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6E6F6272:return 1;
		default:return 0;
		}
	case 0x61636F7268747261:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00616D6F6E696372:return 1;
		default:return 0;
		}
	case 0x61636F726F6C6863:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616E6F6272:return 1;
		default:return 0;
		}
	case 0x61636F7274736167:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616872726174:return 1;
		default:return 0;
		}
	case 0x61636F73736F6C67:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00616D6F6E696372:return 1;
		default:return 0;
		}
	case 0x61636F74616D6568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697472616874:return 1;
		case 0x0073697372616874:return 1;
		default:return 0;
		}
	case 0x61636F7665726E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x61636F7665727269:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6163736172666E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00736972616C7570:return 1;
		default:return 0;
		}
	case 0x6164617265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617470:return 1;
		default:return 0;
		}
	case 0x6164617573726570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6164656365746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C73756F656E:return 1;
		default:return 0;
		}
	case 0x6164696F76616E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6164697669646E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x61646E656D6D6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x61646E756F626E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x61646E756F736E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x61646E756F776E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x61646F6C6167656D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696C797463:return 1;
		case 0x0073756F6C797463:return 1;
		default:return 0;
		}
	case 0x61646F7265746568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6C797463:return 1;
		default:return 0;
		}
	case 0x61646F72706D6170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696C797463:return 1;
		case 0x0073756F6C797463:return 1;
		default:return 0;
		}
	case 0x6164726177616E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6164796863617262:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696C797463:return 1;
		case 0x0073756F6C797463:return 1;
		default:return 0;
		}
	case 0x6165636165706E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6165636172746E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6165636976726573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x61656375646F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6165657267616E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6165667265646E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E6972656874:return 1;
		default:return 0;
		}
	case 0x6165676475626E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x61656772616C6E65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x616568646E756F72:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646564:return 1;
		default:return 0;
		}
	case 0x616568646E756F73:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073656E64657472:return 1;
		case 0x007373656E646564:return 1;
		default:return 0;
		}
	case 0x616568656C646461:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646564:return 1;
		default:return 0;
		}
	case 0x616568676E6F7277:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646564:return 1;
		default:return 0;
		}
	case 0x6165686B63696874:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646564:return 1;
		default:return 0;
		}
	case 0x6165686B636F6C62:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646564:return 1;
		default:return 0;
		}
	case 0x6165686C6576656C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646564:return 1;
		default:return 0;
		}
	case 0x6165687261656C63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646564:return 1;
		default:return 0;
		}
	case 0x616568746867696C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646564:return 1;
		default:return 0;
		}
	case 0x61656C6C616D6E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x61656D6168736E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x61656D7265706D69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x61656D7265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6261727573:return 1;
		default:return 0;
		}
	case 0x61656E65676E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369676F6C:return 1;
		default:return 0;
		}
	case 0x61657274696D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C62616E6F73:return 1;
		default:return 0;
		}
	case 0x61657275626E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697461726375:return 1;
		default:return 0;
		}
	case 0x6166697264617571:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C73756F6972:return 1;
		default:return 0;
		}
	case 0x61676572676E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007473696E6F6974:return 1;
		default:return 0;
		}
	case 0x6167696C69726570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F746E656D:return 1;
		default:return 0;
		}
	case 0x6167696C6F627574:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F746E656D:return 1;
		default:return 0;
		}
	case 0x61676974696D6E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646574:return 1;
		default:return 0;
		}
	case 0x61676976616E6E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x61676E6968746F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696E616972:return 1;
		default:return 0;
		}
	case 0x61676E6F6C6F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x61676F6C696D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696D68746972:return 1;
		default:return 0;
		}
	case 0x61676F7265746568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657461696C676E:return 1;
		default:return 0;
		}
	case 0x61676F7265746E65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073697469727473:return 1;
		default:return 0;
		}
	case 0x61677265646E696B:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E696E657472:return 1;
		default:return 0;
		}
	case 0x6168636165746E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x616863616F636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6168636E65736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C676E69746E:return 1;
		default:return 0;
		}
	case 0x6168637265646E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00726F6C6C65636E:return 1;
		default:return 0;
		}
	case 0x6168637265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C626165676E:return 1;
		case 0x00796C626165676E:return 1;
		default:return 0;
		}
	case 0x6168637369646E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6261656772:return 1;
		default:return 0;
		}
	case 0x61686374616D6E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x616863756F746E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x61686378656E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C626165676E:return 1;
		default:return 0;
		}
	case 0x6168706172707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6165676E7972:return 1;
		default:return 0;
		}
	case 0x6168706563616E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369736F65616C:return 1;
		default:return 0;
		}
	case 0x6168706C61657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369746562:return 1;
		default:return 0;
		}
	case 0x6168706D6F726170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696C65636F6C:return 1;
		default:return 0;
		}
	case 0x6168706F63637562:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6165676E7972:return 1;
		default:return 0;
		}
	case 0x6168706F63697263:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6165676E7972:return 1;
		default:return 0;
		}
	case 0x6168706F6962616C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6165676E7972:return 1;
		default:return 0;
		}
	case 0x6168706F6C797473:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6165676E7972:return 1;
		case 0x00737565676E7972:return 1;
		default:return 0;
		}
	case 0x6168706F6E656461:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6165676E7972:return 1;
		default:return 0;
		}
	case 0x6168706F6E696872:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6165676E7972:return 1;
		default:return 0;
		}
	case 0x6168706F70726163:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6165676E616C:return 1;
		default:return 0;
		}
	case 0x6168706F72746570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6165676E7972:return 1;
		default:return 0;
		}
	case 0x6168706F72746572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6165676E7972:return 1;
		default:return 0;
		}
	case 0x6168706F73726174:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6165676E616C:return 1;
		default:return 0;
		}
	case 0x6168707265707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6165676E616C:return 1;
		case 0x006C6165676E7972:return 1;
		case 0x006D7369676E616C:return 1;
		default:return 0;
		}
	case 0x6168707265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6165676E616C:return 1;
		default:return 0;
		}
	case 0x6168726172746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E616964696863:return 1;
		default:return 0;
		}
	case 0x6168746E616E656F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006564796865646C:return 1;
		default:return 0;
		}
	case 0x6169636F736E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696E6F6974:return 1;
		default:return 0;
		}
	case 0x6169636F73736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6169646169746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00747369726F6870:return 1;
		default:return 0;
		}
	case 0x6169646F6874726F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696870617267:return 1;
		default:return 0;
		}
	case 0x6169647265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6163696C6F62:return 1;
		default:return 0;
		}
	case 0x6169647265707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6163696C6F62:return 1;
		case 0x006D73697463656C:return 1;
		default:return 0;
		}
	case 0x6169666974726563:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x616966697473756A:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x61696C69636E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007473696E6F6974:return 1;
		default:return 0;
		}
	case 0x61696C7070616E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x61696C7261706E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00797261746E656D:return 1;
		default:return 0;
		}
	case 0x616970656C637361:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F65636164:return 1;
		default:return 0;
		}
	case 0x6169726165776E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6169727461786568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E61746E6F63:return 1;
		default:return 0;
		}
	case 0x616972756372656D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D75696E6F6D6D:return 1;
		default:return 0;
		}
	case 0x616973656C636365:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657A6963697473:return 1;
		case 0x006D736963697473:return 1;
		default:return 0;
		}
	case 0x616974696E696E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646574:return 1;
		default:return 0;
		}
	case 0x6169767265706D69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x616B616570736E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x616B616572626E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x616B6C616F6D6568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00726574656D696C:return 1;
		default:return 0;
		}
	case 0x616B6E6968746E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x616B6E6972646E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x616B6F6C6167656D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657479636F7972:return 1;
		default:return 0;
		}
	case 0x616C6165676E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x616C616870616E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369736169746E:return 1;
		default:return 0;
		}
	case 0x616C636172666E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072616C75636976:return 1;
		default:return 0;
		}
	case 0x616C636172707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072616C75636976:return 1;
		default:return 0;
		}
	case 0x616C636E656D6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0070696873726F74:return 1;
		default:return 0;
		}
	case 0x616C636F6E6F6369:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D736963697473:return 1;
		default:return 0;
		}
	case 0x616C636F72746572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072616C75636976:return 1;
		default:return 0;
		}
	case 0x616C636F74736F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072616C75636976:return 1;
		default:return 0;
		}
	case 0x616C637265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064656966697373:return 1;
		default:return 0;
		}
	case 0x616C637265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072616C75636976:return 1;
		default:return 0;
		}
	case 0x616C6568746E6178:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00616564696F6D73:return 1;
		default:return 0;
		}
	case 0x616C656D69746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696C6F68636E:return 1;
		default:return 0;
		}
	case 0x616C656D6F707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061696C6F68636E:return 1;
		default:return 0;
		}
	case 0x616C656F746F6870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079746963697473:return 1;
		default:return 0;
		}
	case 0x616C657665726E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657A696E6F6974:return 1;
		default:return 0;
		}
	case 0x616C666972756C70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616C6C6567:return 1;
		default:return 0;
		}
	case 0x616C6669746C756D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616C6C6567:return 1;
		default:return 0;
		}
	case 0x616C666E69627573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616D6D:return 1;
		case 0x0079726F74616D6D:return 1;
		default:return 0;
		}
	case 0x616C666E696E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079726F74616D6D:return 1;
		default:return 0;
		}
	case 0x616C666F696C6963:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616C6C6567:return 1;
		default:return 0;
		}
	case 0x616C666F7373696C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616C6C6567:return 1;
		default:return 0;
		}
	case 0x616C666F74737963:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616C6C6567:return 1;
		default:return 0;
		}
	case 0x616C666F7A696872:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616C6C6567:return 1;
		default:return 0;
		}
	case 0x616C676F656C6170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079676F6C6F6963:return 1;
		default:return 0;
		}
	case 0x616C68636174656D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6564796D:return 1;
		default:return 0;
		}
	case 0x616C68636F6D6F68:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6564796D:return 1;
		default:return 0;
		}
	case 0x616C68636F6E6F6D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6564796D:return 1;
		default:return 0;
		}
	case 0x616C696176616E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x616C6968696E6E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696E6F6974:return 1;
		case 0x007473696E6F6974:return 1;
		default:return 0;
		}
	case 0x616C696D69737361:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007473696E6F6974:return 1;
		default:return 0;
		}
	case 0x616C696F70736E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x616C697264617571:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61726574:return 1;
		default:return 0;
		}
	case 0x616C6C656373696D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C73756F656E:return 1;
		default:return 0;
		}
	case 0x616C6C7973697274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636962:return 1;
		default:return 0;
		}
	case 0x616C6C79736E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E636962:return 1;
		default:return 0;
		}
	case 0x616C6F6475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00646574616E696D:return 1;
		default:return 0;
		}
	case 0x616C6F69706F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006564796865646C:return 1;
		default:return 0;
		}
	case 0x616C6F6E6F6D6564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C73756F7274:return 1;
		default:return 0;
		}
	case 0x616C6F7265746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61726574:return 1;
		default:return 0;
		}
	case 0x616C6F72746E6576:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61726574:return 1;
		default:return 0;
		}
	case 0x616C6F73736F6C67:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6165676E7972:return 1;
		default:return 0;
		}
	case 0x616C706D6F636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C676E696E69:return 1;
		case 0x00796C746E617369:return 1;
		default:return 0;
		}
	case 0x616C706F7263696D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657479636F7473:return 1;
		default:return 0;
		}
	case 0x616C706F746F6870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0074686769727779:return 1;
		default:return 0;
		}
	case 0x616C707265707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D736972616967:return 1;
		default:return 0;
		}
	case 0x616C70736E617274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F697461746E:return 1;
		default:return 0;
		}
	case 0x616C746961727473:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646563:return 1;
		default:return 0;
		}
	case 0x616C756369747261:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007473696E6F6974:return 1;
		default:return 0;
		}
	case 0x616C756765726564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657A696E6F6974:return 1;
		default:return 0;
		}
	case 0x616C756F62697065:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574697265676E:return 1;
		default:return 0;
		}
	case 0x616C7963696C6173:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006564796865646C:return 1;
		default:return 0;
		}
	case 0x616D61676C616D61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007473696E6F6974:return 1;
		default:return 0;
		}
	case 0x616D656874616E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x616D656C626F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x616D656C746E6567:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E696C6E:return 1;
		default:return 0;
		}
	case 0x616D65726F656874:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x616D69616C636572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x616D697473656E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x616D697473656E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x616D6C6F6F686373:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E6972657473:return 1;
		case 0x0068736972657473:return 1;
		case 0x006D736972657473:return 1;
		default:return 0;
		}
	case 0x616D6D616C666E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x616D6D6172676E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x616D6F63696C6973:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006573656E61676E:return 1;
		case 0x006E616973656E67:return 1;
		default:return 0;
		}
	case 0x616D6F6475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E696C756373:return 1;
		case 0x006574696863616C:return 1;
		default:return 0;
		}
	case 0x616D6F6964696E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x616D6F696C626962:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696E61696E:return 1;
		default:return 0;
		}
	case 0x616D6F696E617263:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007972616C6C6978:return 1;
		default:return 0;
		}
	case 0x616D6F6D72656874:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D736974656E67:return 1;
		default:return 0;
		}
	case 0x616D6F6E6167726F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D756973656E67:return 1;
		default:return 0;
		}
	case 0x616D6F6E61746974:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065746974656E67:return 1;
		default:return 0;
		}
	case 0x616D6F6E65687073:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007972616C6C6978:return 1;
		default:return 0;
		}
	case 0x616D6F6E65726870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D736974656E67:return 1;
		default:return 0;
		}
	case 0x616D6F6E6F726170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697473616973:return 1;
		default:return 0;
		}
	case 0x616D6F6E72657473:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007972616C6C6978:return 1;
		default:return 0;
		}
	case 0x616D6F72646F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x616D6F7265746568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065746167697473:return 1;
		case 0x0065746F67697473:return 1;
		default:return 0;
		}
	case 0x616D6F7269746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696369746E:return 1;
		default:return 0;
		}
	case 0x616D6F74616C6170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007972616C6C6978:return 1;
		default:return 0;
		}
	case 0x616D6F746962726F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007972616C6C6978:return 1;
		default:return 0;
		}
	case 0x616D6F746E6F7266:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007972616C6C6978:return 1;
		default:return 0;
		}
	case 0x616D6F74706D7973:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x616D726F66657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696E6F6974:return 1;
		case 0x007473696E6F6974:return 1;
		case 0x007972616E6F6974:return 1;
		default:return 0;
		}
	case 0x616D726F666E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x616D7374726F7073:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E696C6E:return 1;
		default:return 0;
		}
	case 0x616D737974616C70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00736564696F796D:return 1;
		default:return 0;
		}
	case 0x616D74726F706E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006465756165746E:return 1;
		default:return 0;
		}
	case 0x616E616365646E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E6568746870:return 1;
		default:return 0;
		}
	case 0x616E616369726570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072616C7563696C:return 1;
		default:return 0;
		}
	case 0x616E616863636162:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696E61696C:return 1;
		default:return 0;
		}
	case 0x616E616F68746170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6163696D6F74:return 1;
		default:return 0;
		}
	case 0x616E616F7263616D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61636974796C:return 1;
		default:return 0;
		}
	case 0x616E616F7263696D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61636974796C:return 1;
		default:return 0;
		}
	case 0x616E616F7275656E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6163696D6F74:return 1;
		default:return 0;
		}
	case 0x616E6172626D656D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C73756F6563:return 1;
		default:return 0;
		}
	case 0x616E656361656361:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E6568746870:return 1;
		default:return 0;
		}
	case 0x616E656761786573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696E616972:return 1;
		default:return 0;
		}
	case 0x616E65676F74636F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696E616972:return 1;
		default:return 0;
		}
	case 0x616E65696C616E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x616E65696C616E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x616E676572706D69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x616E676965666E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x616E696174736E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x616E69636964656D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x616E696665646E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x616E696665646E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x616E697265746576:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696E616972:return 1;
		default:return 0;
		}
	case 0x616E697274636F64:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696E616972:return 1;
		default:return 0;
		}
	case 0x616E6B6B63696E6B:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079726F74616B63:return 1;
		default:return 0;
		}
	case 0x616E6D7563726963:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6261676976:return 1;
		case 0x00726F7461676976:return 1;
		default:return 0;
		}
	case 0x616E6F6475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00616C6C65636976:return 1;
		case 0x0072616C75636976:return 1;
		default:return 0;
		}
	case 0x616E6F68706C7573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696F68746870:return 1;
		default:return 0;
		}
	case 0x616E6F6968736166:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x616E6F696E69706F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646574:return 1;
		default:return 0;
		}
	case 0x616E6F6D69746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369686372:return 1;
		default:return 0;
		}
	case 0x616E6F7361657274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x616E7261656C6E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x616E726574657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61727574:return 1;
		default:return 0;
		}
	case 0x616E7964616D6568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00726574656D6F6D:return 1;
		default:return 0;
		}
	case 0x616E79646F636F74:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00726574656D6F6D:return 1;
		default:return 0;
		}
	case 0x616E79646F746B65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696870726F6D:return 1;
		default:return 0;
		}
	case 0x616F626D6F726874:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369746969676E:return 1;
		default:return 0;
		}
	case 0x616F6361726F6874:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61696D6F7263:return 1;
		default:return 0;
		}
	case 0x616F636974726F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E6572656666:return 1;
		default:return 0;
		}
	case 0x616F636976726563:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007972616C6C6978:return 1;
		default:return 0;
		}
	case 0x616F637265707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C62616C7567:return 1;
		default:return 0;
		}
	case 0x616F68636E6F7262:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072616C6F65766C:return 1;
		case 0x00736974696E6564:return 1;
		default:return 0;
		}
	case 0x616F696874697274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006564796865646C:return 1;
		default:return 0;
		}
	case 0x616F6C756373756D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616972657472:return 1;
		default:return 0;
		}
	case 0x616F6C7570616373:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007972616C6C6978:return 1;
		default:return 0;
		}
	case 0x616F726479686564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00636962726F6373:return 1;
		default:return 0;
		}
	case 0x616F726574756564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065736F6D75626C:return 1;
		default:return 0;
		}
	case 0x616F727065726E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C676E696863:return 1;
		case 0x00796C6C75666863:return 1;
		default:return 0;
		}
	case 0x616F727463656C65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697473756F63:return 1;
		case 0x00636974796C616E:return 1;
		case 0x00736973796C616E:return 1;
		case 0x007974696E696666:return 1;
		default:return 0;
		}
	case 0x616F7461636C7573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616C6F6572:return 1;
		default:return 0;
		}
	case 0x616F7461746E6564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616C75676E:return 1;
		default:return 0;
		}
	case 0x6170616373656E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6170616373656E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6170656C7A7A7570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646574:return 1;
		default:return 0;
		}
	case 0x617069636E616D65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007473696E6F6974:return 1;
		default:return 0;
		}
	case 0x6170697264617571:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974697472:return 1;
		case 0x00796C6574697472:return 1;
		default:return 0;
		}
	case 0x61706F636974706F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007972616C6C6970:return 1;
		default:return 0;
		}
	case 0x61706F6461726166:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F697461706C:return 1;
		default:return 0;
		}
	case 0x61706F6475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697469736172:return 1;
		case 0x006369746F697274:return 1;
		case 0x00636974796C6172:return 1;
		case 0x00736973796C6172:return 1;
		default:return 0;
		}
	case 0x61706F65616C6170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079676F6C6F6874:return 1;
		default:return 0;
		}
	case 0x61706F656F6D6F68:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E616963696874:return 1;
		case 0x0079746963696874:return 1;
		default:return 0;
		}
	case 0x61706F6863796E6F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079676F6C6F6874:return 1;
		default:return 0;
		}
	case 0x61706F6863797370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574696863796E:return 1;
		default:return 0;
		}
	case 0x61706F6874657473:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00736973796C6172:return 1;
		default:return 0;
		}
	case 0x61706F6964726163:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00736973616C7072:return 1;
		default:return 0;
		}
	case 0x61706F6968636172:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00736973796C6172:return 1;
		default:return 0;
		}
	case 0x61706F6D72656874:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F697461706C:return 1;
		default:return 0;
		}
	case 0x61706F6E656C7073:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00616D6174636572:return 1;
		default:return 0;
		}
	case 0x61706F6E69746572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00736974696C6970:return 1;
		default:return 0;
		}
	case 0x61706F7265746E65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00736973796C6172:return 1;
		default:return 0;
		}
	case 0x61706F726870656E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00736973796C6172:return 1;
		default:return 0;
		}
	case 0x61706F7268747261:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079676F6C6F6874:return 1;
		default:return 0;
		}
	case 0x61706F7274736167:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00736973796C6172:return 1;
		default:return 0;
		}
	case 0x61706F73736F6C67:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756E6974616C:return 1;
		default:return 0;
		}
	case 0x61706F74616D6568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079676F6C6F6874:return 1;
		default:return 0;
		}
	case 0x61706F74636F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00736973796C6172:return 1;
		default:return 0;
		}
	case 0x61706F746962726F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61726265706C:return 1;
		default:return 0;
		}
	case 0x61706F7972626D65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079676F6C6F6874:return 1;
		default:return 0;
		}
	case 0x6172616475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6164696E6863:return 1;
		default:return 0;
		}
	case 0x617261686373696D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657A6972657463:return 1;
		default:return 0;
		}
	case 0x6172616870656C62:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00736974696E6564:return 1;
		default:return 0;
		}
	case 0x6172617065727269:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6172617065736E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6172617065736E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6172617069736162:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E697473616C70:return 1;
		default:return 0;
		}
	case 0x6172617069746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696870617267:return 1;
		case 0x006C61636974796C:return 1;
		default:return 0;
		}
	case 0x617261706F747963:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E697473616C70:return 1;
		default:return 0;
		}
	case 0x6172626172746574:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616968636E:return 1;
		default:return 0;
		}
	case 0x6172626574726576:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616972657472:return 1;
		default:return 0;
		}
	case 0x6172626973726F64:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616968636E:return 1;
		default:return 0;
		}
	case 0x6172626974636574:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616968636E:return 1;
		default:return 0;
		}
	case 0x61726269746C756D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616968636E:return 1;
		default:return 0;
		}
	case 0x6172626974756373:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616968636E:return 1;
		default:return 0;
		}
	case 0x6172626F63636173:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616968636E:return 1;
		default:return 0;
		}
	case 0x6172626F67797A61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616968636E:return 1;
		default:return 0;
		}
	case 0x6172626F68706F6C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616968636E:return 1;
		default:return 0;
		}
	case 0x6172626F696C6F66:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616968636E:return 1;
		default:return 0;
		}
	case 0x6172626F6D6C7570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616968636E:return 1;
		default:return 0;
		}
	case 0x6172626F6D726564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006174616968636E:return 1;
		case 0x006574616968636E:return 1;
		default:return 0;
		}
	case 0x6172626F72647968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616968636E:return 1;
		default:return 0;
		}
	case 0x6172626F72657470:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616968636E:return 1;
		default:return 0;
		}
	case 0x6172626F72697073:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616968636E:return 1;
		default:return 0;
		}
	case 0x6172626F73696E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616968636E:return 1;
		default:return 0;
		}
	case 0x6172626F736F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616968636E:return 1;
		default:return 0;
		}
	case 0x6172626F746F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616968636E:return 1;
		default:return 0;
		}
	case 0x61726365736E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646574:return 1;
		default:return 0;
		}
	case 0x6172636F6C68636F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x6172636F74756C70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x6172646568746163:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x6172646F746F6870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007967727574616D:return 1;
		default:return 0;
		}
	case 0x6172656C6F746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6172656C6F746E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6172656D756E6E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6172656E65676564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007473696E6F6974:return 1;
		default:return 0;
		}
	case 0x6172657075736E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6172657075736E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064657461756E6E:return 1;
		default:return 0;
		}
	case 0x61726574696C6C61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007473696E6F6974:return 1;
		default:return 0;
		}
	case 0x617265746C616E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x617265746C616E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x617265746E756F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065636E61696C6C:return 1;
		case 0x006863616F727070:return 1;
		case 0x00746E656D726576:return 1;
		case 0x00746E656D756772:return 1;
		case 0x00796C6576697463:return 1;
		case 0x00796C676E697463:return 1;
		case 0x0079746976697463:return 1;
		default:return 0;
		}
	case 0x6172657474756E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x61726575716E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6172657665736E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x617265766F636572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6172667265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696E726574:return 1;
		default:return 0;
		}
	case 0x6172667369646E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006465736968636E:return 1;
		default:return 0;
		}
	case 0x61726769746C756D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00646574616C756E:return 1;
		default:return 0;
		}
	case 0x6172676E6F636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00646574616C7574:return 1;
		default:return 0;
		}
	case 0x6172676F6E6F6870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C6163696D:return 1;
		default:return 0;
		}
	case 0x6172676F7263696D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00636974696C756E:return 1;
		default:return 0;
		}
	case 0x6172676F72646E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006564696C6F6870:return 1;
		default:return 0;
		}
	case 0x6172676F72656968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756574616D6D:return 1;
		case 0x0074736974616D6D:return 1;
		default:return 0;
		}
	case 0x6172676F746F6870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697274656D6D:return 1;
		case 0x0073736572656870:return 1;
		default:return 0;
		}
	case 0x6172677265646E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0068736974617564:return 1;
		default:return 0;
		}
	case 0x6172697365646E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x61726F696C656D61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x61726F7265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369726F74:return 1;
		default:return 0;
		}
	case 0x61726F7661666E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x617270706173696D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E656D657369:return 1;
		default:return 0;
		}
	case 0x6172726574627573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657A696E61656E:return 1;
		case 0x00796C73756F656E:return 1;
		default:return 0;
		}
	case 0x6172746172746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072616C75636562:return 1;
		case 0x00796C6C61656863:return 1;
		default:return 0;
		}
	case 0x61727465726E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617463:return 1;
		default:return 0;
		}
	case 0x6172746E65736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E656D65636E:return 1;
		default:return 0;
		}
	case 0x6172746E6F636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079726F74636964:return 1;
		default:return 0;
		}
	case 0x6172746F656D6F68:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E616C70736E:return 1;
		default:return 0;
		}
	case 0x6172746F74736F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006573726576736E:return 1;
		case 0x006E61696C656863:return 1;
		default:return 0;
		}
	case 0x6172747265707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636967:return 1;
		default:return 0;
		}
	case 0x6172747265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006573726576736E:return 1;
		case 0x0072616C75636562:return 1;
		default:return 0;
		}
	case 0x6172747369646E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C676E697463:return 1;
		default:return 0;
		}
	case 0x617274736967616D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x6172747369676572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007473696E6F6974:return 1;
		default:return 0;
		}
	case 0x61727478656E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6261746964:return 1;
		default:return 0;
		}
	case 0x61727478656F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065636E61676176:return 1;
		default:return 0;
		}
	case 0x617275656E6F746F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061696E65687473:return 1;
		default:return 0;
		}
	case 0x617275656E6F796D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061696E65687473:return 1;
		default:return 0;
		}
	case 0x6172757361656C70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x61727574616E6E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C62617A696C:return 1;
		default:return 0;
		}
	case 0x6172757461736E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646574:return 1;
		default:return 0;
		}
	case 0x61727970696D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61636964696D:return 1;
		default:return 0;
		}
	case 0x6173616572636E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6173617268706E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6173696474736F70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006465766F727070:return 1;
		default:return 0;
		}
	case 0x6173697664616E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6173697664616E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x61736E6570736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x61736F6475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369726974:return 1;
		default:return 0;
		}
	case 0x61736F68706C7573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696C7963696C:return 1;
		default:return 0;
		}
	case 0x617370616C627573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696E616972:return 1;
		default:return 0;
		}
	case 0x61737265766E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657A696E6F6974:return 1;
		case 0x006D73696E6F6974:return 1;
		case 0x007373656E656C62:return 1;
		case 0x007473696E6F6974:return 1;
		default:return 0;
		}
	case 0x617373616C636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6173736575676E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6173736F72636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6173756378656E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6173756378656E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6174616572636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6174616572746E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6174616C61706E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6174616C72616863:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C6163696E:return 1;
		default:return 0;
		}
	case 0x617462756F646572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x617462756F646E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6174636172746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6174636172746E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6174636172747461:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6174636570736572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6174636570736E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C72616C7563:return 1;
		default:return 0;
		}
	case 0x6174656361726170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006564796865646C:return 1;
		default:return 0;
		}
	case 0x6174656D696D6568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696870726F6D:return 1;
		default:return 0;
		}
	case 0x6174656D6F727970:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696870726F6D:return 1;
		default:return 0;
		}
	case 0x617465726F747561:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616472:return 1;
		default:return 0;
		}
	case 0x6174657469746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6973796C6F6E:return 1;
		default:return 0;
		}
	case 0x6174696261686E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6174696275646E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x61746963696C6F73:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696E6F6974:return 1;
		default:return 0;
		}
	case 0x6174696465726568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696E616972:return 1;
		default:return 0;
		}
	case 0x6174696C61746F74:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696E616972:return 1;
		default:return 0;
		}
	case 0x6174696C61757165:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696E616972:return 1;
		default:return 0;
		}
	case 0x6174696C69747566:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696E616972:return 1;
		default:return 0;
		}
	case 0x6174696D696C6C69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6174696D696C6E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6174696D6F646E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6174696E616D7568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657A696E616972:return 1;
		case 0x006D73696E616972:return 1;
		case 0x007473696E616972:return 1;
		default:return 0;
		}
	case 0x6174696F6C707865:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007473696E6F6974:return 1;
		default:return 0;
		}
	case 0x6174697265686E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6174697571656E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6174697571656E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x617469766F707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369736F6E696D:return 1;
		default:return 0;
		}
	case 0x61746E6172726177:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x61746E6174736E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C73756F656E:return 1;
		default:return 0;
		}
	case 0x61746E656D6D6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696C616972:return 1;
		case 0x0070696873726F74:return 1;
		default:return 0;
		}
	case 0x61746E6573657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696E6F6974:return 1;
		case 0x007373656E656C62:return 1;
		case 0x007473696E6F6974:return 1;
		default:return 0;
		}
	case 0x61746E65736E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C73756F656E:return 1;
		default:return 0;
		}
	case 0x61746E6961706E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x61746E6972706E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x61746E6F636E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007473696E6F6967:return 1;
		default:return 0;
		}
	case 0x61746E6F70736E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C73756F656E:return 1;
		default:return 0;
		}
	case 0x61746E756F636361:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x61746E756F636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x61746F6475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574696C796863:return 1;
		default:return 0;
		}
	case 0x6174706164616E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6174726573736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007473696E6F6974:return 1;
		default:return 0;
		}
	case 0x6174726F666D6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6174726F70707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6174736275736E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006465746169746E:return 1;
		case 0x00796C6C6169746E:return 1;
		default:return 0;
		}
	case 0x61747365746E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x61747365746E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00797261746E656D:return 1;
		default:return 0;
		}
	case 0x6174736E69657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616C6C:return 1;
		default:return 0;
		}
	case 0x6174736F72647968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x6174736F746F6870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007972616E6F6974:return 1;
		default:return 0;
		}
	case 0x6174737265646E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C676E69646E:return 1;
		default:return 0;
		}
	case 0x6174737275626E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6174737974616C70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E696C796870:return 1;
		default:return 0;
		}
	case 0x6174746572676572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6174756665727269:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6174757263736E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6174796874686369:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796D7265646978:return 1;
		default:return 0;
		}
	case 0x6175646275736E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6175716361657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065636E61746E69:return 1;
		default:return 0;
		}
	case 0x61757163616E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065636E61746E69:return 1;
		default:return 0;
		}
	case 0x6175716361736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065636E61746E69:return 1;
		default:return 0;
		}
	case 0x6175737265706E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646564:return 1;
		default:return 0;
		}
	case 0x61766172746E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616C6C:return 1;
		default:return 0;
		}
	case 0x6176656972746572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x61766965636E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6176696563726570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x617669746F6D6E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646574:return 1;
		default:return 0;
		}
	case 0x61766C6F73736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x61766D7563726963:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616C6C:return 1;
		default:return 0;
		}
	case 0x61766F6D65726E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x61766F6D65727269:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x61766F74636F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796D6F746F766C:return 1;
		default:return 0;
		}
	case 0x6176726573657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007473696E6F6974:return 1;
		default:return 0;
		}
	case 0x61767265736E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0070696873726F74:return 1;
		case 0x007473696E6F6974:return 1;
		default:return 0;
		}
	case 0x6177686372756863:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657A696E656472:return 1;
		case 0x006D73696E656472:return 1;
		default:return 0;
		}
	case 0x6178657265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F697461746C:return 1;
		default:return 0;
		}
	case 0x6178657265707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F697461746C:return 1;
		default:return 0;
		}
	case 0x6179616365646E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6179636972726566:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369726479686E:return 1;
		default:return 0;
		}
	case 0x6179636F72726566:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369726479686E:return 1;
		default:return 0;
		}
	case 0x6179686F69676E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369736F6E696C:return 1;
		default:return 0;
		}
	case 0x617A696E6167726F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007473696E6F6974:return 1;
		default:return 0;
		}
	case 0x617A696E6F6C6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007473696E6F6974:return 1;
		default:return 0;
		}
	case 0x617A6E656279786F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006564796865646C:return 1;
		default:return 0;
		}
	case 0x6261686E69657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617469:return 1;
		default:return 0;
		}
	case 0x6261687265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617469:return 1;
		default:return 0;
		}
	case 0x62616C657265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F697461726F:return 1;
		case 0x00796C657461726F:return 1;
		default:return 0;
		}
	case 0x62616C7265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079726F7461726F:return 1;
		default:return 0;
		}
	case 0x62616F6369736576:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E696D6F64:return 1;
		default:return 0;
		}
	case 0x62616F697261766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E696D6F64:return 1;
		default:return 0;
		}
	case 0x62616F6E69676176:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E696D6F64:return 1;
		default:return 0;
		}
	case 0x62616F72656D7568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E696D6F64:return 1;
		default:return 0;
		}
	case 0x62616F726574616C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E696D6F64:return 1;
		default:return 0;
		}
	case 0x62616F726870656E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E696D6F64:return 1;
		default:return 0;
		}
	case 0x6265646E69657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646574:return 1;
		default:return 0;
		}
	case 0x6269646E75666E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D726F66696C75:return 1;
		default:return 0;
		}
	case 0x6269667265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007972616C6C6972:return 1;
		default:return 0;
		}
	case 0x62696C6172746C75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696C617265:return 1;
		default:return 0;
		}
	case 0x62696C6564657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617265:return 1;
		case 0x00796C6574617265:return 1;
		default:return 0;
		}
	case 0x62696C65646E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617265:return 1;
		default:return 0;
		}
	case 0x626973736F706D69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065746174696C69:return 1;
		default:return 0;
		}
	case 0x626C616F6573736F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064696F6E696D75:return 1;
		default:return 0;
		}
	case 0x626D616475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C617263616C75:return 1;
		case 0x006D757263616C75:return 1;
		default:return 0;
		}
	case 0x626D617265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C617263616C75:return 1;
		default:return 0;
		}
	case 0x626D617265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C617263616C75:return 1;
		case 0x006D757263616C75:return 1;
		default:return 0;
		}
	case 0x626D656D696D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007375736F6E6172:return 1;
		default:return 0;
		}
	case 0x626D6F6369746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616E69:return 1;
		default:return 0;
		}
	case 0x626D6F636F747561:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6269747375:return 1;
		default:return 0;
		}
	case 0x626D6F6872697274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61726465686F:return 1;
		default:return 0;
		}
	case 0x626E656B63696863:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064657473616572:return 1;
		default:return 0;
		}
	case 0x626F63696D656863:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369676F6C6F69:return 1;
		default:return 0;
		}
	case 0x626F636976726563:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616968636172:return 1;
		default:return 0;
		}
	case 0x626F67697473616D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00616968636E6172:return 1;
		default:return 0;
		}
	case 0x626F69676E6F7073:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00616D6F7473616C:return 1;
		default:return 0;
		}
	case 0x626F69746E616E65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F7473616C:return 1;
		default:return 0;
		}
	case 0x626F6C6C69686361:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073697469737275:return 1;
		default:return 0;
		}
	case 0x626F6C7570616373:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616968636172:return 1;
		default:return 0;
		}
	case 0x626F72646E6F6863:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00616D6F7473616C:return 1;
		default:return 0;
		}
	case 0x626F727069757165:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696C696261:return 1;
		case 0x007473696C696261:return 1;
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x626F727463656C65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E697473616C:return 1;
		case 0x0079706F63736F69:return 1;
		default:return 0;
		}
	case 0x626F736F7274696E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061697265746361:return 1;
		default:return 0;
		}
	case 0x626F74616E616874:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369676F6C6F69:return 1;
		default:return 0;
		}
	case 0x626F747065727473:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756C6C696361:return 1;
		default:return 0;
		}
	case 0x627261636F696874:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006564696C696E61:return 1;
		default:return 0;
		}
	case 0x6272617265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F697461726F:return 1;
		default:return 0;
		}
	case 0x6272656874616577:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E696472616F:return 1;
		default:return 0;
		}
	case 0x6272656B63696E6B:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00646572656B636F:return 1;
		default:return 0;
		}
	case 0x627265746E756F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E69646C6975:return 1;
		default:return 0;
		}
	case 0x62736572706D6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616972657479:return 1;
		default:return 0;
		}
	case 0x6275636E69757161:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696C617469:return 1;
		default:return 0;
		}
	case 0x6275737265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00646574616D696C:return 1;
		case 0x0064657A696C6974:return 1;
		default:return 0;
		}
	case 0x6275737265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006576697463656A:return 1;
		default:return 0;
		}
	case 0x627573736E617274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006576697463656A:return 1;
		default:return 0;
		}
	case 0x6275747265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072616C75637265:return 1;
		default:return 0;
		}
	case 0x6361626F68707974:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369736F6C6C69:return 1;
		default:return 0;
		}
	case 0x6361626F7263656E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369736F6C6C69:return 1;
		default:return 0;
		}
	case 0x6361657268637261:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007972616E6F6974:return 1;
		default:return 0;
		}
	case 0x6361667369746173:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F69726F74:return 1;
		case 0x007473696E6F6974:return 1;
		default:return 0;
		}
	case 0x63616A6569746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616C75:return 1;
		default:return 0;
		}
	case 0x63616A7265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079726F74616C75:return 1;
		default:return 0;
		}
	case 0x63616C6C61726170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x63616C6C61746163:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x63616C6F74796870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F65636163:return 1;
		default:return 0;
		}
	case 0x63616C70796C6F70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E61726F68706F:return 1;
		default:return 0;
		}
	case 0x63616C7265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E6972747375:return 1;
		default:return 0;
		}
	case 0x63616C796E656870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006564696D617465:return 1;
		default:return 0;
		}
	case 0x63616D6F746F6870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0068706172676F72:return 1;
		default:return 0;
		}
	case 0x63616F6475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E6974696E6F:return 1;
		default:return 0;
		}
	case 0x6361726168636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064657A69726574:return 1;
		default:return 0;
		}
	case 0x636172746F646E65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00736974696C6568:return 1;
		default:return 0;
		}
	case 0x6361736172746574:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065646972616863:return 1;
		default:return 0;
		}
	case 0x6361736172747865:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61746F647265:return 1;
		default:return 0;
		}
	case 0x63617369746C756D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00646574616C7563:return 1;
		default:return 0;
		}
	case 0x6361737265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61746F647265:return 1;
		default:return 0;
		}
	case 0x6361737265707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61746F647265:return 1;
		default:return 0;
		}
	case 0x636174616D656F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00636974656D6F68:return 1;
		case 0x0068706172676F68:return 1;
		case 0x00726574656D6F68:return 1;
		default:return 0;
		}
	case 0x6361746F6D656863:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x6361746F72647968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00726574656D7968:return 1;
		default:return 0;
		}
	case 0x6361746F746F6870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00726574656D6F68:return 1;
		case 0x00796C6C61636974:return 1;
		case 0x00797274656D6F68:return 1;
		default:return 0;
		}
	case 0x6361747065636572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064696F74696C75:return 1;
		default:return 0;
		}
	case 0x6363617265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616C756D75:return 1;
		default:return 0;
		}
	case 0x636361736174656D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696E69726168:return 1;
		default:return 0;
		}
	case 0x6363617669746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616E69:return 1;
		default:return 0;
		}
	case 0x636361766F646E65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616E69:return 1;
		default:return 0;
		}
	case 0x636361766F747561:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616E69:return 1;
		default:return 0;
		}
	case 0x636361766F766F62:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616E69:return 1;
		default:return 0;
		}
	case 0x6365646172707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00646E756F706D6F:return 1;
		default:return 0;
		}
	case 0x6365646172746574:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F646F7061:return 1;
		default:return 0;
		}
	case 0x6365647265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F697461726F:return 1;
		default:return 0;
		}
	case 0x6365666661736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616E6F6974:return 1;
		case 0x007373656E646574:return 1;
		default:return 0;
		}
	case 0x6365667265706E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646574:return 1;
		default:return 0;
		}
	case 0x63656A6275736E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646574:return 1;
		default:return 0;
		}
	case 0x63656A6E6F636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6261727574:return 1;
		default:return 0;
		}
	case 0x63656A7265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657A696E6F6974:return 1;
		case 0x007972616E6F6974:return 1;
		default:return 0;
		}
	case 0x63656C656F727970:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079746963697274:return 1;
		default:return 0;
		}
	case 0x63656C666E696E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646574:return 1;
		default:return 0;
		}
	case 0x63656C6C65746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657A696C617574:return 1;
		case 0x006D73696C617574:return 1;
		case 0x007473696C617574:return 1;
		case 0x007974696C617574:return 1;
		default:return 0;
		}
	case 0x63656C6C6F636572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646574:return 1;
		default:return 0;
		}
	case 0x63656C6C6F636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646574:return 1;
		default:return 0;
		}
	case 0x63656C6F6D696E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079746972616C75:return 1;
		default:return 0;
		}
	case 0x63656D6172707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6163696E6168:return 1;
		default:return 0;
		}
	case 0x63656D6F72647968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6163696E6168:return 1;
		default:return 0;
		}
	case 0x63656D6F72746169:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6163696E6168:return 1;
		default:return 0;
		}
	case 0x63656D6F746F6870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6163696E6168:return 1;
		default:return 0;
		}
	case 0x63656D7265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6163696E6168:return 1;
		default:return 0;
		}
	case 0x63656E6E6F636E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646574:return 1;
		default:return 0;
		}
	case 0x63656E6E6F636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646574:return 1;
		default:return 0;
		}
	case 0x63657073696D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616C75:return 1;
		default:return 0;
		}
	case 0x636570737265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065766974616C75:return 1;
		case 0x006E6F6974616C75:return 1;
		default:return 0;
		}
	case 0x6365707375736E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646574:return 1;
		default:return 0;
		}
	case 0x636572707265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657369:return 1;
		default:return 0;
		}
	case 0x6365727265646E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065736E65706D6F:return 1;
		default:return 0;
		}
	case 0x6365727275736572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657A696E6F6974:return 1;
		case 0x00676E696E6F6974:return 1;
		case 0x006D73696E6F6974:return 1;
		case 0x007473696E6F6974:return 1;
		case 0x007972616E6F6974:return 1;
		default:return 0;
		}
	case 0x6365727275736E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657A696E6F6974:return 1;
		case 0x006D73696E6F6974:return 1;
		case 0x007473696E6F6974:return 1;
		case 0x007972616E6F6974:return 1;
		default:return 0;
		}
	case 0x6365736E6F636E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6576697475:return 1;
		default:return 0;
		}
	case 0x6365736E6F636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6465746172:return 1;
		default:return 0;
		}
	case 0x63657461636E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C62617A6968:return 1;
		default:return 0;
		}
	case 0x6365746968637261:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61727574:return 1;
		default:return 0;
		}
	case 0x6365746F69646172:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079676F6C6F6E68:return 1;
		default:return 0;
		}
	case 0x6365746F72706E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646574:return 1;
		default:return 0;
		}
	case 0x636575716E697571:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072616C75737061:return 1;
		default:return 0;
		}
	case 0x63696361726F6874:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007261626D756C6F:return 1;
		default:return 0;
		}
	case 0x6369646572706D69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x6369646572706E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646574:return 1;
		default:return 0;
		}
	case 0x6369646E65707061:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E616972616C75:return 1;
		case 0x0073697361746365:return 1;
		default:return 0;
		}
	case 0x636964756A657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C6169:return 1;
		default:return 0;
		}
	case 0x6369666675736E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E676E69:return 1;
		default:return 0;
		}
	case 0x6369666963657073:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6576697461:return 1;
		default:return 0;
		}
	case 0x636966696E67616D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E746E65:return 1;
		default:return 0;
		}
	case 0x636966696E676973:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E746E61:return 1;
		case 0x00796C6576697461:return 1;
		default:return 0;
		}
	case 0x6369667265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C6169:return 1;
		default:return 0;
		}
	case 0x63696C6F73657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617469:return 1;
		default:return 0;
		}
	case 0x63696C6F736E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617469:return 1;
		default:return 0;
		}
	case 0x63696C7070616E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x63696C7075646572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6576697461:return 1;
		default:return 0;
		}
	case 0x63696C7075646E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x63696C7078656E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x63696D6172746C75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065706F63736F72:return 1;
		case 0x00726574656D6F72:return 1;
		case 0x0079706F63736F72:return 1;
		default:return 0;
		}
	case 0x63696D6968706D61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x63696D6F69646172:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00726574656D6F72:return 1;
		default:return 0;
		}
	case 0x63696D6F696C6568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00726574656D6F72:return 1;
		default:return 0;
		}
	case 0x63696D6F7263696D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064617261666F72:return 1;
		default:return 0;
		}
	case 0x63696D6F746F6870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065706F63736F72:return 1;
		case 0x0068706172676F72:return 1;
		case 0x0079706F63736F72:return 1;
		default:return 0;
		}
	case 0x63696E6974616C70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656469726F6C68:return 1;
		default:return 0;
		}
	case 0x63696E756D6D6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6576697461:return 1;
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x63697265706F7970:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073697469647261:return 1;
		default:return 0;
		}
	case 0x6369726570736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657461696E6172:return 1;
		default:return 0;
		}
	case 0x6369726761657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C617275746C75:return 1;
		default:return 0;
		}
	case 0x63697267616E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C617275746C75:return 1;
		default:return 0;
		}
	case 0x63697267616F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C617275746C75:return 1;
		default:return 0;
		}
	case 0x6369726F666C7573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369656C6F6E69:return 1;
		default:return 0;
		}
	case 0x63697274616D6D69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616C75:return 1;
		default:return 0;
		}
	case 0x6369727478656E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x63697274796C6F70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F65636168:return 1;
		default:return 0;
		}
	case 0x6369737968706E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656B696C6E6169:return 1;
		default:return 0;
		}
	case 0x636974656E6F6870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6369746972636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C676E697369:return 1;
		case 0x00796C676E697A69:return 1;
		default:return 0;
		}
	case 0x6369746C61626F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00736564696E6179:return 1;
		default:return 0;
		}
	case 0x6369746E616E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065766974617069:return 1;
		default:return 0;
		}
	case 0x63697472616E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616C75:return 1;
		default:return 0;
		}
	case 0x6369747261706572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617069:return 1;
		default:return 0;
		}
	case 0x6369747261706E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065766974617069:return 1;
		case 0x00676E6974617069:return 1;
		default:return 0;
		}
	case 0x6369747261736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616C75:return 1;
		default:return 0;
		}
	case 0x636974736972796D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F726F7669:return 1;
		default:return 0;
		}
	case 0x6369767265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F69726F74:return 1;
		default:return 0;
		}
	case 0x636C616F656C6170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6163696D6568:return 1;
		default:return 0;
		}
	case 0x636E616D656E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617069:return 1;
		default:return 0;
		}
	case 0x636E65626D6F6872:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6C61687065:return 1;
		default:return 0;
		}
	case 0x636E656475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696C61687065:return 1;
		case 0x0073756C61687065:return 1;
		default:return 0;
		}
	case 0x636E656C65796D61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061696C61687065:return 1;
		case 0x0063696C61687065:return 1;
		default:return 0;
		}
	case 0x636E656E61746F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061696C61687065:return 1;
		default:return 0;
		}
	case 0x636E656F656C6170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6C61687065:return 1;
		default:return 0;
		}
	case 0x636E65706574656D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696C61687065:return 1;
		case 0x006E6F6C61687065:return 1;
		default:return 0;
		}
	case 0x636E6572656C6373:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061696C61687065:return 1;
		default:return 0;
		}
	case 0x636E6574616D6568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6C61687065:return 1;
		default:return 0;
		}
	case 0x636E696F63657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C746E656469:return 1;
		default:return 0;
		}
	case 0x636E696F636E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61746E656469:return 1;
		default:return 0;
		}
	case 0x636E697265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065636E65626D75:return 1;
		case 0x0079636E65626D75:return 1;
		default:return 0;
		}
	case 0x636E6F6365727269:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6261696C69:return 1;
		case 0x00746E656D656C69:return 1;
		case 0x00796C6261696C69:return 1;
		default:return 0;
		}
	case 0x636E6F637265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065746172746E65:return 1;
		default:return 0;
		}
	case 0x636E75667265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E696E6F6974:return 1;
		default:return 0;
		}
	case 0x636E79736F696469:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369746172:return 1;
		default:return 0;
		}
	case 0x636F6361726F6874:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073697365746E65:return 1;
		case 0x007369736F6C6C79:return 1;
		case 0x007369736F747279:return 1;
		default:return 0;
		}
	case 0x636F636973796870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6163696D6568:return 1;
		default:return 0;
		}
	case 0x636F636F6F726863:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F65636163:return 1;
		default:return 0;
		}
	case 0x636F636F746F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F65636163:return 1;
		default:return 0;
		}
	case 0x636F6463656E7973:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636968:return 1;
		default:return 0;
		}
	case 0x636F64656C6F6863:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796D6F74636568:return 1;
		case 0x00796D6F74736F68:return 1;
		default:return 0;
		}
	case 0x636F646E656F796D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073697469647261:return 1;
		default:return 0;
		}
	case 0x636F676E696E656D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061696D6563636F:return 1;
		case 0x006C61636974726F:return 1;
		default:return 0;
		}
	case 0x636F676E7972616C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073697365746E65:return 1;
		default:return 0;
		}
	case 0x636F6863696C6F64:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696C61687065:return 1;
		default:return 0;
		}
	case 0x636F68636E796872:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696C61687065:return 1;
		default:return 0;
		}
	case 0x636F6870736F6870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E6974616572:return 1;
		default:return 0;
		}
	case 0x636F6874696E726F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696C61687065:return 1;
		default:return 0;
		}
	case 0x636F68746E616361:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E616C61687065:return 1;
		default:return 0;
		}
	case 0x636F696863617262:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696C61687065:return 1;
		case 0x007369736F6C6C79:return 1;
		default:return 0;
		}
	case 0x636F696874697274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696E6F627261:return 1;
		default:return 0;
		}
	case 0x636F6968746F7369:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00736574616E6179:return 1;
		default:return 0;
		}
	case 0x636F696D6F726361:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064696F6361726F:return 1;
		default:return 0;
		}
	case 0x636F696F72686361:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061696D65687479:return 1;
		default:return 0;
		}
	case 0x636F697269706D65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369746972:return 1;
		case 0x006D736963746972:return 1;
		default:return 0;
		}
	case 0x636F6C6168706563:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065746164726F68:return 1;
		case 0x0073697365746E65:return 1;
		default:return 0;
		}
	case 0x636F6C616D6F6E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756C61687065:return 1;
		default:return 0;
		}
	case 0x636F6C696B696F70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061696D65687479:return 1;
		default:return 0;
		}
	case 0x636F6C7265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C69726F7475:return 1;
		default:return 0;
		}
	case 0x636F6C756373756D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072616C756C6C65:return 1;
		default:return 0;
		}
	case 0x636F6C7570616373:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064696F6361726F:return 1;
		default:return 0;
		}
	case 0x636F6D616C616874:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61636974726F:return 1;
		default:return 0;
		}
	case 0x636F6E61706D7974:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369767265:return 1;
		default:return 0;
		}
	case 0x636F6E6965706174:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696C61687065:return 1;
		default:return 0;
		}
	case 0x636F6E696F747561:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616C75:return 1;
		default:return 0;
		}
	case 0x636F6E6972626966:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072616C756C6C65:return 1;
		default:return 0;
		}
	case 0x636F6E6974616C70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656469726F6C68:return 1;
		default:return 0;
		}
	case 0x636F6E69746E6564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61746E656D65:return 1;
		default:return 0;
		}
	case 0x636F6E6F67697274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696C61687065:return 1;
		default:return 0;
		}
	case 0x636F6F746E6F7266:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C617469706963:return 1;
		default:return 0;
		}
	case 0x636F726170657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C617469706963:return 1;
		default:return 0;
		}
	case 0x636F72646E6F6863:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064696F6361726F:return 1;
		default:return 0;
		}
	case 0x636F726479686964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E6965727075:return 1;
		default:return 0;
		}
	case 0x636F726574657275:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369767265:return 1;
		default:return 0;
		}
	case 0x636F726574706964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D756964696365:return 1;
		default:return 0;
		}
	case 0x636F726874657275:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073697469747379:return 1;
		default:return 0;
		}
	case 0x636F727069636572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E616972617469:return 1;
		default:return 0;
		}
	case 0x636F727463656C65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6163696D6568:return 1;
		case 0x006C616E6F697475:return 1;
		case 0x0072656E6F697475:return 1;
		default:return 0;
		}
	case 0x636F727463657073:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6163696D6568:return 1;
		default:return 0;
		}
	case 0x636F7369746E6170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369746172:return 1;
		default:return 0;
		}
	case 0x636F736F7274696E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656469726F6C68:return 1;
		default:return 0;
		}
	case 0x636F736F74796870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369676F6C6F69:return 1;
		default:return 0;
		}
	case 0x636F73756C63636F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369767265:return 1;
		default:return 0;
		}
	case 0x636F746163696C70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065746174736972:return 1;
		default:return 0;
		}
	case 0x636F74616D726564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369736F696E6F:return 1;
		default:return 0;
		}
	case 0x636F74656E67616D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6163696D6568:return 1;
		default:return 0;
		}
	case 0x636F747365756C62:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00687369676E696B:return 1;
		case 0x006D7369676E696B:return 1;
		default:return 0;
		}
	case 0x636F747369686373:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756C61687065:return 1;
		default:return 0;
		}
	case 0x6372616972746170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636968:return 1;
		default:return 0;
		}
	case 0x6372656B646E6168:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C756666656968:return 1;
		default:return 0;
		}
	case 0x63726570696E6D6F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065636E65697069:return 1;
		case 0x0079636E65697069:return 1;
		default:return 0;
		}
	case 0x6372657070616E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6269747065:return 1;
		default:return 0;
		}
	case 0x637265746E756F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E676961706D61:return 1;
		case 0x00746E616863756F:return 1;
		case 0x00746E616D69616C:return 1;
		case 0x0074736575716E6F:return 1;
		default:return 0;
		}
	case 0x63726963696D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079746972616C75:return 1;
		default:return 0;
		}
	case 0x637269637265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0074636570736D75:return 1;
		default:return 0;
		}
	case 0x63726F666E656E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696269:return 1;
		default:return 0;
		}
	case 0x6373627573657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974706972:return 1;
		default:return 0;
		}
	case 0x63736275736E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974706972:return 1;
		default:return 0;
		}
	case 0x63736275736F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974706972:return 1;
		default:return 0;
		}
	case 0x637365646F636F6C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065766974706972:return 1;
		default:return 0;
		}
	case 0x637365726F756C66:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6E656769:return 1;
		default:return 0;
		}
	case 0x63736572706E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065766974706972:return 1;
		default:return 0;
		}
	case 0x6373696E696D6572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C756665636E65:return 1;
		default:return 0;
		}
	case 0x63736970656E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E61696C61706F:return 1;
		default:return 0;
		}
	case 0x63736D7563726963:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6261626972:return 1;
		case 0x0065766974706972:return 1;
		case 0x006E6F6974706972:return 1;
		default:return 0;
		}
	case 0x63736E6172746572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974706972:return 1;
		default:return 0;
		}
	case 0x63736E6172746E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6261626972:return 1;
		default:return 0;
		}
	case 0x63736E6F636E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974706972:return 1;
		default:return 0;
		}
	case 0x63736E6F636F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065766974706972:return 1;
		case 0x006E6F6974706972:return 1;
		default:return 0;
		}
	case 0x63736F62656C6870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369746F72656C:return 1;
		case 0x007369736F72656C:return 1;
		default:return 0;
		}
	case 0x63736F6475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369736F72656C:return 1;
		case 0x00796C72616C6F68:return 1;
		default:return 0;
		}
	case 0x63736F656E726F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369746F72656C:return 1;
		default:return 0;
		}
	case 0x63736F69636C6163:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574696C656568:return 1;
		default:return 0;
		}
	case 0x63736F6964726163:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369736F72656C:return 1;
		default:return 0;
		}
	case 0x63736F6968636172:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369736F696C6F:return 1;
		default:return 0;
		}
	case 0x63736F696863726F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C65636F6568:return 1;
		default:return 0;
		}
	case 0x63736F7265687461:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369736F72656C:return 1;
		default:return 0;
		}
	case 0x63736F7265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616C75:return 1;
		default:return 0;
		}
	case 0x63736F726870656E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369736F72656C:return 1;
		default:return 0;
		}
	case 0x63736F7268747261:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369736F72656C:return 1;
		default:return 0;
		}
	case 0x63736F72706E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065766974706972:return 1;
		default:return 0;
		}
	case 0x637375737265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6269747065:return 1;
		default:return 0;
		}
	case 0x6375626873617773:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E6972656C6B:return 1;
		case 0x006D6F6472656C6B:return 1;
		default:return 0;
		}
	case 0x6375646569746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E6F697461:return 1;
		default:return 0;
		}
	case 0x6375646E6F636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657669:return 1;
		default:return 0;
		}
	case 0x6375646F72706572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007473696E6F6974:return 1;
		case 0x007974696C696269:return 1;
		default:return 0;
		}
	case 0x63756C66696D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E6974617574:return 1;
		default:return 0;
		}
	case 0x63756E69746C756D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616C6F656C:return 1;
		default:return 0;
		}
	case 0x63757274736E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696E6F6974:return 1;
		case 0x0070696873726F74:return 1;
		case 0x007473696E6F6974:return 1;
		default:return 0;
		}
	case 0x6375736F64696D61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696D616E6963:return 1;
		default:return 0;
		}
	case 0x6375736F6E696D61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696D616E6963:return 1;
		default:return 0;
		}
	case 0x6378657265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065636E656C6C65:return 1;
		case 0x006E6F6974617469:return 1;
		case 0x00746E656D657469:return 1;
		case 0x0079636E656C6C65:return 1;
		default:return 0;
		}
	case 0x6378657265707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E656D657469:return 1;
		default:return 0;
		}
	case 0x6379636E656E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696465706F6C:return 1;
		default:return 0;
		}
	case 0x646168737265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C676E69776F:return 1;
		default:return 0;
		}
	case 0x64616F6475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697461626169:return 1;
		default:return 0;
		}
	case 0x64616F7262657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E6974736163:return 1;
		default:return 0;
		}
	case 0x64616F72626F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E6974736163:return 1;
		default:return 0;
		}
	case 0x64616F7972636164:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006169676C616E65:return 1;
		default:return 0;
		}
	case 0x6461726172746C75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696C616369:return 1;
		default:return 0;
		}
	case 0x6461726F7263696D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00726574656D6F69:return 1;
		default:return 0;
		}
	case 0x6461726F7274656D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065706F63736F69:return 1;
		default:return 0;
		}
	case 0x6461727469746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E6F697469:return 1;
		default:return 0;
		}
	case 0x6461736964657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656761746E6176:return 1;
		default:return 0;
		}
	case 0x6461737361626D61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C6169726F:return 1;
		default:return 0;
		}
	case 0x6464617265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E6F697469:return 1;
		default:return 0;
		}
	case 0x64646F67696D6564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0070696873737365:return 1;
		default:return 0;
		}
	case 0x646475706B63616A:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00646F6F68676E69:return 1;
		default:return 0;
		}
	case 0x6465636572706E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6465746E65:return 1;
		default:return 0;
		}
	case 0x6465666172746C75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007473696C617265:return 1;
		default:return 0;
		}
	case 0x6465667265707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007473696C617265:return 1;
		default:return 0;
		}
	case 0x6465667265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617265:return 1;
		default:return 0;
		}
	case 0x64656D6572706E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617469:return 1;
		case 0x00796C6574617469:return 1;
		default:return 0;
		}
	case 0x64656D7265707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616369:return 1;
		default:return 0;
		}
	case 0x64656D7265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656D6F73656C64:return 1;
		case 0x00746E656D656C64:return 1;
		case 0x00796C676E696C64:return 1;
		default:return 0;
		}
	case 0x6465707265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072616C75636E75:return 1;
		default:return 0;
		}
	case 0x646572637265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C73756F6C75:return 1;
		default:return 0;
		}
	case 0x64657265686E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6972617469:return 1;
		default:return 0;
		}
	case 0x6465727065726F66:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E656D616369:return 1;
		default:return 0;
		}
	case 0x6465727065746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E656D616369:return 1;
		default:return 0;
		}
	case 0x6465727074736F70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E656D616369:return 1;
		default:return 0;
		}
	case 0x646575716E697571:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064657461746E65:return 1;
		default:return 0;
		}
	case 0x646962726F666E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6E6564:return 1;
		default:return 0;
		}
	case 0x6469636361657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61746E65:return 1;
		default:return 0;
		}
	case 0x6469646968637261:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00736F6C61637361:return 1;
		default:return 0;
		}
	case 0x64696C6968707973:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00747369676F6C6F:return 1;
		case 0x007968706172676F:return 1;
		default:return 0;
		}
	case 0x64696C736B636162:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E676E69:return 1;
		default:return 0;
		}
	case 0x64696F6475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369746E65:return 1;
		default:return 0;
		}
	case 0x64696F69726F6863:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369746972696F:return 1;
		default:return 0;
		}
	case 0x6469726479686E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6469726568746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065726F68706F69:return 1;
		default:return 0;
		}
	case 0x64697265706D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369746E65:return 1;
		default:return 0;
		}
	case 0x6469726F69726573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6C756369:return 1;
		default:return 0;
		}
	case 0x6469727265707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6C756369:return 1;
		default:return 0;
		}
	case 0x64697365726E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079726169746E65:return 1;
		default:return 0;
		}
	case 0x6469736E6F636564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617265:return 1;
		default:return 0;
		}
	case 0x6469736E6F636572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617265:return 1;
		default:return 0;
		}
	case 0x6469736E6F636E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617265:return 1;
		case 0x00796C6574617265:return 1;
		default:return 0;
		}
	case 0x6469736E6F636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6574617265:return 1;
		case 0x00796C676E697265:return 1;
		default:return 0;
		}
	case 0x646E617461677265:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006870726F6D6F72:return 1;
		default:return 0;
		}
	case 0x646E6174736E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064657A69647261:return 1;
		default:return 0;
		}
	case 0x646E61747374756F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E676E69:return 1;
		default:return 0;
		}
	case 0x646E65646F7A796D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F65636172:return 1;
		default:return 0;
		}
	case 0x646E657070616E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616C756369:return 1;
		default:return 0;
		}
	case 0x646E657070617865:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616C756369:return 1;
		default:return 0;
		}
	case 0x646E657265666572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0070696873797261:return 1;
		default:return 0;
		}
	case 0x646E6968706C7573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657461746F6769:return 1;
		default:return 0;
		}
	case 0x646E696F666C7573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657461746F6769:return 1;
		default:return 0;
		}
	case 0x646E697265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065636E65676C75:return 1;
		case 0x006C617564697669:return 1;
		case 0x00746E656D656375:return 1;
		default:return 0;
		}
	case 0x646E697265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C617564697669:return 1;
		default:return 0;
		}
	case 0x646E69736E617274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C617564697669:return 1;
		default:return 0;
		}
	case 0x646E6F7069757165:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617265:return 1;
		default:return 0;
		}
	case 0x646E7573696D6572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00646E6174737265:return 1;
		default:return 0;
		}
	case 0x646E7573696D6E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00646F6F74737265:return 1;
		default:return 0;
		}
	case 0x646E797369746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696C616369:return 1;
		case 0x007473696C616369:return 1;
		default:return 0;
		}
	case 0x646F64616C6C6170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E696D6D6169:return 1;
		default:return 0;
		}
	case 0x646F6874696E726F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E616968706C65:return 1;
		case 0x0073756F68706C65:return 1;
		default:return 0;
		}
	case 0x646F696F7A6E6562:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E69726479686F:return 1;
		default:return 0;
		}
	case 0x646F697265747261:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00736973796C6169:return 1;
		default:return 0;
		}
	case 0x646F6D6D6F636361:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E6F697461:return 1;
		case 0x007373656E657461:return 1;
		case 0x00796C676E697461:return 1;
		default:return 0;
		}
	case 0x646F6D7265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616C75:return 1;
		default:return 0;
		}
	case 0x646F706F6E656863:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F65636169:return 1;
		default:return 0;
		}
	case 0x646F726574657275:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00736973796C6169:return 1;
		default:return 0;
		}
	case 0x646F726574736F70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C6173726F:return 1;
		default:return 0;
		}
	case 0x646F727463656C65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696D616E79:return 1;
		case 0x0072657A796C6169:return 1;
		case 0x007363696D616E79:return 1;
		case 0x00736973796C6169:return 1;
		default:return 0;
		}
	case 0x646F72746E776F64:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6E6564:return 1;
		default:return 0;
		}
	case 0x646F737369726570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696C79746361:return 1;
		default:return 0;
		}
	case 0x646F7461746C6570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065746174696769:return 1;
		default:return 0;
		}
	case 0x646F7461756E6973:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064657461746E65:return 1;
		default:return 0;
		}
	case 0x646F796874686369:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574696C75726F:return 1;
		default:return 0;
		}
	case 0x6472616369726570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00736973796C6F69:return 1;
		case 0x00796D6F74636569:return 1;
		default:return 0;
		}
	case 0x647261646E617473:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6472617A61686E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x647265746E756F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E697274636F:return 1;
		case 0x006E6F6973696365:return 1;
		case 0x007265646E656665:return 1;
		default:return 0;
		}
	case 0x64726F6172707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616E69:return 1;
		default:return 0;
		}
	case 0x64726F6172747865:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6972616E69:return 1;
		default:return 0;
		}
	case 0x64726F6275736E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616E69:return 1;
		case 0x00796C6574616E69:return 1;
		default:return 0;
		}
	case 0x64726F7265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616E69:return 1;
		default:return 0;
		}
	case 0x647275627265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C676E696E65:return 1;
		default:return 0;
		}
	case 0x64756A6172747865:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61696369:return 1;
		default:return 0;
		}
	case 0x64756A6572706E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6261696369:return 1;
		case 0x00796C6C61696369:return 1;
		default:return 0;
		}
	case 0x6475746974616C70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E616972616E69:return 1;
		case 0x00796C73756F6E69:return 1;
		default:return 0;
		}
	case 0x64757469746C756D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697473696E69:return 1;
		case 0x00796C73756F6E69:return 1;
		case 0x00797469736F6E69:return 1;
		default:return 0;
		}
	case 0x6479686F62726163:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061697275746172:return 1;
		default:return 0;
		}
	case 0x6479686F67696C6F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00736F696E6D6172:return 1;
		default:return 0;
		}
	case 0x6479686F6C796D61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00636974796C6F72:return 1;
		case 0x00736973796C6F72:return 1;
		default:return 0;
		}
	case 0x65616C6F626D7973:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007968706172676F:return 1;
		default:return 0;
		}
	case 0x65616F6369687465:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697465687473:return 1;
		default:return 0;
		}
	case 0x65616F6475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697465687473:return 1;
		default:return 0;
		}
	case 0x65626968696D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616E72:return 1;
		default:return 0;
		}
	case 0x6562696C646F7571:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x65626F6475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696E6F68746E:return 1;
		default:return 0;
		}
	case 0x65626F7373796261:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696E6F68746E:return 1;
		default:return 0;
		}
	case 0x6562757461726170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6C756372:return 1;
		default:return 0;
		}
	case 0x6562757469746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6C756372:return 1;
		default:return 0;
		}
	case 0x6563616666656E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x6563616C706D6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C6169746E:return 1;
		default:return 0;
		}
	case 0x6563616C70736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x6563616E6F706173:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x6563617267736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C7566:return 1;
		default:return 0;
		}
	case 0x6563617473757263:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00747369676F6C6F:return 1;
		default:return 0;
		}
	case 0x656363616F676176:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00737569726F7373:return 1;
		default:return 0;
		}
	case 0x6563637573657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C75667373:return 1;
		default:return 0;
		}
	case 0x656365646E697571:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574617269766D:return 1;
		default:return 0;
		}
	case 0x6563657270627573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6169726F7470:return 1;
		default:return 0;
		}
	case 0x656369746173656D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696C616870:return 1;
		case 0x0073756F6C616870:return 1;
		default:return 0;
		}
	case 0x65636C7974656361:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065736F6C756C6C:return 1;
		default:return 0;
		}
	case 0x65636E6163657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616C6C:return 1;
		default:return 0;
		}
	case 0x65636E61636F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616C6C:return 1;
		default:return 0;
		}
	case 0x65636E656C65796D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6C616870:return 1;
		default:return 0;
		}
	case 0x65636E656E696872:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6C616870:return 1;
		default:return 0;
		}
	case 0x65636E657263616D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6C616870:return 1;
		default:return 0;
		}
	case 0x65636E657263696D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6C616870:return 1;
		default:return 0;
		}
	case 0x65636E6572647968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064696F6C616870:return 1;
		default:return 0;
		}
	case 0x65636E657373696C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6C616870:return 1;
		default:return 0;
		}
	case 0x65636E6F63657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006465746172746E:return 1;
		case 0x006C616E6F697470:return 1;
		default:return 0;
		}
	case 0x65636E6F63736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C676E697472:return 1;
		default:return 0;
		}
	case 0x65636F6475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697469746172:return 1;
		default:return 0;
		}
	case 0x65636F6870616373:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696C616870:return 1;
		case 0x0073756F6C616870:return 1;
		default:return 0;
		}
	case 0x65636F6967616C70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696C616870:return 1;
		default:return 0;
		}
	case 0x65636F6C6167656D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6C616870:return 1;
		default:return 0;
		}
	case 0x65636F6E65687073:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6C616870:return 1;
		default:return 0;
		}
	case 0x65636F6E656C7073:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369736F746172:return 1;
		default:return 0;
		}
	case 0x65636F7265746568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6C616870:return 1;
		case 0x007974696C616372:return 1;
		default:return 0;
		}
	case 0x65636F7279677261:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6C616870:return 1;
		default:return 0;
		}
	case 0x65636F746E6F656C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6C616870:return 1;
		default:return 0;
		}
	case 0x65636F7470797263:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6C616870:return 1;
		default:return 0;
		}
	case 0x65636F7479726162:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E697473656C:return 1;
		case 0x006574697473656C:return 1;
		default:return 0;
		}
	case 0x6563726574617571:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007972616E65746E:return 1;
		default:return 0;
		}
	case 0x6563726574627573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61697473656C:return 1;
		default:return 0;
		}
	case 0x656372756F736572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C7566:return 1;
		default:return 0;
		}
	case 0x65637365646E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C657669736E:return 1;
		case 0x00796C676E69646E:return 1;
		default:return 0;
		}
	case 0x6563796863617262:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657A696C616870:return 1;
		case 0x006D73696C616870:return 1;
		case 0x0073756F6C616870:return 1;
		default:return 0;
		}
	case 0x65646168706D796C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079687461706F6E:return 1;
		default:return 0;
		}
	case 0x6564617265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6574617571:return 1;
		default:return 0;
		}
	case 0x6564656C62626F68:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00646F6F68796F68:return 1;
		default:return 0;
		}
	case 0x65646963636F6564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657A696C61746E:return 1;
		default:return 0;
		}
	case 0x6564696F72796874:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657A696D6F7463:return 1;
		default:return 0;
		}
	case 0x6564697265707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697473696C61:return 1;
		default:return 0;
		}
	case 0x65646C6174656361:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065736172647968:return 1;
		default:return 0;
		}
	case 0x65646E6563736564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696C61746E:return 1;
		case 0x007473696C61746E:return 1;
		default:return 0;
		}
	case 0x65646E6574706573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61696E6E6563:return 1;
		default:return 0;
		}
	case 0x65646E696B657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E657472616772:return 1;
		default:return 0;
		}
	case 0x65646E696B6F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E657472616772:return 1;
		default:return 0;
		}
	case 0x65646E6F63657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616E6D:return 1;
		case 0x006E6F697461736E:return 1;
		default:return 0;
		}
	case 0x65646E6F636E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F697461736E:return 1;
		default:return 0;
		}
	case 0x65646E6F636F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616E6D:return 1;
		default:return 0;
		}
	case 0x65646F63616C616D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F74616D72:return 1;
		default:return 0;
		}
	case 0x65646F6475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D75696469746C:return 1;
		default:return 0;
		}
	case 0x65646F6E69686365:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F74616D72:return 1;
		default:return 0;
		}
	case 0x65646F6E6F697270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E616563616D73:return 1;
		default:return 0;
		}
	case 0x65646F72656C6373:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F74616D72:return 1;
		default:return 0;
		}
	case 0x65646F726574616C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616976:return 1;
		default:return 0;
		}
	case 0x65646F7473697261:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079636172636F6D:return 1;
		default:return 0;
		}
	case 0x656472657473756D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007372656C6C6976:return 1;
		default:return 0;
		}
	case 0x65656B6573756F68:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656B696C726570:return 1;
		default:return 0;
		}
	case 0x6565726761736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x6566657270627573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6169726F7463:return 1;
		default:return 0;
		}
	case 0x65666572706E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6169746E6572:return 1;
		default:return 0;
		}
	case 0x65666661796C6F70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064656E6F697463:return 1;
		default:return 0;
		}
	case 0x65666D7563726963:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6169746E6572:return 1;
		default:return 0;
		}
	case 0x65666F7270627573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E6F697373:return 1;
		default:return 0;
		}
	case 0x65666F7270657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E6F697373:return 1;
		default:return 0;
		}
	case 0x65666F72706E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6169726F7373:return 1;
		case 0x006C616E6F697373:return 1;
		default:return 0;
		}
	case 0x656761697272616D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x6567617264617571:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6972616E:return 1;
		default:return 0;
		}
	case 0x6567617461727473:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61636974616D:return 1;
		case 0x00796C6C6163696D:return 1;
		default:return 0;
		}
	case 0x656765726F747561:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00726F746172656E:return 1;
		default:return 0;
		}
	case 0x6567697264617571:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6972616E:return 1;
		default:return 0;
		}
	case 0x65676E6168636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C7566:return 1;
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x65676E6168637865:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x65676F65616C6170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007968706172676F:return 1;
		default:return 0;
		}
	case 0x65676F6863797370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61636974656E:return 1;
		default:return 0;
		}
	case 0x65676F68706C7573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616E616D72:return 1;
		default:return 0;
		}
	case 0x65676F6D6F686E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C73756F656E:return 1;
		default:return 0;
		}
	case 0x65676F6D6F686E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C73756F656E:return 1;
		default:return 0;
		}
	case 0x65676F6D72656874:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00726F746172656E:return 1;
		case 0x007968706172676F:return 1;
		default:return 0;
		}
	case 0x65676F6E756D6D69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C6163696E:return 1;
		default:return 0;
		}
	case 0x65676F7265746568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C73756F656E:return 1;
		default:return 0;
		}
	case 0x65676F7669746164:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6169646E7572:return 1;
		default:return 0;
		}
	case 0x6568636F7263616D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C6163696D:return 1;
		default:return 0;
		}
	case 0x6568636F7263696D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C6163696D:return 1;
		default:return 0;
		}
	case 0x6568636F72697073:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616469636974:return 1;
		default:return 0;
		}
	case 0x6568636F746F6870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C6163696D:return 1;
		default:return 0;
		}
	case 0x6568637261627573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6169726F7073:return 1;
		default:return 0;
		}
	case 0x656863736F747561:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697473616964:return 1;
		default:return 0;
		}
	case 0x6568656C62656566:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6465747261:return 1;
		default:return 0;
		}
	case 0x6568656C676E6973:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6465747261:return 1;
		default:return 0;
		}
	case 0x6568656C706D6973:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6465747261:return 1;
		default:return 0;
		}
	case 0x6568656C746E6567:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6465747261:return 1;
		default:return 0;
		}
	case 0x65686572706D6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C657669736E:return 1;
		case 0x00796C676E69646E:return 1;
		default:return 0;
		}
	case 0x65686E656B6F7262:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6465747261:return 1;
		default:return 0;
		}
	case 0x65686F6475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E6F676178:return 1;
		default:return 0;
		}
	case 0x65686F6C68707974:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073697469746170:return 1;
		default:return 0;
		}
	case 0x65686F7265746369:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006169727574616D:return 1;
		default:return 0;
		}
	case 0x65686F7265746E65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073697469746170:return 1;
		default:return 0;
		}
	case 0x65686F7274736167:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073697469746170:return 1;
		default:return 0;
		}
	case 0x65686F7275656C70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073697469746170:return 1;
		default:return 0;
		}
	case 0x65686F7972636164:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061656872726F6D:return 1;
		default:return 0;
		}
	case 0x6568706172747865:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E656D6F6E:return 1;
		default:return 0;
		}
	case 0x6568706F72706E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x65687073696D6568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636972:return 1;
		default:return 0;
		}
	case 0x656870736E617274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E656D6F6E:return 1;
		default:return 0;
		}
	case 0x656870736F6D7461:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636972:return 1;
		default:return 0;
		}
	case 0x65687265646E6574:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6465747261:return 1;
		default:return 0;
		}
	case 0x6568726F7263696D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697274656D6F:return 1;
		default:return 0;
		}
	case 0x656874616D6E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61636974616D:return 1;
		default:return 0;
		}
	case 0x65687461706D7973:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657A696D6F7463:return 1;
		case 0x007373656E636974:return 1;
		case 0x007473616C626F74:return 1;
		case 0x00796C6C61636974:return 1;
		case 0x00796D6F74636574:return 1;
		default:return 0;
		}
	case 0x65687468706F7061:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0074736974616D67:return 1;
		default:return 0;
		}
	case 0x6568746968706D61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369727461:return 1;
		default:return 0;
		}
	case 0x6568746E65726170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x6568746F6C696870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696E616972:return 1;
		default:return 0;
		}
	case 0x6568746F72626E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E696C72:return 1;
		default:return 0;
		}
	case 0x6568746F746F6870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574696C6F646F:return 1;
		default:return 0;
		}
	case 0x6568747365616E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x6568747561736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616369746E:return 1;
		default:return 0;
		}
	case 0x65696C7265646E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E616E657475:return 1;
		default:return 0;
		}
	case 0x6569727069746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0074666172637473:return 1;
		default:return 0;
		}
	case 0x656A6461696D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6576697463:return 1;
		default:return 0;
		}
	case 0x656A6F72706E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6576697463:return 1;
		default:return 0;
		}
	case 0x656B6F72656C6373:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073697469746172:return 1;
		default:return 0;
		}
	case 0x656C616E65726461:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657A696D6F7463:return 1;
		default:return 0;
		}
	case 0x656C626968706D61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073697469727473:return 1;
		default:return 0;
		}
	case 0x656C626F7263696D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D736972616870:return 1;
		default:return 0;
		}
	case 0x656C626F72706E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61636974616D:return 1;
		default:return 0;
		}
	case 0x656C63636573696D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697473616973:return 1;
		default:return 0;
		}
	case 0x656C63736F726361:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00616D7265646F72:return 1;
		default:return 0;
		}
	case 0x656C656F746F6870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369727463:return 1;
		default:return 0;
		}
	case 0x656C657265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00797261746E656D:return 1;
		default:return 0;
		}
	case 0x656C657265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369646F727463:return 1;
		default:return 0;
		}
	case 0x656C65736E617274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657461746E656D:return 1;
		default:return 0;
		}
	case 0x656C666E69657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E6F697463:return 1;
		default:return 0;
		}
	case 0x656C666E696E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E6F697463:return 1;
		default:return 0;
		}
	case 0x656C6C6168636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C626165676E:return 1;
		case 0x00796C626165676E:return 1;
		default:return 0;
		}
	case 0x656C6C65706F7369:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E6972656974:return 1;
		default:return 0;
		}
	case 0x656C6C696D657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61696E6E:return 1;
		default:return 0;
		}
	case 0x656C6C69736E6F74:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657A696D6F7463:return 1;
		default:return 0;
		}
	case 0x656C6F6475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657479636F6375:return 1;
		case 0x00797261646E6567:return 1;
		default:return 0;
		}
	case 0x656C70736E617274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C746E65646E:return 1;
		default:return 0;
		}
	case 0x656C746E65676E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656B696C6E616D:return 1;
		default:return 0;
		}
	case 0x656C776F6E6B6361:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6261656764:return 1;
		default:return 0;
		}
	case 0x656C776F6E6B6E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6261656764:return 1;
		default:return 0;
		}
	case 0x656D61636964656D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F697461746E:return 1;
		default:return 0;
		}
	case 0x656D61676167656D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065747968706F74:return 1;
		default:return 0;
		}
	case 0x656D61696C726170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657A697261746E:return 1;
		case 0x006D73697261746E:return 1;
		case 0x006E61697261746E:return 1;
		case 0x00796C697261746E:return 1;
		default:return 0;
		}
	case 0x656D656C706D6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006576697461746E:return 1;
		case 0x006D73697261746E:return 1;
		case 0x006E6F697461746E:return 1;
		default:return 0;
		}
	case 0x656D656C70707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F697461746E:return 1;
		case 0x00796C697261746E:return 1;
		default:return 0;
		}
	case 0x656D6775616E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006576697461746E:return 1;
		default:return 0;
		}
	case 0x656D6873696E7570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00666F6F7270746E:return 1;
		default:return 0;
		}
	case 0x656D696469757165:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E6F69736E:return 1;
		default:return 0;
		}
	case 0x656D6964796C6F70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E6F69736E:return 1;
		default:return 0;
		}
	case 0x656D696C61727573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F697461746E:return 1;
		default:return 0;
		}
	case 0x656D696C69626168:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F697461746E:return 1;
		default:return 0;
		}
	case 0x656D696C706D6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006576697461746E:return 1;
		case 0x006E6F697461746E:return 1;
		case 0x00796C676E69746E:return 1;
		case 0x00796C697261746E:return 1;
		default:return 0;
		}
	case 0x656D697265707865:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006576697461746E:return 1;
		case 0x00657A696C61746E:return 1;
		case 0x006D73696C61746E:return 1;
		case 0x006E61697261746E:return 1;
		case 0x006E6F697461746E:return 1;
		case 0x007473696C61746E:return 1;
		default:return 0;
		}
	case 0x656D6D6172746E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E64656C:return 1;
		default:return 0;
		}
	case 0x656D6D6F63627573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F697461646E:return 1;
		default:return 0;
		}
	case 0x656D6D6F636E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E656D65636E:return 1;
		default:return 0;
		}
	case 0x656D6D6F63736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F697461646E:return 1;
		default:return 0;
		}
	case 0x656D6E7265766F67:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657A696C61746E:return 1;
		case 0x006D73696C61746E:return 1;
		case 0x007473696C61746E:return 1;
		default:return 0;
		}
	case 0x656D6F6475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00636972656D6174:return 1;
		case 0x007369736F6E616C:return 1;
		default:return 0;
		}
	case 0x656D6F656F6D6F68:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696E616972:return 1;
		default:return 0;
		}
	case 0x656D6F6863797370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E616963697274:return 1;
		default:return 0;
		}
	case 0x656D6F6964726163:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369736F6E616C:return 1;
		default:return 0;
		}
	case 0x656D6F6D65636172:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616C796874:return 1;
		default:return 0;
		}
	case 0x656D6F6E656C7073:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007972616C6C7564:return 1;
		default:return 0;
		}
	case 0x656D6F6E65726870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D736972656D73:return 1;
		default:return 0;
		}
	case 0x656D6F7265746568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696C6F626174:return 1;
		default:return 0;
		}
	case 0x656D6F7461706568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369736F6E616C:return 1;
		default:return 0;
		}
	case 0x656D6F7469637865:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696C6F626174:return 1;
		default:return 0;
		}
	case 0x656D726566657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F697461746E:return 1;
		default:return 0;
		}
	case 0x656D7265666E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006576697461746E:return 1;
		case 0x006E6F697461746E:return 1;
		default:return 0;
		}
	case 0x656D7265706E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x656D747261706564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657A696C61746E:return 1;
		case 0x006D73696C61746E:return 1;
		default:return 0;
		}
	case 0x656D756765746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F697461746E:return 1;
		default:return 0;
		}
	case 0x656D756772616E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006576697461746E:return 1;
		default:return 0;
		}
	case 0x656D757274736E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006576697461746E:return 1;
		case 0x00657A696C61746E:return 1;
		case 0x006D73696C61746E:return 1;
		case 0x006E6F697461746E:return 1;
		case 0x007473696C61746E:return 1;
		case 0x007974696C61746E:return 1;
		default:return 0;
		}
	case 0x656D79786F697274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E656C796874:return 1;
		default:return 0;
		}
	case 0x656E616964726163:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061697365687473:return 1;
		default:return 0;
		}
	case 0x656E616968636172:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061697365687473:return 1;
		default:return 0;
		}
	case 0x656E616D72656874:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061697365687473:return 1;
		default:return 0;
		}
	case 0x656E616F6372616E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061697365687473:return 1;
		default:return 0;
		}
	case 0x656E61746E6F7073:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x656E617968746162:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061697365687473:return 1;
		default:return 0;
		}
	case 0x656E6562696E6D6F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065636E656C6F76:return 1;
		default:return 0;
		}
	case 0x656E65676174656D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x656E65676F696261:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x656E65676F6D6167:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x656E65676F6D6F68:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x656E65676F6E6563:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x656E65676F6E656B:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x656E65676F6E7963:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00747369676F6C61:return 1;
		default:return 0;
		}
	case 0x656E65676F727970:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x656E65676F746E6F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x656E65676F747561:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x656E65676F747963:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x656E6567796C6F70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x656E656C79687465:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E696D616964:return 1;
		default:return 0;
		}
	case 0x656E656C796C6F74:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E696D616964:return 1;
		default:return 0;
		}
	case 0x656E67616D616964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x656E67616D6E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C62617A6974:return 1;
		default:return 0;
		}
	case 0x656E696B6174616B:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00636972656D6F74:return 1;
		default:return 0;
		}
	case 0x656E696D696D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064657A696C6172:return 1;
		default:return 0;
		}
	case 0x656E6975676E6173:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x656E6B6361686E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646579:return 1;
		default:return 0;
		}
	case 0x656E6F6475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00726574706F7275:return 1;
		default:return 0;
		}
	case 0x656E6F65616C6170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E697472656D:return 1;
		case 0x006E61657472656D:return 1;
		default:return 0;
		}
	case 0x656E6F696863726F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006169676C617275:return 1;
		default:return 0;
		}
	case 0x656E6F6968637369:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006169676C617275:return 1;
		default:return 0;
		}
	case 0x656E6F6C706F6E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E61657472656D:return 1;
		default:return 0;
		}
	case 0x656E6F7268747261:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006169676C617275:return 1;
		default:return 0;
		}
	case 0x656E6F7274736167:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073697469726870:return 1;
		default:return 0;
		}
	case 0x656E6F74616D6568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369736F726870:return 1;
		default:return 0;
		}
	case 0x656E6F7469726570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00736973796C636F:return 1;
		case 0x00797473616C706F:return 1;
		default:return 0;
		}
	case 0x656E6F746E6F646F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006169676C617275:return 1;
		default:return 0;
		}
	case 0x656E6F7473616C62:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065726F706F7275:return 1;
		default:return 0;
		}
	case 0x656E6F7A69686373:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E697472656D:return 1;
		case 0x006E61657472656D:return 1;
		default:return 0;
		}
	case 0x656E706172746574:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E61696E6F6D75:return 1;
		case 0x0073756F6E6F6D75:return 1;
		default:return 0;
		}
	case 0x656E706F74736F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00797865706F6D75:return 1;
		default:return 0;
		}
	case 0x656F636974726F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E6572656666:return 1;
		default:return 0;
		}
	case 0x656F68636E6F7262:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796E6F68706F67:return 1;
		default:return 0;
		}
	case 0x656F69646F6E7967:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C73756F6963:return 1;
		default:return 0;
		}
	case 0x656F706F7263696D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00636974696C6963:return 1;
		default:return 0;
		}
	case 0x656F726574736F70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E72657478:return 1;
		default:return 0;
		}
	case 0x656F726574756564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065736F7473616C:return 1;
		default:return 0;
		}
	case 0x656F726863797370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061697365687473:return 1;
		default:return 0;
		}
	case 0x656F726F68706F6F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00797370656C6970:return 1;
		default:return 0;
		}
	case 0x656F727463656C65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616572656874:return 1;
		default:return 0;
		}
	case 0x656F727463657073:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369727463656C:return 1;
		default:return 0;
		}
	case 0x656F74656E67616D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369727463656C:return 1;
		default:return 0;
		}
	case 0x65706D6574736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646572:return 1;
		default:return 0;
		}
	case 0x65706D6968637261:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696C616972:return 1;
		case 0x007473696C616972:return 1;
		default:return 0;
		}
	case 0x65706D6F63627573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F697461736E:return 1;
		default:return 0;
		}
	case 0x65706D6F63657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F697461736E:return 1;
		default:return 0;
		}
	case 0x65706D6F636E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E697461736E:return 1;
		case 0x006E6F697461736E:return 1;
		default:return 0;
		}
	case 0x65706D6F636F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F697461736E:return 1;
		default:return 0;
		}
	case 0x65706E61676E616D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574696C6F7463:return 1;
		default:return 0;
		}
	case 0x65706F6475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616C756372:return 1;
		case 0x00746E656E616D72:return 1;
		default:return 0;
		}
	case 0x65706F6D72656874:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D7369646F6972:return 1;
		default:return 0;
		}
	case 0x6570736172746574:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F74616D72:return 1;
		default:return 0;
		}
	case 0x6570736572736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C75667463:return 1;
		default:return 0;
		}
	case 0x65707369646E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F697461736E:return 1;
		default:return 0;
		}
	case 0x6570736F69676E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F74616D72:return 1;
		default:return 0;
		}
	case 0x6570736F726F7370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D726F66696D72:return 1;
		case 0x0073697361696D72:return 1;
		default:return 0;
		}
	case 0x6570736F72746572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6576697463:return 1;
		case 0x0079746976697463:return 1;
		default:return 0;
		}
	case 0x6570736F72746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E6F697463:return 1;
		case 0x006D736976697463:return 1;
		case 0x0074736976697463:return 1;
		case 0x00796C6576697463:return 1;
		default:return 0;
		}
	case 0x6570737265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657A696C616963:return 1;
		default:return 0;
		}
	case 0x6570737964617262:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D736974616D72:return 1;
		default:return 0;
		}
	case 0x657078657265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006572757469646E:return 1;
		case 0x00796C746E617463:return 1;
		default:return 0;
		}
	case 0x65707968696D6568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061697365687473:return 1;
		case 0x007968706F727472:return 1;
		default:return 0;
		}
	case 0x65726170696D6568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061697365687473:return 1;
		default:return 0;
		}
	case 0x657261706F6E6F6D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061697365687473:return 1;
		default:return 0;
		}
	case 0x657261706F726361:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061697365687473:return 1;
		default:return 0;
		}
	case 0x6572627472616568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C676E696B61:return 1;
		default:return 0;
		}
	case 0x6572636165736977:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E687369:return 1;
		default:return 0;
		}
	case 0x6572636172707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F65636174:return 1;
		default:return 0;
		}
	case 0x6572636968706D61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E696E697461:return 1;
		default:return 0;
		}
	case 0x6572637265707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6572757461:return 1;
		default:return 0;
		}
	case 0x6572637369646E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007972616E6F6974:return 1;
		default:return 0;
		}
	case 0x6572637369646E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6261746964:return 1;
		default:return 0;
		}
	case 0x6572656665646E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C6169746E:return 1;
		default:return 0;
		}
	case 0x657265746E696E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C676E697473:return 1;
		default:return 0;
		}
	case 0x657265746E756F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065636E65646976:return 1;
		case 0x0065736963726578:return 1;
		default:return 0;
		}
	case 0x6572657665727269:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C6169746E:return 1;
		default:return 0;
		}
	case 0x6572676E6F636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E6F697373:return 1;
		default:return 0;
		}
	case 0x6572676F72706D69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6576697373:return 1;
		default:return 0;
		}
	case 0x6572676F72706E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6576697373:return 1;
		default:return 0;
		}
	case 0x6572676F72746572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6576697373:return 1;
		default:return 0;
		}
	case 0x657267736E617274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E6F697373:return 1;
		case 0x00796C6576697373:return 1;
		case 0x00796C676E697373:return 1;
		default:return 0;
		}
	case 0x65726F6369687465:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6967696C:return 1;
		default:return 0;
		}
	case 0x65726F6475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697473696C61:return 1;
		case 0x006E6F6974637564:return 1;
		case 0x0073756F6967696C:return 1;
		default:return 0;
		}
	case 0x65726F6666616564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617473:return 1;
		default:return 0;
		}
	case 0x65726F6666616572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617473:return 1;
		default:return 0;
		}
	case 0x65726F6765746163:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61636974616D:return 1;
		default:return 0;
		}
	case 0x65726F6863797370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697473696C61:return 1;
		default:return 0;
		}
	case 0x65726F69726F6863:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00736974696E6974:return 1;
		default:return 0;
		}
	case 0x65726F6D72656874:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974637564:return 1;
		case 0x00726F74616C7567:return 1;
		case 0x00746E6174736973:return 1;
		default:return 0;
		}
	case 0x65726F70736E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E696D726F66:return 1;
		default:return 0;
		}
	case 0x6572706564657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616963:return 1;
		default:return 0;
		}
	case 0x65727065646E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E6974616963:return 1;
		default:return 0;
		}
	case 0x6572706572746E65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61697275656E:return 1;
		default:return 0;
		}
	case 0x6572706968637261:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61636974616C:return 1;
		default:return 0;
		}
	case 0x6572706D6F636572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F69736E6568:return 1;
		default:return 0;
		}
	case 0x6572706D6F636E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657669736E6568:return 1;
		case 0x00676E69646E6568:return 1;
		case 0x006E6F69736E6568:return 1;
		default:return 0;
		}
	case 0x6572706D6F636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657669736E6568:return 1;
		case 0x00676E69646E6568:return 1;
		case 0x006E6F69736E6568:return 1;
		default:return 0;
		}
	case 0x6572706F74636F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E697469706963:return 1;
		default:return 0;
		}
	case 0x6572706F746F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079726574796273:return 1;
		default:return 0;
		}
	case 0x6572707061657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F69736E6568:return 1;
		default:return 0;
		}
	case 0x65727070616E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F69736E6568:return 1;
		case 0x006E6F6974616963:return 1;
		default:return 0;
		}
	case 0x65727070616F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616963:return 1;
		default:return 0;
		}
	case 0x6572707061736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616963:return 1;
		default:return 0;
		}
	case 0x657270706173696D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657669736E6568:return 1;
		case 0x0065766974616963:return 1;
		case 0x006E6F69736E6568:return 1;
		case 0x006E6F6974616963:return 1;
		default:return 0;
		}
	case 0x6572707265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61636974616C:return 1;
		case 0x0073756F69726163:return 1;
		default:return 0;
		}
	case 0x6572707265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0070696873726574:return 1;
		default:return 0;
		}
	case 0x6572726575676164:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007473697079746F:return 1;
		default:return 0;
		}
	case 0x657273696D657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E6573657270:return 1;
		default:return 0;
		}
	case 0x65727465726E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E656D68636E:return 1;
		default:return 0;
		}
	case 0x65727568706C7573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E696C61736F:return 1;
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x6572756F74737963:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073697469726574:return 1;
		case 0x0073697469726874:return 1;
		default:return 0;
		}
	case 0x65736572706C616D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F697461746E:return 1;
		default:return 0;
		}
	case 0x65736572706E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F697461746E:return 1;
		case 0x006E6F6974617672:return 1;
		default:return 0;
		}
	case 0x65736E6F63657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617263:return 1;
		default:return 0;
		}
	case 0x65736E6F636E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065766974617672:return 1;
		case 0x006E6F6974617263:return 1;
		case 0x006E6F6974617672:return 1;
		default:return 0;
		}
	case 0x65736E6F636F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617672:return 1;
		default:return 0;
		}
	case 0x65736F6863797370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6169726F736E:return 1;
		case 0x007974696C617578:return 1;
		default:return 0;
		}
	case 0x65736F7065726E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C7566:return 1;
		default:return 0;
		}
	case 0x65736F7265746568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C617578:return 1;
		default:return 0;
		}
	case 0x65736F7469637865:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079726F74657263:return 1;
		default:return 0;
		}
	case 0x65737265706E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065636E61726576:return 1;
		default:return 0;
		}
	case 0x657373617265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6576697472:return 1;
		default:return 0;
		}
	case 0x6573736F70657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C676E697373:return 1;
		default:return 0;
		}
	case 0x6573736F72636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064656E696D6178:return 1;
		default:return 0;
		}
	case 0x6573756F686E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E697065656B:return 1;
		default:return 0;
		}
	case 0x65737964696D6568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061697365687473:return 1;
		default:return 0;
		}
	case 0x6574616D69746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007473696C616972:return 1;
		default:return 0;
		}
	case 0x6574617069726570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x6574617274736E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636967:return 1;
		default:return 0;
		}
	case 0x657463616D696C63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636972:return 1;
		default:return 0;
		}
	case 0x6574636172616863:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C62617A6972:return 1;
		default:return 0;
		}
	case 0x6574636E69687073:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065706F63736F72:return 1;
		case 0x00796D6F74636572:return 1;
		case 0x0079706F63736F72:return 1;
		default:return 0;
		}
	case 0x6574656577736E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E64656E:return 1;
		default:return 0;
		}
	case 0x6574656869746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6973796C6F72:return 1;
		default:return 0;
		}
	case 0x65746867696C6E65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E64656E:return 1;
		default:return 0;
		}
	case 0x6574686769726E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x6574686769727075:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x6574696E69666E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C616D6973:return 1;
		default:return 0;
		}
	case 0x6574697571736573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E61697472:return 1;
		default:return 0;
		}
	case 0x65746C6F6F686373:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C7265686361:return 1;
		default:return 0;
		}
	case 0x65746C7564616E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6465746172:return 1;
		default:return 0;
		}
	case 0x65746E6F63657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00797261726F706D:return 1;
		default:return 0;
		}
	case 0x65746E6F636E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6E696D72:return 1;
		default:return 0;
		}
	case 0x65746E756F636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006465646E616D72:return 1;
		case 0x0064656C69617672:return 1;
		case 0x0064657469656672:return 1;
		default:return 0;
		}
	case 0x65746F6572657473:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065706F6373656C:return 1;
		case 0x00726574656D656C:return 1;
		default:return 0;
		}
	case 0x65746F6863797370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6163696E6863:return 1;
		default:return 0;
		}
	case 0x65746F68706C7573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065646972756C6C:return 1;
		default:return 0;
		}
	case 0x65746F6D72656874:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E6F6870656C:return 1;
		default:return 0;
		}
	case 0x65746F72706E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617473:return 1;
		default:return 0;
		}
	case 0x6574706F7263696D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F69677972:return 1;
		default:return 0;
		}
	case 0x6574706F72696863:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F69677972:return 1;
		default:return 0;
		}
	case 0x657472756F636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x6574736174736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C7566:return 1;
		default:return 0;
		}
	case 0x657473656C6F6863:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061696D656C6F72:return 1;
		case 0x0061696D656E6972:return 1;
		case 0x00616972756C6F72:return 1;
		case 0x00616972756E6972:return 1;
		default:return 0;
		}
	case 0x65747379686E6170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796D6F74636572:return 1;
		default:return 0;
		}
	case 0x657474617265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C657669746E:return 1;
		default:return 0;
		}
	case 0x6574756165626E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x65756C666E696E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C626165636E:return 1;
		default:return 0;
		}
	case 0x657571616C6F6976:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E697274696372:return 1;
		default:return 0;
		}
	case 0x6575716172726574:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x6575716573627573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C6169746E:return 1;
		default:return 0;
		}
	case 0x65757165736E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C6169746E:return 1;
		default:return 0;
		}
	case 0x6576616C736E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E69646C6F68:return 1;
		default:return 0;
		}
	case 0x657664616D696E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E6F697372:return 1;
		default:return 0;
		}
	case 0x657665647265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E656D706F6C:return 1;
		default:return 0;
		}
	case 0x65766C6F73736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x65766E697265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00646569726F746E:return 1;
		default:return 0;
		}
	case 0x65766E6F63657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617372:return 1;
		default:return 0;
		}
	case 0x65766E6F636E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E6F69746E:return 1;
		default:return 0;
		}
	case 0x65766E6F636F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E6F69746E:return 1;
		default:return 0;
		}
	case 0x65766F6361726F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C617262657472:return 1;
		default:return 0;
		}
	case 0x65766F6369746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E69746E616E:return 1;
		default:return 0;
		}
	case 0x65766F6475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C636972746E:return 1;
		default:return 0;
		}
	case 0x65766F6968637369:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C617262657472:return 1;
		default:return 0;
		}
	case 0x65766F696E617263:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C617262657472:return 1;
		default:return 0;
		}
	case 0x65766F6C75706170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072616C75636973:return 1;
		default:return 0;
		}
	case 0x65766F6E72657473:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C617262657472:return 1;
		default:return 0;
		}
	case 0x65766F7265646E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072656B6F6F6C72:return 1;
		default:return 0;
		}
	case 0x65766F7265746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C6172746E:return 1;
		default:return 0;
		}
	case 0x65766F72746E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E6F697372:return 1;
		case 0x00796C6C61697372:return 1;
		default:return 0;
		}
	case 0x65766F73696D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079746E67696572:return 1;
		default:return 0;
		}
	case 0x65776E6F6D6D6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D736968746C61:return 1;
		default:return 0;
		}
	case 0x65796D6F696C6F70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079687461706F6C:return 1;
		default:return 0;
		}
	case 0x65796D6F7263696D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007473616C626F6C:return 1;
		default:return 0;
		}
	case 0x6664616574736E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E747361:return 1;
		default:return 0;
		}
	case 0x6665696C65626E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C7566:return 1;
		default:return 0;
		}
	case 0x6665726172746C75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E656D656E69:return 1;
		default:return 0;
		}
	case 0x6665726F72746572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006576697463656C:return 1;
		default:return 0;
		}
	case 0x6665727265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F697463656C:return 1;
		case 0x00746E656D656E69:return 1;
		default:return 0;
		}
	case 0x6665727265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F697463656C:return 1;
		default:return 0;
		}
	case 0x666575716E697571:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064657461696C6F:return 1;
		default:return 0;
		}
	case 0x6666657265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C746E65756C:return 1;
		default:return 0;
		}
	case 0x666669646E696E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C746E657265:return 1;
		default:return 0;
		}
	case 0x666669647265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657375:return 1;
		default:return 0;
		}
	case 0x66666F646E617473:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E687369:return 1;
		default:return 0;
		}
	case 0x66667573696E6D6F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079636E65696369:return 1;
		default:return 0;
		}
	case 0x6666757369757165:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079636E65696369:return 1;
		default:return 0;
		}
	case 0x666675737265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079636E65696369:return 1;
		default:return 0;
		}
	case 0x666962616C6C7973:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616369:return 1;
		default:return 0;
		}
	case 0x66696361706E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616369:return 1;
		default:return 0;
		}
	case 0x6669636570736564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616369:return 1;
		default:return 0;
		}
	case 0x6669636C61636564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616369:return 1;
		default:return 0;
		}
	case 0x6669636E697A6564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616369:return 1;
		default:return 0;
		}
	case 0x6669646963616564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616369:return 1;
		default:return 0;
		}
	case 0x6669646963616572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616369:return 1;
		default:return 0;
		}
	case 0x66696469636E6172:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616369:return 1;
		default:return 0;
		}
	case 0x6669646E656C7073:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C73756F7265:return 1;
		default:return 0;
		}
	case 0x6669646F6D657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616369:return 1;
		default:return 0;
		}
	case 0x66696564696D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616369:return 1;
		default:return 0;
		}
	case 0x6669686361657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616369:return 1;
		default:return 0;
		}
	case 0x6669686365657073:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616369:return 1;
		default:return 0;
		}
	case 0x666968636E657266:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616369:return 1;
		default:return 0;
		}
	case 0x666968746F6F6D73:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616369:return 1;
		default:return 0;
		}
	case 0x66696C61746E6174:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656469726F756C:return 1;
		default:return 0;
		}
	case 0x66696C6175716572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616369:return 1;
		default:return 0;
		}
	case 0x66696C6175716E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616369:return 1;
		case 0x007373656E646569:return 1;
		default:return 0;
		}
	case 0x66696C65676E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974636172:return 1;
		default:return 0;
		}
	case 0x66696C6973736F66:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616369:return 1;
		default:return 0;
		}
	case 0x66696C6C6174656D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616369:return 1;
		default:return 0;
		}
	case 0x66696C6F62616964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616369:return 1;
		default:return 0;
		}
	case 0x66696C706D657865:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065766974616369:return 1;
		case 0x006E6F6974616369:return 1;
		default:return 0;
		}
	case 0x66696E67616D6572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616369:return 1;
		default:return 0;
		}
	case 0x66696E6769646E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646569:return 1;
		default:return 0;
		}
	case 0x66696E67696C6564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616369:return 1;
		default:return 0;
		}
	case 0x66696E6769736461:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616369:return 1;
		default:return 0;
		}
	case 0x66696E6769736E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C746E616369:return 1;
		default:return 0;
		}
	case 0x66696E6769736E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065766974616369:return 1;
		case 0x00796C746E616369:return 1;
		default:return 0;
		}
	case 0x66696E696863616D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616369:return 1;
		default:return 0;
		}
	case 0x66696E6D65646E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616369:return 1;
		case 0x0079726F74616369:return 1;
		default:return 0;
		}
	case 0x66696E6F62726163:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616369:return 1;
		default:return 0;
		}
	case 0x66696E6F6372697A:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656469726F756C:return 1;
		default:return 0;
		}
	case 0x66696E6F6C6F7473:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C73756F7265:return 1;
		default:return 0;
		}
	case 0x66696E6F73726570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065766974616369:return 1;
		case 0x006E6F6974616369:return 1;
		default:return 0;
		}
	case 0x6669726361736E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6261656369:return 1;
		case 0x00796C6261656369:return 1;
		default:return 0;
		}
	case 0x666972646E6F6863:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616369:return 1;
		default:return 0;
		}
	case 0x6669726576657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616369:return 1;
		default:return 0;
		}
	case 0x6669726F70726F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616369:return 1;
		default:return 0;
		}
	case 0x6669727463656C65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616369:return 1;
		default:return 0;
		}
	case 0x66697274696E6564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616369:return 1;
		default:return 0;
		}
	case 0x6669727469766564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616369:return 1;
		default:return 0;
		}
	case 0x666972746E756F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646569:return 1;
		default:return 0;
		}
	case 0x66697274736E6F6D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616369:return 1;
		default:return 0;
		}
	case 0x666972756372656D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616369:return 1;
		default:return 0;
		}
	case 0x66697275706E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616369:return 1;
		default:return 0;
		}
	case 0x6669736C61666E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646569:return 1;
		default:return 0;
		}
	case 0x6669736E6574616C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616369:return 1;
		default:return 0;
		}
	case 0x6669736E65746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616369:return 1;
		default:return 0;
		}
	case 0x6669736F7274696E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616369:return 1;
		default:return 0;
		}
	case 0x6669737265766572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616369:return 1;
		default:return 0;
		}
	case 0x6669737265766964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616369:return 1;
		default:return 0;
		}
	case 0x6669746172676572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616369:return 1;
		default:return 0;
		}
	case 0x66697463656A626F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616369:return 1;
		default:return 0;
		}
	case 0x666974656E67616D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616369:return 1;
		default:return 0;
		}
	case 0x666974696E617267:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616369:return 1;
		default:return 0;
		}
	case 0x6669746E656D6563:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616369:return 1;
		default:return 0;
		}
	case 0x6669746F6E657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616369:return 1;
		default:return 0;
		}
	case 0x6669746F6E6E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616369:return 1;
		default:return 0;
		}
	case 0x666974726F666572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616369:return 1;
		default:return 0;
		}
	case 0x666974726F6D6D69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616369:return 1;
		default:return 0;
		}
	case 0x666974726F6D6E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646569:return 1;
		default:return 0;
		}
	case 0x66697473756A6572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616369:return 1;
		default:return 0;
		}
	case 0x66697473756A6E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646569:return 1;
		default:return 0;
		}
	case 0x6669776573756F68:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E696C65:return 1;
		default:return 0;
		}
	case 0x666E696F72746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F697463656C:return 1;
		default:return 0;
		}
	case 0x666E697265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6574696E69:return 1;
		default:return 0;
		}
	case 0x666E6F63696D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E656D656E69:return 1;
		default:return 0;
		}
	case 0x666E6F637265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C746E656469:return 1;
		default:return 0;
		}
	case 0x666E6F6374616966:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006F6974616D7269:return 1;
		default:return 0;
		}
	case 0x666E6F6374736F70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E656D656E69:return 1;
		default:return 0;
		}
	case 0x666F636967617274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369637261:return 1;
		default:return 0;
		}
	case 0x666F697265747261:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369736F726269:return 1;
		default:return 0;
		}
	case 0x666F6C61746E6174:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656469726F756C:return 1;
		default:return 0;
		}
	case 0x666F6C756373616D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E696E696D65:return 1;
		default:return 0;
		}
	case 0x666F6E6F6372697A:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656469726F756C:return 1;
		default:return 0;
		}
	case 0x666F726479686564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E697A656572:return 1;
		default:return 0;
		}
	case 0x667265746E756F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E696873616C:return 1;
		case 0x007373656E746965:return 1;
		case 0x00746E656D746965:return 1;
		default:return 0;
		}
	case 0x6673697461736E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646569:return 1;
		default:return 0;
		}
	case 0x66736E6172746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C62616D726F:return 1;
		default:return 0;
		}
	case 0x66736E6172746E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C62616D726F:return 1;
		default:return 0;
		}
	case 0x66756E616D657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072657275746361:return 1;
		default:return 0;
		}
	case 0x66756E616D6E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064657275746361:return 1;
		default:return 0;
		}
	case 0x6675737265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E6569636966:return 1;
		default:return 0;
		}
	case 0x6679656E6B636F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616369:return 1;
		default:return 0;
		}
	case 0x6679726574747562:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064657265676E69:return 1;
		default:return 0;
		}
	case 0x67616C6972747570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C73756F6E69:return 1;
		default:return 0;
		}
	case 0x67616D6965726F66:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616E69:return 1;
		default:return 0;
		}
	case 0x67616D697265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065766974616E69:return 1;
		default:return 0;
		}
	case 0x67616D7563726963:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617469:return 1;
		default:return 0;
		}
	case 0x67616F6369746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065766974616C75:return 1;
		case 0x00676E6974616C75:return 1;
		default:return 0;
		}
	case 0x6761726665727269:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x67617270796C6F70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61636974616D:return 1;
		default:return 0;
		}
	case 0x6761736964657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6261656572:return 1;
		case 0x00746E656D656572:return 1;
		default:return 0;
		}
	case 0x67617369646E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E656D656572:return 1;
		default:return 0;
		}
	case 0x6761746E616E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697473696E6F:return 1;
		default:return 0;
		}
	case 0x676175716E697571:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E616972616E65:return 1;
		default:return 0;
		}
	case 0x6761766172747865:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E746E61:return 1;
		default:return 0;
		}
	case 0x6761766E69736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616E69:return 1;
		default:return 0;
		}
	case 0x6765706F7263696D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369746974616D:return 1;
		default:return 0;
		}
	case 0x6765726F746F6870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6973736572:return 1;
		default:return 0;
		}
	case 0x6765727265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616C75:return 1;
		default:return 0;
		}
	case 0x6765727265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61746E656D69:return 1;
		default:return 0;
		}
	case 0x67657369746C756D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657461746E656D:return 1;
		default:return 0;
		}
	case 0x6765746E69627573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61746E656D75:return 1;
		default:return 0;
		}
	case 0x6765766F7463616C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E616972617465:return 1;
		default:return 0;
		}
	case 0x6765767265646E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617465:return 1;
		default:return 0;
		}
	case 0x67676178656E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617265:return 1;
		default:return 0;
		}
	case 0x676775736F747561:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6269747365:return 1;
		default:return 0;
		}
	case 0x6769647265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617469:return 1;
		default:return 0;
		}
	case 0x676966736E617274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065766974617275:return 1;
		case 0x006E6F6974617275:return 1;
		case 0x00746E656D657275:return 1;
		default:return 0;
		}
	case 0x67696C626F736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E676E69:return 1;
		default:return 0;
		}
	case 0x67696C6C65746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696269:return 1;
		default:return 0;
		}
	case 0x6769727269657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E6F697461:return 1;
		default:return 0;
		}
	case 0x676972726F636E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696269:return 1;
		default:return 0;
		}
	case 0x6769747365766E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6169726F7461:return 1;
		case 0x006C616E6F697461:return 1;
		case 0x00796C676E697461:return 1;
		default:return 0;
		}
	case 0x676C616D61657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616D61:return 1;
		default:return 0;
		}
	case 0x676C796F72657470:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696D6174756C:return 1;
		default:return 0;
		}
	case 0x676E617266666964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696269:return 1;
		default:return 0;
		}
	case 0x676E61736F63756D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F656E6975:return 1;
		default:return 0;
		}
	case 0x676E61736F726573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F656E6975:return 1;
		default:return 0;
		}
	case 0x676E61736F727461:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F656E6975:return 1;
		default:return 0;
		}
	case 0x676E696C6174656D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073636974736975:return 1;
		default:return 0;
		}
	case 0x676E697373756F62:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657469746C7561:return 1;
		default:return 0;
		}
	case 0x676F646970696872:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065746173736F6C:return 1;
		default:return 0;
		}
	case 0x676F646E75636573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065727574696E65:return 1;
		default:return 0;
		}
	case 0x676F65616D6F7264:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696874616E:return 1;
		case 0x0073756F6874616E:return 1;
		default:return 0;
		}
	case 0x676F6870736F6870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369726563796C:return 1;
		default:return 0;
		}
	case 0x676F687469676561:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696874616E:return 1;
		case 0x0073756F6874616E:return 1;
		default:return 0;
		}
	case 0x676F68747369706F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065746173736F6C:return 1;
		case 0x006D73696874616E:return 1;
		case 0x0073756F6870796C:return 1;
		case 0x0073756F6874616E:return 1;
		default:return 0;
		}
	case 0x676F69626F747561:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0074736968706172:return 1;
		default:return 0;
		}
	case 0x676F6C616D6F6E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F74616E6F:return 1;
		default:return 0;
		}
	case 0x676F6C616E616E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x676F6C6C6174656D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0074736968706172:return 1;
		default:return 0;
		}
	case 0x676F6C6C79736E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369747369:return 1;
		default:return 0;
		}
	case 0x676F6C6F6D797465:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x676F6C7265746177:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646567:return 1;
		default:return 0;
		}
	case 0x676F6E6167657473:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0074736968706172:return 1;
		default:return 0;
		}
	case 0x676F6E656863696C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0074736968706172:return 1;
		default:return 0;
		}
	case 0x676F6E6F68706973:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6874616E:return 1;
		default:return 0;
		}
	case 0x676F726170796872:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0074736968706172:return 1;
		default:return 0;
		}
	case 0x676F726265726563:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F696C676E61:return 1;
		default:return 0;
		}
	case 0x676F726479686564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616E65:return 1;
		default:return 0;
		}
	case 0x676F72656E616870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065746173736F6C:return 1;
		default:return 0;
		}
	case 0x676F7265746F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6870796C:return 1;
		default:return 0;
		}
	case 0x676F726574756564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065736F74616C65:return 1;
		default:return 0;
		}
	case 0x676F72706F73616E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696874616E:return 1;
		default:return 0;
		}
	case 0x676F72706F747561:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065766973736572:return 1;
		default:return 0;
		}
	case 0x676F727079727565:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6874616E:return 1;
		default:return 0;
		}
	case 0x676F727265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E6F697461:return 1;
		case 0x00796C6576697461:return 1;
		case 0x00796C676E697461:return 1;
		case 0x00796C69726F7461:return 1;
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x676F727463656C65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696E61766C61:return 1;
		case 0x0065746968706172:return 1;
		default:return 0;
		}
	case 0x676F73696E617065:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696874616E:return 1;
		case 0x0073756F6874616E:return 1;
		default:return 0;
		}
	case 0x676F73756C63636F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C617669676E69:return 1;
		default:return 0;
		}
	case 0x676F74616D726564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007363696870796C:return 1;
		default:return 0;
		}
	case 0x676F74616E616874:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696E6F6D6F6E:return 1;
		default:return 0;
		}
	case 0x676F746E656E7973:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6874616E:return 1;
		default:return 0;
		}
	case 0x676F747369656C63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C73756F6D61:return 1;
		default:return 0;
		}
	case 0x676F7475616C6574:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0074736968706172:return 1;
		default:return 0;
		}
	case 0x6772656E656E7973:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369747369:return 1;
		default:return 0;
		}
	case 0x6772656F72647968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E696E69746F:return 1;
		default:return 0;
		}
	case 0x677265746E756F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F7369727261:return 1;
		default:return 0;
		}
	case 0x67726F6172747865:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616D73696E61:return 1;
		default:return 0;
		}
	case 0x67726F6F7263696D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616D73696E61:return 1;
		default:return 0;
		}
	case 0x6775616C736E616D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E6972657468:return 1;
		case 0x0073756F72657468:return 1;
		default:return 0;
		}
	case 0x67756F6874657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C75667468:return 1;
		default:return 0;
		}
	case 0x6775737265646E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974736567:return 1;
		default:return 0;
		}
	case 0x67796870736E6170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0068706172676F6D:return 1;
		default:return 0;
		}
	case 0x67796D6169726570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00736974696C6164:return 1;
		default:return 0;
		}
	case 0x6779786F69746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616E65:return 1;
		default:return 0;
		}
	case 0x6863616F72706572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C7566:return 1;
		default:return 0;
		}
	case 0x6863616F72707061:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x6863617261627573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E616564696F6E:return 1;
		default:return 0;
		}
	case 0x6863617262627573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696C656B7379:return 1;
		default:return 0;
		}
	case 0x686365746F727970:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C6163696E:return 1;
		default:return 0;
		}
	case 0x6863697370726574:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C6165726F:return 1;
		default:return 0;
		}
	case 0x68636E6172666661:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E656D657369:return 1;
		default:return 0;
		}
	case 0x68636E6172666665:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E656D657369:return 1;
		default:return 0;
		}
	case 0x68636E6172666E65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E656D657369:return 1;
		default:return 0;
		}
	case 0x68636E656C6C6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F74616D79:return 1;
		default:return 0;
		}
	case 0x68636E656E656F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F74616D79:return 1;
		default:return 0;
		}
	case 0x68636E656F78796D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00616D6F72646E6F:return 1;
		default:return 0;
		}
	case 0x68636E65736F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F74616D79:return 1;
		default:return 0;
		}
	case 0x68636E6574737963:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F74616D79:return 1;
		default:return 0;
		}
	case 0x68636E696C666E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E676E69:return 1;
		default:return 0;
		}
	case 0x68636F636964656D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696772757269:return 1;
		default:return 0;
		}
	case 0x68636F6475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073696C61737972:return 1;
		default:return 0;
		}
	case 0x68636F65616C6170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079676F6C6F726F:return 1;
		default:return 0;
		}
	case 0x68636F65676F6962:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079727473696D65:return 1;
		default:return 0;
		}
	case 0x68636F656F6D6F68:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00636974616D6F72:return 1;
		default:return 0;
		}
	case 0x68636F6572657473:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00636974616D6F72:return 1;
		case 0x0079727473696D65:return 1;
		default:return 0;
		}
	case 0x68636F68706F7274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6974616D6F72:return 1;
		default:return 0;
		}
	case 0x68636F6D72656874:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079727473696D65:return 1;
		default:return 0;
		}
	case 0x68636F6D75656E70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061696772757269:return 1;
		default:return 0;
		}
	case 0x68636F6E68636574:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079727473696D65:return 1;
		default:return 0;
		}
	case 0x68636F6E69746361:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079727473696D65:return 1;
		default:return 0;
		}
	case 0x68636F6E756D6D69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079727473696D65:return 1;
		default:return 0;
		}
	case 0x68636F7265746568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00636974616D6F72:return 1;
		case 0x006E6974616D6F72:return 1;
		case 0x0073756F6E6F6874:return 1;
		default:return 0;
		}
	case 0x68636F7265746E65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061696772757269:return 1;
		default:return 0;
		}
	case 0x68636F726F6C6863:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00736574616D6F72:return 1;
		default:return 0;
		}
	case 0x68636F7274627573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697265746E61:return 1;
		default:return 0;
		}
	case 0x68636F746E6F646F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696772757269:return 1;
		default:return 0;
		}
	case 0x6863726574657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E616974736972:return 1;
		default:return 0;
		}
	case 0x6863736172746C75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697473616C6F:return 1;
		default:return 0;
		}
	case 0x6863736172747865:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697473616C6F:return 1;
		default:return 0;
		}
	case 0x6863737265707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697473616C6F:return 1;
		default:return 0;
		}
	case 0x6863737265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697473616C6F:return 1;
		default:return 0;
		}
	case 0x6863796863617274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00636974616D6F72:return 1;
		default:return 0;
		}
	case 0x68637973706F6962:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00747369676F6C6F:return 1;
		default:return 0;
		}
	case 0x68637973706F6F7A:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00747369676F6C6F:return 1;
		default:return 0;
		}
	case 0x6865727065646E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6269736E65:return 1;
		default:return 0;
		}
	case 0x6865727065727269:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6269736E65:return 1;
		case 0x00796C6269736E65:return 1;
		default:return 0;
		}
	case 0x6865727070616E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6269736E65:return 1;
		default:return 0;
		}
	case 0x6865727070616E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6261646E65:return 1;
		case 0x00656C6269736E65:return 1;
		case 0x00796C6261646E65:return 1;
		default:return 0;
		}
	case 0x6867696C7265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064656461656874:return 1;
		default:return 0;
		}
	case 0x6867697270736E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E696C74:return 1;
		default:return 0;
		}
	case 0x686769727265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C73756F6574:return 1;
		default:return 0;
		}
	case 0x6867697365726F66:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646574:return 1;
		default:return 0;
		}
	case 0x68676973696D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E6965657374:return 1;
		default:return 0;
		}
	case 0x686769737261656E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646574:return 1;
		default:return 0;
		}
	case 0x6867756F726F6874:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C676E696F67:return 1;
		default:return 0;
		}
	case 0x68696E736E617274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616C69:return 1;
		default:return 0;
		}
	case 0x686E696F746F6870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974696269:return 1;
		default:return 0;
		}
	case 0x686E697265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065766974696269:return 1;
		case 0x006E6F6974696269:return 1;
		default:return 0;
		}
	case 0x686F727065746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974696269:return 1;
		default:return 0;
		}
	case 0x686F727069746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974696269:return 1;
		default:return 0;
		}
	case 0x686F727463656C65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696E6F6D7261:return 1;
		default:return 0;
		}
	case 0x686F747261746574:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61726465:return 1;
		default:return 0;
		}
	case 0x6870616E6F6E6F6D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E656C616874:return 1;
		default:return 0;
		}
	case 0x6870616E74656361:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006564696C616874:return 1;
		default:return 0;
		}
	case 0x6870656369746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369676C616C61:return 1;
		default:return 0;
		}
	case 0x6870656E6F747561:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E69786F746F72:return 1;
		case 0x00796D6F74636572:return 1;
		default:return 0;
		}
	case 0x6870657265707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369736F726469:return 1;
		default:return 0;
		}
	case 0x6870697264617571:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616870736F:return 1;
		default:return 0;
		}
	case 0x68706C617A6E6562:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006564696C616874:return 1;
		default:return 0;
		}
	case 0x68706C6F6D796874:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E69656C616874:return 1;
		default:return 0;
		}
	case 0x68706C6F6E656870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E69656C616874:return 1;
		default:return 0;
		}
	case 0x68706C75736F7369:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696E6179636F:return 1;
		default:return 0;
		}
	case 0x68706C7573726570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696E6179636F:return 1;
		default:return 0;
		}
	case 0x68706F65616C6170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079676F6C6F7479:return 1;
		default:return 0;
		}
	case 0x68706F6863797370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0074736963697379:return 1;
		default:return 0;
		}
	case 0x68706F68706C7573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616870736F:return 1;
		case 0x006574696870736F:return 1;
		case 0x006E69656C616874:return 1;
		default:return 0;
		}
	case 0x68706F6870726F6D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007363696D656E6F:return 1;
		default:return 0;
		}
	case 0x68706F696C626962:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697473696C69:return 1;
		default:return 0;
		}
	case 0x68706F6C6167656D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756D6C616874:return 1;
		default:return 0;
		}
	case 0x68706F6D6F746E65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F726F6874:return 1;
		default:return 0;
		}
	case 0x68706F6E6E656C62:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061696D6C616874:return 1;
		case 0x00616D7369676F6C:return 1;
		case 0x007369736F676F6C:return 1;
		default:return 0;
		}
	case 0x68706F72656C6373:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061696D6C616874:return 1;
		default:return 0;
		}
	case 0x68706F7265746568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697473696D65:return 1;
		default:return 0;
		}
	case 0x68706F7268747261:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369736F676F6C:return 1;
		default:return 0;
		}
	case 0x68706F736F656874:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369747369:return 1;
		default:return 0;
		}
	case 0x68706F7461706568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369746962656C:return 1;
		default:return 0;
		}
	case 0x68706F7470797263:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00736F6D6C616874:return 1;
		default:return 0;
		}
	case 0x6870726F6D6F6567:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007473696E65676F:return 1;
		default:return 0;
		}
	case 0x6870726F6D6F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00747369676F6C6F:return 1;
		default:return 0;
		}
	case 0x6870726F6D737964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006169626F68706F:return 1;
		default:return 0;
		}
	case 0x6870736172707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6164696F6E61:return 1;
		default:return 0;
		}
	case 0x6870736F6D687465:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6164696F6E65:return 1;
		default:return 0;
		}
	case 0x6870736F72746570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6164696F6E65:return 1;
		default:return 0;
		}
	case 0x68707372616F656E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E696D616E65:return 1;
		default:return 0;
		}
	case 0x6870737265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6164696F6E65:return 1;
		default:return 0;
		}
	case 0x6870796863617262:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006169676E616C61:return 1;
		default:return 0;
		}
	case 0x687079746F747561:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x68726F6475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00636974616D7565:return 1;
		default:return 0;
		}
	case 0x68726F746E6F646F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F68636E79:return 1;
		default:return 0;
		}
	case 0x6872726F72647968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073697469686361:return 1;
		default:return 0;
		}
	case 0x687361627265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C7566:return 1;
		default:return 0;
		}
	case 0x687365726F666E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064656E6574726F:return 1;
		default:return 0;
		}
	case 0x6873696E6F747361:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E676E69:return 1;
		default:return 0;
		}
	case 0x6873697265706D69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x68737572636E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x687461626F646E65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696874696C6F:return 1;
		default:return 0;
		}
	case 0x687461626F707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696874696C6F:return 1;
		default:return 0;
		}
	case 0x687461626F726361:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696874696C6F:return 1;
		default:return 0;
		}
	case 0x68746163696D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D736963696C6F:return 1;
		default:return 0;
		}
	case 0x687461636F747561:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D736972657465:return 1;
		default:return 0;
		}
	case 0x6874616D6174656D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073636974616D65:return 1;
		default:return 0;
		}
	case 0x687461706F747561:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007968706172676F:return 1;
		default:return 0;
		}
	case 0x6874617268746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E6568706F69:return 1;
		default:return 0;
		}
	case 0x68746565616C6170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369676F6C6F6E:return 1;
		default:return 0;
		}
	case 0x6874656F656C6170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369676F6C6F6E:return 1;
		default:return 0;
		}
	case 0x6874676E65727473:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C7566:return 1;
		case 0x00796C676E696E65:return 1;
		default:return 0;
		}
	case 0x687468636F747561:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C73756F6E6F:return 1;
		default:return 0;
		}
	case 0x687468706F646F70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00636974696D6C61:return 1;
		default:return 0;
		}
	case 0x687468706F6E6170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00736974696D6C61:return 1;
		default:return 0;
		}
	case 0x6874696C6F707974:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007968706172676F:return 1;
		default:return 0;
		}
	case 0x6874697261676F6C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61636974656D:return 1;
		case 0x0079636E616D6F6D:return 1;
		case 0x00796C6C6163696D:return 1;
		default:return 0;
		}
	case 0x68746972616E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61636974656D:return 1;
		default:return 0;
		}
	case 0x68746C6165686E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C7566:return 1;
		default:return 0;
		}
	case 0x68746E616C696870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369706F72:return 1;
		default:return 0;
		}
	case 0x68746E696D6C6568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00747369676F6C6F:return 1;
		default:return 0;
		}
	case 0x68746F6863797370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0074736970617265:return 1;
		default:return 0;
		}
	case 0x68746F696C626962:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616972616365:return 1;
		case 0x006E616972616365:return 1;
		case 0x0074736970617265:return 1;
		default:return 0;
		}
	case 0x68746F6973796870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0074736970617265:return 1;
		default:return 0;
		}
	case 0x68746F6D6F726863:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0074736970617265:return 1;
		default:return 0;
		}
	case 0x68746F7079686572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616365:return 1;
		default:return 0;
		}
	case 0x687472617275656E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079687461706F72:return 1;
		default:return 0;
		}
	case 0x6874726F7275656E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E61726574706F:return 1;
		default:return 0;
		}
	case 0x6874726F746F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E61726574706F:return 1;
		case 0x006E6F726574706F:return 1;
		default:return 0;
		}
	case 0x68747972656F7865:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697479636F72:return 1;
		default:return 0;
		}
	case 0x696164616B63616C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636973:return 1;
		default:return 0;
		}
	case 0x69616C6365726E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E64656D:return 1;
		default:return 0;
		}
	case 0x69616C7078656E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E64656E:return 1;
		default:return 0;
		}
	case 0x6961726265726168:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E64656E:return 1;
		default:return 0;
		}
	case 0x69617274736E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E64656E:return 1;
		default:return 0;
		}
	case 0x6961736972616870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C6163:return 1;
		default:return 0;
		}
	case 0x6962616865726E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006465746174696C:return 1;
		default:return 0;
		}
	case 0x696261686E696E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646574:return 1;
		default:return 0;
		}
	case 0x69626F65616C6170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00747369676F6C6F:return 1;
		default:return 0;
		}
	case 0x69626F6E656C6167:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065746974756D73:return 1;
		default:return 0;
		}
	case 0x69627265766F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00747369676F6C6F:return 1;
		default:return 0;
		}
	case 0x6962726F696D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00736972616C7563:return 1;
		default:return 0;
		}
	case 0x6963616269726373:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x6963616369666665:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x6963617061636E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x6963617265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00646574616C7564:return 1;
		default:return 0;
		}
	case 0x69636175676E696C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x6963656F796C6F70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x6963657073627573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636966:return 1;
		default:return 0;
		}
	case 0x6963657073657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636966:return 1;
		default:return 0;
		}
	case 0x69636570736F6365:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636966:return 1;
		default:return 0;
		}
	case 0x69636964756A6E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x69636964756A6E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x69636966656E6562:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0070696873797261:return 1;
		default:return 0;
		}
	case 0x69636966666F6E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x69636966666F6E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x6963696C706D6973:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657461746E6564:return 1;
		default:return 0;
		}
	case 0x6963696E756D6E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064657A696C6170:return 1;
		default:return 0;
		}
	case 0x69636E6F636E6170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079726F7461696C:return 1;
		default:return 0;
		}
	case 0x69636E6F636E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E697461696C:return 1;
		default:return 0;
		}
	case 0x69636E6F636F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F697461696C:return 1;
		default:return 0;
		}
	case 0x69636E756E6F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x69636F6475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369736F687272:return 1;
		default:return 0;
		}
	case 0x69636F6964726163:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369736F687272:return 1;
		default:return 0;
		}
	case 0x69636F7369746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697473696C61:return 1;
		default:return 0;
		}
	case 0x69636F7461706568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369736F687272:return 1;
		default:return 0;
		}
	case 0x696372656D6D6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697473696C61:return 1;
		default:return 0;
		}
	case 0x6963736172666E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696669746E65:return 1;
		default:return 0;
		}
	case 0x6963736172747865:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696669746E65:return 1;
		default:return 0;
		}
	case 0x69637369646E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007972616E696C70:return 1;
		default:return 0;
		}
	case 0x6963736E6F636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		case 0x0073756F69746E65:return 1;
		default:return 0;
		}
	case 0x6963736E6F636F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x6963736F696D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616C6C:return 1;
		default:return 0;
		}
	case 0x6963736F746F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696669746E65:return 1;
		default:return 0;
		}
	case 0x6963737265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696669746E65:return 1;
		default:return 0;
		}
	case 0x6963756465726E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6963756465727269:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6964617268746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E6F6E697571:return 1;
		default:return 0;
		}
	case 0x696461726F747561:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007968706172676F:return 1;
		default:return 0;
		}
	case 0x69646172746E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E6F697463:return 1;
		case 0x00796C6576697463:return 1;
		case 0x00796C69726F7463:return 1;
		default:return 0;
		}
	case 0x6964656D74736F70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E69747361:return 1;
		case 0x006D756E69747361:return 1;
		default:return 0;
		}
	case 0x696465736174656D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00797261746E656D:return 1;
		default:return 0;
		}
	case 0x6964696D61727970:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C6163:return 1;
		default:return 0;
		}
	case 0x6964697473657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00726F7461746967:return 1;
		default:return 0;
		}
	case 0x69646E65706D6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x69646E6570726570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C72616C7563:return 1;
		default:return 0;
		}
	case 0x69646F6475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696C6F747361:return 1;
		case 0x007369736F6E6761:return 1;
		default:return 0;
		}
	case 0x69646F6C656D6E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x69646F6C6C796870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F697461696E:return 1;
		default:return 0;
		}
	case 0x69646F6D72656874:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6973756666:return 1;
		default:return 0;
		}
	case 0x69646F6D73617073:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C6163:return 1;
		default:return 0;
		}
	case 0x69646F6E656C7073:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369736F6E6761:return 1;
		default:return 0;
		}
	case 0x6964757473657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x69656C6168746870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00726574656D6F6E:return 1;
		default:return 0;
		}
	case 0x6965736F7263696D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079676F6C6F6D73:return 1;
		default:return 0;
		}
	case 0x6965737379676E65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079676F6C6F6D73:return 1;
		default:return 0;
		}
	case 0x696666617265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616D72:return 1;
		default:return 0;
		}
	case 0x6966667573657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C746E656963:return 1;
		default:return 0;
		}
	case 0x69666964696C6F73:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x6966696D696E696D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696E616964:return 1;
		default:return 0;
		}
	case 0x696669736C756D65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x6966697472616E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C616963:return 1;
		default:return 0;
		}
	case 0x6966697472616E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C616963:return 1;
		default:return 0;
		}
	case 0x69666E6F63657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616D72:return 1;
		default:return 0;
		}
	case 0x69666E6F636E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065766974616D72:return 1;
		case 0x006C6169746E6564:return 1;
		case 0x006E6F6974616373:return 1;
		case 0x006E6F6974616D72:return 1;
		default:return 0;
		}
	case 0x69666E6F636F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616373:return 1;
		default:return 0;
		}
	case 0x69666F72706E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E6972656574:return 1;
		default:return 0;
		}
	case 0x696761626D756C70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6563616E:return 1;
		default:return 0;
		}
	case 0x6967616C69747375:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6563616E:return 1;
		default:return 0;
		}
	case 0x696761726F6C6168:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F65636164:return 1;
		default:return 0;
		}
	case 0x696761746E616C70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6563616E:return 1;
		default:return 0;
		}
	case 0x6967656C696D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065766974616C73:return 1;
		default:return 0;
		}
	case 0x6967656C7265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616C73:return 1;
		default:return 0;
		}
	case 0x69676964696D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065646172676974:return 1;
		default:return 0;
		}
	case 0x6967696C65726E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x6967696C65727269:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x6967697473657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x69676C6F6F686373:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6873696C72:return 1;
		default:return 0;
		}
	case 0x69676E61656C6574:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061697361746365:return 1;
		default:return 0;
		}
	case 0x69676E6172666572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x69676E6172666E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x69676F6C68706564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065746163697473:return 1;
		default:return 0;
		}
	case 0x69676F6C6F656874:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61726F6D6F63:return 1;
		default:return 0;
		}
	case 0x69676F6C6F726F68:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007968706172676F:return 1;
		default:return 0;
		}
	case 0x696772616874656C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C6163:return 1;
		default:return 0;
		}
	case 0x69686372616E6F6D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697473696E61:return 1;
		default:return 0;
		}
	case 0x6968637265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F726C6176:return 1;
		default:return 0;
		}
	case 0x69686F65616C6170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079676F6C6F7473:return 1;
		default:return 0;
		}
	case 0x69686F72706E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6261746962:return 1;
		default:return 0;
		}
	case 0x6968706F7374756F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065746163697473:return 1;
		default:return 0;
		}
	case 0x69687461706D7973:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061696E6F746F63:return 1;
		case 0x0063696E6F746F63:return 1;
		case 0x007473616C626F63:return 1;
		default:return 0;
		}
	case 0x6968746F7A6E6562:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E696C6F7A61:return 1;
		default:return 0;
		}
	case 0x696C6269626F6962:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007968706172676F:return 1;
		default:return 0;
		}
	case 0x696C636172746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E696C6C6574:return 1;
		default:return 0;
		}
	case 0x696C65647265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6465746867:return 1;
		case 0x00796C73756F6963:return 1;
		default:return 0;
		}
	case 0x696C65676E617665:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D756972617473:return 1;
		case 0x006E6F6972617473:return 1;
		case 0x007373656E6C6163:return 1;
		default:return 0;
		}
	case 0x696C656861726170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369706F72746F:return 1;
		default:return 0;
		}
	case 0x696C656874697065:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00726F747065636F:return 1;
		case 0x0073756F74616D6F:return 1;
		default:return 0;
		}
	case 0x696C656D616D6168:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F65636164:return 1;
		default:return 0;
		}
	case 0x696C666E6F636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C676E697463:return 1;
		default:return 0;
		}
	case 0x696C696261727461:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x696C6974636E7570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007265676E6F6D6F:return 1;
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x696C697669636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E64657A:return 1;
		default:return 0;
		}
	case 0x696C6C6562616C66:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657461696C6F66:return 1;
		default:return 0;
		}
	case 0x696C6C65696D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6164696F7370:return 1;
		default:return 0;
		}
	case 0x696C6C6574756373:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007261746E616C70:return 1;
		default:return 0;
		}
	case 0x696C6C6F66697065:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00736974696C7563:return 1;
		default:return 0;
		}
	case 0x696C6C7972616D61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F65636164:return 1;
		default:return 0;
		}
	case 0x696C6F62616F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007473696E6F6974:return 1;
		default:return 0;
		}
	case 0x696C6F62656C6870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073697361696874:return 1;
		default:return 0;
		}
	case 0x696C6F65616C6170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079676F6C6F6E6D:return 1;
		default:return 0;
		}
	case 0x696C6F69766C6570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796D6F746F6874:return 1;
		default:return 0;
		}
	case 0x696C6F6C61797470:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073697361696874:return 1;
		default:return 0;
		}
	case 0x696C6F6C68707974:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073697361696874:return 1;
		default:return 0;
		}
	case 0x696C6F6D75656E70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073697361696874:return 1;
		default:return 0;
		}
	case 0x696C6F7265746E65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073697361696874:return 1;
		default:return 0;
		}
	case 0x696C6F726870656E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796D6F746F6874:return 1;
		default:return 0;
		}
	case 0x696C6F7268747261:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073697361696874:return 1;
		default:return 0;
		}
	case 0x696C6F7461706568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073697361696874:return 1;
		default:return 0;
		}
	case 0x696C6F74736F7061:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C6163:return 1;
		default:return 0;
		}
	case 0x696C6F7972636164:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073697361696874:return 1;
		default:return 0;
		}
	case 0x696C706D6F636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E69746E656D:return 1;
		case 0x00797261746E656D:return 1;
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x696C707365646973:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C676E697474:return 1;
		default:return 0;
		}
	case 0x696C7261706F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61746E656D61:return 1;
		default:return 0;
		}
	case 0x696C7963696D6564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61636972646E:return 1;
		default:return 0;
		}
	case 0x696C7963696D6568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61636972646E:return 1;
		default:return 0;
		}
	case 0x696C7963696D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61636972646E:return 1;
		default:return 0;
		}
	case 0x696C796870617473:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6564696E:return 1;
		default:return 0;
		}
	case 0x696D61667265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974697261696C:return 1;
		default:return 0;
		}
	case 0x696D616C696D6568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796D6F7463656E:return 1;
		default:return 0;
		}
	case 0x696D67616C617473:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x696D6C6F6F686373:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079737365727473:return 1;
		default:return 0;
		}
	case 0x696D6D6F63627573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072656E6F697373:return 1;
		default:return 0;
		}
	case 0x696D6D6F636E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064656E6F697373:return 1;
		case 0x006D73696C617474:return 1;
		default:return 0;
		}
	case 0x696D6D7563726963:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617267:return 1;
		default:return 0;
		}
	case 0x696D6F656C63756E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656D6F736F7263:return 1;
		default:return 0;
		}
	case 0x696D6F72706D6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6169726F7373:return 1;
		default:return 0;
		}
	case 0x696D756C6F747561:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E656373656E:return 1;
		default:return 0;
		}
	case 0x696E6167726F6E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E64657A:return 1;
		case 0x007373656E6C6163:return 1;
		default:return 0;
		}
	case 0x696E617469727570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C6163:return 1;
		default:return 0;
		}
	case 0x696E65676E696E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x696E676973657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065636E61636966:return 1;
		case 0x00726F7461636966:return 1;
		case 0x0079636E61636966:return 1;
		default:return 0;
		}
	case 0x696E6769736E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00726F7461636966:return 1;
		default:return 0;
		}
	case 0x696E6769736E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065636E61636966:return 1;
		default:return 0;
		}
	case 0x696E696475726968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657275746C7563:return 1;
		default:return 0;
		}
	case 0x696E696D64616F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00726F7461727473:return 1;
		default:return 0;
		}
	case 0x696E696D69746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616972657473:return 1;
		default:return 0;
		}
	case 0x696E696D6F6E6769:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x696E697265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065766974616974:return 1;
		default:return 0;
		}
	case 0x696E6975676E6970:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E6563736574:return 1;
		default:return 0;
		}
	case 0x696E6F6475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657469736F7274:return 1;
		default:return 0;
		}
	case 0x696E6F6D65726563:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x696E6F6D69726361:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x696E6F6D69746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064657474657275:return 1;
		default:return 0;
		}
	case 0x696E6F6E61636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C6163:return 1;
		default:return 0;
		}
	case 0x696E726563736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x696E726F656C6170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079676F6C6F6874:return 1;
		default:return 0;
		}
	case 0x696E756365706D69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x696E757265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079746973726576:return 1;
		default:return 0;
		}
	case 0x696F6E6E6F636572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C676E697274:return 1;
		default:return 0;
		}
	case 0x696F706F7263696D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00636974696C6963:return 1;
		case 0x00636974696C696B:return 1;
		default:return 0;
		}
	case 0x696F707061736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C676E69746E:return 1;
		default:return 0;
		}
	case 0x696F726574736F70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E7265746E:return 1;
		case 0x00726F697265666E:return 1;
		default:return 0;
		}
	case 0x6970616468637261:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0070696873726566:return 1;
		default:return 0;
		}
	case 0x6970656172746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616573796870:return 1;
		case 0x006C61696C656874:return 1;
		default:return 0;
		}
	case 0x6970656172747865:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616573796870:return 1;
		default:return 0;
		}
	case 0x6970656475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696870617267:return 1;
		case 0x00636974616D6573:return 1;
		case 0x006C616870617267:return 1;
		case 0x00796361706F6373:return 1;
		default:return 0;
		}
	case 0x6970656968637261:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657461706F6373:return 1;
		case 0x00796361706F6373:return 1;
		default:return 0;
		}
	case 0x6970656F7275656E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61696C656874:return 1;
		case 0x006D75696C656874:return 1;
		default:return 0;
		}
	case 0x6970656F72796874:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00636974746F6C67:return 1;
		default:return 0;
		}
	case 0x6970656F74737963:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C65636F6C70:return 1;
		default:return 0;
		}
	case 0x6970657265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61696C656874:return 1;
		default:return 0;
		}
	case 0x69706F637265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x69706F6475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007365746F6E6E6F:return 1;
		default:return 0;
		}
	case 0x69706F72706E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616974:return 1;
		default:return 0;
		}
	case 0x6970726563736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6970736E6F636E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C73756F7563:return 1;
		default:return 0;
		}
	case 0x6970736E6F636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C73756F7563:return 1;
		default:return 0;
		}
	case 0x6970737573657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C73756F6963:return 1;
		default:return 0;
		}
	case 0x69726166696E6D6F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x69726172656D6574:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x69726172746E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x6972626F7270706F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x6972637265707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x6972637369646E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00646574616E696D:return 1;
		default:return 0;
		}
	case 0x6972637369646E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00646574616E696D:return 1;
		default:return 0;
		}
	case 0x697263736E617274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E6F697470:return 1;
		case 0x00796C6576697470:return 1;
		default:return 0;
		}
	case 0x6972646E696C7963:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C6163:return 1;
		default:return 0;
		}
	case 0x69726570696E6572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616964726163:return 1;
		default:return 0;
		}
	case 0x6972657069746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369746C617473:return 1;
		case 0x007369736C617473:return 1;
		default:return 0;
		}
	case 0x697265706D696E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697473696C61:return 1;
		default:return 0;
		}
	case 0x697265706F646E65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00736974696E6F74:return 1;
		default:return 0;
		}
	case 0x697265706F6D6568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D756964726163:return 1;
		default:return 0;
		}
	case 0x697265706F6E6572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616964726163:return 1;
		default:return 0;
		}
	case 0x6972657074736F70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616964726163:return 1;
		default:return 0;
		}
	case 0x69726573696D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x697265737265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x69726574616D6E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697473696C61:return 1;
		default:return 0;
		}
	case 0x6972657465646E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E697461726F:return 1;
		default:return 0;
		}
	case 0x69726574656C6564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x697265746E756F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006465746E65646E:return 1;
		case 0x006574616369646E:return 1;
		case 0x0065746174697272:return 1;
		case 0x006575676972746E:return 1;
		case 0x00746E6174697272:return 1;
		case 0x007473657265746E:return 1;
		default:return 0;
		}
	case 0x6972686369746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6E61697473:return 1;
		default:return 0;
		}
	case 0x697268747265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E697466:return 1;
		default:return 0;
		}
	case 0x69726F62616C6E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x69726F67656C6C61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C6163:return 1;
		default:return 0;
		}
	case 0x69726F6765746163:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C6163:return 1;
		default:return 0;
		}
	case 0x69726F68706D7973:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F70726163:return 1;
		default:return 0;
		}
	case 0x69726F746972656D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x69726F746E657473:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x69726F7472657473:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x6972706D69736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E656D6E6F73:return 1;
		default:return 0;
		}
	case 0x6972706F72707061:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657461:return 1;
		default:return 0;
		}
	case 0x6972707265646E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00646567656C6976:return 1;
		default:return 0;
		}
	case 0x69727075746C6F62:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E746867:return 1;
		default:return 0;
		}
	case 0x697272616373696D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6261656761:return 1;
		default:return 0;
		}
	case 0x697272616D6E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6261656761:return 1;
		default:return 0;
		}
	case 0x6972727574627573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00646574616C7563:return 1;
		default:return 0;
		}
	case 0x697274656D6D7973:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C6163:return 1;
		default:return 0;
		}
	case 0x6972746F7461766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072616C75676E61:return 1;
		default:return 0;
		}
	case 0x6972747369646E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6261747562:return 1;
		default:return 0;
		}
	case 0x6972747375646E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x69727473756C6C69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x697275637265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x6972756A6E696E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x6973617573726570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x697365726870736F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061696C6968706F:return 1;
		case 0x0061696E67616C6F:return 1;
		case 0x00747369676F6C6F:return 1;
		default:return 0;
		}
	case 0x69736572706E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6169746E6564:return 1;
		default:return 0;
		}
	case 0x6973697571736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007972616E6F6974:return 1;
		default:return 0;
		}
	case 0x6973697669646E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x69736E6172746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D7369746E6567:return 1;
		case 0x00747369746E6567:return 1;
		default:return 0;
		}
	case 0x69736E65736E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C6163:return 1;
		default:return 0;
		}
	case 0x69736E697265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C746E657473:return 1;
		default:return 0;
		}
	case 0x69736E6972746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C6163:return 1;
		default:return 0;
		}
	case 0x69736E6972747865:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C6163:return 1;
		default:return 0;
		}
	case 0x69736E6F636E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6169726F7473:return 1;
		default:return 0;
		}
	case 0x69736E6F70736572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x69736F6361786568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064696F72646568:return 1;
		default:return 0;
		}
	case 0x69736F6475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61636E756870:return 1;
		default:return 0;
		}
	case 0x69736F656E726F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6563696C:return 1;
		default:return 0;
		}
	case 0x69736F7274786564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61727473696E:return 1;
		default:return 0;
		}
	case 0x69737361696D6564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616E67:return 1;
		default:return 0;
		}
	case 0x69737361706D6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6574616E6F:return 1;
		default:return 0;
		}
	case 0x6973736170736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6574616E6F:return 1;
		default:return 0;
		}
	case 0x69737365636F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007473696C616E6F:return 1;
		default:return 0;
		}
	case 0x69737365666E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696C616E6F:return 1;
		case 0x006E61696C616E6F:return 1;
		case 0x007473696C616E6F:return 1;
		default:return 0;
		}
	case 0x69737365666F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657A696C616E6F:return 1;
		case 0x006D73696C616E6F:return 1;
		case 0x007473696C616E6F:return 1;
		case 0x007974696C616E6F:return 1;
		default:return 0;
		}
	case 0x6973736572706D69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697473696E6F:return 1;
		case 0x007373656E656C62:return 1;
		case 0x007473696C616E6F:return 1;
		case 0x007974696C616E6F:return 1;
		default:return 0;
		}
	case 0x6973736572707865:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697473696E6F:return 1;
		default:return 0;
		}
	case 0x6973736573736F70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696C616E6F:return 1;
		case 0x007473696C616E6F:return 1;
		default:return 0;
		}
	case 0x697373696D616E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x697373696D726570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x697375616C706D69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x697375616C706E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x69737968706F6962:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00747369676F6C6F:return 1;
		case 0x007968706172676F:return 1;
		default:return 0;
		}
	case 0x6974616269726373:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x6974616C65676E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C62617A696E:return 1;
		default:return 0;
		}
	case 0x6974616C75706F70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697473696E6F:return 1;
		default:return 0;
		}
	case 0x6974616D67617270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C6163:return 1;
		default:return 0;
		}
	case 0x6974616D67696E65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C6163:return 1;
		default:return 0;
		}
	case 0x6974616D67697473:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C6163:return 1;
		default:return 0;
		}
	case 0x6974616D6D617267:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C6163:return 1;
		default:return 0;
		}
	case 0x6974616D6F696469:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C6163:return 1;
		default:return 0;
		}
	case 0x6974616D72657073:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6E65676F:return 1;
		default:return 0;
		}
	case 0x6974616E69746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007473696C616E6F:return 1;
		default:return 0;
		}
	case 0x697461707563636F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007473696C616E6F:return 1;
		default:return 0;
		}
	case 0x6974617269746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696C616E6F:return 1;
		case 0x007473696C616E6F:return 1;
		default:return 0;
		}
	case 0x697461727265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657A696C616E6F:return 1;
		default:return 0;
		}
	case 0x6974617469636572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696C616E6F:return 1;
		default:return 0;
		}
	case 0x6974617472696C66:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x697463616C617473:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x6974636172706D69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C6163:return 1;
		default:return 0;
		}
	case 0x6974636172706E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C6163:return 1;
		default:return 0;
		}
	case 0x6974636172746574:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E696C6C656E:return 1;
		default:return 0;
		}
	case 0x6974636172746E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6974636566726570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697473696E6F:return 1;
		case 0x006E6F6974616E6F:return 1;
		default:return 0;
		}
	case 0x6974636572726F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007473696C616E6F:return 1;
		default:return 0;
		}
	case 0x69746369646E6976:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065636E656C6F76:return 1;
		default:return 0;
		}
	case 0x6974636E61736E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F696E6F6D:return 1;
		default:return 0;
		}
	case 0x6974636E75666564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657A696C616E6F:return 1;
		default:return 0;
		}
	case 0x6974656772656E65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C6163:return 1;
		default:return 0;
		}
	case 0x69746568706F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C6163:return 1;
		default:return 0;
		}
	case 0x6974657263736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6972616E6F:return 1;
		default:return 0;
		}
	case 0x6974696269687865:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697473696E6F:return 1;
		default:return 0;
		}
	case 0x697469626D616E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x6974696465707865:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x6974696C6F706D69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C6163:return 1;
		default:return 0;
		}
	case 0x6974696E65706D69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6974697361726170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C6163:return 1;
		default:return 0;
		}
	case 0x697469736F70706F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616E6E6970:return 1;
		case 0x0073756F696C6F66:return 1;
		case 0x0073756F726F6C66:return 1;
		default:return 0;
		}
	case 0x6974697465706572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x69746E616F696874:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657461696E6F6D:return 1;
		case 0x0073756F696E6F6D:return 1;
		default:return 0;
		}
	case 0x69746E65646E6574:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x69746E6568747561:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C6163:return 1;
		default:return 0;
		}
	case 0x69746E656C706E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C7566:return 1;
		default:return 0;
		}
	case 0x69746E6574657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x69746E65746E6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x69746E65746E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x69746E65766E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657A696C616E6F:return 1;
		case 0x006D73696C616E6F:return 1;
		case 0x007473696C616E6F:return 1;
		case 0x007974696C616E6F:return 1;
		default:return 0;
		}
	case 0x69746E6963736E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E6974616C6C:return 1;
		default:return 0;
		}
	case 0x69746E6F636E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F697461756E:return 1;
		default:return 0;
		}
	case 0x69746E6F636F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F697461756E:return 1;
		default:return 0;
		}
	case 0x69746E6F63736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F697461756E:return 1;
		case 0x00796C73756F756E:return 1;
		default:return 0;
		}
	case 0x69746E756F626E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C7566:return 1;
		default:return 0;
		}
	case 0x69746F72656C6373:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00736978796E6F63:return 1;
		case 0x00796D6F74636563:return 1;
		default:return 0;
		}
	case 0x6974706563726570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696C616E6F:return 1;
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6974706563737573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6974706572727573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C73756F6974:return 1;
		default:return 0;
		}
	case 0x6974706D75726373:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x6974706D75737361:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x697470726F736261:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697274656D6F:return 1;
		default:return 0;
		}
	case 0x6974707572726F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6974726168746163:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C6163:return 1;
		default:return 0;
		}
	case 0x69747261706E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00706968736E6173:return 1;
		default:return 0;
		}
	case 0x6974726570736576:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E696E6F696C:return 1;
		default:return 0;
		}
	case 0x6974726576616E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6974726576627573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616C6C6963:return 1;
		default:return 0;
		}
	case 0x69747265766E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6974726F706F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696C616E6F:return 1;
		case 0x00796C6574616E6F:return 1;
		case 0x007974696C616E6F:return 1;
		default:return 0;
		}
	case 0x6974726F746E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697473696E6F:return 1;
		default:return 0;
		}
	case 0x6974736163726173:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C6163:return 1;
		default:return 0;
		}
	case 0x69747361746E6166:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C6163:return 1;
		default:return 0;
		}
	case 0x6974736567677573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6974736575716E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C676E696E6F:return 1;
		default:return 0;
		}
	case 0x69747369646E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616C6C:return 1;
		default:return 0;
		}
	case 0x6974736965687461:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C6163:return 1;
		default:return 0;
		}
	case 0x6974736968706F73:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C6163:return 1;
		default:return 0;
		}
	case 0x6974736972746170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C6163:return 1;
		default:return 0;
		}
	case 0x6974736E69657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616C6C:return 1;
		default:return 0;
		}
	case 0x6974737265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007473696E6F6974:return 1;
		case 0x00796C73756F6974:return 1;
		default:return 0;
		}
	case 0x69747375626D6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x69747375626D7572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x697474656E6E6562:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F65636174:return 1;
		default:return 0;
		}
	case 0x6974756163657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x6974756165626E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C7566:return 1;
		default:return 0;
		}
	case 0x6974756C6F766572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6972616E6F:return 1;
		default:return 0;
		}
	case 0x697567646F6F6C62:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E69746C:return 1;
		default:return 0;
		}
	case 0x6975676E61736E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C73756F656E:return 1;
		default:return 0;
		}
	case 0x6975677369646E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646573:return 1;
		default:return 0;
		}
	case 0x69757163616E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065636E65637365:return 1;
		default:return 0;
		}
	case 0x6975716F6375656C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6972617A696E:return 1;
		default:return 0;
		}
	case 0x69766172746E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616369646E:return 1;
		default:return 0;
		}
	case 0x6976657269746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007473696E6F6973:return 1;
		default:return 0;
		}
	case 0x697669646E696564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657A696C617564:return 1;
		default:return 0;
		}
	case 0x697669646E696E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657A696C617564:return 1;
		default:return 0;
		}
	case 0x6976697669746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974636573:return 1;
		default:return 0;
		}
	case 0x697669766F747561:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974636573:return 1;
		default:return 0;
		}
	case 0x69766F6475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00797469736F6373:return 1;
		default:return 0;
		}
	case 0x69766F72706E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6169746E6564:return 1;
		default:return 0;
		}
	case 0x6976726573627573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E746E65:return 1;
		default:return 0;
		}
	case 0x6977747265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C676E697473:return 1;
		default:return 0;
		}
	case 0x69786F6461726170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C6163:return 1;
		default:return 0;
		}
	case 0x6978756C666E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x6A64617265646E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E656D747375:return 1;
		default:return 0;
		}
	case 0x6A6F696E6F6D6D61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657469736F7261:return 1;
		default:return 0;
		}
	case 0x6A6F746E65677261:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657469736F7261:return 1;
		default:return 0;
		}
	case 0x6B6174736E696170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E676E69:return 1;
		default:return 0;
		}
	case 0x6B696C7265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00646F6F68696C65:return 1;
		default:return 0;
		}
	case 0x6B6C617265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696E696C61:return 1;
		default:return 0;
		}
	case 0x6B6C617265707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696E696C61:return 1;
		default:return 0;
		}
	case 0x6B6E697268736E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x6B6F727463656C65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073636974656E69:return 1;
		default:return 0;
		}
	case 0x6B736E6564726F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E69646C6F69:return 1;
		default:return 0;
		}
	case 0x6C6162696E6E6163:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6C61626972746564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6C61626F6379786F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E696D6D6174:return 1;
		default:return 0;
		}
	case 0x6C6163696D656863:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6C616369706F7274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6C61636F6C657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6C61636F72626966:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F65726163:return 1;
		default:return 0;
		}
	case 0x6C6163736E617274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079636E65637365:return 1;
		default:return 0;
		}
	case 0x6C61656A7265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x6C61657065726E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x6C61657065727269:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x6C61657265687465:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6C61657A7265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x6C61667473657263:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6E656C:return 1;
		default:return 0;
		}
	case 0x6C61676172747361:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61696269746F:return 1;
		default:return 0;
		}
	case 0x6C61687065636564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6C61687065636E65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006169687461706F:return 1;
		case 0x006369687461706F:return 1;
		case 0x0063697274656D6F:return 1;
		case 0x006C616E6970736F:return 1;
		case 0x007369736F79706F:return 1;
		case 0x007369737065736F:return 1;
		case 0x007968706172676F:return 1;
		default:return 0;
		}
	case 0x6C6168746870616E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6C616962616C6564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6C6169636966666F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6C6169636F736564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6C61697265706D69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6C6169726574616D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369747369:return 1;
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6C61697265747261:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6C6169726F6D656D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6C616E696D726574:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6C616E6F69676572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6C616E6F6974616E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6C616E6F69746172:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369747369:return 1;
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6C616E6F73726570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6C616E7265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6C616E7265747865:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6C616E756D6D6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6C616F63696C6973:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616E696D75:return 1;
		default:return 0;
		}
	case 0x6C616F69726F6863:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696F746E616C:return 1;
		case 0x0064696F746E616C:return 1;
		case 0x0073696F746E616C:return 1;
		default:return 0;
		}
	case 0x6C61706F6962616C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657A696C617461:return 1;
		default:return 0;
		}
	case 0x6C61726265726563:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6C61726361736564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6C61726765746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6C61727574747567:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6C61736172746574:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006564696C796369:return 1;
		default:return 0;
		}
	case 0x6C61736F69646F73:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616C796369:return 1;
		default:return 0;
		}
	case 0x6C61737265707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617669:return 1;
		default:return 0;
		}
	case 0x6C61746970736F68:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6C61746E6569726F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6C6174726F6D6D69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6C61747369726570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x6C61757361636564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6C61757369766572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6C61757463616572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6C61757865736564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6C61766E6F636572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065636E65637365:return 1;
		default:return 0;
		}
	case 0x6C61766E6F737261:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6C62617473656E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6261687369:return 1;
		case 0x00746E656D687369:return 1;
		default:return 0;
		}
	case 0x6C62617473656F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E656D687369:return 1;
		default:return 0;
		}
	case 0x6C62696269746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00797274616C6F69:return 1;
		default:return 0;
		}
	case 0x6C626F6369726176:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F7261687065:return 1;
		default:return 0;
		}
	case 0x6C626F68706D796C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369736F747361:return 1;
		default:return 0;
		}
	case 0x6C626F6C796B6E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F7261687065:return 1;
		default:return 0;
		}
	case 0x6C626F72656C6373:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696D65747361:return 1;
		default:return 0;
		}
	case 0x6C626F7265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616769:return 1;
		default:return 0;
		}
	case 0x6C636172746E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657369776B636F:return 1;
		default:return 0;
		}
	case 0x6C63617463657073:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E696B616D65:return 1;
		default:return 0;
		}
	case 0x6C636E697265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616E69:return 1;
		default:return 0;
		}
	case 0x6C636F6475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369737361:return 1;
		default:return 0;
		}
	case 0x6C636F6863797370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0074736963696E69:return 1;
		default:return 0;
		}
	case 0x6C63736F64697269:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796D6F746F7265:return 1;
		default:return 0;
		}
	case 0x6C6469616C796177:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E737365:return 1;
		default:return 0;
		}
	case 0x6C65636172746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C72616C756C:return 1;
		default:return 0;
		}
	case 0x6C65636172747865:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C72616C756C:return 1;
		default:return 0;
		}
	case 0x6C656363616E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617265:return 1;
		default:return 0;
		}
	case 0x6C65636976726573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E737365:return 1;
		default:return 0;
		}
	case 0x6C65636F6E656461:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00736974696C756C:return 1;
		default:return 0;
		}
	case 0x6C65636F7274696E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369736F6C756C:return 1;
		default:return 0;
		}
	case 0x6C65646F76616C63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756564696F74:return 1;
		default:return 0;
		}
	case 0x6C6566656C626174:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0070696873776F6C:return 1;
		default:return 0;
		}
	case 0x6C65686F746F6870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0068706172676F69:return 1;
		case 0x00726574656D6F69:return 1;
		default:return 0;
		}
	case 0x6C6568746F646E65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00616D6F796D6F69:return 1;
		case 0x00636974796C6F69:return 1;
		case 0x006E6973796C6F69:return 1;
		case 0x006E69786F746F69:return 1;
		default:return 0;
		}
	case 0x6C65687974616C70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00636968746E696D:return 1;
		default:return 0;
		}
	case 0x6C656C6C61726170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369706F72746F:return 1;
		case 0x0064657672656E69:return 1;
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6C656D6172746C75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6F68636E61:return 1;
		default:return 0;
		}
	case 0x6C656F6475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61726F746365:return 1;
		default:return 0;
		}
	case 0x6C65706F69646172:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00797274656D6976:return 1;
		default:return 0;
		}
	case 0x6C6572757361656D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E737365:return 1;
		default:return 0;
		}
	case 0x6C65736172746574:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E6F646F6E65:return 1;
		default:return 0;
		}
	case 0x6C65736E65666564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E737365:return 1;
		default:return 0;
		}
	case 0x6C65736F70727570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E737365:return 1;
		default:return 0;
		}
	case 0x6C6573706F707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061697365687061:return 1;
		default:return 0;
		}
	case 0x6C6573726F6D6572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E737365:return 1;
		default:return 0;
		}
	case 0x6C65746E69627573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F697463656C:return 1;
		case 0x007275746967696C:return 1;
		default:return 0;
		}
	case 0x6C65746E69657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065636E6567696C:return 1;
		case 0x006C61757463656C:return 1;
		default:return 0;
		}
	case 0x6C65746E696E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065636E6567696C:return 1;
		case 0x006C61757463656C:return 1;
		default:return 0;
		}
	case 0x6C65746E6973696D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065636E6567696C:return 1;
		case 0x00656C626967696C:return 1;
		default:return 0;
		}
	case 0x6C65746F69636561:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065726F70736F69:return 1;
		default:return 0;
		}
	case 0x6C65746F69646172:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696E6F687065:return 1;
		case 0x0079687061726765:return 1;
		default:return 0;
		}
	case 0x6C65746F69676E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061697361746365:return 1;
		default:return 0;
		}
	case 0x6C65746F6E657473:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079687061726765:return 1;
		default:return 0;
		}
	case 0x6C65746F7263696D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696E6F687065:return 1;
		default:return 0;
		}
	case 0x6C65746F746F6870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369706F637365:return 1;
		case 0x0079687061726765:return 1;
		default:return 0;
		}
	case 0x6C6575716E697571:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E696C75636F:return 1;
		default:return 0;
		}
	case 0x6C666E697265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6169746E6575:return 1;
		default:return 0;
		}
	case 0x6C67697264617571:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072616C75646E61:return 1;
		default:return 0;
		}
	case 0x6C676C796874656D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6C6F636F6379:return 1;
		default:return 0;
		}
	case 0x6C676C796E656870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696C79786F79:return 1;
		default:return 0;
		}
	case 0x6C676E696E61656D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E737365:return 1;
		default:return 0;
		}
	case 0x6C676F7265746568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065736F6C75626F:return 1;
		default:return 0;
		}
	case 0x6C676F7469637865:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072616C75646E61:return 1;
		default:return 0;
		}
	case 0x6C6861646C656A6B:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6C6863616D6F7473:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E737365:return 1;
		default:return 0;
		}
	case 0x6C68636F72647968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369727561726F:return 1;
		default:return 0;
		}
	case 0x6C68636F7274696E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D726F666F726F:return 1;
		default:return 0;
		}
	case 0x6C69626168736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617469:return 1;
		default:return 0;
		}
	case 0x6C696269736E6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6C69636E6F636572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x6C6963756D6E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6E696761:return 1;
		default:return 0;
		}
	case 0x6C69666172746C75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6261726574:return 1;
		case 0x006E6F6974617274:return 1;
		default:return 0;
		}
	case 0x6C69667265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007261746E656D61:return 1;
		default:return 0;
		}
	case 0x6C6966736E617274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617274:return 1;
		default:return 0;
		}
	case 0x6C69687068637261:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00726568706F736F:return 1;
		default:return 0;
		}
	case 0x6C696870696D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00636968706F736F:return 1;
		case 0x00747369676F6C6F:return 1;
		default:return 0;
		}
	case 0x6C69687069746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00636968706F736F:return 1;
		default:return 0;
		}
	case 0x6C6968706F656874:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00636968706F736F:return 1;
		default:return 0;
		}
	case 0x6C6968706F726561:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007473696C657461:return 1;
		default:return 0;
		}
	case 0x6C696D6F7263696D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00726574656D696C:return 1;
		default:return 0;
		}
	case 0x6C69707265746163:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656B696C72616C:return 1;
		default:return 0;
		}
	case 0x6C6972627265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C746E61696C:return 1;
		default:return 0;
		}
	case 0x6C69726574736564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6C6973736F666E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F72656669:return 1;
		default:return 0;
		}
	case 0x6C69747265666572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6C69747569746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E616972617469:return 1;
		default:return 0;
		}
	case 0x6C6975716E617274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		case 0x00796C676E697A69:return 1;
		default:return 0;
		}
	case 0x6C69766963657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6C6C6163696D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E616967797069:return 1;
		default:return 0;
		}
	case 0x6C6C61666E696E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696269:return 1;
		default:return 0;
		}
	case 0x6C6C6174656D6E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369677275:return 1;
		default:return 0;
		}
	case 0x6C6C617473797263:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697274656D6F:return 1;
		case 0x006E6F6974617A69:return 1;
		case 0x0073756F72656669:return 1;
		case 0x0073756F72656769:return 1;
		case 0x007968706172676F:return 1;
		default:return 0;
		}
	case 0x6C6C656265726563:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E6970736F:return 1;
		case 0x006C61726275726F:return 1;
		case 0x00786574726F636F:return 1;
		default:return 0;
		}
	case 0x6C6C6567616C6665:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F72656669:return 1;
		default:return 0;
		}
	case 0x6C6C656D616C7565:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0068636E61726269:return 1;
		default:return 0;
		}
	case 0x6C6C656D61757173:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F72656669:return 1;
		default:return 0;
		}
	case 0x6C6C6570696D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079746964696375:return 1;
		default:return 0;
		}
	case 0x6C6C657070616E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x6C6C65746E696E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C746E656769:return 1;
		default:return 0;
		}
	case 0x6C6C696D696D6564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657269616E6F69:return 1;
		default:return 0;
		}
	case 0x6C6C696D74736F70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E616972616E65:return 1;
		default:return 0;
		}
	case 0x6C6C6972626D6966:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F72656669:return 1;
		default:return 0;
		}
	case 0x6C6C697265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065746172747375:return 1;
		default:return 0;
		}
	case 0x6C6C697369646E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064656E6F697375:return 1;
		default:return 0;
		}
	case 0x6C6C69736E617274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616E696D75:return 1;
		default:return 0;
		}
	case 0x6C6C69746E696373:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C676E697461:return 1;
		default:return 0;
		}
	case 0x6C6C6F63696D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6269737061:return 1;
		default:return 0;
		}
	case 0x6C6C6F636F747561:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616D69:return 1;
		default:return 0;
		}
	case 0x6C6C6F7069757165:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E746E65:return 1;
		default:return 0;
		}
	case 0x6C6C6F72746E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x6C6C79736F707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369747369676F:return 1;
		default:return 0;
		}
	case 0x6C6C7973796C6F70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369747369676F:return 1;
		case 0x006D736963696261:return 1;
		case 0x0079746963696261:return 1;
		default:return 0;
		}
	case 0x6C6E616D6B726F77:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656B69:return 1;
		default:return 0;
		}
	case 0x6C6E6F6973736170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E737365:return 1;
		default:return 0;
		}
	case 0x6C6E6F69746F6D65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E737365:return 1;
		default:return 0;
		}
	case 0x6C6F626968706D61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F72656669:return 1;
		default:return 0;
		}
	case 0x6C6F626D79736572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6C6F636172746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616967656C:return 1;
		default:return 0;
		}
	case 0x6C6F636172747865:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616967656C:return 1;
		default:return 0;
		}
	case 0x6C6F6365726E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F697463656C:return 1;
		default:return 0;
		}
	case 0x6C6F636F7263696D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061726574706F65:return 1;
		default:return 0;
		}
	case 0x6C6F636F746F6870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0068706172676F6C:return 1;
		default:return 0;
		}
	case 0x6C6F636F746F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6C6F637265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616967656C:return 1;
		case 0x00796C6C61696E6F:return 1;
		default:return 0;
		}
	case 0x6C6F63736E617274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F697461726F:return 1;
		default:return 0;
		}
	case 0x6C6F666172707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F65636169:return 1;
		default:return 0;
		}
	case 0x6C6F666172746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F65636169:return 1;
		default:return 0;
		}
	case 0x6C6F666172747865:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F65636169:return 1;
		default:return 0;
		}
	case 0x6C6F66646E696C62:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646564:return 1;
		default:return 0;
		}
	case 0x6C6F666565726874:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646564:return 1;
		default:return 0;
		}
	case 0x6C6F666972706163:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F65636169:return 1;
		default:return 0;
		}
	case 0x6C6F667265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F65636169:return 1;
		default:return 0;
		}
	case 0x6C6F667265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072616C7563696C:return 1;
		case 0x0073756F65636169:return 1;
		default:return 0;
		}
	case 0x6C6F686369726570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073697469676E61:return 1;
		default:return 0;
		}
	case 0x6C6F686369746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696772656E69:return 1;
		default:return 0;
		}
	case 0x6C6F68636E6F7262:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00736974696D6D65:return 1;
		default:return 0;
		}
	case 0x6C6F686572616873:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0070696873726564:return 1;
		default:return 0;
		}
	case 0x6C6F686573756F68:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0070696873726564:return 1;
		default:return 0;
		}
	case 0x6C6F6D6F72726566:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D756E65646279:return 1;
		default:return 0;
		}
	case 0x6C6F6F667265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E687369:return 1;
		default:return 0;
		}
	case 0x6C6F706F6D736F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657A696E617469:return 1;
		case 0x006D73696E617469:return 1;
		default:return 0;
		}
	case 0x6C6F706F7274656D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616E617469:return 1;
		case 0x00657A696E617469:return 1;
		case 0x006D73696E617469:return 1;
		default:return 0;
		}
	case 0x6C6F707265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6576697461:return 1;
		default:return 0;
		}
	case 0x6C6F727463656C65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A79:return 1;
		default:return 0;
		}
	case 0x6C6F7274706D6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007069687372656C:return 1;
		default:return 0;
		}
	case 0x6C6F72797472616D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369747369676F:return 1;
		default:return 0;
		}
	case 0x6C6F736E6F636572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616469:return 1;
		default:return 0;
		}
	case 0x6C6F736E6F636E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x6C6F736E6F636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E6974616469:return 1;
		case 0x006E6F6974616469:return 1;
		default:return 0;
		}
	case 0x6C6F737265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696275:return 1;
		default:return 0;
		}
	case 0x6C6F737369646E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696275:return 1;
		default:return 0;
		}
	case 0x6C6F746163696C70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065736F6E756361:return 1;
		default:return 0;
		}
	case 0x6C6F746E6F6E6574:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00736974696D6D65:return 1;
		default:return 0;
		}
	case 0x6C6F747265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617265:return 1;
		default:return 0;
		}
	case 0x6C6F766F7263696D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697274656D75:return 1;
		default:return 0;
		}
	case 0x6C6F767265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6E696D75:return 1;
		default:return 0;
		}
	case 0x6C70696468637261:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0074736974616D6F:return 1;
		default:return 0;
		}
	case 0x6C706D61696D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C756163697865:return 1;
		default:return 0;
		}
	case 0x6C706D65746E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6576697461:return 1;
		case 0x00796C676E697461:return 1;
		default:return 0;
		}
	case 0x6C706D6578656E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6261696669:return 1;
		default:return 0;
		}
	case 0x6C706D6F63657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616369:return 1;
		case 0x007373656E657465:return 1;
		default:return 0;
		}
	case 0x6C706D6F636E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065636E61736961:return 1;
		default:return 0;
		}
	case 0x6C706D7563726963:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616369:return 1;
		default:return 0;
		}
	case 0x6C706E6F6D6D6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656361:return 1;
		default:return 0;
		}
	case 0x6C706F656C63756E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00636974616D7361:return 1;
		default:return 0;
		}
	case 0x6C706F68706F7274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00636974616D7361:return 1;
		default:return 0;
		}
	case 0x6C706F6D75656E70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073697469727565:return 1;
		default:return 0;
		}
	case 0x6C706F726F6C6863:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616E697461:return 1;
		case 0x006574696E697461:return 1;
		case 0x0073756F6E697461:return 1;
		default:return 0;
		}
	case 0x6C706F7274736167:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616369:return 1;
		case 0x0073697469727565:return 1;
		default:return 0;
		}
	case 0x6C70707573657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61746E656D65:return 1;
		case 0x006E6F6974616369:return 1;
		default:return 0;
		}
	case 0x6C707075736E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616369:return 1;
		default:return 0;
		}
	case 0x6C70736964657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E656D656361:return 1;
		default:return 0;
		}
	case 0x6C70736F7263616D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696E68636E61:return 1;
		default:return 0;
		}
	case 0x6C70736F7263696D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696E68636E61:return 1;
		default:return 0;
		}
	case 0x6C70757264617571:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065727574616369:return 1;
		case 0x006E6F6974616369:return 1;
		default:return 0;
		}
	case 0x6C7075746E697571:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064656262697269:return 1;
		case 0x0064657672656E69:return 1;
		case 0x006E6F6974616369:return 1;
		default:return 0;
		}
	case 0x6C707865696D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616E61:return 1;
		default:return 0;
		}
	case 0x6C7078657265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616E61:return 1;
		default:return 0;
		}
	case 0x6C72616C706D6574:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656B69:return 1;
		default:return 0;
		}
	case 0x6C7265626D616863:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00706968736E6961:return 1;
		default:return 0;
		}
	case 0x6C72656874616566:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E737365:return 1;
		default:return 0;
		}
	case 0x6C7265746C656873:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E737365:return 1;
		default:return 0;
		}
	case 0x6C726F7373696373:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656B69:return 1;
		default:return 0;
		}
	case 0x6C73736563637573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E737365:return 1;
		default:return 0;
		}
	case 0x6C7461736E617274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E616369746E61:return 1;
		default:return 0;
		}
	case 0x6C74636570736572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E737365:return 1;
		default:return 0;
		}
	case 0x6C746867756F6874:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E737365:return 1;
		default:return 0;
		}
	case 0x6C74726F666D6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E737365:return 1;
		default:return 0;
		}
	case 0x6C74737561687865:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E737365:return 1;
		default:return 0;
		}
	case 0x6C75626174656361:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F72656669:return 1;
		default:return 0;
		}
	case 0x6C75626974736576:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E6970736F:return 1;
		default:return 0;
		}
	case 0x6C75626D6F727473:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F72656669:return 1;
		default:return 0;
		}
	case 0x6C75636172626D75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F72656669:return 1;
		default:return 0;
		}
	case 0x6C75636172697073:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F72656669:return 1;
		default:return 0;
		}
	case 0x6C75636570736E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6576697461:return 1;
		default:return 0;
		}
	case 0x6C75636963736970:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61727574:return 1;
		default:return 0;
		}
	case 0x6C75636972656C6F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61727574:return 1;
		default:return 0;
		}
	case 0x6C756369726F6C66:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61727574:return 1;
		default:return 0;
		}
	case 0x6C756369746E6F6D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064696F726F7069:return 1;
		default:return 0;
		}
	case 0x6C75636974726170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697473697261:return 1;
		default:return 0;
		}
	case 0x6C75636974726F68:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61727574:return 1;
		default:return 0;
		}
	case 0x6C75636974736567:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6576697461:return 1;
		default:return 0;
		}
	case 0x6C756369766C6973:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61727574:return 1;
		default:return 0;
		}
	case 0x6C75636C61636E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x6C75636C61636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C676E697461:return 1;
		default:return 0;
		}
	case 0x6C75637265627574:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006169626F68706F:return 1;
		case 0x006E6F6974617A69:return 1;
		case 0x007373656E73756F:return 1;
		case 0x0073756F72656669:return 1;
		default:return 0;
		}
	case 0x6C75637265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064657461766974:return 1;
		default:return 0;
		}
	case 0x6C75646572636E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x6C756C6C65626D75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F72656669:return 1;
		default:return 0;
		}
	case 0x6C757269766E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F72656669:return 1;
		default:return 0;
		}
	case 0x6C75736F6E67696C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616E6F6870:return 1;
		default:return 0;
		}
	case 0x6C75736F72647968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F72756870:return 1;
		default:return 0;
		}
	case 0x6C75736F7A6E6562:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006564696D696870:return 1;
		default:return 0;
		}
	case 0x6C75737265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657A6972756870:return 1;
		default:return 0;
		}
	case 0x6C7574736F707865:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6576697461:return 1;
		case 0x00796C676E697461:return 1;
		default:return 0;
		}
	case 0x6C796369746C756D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064657265646E69:return 1;
		default:return 0;
		}
	case 0x6C79676E6F727473:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369736F64696F:return 1;
		default:return 0;
		}
	case 0x6C79687069746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697265786F6C:return 1;
		default:return 0;
		}
	case 0x6C7968706F646F70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E69786F746F6C:return 1;
		default:return 0;
		}
	case 0x6C7968706F67797A:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6563616C:return 1;
		default:return 0;
		}
	case 0x6C7968706F6E6F6D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D736963697465:return 1;
		default:return 0;
		}
	case 0x6C79687465697274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E6962697473:return 1;
		default:return 0;
		}
	case 0x6C796874656D6964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E657A6E6562:return 1;
		case 0x00656E696C696E61:return 1;
		default:return 0;
		}
	case 0x6C796E6568706964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006564696D696E65:return 1;
		case 0x00656E616874656D:return 1;
		default:return 0;
		}
	case 0x6C796E6F74656361:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E6F74656361:return 1;
		default:return 0;
		}
	case 0x6C79746F63696E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6E6F6465:return 1;
		default:return 0;
		}
	case 0x6C79746F63697065:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007972616E6F6465:return 1;
		default:return 0;
		}
	case 0x6C79746F63697274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6E6F6465:return 1;
		default:return 0;
		}
	case 0x6C79746F636E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6E6F6465:return 1;
		default:return 0;
		}
	case 0x6C79746F636E7973:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6E6F6465:return 1;
		default:return 0;
		}
	case 0x6C79786F72647968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6C79786F746F6870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007968706172676F:return 1;
		default:return 0;
		}
	case 0x6D61636964657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61746E65:return 1;
		default:return 0;
		}
	case 0x6D61667265746170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C7261696C69:return 1;
		default:return 0;
		}
	case 0x6D61676F7263616D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657479636F7465:return 1;
		default:return 0;
		}
	case 0x6D61676F7263696D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657479636F7465:return 1;
		default:return 0;
		}
	case 0x6D61677265646E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072657065656B65:return 1;
		default:return 0;
		}
	case 0x6D6168746F72796D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6563616E:return 1;
		default:return 0;
		}
	case 0x6D616C7265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616E69:return 1;
		default:return 0;
		}
	case 0x6D616D6172666E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007972616C6C696D:return 1;
		default:return 0;
		}
	case 0x6D616D6F72746572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007972616C6C696D:return 1;
		default:return 0;
		}
	case 0x6D616D7265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007972616C6C696D:return 1;
		default:return 0;
		}
	case 0x6D616D7563726963:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00726F74616C7562:return 1;
		case 0x0073756F69676162:return 1;
		default:return 0;
		}
	case 0x6D616E79646F796D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00726574656D6F69:return 1;
		default:return 0;
		}
	case 0x6D61726361736E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61746E65:return 1;
		default:return 0;
		}
	case 0x6D6172636F6E7963:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F65636162:return 1;
		default:return 0;
		}
	case 0x6D6172646F6C656D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D736963697461:return 1;
		default:return 0;
		}
	case 0x6D617265706D6574:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61746E65:return 1;
		default:return 0;
		}
	case 0x6D61726769746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61636974616D:return 1;
		default:return 0;
		}
	case 0x6D6172676F6E6F6D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61636974616D:return 1;
		default:return 0;
		}
	case 0x6D61727968746964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636962:return 1;
		default:return 0;
		}
	case 0x6D61746E6F636564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616E69:return 1;
		default:return 0;
		}
	case 0x6D61757173756C70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0074636566726570:return 1;
		default:return 0;
		}
	case 0x6D64617265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617269:return 1;
		default:return 0;
		}
	case 0x6D656164796C6F70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697473696E6F:return 1;
		default:return 0;
		}
	case 0x6D65646172746C75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369746172636F:return 1;
		default:return 0;
		}
	case 0x6D65647265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369746172636F:return 1;
		default:return 0;
		}
	case 0x6D65647265707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369746172636F:return 1;
		default:return 0;
		}
	case 0x6D65656465727269:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x6D65656C656E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007972616E79736F:return 1;
		default:return 0;
		}
	case 0x6D65657365626E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E676E69:return 1;
		default:return 0;
		}
	case 0x6D65676E7972616C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073697861726870:return 1;
		default:return 0;
		}
	case 0x6D656868706C7573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E69626F6C676F:return 1;
		default:return 0;
		}
	case 0x6D65686F62726163:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E69626F6C676F:return 1;
		default:return 0;
		}
	case 0x6D65686F72647968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007861726F68746F:return 1;
		default:return 0;
		}
	case 0x6D65686F746F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E617265747069:return 1;
		case 0x006E6F7265747069:return 1;
		default:return 0;
		}
	case 0x6D65687073616C62:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x6D65687075656E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369747369:return 1;
		default:return 0;
		}
	case 0x6D656D6172746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6E617262:return 1;
		default:return 0;
		}
	case 0x6D656D6F626C7562:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6E617262:return 1;
		default:return 0;
		}
	case 0x6D656D6F72626966:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6E617262:return 1;
		default:return 0;
		}
	case 0x6D656D7265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6E617262:return 1;
		default:return 0;
		}
	case 0x6D656F6475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696E6F797262:return 1;
		case 0x006C616E6F69746F:return 1;
		default:return 0;
		}
	case 0x6D65726874657275:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073697861726870:return 1;
		default:return 0;
		}
	case 0x6D65736F6C616973:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079676F6C6F6965:return 1;
		default:return 0;
		}
	case 0x6D65737265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616E69:return 1;
		default:return 0;
		}
	case 0x6D65737369646E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C676E696C62:return 1;
		default:return 0;
		}
	case 0x6D65746E6F636572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616C70:return 1;
		default:return 0;
		}
	case 0x6D65747265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617470:return 1;
		default:return 0;
		}
	case 0x6D65747379736E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E697A697461:return 1;
		default:return 0;
		}
	case 0x6D67697361726170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756D73697461:return 1;
		default:return 0;
		}
	case 0x6D67697369726570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369746964696F:return 1;
		default:return 0;
		}
	case 0x6D69646F706F7369:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6870726F:return 1;
		default:return 0;
		}
	case 0x6D696C7265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617469:return 1;
		default:return 0;
		}
	case 0x6D696E616E67616D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x6D696F6475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616974726170:return 1;
		default:return 0;
		}
	case 0x6D69726365726E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065766974616E69:return 1;
		default:return 0;
		}
	case 0x6D697265706F7369:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369727465:return 1;
		default:return 0;
		}
	case 0x6D69726F736E6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072616C75637375:return 1;
		default:return 0;
		}
	case 0x6D697270696D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6E656769:return 1;
		default:return 0;
		}
	case 0x6D69737265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079746963696C70:return 1;
		default:return 0;
		}
	case 0x6D697373616C616D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616C69:return 1;
		default:return 0;
		}
	case 0x6D697373616E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E6974616C69:return 1;
		case 0x006E6F6974616C69:return 1;
		default:return 0;
		}
	case 0x6D69737361736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065766974616C69:return 1;
		case 0x006E6F6974616C69:return 1;
		default:return 0;
		}
	case 0x6D69746E65736E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61746E65:return 1;
		default:return 0;
		}
	case 0x6D6974737265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065766974616C75:return 1;
		case 0x006E6F6974616C75:return 1;
		default:return 0;
		}
	case 0x6D69786F72707061:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6576697461:return 1;
		default:return 0;
		}
	case 0x6D6C61687468706F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00616967656C706F:return 1;
		case 0x00636967656C706F:return 1;
		case 0x006369706F63736F:return 1;
		case 0x0063697274656D6F:return 1;
		case 0x006C616369727465:return 1;
		case 0x0073636972746169:return 1;
		case 0x007369736174736F:return 1;
		case 0x007369736F74706F:return 1;
		case 0x00747369676F6C6F:return 1;
		case 0x007968706172676F:return 1;
		case 0x00797473616C706F:return 1;
		default:return 0;
		}
	case 0x6D6D617267616964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E616963697461:return 1;
		default:return 0;
		}
	case 0x6D6D6F6363616E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E697461646F:return 1;
		default:return 0;
		}
	case 0x6D6D6F6365726E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6261646E65:return 1;
		default:return 0;
		}
	case 0x6D6D6F6374736F70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C617275737369:return 1;
		case 0x00746E6163696E75:return 1;
		default:return 0;
		}
	case 0x6D6D7572646D7568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E687369:return 1;
		default:return 0;
		}
	case 0x6D6D7973696D6568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369727465:return 1;
		default:return 0;
		}
	case 0x6D6D797369746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369727465:return 1;
		default:return 0;
		}
	case 0x6D6D79736F6C6F68:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369727465:return 1;
		default:return 0;
		}
	case 0x6D6D79736F6E6F6D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369727465:return 1;
		default:return 0;
		}
	case 0x6D6D79736F72656D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369727465:return 1;
		default:return 0;
		}
	case 0x6D6D7973796C6F70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369727465:return 1;
		default:return 0;
		}
	case 0x6D6E6F7269766E65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61746E65:return 1;
		default:return 0;
		}
	case 0x6D6F626168637261:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616E69:return 1;
		default:return 0;
		}
	case 0x6D6F6361726F6874:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061696E79646F79:return 1;
		default:return 0;
		}
	case 0x6D6F636172707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006572757373696D:return 1;
		default:return 0;
		}
	case 0x6D6F6363616E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E69796E6170:return 1;
		default:return 0;
		}
	case 0x6D6F63656273696D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E676E69:return 1;
		default:return 0;
		}
	case 0x6D6F636568746970:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696870726F:return 1;
		default:return 0;
		}
	case 0x6D6F636874726F66:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E676E69:return 1;
		default:return 0;
		}
	case 0x6D6F636965646966:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F697373696D:return 1;
		case 0x007972617373696D:return 1;
		default:return 0;
		}
	case 0x6D6F636967617274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C616369:return 1;
		default:return 0;
		}
	case 0x6D6F636973726F64:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006572757373696D:return 1;
		default:return 0;
		}
	case 0x6D6F636973796870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696870726F:return 1;
		default:return 0;
		}
	case 0x6D6F636976726563:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072616C75637375:return 1;
		default:return 0;
		}
	case 0x6D6F636F62727574:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00726F7373657270:return 1;
		default:return 0;
		}
	case 0x6D6F636F7263696D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974737562:return 1;
		default:return 0;
		}
	case 0x6D6F636F746F6870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974737562:return 1;
		default:return 0;
		}
	case 0x6D6F637265646E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006465646E756F70:return 1;
		default:return 0;
		}
	case 0x6D6F637265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61696372656D:return 1;
		case 0x00797261746E656D:return 1;
		default:return 0;
		}
	case 0x6D6F637265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C62616E6F6D:return 1;
		case 0x00656C6261726170:return 1;
		case 0x006E6F697373696D:return 1;
		case 0x006E6F7369726170:return 1;
		case 0x0079746978656C70:return 1;
		default:return 0;
		}
	case 0x6D6F637369646E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6261746966:return 1;
		default:return 0;
		}
	case 0x6D6F65676174656D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369727465:return 1;
		default:return 0;
		}
	case 0x6D6F676E696E656D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00636974696C6379:return 1;
		case 0x00736974696C6579:return 1;
		default:return 0;
		}
	case 0x6D6F6870736F6870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696462796C6F:return 1;
		default:return 0;
		}
	case 0x6D6F687461666E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x6D6F696469736162:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F74656379:return 1;
		default:return 0;
		}
	case 0x6D6F69746E616E65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696870726F:return 1;
		case 0x0073756F6870726F:return 1;
		default:return 0;
		}
	case 0x6D6F6C6168706D6F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696172617365:return 1;
		default:return 0;
		}
	case 0x6D6F6C656870656E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369727465:return 1;
		default:return 0;
		}
	case 0x6D6F6E616863656D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696870726F:return 1;
		default:return 0;
		}
	case 0x6D6F6E61766C6167:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00636974656E6761:return 1;
		case 0x006C616369727465:return 1;
		default:return 0;
		}
	case 0x6D6F6E6564627573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616E69:return 1;
		default:return 0;
		}
	case 0x6D6F6E6F67697274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369727465:return 1;
		default:return 0;
		}
	case 0x6D6F6E6F68747970:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6870726F:return 1;
		default:return 0;
		}
	case 0x6D6F6E6F72746170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079676F6C6F7461:return 1;
		default:return 0;
		}
	case 0x6D6F72626F6E6F6D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E6F74656361:return 1;
		case 0x006E6F6974616E69:return 1;
		default:return 0;
		}
	case 0x6D6F72656D6F7369:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696870726F:return 1;
		default:return 0;
		}
	case 0x6D6F726574736167:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F74656379:return 1;
		default:return 0;
		}
	case 0x6D6F726574737968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6870726F:return 1;
		default:return 0;
		}
	case 0x6D6F726863737964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00616973706F7461:return 1;
		case 0x00636974706F7461:return 1;
		default:return 0;
		}
	case 0x6D6F726863797370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369727465:return 1;
		default:return 0;
		}
	case 0x6D6F726874797265:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006169676C616C65:return 1;
		default:return 0;
		}
	case 0x6D6F72707265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C746E656E69:return 1;
		default:return 0;
		}
	case 0x6D6F727463656C65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00636974656E6761:return 1;
		case 0x006C616369727465:return 1;
		case 0x006D73696C69626F:return 1;
		case 0x0072616C75637375:return 1;
		case 0x007974697669746F:return 1;
		default:return 0;
		}
	case 0x6D6F736F6C6C6163:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E69677261:return 1;
		default:return 0;
		}
	case 0x6D6F74616D726564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072616C75637375:return 1;
		default:return 0;
		}
	case 0x6D6F74656C656B73:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072616C75637375:return 1;
		default:return 0;
		}
	case 0x6D6F74656E67616D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369727465:return 1;
		default:return 0;
		}
	case 0x6D6F746968706C61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6870726F:return 1;
		default:return 0;
		}
	case 0x6D6F746F68636964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6D6F747375636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E697261:return 1;
		default:return 0;
		}
	case 0x6D6F796874686369:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6870726F:return 1;
		default:return 0;
		}
	case 0x6D706F6C65766564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61746E65:return 1;
		default:return 0;
		}
	case 0x6D7265646F707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00736973796C636F:return 1;
		default:return 0;
		}
	case 0x6D7265646F726561:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061697361746365:return 1;
		default:return 0;
		}
	case 0x6D726568746F7369:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369687461626F:return 1;
		default:return 0;
		}
	case 0x6D72657465646572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616E69:return 1;
		default:return 0;
		}
	case 0x6D72657465646E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697473696E69:return 1;
		case 0x0065766974616E69:return 1;
		case 0x006E6F6974616E69:return 1;
		case 0x00796C6574616E69:return 1;
		default:return 0;
		}
	case 0x6D72657465646E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616E69:return 1;
		default:return 0;
		}
	case 0x6D7265746E696E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E6979727261:return 1;
		case 0x00796C6465747469:return 1;
		default:return 0;
		}
	case 0x6D7265746E756F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065676169727261:return 1;
		case 0x00656C6261646E61:return 1;
		case 0x0072657675656E61:return 1;
		case 0x00746E656D65766F:return 1;
		default:return 0;
		}
	case 0x6D726F6665727269:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x6D7361746E616870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6169726F6761:return 1;
		case 0x006E6169726F6761:return 1;
		case 0x00747369726F6761:return 1;
		default:return 0;
		}
	case 0x6D736E6172746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6269737369:return 1;
		default:return 0;
		}
	case 0x6D736E6172746E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064657461726769:return 1;
		case 0x00656C6269737369:return 1;
		default:return 0;
		}
	case 0x6D73796874656C70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007968706172676F:return 1;
		default:return 0;
		}
	case 0x6D747261706D6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61746E65:return 1;
		default:return 0;
		}
	case 0x6D75636361657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616C75:return 1;
		default:return 0;
		}
	case 0x6D75636E65736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E656D726562:return 1;
		default:return 0;
		}
	case 0x6D75637269636E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C7463657073:return 1;
		default:return 0;
		}
	case 0x6D75637269636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064656269726373:return 1;
		case 0x006465636E617473:return 1;
		case 0x00796C7463657073:return 1;
		default:return 0;
		}
	case 0x6D75656E706F7970:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007861726F68746F:return 1;
		default:return 0;
		}
	case 0x6D7568736E617274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616E61:return 1;
		default:return 0;
		}
	case 0x6D756C6C69657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616E69:return 1;
		default:return 0;
		}
	case 0x6D756C6C696E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616E69:return 1;
		default:return 0;
		}
	case 0x6D756D7563726963:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6163696C6962:return 1;
		default:return 0;
		}
	case 0x6D756F7461706568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6163696C6962:return 1;
		default:return 0;
		}
	case 0x6D75736572706E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E676E69:return 1;
		default:return 0;
		}
	case 0x6D757375726F6564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974637564:return 1;
		default:return 0;
		}
	case 0x6D79676F72647968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007363697473616E:return 1;
		default:return 0;
		}
	case 0x6D796C6F6C65796D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657479636F6870:return 1;
		default:return 0;
		}
	case 0x6D796C6F6E656461:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C65636F6870:return 1;
		default:return 0;
		}
	case 0x6D79736968637261:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6163696C6F62:return 1;
		default:return 0;
		}
	case 0x6D79746F72746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00736974696E6170:return 1;
		default:return 0;
		}
	case 0x6E61627275627573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6E61636568746970:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369706F726874:return 1;
		case 0x006469706F726874:return 1;
		default:return 0;
		}
	case 0x6E6163696D6D6570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6E61636C75766564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6E61636E69627573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E6563736564:return 1;
		default:return 0;
		}
	case 0x6E61636E696E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E6563736564:return 1;
		default:return 0;
		}
	case 0x6E616769746C756D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696E6F696C67:return 1;
		default:return 0;
		}
	case 0x6E61676E616D6564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6E61677265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696E6F696C67:return 1;
		default:return 0;
		}
	case 0x6E6167726F657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6E6167726F6C616D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6E6167726F6E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6E6167726F72656D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6E6167726F736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6E6167726F73696D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6E61686E61656C63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646564:return 1;
		default:return 0;
		}
	case 0x6E6168706F637973:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x6E61687265646E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646564:return 1;
		default:return 0;
		}
	case 0x6E61687465697274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E696D616C6F:return 1;
		default:return 0;
		}
	case 0x6E616874726F6873:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646564:return 1;
		default:return 0;
		}
	case 0x6E61687976616568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646564:return 1;
		default:return 0;
		}
	case 0x6E616C6968706E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369706F726874:return 1;
		default:return 0;
		}
	case 0x6E616C6C69737570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C73756F6D69:return 1;
		default:return 0;
		}
	case 0x6E616C6F7461766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616C6F6563:return 1;
		default:return 0;
		}
	case 0x6E616C70696D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065646172676974:return 1;
		default:return 0;
		}
	case 0x6E616D6172666E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072616C75626964:return 1;
		default:return 0;
		}
	case 0x6E616D6D6F636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656B696C726564:return 1;
		case 0x007373656E646564:return 1;
		default:return 0;
		}
	case 0x6E616D6F6C797473:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072616C75626964:return 1;
		default:return 0;
		}
	case 0x6E616D6F7263616D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072616C75626964:return 1;
		default:return 0;
		}
	case 0x6E616D6F7263656E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x6E616D6F72647968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x6E616D6F72746572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072616C75626964:return 1;
		default:return 0;
		}
	case 0x6E616D7265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072616C75626964:return 1;
		default:return 0;
		}
	case 0x6E616D7563726963:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697463726174:return 1;
		default:return 0;
		}
	case 0x6E616F6475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E69726F6874:return 1;
		case 0x006C617274736563:return 1;
		case 0x007369736F6C796B:return 1;
		default:return 0;
		}
	case 0x6E616F65616C6170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369706F726874:return 1;
		default:return 0;
		}
	case 0x6E616F6572796874:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E69786F746974:return 1;
		default:return 0;
		}
	case 0x6E616F68706C7573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696E6F6D6974:return 1;
		default:return 0;
		}
	case 0x6E616F6D72656874:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061697365676C61:return 1;
		default:return 0;
		}
	case 0x6E616F7274736F72:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007972616E6E6574:return 1;
		default:return 0;
		}
	case 0x6E61706D6F636361:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61746E656D69:return 1;
		default:return 0;
		}
	case 0x6E61706F69726573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696D696D6F74:return 1;
		default:return 0;
		}
	case 0x6E61706F6E65696C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697461657263:return 1;
		default:return 0;
		}
	case 0x6E61706F7263696D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0068706172676F74:return 1;
		default:return 0;
		}
	case 0x6E61726574756564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6C616D6F:return 1;
		default:return 0;
		}
	case 0x6E61726770657473:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072656874616664:return 1;
		case 0x00726568746F6D64:return 1;
		default:return 0;
		}
	case 0x6E61727261776E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646574:return 1;
		default:return 0;
		}
	case 0x6E61727461726170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E617372657673:return 1;
		default:return 0;
		}
	case 0x6E617274696D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E6563756C73:return 1;
		case 0x00746E6572617073:return 1;
		default:return 0;
		}
	case 0x6E6172746F747561:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6973756673:return 1;
		case 0x0072656D726F6673:return 1;
		default:return 0;
		}
	case 0x6E617469746E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F72656669:return 1;
		default:return 0;
		}
	case 0x6E61746E65736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E656D656C67:return 1;
		default:return 0;
		}
	case 0x6E61747265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E656D656C67:return 1;
		default:return 0;
		}
	case 0x6E6174736E696F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F656E6174:return 1;
		case 0x00797469656E6174:return 1;
		default:return 0;
		}
	case 0x6E617664616E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F65676174:return 1;
		default:return 0;
		}
	case 0x6E61766461736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F65676174:return 1;
		default:return 0;
		}
	case 0x6E61766569746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6163696C6567:return 1;
		default:return 0;
		}
	case 0x6E61766C61676572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6E617968706D7973:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F72656874:return 1;
		default:return 0;
		}
	case 0x6E65626172746C75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E656C6F7665:return 1;
		default:return 0;
		}
	case 0x6E65627265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E656C6F7665:return 1;
		default:return 0;
		}
	case 0x6E65636172707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F69726F73:return 1;
		default:return 0;
		}
	case 0x6E65636172726173:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F65636169:return 1;
		default:return 0;
		}
	case 0x6E65636172746C75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065677566697274:return 1;
		default:return 0;
		}
	case 0x6E6563636173696D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617574:return 1;
		default:return 0;
		}
	case 0x6E65636E6F636564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617274:return 1;
		default:return 0;
		}
	case 0x6E65636E6F636572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617274:return 1;
		default:return 0;
		}
	case 0x6E65636F696C6568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D736963697274:return 1;
		case 0x0079746963697274:return 1;
		default:return 0;
		}
	case 0x6E65636F7263696D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656D6F736F7274:return 1;
		default:return 0;
		}
	case 0x6E656372656D6E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E697261:return 1;
		default:return 0;
		}
	case 0x6E65637265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065677566697274:return 1;
		default:return 0;
		}
	case 0x6E656462796C6F6D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F72656669:return 1;
		default:return 0;
		}
	case 0x6E65646572636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064656C6C616974:return 1;
		default:return 0;
		}
	case 0x6E656469666E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C616974:return 1;
		default:return 0;
		}
	case 0x6E65646973736966:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F65636174:return 1;
		default:return 0;
		}
	case 0x6E656469766F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696C616974:return 1;
		default:return 0;
		}
	case 0x6E65646F656C6170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079676F6C6F7264:return 1;
		default:return 0;
		}
	case 0x6E65646F67696C6F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061696C676F7264:return 1;
		default:return 0;
		}
	case 0x6E65646F7463616C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00726574656D6973:return 1;
		default:return 0;
		}
	case 0x6E6565777265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E676E69:return 1;
		default:return 0;
		}
	case 0x6E656765646E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617265:return 1;
		default:return 0;
		}
	case 0x6E656765646F796D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617265:return 1;
		default:return 0;
		}
	case 0x6E656765726E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065766974617265:return 1;
		case 0x00676E6974617265:return 1;
		default:return 0;
		}
	case 0x6E65676E7972616C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065706F63736F64:return 1;
		default:return 0;
		}
	case 0x6E65676F72647968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6E65676F72746572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065766974617265:return 1;
		default:return 0;
		}
	case 0x6E65676F7274696E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6E65677265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00797469736F7265:return 1;
		default:return 0;
		}
	case 0x6E65677265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E6974617265:return 1;
		case 0x006E6F6974617265:return 1;
		default:return 0;
		}
	case 0x6E6567746E656F72:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369706F63736F:return 1;
		case 0x006E6F6974617A69:return 1;
		case 0x00747369676F6C6F:return 1;
		case 0x007968706172676F:return 1;
		case 0x0079706172656874:return 1;
		default:return 0;
		}
	case 0x6E656779786F6564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6E65687061726170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E6964697465:return 1;
		default:return 0;
		}
	case 0x6E65687475616E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064657461636974:return 1;
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x6E656963736E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C73756F6974:return 1;
		default:return 0;
		}
	case 0x6E65697265707865:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696C616974:return 1;
		case 0x007473696C616974:return 1;
		default:return 0;
		}
	case 0x6E65697461706D69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F65636174:return 1;
		default:return 0;
		}
	case 0x6E656C626E726F68:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065727968706F64:return 1;
		default:return 0;
		}
	case 0x6E656C707265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C73756F6574:return 1;
		default:return 0;
		}
	case 0x6E656D61646E7566:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C6174:return 1;
		default:return 0;
		}
	case 0x6E656D6167726570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F65636174:return 1;
		default:return 0;
		}
	case 0x6E656D6172636173:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C6174:return 1;
		default:return 0;
		}
	case 0x6E656D6174736574:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C6174:return 1;
		default:return 0;
		}
	case 0x6E656D6572636572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F69746974:return 1;
		default:return 0;
		}
	case 0x6E656D6572637865:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F69746974:return 1;
		default:return 0;
		}
	case 0x6E656D6972746564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C6174:return 1;
		default:return 0;
		}
	case 0x6E656D69746E6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072657A696C6174:return 1;
		default:return 0;
		}
	case 0x6E656D6D6F636E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6261727573:return 1;
		case 0x00796C6261727573:return 1;
		default:return 0;
		}
	case 0x6E656D6D6F636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6261727573:return 1;
		default:return 0;
		}
	case 0x6E656D6F6C65796D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073697469676E69:return 1;
		default:return 0;
		}
	case 0x6E656D6F6E656870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697473696C61:return 1;
		default:return 0;
		}
	case 0x6E656D6F72647968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073697469676E69:return 1;
		default:return 0;
		}
	case 0x6E656D6F7470656C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073697469676E69:return 1;
		default:return 0;
		}
	case 0x6E656D79646F6872:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F65636169:return 1;
		default:return 0;
		}
	case 0x6E656D7968636170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697469676E69:return 1;
		case 0x0073697469676E69:return 1;
		default:return 0;
		}
	case 0x6E656F6C68707974:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073697469726574:return 1;
		default:return 0;
		}
	case 0x6E656F6D75656E70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073697469726574:return 1;
		default:return 0;
		}
	case 0x6E656F7268747261:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079706F63736F64:return 1;
		default:return 0;
		}
	case 0x6E656F7274736167:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697469726574:return 1;
		case 0x0073697469726574:return 1;
		default:return 0;
		}
	case 0x6E65706565726874:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006874726F77796E:return 1;
		default:return 0;
		}
	case 0x6E65706F6C637963:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E6569646174:return 1;
		default:return 0;
		}
	case 0x6E65706F6C6F6373:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D726F66697264:return 1;
		default:return 0;
		}
	case 0x6E657070616E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072616C75636964:return 1;
		default:return 0;
		}
	case 0x6E65707265706E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072616C75636964:return 1;
		default:return 0;
		}
	case 0x6E65707265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6261727465:return 1;
		default:return 0;
		}
	case 0x6E6570736E617274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6261727465:return 1;
		case 0x0072616C75736E69:return 1;
		default:return 0;
		}
	case 0x6E65726566657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696C616974:return 1;
		case 0x007473696C616974:return 1;
		default:return 0;
		}
	case 0x6E65726566666964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657A696C616974:return 1;
		case 0x006E6F6974616974:return 1;
		default:return 0;
		}
	case 0x6E65736E6F636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F656E6174:return 1;
		default:return 0;
		}
	case 0x6E65736F746F6870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072657A69746973:return 1;
		default:return 0;
		}
	case 0x6E65737265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696C617573:return 1;
		case 0x007473696C617573:return 1;
		case 0x007974696C617573:return 1;
		default:return 0;
		}
	case 0x6E65737265707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696C617573:return 1;
		default:return 0;
		}
	case 0x6E65746572706E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C73756F6974:return 1;
		default:return 0;
		}
	case 0x6E6574686375656C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065746967726562:return 1;
		default:return 0;
		}
	case 0x6E65746E6F636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646574:return 1;
		case 0x00796C73756F6974:return 1;
		default:return 0;
		}
	case 0x6E65747265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072616C75636174:return 1;
		default:return 0;
		}
	case 0x6E657473676E7574:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F72656669:return 1;
		default:return 0;
		}
	case 0x6E6575716E697571:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007473696C61696E:return 1;
		default:return 0;
		}
	case 0x6E657664616E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F69746974:return 1;
		default:return 0;
		}
	case 0x6E65766973726F64:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C617274:return 1;
		default:return 0;
		}
	case 0x6E65766F62727574:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00726F74616C6974:return 1;
		default:return 0;
		}
	case 0x6E65767265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696E6F6974:return 1;
		case 0x007473696E6F6974:return 1;
		default:return 0;
		}
	case 0x6E6769647265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6465696669:return 1;
		default:return 0;
		}
	case 0x6E67697365646E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E676E69:return 1;
		default:return 0;
		}
	case 0x6E676973696E6D6F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E6163696669:return 1;
		default:return 0;
		}
	case 0x6E676F6365726E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C676E697A69:return 1;
		default:return 0;
		}
	case 0x6E676F6870616373:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697469687461:return 1;
		default:return 0;
		}
	case 0x6E676F746379726F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61636974736F:return 1;
		default:return 0;
		}
	case 0x6E67757078656E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x6E68636E616C7073:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006169706F746365:return 1;
		case 0x006169736F74706F:return 1;
		case 0x00657275656C706F:return 1;
		case 0x007369736F74706F:return 1;
		case 0x00747369676F6C6F:return 1;
		case 0x007968706172676F:return 1;
		case 0x00796C6167656D6F:return 1;
		default:return 0;
		}
	case 0x6E687465656C6170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00747369676F6C6F:return 1;
		default:return 0;
		}
	case 0x6E69616C706D6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E676E69:return 1;
		default:return 0;
		}
	case 0x6E6961707265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C7566:return 1;
		default:return 0;
		}
	case 0x6E69617274736572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x6E6961746E756F6D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x6E69617474616E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x6E69626D69686F79:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6E69626D6F636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E676E69:return 1;
		default:return 0;
		}
	case 0x6E69636F72647968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E696E6F6863:return 1;
		default:return 0;
		}
	case 0x6E6963756C6C6168:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E6F697461:return 1;
		default:return 0;
		}
	case 0x6E69646F6E6D7967:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F65636169:return 1;
		default:return 0;
		}
	case 0x6E6964726F627573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657461:return 1;
		case 0x00796C676E697461:return 1;
		default:return 0;
		}
	case 0x6E6967616D696E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6576697461:return 1;
		default:return 0;
		}
	case 0x6E696769726F6E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657461:return 1;
		case 0x00796C6576697461:return 1;
		default:return 0;
		}
	case 0x6E696C636F6E6F6D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697274656D6F:return 1;
		default:return 0;
		}
	case 0x6E696C6564657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C746E657571:return 1;
		default:return 0;
		}
	case 0x6E696C6972756C70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696C617567:return 1;
		case 0x007473696C617567:return 1;
		default:return 0;
		}
	case 0x6E696C6974636572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E726165:return 1;
		default:return 0;
		}
	case 0x6E696C7265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697473697567:return 1;
		default:return 0;
		}
	case 0x6E696C756373616D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6E696D6461627573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065746172747369:return 1;
		default:return 0;
		}
	case 0x6E696D6964657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E656D687369:return 1;
		default:return 0;
		}
	case 0x6E696D6F64657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C676E697461:return 1;
		default:return 0;
		}
	case 0x6E696D6F7263696D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079676F6C617265:return 1;
		default:return 0;
		}
	case 0x6E696D7265746564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657461:return 1;
		case 0x00796C6576697461:return 1;
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x6E696D7265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E656D656C67:return 1;
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x6E696D7563726963:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6973736563:return 1;
		case 0x006E6F6973736573:return 1;
		default:return 0;
		}
	case 0x6E696D756C6F6962:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065636E65637365:return 1;
		default:return 0;
		}
	case 0x6E696D756C79786F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065636E65637365:return 1;
		default:return 0;
		}
	case 0x6E696F6475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00617A6E65756C66:return 1;
		case 0x00656C62756C6F73:return 1;
		default:return 0;
		}
	case 0x6E696F68706C7573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369746F676964:return 1;
		default:return 0;
		}
	case 0x6E696F7265746568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974636566:return 1;
		default:return 0;
		}
	case 0x6E69706972746962:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006469666974616E:return 1;
		default:return 0;
		}
	case 0x6E69706F6874726F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6164696F6361:return 1;
		default:return 0;
		}
	case 0x6E69706F6E696C63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6164696F6361:return 1;
		default:return 0;
		}
	case 0x6E69706F7263616D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6164696F6361:return 1;
		default:return 0;
		}
	case 0x6E69706F72707061:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617571:return 1;
		default:return 0;
		}
	case 0x6E6972636F646E65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369687461706F:return 1;
		case 0x00747369676F6C6F:return 1;
		default:return 0;
		}
	case 0x6E697365726E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6261696669:return 1;
		default:return 0;
		}
	case 0x6E697369646E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F756E6567:return 1;
		default:return 0;
		}
	case 0x6E697463616E6F6D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6164696C6C65:return 1;
		default:return 0;
		}
	case 0x6E69746361786568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6164696C6C65:return 1;
		default:return 0;
		}
	case 0x6E69746E65696373:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x6E69747265706D69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E746E65:return 1;
		default:return 0;
		}
	case 0x6E69747369646E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064656873697567:return 1;
		case 0x00796C6576697463:return 1;
		default:return 0;
		}
	case 0x6E69747369646E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064656873697567:return 1;
		default:return 0;
		}
	case 0x6E6974756C676761:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x6E69766E6F636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646563:return 1;
		default:return 0;
		}
	case 0x6E69766F72706564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657A696C616963:return 1;
		default:return 0;
		}
	case 0x6E697A6F746F6870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0068706172676F63:return 1;
		default:return 0;
		}
	case 0x6E6E61636F646E65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696C616269:return 1;
		default:return 0;
		}
	case 0x6E6E69636174656D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065746972616261:return 1;
		default:return 0;
		}
	case 0x6E6E696765626E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E676E69:return 1;
		default:return 0;
		}
	case 0x6E6E6F6365726E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006465726574696F:return 1;
		default:return 0;
		}
	case 0x6E6E75637265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E676E69:return 1;
		default:return 0;
		}
	case 0x6E6F627261636564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6E6F627261636572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6E6F636172707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974637564:return 1;
		default:return 0;
		}
	case 0x6E6F636361626F74:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369747369:return 1;
		default:return 0;
		}
	case 0x6E6F636E616C656D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F65636169:return 1;
		default:return 0;
		}
	case 0x6E6F636F72746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6973726576:return 1;
		default:return 0;
		}
	case 0x6E6F637265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065766974637564:return 1;
		case 0x006E6F6974706563:return 1;
		case 0x006E6F6974736567:return 1;
		case 0x007473696D726F66:return 1;
		case 0x007974696D726F66:return 1;
		default:return 0;
		}
	case 0x6E6F637265707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007473696D726F66:return 1;
		default:return 0;
		}
	case 0x6E6F637265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6973726576:return 1;
		case 0x006E6F697463656E:return 1;
		case 0x00797261696C6963:return 1;
		default:return 0;
		}
	case 0x6E6F646F7473616D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E616972756173:return 1;
		default:return 0;
		}
	case 0x6E6F6568746E6170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6E6F6761746E6570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F726465686F:return 1;
		default:return 0;
		}
	case 0x6E6F676568637261:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065726F68706F69:return 1;
		default:return 0;
		}
	case 0x6E6F676F69646172:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00726574656D6F69:return 1;
		case 0x00797274656D6F69:return 1;
		default:return 0;
		}
	case 0x6E6F68636F707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616361697264:return 1;
		case 0x0073697361697264:return 1;
		default:return 0;
		}
	case 0x6E6F696F746F6870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6E6F697265747261:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369736F726365:return 1;
		default:return 0;
		}
	case 0x6E6F69736163636F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697473696C61:return 1;
		default:return 0;
		}
	case 0x6E6F6974616E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697473696C61:return 1;
		default:return 0;
		}
	case 0x6E6F697461727269:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697473696C61:return 1;
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x6E6F697463616572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E697261:return 1;
		default:return 0;
		}
	case 0x6E6F697463617266:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6E6F697473657571:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x6E6F6C61666E6F67:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0070696873726569:return 1;
		default:return 0;
		}
	case 0x6E6F6C6C61637365:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F65636169:return 1;
		default:return 0;
		}
	case 0x6E6F6D6561647565:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369747369:return 1;
		default:return 0;
		}
	case 0x6E6F6D65726E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065636E61727473:return 1;
		default:return 0;
		}
	case 0x6E6F6D6572706E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064657461727473:return 1;
		default:return 0;
		}
	case 0x6E6F6D6974736574:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072657A696C6169:return 1;
		default:return 0;
		}
	case 0x6E6F6D6F72646E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6963656F:return 1;
		default:return 0;
		}
	case 0x6E6F6D6F746F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696C6574736F:return 1;
		default:return 0;
		}
	case 0x6E6F6E61636E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6E6F6E6163736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6E6F7061736E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6261696669:return 1;
		default:return 0;
		}
	case 0x6E6F706572706E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064657461726564:return 1;
		default:return 0;
		}
	case 0x6E6F707265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065636E61726564:return 1;
		case 0x0079636E61726564:return 1;
		default:return 0;
		}
	case 0x6E6F7073696D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F656E6174:return 1;
		case 0x00797469656E6174:return 1;
		default:return 0;
		}
	case 0x6E6F707369726570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00736974696C7964:return 1;
		default:return 0;
		}
	case 0x6E6F70736E617274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696269:return 1;
		default:return 0;
		}
	case 0x6E6F726269726570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072616C6F696863:return 1;
		default:return 0;
		}
	case 0x6E6F72626F646E65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61696863:return 1;
		default:return 0;
		}
	case 0x6E6F726479686964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E69746F6369:return 1;
		default:return 0;
		}
	case 0x6E6F726863616E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369747369:return 1;
		default:return 0;
		}
	case 0x6E6F7268636E7973:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369747369:return 1;
		case 0x006E6F6974617A69:return 1;
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x6E6F727463656C65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065766974616765:return 1;
		case 0x007369736F637261:return 1;
		default:return 0;
		}
	case 0x6E6F736165726E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x6E6F737265706D69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6E6F74616D6F7473:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369736F726365:return 1;
		default:return 0;
		}
	case 0x6E6F74616D726564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369736F727565:return 1;
		default:return 0;
		}
	case 0x6E6F74656C656B73:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6E706F6475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061696E6F6D7565:return 1;
		default:return 0;
		}
	case 0x6E706F6964726163:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00636974616D7565:return 1;
		default:return 0;
		}
	case 0x6E706F6E656C7073:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061696E6F6D7565:return 1;
		default:return 0;
		}
	case 0x6E706F7274736167:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696E6F6D7565:return 1;
		case 0x00636974616D7565:return 1;
		default:return 0;
		}
	case 0x6E706F7275656C70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061696E6F6D7565:return 1;
		case 0x0063696E6F6D7565:return 1;
		default:return 0;
		}
	case 0x6E706F7461647968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00636974616D7565:return 1;
		default:return 0;
		}
	case 0x6E706F7461706568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696E6F6D7565:return 1;
		default:return 0;
		}
	case 0x6E72616369746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F726F7669:return 1;
		default:return 0;
		}
	case 0x6E7261657265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E747365:return 1;
		default:return 0;
		}
	case 0x6E7265746E696E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E6F697461:return 1;
		default:return 0;
		}
	case 0x6E726F6262757473:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064657472616568:return 1;
		default:return 0;
		}
	case 0x6E726F7265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61746E656D61:return 1;
		default:return 0;
		}
	case 0x6E72756F6A657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697473696C61:return 1;
		default:return 0;
		}
	case 0x6E72756F6A6F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697473696C61:return 1;
		default:return 0;
		}
	case 0x6E72757469746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D7369656B6970:return 1;
		default:return 0;
		}
	case 0x6E75667265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E6F697463:return 1;
		default:return 0;
		}
	case 0x6E75667265707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E6F697463:return 1;
		default:return 0;
		}
	case 0x6E756C6F766F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E6972656574:return 1;
		default:return 0;
		}
	case 0x6E756D6572657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617265:return 1;
		default:return 0;
		}
	case 0x6E756D65726E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065766974617265:return 1;
		case 0x006E6F6974617265:return 1;
		default:return 0;
		}
	case 0x6E756D6D696F7369:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6E756D6D6F636E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065766974616369:return 1;
		default:return 0;
		}
	case 0x6E756D6D6F636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065766974616369:return 1;
		case 0x00676E6974616369:return 1;
		default:return 0;
		}
	case 0x6E756D6D6F637865:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065766974616369:return 1;
		case 0x006E6F6974616369:return 1;
		case 0x0079726F74616369:return 1;
		default:return 0;
		}
	case 0x6E756E65646E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616963:return 1;
		default:return 0;
		}
	case 0x6E756E65726E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616963:return 1;
		default:return 0;
		}
	case 0x6E756E6F72706572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616963:return 1;
		default:return 0;
		}
	case 0x6E756E7265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00706968736F6963:return 1;
		case 0x0079726F74616963:return 1;
		default:return 0;
		}
	case 0x6E756F627265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C73756F6574:return 1;
		default:return 0;
		}
	case 0x6E756F63696D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0068637261726574:return 1;
		default:return 0;
		}
	case 0x6E756F636E656E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6261726574:return 1;
		default:return 0;
		}
	case 0x6E756F66626D7564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E656D726564:return 1;
		default:return 0;
		}
	case 0x6E7574726F666E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657461:return 1;
		default:return 0;
		}
	case 0x6E7574726F666E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657461:return 1;
		default:return 0;
		}
	case 0x6E7574726F706D69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657461:return 1;
		default:return 0;
		}
	case 0x6E7972616C6F746F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369676F6C6F67:return 1;
		default:return 0;
		}
	case 0x6E79736F72746365:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C7974636164:return 1;
		default:return 0;
		}
	case 0x6E79736F746F6870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657A6973656874:return 1;
		default:return 0;
		}
	case 0x6F61727478656E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007972616E696472:return 1;
		default:return 0;
		}
	case 0x6F62617265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C62616E696D:return 1;
		default:return 0;
		}
	case 0x6F626F636964656D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6163696E6174:return 1;
		default:return 0;
		}
	case 0x6F626F65616C6170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6163696E6174:return 1;
		default:return 0;
		}
	case 0x6F627261696D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E6563736572:return 1;
		default:return 0;
		}
	case 0x6F63616D72616870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696D616E7964:return 1;
		case 0x006C616369676F6C:return 1;
		case 0x00747369736F6E67:return 1;
		case 0x0079706172656874:return 1;
		default:return 0;
		}
	case 0x6F63616D72656874:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00736973656E6567:return 1;
		default:return 0;
		}
	case 0x6F63617268746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E61697472616D:return 1;
		default:return 0;
		}
	case 0x6F63617474697370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696870726F6D:return 1;
		default:return 0;
		}
	case 0x6F63656F68746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369676F6C:return 1;
		default:return 0;
		}
	case 0x6F63656F74796870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369676F6C:return 1;
		default:return 0;
		}
	case 0x6F63696E656F6870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064696F72657470:return 1;
		case 0x006574696F726863:return 1;
		case 0x0073756F72657470:return 1;
		default:return 0;
		}
	case 0x6F63696E65726870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696E656C7073:return 1;
		case 0x0063697274736167:return 1;
		case 0x0063697461706568:return 1;
		case 0x00636974746F6C67:return 1;
		default:return 0;
		}
	case 0x6F63696E68636574:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369676F6C:return 1;
		default:return 0;
		}
	case 0x6F63697264617571:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E6169726176:return 1;
		default:return 0;
		}
	case 0x6F63697274737968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696870726F6D:return 1;
		default:return 0;
		}
	case 0x6F636F6475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00616C6C656D756C:return 1;
		case 0x006E6F64656C7974:return 1;
		default:return 0;
		}
	case 0x6F636F65616C6170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079676F6C6F6D73:return 1;
		default:return 0;
		}
	case 0x6F636F6968636172:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657A696E696163:return 1;
		default:return 0;
		}
	case 0x6F636F6968637369:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616567796363:return 1;
		default:return 0;
		}
	case 0x6F636F6D6F726863:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657079746F6C6C:return 1;
		case 0x00797079746F6C6C:return 1;
		default:return 0;
		}
	case 0x6F636F6E61746974:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657461626D756C:return 1;
		default:return 0;
		}
	case 0x6F636F726170616C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796D6F7463656C:return 1;
		case 0x00796D6F746F706C:return 1;
		case 0x00796D6F74736F6C:return 1;
		default:return 0;
		}
	case 0x6F636F72646E6564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E697470616C:return 1;
		default:return 0;
		}
	case 0x6F636F7265746E65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796D6F74736F6C:return 1;
		default:return 0;
		}
	case 0x6F636F726F6D6566:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616567796363:return 1;
		default:return 0;
		}
	case 0x6F636F7274736167:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796D6F746F706C:return 1;
		case 0x00796D6F74736F6C:return 1;
		default:return 0;
		}
	case 0x6F63726574627573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6963736E:return 1;
		default:return 0;
		}
	case 0x6F63736964657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006465746E65746E:return 1;
		case 0x00656C6261746E75:return 1;
		default:return 0;
		}
	case 0x6F637369646E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6261746E75:return 1;
		default:return 0;
		}
	case 0x6F6373696E617275:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079687061687272:return 1;
		default:return 0;
		}
	case 0x6F63736F7263616D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636970:return 1;
		default:return 0;
		}
	case 0x6F63736F7263696D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636970:return 1;
		default:return 0;
		}
	case 0x6F63736F72677968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636970:return 1;
		default:return 0;
		}
	case 0x6F637375666F7275:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6974616D6568:return 1;
		default:return 0;
		}
	case 0x6F64626173726F64:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C616E696D:return 1;
		default:return 0;
		}
	case 0x6F64657073617263:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6D6F7264:return 1;
		default:return 0;
		}
	case 0x6F646968636F7262:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6D6F7264:return 1;
		default:return 0;
		}
	case 0x6F64696F7473616D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6172656D7568:return 1;
		default:return 0;
		}
	case 0x6F646E656F707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696E697263:return 1;
		default:return 0;
		}
	case 0x6F646F7265707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796E65676F746E:return 1;
		default:return 0;
		}
	case 0x6F64796863617262:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6D6F7264:return 1;
		default:return 0;
		}
	case 0x6F65636E69706174:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696C616870:return 1;
		default:return 0;
		}
	case 0x6F65676F656C6170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696870617267:return 1;
		default:return 0;
		}
	case 0x6F65676F6E687465:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696870617267:return 1;
		case 0x0072656870617267:return 1;
		default:return 0;
		}
	case 0x6F65676F7263696D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369676F6C:return 1;
		default:return 0;
		}
	case 0x6F65676F72647968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369676F6C:return 1;
		default:return 0;
		}
	case 0x6F65676F74796870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696870617267:return 1;
		case 0x0072656870617267:return 1;
		default:return 0;
		}
	case 0x6F656874696D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369676F6C:return 1;
		default:return 0;
		}
	case 0x6F65687469746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369676F6C:return 1;
		default:return 0;
		}
	case 0x6F656C61706F6F7A:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079676F6C6F746E:return 1;
		default:return 0;
		}
	case 0x6F656C65746E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369676F6C:return 1;
		default:return 0;
		}
	case 0x6F656C6574737964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369676F6C:return 1;
		default:return 0;
		}
	case 0x6F656C7572656F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574697463616C:return 1;
		default:return 0;
		}
	case 0x6F656E61636C6163:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072616C75626966:return 1;
		case 0x007261746E616C70:return 1;
		default:return 0;
		}
	case 0x6F66657265746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616D72:return 1;
		default:return 0;
		}
	case 0x6F66697264617571:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616C6F696C:return 1;
		default:return 0;
		}
	case 0x6F666D6574706573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616C6F696C:return 1;
		default:return 0;
		}
	case 0x6F666D6F63736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C676E697472:return 1;
		default:return 0;
		}
	case 0x6F666D7563726963:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F656E6172:return 1;
		default:return 0;
		}
	case 0x6F666E6F636C616D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616D72:return 1;
		default:return 0;
		}
	case 0x6F666E6F636E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E6174696D72:return 1;
		default:return 0;
		}
	case 0x6F676168706F7365:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00616963616C616D:return 1;
		case 0x0061696761687272:return 1;
		case 0x007369736F63796D:return 1;
		default:return 0;
		}
	case 0x6F6761746E616E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C62617A696E:return 1;
		default:return 0;
		}
	case 0x6F676E69706C6173:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6174616C6170:return 1;
		case 0x007375656C6C616D:return 1;
		case 0x0079687061687272:return 1;
		default:return 0;
		}
	case 0x6F676E7972616870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696870617267:return 1;
		case 0x0064696F68707974:return 1;
		case 0x006C616369676F6C:return 1;
		case 0x006C617275656C70:return 1;
		case 0x006C6173736F6C67:return 1;
		case 0x007369736F63796D:return 1;
		case 0x007369736F726578:return 1;
		case 0x00737573736F6C67:return 1;
		case 0x0079706172656874:return 1;
		default:return 0;
		}
	case 0x6F676F6E69746361:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616964696E:return 1;
		default:return 0;
		}
	case 0x6F68636172707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00616564696F6972:return 1;
		case 0x006C6164696F6972:return 1;
		default:return 0;
		}
	case 0x6F68636172746162:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F67616870:return 1;
		default:return 0;
		}
	case 0x6F68636E616C656D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C6163696C:return 1;
		case 0x00796C73756F696C:return 1;
		default:return 0;
		}
	case 0x6F68636F64616964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00616973656E696B:return 1;
		case 0x00636974656E696B:return 1;
		default:return 0;
		}
	case 0x6F68636F6574736F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369746972646E:return 1;
		default:return 0;
		}
	case 0x6F68636F72626966:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369746972646E:return 1;
		default:return 0;
		}
	case 0x6F68636F7473616D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369736F72646E:return 1;
		default:return 0;
		}
	case 0x6F686372616E6F6D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007473696863616D:return 1;
		default:return 0;
		}
	case 0x6F68637973706E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369676F6C:return 1;
		default:return 0;
		}
	case 0x6F68706F6375656C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065746963696E65:return 1;
		default:return 0;
		}
	case 0x6F68706F64616C63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F65636172:return 1;
		default:return 0;
		}
	case 0x6F68706F64696D61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369726F687073:return 1;
		default:return 0;
		}
	case 0x6F68706F6874726F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369726F687073:return 1;
		default:return 0;
		}
	case 0x6F68706F69646172:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0068706172676F74:return 1;
		case 0x007375726F687073:return 1;
		default:return 0;
		}
	case 0x6F68706F6C796D61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369726F687073:return 1;
		default:return 0;
		}
	case 0x6F68706F6D617267:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C6163696E:return 1;
		default:return 0;
		}
	case 0x6F68706F6E6F6870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065706F63736F74:return 1;
		default:return 0;
		}
	case 0x6F68706F7263616D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0068706172676F74:return 1;
		default:return 0;
		}
	case 0x6F68706F7263696D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065706F63736F74:return 1;
		case 0x0068706172676F6E:return 1;
		case 0x0068706172676F74:return 1;
		case 0x00726574656D6F74:return 1;
		default:return 0;
		}
	case 0x6F68706F72646E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061696E616D6F6E:return 1;
		default:return 0;
		}
	case 0x6F68706F72726566:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007375726F687073:return 1;
		default:return 0;
		}
	case 0x6F68706F72747361:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00726574656D6F74:return 1;
		case 0x00797274656D6F74:return 1;
		default:return 0;
		}
	case 0x6F68706F7A696872:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F65636172:return 1;
		default:return 0;
		}
	case 0x6F68706F7A6E6562:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696E69687073:return 1;
		default:return 0;
		}
	case 0x6F6870726F6D6E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369676F6C:return 1;
		default:return 0;
		}
	case 0x6F68726F6D6F6E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6164696F626D:return 1;
		default:return 0;
		}
	case 0x6F68736B6F6F7263:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064657265646C75:return 1;
		default:return 0;
		}
	case 0x6F687461706D7973:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00636974656D696D:return 1;
		default:return 0;
		}
	case 0x6F687461706F6F7A:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369676F6C:return 1;
		default:return 0;
		}
	case 0x6F6874726F6E7973:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696870617267:return 1;
		default:return 0;
		}
	case 0x6F6874796D6E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369676F6C:return 1;
		default:return 0;
		}
	case 0x6F69626968706D61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369676F6C:return 1;
		default:return 0;
		}
	case 0x6F69626F68746170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369676F6C:return 1;
		default:return 0;
		}
	case 0x6F69626F69636F73:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369676F6C:return 1;
		default:return 0;
		}
	case 0x6F69626F6E687465:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369676F6C:return 1;
		default:return 0;
		}
	case 0x6F69626F6E6D696C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369676F6C:return 1;
		default:return 0;
		}
	case 0x6F69626F7263696D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369676F6C:return 1;
		default:return 0;
		}
	case 0x6F69626F72647968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369676F6C:return 1;
		default:return 0;
		}
	case 0x6F69626F74796870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369676F6C:return 1;
		default:return 0;
		}
	case 0x6F69636F736E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369676F6C:return 1;
		default:return 0;
		}
	case 0x6F69636F736F6962:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369676F6C:return 1;
		default:return 0;
		}
	case 0x6F69676E616D6568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00616D6F63726173:return 1;
		case 0x007369736F74616D:return 1;
		default:return 0;
		}
	case 0x6F69676E616F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696D72657073:return 1;
		default:return 0;
		}
	case 0x6F6967727574696C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369676F6C:return 1;
		default:return 0;
		}
	case 0x6F696863656E7973:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369676F6C:return 1;
		default:return 0;
		}
	case 0x6F696863696F7473:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369676F6C:return 1;
		default:return 0;
		}
	case 0x6F6968636E617262:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063616964726163:return 1;
		case 0x0065746967657473:return 1;
		case 0x006C61696C6C6170:return 1;
		case 0x006E616972756173:return 1;
		case 0x0073756F67657473:return 1;
		default:return 0;
		}
	case 0x6F69687369726170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007069687372656E:return 1;
		default:return 0;
		}
	case 0x6F696C6568616964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D7369706F7274:return 1;
		default:return 0;
		}
	case 0x6F696C7974636164:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696870617267:return 1;
		case 0x0063696870796C67:return 1;
		case 0x0072656870617267:return 1;
		default:return 0;
		}
	case 0x6F696D6564697065:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369676F6C:return 1;
		default:return 0;
		}
	case 0x6F696D656F726170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072656870617267:return 1;
		default:return 0;
		}
	case 0x6F6972616E656373:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x6F69726570627573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61657473:return 1;
		default:return 0;
		}
	case 0x6F69726574636162:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369676F6C:return 1;
		case 0x006E6965746F7270:return 1;
		case 0x006E697370797274:return 1;
		case 0x0073756F67616870:return 1;
		case 0x00746E65766C6F73:return 1;
		case 0x00747369706F6373:return 1;
		case 0x0079706172656874:return 1;
		default:return 0;
		}
	case 0x6F69726574736F70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636972:return 1;
		default:return 0;
		}
	case 0x6F69726F74736968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696870617267:return 1;
		case 0x006C616369676F6C:return 1;
		case 0x0072656870617267:return 1;
		default:return 0;
		}
	case 0x6F69727461706E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x6F6972746F6C6C61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696870726F6D:return 1;
		default:return 0;
		}
	case 0x6F6973656C636365:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697473616C63:return 1;
		case 0x006C616369676F6C:return 1;
		default:return 0;
		}
	case 0x6F6973656E67616D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065746972726566:return 1;
		default:return 0;
		}
	case 0x6F69736968746870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00636974656E6567:return 1;
		case 0x00736973656E6567:return 1;
		case 0x0079706172656874:return 1;
		default:return 0;
		}
	case 0x6F697369766F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C616E:return 1;
		default:return 0;
		}
	case 0x6F69737361706D69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E64656E:return 1;
		default:return 0;
		}
	case 0x6F69737968706E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369676F6C:return 1;
		default:return 0;
		}
	case 0x6F697461626F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00646F6F6872656E:return 1;
		case 0x007069687372656E:return 1;
		default:return 0;
		}
	case 0x6F697461726E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064657A696C616E:return 1;
		default:return 0;
		}
	case 0x6F697465616C6170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369676F6C:return 1;
		default:return 0;
		}
	case 0x6F69746964617274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007265676E6F6D6E:return 1;
		default:return 0;
		}
	case 0x6F69746F6D656E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C616E:return 1;
		default:return 0;
		}
	case 0x6F69747065637865:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C616E:return 1;
		default:return 0;
		}
	case 0x6F69747563657865:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E697265656E:return 1;
		default:return 0;
		}
	case 0x6F6C6172656E696D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636967:return 1;
		default:return 0;
		}
	case 0x6F6C636F72657470:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696870726F6D:return 1;
		default:return 0;
		}
	case 0x6F6C656863617274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064696F7473616D:return 1;
		case 0x0079687061687272:return 1;
		default:return 0;
		}
	case 0x6F6C666973736170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F65636172:return 1;
		default:return 0;
		}
	case 0x6F6C676E6F636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006465746172656D:return 1;
		default:return 0;
		}
	case 0x6F6C68636F6C6C61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6C7968706F72:return 1;
		default:return 0;
		}
	case 0x6F6C68636F6E6F6D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697465636172:return 1;
		case 0x00646574616E6972:return 1;
		default:return 0;
		}
	case 0x6F6C68636F707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061697264796872:return 1;
		case 0x0063697264796872:return 1;
		default:return 0;
		}
	case 0x6F6C687069746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E616974736967:return 1;
		default:return 0;
		}
	case 0x6F6C6870796C6F70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696F627369:return 1;
		case 0x006E61656F627365:return 1;
		default:return 0;
		}
	case 0x6F6C69646E617267:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C746E657571:return 1;
		default:return 0;
		}
	case 0x6F6C6968706E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369676F6C:return 1;
		default:return 0;
		}
	case 0x6F6C6968706F656E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369676F6C:return 1;
		default:return 0;
		}
	case 0x6F6C6972746E6576:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697473697571:return 1;
		case 0x00796C6C61697571:return 1;
		case 0x00796C73756F7571:return 1;
		default:return 0;
		}
	case 0x6F6C69746C757473:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C746E657571:return 1;
		default:return 0;
		}
	case 0x6F6C6C6972697073:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D7369706F7274:return 1;
		default:return 0;
		}
	case 0x6F6C6F63656E6567:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636967:return 1;
		default:return 0;
		}
	case 0x6F6C6F63656F6962:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636967:return 1;
		default:return 0;
		}
	case 0x6F6C6F6365747561:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636967:return 1;
		default:return 0;
		}
	case 0x6F6C6F6369786F74:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636967:return 1;
		default:return 0;
		}
	case 0x6F6C6F6475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636967:return 1;
		default:return 0;
		}
	case 0x6F6C6F6568746E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636967:return 1;
		default:return 0;
		}
	case 0x6F6C6F68636E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636967:return 1;
		default:return 0;
		}
	case 0x6F6C6F6863797370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636967:return 1;
		default:return 0;
		}
	case 0x6F6C6F6870726F6D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636967:return 1;
		default:return 0;
		}
	case 0x6F6C6F696E617263:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636967:return 1;
		default:return 0;
		}
	case 0x6F6C6F6973796870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636967:return 1;
		default:return 0;
		}
	case 0x6F6C6F6D6F746E65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636967:return 1;
		default:return 0;
		}
	case 0x6F6C6F6D73696573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636967:return 1;
		default:return 0;
		}
	case 0x6F6C6F6E65726870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636967:return 1;
		default:return 0;
		}
	case 0x6F6C6F6E68636574:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636967:return 1;
		default:return 0;
		}
	case 0x6F6C6F6E6F6D6564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636967:return 1;
		default:return 0;
		}
	case 0x6F6C6F6E6F726863:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636967:return 1;
		default:return 0;
		}
	case 0x6F6C6F6E756D6D69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636967:return 1;
		default:return 0;
		}
	case 0x6F6C6F7265746568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636967:return 1;
		default:return 0;
		}
	case 0x6F6C6F72706E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F697461676E:return 1;
		default:return 0;
		}
	case 0x6F6C6F74616D6F73:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636967:return 1;
		default:return 0;
		}
	case 0x6F6C6F7473697065:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696870617267:return 1;
		case 0x0072656870617267:return 1;
		default:return 0;
		}
	case 0x6F6C6F7972626D65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636967:return 1;
		default:return 0;
		}
	case 0x6F6C7078656E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617469:return 1;
		default:return 0;
		}
	case 0x6F6C756369646570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61746E6F7266:return 1;
		default:return 0;
		}
	case 0x6F6C756369727475:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697473616C70:return 1;
		default:return 0;
		}
	case 0x6F6C756369727561:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61696E617263:return 1;
		default:return 0;
		}
	case 0x6F6C756369736576:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072616C75627574:return 1;
		default:return 0;
		}
	case 0x6F6C756369746572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369736F747963:return 1;
		default:return 0;
		}
	case 0x6F6C756E61726761:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697473616C70:return 1;
		case 0x007369736F747963:return 1;
		default:return 0;
		}
	case 0x6F6C79646E6F7073:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061696D79646964:return 1;
		case 0x0073697369686373:return 1;
		case 0x0079706172656874:return 1;
		default:return 0;
		}
	case 0x6F6C796870617473:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697473616C70:return 1;
		case 0x0073697369686373:return 1;
		case 0x007369736F63796D:return 1;
		case 0x0079687061687272:return 1;
		default:return 0;
		}
	case 0x6F6D6174656D6E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006465736F687072:return 1;
		default:return 0;
		}
	case 0x6F6D64616C6C6162:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E697265676E:return 1;
		default:return 0;
		}
	case 0x6F6D65646F636163:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061696E616D6F6E:return 1;
		default:return 0;
		}
	case 0x6F6D656869746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696761687272:return 1;
		default:return 0;
		}
	case 0x6F6D65686F726573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696761687272:return 1;
		default:return 0;
		}
	case 0x6F6D65686F747561:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079706172656874:return 1;
		default:return 0;
		}
	case 0x6F6D656874736F70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696761687272:return 1;
		default:return 0;
		}
	case 0x6F6D657265636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C73756F696E:return 1;
		default:return 0;
		}
	case 0x6F6D657269746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E617274736E:return 1;
		default:return 0;
		}
	case 0x6F6D657361726870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E697265676E:return 1;
		default:return 0;
		}
	case 0x6F6D657365656863:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E697265676E:return 1;
		default:return 0;
		}
	case 0x6F6D657473697065:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006361696C696870:return 1;
		case 0x006C616369676F6C:return 1;
		default:return 0;
		}
	case 0x6F6D697264617571:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072616C7563656C:return 1;
		default:return 0;
		}
	case 0x6F6D6974636E6173:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C73756F696E:return 1;
		default:return 0;
		}
	case 0x6F6D6C616874706F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D7569726F6870:return 1;
		default:return 0;
		}
	case 0x6F6D6D6F63736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C73756F6964:return 1;
		default:return 0;
		}
	case 0x6F6D6F6475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369736F687072:return 1;
		case 0x0079706F72746F6E:return 1;
		default:return 0;
		}
	case 0x6F6D6F6572657473:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065706F63736F6E:return 1;
		default:return 0;
		}
	case 0x6F6D6F6972656874:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369736F687072:return 1;
		default:return 0;
		}
	case 0x6F6D6F6C6C796870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369736F687072:return 1;
		default:return 0;
		}
	case 0x6F6D6F7262697274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6F6E61687465:return 1;
		default:return 0;
		}
	case 0x6F6D6F7265746568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369736F687072:return 1;
		default:return 0;
		}
	case 0x6F6D6F746E656E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369676F6C:return 1;
		default:return 0;
		}
	case 0x6F6D726564697065:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369736F63796D:return 1;
		default:return 0;
		}
	case 0x6F6D7265646E6F77:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E697265676E:return 1;
		default:return 0;
		}
	case 0x6F6D726F72726F68:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E697265676E:return 1;
		default:return 0;
		}
	case 0x6F6D7365646E7973:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079687061687272:return 1;
		default:return 0;
		}
	case 0x6F6D736F636F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6174696C6F70:return 1;
		default:return 0;
		}
	case 0x6F6D7469666F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E697265676E:return 1;
		default:return 0;
		}
	case 0x6F6D796C676E6967:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064696F6D6F7473:return 1;
		default:return 0;
		}
	case 0x6F6E6172626D656D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F7672656E:return 1;
		default:return 0;
		}
	case 0x6F6E656874726170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00636974656E6567:return 1;
		case 0x00736973656E6567:return 1;
		case 0x0073756F70726163:return 1;
		default:return 0;
		}
	case 0x6F6E657268706E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369676F6C:return 1;
		default:return 0;
		}
	case 0x6F6E676967616E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00616E656D6F6B73:return 1;
		default:return 0;
		}
	case 0x6F6E676F68746170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6163696E6F6D:return 1;
		default:return 0;
		}
	case 0x6F6E676F72696863:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C6163696D:return 1;
		default:return 0;
		}
	case 0x6F6E6874656E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369676F6C:return 1;
		default:return 0;
		}
	case 0x6F6E696D6D616964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006564696D6F7262:return 1;
		case 0x006574617274696E:return 1;
		default:return 0;
		}
	case 0x6F6E696D6F646261:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063616964726163:return 1;
		case 0x006C616369736576:return 1;
		case 0x006C616E69676176:return 1;
		case 0x006C6174696E6567:return 1;
		default:return 0;
		}
	case 0x6F6E697368637566:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6C696870:return 1;
		default:return 0;
		}
	case 0x6F6E6974616C6567:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006564696D6F7262:return 1;
		default:return 0;
		}
	case 0x6F6E6975676E6173:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697465696F70:return 1;
		default:return 0;
		}
	case 0x6F6E6D79676F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696D72657073:return 1;
		default:return 0;
		}
	case 0x6F6E6F63696E6170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696870617267:return 1;
		default:return 0;
		}
	case 0x6F6E6F63696E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697473616C63:return 1;
		default:return 0;
		}
	case 0x6F6E6F6D75656E70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061696761687272:return 1;
		case 0x0063696870617267:return 1;
		case 0x0073697365726170:return 1;
		case 0x007369736F63796D:return 1;
		case 0x0073756F726F6870:return 1;
		case 0x0079687061687272:return 1;
		case 0x0079706172656874:return 1;
		default:return 0;
		}
	case 0x6F6E6F7268636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369676F6C:return 1;
		default:return 0;
		}
	case 0x6F6E6F7274736167:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C6163696D:return 1;
		default:return 0;
		}
	case 0x6F6E70797275656E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369676F6C:return 1;
		default:return 0;
		}
	case 0x6F6E726574657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F69726F74:return 1;
		default:return 0;
		}
	case 0x6F6F6D79656E6F68:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006B63757274736E:return 1;
		default:return 0;
		}
	case 0x6F6F746E616C7461:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064696F746E6F64:return 1;
		default:return 0;
		}
	case 0x6F6F7A6F656C6170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369676F6C:return 1;
		default:return 0;
		}
	case 0x6F6F7A6F6E687465:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369676F6C:return 1;
		default:return 0;
		}
	case 0x6F6F7A6F746F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369676F6C:return 1;
		default:return 0;
		}
	case 0x6F70616475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00636974616D6573:return 1;
		case 0x0073756F726F7073:return 1;
		default:return 0;
		}
	case 0x6F70617265707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616573796870:return 1;
		case 0x006C616973796870:return 1;
		default:return 0;
		}
	case 0x6F70617265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616573796870:return 1;
		default:return 0;
		}
	case 0x6F70617275656C70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616973796870:return 1;
		default:return 0;
		}
	case 0x6F706972746E6576:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6169746E6574:return 1;
		default:return 0;
		}
	case 0x6F70697571656E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6169746E6574:return 1;
		default:return 0;
		}
	case 0x6F706D65746E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F656E6172:return 1;
		case 0x00797469656E6172:return 1;
		default:return 0;
		}
	case 0x6F706D65746F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F656E6172:return 1;
		default:return 0;
		}
	case 0x6F706D697265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617472:return 1;
		default:return 0;
		}
	case 0x6F706D6F636E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6261646E75:return 1;
		default:return 0;
		}
	case 0x6F706D6F63736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646573:return 1;
		default:return 0;
		}
	case 0x6F706F6369687465:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61636974696C:return 1;
		default:return 0;
		}
	case 0x6F706F646970656C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E697279687072:return 1;
		default:return 0;
		}
	case 0x6F706F6475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61636974696C:return 1;
		default:return 0;
		}
	case 0x6F706F696C626962:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C6163696C:return 1;
		default:return 0;
		}
	case 0x6F706F6C6C796870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E697279687072:return 1;
		default:return 0;
		}
	case 0x6F706F6D72656874:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369656E70796C:return 1;
		default:return 0;
		}
	case 0x6F706F6E616C6162:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073697469687473:return 1;
		default:return 0;
		}
	case 0x6F706F7265666E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00726F6972657473:return 1;
		default:return 0;
		}
	case 0x6F706F7265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00726F6972657473:return 1;
		default:return 0;
		}
	case 0x6F706F726574616C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00726F6972657473:return 1;
		default:return 0;
		}
	case 0x6F706F7265746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00726F6972657473:return 1;
		default:return 0;
		}
	case 0x6F706F7268746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696863797370:return 1;
		case 0x0063696870726F6D:return 1;
		case 0x00636972746E6563:return 1;
		case 0x00636974656E6567:return 1;
		case 0x0065746967616870:return 1;
		case 0x0065746968746170:return 1;
		case 0x0065746973796870:return 1;
		case 0x00657A6967616870:return 1;
		case 0x006C616369676F6C:return 1;
		case 0x006C6163696D6F6E:return 1;
		case 0x006C6163696D6F74:return 1;
		case 0x006D736967616870:return 1;
		case 0x006D736968746170:return 1;
		case 0x00736973656E6567:return 1;
		case 0x0073756F67616870:return 1;
		case 0x0073756F6C696870:return 1;
		case 0x0074736967616870:return 1;
		case 0x0074736968706F73:return 1;
		case 0x007473697274656D:return 1;
		case 0x00747369746E616D:return 1;
		case 0x0079676F6C6F6962:return 1;
		default:return 0;
		}
	case 0x6F706F7269656863:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0078796C6F68706D:return 1;
		default:return 0;
		}
	case 0x6F706F726F6D6566:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616574696C70:return 1;
		default:return 0;
		}
	case 0x6F706F7270627573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E6F697472:return 1;
		default:return 0;
		}
	case 0x6F706F72706C616D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064656E6F697472:return 1;
		default:return 0;
		}
	case 0x6F706F72706E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E6F697472:return 1;
		default:return 0;
		}
	case 0x6F706F7270736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E6F697472:return 1;
		default:return 0;
		}
	case 0x6F706F72746E6576:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00726F6972657473:return 1;
		default:return 0;
		}
	case 0x6F706F74616D6568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E697279687072:return 1;
		default:return 0;
		}
	case 0x6F70706165726F66:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E656D746E69:return 1;
		default:return 0;
		}
	case 0x6F70726574657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61636974696C:return 1;
		default:return 0;
		}
	case 0x6F70726F636E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C616572:return 1;
		default:return 0;
		}
	case 0x6F70736172746574:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D7569676E6172:return 1;
		default:return 0;
		}
	case 0x6F70736572726F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C657669736E:return 1;
		case 0x00796C676E69646E:return 1;
		case 0x00796C746E65646E:return 1;
		default:return 0;
		}
	case 0x6F70736964657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646573:return 1;
		default:return 0;
		}
	case 0x6F70736F6C637963:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6C79646E:return 1;
		default:return 0;
		}
	case 0x6F70736F6C706964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696C79646E:return 1;
		default:return 0;
		}
	case 0x6F70736F6E6D6574:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6C79646E:return 1;
		default:return 0;
		}
	case 0x6F70736F6E707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D7569676E6172:return 1;
		default:return 0;
		}
	case 0x6F70736F70726163:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6169676E6172:return 1;
		case 0x006D7569676E6172:return 1;
		default:return 0;
		}
	case 0x6F70736F7263616D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065726F68706F72:return 1;
		case 0x006C6C7968706F72:return 1;
		case 0x006D7569676E6172:return 1;
		default:return 0;
		}
	case 0x6F70736F7263696D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065726F68706F72:return 1;
		case 0x006C6C7968706F72:return 1;
		case 0x006D7569676E6172:return 1;
		default:return 0;
		}
	case 0x6F70736F72646E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D7569676E6172:return 1;
		default:return 0;
		}
	case 0x6F70736F74636574:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6C79646E:return 1;
		default:return 0;
		}
	case 0x6F70736F74746970:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F65636172:return 1;
		default:return 0;
		}
	case 0x6F7079686F696C69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697274736167:return 1;
		default:return 0;
		}
	case 0x6F70796874736F70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616573796870:return 1;
		default:return 0;
		}
	case 0x6F7079746F6C7978:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696870617267:return 1;
		default:return 0;
		}
	case 0x6F72616863636173:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697279747562:return 1;
		case 0x006369746563796D:return 1;
		case 0x0064696F6C6C6F63:return 1;
		case 0x0065766974706563:return 1;
		case 0x007369736F63796D:return 1;
		case 0x0079686372617473:return 1;
		default:return 0;
		}
	case 0x6F72616870656C62:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00616D6F6E656461:return 1;
		case 0x00616D73616C656D:return 1;
		case 0x0063697473616C70:return 1;
		case 0x0079687061687272:return 1;
		default:return 0;
		}
	case 0x6F726168746E6163:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6C696870:return 1;
		default:return 0;
		}
	case 0x6F72626574726576:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E72657473:return 1;
		case 0x006C61726F6D6566:return 1;
		case 0x0072616C69736162:return 1;
		case 0x007972616D6D616D:return 1;
		default:return 0;
		}
	case 0x6F72626F72626966:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369746968636E:return 1;
		default:return 0;
		}
	case 0x6F72627265646C65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0068736972656874:return 1;
		default:return 0;
		}
	case 0x6F72627472616568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6E656B:return 1;
		default:return 0;
		}
	case 0x6F72636E656E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E656D686361:return 1;
		default:return 0;
		}
	case 0x6F72646E616E7967:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696870726F6D:return 1;
		case 0x0073756F726F7073:return 1;
		default:return 0;
		}
	case 0x6F72646E696C6170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C6163696D:return 1;
		default:return 0;
		}
	case 0x6F72646E696C7963:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6163696E6F63:return 1;
		default:return 0;
		}
	case 0x6F72646E6F686361:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697473616C70:return 1;
		default:return 0;
		}
	case 0x6F726479686E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C62617A796C:return 1;
		default:return 0;
		}
	case 0x6F726479686F726F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696870617267:return 1;
		default:return 0;
		}
	case 0x6F726479686F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D7369706F7274:return 1;
		default:return 0;
		}
	case 0x6F72656D65687065:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696870726F6D:return 1;
		default:return 0;
		}
	case 0x6F7265736F747561:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079706172656874:return 1;
		default:return 0;
		}
	case 0x6F7265746E756F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657469736F7070:return 1;
		case 0x00746E656E6F7070:return 1;
		default:return 0;
		}
	case 0x6F72677265646E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E696C646E75:return 1;
		default:return 0;
		}
	case 0x6F72686361726170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369736F74616D:return 1;
		default:return 0;
		}
	case 0x6F7268636174656D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696E6974616D:return 1;
		default:return 0;
		}
	case 0x6F72686369736162:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696E6974616D:return 1;
		default:return 0;
		}
	case 0x6F72686369746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C6163696E:return 1;
		default:return 0;
		}
	case 0x6F7268636F6D6568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00726574656D6F6D:return 1;
		case 0x007369736F74616D:return 1;
		case 0x00797274656D6F6D:return 1;
		default:return 0;
		}
	case 0x6F7268636F6E6F6D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C6163696D:return 1;
		default:return 0;
		}
	case 0x6F7268636F747561:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0068706172676F6E:return 1;
		default:return 0;
		}
	case 0x6F726F68746E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065726166686775:return 1;
		default:return 0;
		}
	case 0x6F726F6C68636964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E616874656D:return 1;
		default:return 0;
		}
	case 0x6F72706172747865:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6169636E6976:return 1;
		default:return 0;
		}
	case 0x6F727065726E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065766974637564:return 1;
		case 0x006E6F6974637564:return 1;
		default:return 0;
		}
	case 0x6F72706F6C696870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00797469656E6567:return 1;
		default:return 0;
		}
	case 0x6F72706F72647968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F69736C7570:return 1;
		default:return 0;
		}
	case 0x6F72706F746F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E6174736574:return 1;
		default:return 0;
		}
	case 0x6F72707265646E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065766974637564:return 1;
		case 0x006E6F6974637564:return 1;
		case 0x006E6F6974726F70:return 1;
		case 0x00746E6569636966:return 1;
		default:return 0;
		}
	case 0x6F72707265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974637564:return 1;
		case 0x006E6F6974726F70:return 1;
		case 0x0073756F72657073:return 1;
		default:return 0;
		}
	case 0x6F72707265707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974637564:return 1;
		default:return 0;
		}
	case 0x6F72707265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6169636E6976:return 1;
		default:return 0;
		}
	case 0x6F7274656D6E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6174696C6F70:return 1;
		default:return 0;
		}
	case 0x6F7274696E697274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E616874656D:return 1;
		case 0x00656E65756C6F74:return 1;
		default:return 0;
		}
	case 0x6F7274696E6E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064657A696E6567:return 1;
		default:return 0;
		}
	case 0x6F72746E69627573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974637564:return 1;
		case 0x0079726F74637564:return 1;
		default:return 0;
		}
	case 0x6F72746E6F636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616973726576:return 1;
		default:return 0;
		}
	case 0x6F72746F69656C70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636970:return 1;
		default:return 0;
		}
	case 0x6F72746F696C6568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636970:return 1;
		default:return 0;
		}
	case 0x6F72746F69746561:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636970:return 1;
		default:return 0;
		}
	case 0x6F72746F6D656863:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636970:return 1;
		default:return 0;
		}
	case 0x6F72746F73696E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636970:return 1;
		default:return 0;
		}
	case 0x6F72746F746F6870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636970:return 1;
		default:return 0;
		}
	case 0x6F72746F74706168:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636970:return 1;
		default:return 0;
		}
	case 0x6F727473616E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6163696D6F6E:return 1;
		default:return 0;
		}
	case 0x6F727473696E6973:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C617274786564:return 1;
		default:return 0;
		}
	case 0x6F7275656C706964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00636974656E6567:return 1;
		case 0x00736973656E6567:return 1;
		default:return 0;
		}
	case 0x6F7275656E6F7061:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079687061687272:return 1;
		default:return 0;
		}
	case 0x6F72796870726F70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00636974696E6567:return 1;
		case 0x0063697473616C62:return 1;
		case 0x00737574696E6567:return 1;
		default:return 0;
		}
	case 0x6F73656F69726570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616567616870:return 1;
		default:return 0;
		}
	case 0x6F73656F72746572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616567616870:return 1;
		default:return 0;
		}
	case 0x6F736E6F63657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006465746164696C:return 1;
		default:return 0;
		}
	case 0x6F736F6D61757173:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065746169646172:return 1;
		default:return 0;
		}
	case 0x6F736F6E70696564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697473696870:return 1;
		default:return 0;
		}
	case 0x6F736F7972636164:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00736974696E656C:return 1;
		default:return 0;
		}
	case 0x6F73726570736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079676F6C6F6469:return 1;
		default:return 0;
		}
	case 0x6F73726576696E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369676F6C:return 1;
		default:return 0;
		}
	case 0x6F73736169636F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616963:return 1;
		default:return 0;
		}
	case 0x6F7373616C616874:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696870617267:return 1;
		case 0x0072656870617267:return 1;
		case 0x0073756F6C696870:return 1;
		case 0x0079706172656874:return 1;
		default:return 0;
		}
	case 0x6F737365666F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696C616972:return 1;
		default:return 0;
		}
	case 0x6F7461636E757274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657461756E6973:return 1;
		default:return 0;
		}
	case 0x6F74616C75676E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F62626967:return 1;
		case 0x0073756F756E6973:return 1;
		default:return 0;
		}
	case 0x6F74616D656E6963:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696870617267:return 1;
		case 0x0072656870617267:return 1;
		default:return 0;
		}
	case 0x6F74616D67696E65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072656870617267:return 1;
		default:return 0;
		}
	case 0x6F74616D6F726863:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006169706F737964:return 1;
		case 0x0063696870617267:return 1;
		case 0x0063697265687073:return 1;
		case 0x0073756F6C696870:return 1;
		case 0x0073756F726F6870:return 1;
		default:return 0;
		}
	case 0x6F74616D72657073:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696D73616C70:return 1;
		case 0x00636974656E6567:return 1;
		case 0x0063697473616C62:return 1;
		case 0x00736973656E6567:return 1;
		case 0x0073756F726F6870:return 1;
		default:return 0;
		}
	case 0x6F74616D73616C70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073697865687272:return 1;
		default:return 0;
		}
	case 0x6F74616D75656E70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696870617267:return 1;
		case 0x0063696870726F6D:return 1;
		case 0x006C616369676F6C:return 1;
		case 0x0072656870617267:return 1;
		case 0x0073756F726F6870:return 1;
		case 0x0079706172656874:return 1;
		default:return 0;
		}
	case 0x6F7461726F726570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636972:return 1;
		default:return 0;
		}
	case 0x6F746174736F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369736576:return 1;
		default:return 0;
		}
	case 0x6F7463656C616964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369676F6C:return 1;
		default:return 0;
		}
	case 0x6F74656B69746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00736973656E6567:return 1;
		default:return 0;
		}
	case 0x6F74656C706D6973:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696E61696E:return 1;
		default:return 0;
		}
	case 0x6F7469706963636F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064696F7473616D:return 1;
		case 0x006C61746E6F7266:return 1;
		case 0x0072616C69736162:return 1;
		default:return 0;
		}
	case 0x6F746972656D6564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C73756F6972:return 1;
		default:return 0;
		}
	case 0x6F746972656D6D69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C73756F6972:return 1;
		default:return 0;
		}
	case 0x6F746972656D6E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C73756F6972:return 1;
		default:return 0;
		}
	case 0x6F74697361726170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369676F6C:return 1;
		case 0x006D7369706F7274:return 1;
		default:return 0;
		}
	case 0x6F746D7563726963:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072616C6C69736E:return 1;
		default:return 0;
		}
	case 0x6F746E656D696C61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079706172656874:return 1;
		default:return 0;
		}
	case 0x6F746E6F656C6170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696870617267:return 1;
		case 0x006C616369676F6C:return 1;
		default:return 0;
		}
	case 0x6F746F62656C6870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C6163696D:return 1;
		default:return 0;
		}
	case 0x6F746F6572796874:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369736F636978:return 1;
		default:return 0;
		}
	case 0x6F746F6870616964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D7369706F7274:return 1;
		default:return 0;
		}
	case 0x6F746F68706F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D7369706F7274:return 1;
		default:return 0;
		}
	case 0x6F746F6E6162696C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F726F6870:return 1;
		default:return 0;
		}
	case 0x6F746F7275656C70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064696F6972616D:return 1;
		default:return 0;
		}
	case 0x6F74736968657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636972:return 1;
		default:return 0;
		}
	case 0x6F747369746F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369676F6C:return 1;
		default:return 0;
		}
	case 0x6F74736F70616E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C6163696C:return 1;
		default:return 0;
		}
	case 0x6F7475616E6F6870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696870617267:return 1;
		default:return 0;
		}
	case 0x6F747561796C6F70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696870617267:return 1;
		default:return 0;
		}
	case 0x6F7479636F6D6568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00736973656E6567:return 1;
		case 0x0073697370697274:return 1;
		default:return 0;
		}
	case 0x6F7479636F6E6F6D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073697365696F70:return 1;
		default:return 0;
		}
	case 0x6F747968706F6F7A:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369676F6C:return 1;
		default:return 0;
		}
	case 0x6F76697571656E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C6163:return 1;
		default:return 0;
		}
	case 0x6F77656C746E6567:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00646F6F686E616D:return 1;
		case 0x00656B696C6E616D:return 1;
		default:return 0;
		}
	case 0x6F776F68706C7573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696D6172666C:return 1;
		default:return 0;
		}
	case 0x6F7773656B6F7073:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00706968736E616D:return 1;
		default:return 0;
		}
	case 0x6F77737466617264:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00706968736E616D:return 1;
		default:return 0;
		}
	case 0x6F777374726F7073:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00706968736E616D:return 1;
		default:return 0;
		}
	case 0x6F786F6461726170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072656870617267:return 1;
		default:return 0;
		}
	case 0x6F79686F696E6567:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6173736F6C67:return 1;
		case 0x00737573736F6C67:return 1;
		default:return 0;
		}
	case 0x6F7968706F6E6F6D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D7369746E6F64:return 1;
		default:return 0;
		}
	case 0x6F796D61696D6568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061696E65687473:return 1;
		default:return 0;
		}
	case 0x6F796D6172746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616964726163:return 1;
		default:return 0;
		}
	case 0x6F796D6F69676E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00616D6F63726173:return 1;
		case 0x0063616964726163:return 1;
		default:return 0;
		}
	case 0x6F796D6F696C6563:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796D6F7463656D:return 1;
		default:return 0;
		}
	case 0x6F796D6F6E656461:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00616D6F72626966:return 1;
		default:return 0;
		}
	case 0x6F796D6F72626966:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796D6F7463656D:return 1;
		default:return 0;
		}
	case 0x6F796F6475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E69626D6968:return 1;
		default:return 0;
		}
	case 0x6F7A6169646E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C62617A6974:return 1;
		default:return 0;
		}
	case 0x6F7A616F64696D61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E657A6E6562:return 1;
		default:return 0;
		}
	case 0x6F7A616F6E696D61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E657A6E6562:return 1;
		default:return 0;
		}
	case 0x6F7A6F6475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61656F6C676F:return 1;
		default:return 0;
		}
	case 0x6F7A6F65616C6170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00747369676F6C6F:return 1;
		default:return 0;
		}
	case 0x7061636F64697269:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00736974696C7573:return 1;
		default:return 0;
		}
	case 0x7061637265646E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657A696C617469:return 1;
		default:return 0;
		}
	case 0x706167797A657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369737968706F:return 1;
		default:return 0;
		}
	case 0x706167797A6F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369737968706F:return 1;
		default:return 0;
		}
	case 0x70616964696D6568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073697365726F68:return 1;
		default:return 0;
		}
	case 0x70616964696D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00797469656E6168:return 1;
		default:return 0;
		}
	case 0x70616E6169746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00736978616C7968:return 1;
		default:return 0;
		}
	case 0x70616E616F726573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00736978616C7968:return 1;
		default:return 0;
		}
	case 0x7061726568746E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369747565:return 1;
		default:return 0;
		}
	case 0x7061726761696B73:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636968:return 1;
		default:return 0;
		}
	case 0x7061726761726170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636968:return 1;
		default:return 0;
		}
	case 0x70617267656C6574:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E6F68706F68:return 1;
		case 0x0065706F63736F68:return 1;
		case 0x00796C6C61636968:return 1;
		default:return 0;
		}
	case 0x706172676978656C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636968:return 1;
		default:return 0;
		}
	case 0x706172676F656469:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636968:return 1;
		default:return 0;
		}
	case 0x706172676F657261:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636968:return 1;
		default:return 0;
		}
	case 0x706172676F676F6C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636968:return 1;
		default:return 0;
		}
	case 0x706172676F6C6F62:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636968:return 1;
		default:return 0;
		}
	case 0x706172676F6C7978:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636968:return 1;
		default:return 0;
		}
	case 0x706172676F6D6564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636968:return 1;
		default:return 0;
		}
	case 0x706172676F6D6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636968:return 1;
		default:return 0;
		}
	case 0x706172676F6E6F6D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636968:return 1;
		default:return 0;
		}
	case 0x706172676F706F74:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636968:return 1;
		default:return 0;
		}
	case 0x706172676F707974:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636968:return 1;
		default:return 0;
		}
	case 0x706172676F736F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636968:return 1;
		default:return 0;
		}
	case 0x706172676F747561:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00726574656D6F68:return 1;
		case 0x00796C6C61636968:return 1;
		default:return 0;
		}
	case 0x70617369646E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E6972616570:return 1;
		default:return 0;
		}
	case 0x706174656D6E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369737968:return 1;
		default:return 0;
		}
	case 0x7061747369726570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00736974696C7968:return 1;
		default:return 0;
		}
	case 0x7065636E656F746F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00736974696C6168:return 1;
		default:return 0;
		}
	case 0x7065636E65726F70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00736974696C6168:return 1;
		default:return 0;
		}
	case 0x7065637265707061:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696E6F6974:return 1;
		case 0x007473696E6F6974:return 1;
		default:return 0;
		}
	case 0x7065646E69657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065636E65646E65:return 1;
		default:return 0;
		}
	case 0x7065647265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065636E65646E65:return 1;
		case 0x00656C6261646E65:return 1;
		case 0x0079636E65646E65:return 1;
		default:return 0;
		}
	case 0x70656C6C61726170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F64657069:return 1;
		default:return 0;
		}
	case 0x70656C6F7263696D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00726574706F6469:return 1;
		default:return 0;
		}
	case 0x70656E6F6874696C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796D6F746F7268:return 1;
		default:return 0;
		}
	case 0x70656E6F746F6870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065706F63736F68:return 1;
		case 0x0068706172676F68:return 1;
		default:return 0;
		}
	case 0x70656E6F746F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616964697268:return 1;
		case 0x006D756964697268:return 1;
		default:return 0;
		}
	case 0x70656F6475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E6972646568:return 1;
		case 0x006C61706F637369:return 1;
		default:return 0;
		}
	case 0x7065726172746C75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6163696C6275:return 1;
		default:return 0;
		}
	case 0x7065726369746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072616C75637375:return 1;
		default:return 0;
		}
	case 0x7065727065726F66:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617261:return 1;
		default:return 0;
		}
	case 0x706572746F747561:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616E61:return 1;
		default:return 0;
		}
	case 0x7065736F72647968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617261:return 1;
		default:return 0;
		}
	case 0x706573736E617274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C617268636C75:return 1;
		default:return 0;
		}
	case 0x706575716E697571:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064696F6C617465:return 1;
		case 0x0065746174636E75:return 1;
		case 0x006E61696C616465:return 1;
		default:return 0;
		}
	case 0x7069636572706572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617469:return 1;
		default:return 0;
		}
	case 0x7069636572706F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617469:return 1;
		default:return 0;
		}
	case 0x7069636974726170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6576697461:return 1;
		case 0x00796C676E697461:return 1;
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x7069637369646E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C62616E696C:return 1;
		default:return 0;
		}
	case 0x7069637369646E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C62616E696C:return 1;
		default:return 0;
		}
	case 0x7069646F6D65616C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D726F6669646F:return 1;
		default:return 0;
		}
	case 0x70696C6F72626966:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F74616D6F:return 1;
		default:return 0;
		}
	case 0x70696C7265707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061696D6564696F:return 1;
		default:return 0;
		}
	case 0x70696E7265746C61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6C617465:return 1;
		default:return 0;
		}
	case 0x7069706963616964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E697A617265:return 1;
		default:return 0;
		}
	case 0x7069726373627573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007473696E6F6974:return 1;
		default:return 0;
		}
	case 0x7069726373657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007473696E6F6974:return 1;
		default:return 0;
		}
	case 0x70697263736E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007473696E6F6974:return 1;
		default:return 0;
		}
	case 0x70697263736F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007473696E6F6974:return 1;
		default:return 0;
		}
	case 0x7069726765746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657461696C6C61:return 1;
		default:return 0;
		}
	case 0x7069736968746870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796E6F6D75656E:return 1;
		default:return 0;
		}
	case 0x70697669766F766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C73756F7261:return 1;
		default:return 0;
		}
	case 0x706C617361726170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073697469676E69:return 1;
		default:return 0;
		}
	case 0x706C617369726570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073697469676E69:return 1;
		default:return 0;
		}
	case 0x706C61736F646E65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073697469676E69:return 1;
		default:return 0;
		}
	case 0x706C75736F6E6976:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F65727568:return 1;
		default:return 0;
		}
	case 0x706D616863657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00706968736E6F69:return 1;
		default:return 0;
		}
	case 0x706D61726F6C6863:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6F63696E6568:return 1;
		default:return 0;
		}
	case 0x706D617761746163:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C73756F6974:return 1;
		default:return 0;
		}
	case 0x706D657265646E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E656D796F6C:return 1;
		default:return 0;
		}
	case 0x706D696172746C75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E6F737265:return 1;
		default:return 0;
		}
	case 0x706D696F746F6870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6973736572:return 1;
		default:return 0;
		}
	case 0x706D697265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6261626F72:return 1;
		case 0x006C616E6F737265:return 1;
		case 0x006E6F697469736F:return 1;
		default:return 0;
		}
	case 0x706D697265746661:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6973736572:return 1;
		default:return 0;
		}
	case 0x706D69736E617274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6973736572:return 1;
		default:return 0;
		}
	case 0x706D6F6365726E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6261736E65:return 1;
		default:return 0;
		}
	case 0x706D6F63696D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006465746163696C:return 1;
		default:return 0;
		}
	case 0x706D6F637265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065766974697465:return 1;
		case 0x006E6F6974697465:return 1;
		case 0x0079636E6563616C:return 1;
		default:return 0;
		}
	case 0x706D796C69726570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6169676E6168:return 1;
		default:return 0;
		}
	case 0x706D796C6F646E65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6169676E6168:return 1;
		default:return 0;
		}
	case 0x706D797361726170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697465687461:return 1;
		default:return 0;
		}
	case 0x706D79736F676176:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697465687461:return 1;
		default:return 0;
		}
	case 0x706F63696D656863:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369737968:return 1;
		default:return 0;
		}
	case 0x706F636F72746572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616C75:return 1;
		default:return 0;
		}
	case 0x706F6462796C6F6D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574696C6C7968:return 1;
		default:return 0;
		}
	case 0x706F646F70627573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6C6C7968:return 1;
		default:return 0;
		}
	case 0x706F656863617274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00736973656E6F68:return 1;
		default:return 0;
		}
	case 0x706F676E7972616C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073697369687468:return 1;
		default:return 0;
		}
	case 0x706F677972657470:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E6974616C61:return 1;
		default:return 0;
		}
	case 0x706F6863696C6F64:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369706F736F72:return 1;
		default:return 0;
		}
	case 0x706F68636E6F7262:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073697369687468:return 1;
		case 0x007973697275656C:return 1;
		default:return 0;
		}
	case 0x706F6870736F6870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574696C6C7968:return 1;
		default:return 0;
		}
	case 0x706F68746E616361:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F74616D6F:return 1;
		default:return 0;
		}
	case 0x706F6C6168706D6F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065746968637973:return 1;
		default:return 0;
		}
	case 0x706F6C6379636E65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616361696465:return 1;
		default:return 0;
		}
	case 0x706F6C6C6978616D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E6974616C61:return 1;
		default:return 0;
		}
	case 0x706F6C7974636164:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D756967617461:return 1;
		default:return 0;
		}
	case 0x706F6E61676E616D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574696C6C7968:return 1;
		default:return 0;
		}
	case 0x706F6E61706D7974:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369746F697265:return 1;
		default:return 0;
		}
	case 0x706F6E61766C6167:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065727574636E75:return 1;
		case 0x007363697473616C:return 1;
		default:return 0;
		}
	case 0x706F6E6972626966:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E656C757275:return 1;
		default:return 0;
		}
	case 0x706F707265646E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616C75:return 1;
		default:return 0;
		}
	case 0x706F707265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616C75:return 1;
		default:return 0;
		}
	case 0x706F707968746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697465726F68:return 1;
		default:return 0;
		}
	case 0x706F726265726563:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C617465697261:return 1;
		default:return 0;
		}
	case 0x706F72636964756C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697465687461:return 1;
		default:return 0;
		}
	case 0x706F726563736976:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C617465697261:return 1;
		default:return 0;
		}
	case 0x706F726574657275:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00736974696C6579:return 1;
		default:return 0;
		}
	case 0x706F726574736F70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C617465697261:return 1;
		default:return 0;
		}
	case 0x706F726574756564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065736F65746F72:return 1;
		default:return 0;
		}
	case 0x706F726765746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657461696C6C61:return 1;
		default:return 0;
		}
	case 0x706F726874657275:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61656E697265:return 1;
		default:return 0;
		}
	case 0x706F726F6C686361:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6C6C7968:return 1;
		default:return 0;
		}
	case 0x706F726F706D6574:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C617465697261:return 1;
		default:return 0;
		}
	case 0x706F72706F726573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00736978616C7968:return 1;
		default:return 0;
		}
	case 0x706F727070616572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616972:return 1;
		default:return 0;
		}
	case 0x706F727070616E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6574616972:return 1;
		default:return 0;
		}
	case 0x706F727070616E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616972:return 1;
		case 0x00796C6574616972:return 1;
		default:return 0;
		}
	case 0x706F727463656C65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697465726F68:return 1;
		case 0x0065727574636E75:return 1;
		case 0x006576697469736F:return 1;
		case 0x0073697365726F68:return 1;
		default:return 0;
		}
	case 0x706F72746F747963:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007473616C626F68:return 1;
		default:return 0;
		}
	case 0x706F727473756F62:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696E6F646568:return 1;
		default:return 0;
		}
	case 0x706F727574747567:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E6974616C61:return 1;
		default:return 0;
		}
	case 0x706F736569726570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073697469676168:return 1;
		default:return 0;
		}
	case 0x706F73656F646E65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073697469676168:return 1;
		default:return 0;
		}
	case 0x706F736F6C696870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C75636E7568:return 1;
		case 0x0070696873726568:return 1;
		case 0x0079636172636F68:return 1;
		case 0x00796C6C61636968:return 1;
		default:return 0;
		}
	case 0x706F74616D726564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369736F747968:return 1;
		default:return 0;
		}
	case 0x706F7463616C6167:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073697379687468:return 1;
		case 0x0073697469726F68:return 1;
		default:return 0;
		}
	case 0x706F74656E67616D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657469626D756C:return 1;
		default:return 0;
		}
	case 0x706F746F746F6870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007968706172676F:return 1;
		default:return 0;
		}
	case 0x706F746F74796870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007968706172676F:return 1;
		default:return 0;
		}
	case 0x706F747369686373:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006169706F736F72:return 1;
		case 0x007375706F736F72:return 1;
		default:return 0;
		}
	case 0x7070617369646E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E69746E696F:return 1;
		default:return 0;
		}
	case 0x7070696874736F70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61706D61636F:return 1;
		default:return 0;
		}
	case 0x70706F7265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F697469736F:return 1;
		default:return 0;
		}
	case 0x707075736F747561:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6973736572:return 1;
		default:return 0;
		}
	case 0x7070757374736F70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065766974617275:return 1;
		default:return 0;
		}
	case 0x7072656874616577:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E69666F6F72:return 1;
		default:return 0;
		}
	case 0x707265746E696E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6261746572:return 1;
		default:return 0;
		}
	case 0x707265746E756F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065636974636172:return 1;
		case 0x0065727573736572:return 1;
		case 0x0065727574636E75:return 1;
		case 0x00676E696461656C:return 1;
		case 0x006C61736F706F72:return 1;
		case 0x006C656C6C617261:return 1;
		case 0x006E6F697469736F:return 1;
		case 0x006E6F6974697465:return 1;
		default:return 0;
		}
	case 0x70726F636E696572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F697461726F:return 1;
		default:return 0;
		}
	case 0x70726F636F646E65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072616C75637375:return 1;
		default:return 0;
		}
	case 0x70726F6D6174656D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6261736F68:return 1;
		case 0x006C616369736F68:return 1;
		default:return 0;
		}
	case 0x70726F6D6F696469:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636968:return 1;
		default:return 0;
		}
	case 0x70726F6D6F747561:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636968:return 1;
		default:return 0;
		}
	case 0x70726F70696D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697469727968:return 1;
		default:return 0;
		}
	case 0x7073617265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617269:return 1;
		default:return 0;
		}
	case 0x70736572696D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6261746365:return 1;
		default:return 0;
		}
	case 0x70736D7563726963:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E746365:return 1;
		default:return 0;
		}
	case 0x70736E6172746E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6261737361:return 1;
		case 0x00656C626174726F:return 1;
		default:return 0;
		}
	case 0x70736F6475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369726568:return 1;
		case 0x006C617574697269:return 1;
		default:return 0;
		}
	case 0x70736F68636F7274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369726568:return 1;
		default:return 0;
		}
	case 0x70736F68706E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064657A69726F68:return 1;
		default:return 0;
		}
	case 0x70736F6E6F6C6562:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065746972656168:return 1;
		default:return 0;
		}
	case 0x70736F7265747361:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696C79646E6F:return 1;
		default:return 0;
		}
	case 0x70736F7461727473:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369726568:return 1;
		default:return 0;
		}
	case 0x70736F7470797263:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00636974656E656C:return 1;
		default:return 0;
		}
	case 0x7074736F706E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E656D656E6F:return 1;
		default:return 0;
		}
	case 0x707563636F657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646569:return 1;
		default:return 0;
		}
	case 0x707563636F6E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E6F697461:return 1;
		default:return 0;
		}
	case 0x70756365726E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617265:return 1;
		default:return 0;
		}
	case 0x7075727265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646574:return 1;
		default:return 0;
		}
	case 0x707572726F636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646574:return 1;
		default:return 0;
		}
	case 0x7078657265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065766973736572:return 1;
		default:return 0;
		}
	case 0x7079686F69676E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061696E6F747265:return 1;
		default:return 0;
		}
	case 0x7079686F7275656E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369737968706F:return 1;
		default:return 0;
		}
	case 0x7079686F746F6870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697473616E6F:return 1;
		default:return 0;
		}
	case 0x70796C61636F7061:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x70797263656C6574:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0068706172676F74:return 1;
		default:return 0;
		}
	case 0x7079736172747865:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00636974696C6968:return 1;
		default:return 0;
		}
	case 0x7079736F6C65796D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369736F6C6968:return 1;
		default:return 0;
		}
	case 0x7079746F696C6568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007968706172676F:return 1;
		default:return 0;
		}
	case 0x7079746F746F6870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007968706172676F:return 1;
		default:return 0;
		}
	case 0x7164616568627573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073726574726175:return 1;
		default:return 0;
		}
	case 0x7165736E6F636E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6169746E6575:return 1;
		default:return 0;
		}
	case 0x7165736E6F636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6169746E6575:return 1;
		default:return 0;
		}
	case 0x71696C65646E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E6563736575:return 1;
		default:return 0;
		}
	case 0x716E696C65726E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E6968736975:return 1;
		default:return 0;
		}
	case 0x716F677972657470:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065746172646175:return 1;
		default:return 0;
		}
	case 0x716F6C696E6D6F73:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F69636175:return 1;
		default:return 0;
		}
	case 0x716F746569726170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065746172646175:return 1;
		default:return 0;
		}
	case 0x717265746E756F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974736575:return 1;
		default:return 0;
		}
	case 0x71736F6E65687073:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61736F6D6175:return 1;
		default:return 0;
		}
	case 0x71736F746E6F7266:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61736F6D6175:return 1;
		default:return 0;
		}
	case 0x7261626F6E696D61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697275746962:return 1;
		default:return 0;
		}
	case 0x7261627261626564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x7261627261626572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x7261636172746574:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696C79786F62:return 1;
		case 0x007972616C6C6570:return 1;
		default:return 0;
		}
	case 0x7261636172746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007972616C6C6570:return 1;
		default:return 0;
		}
	case 0x72616361746E6570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007972616C6C6570:return 1;
		default:return 0;
		}
	case 0x72616369646F7A61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696C79786F62:return 1;
		default:return 0;
		}
	case 0x7261636972756C70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007972616C6C6570:return 1;
		default:return 0;
		}
	case 0x7261636F65616C65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F65636170:return 1;
		default:return 0;
		}
	case 0x7261636F72647968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F65636179:return 1;
		default:return 0;
		}
	case 0x7261637265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064657465727562:return 1;
		default:return 0;
		}
	case 0x7261637265707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064657465727562:return 1;
		default:return 0;
		}
	case 0x7261637265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007972616C6C6570:return 1;
		default:return 0;
		}
	case 0x7261637374736F70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E6974616C:return 1;
		default:return 0;
		}
	case 0x7261637572726576:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F65636169:return 1;
		default:return 0;
		}
	case 0x726165627265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E676E69:return 1;
		default:return 0;
		}
	case 0x726165667265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C7566:return 1;
		default:return 0;
		}
	case 0x7261656864616564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646574:return 1;
		default:return 0;
		}
	case 0x72616568646C696D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646574:return 1;
		default:return 0;
		}
	case 0x72616568646C6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646574:return 1;
		default:return 0;
		}
	case 0x72616568646E696B:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646574:return 1;
		default:return 0;
		}
	case 0x72616568646F6F67:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646574:return 1;
		default:return 0;
		}
	case 0x7261656864726168:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646574:return 1;
		default:return 0;
		}
	case 0x7261656865657266:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646574:return 1;
		default:return 0;
		}
	case 0x72616568656D6174:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646574:return 1;
		default:return 0;
		}
	case 0x7261656865736162:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646574:return 1;
		default:return 0;
		}
	case 0x7261656865757274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646574:return 1;
		default:return 0;
		}
	case 0x72616568666C6168:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646574:return 1;
		default:return 0;
		}
	case 0x7261656868676968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646574:return 1;
		default:return 0;
		}
	case 0x726165686B616577:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646574:return 1;
		default:return 0;
		}
	case 0x726165686B65656D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646574:return 1;
		default:return 0;
		}
	case 0x726165686B726164:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646574:return 1;
		default:return 0;
		}
	case 0x726165686D726177:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646574:return 1;
		default:return 0;
		}
	case 0x726165686E65706F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646574:return 1;
		default:return 0;
		}
	case 0x726165686E6F696C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646574:return 1;
		default:return 0;
		}
	case 0x726165686E6F7269:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646574:return 1;
		default:return 0;
		}
	case 0x726165686E776F64:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646574:return 1;
		default:return 0;
		}
	case 0x7261656874666F73:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646574:return 1;
		default:return 0;
		}
	case 0x72616568776F6C73:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646574:return 1;
		default:return 0;
		}
	case 0x7261656C7265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E64656E:return 1;
		default:return 0;
		}
	case 0x7261686375656E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369747369:return 1;
		default:return 0;
		}
	case 0x726168706F73616E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073697469676E79:return 1;
		default:return 0;
		}
	case 0x726168746E697073:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369706F637369:return 1;
		default:return 0;
		}
	case 0x7261696C696D6166:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		case 0x00796C676E697A69:return 1;
		default:return 0;
		}
	case 0x72616C6C69636162:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F65636169:return 1;
		default:return 0;
		}
	case 0x72616C6C6963736F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F65636169:return 1;
		default:return 0;
		}
	case 0x72616C6C69676973:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F65636169:return 1;
		default:return 0;
		}
	case 0x72616C6C69706163:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061697361746365:return 1;
		case 0x00726F746F6D6F69:return 1;
		default:return 0;
		}
	case 0x72616C75626F6C67:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F65636169:return 1;
		default:return 0;
		}
	case 0x72616C7563726963:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x72616C7563736176:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x72616C75676E6973:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x72616C756D726F66:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x72616C79646E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369736F726874:return 1;
		default:return 0;
		}
	case 0x72616D7265646E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E616D6C616873:return 1;
		default:return 0;
		}
	case 0x72616D7563726963:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072616C75636974:return 1;
		default:return 0;
		}
	case 0x72616F6475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369736F726874:return 1;
		default:return 0;
		}
	case 0x72616F6572796874:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064696F6E657479:return 1;
		default:return 0;
		}
	case 0x72616F68706C7573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F696E6573:return 1;
		default:return 0;
		}
	case 0x72616F7274736167:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073697469726874:return 1;
		default:return 0;
		}
	case 0x7261706564657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61746E656D74:return 1;
		default:return 0;
		}
	case 0x72617065646E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61746E656D74:return 1;
		default:return 0;
		}
	case 0x726170696D726576:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x7261706973736966:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x7261706D6F636E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x7261707265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D736974697361:return 1;
		default:return 0;
		}
	case 0x7261707265707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657A6974697361:return 1;
		case 0x006D736974697361:return 1;
		default:return 0;
		}
	case 0x7261707265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616D7379786F:return 1;
		case 0x00746E656D61696C:return 1;
		default:return 0;
		}
	case 0x726170736E617274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E746E65:return 1;
		default:return 0;
		}
	case 0x726170737265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E676E69:return 1;
		default:return 0;
		}
	case 0x726174656C6F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		case 0x007373656E6E6169:return 1;
		default:return 0;
		}
	case 0x7261746E656D6F6C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F65636169:return 1;
		default:return 0;
		}
	case 0x726175716E697571:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072616C75636974:return 1;
		default:return 0;
		}
	case 0x7261766572706E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E6974616369:return 1;
		default:return 0;
		}
	case 0x7261766E696D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657669746E6169:return 1;
		default:return 0;
		}
	case 0x7262696C75627574:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E616968636E61:return 1;
		default:return 0;
		}
	case 0x72626F6475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616968636E61:return 1;
		case 0x00796C726568746F:return 1;
		default:return 0;
		}
	case 0x72626F6C6C796870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616968636E61:return 1;
		default:return 0;
		}
	case 0x72626F6D69746C75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616968636E61:return 1;
		default:return 0;
		}
	case 0x72626F6D73616C65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E616968636E61:return 1;
		default:return 0;
		}
	case 0x72626F7274736F72:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616968636E61:return 1;
		default:return 0;
		}
	case 0x72626F7275656C70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616968636E61:return 1;
		default:return 0;
		}
	case 0x72626F7461726563:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616968636E61:return 1;
		default:return 0;
		}
	case 0x72636D7563726963:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065636E65637365:return 1;
		default:return 0;
		}
	case 0x72636F7269656E6F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D736963697469:return 1;
		default:return 0;
		}
	case 0x72636F7473697261:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D736963697461:return 1;
		default:return 0;
		}
	case 0x7263736172747865:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C617275747069:return 1;
		default:return 0;
		}
	case 0x7263736572706D69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6269747069:return 1;
		case 0x00796C6269747069:return 1;
		default:return 0;
		}
	case 0x7263736964657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616E696D69:return 1;
		default:return 0;
		}
	case 0x7263737265646E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6C757075:return 1;
		default:return 0;
		}
	case 0x7263737265706D69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6269747069:return 1;
		default:return 0;
		}
	case 0x7264617571627573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072616C75676E61:return 1;
		default:return 0;
		}
	case 0x72646E6F68636E65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F74616D6F:return 1;
		default:return 0;
		}
	case 0x7264796869746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369626F68706F:return 1;
		default:return 0;
		}
	case 0x7265626D656D6572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x7265627574697065:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369736F6C7563:return 1;
		default:return 0;
		}
	case 0x72656275746F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E746E61:return 1;
		default:return 0;
		}
	case 0x7265636172746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072616C6C656265:return 1;
		case 0x00796C6C61726265:return 1;
		default:return 0;
		}
	case 0x726563696E697073:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072616C6C656265:return 1;
		default:return 0;
		}
	case 0x7265636E6F636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E64656E:return 1;
		case 0x007373656E646574:return 1;
		default:return 0;
		}
	case 0x7265636F6C65796D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072616C6C656265:return 1;
		default:return 0;
		}
	case 0x7265636F6E696872:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D726F6669746F:return 1;
		default:return 0;
		}
	case 0x7265636F6E697073:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072616C6C656265:return 1;
		default:return 0;
		}
	case 0x7265636F73726F64:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636976:return 1;
		default:return 0;
		}
	case 0x7265636F746E6F70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072616C6C656265:return 1;
		default:return 0;
		}
	case 0x7265637265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072616C6C656265:return 1;
		default:return 0;
		}
	case 0x72656373616E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E696E696174:return 1;
		default:return 0;
		}
	case 0x7265646172746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C6163696D:return 1;
		default:return 0;
		}
	case 0x72656465746E6F70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F65636169:return 1;
		default:return 0;
		}
	case 0x72656469736E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657461:return 1;
		case 0x00796C6576697461:return 1;
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x7265646E6F706D69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x7265646E7573696D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007265646E617473:return 1;
		default:return 0;
		}
	case 0x7265646F69646172:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369746974616D:return 1;
		default:return 0;
		}
	case 0x7265646F69676E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369746974616D:return 1;
		default:return 0;
		}
	case 0x7265646F72616361:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369746974616D:return 1;
		default:return 0;
		}
	case 0x7265646F7275656E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369736F74616D:return 1;
		case 0x007369746974616D:return 1;
		default:return 0;
		}
	case 0x7265647265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065766974617669:return 1;
		default:return 0;
		}
	case 0x7265647968636170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369736F74616D:return 1;
		default:return 0;
		}
	case 0x7265656E696D6F64:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E676E69:return 1;
		default:return 0;
		}
	case 0x72656666656E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E6563736576:return 1;
		default:return 0;
		}
	case 0x7265666669646564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065746169746E65:return 1;
		default:return 0;
		}
	case 0x7265666669646572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065746169746E65:return 1;
		default:return 0;
		}
	case 0x726566696D6D6567:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x7265666972626D75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x726566697263756C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x72656669726F646F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x72656669726F6C66:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x726566697463616C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x726566697463756C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x7265666974726F6D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x7265666974736570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x7265667265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E676E69:return 1;
		default:return 0;
		}
	case 0x726566736E617274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007968706172676F:return 1;
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x7265676E61646E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x7265686361657274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x7265686F746F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0068637261697365:return 1;
		default:return 0;
		}
	case 0x7265687069636564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x7265687069726570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C617275656E6F:return 1;
		case 0x00726F747065636F:return 1;
		case 0x00726F7474696D6F:return 1;
		default:return 0;
		}
	case 0x726568746174616B:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00726574656D6F6D:return 1;
		default:return 0;
		}
	case 0x72656874656C6574:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0068706172676F6D:return 1;
		case 0x00726574656D6F6D:return 1;
		case 0x00797274656D6F6D:return 1;
		default:return 0;
		}
	case 0x726568746F6D6F7A:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697475657061:return 1;
		default:return 0;
		}
	case 0x726568746F726162:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0068706172676F6D:return 1;
		default:return 0;
		}
	case 0x726568746F726573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697475657061:return 1;
		default:return 0;
		}
	case 0x726568746F747561:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697475657061:return 1;
		default:return 0;
		}
	case 0x7265687475656C65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006361696E616D6F:return 1;
		case 0x006C79746361646F:return 1;
		default:return 0;
		}
	case 0x7265696869746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0074736968637261:return 1;
		default:return 0;
		}
	case 0x7265696C61766163:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E687369:return 1;
		default:return 0;
		}
	case 0x7265697571756F66:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F65636169:return 1;
		default:return 0;
		}
	case 0x72656C6369746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696C616369:return 1;
		default:return 0;
		}
	case 0x72656C6C69686373:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x72656D6172747865:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E6F696469:return 1;
		default:return 0;
		}
	case 0x72656D6F74756174:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x72656D736E617274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E6F696469:return 1;
		default:return 0;
		}
	case 0x72656E65676E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x72656E6C75766E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x72656F6475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696369746F:return 1;
		default:return 0;
		}
	case 0x72656F65616C6170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079676F6C6F6D65:return 1;
		default:return 0;
		}
	case 0x7265706172746C75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065766973617573:return 1;
		default:return 0;
		}
	case 0x7265706172746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61656E6F7469:return 1;
		case 0x006C616574736F69:return 1;
		default:return 0;
		}
	case 0x7265706172747865:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61656E6F7469:return 1;
		case 0x006C616574736F69:return 1;
		default:return 0;
		}
	case 0x72657069746C756D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064657461726F66:return 1;
		default:return 0;
		}
	case 0x7265706D65746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657461:return 1;
		default:return 0;
		}
	case 0x7265706D65746E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61746E656D61:return 1;
		case 0x007373656E657461:return 1;
		default:return 0;
		}
	case 0x7265706D65766F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657461696C6F66:return 1;
		default:return 0;
		}
	case 0x7265706F6574736F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616574736F69:return 1;
		default:return 0;
		}
	case 0x7265706F6C706168:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696D6F747369:return 1;
		default:return 0;
		}
	case 0x7265706F6C706964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696D6F747369:return 1;
		default:return 0;
		}
	case 0x7265706F6E697073:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C617265687069:return 1;
		default:return 0;
		}
	case 0x7265706F72647968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D75656E6F7469:return 1;
		default:return 0;
		}
	case 0x7265706F72657475:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61656E6F7469:return 1;
		default:return 0;
		}
	case 0x7265706F72746572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61656E6F7469:return 1;
		default:return 0;
		}
	case 0x7265706F746F6870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065766974706563:return 1;
		default:return 0;
		}
	case 0x7265707061657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974706563:return 1;
		default:return 0;
		}
	case 0x726570706F636564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x7265707265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974636566:return 1;
		default:return 0;
		}
	case 0x72657073696E656D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6563616D:return 1;
		default:return 0;
		}
	case 0x7265707369726570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369746974616D:return 1;
		default:return 0;
		}
	case 0x7265707369746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E69786F746F6D:return 1;
		default:return 0;
		}
	case 0x726570736E617274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61656E6F7469:return 1;
		default:return 0;
		}
	case 0x7265707561706564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x726570757374756F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974697473:return 1;
		default:return 0;
		}
	case 0x72657078656E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61746E656D69:return 1;
		default:return 0;
		}
	case 0x7265707968706F74:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369736F726469:return 1;
		default:return 0;
		}
	case 0x726573696D6D6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6576697461:return 1;
		case 0x00796C676E697461:return 1;
		default:return 0;
		}
	case 0x7265737265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369687061:return 1;
		default:return 0;
		}
	case 0x72657373656C6564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F65636169:return 1;
		default:return 0;
		}
	case 0x7265746172707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F656E6172:return 1;
		default:return 0;
		}
	case 0x7265746564657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C62616E696D:return 1;
		default:return 0;
		}
	case 0x7265746568746163:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x7265746572706E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61727574616E:return 1;
		default:return 0;
		}
	case 0x7265746E65726561:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061697361746365:return 1;
		default:return 0;
		}
	case 0x7265746E69657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065636E65726566:return 1;
		case 0x006E6F6973736563:return 1;
		default:return 0;
		}
	case 0x7265746E696E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065636E65726566:return 1;
		case 0x00676E6974636573:return 1;
		case 0x006E6F69746E6576:return 1;
		case 0x00746E657474696D:return 1;
		default:return 0;
		}
	case 0x7265746E696F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F69746E6576:return 1;
		default:return 0;
		}
	case 0x7265746E69736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6465747365:return 1;
		default:return 0;
		}
	case 0x7265746F74796870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079676F6C6F7461:return 1;
		default:return 0;
		}
	case 0x726574706F646E65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D7369746F6779:return 1;
		case 0x0073756F746F6779:return 1;
		default:return 0;
		}
	case 0x7265747265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F656E6172:return 1;
		default:return 0;
		}
	case 0x72657473656C6574:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065706F63736F65:return 1;
		case 0x0068706172676F65:return 1;
		default:return 0;
		}
	case 0x726574736967616D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C6169:return 1;
		default:return 0;
		}
	case 0x72657473696E696D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C6169:return 1;
		default:return 0;
		}
	case 0x7265747369726570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F646F706F:return 1;
		default:return 0;
		}
	case 0x7265766C69736564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x7265766E6F636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646574:return 1;
		default:return 0;
		}
	case 0x7265766F63736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x7265766F676E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61746E656D6E:return 1;
		default:return 0;
		}
	case 0x72657675656E616D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x726577736E616E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x726578657265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646574:return 1;
		default:return 0;
		}
	case 0x72657A74696C6F70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x72676169646E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00636974616D6D61:return 1;
		default:return 0;
		}
	case 0x72676172746E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065636E65696465:return 1;
		default:return 0;
		}
	case 0x726767617265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617661:return 1;
		default:return 0;
		}
	case 0x7267697461727473:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369687061:return 1;
		default:return 0;
		}
	case 0x72676E6F63657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616C757461:return 1;
		default:return 0;
		}
	case 0x72676F62656C6870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369687061:return 1;
		default:return 0;
		}
	case 0x72676F636978656C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369687061:return 1;
		default:return 0;
		}
	case 0x72676F636C616863:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369687061:return 1;
		default:return 0;
		}
	case 0x72676F6475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065697265737361:return 1;
		default:return 0;
		}
	case 0x72676F65616C6170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369687061:return 1;
		default:return 0;
		}
	case 0x72676F65676E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369687061:return 1;
		default:return 0;
		}
	case 0x72676F65676F6962:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369687061:return 1;
		default:return 0;
		}
	case 0x72676F65676F6F7A:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369687061:return 1;
		default:return 0;
		}
	case 0x72676F6572657473:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369687061:return 1;
		default:return 0;
		}
	case 0x72676F65726F6863:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369687061:return 1;
		default:return 0;
		}
	case 0x72676F68706D796C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00616D6F6C756E61:return 1;
		default:return 0;
		}
	case 0x72676F6870726F6D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369687061:return 1;
		default:return 0;
		}
	case 0x72676F696C626962:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369687061:return 1;
		default:return 0;
		}
	case 0x72676F6973796870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369687061:return 1;
		default:return 0;
		}
	case 0x72676F6976756C70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369687061:return 1;
		default:return 0;
		}
	case 0x72676F6D73696573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369687061:return 1;
		default:return 0;
		}
	case 0x72676F6E6165636F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369687061:return 1;
		default:return 0;
		}
	case 0x72676F6E6167726F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369687061:return 1;
		default:return 0;
		}
	case 0x72676F6E656C6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369687061:return 1;
		default:return 0;
		}
	case 0x72676F6E68636574:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369687061:return 1;
		default:return 0;
		}
	case 0x72676F6E6F726863:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00636974616D6D61:return 1;
		case 0x006C616369687061:return 1;
		default:return 0;
		}
	case 0x72676F706F746E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369687061:return 1;
		default:return 0;
		}
	case 0x72676F7265646973:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369687061:return 1;
		default:return 0;
		}
	case 0x72676F7265746568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369687061:return 1;
		default:return 0;
		}
	case 0x72676F73736F6C67:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369687061:return 1;
		default:return 0;
		}
	case 0x72676F7461727473:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369687061:return 1;
		default:return 0;
		}
	case 0x72676F74656D6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369687061:return 1;
		default:return 0;
		}
	case 0x72676F7470797263:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00636974616D6D61:return 1;
		case 0x006C616369687061:return 1;
		default:return 0;
		}
	case 0x72676F7A69686373:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E6972616765:return 1;
		default:return 0;
		}
	case 0x7267796863617262:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369687061:return 1;
		default:return 0;
		}
	case 0x7268636F63796870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065616563616D6F:return 1;
		default:return 0;
		}
	case 0x7268636F656D6F68:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D736974616D6F:return 1;
		default:return 0;
		}
	case 0x7268636F68746162:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D736974616D6F:return 1;
		default:return 0;
		}
	case 0x7268636F6874696C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073636974616D6F:return 1;
		default:return 0;
		}
	case 0x7268636F6874726F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657A6974616D6F:return 1;
		default:return 0;
		}
	case 0x7268636F696C6568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657079746F6D6F:return 1;
		default:return 0;
		}
	case 0x7268636F7263696D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656D6F736F6D6F:return 1;
		default:return 0;
		}
	case 0x7268636F746F6870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657079746F6D6F:return 1;
		case 0x00797079746F6D6F:return 1;
		default:return 0;
		}
	case 0x7268636F746F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072656C63696E6F:return 1;
		default:return 0;
		}
	case 0x7268706169746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006361697369646F:return 1;
		default:return 0;
		}
	case 0x726870616D726568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657A697469646F:return 1;
		case 0x006873697469646F:return 1;
		case 0x006D73697469646F:return 1;
		default:return 0;
		}
	case 0x7268737265646E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079746C61766569:return 1;
		default:return 0;
		}
	case 0x7268746E61656874:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079676F6C6F706F:return 1;
		default:return 0;
		}
	case 0x7268746E65736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E656D656E6F:return 1;
		case 0x00746E656D6C6C61:return 1;
		default:return 0;
		}
	case 0x7268746F63636F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E6974737561:return 1;
		default:return 0;
		}
	case 0x7268746F6574736F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369736F626D6F:return 1;
		default:return 0;
		}
	case 0x72687472616E7973:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C6169646F:return 1;
		default:return 0;
		}
	case 0x7268747972656E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00616973616C706F:return 1;
		default:return 0;
		}
	case 0x726968636167656D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E61726574706F:return 1;
		default:return 0;
		}
	case 0x72696C6C656D616C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574617274736F:return 1;
		default:return 0;
		}
	case 0x72696D7265707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6C756361:return 1;
		default:return 0;
		}
	case 0x72696E6974636570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574617274736F:return 1;
		default:return 0;
		}
	case 0x7269707369746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369746568636F:return 1;
		default:return 0;
		}
	case 0x726970736E617274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x7269747375676E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574617274736F:return 1;
		default:return 0;
		}
	case 0x726E657265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E656D6C6C6F:return 1;
		default:return 0;
		}
	case 0x726F62616C656E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657461:return 1;
		default:return 0;
		}
	case 0x726F62616C6C6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6576697461:return 1;
		default:return 0;
		}
	case 0x726F62686769656E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064656E69617473:return 1;
		default:return 0;
		}
	case 0x726F626F72726F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6576697461:return 1;
		case 0x00796C69726F7461:return 1;
		default:return 0;
		}
	case 0x726F636967617274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369746E616D6F:return 1;
		default:return 0;
		}
	case 0x726F637265707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974636572:return 1;
		default:return 0;
		}
	case 0x726F637369746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369747562:return 1;
		default:return 0;
		}
	case 0x726F63756D6F746F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369736F63796D:return 1;
		default:return 0;
		}
	case 0x726F666661736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E656D747365:return 1;
		default:return 0;
		}
	case 0x726F667265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C626164696D:return 1;
		default:return 0;
		}
	case 0x726F686F6E616C70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61746E6F7A69:return 1;
		default:return 0;
		}
	case 0x726F6870736F6870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065636E65637365:return 1;
		case 0x006E6F6974616C79:return 1;
		case 0x0073756F72656669:return 1;
		case 0x007968706172676F:return 1;
		default:return 0;
		}
	case 0x726F68747369706F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073697361696863:return 1;
		default:return 0;
		}
	case 0x726F687475616572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x726F687475616E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065766974617469:return 1;
		default:return 0;
		}
	case 0x726F687475616E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065766974617469:return 1;
		default:return 0;
		}
	case 0x726F687962626F68:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636973:return 1;
		default:return 0;
		}
	case 0x726F696863617262:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073696C61696461:return 1;
		default:return 0;
		}
	case 0x726F697265747865:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x726F6C6863697274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369746563616F:return 1;
		case 0x00656E616874656D:return 1;
		case 0x006C796874656D6F:return 1;
		default:return 0;
		}
	case 0x726F6C6863726570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E616874656F:return 1;
		case 0x006E6F6974616E69:return 1;
		default:return 0;
		}
	case 0x726F6C6F63736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x726F6D656D6D6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E6F697461:return 1;
		case 0x00796C6576697461:return 1;
		default:return 0;
		}
	case 0x726F6D6F72656874:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079676F6C6F6870:return 1;
		default:return 0;
		}
	case 0x726F6D6F74736968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079676F6C6F6870:return 1;
		default:return 0;
		}
	case 0x726F6D6F74796870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079676F6C6F6870:return 1;
		default:return 0;
		}
	case 0x726F6D6F7A6E6562:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E696C6F6870:return 1;
		default:return 0;
		}
	case 0x726F6E7265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C616D:return 1;
		default:return 0;
		}
	case 0x726F706D65747865:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		case 0x007373656E697261:return 1;
		default:return 0;
		}
	case 0x726F706F72706E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616E6F6974:return 1;
		default:return 0;
		}
	case 0x726F707075736E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646574:return 1;
		default:return 0;
		}
	case 0x726F707369626D61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065746169676E61:return 1;
		default:return 0;
		}
	case 0x726F707369726570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F65636169:return 1;
		default:return 0;
		}
	case 0x726F70736E617274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646574:return 1;
		default:return 0;
		}
	case 0x726F70736F6E6F6D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F72656669:return 1;
		default:return 0;
		}
	case 0x726F726570736568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064696F6874696E:return 1;
		default:return 0;
		}
	case 0x726F736172707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F72656669:return 1;
		default:return 0;
		}
	case 0x726F74616D656168:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073696863616872:return 1;
		default:return 0;
		}
	case 0x726F746174636964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C6169:return 1;
		default:return 0;
		}
	case 0x726F747369686373:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073696863616872:return 1;
		default:return 0;
		}
	case 0x726F76696D726576:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x726F76696E726163:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x726F776165736E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E696874:return 1;
		default:return 0;
		}
	case 0x726F77656D616C62:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E696874:return 1;
		default:return 0;
		}
	case 0x726F776874696166:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E696874:return 1;
		default:return 0;
		}
	case 0x726F776B6E616874:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E696874:return 1;
		default:return 0;
		}
	case 0x726F777369617270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E696874:return 1;
		default:return 0;
		}
	case 0x726F777468676973:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E696874:return 1;
		default:return 0;
		}
	case 0x726F777473757274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E696874:return 1;
		default:return 0;
		}
	case 0x726F796874686369:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064696F6874696E:return 1;
		default:return 0;
		}
	case 0x72706173696D6568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369747968706F:return 1;
		default:return 0;
		}
	case 0x72706173696D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369747968706F:return 1;
		default:return 0;
		}
	case 0x727061736F6C6F68:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369747968706F:return 1;
		default:return 0;
		}
	case 0x7270657361657267:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E666F6F:return 1;
		default:return 0;
		}
	case 0x72706D697265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6269737365:return 1;
		default:return 0;
		}
	case 0x72706D6F636E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6269737365:return 1;
		default:return 0;
		}
	case 0x72706F6369736576:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369746174736F:return 1;
		default:return 0;
		}
	case 0x72706F6475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369746568706F:return 1;
		case 0x0065766974696D69:return 1;
		case 0x00736963736F626F:return 1;
		case 0x0079636E616E6765:return 1;
		default:return 0;
		}
	case 0x72706F68706C7573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696E6F69706F:return 1;
		default:return 0;
		}
	case 0x72706F68746E6178:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696E6965746F:return 1;
		default:return 0;
		}
	case 0x72706F6E616C6162:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616974757065:return 1;
		default:return 0;
		}
	case 0x72706F7470797263:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574796C65736F:return 1;
		default:return 0;
		}
	case 0x727070617265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006465646E656865:return 1;
		default:return 0;
		}
	case 0x727261626D656E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E656D737361:return 1;
		case 0x00796C6465737361:return 1;
		default:return 0;
		}
	case 0x72726166646C7561:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656B696C746E61:return 1;
		default:return 0;
		}
	case 0x727265666F667572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6E696775:return 1;
		default:return 0;
		}
	case 0x72726574696D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616972747365:return 1;
		default:return 0;
		}
	case 0x727265746E696572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F697461676F:return 1;
		default:return 0;
		}
	case 0x727265746E696E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6269747075:return 1;
		case 0x00796C6465747075:return 1;
		default:return 0;
		}
	case 0x727265746E756F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C617369727065:return 1;
		case 0x006E6F6967696C65:return 1;
		case 0x006E6F6974636165:return 1;
		default:return 0;
		}
	case 0x7272697265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616769:return 1;
		default:return 0;
		}
	case 0x7274616D69746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61696E6F6D69:return 1;
		default:return 0;
		}
	case 0x7274617065746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616863726169:return 1;
		default:return 0;
		}
	case 0x7274617069746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616863726169:return 1;
		default:return 0;
		}
	case 0x7274656D656C6574:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007968706172676F:return 1;
		default:return 0;
		}
	case 0x7274656D6F726162:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007968706172676F:return 1;
		default:return 0;
		}
	case 0x7274656E65706D69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x7274657461786568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F7264656861:return 1;
		default:return 0;
		}
	case 0x727465746F747561:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007964696F6C7061:return 1;
		default:return 0;
		}
	case 0x7274657473697274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F7264656861:return 1;
		default:return 0;
		}
	case 0x7274696272616E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E697261:return 1;
		default:return 0;
		}
	case 0x7274696E61726170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E696C696E61:return 1;
		default:return 0;
		}
	case 0x7274696E6F747561:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616469:return 1;
		default:return 0;
		}
	case 0x72746E6574706573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C616E6F69:return 1;
		default:return 0;
		}
	case 0x72746E6F63627573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065766174636F61:return 1;
		default:return 0;
		}
	case 0x72746E6F63657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065766974756269:return 1;
		case 0x006E6F6974756269:return 1;
		default:return 0;
		}
	case 0x72746E6F636E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E6974756269:return 1;
		case 0x006E6F6974756269:return 1;
		case 0x0079726F74756269:return 1;
		default:return 0;
		}
	case 0x72746F6369786F74:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00636974616D7561:return 1;
		default:return 0;
		}
	case 0x72746F6475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F72656D69:return 1;
		case 0x0079726174756269:return 1;
		default:return 0;
		}
	case 0x72746F6972656874:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61636968706F:return 1;
		default:return 0;
		}
	case 0x72746F7265746568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369736F686369:return 1;
		default:return 0;
		}
	case 0x7274736572726574:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C6169:return 1;
		default:return 0;
		}
	case 0x7274736575716573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073656369727461:return 1;
		default:return 0;
		}
	case 0x7274736964657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974756269:return 1;
		default:return 0;
		}
	case 0x72747369646C616D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974756269:return 1;
		default:return 0;
		}
	case 0x72747369646E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065766974756269:return 1;
		case 0x006E6F6974756269:return 1;
		default:return 0;
		}
	case 0x72747369646F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974756269:return 1;
		default:return 0;
		}
	case 0x727473696473696D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974756269:return 1;
		default:return 0;
		}
	case 0x72747369746C756D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064656966697461:return 1;
		default:return 0;
		}
	case 0x7274736E696E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61746E656D75:return 1;
		case 0x0073736572746375:return 1;
		default:return 0;
		}
	case 0x7274736E6F636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C62616E6961:return 1;
		case 0x006C617275746375:return 1;
		case 0x00796C64656E6961:return 1;
		default:return 0;
		}
	case 0x7274736E6F6D6564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E6F697461:return 1;
		case 0x00796C6576697461:return 1;
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x7274736E6F6D6572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6576697461:return 1;
		case 0x00796C676E697461:return 1;
		default:return 0;
		}
	case 0x7274736F70616E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064657A6968706F:return 1;
		default:return 0;
		}
	case 0x7274736F7263616D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C617275746375:return 1;
		default:return 0;
		}
	case 0x7274736F7263696D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C617275746375:return 1;
		default:return 0;
		}
	case 0x7274737265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C617275746375:return 1;
		default:return 0;
		}
	case 0x7275627261636564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x7275627261636572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x7275636172747865:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D756C75636972:return 1;
		case 0x0072616C75636972:return 1;
		default:return 0;
		}
	case 0x7275636F72706D69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x7275676966657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6576697461:return 1;
		default:return 0;
		}
	case 0x72756769666E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E6F697461:return 1;
		default:return 0;
		}
	case 0x72756870736F6870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574696C796E61:return 1;
		default:return 0;
		}
	case 0x72756C6C6174656D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636967:return 1;
		default:return 0;
		}
	case 0x72757361656D6D69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x72757365726E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974636572:return 1;
		default:return 0;
		}
	case 0x7275736E656D6D69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x727574616E6E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697473696C61:return 1;
		default:return 0;
		}
	case 0x7275746369706E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6575717365:return 1;
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x7275746E65766461:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		case 0x00796C656D6F7365:return 1;
		default:return 0;
		}
	case 0x727574706C756373:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6575717365:return 1;
		default:return 0;
		}
	case 0x7275747265706E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646562:return 1;
		default:return 0;
		}
	case 0x7275747369646E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646562:return 1;
		default:return 0;
		}
	case 0x7279687461726170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006169766972706F:return 1;
		case 0x006369766972706F:return 1;
		case 0x006C61766972706F:return 1;
		default:return 0;
		}
	case 0x7279687469726570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369746964696F:return 1;
		default:return 0;
		}
	case 0x7279706F7A6E6562:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E6F6C6F7A61:return 1;
		default:return 0;
		}
	case 0x7279736F6C65796D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369736F676E69:return 1;
		default:return 0;
		}
	case 0x7361626172707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6173726F6469:return 1;
		default:return 0;
		}
	case 0x73616365646E6568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00636962616C6C79:return 1;
		case 0x00656C62616C6C79:return 1;
		default:return 0;
		}
	case 0x73616365646E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00636962616C6C79:return 1;
		default:return 0;
		}
	case 0x7361656665646E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696269:return 1;
		default:return 0;
		}
	case 0x7361656874726F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6472617774:return 1;
		default:return 0;
		}
	case 0x7361656874756F73:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6472617774:return 1;
		default:return 0;
		}
	case 0x7361656C70736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E676E69:return 1;
		case 0x00746E656D657275:return 1;
		default:return 0;
		}
	case 0x7361656D64616572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E656D657275:return 1;
		default:return 0;
		}
	case 0x7361666172746C75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F69646974:return 1;
		default:return 0;
		}
	case 0x7361666172746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072616C75636963:return 1;
		default:return 0;
		}
	case 0x7361666172747865:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072616C75636963:return 1;
		default:return 0;
		}
	case 0x7361667265707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F69646974:return 1;
		default:return 0;
		}
	case 0x7361667265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072616C75636963:return 1;
		default:return 0;
		}
	case 0x7361676F696C6563:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796D6F746F7274:return 1;
		default:return 0;
		}
	case 0x7361676F70706968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796D6F6E6F7274:return 1;
		default:return 0;
		}
	case 0x7361676F7275656E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006169676C617274:return 1;
		default:return 0;
		}
	case 0x7361696D6F636E65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x73616C626F6C6F68:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x73616C626F72656D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x73616D6573726F68:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0070696873726574:return 1;
		default:return 0;
		}
	case 0x73616D6573756F68:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0070696873726574:return 1;
		default:return 0;
		}
	case 0x73616D6F67727562:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0070696873726574:return 1;
		default:return 0;
		}
	case 0x73616F6475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00797274656D6D79:return 1;
		default:return 0;
		}
	case 0x7361706D6F636E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616E6F6973:return 1;
		default:return 0;
		}
	case 0x7361706D6F636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616E6F6973:return 1;
		default:return 0;
		}
	case 0x7361707369646E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616E6F6973:return 1;
		default:return 0;
		}
	case 0x7361746E61666E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x736174736F707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x7362617265707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F697470726F:return 1;
		default:return 0;
		}
	case 0x7362617265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F697470726F:return 1;
		default:return 0;
		}
	case 0x7362757361726170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064657475746974:return 1;
		default:return 0;
		}
	case 0x736275736E617274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6169746E6174:return 1;
		default:return 0;
		}
	case 0x736275736F6E6F6D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064657475746974:return 1;
		default:return 0;
		}
	case 0x7365636564657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0070696873726F73:return 1;
		default:return 0;
		}
	case 0x7365636F72746572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007473696E6F6973:return 1;
		default:return 0;
		}
	case 0x7365637265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007972616E6F6973:return 1;
		default:return 0;
		}
	case 0x7365646172746E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656B696C6E616D:return 1;
		default:return 0;
		}
	case 0x7365646572706E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00646574616E6974:return 1;
		default:return 0;
		}
	case 0x7365646E6F636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E69646E6563:return 1;
		case 0x006E6F69736E6563:return 1;
		default:return 0;
		}
	case 0x7365646F656C6574:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6563616D:return 1;
		default:return 0;
		}
	case 0x7365676775736E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646574:return 1;
		default:return 0;
		}
	case 0x73656C627265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646573:return 1;
		default:return 0;
		}
	case 0x73656C62756F7274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656D6F:return 1;
		default:return 0;
		}
	case 0x73656C65746F7061:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61636974616D:return 1;
		default:return 0;
		}
	case 0x73656C6F68776E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656D6F:return 1;
		default:return 0;
		}
	case 0x73656C7075726373:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656D6F:return 1;
		default:return 0;
		}
	case 0x73656D6F646E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064657461636974:return 1;
		default:return 0;
		}
	case 0x73656D7265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697265746E65:return 1;
		default:return 0;
		}
	case 0x73656D7563726963:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61676168706F:return 1;
		default:return 0;
		}
	case 0x73656F6172707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61676168706F:return 1;
		default:return 0;
		}
	case 0x7365726574657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6169746E6573:return 1;
		default:return 0;
		}
	case 0x7365726C79786568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6F6E6963726F:return 1;
		default:return 0;
		}
	case 0x7365726F6D656863:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065636E61747369:return 1;
		default:return 0;
		}
	case 0x7365726F746F6870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065636E61747369:return 1;
		default:return 0;
		}
	case 0x7365727065726E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6261746E65:return 1;
		default:return 0;
		}
	case 0x7365727065727269:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6261746E65:return 1;
		default:return 0;
		}
	case 0x736572706F636E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6261746E65:return 1;
		default:return 0;
		}
	case 0x736572707265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974706D75:return 1;
		default:return 0;
		}
	case 0x736572726F636E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E69646E6F70:return 1;
		case 0x00746E65646E6F70:return 1;
		default:return 0;
		}
	case 0x736572726F636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E69646E6F70:return 1;
		case 0x00746E65646E6F70:return 1;
		default:return 0;
		}
	case 0x7365727574636970:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657571:return 1;
		default:return 0;
		}
	case 0x73657275746E6576:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656D6F:return 1;
		default:return 0;
		}
	case 0x736573736F706E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646573:return 1;
		default:return 0;
		}
	case 0x7365746172746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072616C75636974:return 1;
		default:return 0;
		}
	case 0x7365746174736E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656B696C6E616D:return 1;
		default:return 0;
		}
	case 0x73657469636C6163:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F65636174:return 1;
		default:return 0;
		}
	case 0x7365746E6F636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646574:return 1;
		default:return 0;
		}
	case 0x7365746F65636970:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F65636174:return 1;
		default:return 0;
		}
	case 0x7365746F72706E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657A69746E6174:return 1;
		default:return 0;
		}
	case 0x7365757165736572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617274:return 1;
		default:return 0;
		}
	case 0x736575716E697571:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00636962616C6C79:return 1;
		case 0x00656C62616C6C79:return 1;
		default:return 0;
		}
	case 0x7365766E69657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00726F7461676974:return 1;
		default:return 0;
		}
	case 0x7365767265706D69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6261676974:return 1;
		default:return 0;
		}
	case 0x7365776874726F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6472617774:return 1;
		default:return 0;
		}
	case 0x7365776874756F73:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6472617774:return 1;
		default:return 0;
		}
	case 0x7368746977746F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E69646E6174:return 1;
		default:return 0;
		}
	case 0x7368746F6F746E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656D6F:return 1;
		default:return 0;
		}
	case 0x7369616C706D6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E746E61:return 1;
		default:return 0;
		}
	case 0x73696268706C7573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574696874756D:return 1;
		default:return 0;
		}
	case 0x7369626F666C7573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574696874756D:return 1;
		default:return 0;
		}
	case 0x7369646172746C75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E696C706963:return 1;
		default:return 0;
		}
	case 0x7369646F7263696D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974636573:return 1;
		default:return 0;
		}
	case 0x7369647265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F69746E6574:return 1;
		default:return 0;
		}
	case 0x7369647265707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F69746E6574:return 1;
		default:return 0;
		}
	case 0x73696568746E6170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x7369656C636E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696D61676F74:return 1;
		default:return 0;
		}
	case 0x73696665736F6C63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646574:return 1;
		default:return 0;
		}
	case 0x7369676572657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617274:return 1;
		default:return 0;
		}
	case 0x73696765726E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617274:return 1;
		default:return 0;
		}
	case 0x7369676F6C616964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x7369676F6C6C7973:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x7369676F6C737964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x73696772656E7973:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x7369686172707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369726F74:return 1;
		default:return 0;
		}
	case 0x7369686365746163:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x736968706F736E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064657461636974:return 1;
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x7369687265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369726F74:return 1;
		default:return 0;
		}
	case 0x73696B616E656870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065706F63736F74:return 1;
		default:return 0;
		}
	case 0x73696C616D6F6E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x73696C6172756C70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x73696C6175746972:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x73696C6F626D7973:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x73696D6568707565:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x73696D656C626E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646568:return 1;
		default:return 0;
		}
	case 0x73696D696E616E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x73696D6973736570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x73696D6D6F636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E6974617265:return 1;
		default:return 0;
		}
	case 0x73696D6F72706E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E676E69:return 1;
		default:return 0;
		}
	case 0x73696D736E617274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00726574656D6F73:return 1;
		case 0x007473696E6F6973:return 1;
		default:return 0;
		}
	case 0x73696E616863656D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x73696E696D6E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617274:return 1;
		default:return 0;
		}
	case 0x73696E6F6D726168:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x73696E7261766E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646568:return 1;
		default:return 0;
		}
	case 0x73696E7265746C61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6C617065:return 1;
		default:return 0;
		}
	case 0x73696E7275666E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646568:return 1;
		default:return 0;
		}
	case 0x73696E756D6D6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x73696F6475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D736972656D6F:return 1;
		default:return 0;
		}
	case 0x73696F6572657473:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065646972656D6F:return 1;
		case 0x006D736972656D6F:return 1;
		default:return 0;
		}
	case 0x73696F6D6F726863:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D736972656D6F:return 1;
		default:return 0;
		}
	case 0x73696F7A6F6C7968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x7369726165776E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656D6F:return 1;
		default:return 0;
		}
	case 0x7369726168637565:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x736972616C696870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079636172636F74:return 1;
		default:return 0;
		}
	case 0x736972656E6E616D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x73697265706F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6E656D6F70:return 1;
		default:return 0;
		}
	case 0x736972756A657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974636964:return 1;
		default:return 0;
		}
	case 0x7369746173657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974636166:return 1;
		case 0x0079726F74636166:return 1;
		default:return 0;
		}
	case 0x73697461736E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974636166:return 1;
		default:return 0;
		}
	case 0x7369746173736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974636166:return 1;
		case 0x0079726F74636166:return 1;
		default:return 0;
		}
	case 0x7369746E65696373:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x736975716E696E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6169726F7469:return 1;
		case 0x00796C6576697469:return 1;
		default:return 0;
		}
	case 0x7369766572706D69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696269:return 1;
		default:return 0;
		}
	case 0x7369766F72706D69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657A69726F7461:return 1;
		case 0x006C6169726F7461:return 1;
		case 0x006C616E6F697461:return 1;
		default:return 0;
		}
	case 0x7369767265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617469:return 1;
		case 0x007974696C696269:return 1;
		default:return 0;
		}
	case 0x736B63696C6C6F72:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656D6F:return 1;
		default:return 0;
		}
	case 0x736B636975716E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064657265766C69:return 1;
		default:return 0;
		}
	case 0x736C657272617571:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656D6F:return 1;
		default:return 0;
		}
	case 0x736C6F62696D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064657A69766568:return 1;
		default:return 0;
		}
	case 0x736E617274657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F697373696D:return 1;
		default:return 0;
		}
	case 0x736E6172746E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6261726566:return 1;
		case 0x006C616E6F697469:return 1;
		case 0x006E6F697373696D:return 1;
		case 0x0079636E65726170:return 1;
		default:return 0;
		}
	case 0x736E656665646E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696269:return 1;
		default:return 0;
		}
	case 0x736E6566666F6E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657669:return 1;
		default:return 0;
		}
	case 0x736E6566666F6E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657669:return 1;
		default:return 0;
		}
	case 0x736E65707265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657669:return 1;
		default:return 0;
		}
	case 0x736E657078656E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657669:return 1;
		default:return 0;
		}
	case 0x736E657078656E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657669:return 1;
		default:return 0;
		}
	case 0x736E65737265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6576697469:return 1;
		default:return 0;
		}
	case 0x736E657478656E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696269:return 1;
		default:return 0;
		}
	case 0x736E657478656F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657669:return 1;
		default:return 0;
		}
	case 0x736E697265646E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E656D757274:return 1;
		default:return 0;
		}
	case 0x736E697265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064657461696E61:return 1;
		case 0x0065636E65747369:return 1;
		default:return 0;
		}
	case 0x736E697265707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657A696E696C75:return 1;
		default:return 0;
		}
	case 0x736E6F6365726E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064657463757274:return 1;
		default:return 0;
		}
	case 0x736E6F6365746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61746E616E6F:return 1;
		default:return 0;
		}
	case 0x736E6F6368637261:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00726F7461726970:return 1;
		default:return 0;
		}
	case 0x736E6F63696D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61746E616E6F:return 1;
		case 0x0073756F75636970:return 1;
		case 0x00796C73756F6963:return 1;
		default:return 0;
		}
	case 0x736E6F636F736176:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00726F7463697274:return 1;
		default:return 0;
		}
	case 0x736E6F637265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065746172656469:return 1;
		case 0x006E6F6974706D75:return 1;
		case 0x00796C73756F6963:return 1;
		default:return 0;
		}
	case 0x736E6F6374736F70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61746E616E6F:return 1;
		default:return 0;
		}
	case 0x736E6F6D65646572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617274:return 1;
		default:return 0;
		}
	case 0x736E6F6D65646E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065766974617274:return 1;
		default:return 0;
		}
	case 0x736E6F6D65726E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E6974617274:return 1;
		default:return 0;
		}
	case 0x736E6F6D6F747561:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617274:return 1;
		default:return 0;
		}
	case 0x736E6F6E696D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369736E65:return 1;
		default:return 0;
		}
	case 0x736E6F7469726570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00736974696C6C69:return 1;
		default:return 0;
		}
	case 0x736F6361726F6874:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369736F6E6574:return 1;
		case 0x0073756F63617274:return 1;
		default:return 0;
		}
	case 0x736F636172746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C6163696D:return 1;
		default:return 0;
		}
	case 0x736F636976726563:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072616C75706163:return 1;
		default:return 0;
		}
	case 0x736F637265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C6163696D:return 1;
		default:return 0;
		}
	case 0x736F6461726F7073:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065746972656469:return 1;
		default:return 0;
		}
	case 0x736F6469656C616B:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369706F63:return 1;
		default:return 0;
		}
	case 0x736F646972657470:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6D726570:return 1;
		default:return 0;
		}
	case 0x736F656863617274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369736F6E6574:return 1;
		default:return 0;
		}
	case 0x736F6568746E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61636968706F:return 1;
		default:return 0;
		}
	case 0x736F676E7972616C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00616D6F72656C63:return 1;
		case 0x006C616369706F63:return 1;
		case 0x007369736F6E6574:return 1;
		default:return 0;
		}
	case 0x736F677972657470:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064696F6E656870:return 1;
		default:return 0;
		}
	case 0x736F68636E6F7262:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369736F6E6574:return 1;
		default:return 0;
		}
	case 0x736F68706174656D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F726F6870:return 1;
		default:return 0;
		}
	case 0x736F687065727473:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061696C6F626D79:return 1;
		default:return 0;
		}
	case 0x736F68706F707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F726F6870:return 1;
		default:return 0;
		}
	case 0x736F68706F727970:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F726F6870:return 1;
		default:return 0;
		}
	case 0x736F6870736F6870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065746163696C69:return 1;
		default:return 0;
		}
	case 0x736F6874696E726F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6164696C6563:return 1;
		default:return 0;
		}
	case 0x736F696D6F726361:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072616C75706163:return 1;
		default:return 0;
		}
	case 0x736F696E65737261:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065746972656469:return 1;
		default:return 0;
		}
	case 0x736F697265747261:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369736F6E6574:return 1;
		case 0x0073697370657274:return 1;
		default:return 0;
		}
	case 0x736F6C6968706E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064657A6968706F:return 1;
		default:return 0;
		}
	case 0x736F6C6F65766C61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6173616E6275:return 1;
		default:return 0;
		}
	case 0x736F6C79706D6163:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6D726570:return 1;
		default:return 0;
		}
	case 0x736F6E61676E616D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065746969626974:return 1;
		case 0x0065746972656469:return 1;
		default:return 0;
		}
	case 0x736F6E6170797274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065646963616D6F:return 1;
		case 0x0073697361696D6F:return 1;
		case 0x0073756F74616D6F:return 1;
		default:return 0;
		}
	case 0x736F6E696D756C61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065746163696C69:return 1;
		default:return 0;
		}
	case 0x736F6E706C697473:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065746972656469:return 1;
		default:return 0;
		}
	case 0x736F70617478756A:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E6F697469:return 1;
		default:return 0;
		}
	case 0x736F706572706E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E6973736573:return 1;
		default:return 0;
		}
	case 0x736F706D6F636564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x736F70736E617274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E6F697469:return 1;
		case 0x00796C6576697469:return 1;
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x736F72646E6F6863:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F74656C656B:return 1;
		default:return 0;
		}
	case 0x736F726561687073:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065746972656469:return 1;
		default:return 0;
		}
	case 0x736F726563736976:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6174656C656B:return 1;
		default:return 0;
		}
	case 0x736F726574657275:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369736F6E6574:return 1;
		default:return 0;
		}
	case 0x736F726574736167:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D726F66696574:return 1;
		default:return 0;
		}
	case 0x736F726574736F70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00726F6972657075:return 1;
		default:return 0;
		}
	case 0x736F726874657275:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369706F63:return 1;
		case 0x007369736F6E6574:return 1;
		default:return 0;
		}
	case 0x736F726874797265:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065746972656469:return 1;
		default:return 0;
		}
	case 0x736F726F706D6574:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064696F6E656870:return 1;
		default:return 0;
		}
	case 0x736F727061726170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073697469746174:return 1;
		default:return 0;
		}
	case 0x736F727069726570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073697469746174:return 1;
		default:return 0;
		}
	case 0x736F727463656C65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369677275:return 1;
		case 0x006C616369746174:return 1;
		case 0x006E6F6973736963:return 1;
		default:return 0;
		}
	case 0x736F72746E696E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065766974636570:return 1;
		default:return 0;
		}
	case 0x736F737369726570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00636962616C6C79:return 1;
		default:return 0;
		}
	case 0x736F74616D726564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F74656C656B:return 1;
		default:return 0;
		}
	case 0x736F7461756E6973:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064657461727265:return 1;
		default:return 0;
		}
	case 0x736F746569726170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064696F6E656870:return 1;
		default:return 0;
		}
	case 0x736F746E61676967:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F63617274:return 1;
		default:return 0;
		}
	case 0x736F747261746574:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00797274656D6D79:return 1;
		default:return 0;
		}
	case 0x736F7473676E7574:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065746163696C69:return 1;
		default:return 0;
		}
	case 0x736F747369686373:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073697361696D6F:return 1;
		default:return 0;
		}
	case 0x736F74756D736962:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657469746C616D:return 1;
		default:return 0;
		}
	case 0x73706F68746E6178:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061696361726479:return 1;
		default:return 0;
		}
	case 0x73706F6973796870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369686379:return 1;
		default:return 0;
		}
	case 0x73726168706C7573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0074657275696E65:return 1;
		default:return 0;
		}
	case 0x737265646E756E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E69646E6174:return 1;
		default:return 0;
		}
	case 0x73726570696D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F75636970:return 1;
		default:return 0;
		}
	case 0x737265706F6E6F6D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697275666C75:return 1;
		default:return 0;
		}
	case 0x7372657075736E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F69746974:return 1;
		default:return 0;
		}
	case 0x737265746E756F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6767757274:return 1;
		case 0x0065736972707275:return 1;
		case 0x00676E6974666168:return 1;
		case 0x0073756C756D6974:return 1;
		case 0x0079687461706D79:return 1;
		case 0x00796E6974757263:return 1;
		case 0x0079746972756365:return 1;
		default:return 0;
		}
	case 0x7372657665727269:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696269:return 1;
		default:return 0;
		}
	case 0x73726576696E6E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E697261:return 1;
		default:return 0;
		}
	case 0x7372756F63736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657669:return 1;
		default:return 0;
		}
	case 0x7373616C636E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6261696669:return 1;
		default:return 0;
		}
	case 0x737361706D696E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C64656E6F69:return 1;
		default:return 0;
		}
	case 0x7373656363616E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696269:return 1;
		default:return 0;
		}
	case 0x7373656363616E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696269:return 1;
		default:return 0;
		}
	case 0x73736563656E6E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E6974617469:return 1;
		case 0x007373656E697261:return 1;
		default:return 0;
		}
	case 0x737365707265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697473696D69:return 1;
		default:return 0;
		}
	case 0x73736572676E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C616E6F69:return 1;
		default:return 0;
		}
	case 0x73736572676F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657669:return 1;
		case 0x00796C6C616E6F69:return 1;
		default:return 0;
		}
	case 0x73736572706D6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696269:return 1;
		default:return 0;
		}
	case 0x7373657274736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C7566:return 1;
		default:return 0;
		}
	case 0x737365736E617274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065746169746E65:return 1;
		default:return 0;
		}
	case 0x737365746E697571:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065746169746E65:return 1;
		default:return 0;
		}
	case 0x7373696D64616E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696269:return 1;
		default:return 0;
		}
	case 0x7373696D65727269:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696269:return 1;
		default:return 0;
		}
	case 0x7373696F6E6E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0070696873727565:return 1;
		default:return 0;
		}
	case 0x7374686361796E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656B696C6E616D:return 1;
		default:return 0;
		}
	case 0x73746867696C6564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656D6F:return 1;
		default:return 0;
		}
	case 0x7374686775617264:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00706968736E616D:return 1;
		default:return 0;
		}
	case 0x7374726573736564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C75666E6F6F70:return 1;
		default:return 0;
		}
	case 0x7374726F70736E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656B696C6E616D:return 1;
		default:return 0;
		}
	case 0x7375616878656E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646574:return 1;
		default:return 0;
		}
	case 0x7375666F6574756C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E6563736563:return 1;
		default:return 0;
		}
	case 0x7375667265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696269:return 1;
		default:return 0;
		}
	case 0x73756C636E696E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657669:return 1;
		default:return 0;
		}
	case 0x73756C6378656E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657669:return 1;
		default:return 0;
		}
	case 0x73756C6C69657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617274:return 1;
		default:return 0;
		}
	case 0x73756C6C696E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617274:return 1;
		default:return 0;
		}
	case 0x73756C6C69736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072657A696E6F69:return 1;
		case 0x00746E656D6E6F69:return 1;
		default:return 0;
		}
	case 0x73756D6172746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C72616C7563:return 1;
		default:return 0;
		}
	case 0x73757263696D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F65636174:return 1;
		default:return 0;
		}
	case 0x73757274626F6E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657669:return 1;
		default:return 0;
		}
	case 0x73757274626F6E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657669:return 1;
		default:return 0;
		}
	case 0x7375736172746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974706563:return 1;
		default:return 0;
		}
	case 0x7375736F72746572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974706563:return 1;
		default:return 0;
		}
	case 0x7375736F72746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974706563:return 1;
		default:return 0;
		}
	case 0x7375737265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F69636970:return 1;
		default:return 0;
		}
	case 0x7375737375746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065766974706563:return 1;
		case 0x006E6F6974706563:return 1;
		default:return 0;
		}
	case 0x737963656C6F6863:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E696E696B6F74:return 1;
		case 0x00796D6F74636574:return 1;
		case 0x00796D6F74736F74:return 1;
		default:return 0;
		}
	case 0x7379636F63616870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796D6F74636574:return 1;
		default:return 0;
		}
	case 0x7379687061726170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F72656669:return 1;
		default:return 0;
		}
	case 0x73796C6361746163:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C6163696D:return 1;
		default:return 0;
		}
	case 0x73797263696D6568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E696C6C6174:return 1;
		default:return 0;
		}
	case 0x73797263696D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00636E696C6C6174:return 1;
		default:return 0;
		}
	case 0x737972636F656C70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E696C6C6174:return 1;
		default:return 0;
		}
	case 0x737972636F6C6F68:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E696C6C6174:return 1;
		default:return 0;
		}
	case 0x737972636F707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E696C6C6174:return 1;
		default:return 0;
		}
	case 0x737972636F72656D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E696C6C6174:return 1;
		default:return 0;
		}
	case 0x737972636F727970:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E696C6C6174:return 1;
		default:return 0;
		}
	case 0x73797263796C6F70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E696C6C6174:return 1;
		default:return 0;
		}
	case 0x7379736172746C75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00636974616D6574:return 1;
		default:return 0;
		}
	case 0x7461626F72707061:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657669:return 1;
		default:return 0;
		}
	case 0x7461636572706564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E69726F:return 1;
		default:return 0;
		}
	case 0x74616369646E6976:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657669:return 1;
		default:return 0;
		}
	case 0x7461636E6F636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E6974616E65:return 1;
		default:return 0;
		}
	case 0x7461636F6C6C6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C62616E6F69:return 1;
		default:return 0;
		}
	case 0x7461636F766E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C616E6F69:return 1;
		default:return 0;
		}
	case 0x7461636F766F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657669:return 1;
		default:return 0;
		}
	case 0x7461637265707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697463656C61:return 1;
		default:return 0;
		}
	case 0x7461637564656F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C616E6F69:return 1;
		default:return 0;
		}
	case 0x74616572636E6170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065736170696C6F:return 1;
		case 0x006E6F6974617A69:return 1;
		case 0x0073756F6E65676F:return 1;
		default:return 0;
		}
	case 0x74616572636F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657669:return 1;
		default:return 0;
		}
	case 0x746166646E617267:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00646F6F68726568:return 1;
		case 0x0070696873726568:return 1;
		case 0x007373656C726568:return 1;
		default:return 0;
		}
	case 0x746167756A6E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C616E6F69:return 1;
		default:return 0;
		}
	case 0x74616870736F6870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x746169636F737361:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657669:return 1;
		default:return 0;
		}
	case 0x74616964696D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F7261737365:return 1;
		default:return 0;
		}
	case 0x746169646F707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F7261737365:return 1;
		default:return 0;
		}
	case 0x7461696863797370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636972:return 1;
		default:return 0;
		}
	case 0x74616C65676E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E697A696E69:return 1;
		default:return 0;
		}
	case 0x74616C6572657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00706968736E6F69:return 1;
		default:return 0;
		}
	case 0x74616C6572726F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657669:return 1;
		default:return 0;
		}
	case 0x74616C6C65707061:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657669:return 1;
		default:return 0;
		}
	case 0x74616C6C6F636962:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C617265:return 1;
		default:return 0;
		}
	case 0x74616C6F736E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E69726F:return 1;
		default:return 0;
		}
	case 0x74616C7265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657669:return 1;
		default:return 0;
		}
	case 0x74616C736967656C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C6169726F:return 1;
		default:return 0;
		}
	case 0x74616C736E617274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C616E6F69:return 1;
		default:return 0;
		}
	case 0x74616C7563657073:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657669:return 1;
		default:return 0;
		}
	case 0x74616D616C636564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E69726F:return 1;
		default:return 0;
		}
	case 0x74616D6172746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636972:return 1;
		default:return 0;
		}
	case 0x74616D6574737973:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		case 0x007974696C616369:return 1;
		default:return 0;
		}
	case 0x74616D696C636361:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x74616D6F6C696870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00636974616D6568:return 1;
		default:return 0;
		}
	case 0x74616D6F6E6F6369:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007968706172676F:return 1;
		default:return 0;
		}
	case 0x74616D6F72686361:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x74616D73696D756E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00747369676F6C6F:return 1;
		case 0x007968706172676F:return 1;
		default:return 0;
		}
	case 0x74616D7565726F74:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007968706172676F:return 1;
		default:return 0;
		}
	case 0x74616E616C707865:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E69726F:return 1;
		default:return 0;
		}
	case 0x74616E6172666E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696C617275:return 1;
		default:return 0;
		}
	case 0x74616E6172707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696C617275:return 1;
		case 0x007473696C617275:return 1;
		default:return 0;
		}
	case 0x74616E6967616D69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657669:return 1;
		default:return 0;
		}
	case 0x74616E6E69706962:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064657463657369:return 1;
		case 0x0064657472617069:return 1;
		default:return 0;
		}
	case 0x74616E6F62726163:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x74616E7265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657A696C617275:return 1;
		case 0x006D6F646C617275:return 1;
		case 0x006D73696C617275:return 1;
		case 0x007473696C617275:return 1;
		case 0x007974696C617275:return 1;
		default:return 0;
		}
	case 0x74616E7265746C61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657669:return 1;
		default:return 0;
		}
	case 0x74616E7265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C616E6F69:return 1;
		default:return 0;
		}
	case 0x74616E736E617274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617275:return 1;
		default:return 0;
		}
	case 0x74616F65616C6170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697473697661:return 1;
		default:return 0;
		}
	case 0x7461706D6F636E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696269:return 1;
		default:return 0;
		}
	case 0x7461706D79736E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C62617A6968:return 1;
		default:return 0;
		}
	case 0x7461706F656D6F68:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636968:return 1;
		default:return 0;
		}
	case 0x7461706F6574736F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636968:return 1;
		default:return 0;
		}
	case 0x7461706F6874726F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636968:return 1;
		default:return 0;
		}
	case 0x7461706F7275656E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636968:return 1;
		default:return 0;
		}
	case 0x7461706F74736968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369676F6C6F68:return 1;
		default:return 0;
		}
	case 0x7461706F74796870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369676F6C6F68:return 1;
		case 0x0063696E65676F68:return 1;
		default:return 0;
		}
	case 0x7461707265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D7369746F6972:return 1;
		default:return 0;
		}
	case 0x74617261706D6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657669:return 1;
		default:return 0;
		}
	case 0x7461726265726574:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D726F66696C75:return 1;
		default:return 0;
		}
	case 0x746172636F6D6564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6261696669:return 1;
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x746172636F707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D726F66697265:return 1;
		default:return 0;
		}
	case 0x746172656E6E6F73:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F65636169:return 1;
		default:return 0;
		}
	case 0x74617265706F6E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657669:return 1;
		default:return 0;
		}
	case 0x7461726970736E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C616E6F69:return 1;
		default:return 0;
		}
	case 0x7461726F6C707865:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657669:return 1;
		default:return 0;
		}
	case 0x7461726F74736572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657669:return 1;
		default:return 0;
		}
	case 0x7461727265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C616E6F69:return 1;
		default:return 0;
		}
	case 0x74617274656E6570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657669:return 1;
		case 0x007373656E676E69:return 1;
		default:return 0;
		}
	case 0x7461727473627573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006572656870736F:return 1;
		default:return 0;
		}
	case 0x74617274736F6962:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079687061726769:return 1;
		default:return 0;
		}
	case 0x7461737265646E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617275:return 1;
		default:return 0;
		}
	case 0x7461737265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617275:return 1;
		default:return 0;
		}
	case 0x7461746976617267:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C616E6F69:return 1;
		default:return 0;
		}
	case 0x7461746E65736572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C616E6F69:return 1;
		default:return 0;
		}
	case 0x7461746F706D6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00706968736E6F69:return 1;
		default:return 0;
		}
	case 0x746174736F707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x746174756D6E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C616E6F69:return 1;
		default:return 0;
		}
	case 0x74617475706D6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657669:return 1;
		default:return 0;
		}
	case 0x7461747570736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657669:return 1;
		default:return 0;
		}
	case 0x7461756E69736E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657669:return 1;
		default:return 0;
		}
	case 0x7461766972706572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x74617669746C7563:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x746176726573626F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C616E6F69:return 1;
		default:return 0;
		}
	case 0x7463616F746F6870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617669:return 1;
		default:return 0;
		}
	case 0x7463617266666964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657669:return 1;
		default:return 0;
		}
	case 0x74636172746E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657669:return 1;
		case 0x007974696C696269:return 1;
		default:return 0;
		}
	case 0x7463617274736261:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657669:return 1;
		default:return 0;
		}
	case 0x7463617274736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696269:return 1;
		default:return 0;
		}
	case 0x746361736E617274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C616E6F69:return 1;
		default:return 0;
		}
	case 0x7463656665646E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696269:return 1;
		default:return 0;
		}
	case 0x7463656665646E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657669:return 1;
		default:return 0;
		}
	case 0x7463656666656E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657669:return 1;
		case 0x007373656E6C6175:return 1;
		default:return 0;
		}
	case 0x7463656666656E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C6175:return 1;
		default:return 0;
		}
	case 0x7463656A626F6E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C62616E6F69:return 1;
		case 0x00796C62616E6F69:return 1;
		default:return 0;
		}
	case 0x7463656C656C6574:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065706F63736F72:return 1;
		case 0x0068706172676F72:return 1;
		default:return 0;
		}
	case 0x7463656C656F7369:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636972:return 1;
		default:return 0;
		}
	case 0x7463656C65726170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696D6F6E6F72:return 1;
		default:return 0;
		}
	case 0x7463656C65746163:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696E6F746F72:return 1;
		case 0x0073756E6F746F72:return 1;
		default:return 0;
		}
	case 0x74636570736F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657669:return 1;
		default:return 0;
		}
	case 0x7463657073726570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656C657669:return 1;
		default:return 0;
		}
	case 0x7463657369766976:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C616E6F69:return 1;
		default:return 0;
		}
	case 0x7463697274736572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657669:return 1;
		default:return 0;
		}
	case 0x74636E6974736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656C6E6F69:return 1;
		case 0x007373656E657669:return 1;
		default:return 0;
		}
	case 0x74636E7566726570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E69726F:return 1;
		default:return 0;
		}
	case 0x74636E756A6E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657669:return 1;
		case 0x00796C6C616E6F69:return 1;
		default:return 0;
		}
	case 0x74636E75706D6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656C6E6F69:return 1;
		default:return 0;
		}
	case 0x74636E7570756361:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617275:return 1;
		default:return 0;
		}
	case 0x7463756465727269:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696269:return 1;
		default:return 0;
		}
	case 0x746375727473626F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657669:return 1;
		default:return 0;
		}
	case 0x7463757274736564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657A696C617275:return 1;
		case 0x007373656E657669:return 1;
		case 0x007974696C696269:return 1;
		default:return 0;
		}
	case 0x7463757274736E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657669:return 1;
		default:return 0;
		}
	case 0x7465626168706C61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x746563616D6F7262:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006564696C696E61:return 1;
		default:return 0;
		}
	case 0x7465657469746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696C61746F:return 1;
		default:return 0;
		}
	case 0x7465687265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E79646F7265:return 1;
		default:return 0;
		}
	case 0x7465687473656E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x74656972706F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C6169726F:return 1;
		default:return 0;
		}
	case 0x74656C6767617264:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C64656C6961:return 1;
		default:return 0;
		}
	case 0x74656C6C69756566:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697473696E6F:return 1;
		default:return 0;
		}
	case 0x74656D6874697261:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x74656D6964696361:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636972:return 1;
		default:return 0;
		}
	case 0x74656D69736E6564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636972:return 1;
		default:return 0;
		}
	case 0x74656D6976617267:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636972:return 1;
		default:return 0;
		}
	case 0x74656D6D79736962:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636972:return 1;
		default:return 0;
		}
	case 0x74656D6D79736E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636972:return 1;
		default:return 0;
		}
	case 0x74656D6F63736976:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636972:return 1;
		default:return 0;
		}
	case 0x74656D6F65676E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636972:return 1;
		default:return 0;
		}
	case 0x74656D6F68746170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696C6F6261:return 1;
		default:return 0;
		}
	case 0x74656D6F69626974:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C617372617461:return 1;
		default:return 0;
		}
	case 0x74656D6F69646172:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636972:return 1;
		default:return 0;
		}
	case 0x74656D6F69647565:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636972:return 1;
		default:return 0;
		}
	case 0x74656D6F696C6568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636972:return 1;
		default:return 0;
		}
	case 0x74656D6F696E6F67:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636972:return 1;
		default:return 0;
		}
	case 0x74656D6F6D656E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0068706172676F72:return 1;
		case 0x00796C6C61636972:return 1;
		default:return 0;
		}
	case 0x74656D6F6D6F7262:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636972:return 1;
		default:return 0;
		}
	case 0x74656D6F6E6F6369:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636972:return 1;
		default:return 0;
		}
	case 0x74656D6F70726163:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C617072616361:return 1;
		case 0x0073757072616361:return 1;
		default:return 0;
		}
	case 0x74656D6F7263696D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796772756C6C61:return 1;
		case 0x00796C6C61636972:return 1;
		default:return 0;
		}
	case 0x74656D6F72647968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796772756C6C61:return 1;
		default:return 0;
		}
	case 0x74656D6F72677968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636972:return 1;
		default:return 0;
		}
	case 0x74656D6F72756170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696C6F6261:return 1;
		case 0x0073756F6C6F6261:return 1;
		default:return 0;
		}
	case 0x74656D6F73707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636972:return 1;
		default:return 0;
		}
	case 0x74656D6F73726174:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C617372617461:return 1;
		case 0x0073757372617461:return 1;
		default:return 0;
		}
	case 0x74656D6F74656361:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636972:return 1;
		default:return 0;
		}
	case 0x74656D6F74657968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0068706172676F72:return 1;
		default:return 0;
		}
	case 0x74656D6F746F6870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0068706172676F72:return 1;
		case 0x00796C6C61636972:return 1;
		default:return 0;
		}
	case 0x74656D6F746F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0074736172687061:return 1;
		default:return 0;
		}
	case 0x74656D7265707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00616973616C7061:return 1;
		case 0x006C616369706F72:return 1;
		case 0x006D73696C6F6261:return 1;
		default:return 0;
		}
	case 0x74656D7265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C617072616361:return 1;
		case 0x006C617372617461:return 1;
		default:return 0;
		}
	case 0x74656D7968746162:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636972:return 1;
		default:return 0;
		}
	case 0x74656E67616D6564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x74656E67616D6572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x74656E697472616D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E687369:return 1;
		default:return 0;
		}
	case 0x74656F65616C6170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079676F6C6F6E68:return 1;
		default:return 0;
		}
	case 0x74656F6E65687073:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6164696F6D68:return 1;
		default:return 0;
		}
	case 0x7465706D6F636E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E746E65:return 1;
		default:return 0;
		}
	case 0x7465726365736E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656B696C797261:return 1;
		default:return 0;
		}
	case 0x7465726765726E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C7566:return 1;
		default:return 0;
		}
	case 0x7465726F72626966:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616C756369:return 1;
		default:return 0;
		}
	case 0x746574736F747561:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065706F63736F68:return 1;
		default:return 0;
		}
	case 0x7465756F686C6973:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0068706172676F74:return 1;
		default:return 0;
		}
	case 0x74686369656C6170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079676F6C6F7968:return 1;
		default:return 0;
		}
	case 0x7468676961727473:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064726177726F66:return 1;
		default:return 0;
		}
	case 0x7468706964657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697469726568:return 1;
		default:return 0;
		}
	case 0x74687069646E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697469726568:return 1;
		default:return 0;
		}
	case 0x7468706F69726465:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E61696D6C6168:return 1;
		case 0x0073756F6D6C6168:return 1;
		default:return 0;
		}
	case 0x7468706F69736162:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574696D6C6168:return 1;
		case 0x0073756F6D6C6168:return 1;
		default:return 0;
		}
	case 0x74696269686F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657669:return 1;
		default:return 0;
		}
	case 0x746964656D657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C676E697461:return 1;
		default:return 0;
		}
	case 0x7469646E6F636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00646574616E6F69:return 1;
		case 0x00796C64656E6F69:return 1;
		case 0x00796C6C616E6F69:return 1;
		default:return 0;
		}
	case 0x7469686372616E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C617275746365:return 1;
		default:return 0;
		}
	case 0x74696C656C6F6863:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079746972746F68:return 1;
		default:return 0;
		}
	case 0x74696C6C616E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065766974617265:return 1;
		default:return 0;
		}
	case 0x74696C6F69726176:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x74696C6F70616373:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x74696C6F746F6870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0068706172676F68:return 1;
		default:return 0;
		}
	case 0x74696C6F74737963:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796D6F74636568:return 1;
		default:return 0;
		}
	case 0x74696C736E617274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617265:return 1;
		default:return 0;
		}
	case 0x74696C756E617267:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x74696C79706F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x74696D697265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6576697461:return 1;
		default:return 0;
		}
	case 0x74696E65676F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657669:return 1;
		default:return 0;
		}
	case 0x7469706163657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697473696C61:return 1;
		default:return 0;
		}
	case 0x74697061636E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697473696C61:return 1;
		case 0x006E6F6974616C75:return 1;
		default:return 0;
		}
	case 0x7469706963657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		case 0x007373656E746E61:return 1;
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x746972616772616D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F72656669:return 1;
		default:return 0;
		}
	case 0x746972656E757267:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x7469726570627573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61656E6F:return 1;
		default:return 0;
		}
	case 0x74697268636C7570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6E696475:return 1;
		default:return 0;
		}
	case 0x7469726970736E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064657A696C6175:return 1;
		case 0x007373656E6C6175:return 1;
		default:return 0;
		}
	case 0x7469726F68747561:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6576697461:return 1;
		default:return 0;
		}
	case 0x7469727265747865:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C6169726F:return 1;
		default:return 0;
		}
	case 0x74697279706E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F72656669:return 1;
		default:return 0;
		}
	case 0x7469736975716361:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657669:return 1;
		default:return 0;
		}
	case 0x7469736975716E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657669:return 1;
		case 0x00796C6C6169726F:return 1;
		default:return 0;
		}
	case 0x7469736E65736564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x7469736E65736572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x7469736E65736E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657669:return 1;
		default:return 0;
		}
	case 0x7469736F70657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C616E6F69:return 1;
		default:return 0;
		}
	case 0x7469736F706D6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C616E6F69:return 1;
		default:return 0;
		}
	case 0x7469736F706F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C616E6F69:return 1;
		default:return 0;
		}
	case 0x7469736F70707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656C6E6F69:return 1;
		case 0x00796C6C616E6F69:return 1;
		default:return 0;
		}
	case 0x746973736563656E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		case 0x00796C676E697461:return 1;
		default:return 0;
		}
	case 0x7469737369636976:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6E696475:return 1;
		case 0x007972616E696475:return 1;
		default:return 0;
		}
	case 0x74697465706D6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657669:return 1;
		default:return 0;
		}
	case 0x7469747261706572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C62616E6F69:return 1;
		default:return 0;
		}
	case 0x7469757163616E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646574:return 1;
		default:return 0;
		}
	case 0x7469766F6373756D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x746C616F62727574:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00726F74616E7265:return 1;
		default:return 0;
		}
	case 0x746C756369726761:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007473696C617275:return 1;
		default:return 0;
		}
	case 0x746C75637265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617669:return 1;
		default:return 0;
		}
	case 0x746E6163796C6163:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F65636168:return 1;
		default:return 0;
		}
	case 0x746E6163796C6E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657A69706F7268:return 1;
		default:return 0;
		}
	case 0x746E61686372616D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F65636169:return 1;
		default:return 0;
		}
	case 0x746E6168706C7573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006564696E6F6D69:return 1;
		case 0x006574616E6F6D69:return 1;
		case 0x006574696E6F6D69:return 1;
		case 0x006C61696E6F6D69:return 1;
		default:return 0;
		}
	case 0x746E616972656874:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D7369706F7268:return 1;
		default:return 0;
		}
	case 0x746E616D74726F70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D7369676F6C6F:return 1;
		default:return 0;
		}
	case 0x746E617265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696E6F6761:return 1;
		default:return 0;
		}
	case 0x746E61726F6C6863:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F65636168:return 1;
		default:return 0;
		}
	case 0x746E617473627573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657669:return 1;
		case 0x007373656E6C6169:return 1;
		default:return 0;
		}
	case 0x746E656172746C75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D736169737568:return 1;
		default:return 0;
		}
	case 0x746E6563696D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E616972616E65:return 1;
		default:return 0;
		}
	case 0x746E65636F6D6F68:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636972:return 1;
		default:return 0;
		}
	case 0x746E656469726570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00616973616C636F:return 1;
		default:return 0;
		}
	case 0x746E6565616C6170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079676F6C6F6D6F:return 1;
		default:return 0;
		}
	case 0x746E65696465626F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C6169:return 1;
		default:return 0;
		}
	case 0x746E656C65726E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E676E69:return 1;
		default:return 0;
		}
	case 0x746E656D616C6966:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F72656669:return 1;
		default:return 0;
		}
	case 0x746E656D656E6574:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x746E656D67617266:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E697261:return 1;
		default:return 0;
		}
	case 0x746E656D69647572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E697261:return 1;
		default:return 0;
		}
	case 0x746E656D75677261:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6576697461:return 1;
		default:return 0;
		}
	case 0x746E656F696C6563:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796D6F746F7265:return 1;
		default:return 0;
		}
	case 0x746E656F74737963:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C65636F7265:return 1;
		default:return 0;
		}
	case 0x746E657065726E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E676E69:return 1;
		case 0x007373656E746E61:return 1;
		default:return 0;
		}
	case 0x746E657265707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D736169737568:return 1;
		default:return 0;
		}
	case 0x746E657265766572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C6169:return 1;
		default:return 0;
		}
	case 0x746E6573696D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61746E656D69:return 1;
		default:return 0;
		}
	case 0x746E65737265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61746E656D69:return 1;
		case 0x0073756F69746E65:return 1;
		default:return 0;
		}
	case 0x746E657373656E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C6169:return 1;
		default:return 0;
		}
	case 0x746E657373656F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C6169:return 1;
		default:return 0;
		}
	case 0x746E657465727269:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657669:return 1;
		default:return 0;
		}
	case 0x746E65746E696E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C616E6F69:return 1;
		default:return 0;
		}
	case 0x746E657474616E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657669:return 1;
		default:return 0;
		}
	case 0x746E657664616E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C73756F7275:return 1;
		default:return 0;
		}
	case 0x746E65766E696E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657669:return 1;
		default:return 0;
		}
	case 0x746E65767265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656D6F73657275:return 1;
		case 0x006E6F6974616C69:return 1;
		default:return 0;
		}
	case 0x746E6576756E6973:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072616C75636972:return 1;
		default:return 0;
		}
	case 0x746E696F6E65696C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E69747365:return 1;
		default:return 0;
		}
	case 0x746E696F72626966:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E69747365:return 1;
		default:return 0;
		}
	case 0x746E696F72657475:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E69747365:return 1;
		default:return 0;
		}
	case 0x746E696F73726F64:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E69747365:return 1;
		default:return 0;
		}
	case 0x746E697265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065636E65646E65:return 1;
		case 0x0079636E65646E65:return 1;
		default:return 0;
		}
	case 0x746E69727962616C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636968:return 1;
		default:return 0;
		}
	case 0x746E697369646E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064657461726765:return 1;
		case 0x0064657473657265:return 1;
		default:return 0;
		}
	case 0x746E6F6361697274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064697265746561:return 1;
		default:return 0;
		}
	case 0x746E6F63696D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974636172:return 1;
		default:return 0;
		}
	case 0x746E6F636F726361:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065727574636172:return 1;
		default:return 0;
		}
	case 0x746E6F637265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974636172:return 1;
		case 0x00746E656D746E65:return 1;
		case 0x00796C6465746E65:return 1;
		default:return 0;
		}
	case 0x746E6F65616C6170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007968706172676F:return 1;
		default:return 0;
		}
	case 0x746E756C6F766E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E697261:return 1;
		default:return 0;
		}
	case 0x746E756C6F766E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E697261:return 1;
		default:return 0;
		}
	case 0x746E756F63736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007265636E616E65:return 1;
		default:return 0;
		}
	case 0x746E7973796C6F70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616369746568:return 1;
		default:return 0;
		}
	case 0x746F626D756C6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616E617469:return 1;
		default:return 0;
		}
	case 0x746F63696C616863:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064696F69726568:return 1;
		default:return 0;
		}
	case 0x746F636973796870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079676F6C6F6568:return 1;
		default:return 0;
		}
	case 0x746F636976726563:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696361726F68:return 1;
		default:return 0;
		}
	case 0x746F6372616E6564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x746F676E7972616C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616568636172:return 1;
		default:return 0;
		}
	case 0x746F68636E6F7262:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616568636172:return 1;
		default:return 0;
		}
	case 0x746F68706167656D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007968706172676F:return 1;
		default:return 0;
		}
	case 0x746F6870656C6574:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007968706172676F:return 1;
		default:return 0;
		}
	case 0x746F68706F726561:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007968706172676F:return 1;
		default:return 0;
		}
	case 0x746F68706F727970:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007968706172676F:return 1;
		default:return 0;
		}
	case 0x746F6870736F6870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697261747261:return 1;
		case 0x0063697473676E75:return 1;
		default:return 0;
		}
	case 0x746F696D6F726361:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696361726F68:return 1;
		default:return 0;
		}
	case 0x746F6C6168706563:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696361726F68:return 1;
		default:return 0;
		}
	case 0x746F6C67796C6F70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x746F6C696B696F70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696D726568:return 1;
		default:return 0;
		}
	case 0x746F6C6C6978616D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E69627275:return 1;
		default:return 0;
		}
	case 0x746F6C7570616373:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696361726F68:return 1;
		default:return 0;
		}
	case 0x746F6D646E617267:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00646F6F68726568:return 1;
		default:return 0;
		}
	case 0x746F6E61706D7974:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61726F706D65:return 1;
		default:return 0;
		}
	case 0x746F6E696D756C61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007363696D726568:return 1;
		default:return 0;
		}
	case 0x746F6E6F6D6E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697473696568:return 1;
		default:return 0;
		}
	case 0x746F70696E656C70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079726169746E65:return 1;
		default:return 0;
		}
	case 0x746F726270657473:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00646F6F68726568:return 1;
		default:return 0;
		}
	case 0x746F726574736F70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E696D7265:return 1;
		case 0x006C61726F706D65:return 1;
		default:return 0;
		}
	case 0x746F727069746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00736973796C6F65:return 1;
		default:return 0;
		}
	case 0x746F72706F747561:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00736973796C6F65:return 1;
		default:return 0;
		}
	case 0x746F72707265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974636172:return 1;
		default:return 0;
		}
	case 0x746F727463656C65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00616973616E6168:return 1;
		case 0x00656E6968706572:return 1;
		case 0x007363696D726568:return 1;
		case 0x007363696E686365:return 1;
		case 0x0079746963696E6F:return 1;
		default:return 0;
		}
	case 0x746F746569726170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61726F706D65:return 1;
		default:return 0;
		}
	case 0x746F746E6F6E6574:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073697469636568:return 1;
		default:return 0;
		}
	case 0x746F747065727473:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616963697268:return 1;
		default:return 0;
		}
	case 0x746F7A6172746574:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x7470616261726170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x7470656363616E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x7470656378656E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C62616E6F69:return 1;
		case 0x00796C62616E6F69:return 1;
		case 0x00796C6C616E6F69:return 1;
		default:return 0;
		}
	case 0x7470697263736564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656C6E6F69:return 1;
		case 0x007373656E657669:return 1;
		default:return 0;
		}
	case 0x7470697263736E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656C6E6F69:return 1;
		default:return 0;
		}
	case 0x74706D65746E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696269:return 1;
		default:return 0;
		}
	case 0x74706D75736E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657669:return 1;
		default:return 0;
		}
	case 0x74706F6172746C75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697473696D69:return 1;
		default:return 0;
		}
	case 0x74706F63616C616D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E616967797265:return 1;
		default:return 0;
		}
	case 0x74706F646970656C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079676F6C6F7265:return 1;
		default:return 0;
		}
	case 0x74706F6863797470:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616967797265:return 1;
		case 0x006D756967797265:return 1;
		default:return 0;
		}
	case 0x74706F6E656D7968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079676F6C6F7265:return 1;
		default:return 0;
		}
	case 0x74706F6E69746361:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E616967797265:return 1;
		default:return 0;
		}
	case 0x74706F7269656863:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D756967797265:return 1;
		default:return 0;
		}
	case 0x74706F7275656C70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E616967797265:return 1;
		default:return 0;
		}
	case 0x74706F73736F7263:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E616967797265:return 1;
		default:return 0;
		}
	case 0x74706F74616C6170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064696F67797265:return 1;
		default:return 0;
		}
	case 0x7470726563736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696269:return 1;
		default:return 0;
		}
	case 0x7470796C61637565:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007968706172676F:return 1;
		default:return 0;
		}
	case 0x7470796C67616E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007968706172676F:return 1;
		default:return 0;
		}
	case 0x7472616568736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C676E696E65:return 1;
		default:return 0;
		}
	case 0x7472616963756170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616C756369:return 1;
		default:return 0;
		}
	case 0x7472616968706D61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6169646F7268:return 1;
		default:return 0;
		}
	case 0x74726169746C756D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616C756369:return 1;
		default:return 0;
		}
	case 0x7472616D65766F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616C756369:return 1;
		default:return 0;
		}
	case 0x7472616F6574736F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796D6F746F7268:return 1;
		default:return 0;
		}
	case 0x7472617265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616963696669:return 1;
		default:return 0;
		}
	case 0x7472656262696C66:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0074656262696769:return 1;
		default:return 0;
		}
	case 0x7472656373616572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E656D6E6961:return 1;
		default:return 0;
		}
	case 0x7472656373616E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C62616E6961:return 1;
		case 0x00796C62616E6961:return 1;
		default:return 0;
		}
	case 0x7472657373616E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657669:return 1;
		default:return 0;
		}
	case 0x747265746E656E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C62616E6961:return 1;
		default:return 0;
		}
	case 0x747265746E756F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065737265766172:return 1;
		case 0x00676E6970706972:return 1;
		case 0x006E6F6974636172:return 1;
		case 0x0073736170736572:return 1;
		case 0x00746E6170706972:return 1;
		case 0x0079636E65646E65:return 1;
		default:return 0;
		}
	case 0x7472657664616572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E656D657369:return 1;
		default:return 0;
		}
	case 0x7472657664616E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E656D657369:return 1;
		default:return 0;
		}
	case 0x74726F706D696E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6574616E75:return 1;
		default:return 0;
		}
	case 0x74726F706F747561:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065727574696172:return 1;
		default:return 0;
		}
	case 0x74726F7070616572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E656D6E6F69:return 1;
		default:return 0;
		}
	case 0x74726F70706F6E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656E75:return 1;
		default:return 0;
		}
	case 0x74726F70706F6E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656E75:return 1;
		default:return 0;
		}
	case 0x7472756F63616C66:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F65636169:return 1;
		default:return 0;
		}
	case 0x74736167696D6568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796D6F74636572:return 1;
		default:return 0;
		}
	case 0x747361676F646E65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636972:return 1;
		default:return 0;
		}
	case 0x74736168636E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E656D657369:return 1;
		default:return 0;
		}
	case 0x7473616C706F7061:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6D61676F:return 1;
		default:return 0;
		}
	case 0x7473616C72657665:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E676E69:return 1;
		default:return 0;
		}
	case 0x7473616D6167656D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61726F746369:return 1;
		default:return 0;
		}
	case 0x7473616D6F646E65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369746964696F:return 1;
		default:return 0;
		}
	case 0x7473616D7265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C676E697265:return 1;
		case 0x00796C6C75667265:return 1;
		default:return 0;
		}
	case 0x74736172636F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065766974616E69:return 1;
		case 0x00676E6974616E69:return 1;
		case 0x006E6F6974616E69:return 1;
		case 0x0079726F74616E69:return 1;
		default:return 0;
		}
	case 0x7473617265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6164696F7265:return 1;
		default:return 0;
		}
	case 0x74736172746E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E616C756D69:return 1;
		default:return 0;
		}
	case 0x7473627573657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974757469:return 1;
		default:return 0;
		}
	case 0x7473627573697274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974757469:return 1;
		default:return 0;
		}
	case 0x74736275736E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065746169746E61:return 1;
		default:return 0;
		}
	case 0x74736275736E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974757469:return 1;
		default:return 0;
		}
	case 0x74736275736F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974757469:return 1;
		default:return 0;
		}
	case 0x74736564696D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065766974637572:return 1;
		default:return 0;
		}
	case 0x747365646E616C63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656E69:return 1;
		default:return 0;
		}
	case 0x747365646F747561:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974637572:return 1;
		default:return 0;
		}
	case 0x747365647265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065766974637572:return 1;
		default:return 0;
		}
	case 0x74736566696E616D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E6F697461:return 1;
		case 0x00796C6576697461:return 1;
		default:return 0;
		}
	case 0x7473656769646E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696269:return 1;
		default:return 0;
		}
	case 0x7473656C646E6163:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00647261776B6369:return 1;
		default:return 0;
		}
	case 0x7473656C65636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064657A696C6169:return 1;
		default:return 0;
		}
	case 0x7473656D6F646E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616369:return 1;
		default:return 0;
		}
	case 0x7473656D6F646F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616369:return 1;
		default:return 0;
		}
	case 0x7473656E616E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064657A69746568:return 1;
		default:return 0;
		}
	case 0x7473656F7263696D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616D69:return 1;
		default:return 0;
		}
	case 0x7473657265646E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616D69:return 1;
		default:return 0;
		}
	case 0x7473657265746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E676E69:return 1;
		default:return 0;
		}
	case 0x7473657269746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F697461726F:return 1;
		default:return 0;
		}
	case 0x747365726F666572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x747365726F666E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C62616C6C61:return 1;
		default:return 0;
		}
	case 0x747365766E696572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616769:return 1;
		default:return 0;
		}
	case 0x747365766E696E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065766974616769:return 1;
		case 0x00676E6974616769:return 1;
		default:return 0;
		}
	case 0x747369647265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064657265706D65:return 1;
		case 0x007373656E746E61:return 1;
		default:return 0;
		}
	case 0x747369676F6C6870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616369:return 1;
		default:return 0;
		}
	case 0x7473696863617262:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E6F7268636F:return 1;
		default:return 0;
		}
	case 0x7473696E696D6461:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073736572746172:return 1;
		default:return 0;
		}
	case 0x7473696E696D6E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61697265:return 1;
		default:return 0;
		}
	case 0x74736972616E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369746172636F:return 1;
		default:return 0;
		}
	case 0x74736972616F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369746172636F:return 1;
		default:return 0;
		}
	case 0x7473697268636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064657A696E6169:return 1;
		case 0x00656B696C6E6169:return 1;
		case 0x007373656E6E6169:return 1;
		default:return 0;
		}
	case 0x7473697365726E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E676E69:return 1;
		default:return 0;
		}
	case 0x7473697365727269:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696269:return 1;
		default:return 0;
		}
	case 0x7473697472616E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C616369:return 1;
		default:return 0;
		}
	case 0x74736D7563726963:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065746169746E61:return 1;
		default:return 0;
		}
	case 0x74736E656D73696D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617572:return 1;
		default:return 0;
		}
	case 0x74736E697265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974637572:return 1;
		default:return 0;
		}
	case 0x74736E6F63657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974637572:return 1;
		default:return 0;
		}
	case 0x74736E6F636C616D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974637572:return 1;
		default:return 0;
		}
	case 0x74736E6F636E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065766974637572:return 1;
		case 0x006E6F6974637572:return 1;
		default:return 0;
		}
	case 0x74736E6F6373696D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065766974637572:return 1;
		case 0x006E6F6974637572:return 1;
		default:return 0;
		}
	case 0x74736F636964656D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697473697461:return 1;
		default:return 0;
		}
	case 0x74736F63696D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F72656669:return 1;
		default:return 0;
		}
	case 0x74736F63696E6F74:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E616C756D69:return 1;
		default:return 0;
		}
	case 0x74736F6475636E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616964657061:return 1;
		default:return 0;
		}
	case 0x74736F6475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00636974616D6769:return 1;
		case 0x0073756F74616D6F:return 1;
		default:return 0;
		}
	case 0x74736F67616C6C61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6E6F6D65:return 1;
		default:return 0;
		}
	case 0x74736F6863697274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C79676E6F72:return 1;
		default:return 0;
		}
	case 0x74736F6874616E67:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F74616D6F:return 1;
		default:return 0;
		}
	case 0x74736F6967616C70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F74616D6F:return 1;
		default:return 0;
		}
	case 0x74736F6C69656863:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F74616D6F:return 1;
		default:return 0;
		}
	case 0x74736F6C6C796870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064696F74616D6F:return 1;
		case 0x0073756F74616D6F:return 1;
		default:return 0;
		}
	case 0x74736F6C79636E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073697361696D6F:return 1;
		default:return 0;
		}
	case 0x74736F6D72656874:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x74736F6E67616964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616369:return 1;
		default:return 0;
		}
	case 0x74736F6E676F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065766974616369:return 1;
		case 0x006E6F6974616369:return 1;
		case 0x0079726F74616369:return 1;
		default:return 0;
		}
	case 0x74736F6E69686365:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073697361696D6F:return 1;
		default:return 0;
		}
	case 0x74736F70616E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E697A697461:return 1;
		default:return 0;
		}
	case 0x74736F7078656E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E6974616C75:return 1;
		default:return 0;
		}
	case 0x74736F72656C6373:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073697361696D6F:return 1;
		default:return 0;
		}
	case 0x74736F726574616C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00636974616D6769:return 1;
		case 0x006C6174616D6769:return 1;
		default:return 0;
		}
	case 0x74736F7265746568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F68706F72:return 1;
		case 0x0073756F6E6F6D65:return 1;
		default:return 0;
		}
	case 0x74736F746E6F646F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F74616D6F:return 1;
		default:return 0;
		}
	case 0x747375646E696564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657A696C616972:return 1;
		default:return 0;
		}
	case 0x747375646E696E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C73756F6972:return 1;
		default:return 0;
		}
	case 0x7473756A64616E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x7473757274736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C7566:return 1;
		default:return 0;
		}
	case 0x747375727473696D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E6C7566:return 1;
		default:return 0;
		}
	case 0x747379636F747561:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00797473616C706F:return 1;
		default:return 0;
		}
	case 0x7473796863617262:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696C79687061:return 1;
		case 0x00656E6F7268636F:return 1;
		case 0x0073756F74616D6F:return 1;
		default:return 0;
		}
	case 0x74737972636E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064657A696C6C61:return 1;
		default:return 0;
		}
	case 0x747379737265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657A6974616D65:return 1;
		default:return 0;
		}
	case 0x7474617265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C62616E6961:return 1;
		case 0x0065766974636172:return 1;
		case 0x006E6F6974636172:return 1;
		case 0x00746E656D686361:return 1;
		default:return 0;
		}
	case 0x74746172696D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656B616E73656C:return 1;
		default:return 0;
		}
	case 0x7474696665626E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E676E69:return 1;
		default:return 0;
		}
	case 0x7474696D65726E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E676E69:return 1;
		default:return 0;
		}
	case 0x7475616E69746361:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007968706172676F:return 1;
		default:return 0;
		}
	case 0x7475616F69646172:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007968706172676F:return 1;
		default:return 0;
		}
	case 0x7475626972747461:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657669:return 1;
		default:return 0;
		}
	case 0x74756365736E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657669:return 1;
		default:return 0;
		}
	case 0x7475636573726570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E657669:return 1;
		default:return 0;
		}
	case 0x74756C6F63616E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636968:return 1;
		default:return 0;
		}
	case 0x74756D6D6F636E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x74756D736E617274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E6F697461:return 1;
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x74756F6172746C75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F65676172:return 1;
		default:return 0;
		}
	case 0x74756F6D6C756F66:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646568:return 1;
		default:return 0;
		}
	case 0x74756F6D6E65706F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646568:return 1;
		default:return 0;
		}
	case 0x7475706572736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x7475707369646E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x7475746974736E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C616E6F69:return 1;
		default:return 0;
		}
	case 0x7479636F6375656C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061696E616C706F:return 1;
		default:return 0;
		}
	case 0x747968706F747561:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007968706172676F:return 1;
		default:return 0;
		}
	case 0x74796C65736F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617A69:return 1;
		default:return 0;
		}
	case 0x7561636F6C706168:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E656373656C:return 1;
		default:return 0;
		}
	case 0x7561636F6C706964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E656373656C:return 1;
		default:return 0;
		}
	case 0x756164646E617267:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C7265746867:return 1;
		default:return 0;
		}
	case 0x75616F6863797370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00636974616D6F74:return 1;
		default:return 0;
		}
	case 0x75616F746E6F7266:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072616C75636972:return 1;
		default:return 0;
		}
	case 0x7562617265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C746E61646E:return 1;
		default:return 0;
		}
	case 0x75626972746E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0070696873726F74:return 1;
		default:return 0;
		}
	case 0x7562697274736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007473696E6F6974:return 1;
		default:return 0;
		}
	case 0x75626C61696D6568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061697275736F6D:return 1;
		default:return 0;
		}
	case 0x75626C616F726573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00616972756E696D:return 1;
		default:return 0;
		}
	case 0x75626D616E6D6F73:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C6163696C:return 1;
		default:return 0;
		}
	case 0x75636564696D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974617373:return 1;
		default:return 0;
		}
	case 0x756365666F747561:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F697461646E:return 1;
		default:return 0;
		}
	case 0x7563696369726573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007473697275746C:return 1;
		default:return 0;
		}
	case 0x756369657274736F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007473697275746C:return 1;
		default:return 0;
		}
	case 0x7563697072697473:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007473697275746C:return 1;
		default:return 0;
		}
	case 0x75636970736E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x7563697073726570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x7563697264617571:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065746164697073:return 1;
		default:return 0;
		}
	case 0x7563697267616F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007473697275746C:return 1;
		default:return 0;
		}
	case 0x756369726F627261:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007473697275746C:return 1;
		default:return 0;
		}
	case 0x75636972746E6576:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079706F63736F6C:return 1;
		default:return 0;
		}
	case 0x75636975676E6970:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F6563616C:return 1;
		default:return 0;
		}
	case 0x75636E6F63657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C746E657272:return 1;
		default:return 0;
		}
	case 0x75636F64696D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00797261746E656D:return 1;
		default:return 0;
		}
	case 0x75636F7469627563:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F656E6174:return 1;
		default:return 0;
		}
	case 0x7563726574627573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F656E6174:return 1;
		default:return 0;
		}
	case 0x756373696D6F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x7563736F746F6870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61727574706C:return 1;
		default:return 0;
		}
	case 0x7564697571736573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065746163696C70:return 1;
		default:return 0;
		}
	case 0x7564697669646E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697473696C61:return 1;
		default:return 0;
		}
	case 0x75646E697265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C746E65676C:return 1;
		default:return 0;
		}
	case 0x75646F72706E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6576697463:return 1;
		default:return 0;
		}
	case 0x75656C6172746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697479636F6B:return 1;
		default:return 0;
		}
	case 0x75656C6F7263696D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007473616C626F6B:return 1;
		default:return 0;
		}
	case 0x75656E656D726568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x7565706172656874:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x7566697264617571:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616372:return 1;
		default:return 0;
		}
	case 0x756769626D616E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x75676E6174636572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00726574656D6F6C:return 1;
		case 0x007373656E72616C:return 1;
		default:return 0;
		}
	case 0x75676E61746C756D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E72616C:return 1;
		default:return 0;
		}
	case 0x75676E6174706573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E72616C:return 1;
		default:return 0;
		}
	case 0x75676E6974736964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C6261687369:return 1;
		case 0x00746E656D687369:return 1;
		case 0x00796C6261687369:return 1;
		case 0x00796C6465687369:return 1;
		default:return 0;
		}
	case 0x756A6E6F63627573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C61766974636E:return 1;
		default:return 0;
		}
	case 0x756C66696C6C656D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x756C667265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x756C6767616E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00726F74616E6974:return 1;
		default:return 0;
		}
	case 0x756C6767616F7369:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E65676F6E6974:return 1;
		default:return 0;
		}
	case 0x756C676E6F636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00646574616E6974:return 1;
		default:return 0;
		}
	case 0x756C6F7365727269:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E656C62:return 1;
		default:return 0;
		}
	case 0x756C6F76656E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007473696E6F6974:return 1;
		case 0x007972616E6F6974:return 1;
		default:return 0;
		}
	case 0x756C6F76656F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007473696E6F6974:return 1;
		default:return 0;
		}
	case 0x756C6F7665726E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007972616E6F6974:return 1;
		default:return 0;
		}
	case 0x756D6D6F636E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C626163696E:return 1;
		default:return 0;
		}
	case 0x756D6F72706E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F697461676C:return 1;
		default:return 0;
		}
	case 0x756E616D696D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065727574636166:return 1;
		default:return 0;
		}
	case 0x756E65676E696E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x756E657065746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616D69746C:return 1;
		default:return 0;
		}
	case 0x756E697265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F697461646E:return 1;
		default:return 0;
		}
	case 0x756E6F6475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756C6F656C63:return 1;
		default:return 0;
		}
	case 0x756F687465726F66:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656C746867:return 1;
		default:return 0;
		}
	case 0x756F6E6E61657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E656D65636E:return 1;
		default:return 0;
		}
	case 0x756F6E6E616E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E656D65636E:return 1;
		default:return 0;
		}
	case 0x756F6E6F72706E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C626165636E:return 1;
		default:return 0;
		}
	case 0x756F746163696C70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616C75646E:return 1;
		default:return 0;
		}
	case 0x756F7461756E6973:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574616C75646E:return 1;
		default:return 0;
		}
	case 0x75706172746E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007473696C61746E:return 1;
		default:return 0;
		}
	case 0x7570696E616D6E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C626174616C:return 1;
		default:return 0;
		}
	case 0x7570697264617571:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007972616E6F6D6C:return 1;
		default:return 0;
		}
	case 0x75706F636974706F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007972616C6C6970:return 1;
		default:return 0;
		}
	case 0x75706F68706C7573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065746172757072:return 1;
		default:return 0;
		}
	case 0x75706F6964726163:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007972616E6F6D6C:return 1;
		default:return 0;
		}
	case 0x75706F7274736167:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007972616E6F6D6C:return 1;
		default:return 0;
		}
	case 0x75706F7275656C70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007972616E6F6D6C:return 1;
		default:return 0;
		}
	case 0x75706F7461706568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007972616E6F6D6C:return 1;
		default:return 0;
		}
	case 0x757165696C6C696D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E656C617669:return 1;
		default:return 0;
		}
	case 0x7571657265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E656C617669:return 1;
		default:return 0;
		}
	case 0x7571657265707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6169726F7461:return 1;
		default:return 0;
		}
	case 0x757165736E617274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6169726F7461:return 1;
		default:return 0;
		}
	case 0x75716E6172746E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064657A696C6C69:return 1;
		default:return 0;
		}
	case 0x75716F626D6F6872:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697461726461:return 1;
		default:return 0;
		}
	case 0x75716F6C696C6F73:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C676E697A69:return 1;
		default:return 0;
		}
	case 0x75717365646E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065766974616D61:return 1;
		default:return 0;
		}
	case 0x757178657265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6574697369:return 1;
		default:return 0;
		}
	case 0x7572667265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064656966697463:return 1;
		default:return 0;
		}
	case 0x7572676E6F636E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x757270736972756A:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6169746E6564:return 1;
		default:return 0;
		}
	case 0x7572746E696E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696E6F6973:return 1;
		case 0x007473696E6F6973:return 1;
		default:return 0;
		}
	case 0x75727473696D6568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796D6F7463656D:return 1;
		default:return 0;
		}
	case 0x757274736E696E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6576697463:return 1;
		default:return 0;
		}
	case 0x7573697571736573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007465727568706C:return 1;
		default:return 0;
		}
	case 0x75736C6F6E656870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696E6F68706C:return 1;
		default:return 0;
		}
	case 0x75736E6F63657270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F697461746C:return 1;
		default:return 0;
		}
	case 0x75736E6F636E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006576697461746C:return 1;
		default:return 0;
		}
	case 0x75736E6F636F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F697461746C:return 1;
		default:return 0;
		}
	case 0x75736F726F6C6863:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696E6F68706C:return 1;
		default:return 0;
		}
	case 0x7574636172666E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x757469706F707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D736972617469:return 1;
		default:return 0;
		}
	case 0x7574697269746E61:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697473696C61:return 1;
		default:return 0;
		}
	case 0x7574697473627573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007972616E6F6974:return 1;
		default:return 0;
		}
	case 0x75746974736E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007473696E6F6974:return 1;
		case 0x007972616E6F6974:return 1;
		default:return 0;
		}
	case 0x75746E6563637573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616972:return 1;
		default:return 0;
		}
	case 0x75746F63696C6973:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574617473676E:return 1;
		default:return 0;
		}
	case 0x75746F68706C7573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574617473676E:return 1;
		default:return 0;
		}
	case 0x75747065636E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697473696C61:return 1;
		default:return 0;
		}
	case 0x75747365706D6574:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x75766C6F766E6F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696C6F6E696C:return 1;
		case 0x0073756F6563616C:return 1;
		default:return 0;
		}
	case 0x7661636F626C7562:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007375736F6E7265:return 1;
		default:return 0;
		}
	case 0x76616C756D697270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656469736F7265:return 1;
		default:return 0;
		}
	case 0x76616E6F6C656F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616769:return 1;
		default:return 0;
		}
	case 0x766172676372616D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F65636169:return 1;
		default:return 0;
		}
	case 0x7661727478656E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E6974616761:return 1;
		default:return 0;
		}
	case 0x7664617265646E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072657275746E65:return 1;
		default:return 0;
		}
	case 0x766569686373696D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x7665696C65626E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E676E69:return 1;
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x7665737265706E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C676E697265:return 1;
		default:return 0;
		}
	case 0x766575716E697571:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072616C75766C61:return 1;
		default:return 0;
		}
	case 0x7669646172746E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E6F697369:return 1;
		default:return 0;
		}
	case 0x766964696C6C6170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065746172746E65:return 1;
		default:return 0;
		}
	case 0x766967726F666E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E676E69:return 1;
		default:return 0;
		}
	case 0x7669726F736E6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0072616C75637361:return 1;
		default:return 0;
		}
	case 0x7669727065646E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x7669746C75636E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x76697571656E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E697461636F:return 1;
		default:return 0;
		}
	case 0x766C6F7365727269:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x766D7573726F6564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065636E65677265:return 1;
		default:return 0;
		}
	case 0x766E697265707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974756C6F:return 1;
		default:return 0;
		}
	case 0x766E6F63696D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065636E65677265:return 1;
		default:return 0;
		}
	case 0x766F677265646E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E656D6E7265:return 1;
		default:return 0;
		}
	case 0x766F677265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E656D6E7265:return 1;
		default:return 0;
		}
	case 0x766F6C6F69726176:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061696E69636361:return 1;
		default:return 0;
		}
	case 0x766F726265726563:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C617265637369:return 1;
		default:return 0;
		}
	case 0x766F72707265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F697461636F:return 1;
		case 0x00796C746E656469:return 1;
		default:return 0;
		}
	case 0x766F746569726170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C617265637369:return 1;
		default:return 0;
		}
	case 0x7672656666656E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065636E65637365:return 1;
		case 0x00656C6269637365:return 1;
		default:return 0;
		}
	case 0x7672656E7265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E73756F:return 1;
		default:return 0;
		}
	case 0x76726573626F6E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E746E61:return 1;
		default:return 0;
		}
	case 0x76726573626F6E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E746E61:return 1;
		default:return 0;
		}
	case 0x7672657365646E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E676E69:return 1;
		default:return 0;
		}
	case 0x76726573656D6974:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E676E69:return 1;
		default:return 0;
		}
	case 0x767265746E756F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974696C6F:return 1;
		default:return 0;
		}
	case 0x76727563696D6573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007261656E696C69:return 1;
		default:return 0;
		}
	case 0x7761726468746977:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E676E69:return 1;
		default:return 0;
		}
	case 0x776F6C667265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E676E69:return 1;
		default:return 0;
		}
	case 0x776F6E6B63616E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E696764656C:return 1;
		default:return 0;
		}
	case 0x776F72637265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E646564:return 1;
		default:return 0;
		}
	case 0x777265746E756F63:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064657468676965:return 1;
		default:return 0;
		}
	case 0x77726F667265766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E647261:return 1;
		default:return 0;
		}
	case 0x7773656C776F7274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006574696874726F:return 1;
		default:return 0;
		}
	case 0x7774737572746E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C696874726F:return 1;
		default:return 0;
		}
	case 0x7865646F72686361:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006573616E697274:return 1;
		default:return 0;
		}
	case 0x7865686172746574:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C617264656861:return 1;
		case 0x006E6F7264656861:return 1;
		default:return 0;
		}
	case 0x78656861746E6570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C617264656861:return 1;
		case 0x006E6F7264656861:return 1;
		default:return 0;
		}
	case 0x7865686174706568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C617264656861:return 1;
		default:return 0;
		}
	case 0x78696D7265707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E616964796C6F:return 1;
		default:return 0;
		}
	case 0x786F627261636564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E6F6974616C79:return 1;
		default:return 0;
		}
	case 0x786F69647A6E6562:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E697A616964:return 1;
		default:return 0;
		}
	case 0x786F727070616E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6574616D69:return 1;
		default:return 0;
		}
	case 0x786F746E696E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00676E6974616369:return 1;
		default:return 0;
		}
	case 0x7962736572706E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0064657461726574:return 1;
		default:return 0;
		}
	case 0x79636F68706D796C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E69786F746F74:return 1;
		default:return 0;
		}
	case 0x79636F68746E6178:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00616973706F6E61:return 1;
		default:return 0;
		}
	case 0x79636F6D6F726863:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00726574656D6F74:return 1;
		default:return 0;
		}
	case 0x79636F726170616C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796D6F746F7473:return 1;
		default:return 0;
		}
	case 0x79636F74616D6568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00726574656D6F74:return 1;
		case 0x007473616C626F74:return 1;
		default:return 0;
		}
	case 0x79636F74636F7270:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796D6F746F7473:return 1;
		default:return 0;
		}
	case 0x79636F7972636164:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006169676C617473:return 1;
		case 0x00656C65636F7473:return 1;
		case 0x00656D6F746F7473:return 1;
		case 0x00796D6F746F7473:return 1;
		default:return 0;
		}
	case 0x79646F6475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00797265746E6573:return 1;
		default:return 0;
		}
	case 0x79646F6964726163:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061697275656E73:return 1;
		default:return 0;
		}
	case 0x79646F697261766F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061697275656E73:return 1;
		default:return 0;
		}
	case 0x79646F6D72656874:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6163696D616E:return 1;
		default:return 0;
		}
	case 0x79646F74616D6568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007968706F727473:return 1;
		default:return 0;
		}
	case 0x79646F7461706568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00797265746E6573:return 1;
		default:return 0;
		}
	case 0x7968636E65726170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369746974616D:return 1;
		default:return 0;
		}
	case 0x79686C6168706563:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C65636F7264:return 1;
		default:return 0;
		}
	case 0x79686C617A6E6562:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E697A617264:return 1;
		default:return 0;
		}
	case 0x79686C796E656870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E697A617264:return 1;
		case 0x00656E6F7A617264:return 1;
		default:return 0;
		}
	case 0x79686C7974656361:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E697A617264:return 1;
		default:return 0;
		}
	case 0x79686F7265746E65:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C65636F7264:return 1;
		default:return 0;
		}
	case 0x7968706F656C6170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079676F6C6F6973:return 1;
		default:return 0;
		}
	case 0x7968706F72647968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00617274656D6F73:return 1;
		default:return 0;
		}
	case 0x7968706F72706173:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x7968706F7275656E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079676F6C6F6973:return 1;
		default:return 0;
		}
	case 0x7968706F74736968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079676F6C6F6973:return 1;
		default:return 0;
		}
	case 0x7968706F74796870:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696E65676F6C:return 1;
		case 0x0079676F6C6F6973:return 1;
		default:return 0;
		}
	case 0x7968707265707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636973:return 1;
		default:return 0;
		}
	case 0x7968726172747865:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6163696D6874:return 1;
		default:return 0;
		}
	case 0x7968727265707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6163696D6874:return 1;
		default:return 0;
		}
	case 0x79687461626F7369:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696D72656874:return 1;
		case 0x006C616D72656874:return 1;
		default:return 0;
		}
	case 0x796874656D697274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369746563616C:return 1;
		default:return 0;
		}
	case 0x7968746F63697263:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E616564696F72:return 1;
		case 0x00796D6F746F6572:return 1;
		default:return 0;
		}
	case 0x7968747265707573:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D736964696F72:return 1;
		default:return 0;
		}
	case 0x7968747265707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657A6964696F72:return 1;
		case 0x006D736964696F72:return 1;
		default:return 0;
		}
	case 0x796C656F696C6563:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796D6F746F7274:return 1;
		default:return 0;
		}
	case 0x796C676F72656968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079676F6C6F6870:return 1;
		default:return 0;
		}
	case 0x796C676F7A6E6562:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656E696C61786F:return 1;
		default:return 0;
		}
	case 0x796C677265707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061697275736F63:return 1;
		default:return 0;
		}
	case 0x796C6F6D73616C70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636974:return 1;
		default:return 0;
		}
	case 0x796C6F6E656C7073:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369746168706D:return 1;
		default:return 0;
		}
	case 0x796D6F6462616872:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00616D6F63726173:return 1;
		default:return 0;
		}
	case 0x796D6F726170616C:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796D6F746F6D6F:return 1;
		default:return 0;
		}
	case 0x796D6F7274736167:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061656872726F78:return 1;
		default:return 0;
		}
	case 0x796E656870697274:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C796874656D6C:return 1;
		default:return 0;
		}
	case 0x796E6F6475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00656C75636E756D:return 1;
		default:return 0;
		}
	case 0x796F6C706D656E75:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x79706F6D75656E70:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007861726F68746F:return 1;
		default:return 0;
		}
	case 0x79706F72706F7369:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369746563616C:return 1;
		default:return 0;
		}
	case 0x79706F7461647968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696E65676F72:return 1;
		default:return 0;
		}
	case 0x797263656E67616D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696C6C617473:return 1;
		default:return 0;
		}
	case 0x7972636F656C6170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063696C6C617473:return 1;
		default:return 0;
		}
	case 0x7972636F6E617963:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006E696C6C617473:return 1;
		default:return 0;
		}
	case 0x7972637265707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0061697365676C61:return 1;
		default:return 0;
		}
	case 0x79726561746E6570:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C6F7469726874:return 1;
		default:return 0;
		}
	case 0x7972687061746163:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006D73696E616967:return 1;
		default:return 0;
		}
	case 0x7973697264617571:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073756F62616C6C:return 1;
		default:return 0;
		}
	case 0x79736F6465726568:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079676F6C696870:return 1;
		default:return 0;
		}
	case 0x79736F6475657370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697274656D6D:return 1;
		case 0x006D7369676F6C6C:return 1;
		default:return 0;
		}
	case 0x79736F6863797370:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369746568746E:return 1;
		case 0x007369736568746E:return 1;
		default:return 0;
		}
	case 0x79736F6964726163:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369737968706D:return 1;
		default:return 0;
		}
	case 0x79736F6D72656874:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006369746C617473:return 1;
		case 0x007369736568746E:return 1;
		default:return 0;
		}
	case 0x79736F7268747261:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0073697469766F6E:return 1;
		default:return 0;
		}
	case 0x79736F72746E6563:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0063697274656D6D:return 1;
		default:return 0;
		}
	case 0x7973706D6574656D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00657A69736F6863:return 1;
		default:return 0;
		}
	case 0x7973706F656C6170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079676F6C6F6863:return 1;
		default:return 0;
		}
	case 0x7973706F68746170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079676F6C6F6863:return 1;
		default:return 0;
		}
	case 0x7973706F6874726F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079727461696863:return 1;
		default:return 0;
		}
	case 0x7973706F6E687465:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079676F6C6F6863:return 1;
		default:return 0;
		}
	case 0x7973706F7275656E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0079676F6C6F6863:return 1;
		case 0x0079727461696863:return 1;
		default:return 0;
		}
	case 0x79746F65616C6170:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00796C6C61636970:return 1;
		default:return 0;
		}
	case 0x7974736F7263616D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065726F70736F6C:return 1;
		default:return 0;
		}
	case 0x7974736F7263696D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0065726F70736F6C:return 1;
		default:return 0;
		}
	case 0x79786F6D6F726863:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x0068706172676F6C:return 1;
		default:return 0;
		}
	case 0x797A6F6D61757173:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00636974616D6F67:return 1;
		default:return 0;
		}
	case 0x797A6F6E65687073:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00636974616D6F67:return 1;
		default:return 0;
		}
	case 0x797A6F746962726F:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00636974616D6F67:return 1;
		default:return 0;
		}
	case 0x797A6F746E6F7266:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00636974616D6F67:return 1;
		default:return 0;
		}
	case 0x7A65626D656E6F6E:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x00746E656D656C7A:return 1;
		default:return 0;
		}
	case 0x7A696C61746E6174:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007373656E676E69:return 1;
		default:return 0;
		}
	case 0x7A696C6972657473:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x7A696C6974726566:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x006C616E6F697461:return 1;
		default:return 0;
		}
	case 0x7A696E676F636572:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x7A696E676F636E69:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x7A6972656D73656D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x7A6974656E67616D:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x7A69746F6E707968:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x7A69746F7A616964:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007974696C696261:return 1;
		default:return 0;
		}
	case 0x7A6F74616D726564:
		switch(wp[1] | (uint64_t)(0x0020202020202020)){
		case 0x007369736F6E6F6F:return 1;
		default:return 0;
		}
	default:return 0;
	}
}
