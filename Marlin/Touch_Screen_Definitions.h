/*
 * Touch_Screen_Definitions.h
 * Here we have all the constants related to items in the LCD Screen
 * Created: 14/11/2014 13:16:59
 *  Author: Jordi Calduch (Dryrain)
 */ 


#ifndef TOUCH_SCREEN_DEFINITIONS_H_
#define TOUCH_SCREEN_DEFINITIONS_H_


#pragma region FORMS
//Form
//without form declared///////////////////////////////
#define FORM_STOP_PRINT								1

	#define BUTTON_STOP_YES						1
	#define BUTTON_STOP_NO						61
#define BUTTON_COOLDOWN_OK					3224
#define BUTTON_COOLDOWN_OK					3224
#define BUTTON_COOLDOWN_CANCEL				74
#define STRING_VERSION								3
/////////////////////////////////////////////////////

#define FORM_SDFILES								2
	#define STRING_NAME_FILE0				23
	#define STRING_NAME_FILE1				1
	#define STRING_NAME_FILE2				8
	#define STRING_NAME_FILE3				12
	#define STRING_NAME_FILE4				16
	#define STRING_NAME_FILE5				29
	#define STRING_NAME_FILE_DUR0			24
	#define STRING_NAME_FILE_DUR1			7
	#define STRING_NAME_FILE_DUR2			25
	#define STRING_NAME_FILE_DUR3			26
	#define STRING_NAME_FILE_DUR4			30
	#define STRING_NAME_FILE_DUR5			341
	//#define STRING_FOLDER_NAME				6
	#define BUTTON_SD_SELECTED0				85
	#define BUTTON_SD_SELECTED1				15
	#define BUTTON_SD_SELECTED2				14
	#define BUTTON_SD_SELECTED3				56
	#define BUTTON_SD_SELECTED4				86
	#define BUTTON_SD_SELECTED5				847
	#define BUTTON_SD_LEFTx3				37
	#define BUTTON_SD_RIGHT					5
	#define BUTTON_FOLDER_BACK				55
	#define USERIMAGE_FOLDER_FILE           1
	#define GIF_SCROLL_BAR					 14
#define FORM_SDFILE_CONFIRMATION			15
	#define STRING_NAME_FILE6				27
	#define STRING_NAME_FILE_DUR6			28
	#define BUTTON_SDCONFIRMATION_YES		38
	#define BUTTON_SDCONFIRMATION_NO		39
#define FORM_REDO_X_CAB						3
	#define BUTTON_REDO_LEFT_CAB			27
	#define BUTTON_REDO_RIGHT_CAB			28
	#define BUTTON_REDO_X_CAB				29
#define FORM_UTILITIES								4	
		#define BUTTON_MAINTENANCE					7
#define FORM_MAIN_SCREEN							5
	#define BUTTON_GO_TEMPS					 54 
#define FORM_ZSET							11
	#define BUTTON_Z_TOP					40
	#define BUTTON_Z_BOT					46
	#define BUTTON_Z_UP						42
	#define BUTTON_Z_DOWN					45
	#define BUTTON_Z_BACK					34
	#define BUTTON_Z_ACCEPT					3
	#define GIF_Z_SET					15

#define FORM_FILAMENT								6
	#define	BUTTON_FILAMENT_OPTIONS_BACK			0
	#define	BUTTON_PURGE					159
	#define BUTTON_INSERT_FIL				2
	#define BUTTON_REMOVE_FIL				50
	
#define FORM_REMOVE_FIL							22	
	#define BUTTON_REMOVE_SELECT_LEFT			90
	#define BUTTON_REMOVE_SELECT_RIGHT			123
	#define BUTTON_REMOVE_BACK_FILAMENT			124
	#define BUTTON_REMOVE_MENU_FILAMENT			125


#define  FORM_MAINTENANCE           18
	#define Z_ADJUST				59
	#define CUSTOM_CALIB			57
	#define BUTTON_MAINTENANCE_BACKMENU    63
	#define BUTTON_MAINTENANCE_BACKUTILITIES    74
	#define CLEAN_NYLON_METODE	    80	
#define FORM_NYLON_SELECT					29
	#define BUTTON_NYLON_SELECT_BACKMAINMENU		120
	#define BUTTON_NYLON_SELECT_BACKMENU		84
	#define BUTTON_NYLON_SELECT_LEFT			91
	#define BUTTON_NYLON_SELECT_RIGHT			92
	#define BUTTON_NYLON_SELECT_GO				121
	#define BUTTON_NYLON_SELECT_SKIP			122
	#define IMAG_NYLON_SELECT_TEXT			0
#define FORM_PRINTING								9
	#define STRING_PRINTING_NOZZ1			0
	#define STRINGS_PRINTING_GCODE			2
	#define STRING_PRINTING_NOZZ2			34
	#define STRINGS_PRINTING_FEED			36
	#define STRING_PRINTING_PERCENT			37
	#define STRING_PRINTING_TIMEREMANING	4
	#define STRING_PRINTING_BED				9
	#define BUTTON_PRINT_SETTINGS			16
	#define BUTTON_PAUSE_RESUME				18
	#define BUTTON_STOP_SCREEN				19
	#define BUTTON_PRINTING_BACK_STATE     68
#define FORM_PRINTING_PAUSE						42
	#define STRING_PRINTING_NOZZ1_PAUSE			31
	#define STRINGS_PRINTING_GCODE_PAUSE			38
	#define STRING_PRINTING_NOZZ2_PAUSE			32
	#define STRINGS_PRINTING_FEED_PAUSE			35
	#define STRING_PRINTING_PERCENT_PAUSE			29
	#define STRING_PRINTING_TIMEREMANING_PAUSE	6
	#define STRING_PRINTING_BED_PAUSE				33
	#define BUTTON_PRINT_SETTINGS_PAUSE			136
	#define BUTTON_PAUSE_RESUME_PAUSE				118
	#define BUTTON_STOP_SCREEN_PAUSE				87
	#define BUTTON_PRINTING_BACK_STATE_PAUSE     137
#define FORM_CLEAN_BED								10
	#define	BUTTON_CLEAN_BED				71
#define FORM_WAITING_ROOM							8
	#define USERIMAGE_PROCESSING			2
	#define GIF_PROCESSING					1
#define FORM_INSERT_FILAMENT_TOP					12
	#define BUTTON_PREHEAT_PLA				36
#define FORM_CALL_FULL_SURE					57
	#define BUTTON_CALL_FULL_SURE_OK				49
	#define BUTTON_CALL_FULL_SURE_NOT				190		
#define FORM_REDO_Y_CAB								13
	#define BUTTON_REDO_Y_CAB				30
	#define BUTTON_REDO_UP_CAB				31
	#define BUTTON_REDO_DOWN_CAB			35
#define FORM_ADJUST_FILAMENT						14
	#define BUTTON_ACCEPT_ADJUST			17
	#define BUTTON_ADJUST_ZUp				32
	#define BUTTON_ADJUST_ZDown				33
#define FORM_INFO_TURN_SCREWS						16
	#define BUTTON_SKIP_BED					158
	#define BUTTON_INFO_TURN_SCREWS			41
	#define GIF_INFO_TURN_SCREWS            10
#define FORM_INFO_TURN_SCREWS_FIRST			46
	#define BUTTON_INFO_TURN_SCREWS_FIRST		171
	#define GIF_INFO_TURN_SCREWS_FIRST		9
#define	FORM_INFO_Z_PRINT					17
	#define GIF_PRINTING_TEST				6
#define FORM_REMOVE_FIL_PLACE_FIL					19
	#define	BUTTON_REMOVE					52	
#define FORM_INSERT_FIL_PLACE_FIL					43
	#define	BUTTON_INSERT					68
#define FORM_PURGE_FIL								19
#define FORM_SELECT_EXTRUDER						20
	#define	BUTTON_FILAMENT_BACK			77
	#define	BUTTON_FILAMENT_NOZZLE1			75
	#define	BUTTON_FILAMENT_NOZZLE2			76
	#define IMAG_MATERIALS 0
	#define BUTTON_PLA 65
	#define BUTTON_ABS	70
	#define BUTTON_PVA	78
	#define BUTTON_CUST	79
	#define BUTTON_SELECT_EXTRUDER_MENU				126
#define FORM_SUCCESS_FILAMENT						21
	#define BUTTON_SUCCESS_FILAMENT_OK		53
	#define GIF_SUCCESS_FILAMENT_OK		11
#define FORM_CLEAN_NOZZEL_L					24
	#define BUTTON_CLEAN_NOZZEL_L			69
#define FORM_CLEAN_NOZZEL_R					56
	#define BUTTON_CLEAN_NOZZEL_R		189
	
#define FORM_CALIBRATION							39
	#define BUTTON_CAL_FULL					141
	#define BACKBUTTON_CALIBRATION			138
	#define BUTTON_Z_CAL_WIZARD				140
	#define BUTTON_MANUAL_FINE_CALIB		153
#define FORM_CAL_WIZARD_DONE_GOOD					23//24  --23
	#define BUTTON_BED_CALIB_SUCCESS		66			////69 ----66
	#define GIF_BED_CALIB_SUCCESS	12
#define FORM_LEFT_Z_TEST							25
	#define BUTTON_REDO_LEFT				131
	#define BUTTON_Z_LEFT_SELECT4			23
	#define BUTTON_Z_LEFT_SELECT5			24
	#define BUTTON_Z_LEFT_SELECT1			43
	#define BUTTON_Z_LEFT_SELECT2			47
	#define BUTTON_Z_LEFT_SELECT3			48
#define FORM_ADJUSTING_TEMPERATURES					36	
	#define GIF_ADJUSTING_TEMPERATURES			2
	#define STRING_ADJUSTING_TEMPERATURES			46
#define FORM_X_CALIB_SELECT							27
	#define BUTTON_X_LINE_SELECT1			21
	#define BUTTON_X_LINE_SELECT2			22
	#define BUTTON_X_LINE_SELECT3			51
	#define BUTTON_X_LINE_SELECT4			72
	#define BUTTON_X_LINE_SELECT5			96
	#define BUTTON_X_LINE_SELECT6			97
	#define BUTTON_X_LINE_SELECT7			98
	#define BUTTON_X_LINE_SELECT8			99
	#define BUTTON_X_LINE_SELECT9			100
	#define BUTTON_X_LINE_SELECT10			101
#define FORM_TEMP_MENU								28
	#define STRING_TEMP_NOZZ1				40
	#define STRING_TEMP_BED					42
	#define STRING_TEMP_NOZZ2				41
	#define BUTTON_PREHEAT_LEXTR			11
	#define BUTTON_PREHEAT_BED				82
	#define BUTTON_PREHEAT_REXTR			81
	#define BUTTON_PREHEAT_BACK				83
	#define GIF_TEMP_LEXTR					3
	#define GIF_TEMP_BED					4
	#define GIF_TEMP_REXTR					5
#define FORM_UTILITIES_PRINT			   	26
	#define BUTTON_UTILITIES_PRINT_BACK		 34
	#define BUTTON_UTILITIES_PRINT_FILAMENT		 74
	#define BUTTON_UTILITIES_PRINT_PURGE	 84	
	#define BUTTON_UTILITIES_PRINT_SETTINGS	 88		
#define FORM_PREHEAT_SETTINGS						29
	#define STRING_PREHEAT_SET_NOZZ1		999
	#define STRING_PREHEAT_SET_NOZZ2		999
	#define STRING_PREHEAT_SET_BED			999
	#define BUTTON_PREHEAT_SET_NOZZ0_UP		999
	#define BUTTON_PREHEAT_SET_BED_UP		999
	#define BUTTON_PREHEAT_SET_NOZZ1_UP		999
	#define BUTTON_PREHEAT_SET_NOZZ0_DOWN	999
	#define BUTTON_PREHEAT_SET_BED_DOWN		999
	#define BUTTON_PREHEAT_SET_NOZZ1_DOWN	999
	#define BUTTON_PREHEAT_SET_BACK			999
	#define BUTTON_PREHEAT_ACCEPT			999
/*#define FORM_CALIB_BED_SCREW1						30
	#define BUTTON_BED_CALIB_SW2			93
	#define USERIMAGE_SCREW1				3	*/
#define FORM_CALIB_BED_SCREW2						31
	#define BUTTON_BED_CALIB_SW3			94
	#define USERIMAGE_SCREW2				4
#define FORM_CALIB_BED_SCREW3					32
	#define BUTTON_REDO_BED_CALIB			95
	#define USERIMAGE_SCREW3				5	
#define FORM_Y_CALIB_SELECT							33
	#define BUTTON_Y_LINE_SELECT1			102
	#define BUTTON_Y_LINE_SELECT2			103
	#define BUTTON_Y_LINE_SELECT3			104
	#define BUTTON_Y_LINE_SELECT4			105
	#define BUTTON_Y_LINE_SELECT5			106
	#define BUTTON_Y_LINE_SELECT6			107
	#define BUTTON_Y_LINE_SELECT7			108
	#define BUTTON_Y_LINE_SELECT8			109
	#define BUTTON_Y_LINE_SELECT9			110
	#define BUTTON_Y_LINE_SELECT10			111	
#define FORM_CALIB_Z_EXTRUDER1						34
	#define BUTTON_Z_CALIB_Z1_Up			112
	#define BUTTON_Z_CALIB_Z1_Down			113
	#define BUTTON_Z_CALIB_Z1_OK			114
	#define GIF_Z_PAPER_LEFT				16
#define FORM_CALIB_Z_EXTRUDER2						35
	#define BUTTON_Z_CALIB_Z2_OK			115
	#define BUTTON_Z_CALIB_Z2_Up			116
	#define BUTTON_Z_CALIB_Z2_Down			117
	#define GIF_Z_PAPER_RIGHT				17
#define FORM_BED_CAL_WAIT						45
	
#define FORM_FULL_CAL								4444
	#define STRING_AXIS						555
	
#define FORM_FULL_CAL_ZL					51
	#define BUTTON_FULL_CAL_ZL_GO			181
	#define BUTTON_FULL_CAL_ZL_SKIP			182
#define FORM_FULL_CAL_ZR					41
	#define BUTTON_FULL_CAL_ZR_GO			67
	#define BUTTON_FULL_CAL_ZR_SKIP			188
#define FORM_FULL_CAL_X						54
	#define BUTTON_FULL_CAL_X_GO			186
	#define BUTTON_FULL_CAL_X_SKIP			187
#define FORM_FULL_CAL_Y						55
	#define BUTTON_FULL_CAL_Y_GO			184
	#define BUTTON_FULL_CAL_Y_SKIP			185
/*#define FORM_CLEAN_EXTRUDERS						41
	#define STRING_CLEAN_INSTRUCTIONS		53
	#define USERBUTTON_CLEAN_DONE			67
	#define USERIMAGE_THERMOMETHER			11*/
#define FORM_PURGE									44
	#define STRING_PURGE_SELECTED			5
	#define STRING_PURGE_LEFT_TEMP			10
	#define STRING_PURGE_RIGHT_TEMP			17
	#define BUTTON_PURGE_RETRACK			151
	#define BUTTON_PURGE_INSERT				152
	#define BUTTON_PURGE_INSERTX3			999
	#define BUTTON_PURGE_LEFT				154
	#define BUTTON_PURGE_RIGHT				155
	#define BUTTON_PURGE_TEMP_UP			156
	#define BUTTON_PURGE_TEMP_DOWN			157
	#define BUTTON_PURGE_BACK				160
	#define BUTTON_PURGE_MENU				135
#define FORM_INSERT_FILAMENT_HANDS					47
	#define BUTTON_MOVE_INSERT				58
#define FORM_RIGHT_Z_TEST							48	
	#define	BUTTON_REDO_RIGHT				127
	#define BUTTON_Z_RIGHT_SELECT1			60
	#define BUTTON_Z_RIGHT_SELECT2			62
	#define BUTTON_Z_RIGHT_SELECT3			119
	#define BUTTON_Z_RIGHT_SELECT4			25
	#define BUTTON_Z_RIGHT_SELECT5			73
#define FORM_REDO_Z_TEST							49
	#define BUTTON_REDO_Z_1					128
	#define BUTTON_REDO_Z					130
	#define BUTTON_REDO_Z_5					129
	#define BUTTON_RECALIBRATE_Z			64

#define FORM_CUSTOM_MATERIAL						52
	#define STRING_CUSTOM_INSERT			13
	#define STRING_CUSTOM_REMOVE			14
	#define STRING_CUSTOM_PRINT				15
	#define STRING_CUSTOM_BED				18
	#define BUTTON_CUSTOM_INS_LESS			142
	#define BUTTON_CUSTOM_INS_MORE			146
	#define BUTTON_CUSTOM_REM_LESS			143
	#define BUTTON_CUSTOM_REM_MORE			147
	#define BUTTON_CUSTOM_PRINT_LESS		144
	#define BUTTON_CUSTOM_PRINT_MORE		148
	#define BUTTON_CUSTOM_BED_LESS			161
	#define BUTTON_CUSTOM_BED_MORE			150
	#define BUTTON_CUSTOM_BACK				145
	#define BUTTON_CUSTOM_ACCEPT			149
	#define BUTTON_CUSTOM_MENU				134
#define FORM_PRINTTING_SETTINGS_DEF					53
	#define STRING_PS_LEFT_TEMP				19
	#define STRING_PS_BED_TEMP				20
	#define STRING_PS_RIGHT_TEMP			21	
	#define STRING_PS_SPEED					22
	#define BUTTON_PRINT_SET_BACK			162
	#define BUTTON_PRINT_SET_SPEED_UP		166
	#define BUTTON_PRINT_SET_SPEED_DOWN		170
	#define BUTTON_PRINT_SET_NOZZ1_UP		163
	#define BUTTON_PRINT_SET_NOZZ1_DOWN		167
	#define BUTTON_PRINT_SET_NOZZ2_UP		165
	#define BUTTON_PRINT_SET_NOZZ2_DOWN		169
	#define BUTTON_PRINT_SET_BED_UP			164
	#define BUTTON_PRINT_SET_BED_DOWN		168
#define FORM_INSERT_SD_CARD			38//
	#define BUTTON_INSERT_SD_CARD	133	
#define FORM_NYLON_STEP0			37
	#define BUTTON_NYLON_STEP0		132


#define FORM_NYLON_STEP2			7
	#define BUTTON_NYLON_STEP2		192
#define FORM_NYLON_STEP3			58
	#define STRING_NYLON_STEP3		47
	#define GIF_NYLON_STEP3		19
#define FORM_NYLON_STEP4			62
	#define BUTTON_NYLON_STEP4 		191
	#define GIF_NYLON_STEP4			13
#define FORM_NYLON_STEP5			63
	#define BUTTON_NYLON_STEP5 		10	
#define FORM_NYLON_STEP6			60
	#define BUTTON_NYLON_REPEAT		194	
	#define BUTTON_NYLON_SUCCESS 	195	

#define FORM_NYLON_TEMPS			61
	#define GIF_NYLON_TEMPS			7
	#define STRING_NYLON_TEMPS			43
#define FORM_CHANGE_FILAMENT_TEMPS			40
	#define GIF_CHANGE_FILAMENT_TEMPS		8
	#define STRING_CHANGE_FILAMENT_TEMPS		45
#define  FORM_MANUAL_FINE_CALIB			59
	#define BUTTON_MANUAL_FINE_CALIB_OK		203
	#define BUTTON_MANUAL_FINE_CALIB_X		199
	#define BUTTON_MANUAL_FINE_CALIB_Y		200
	#define BUTTON_MANUAL_FINE_CALIB_ZL		201
	#define BUTTON_MANUAL_FINE_CALIB_ZR		202
	#define BUTTON_MANUAL_FINE_CALIB_UP		193
	#define BUTTON_MANUAL_FINE_CALIB_DOWN		196
	//#define BUTTON_MANUAL_FINE_CALIB_LEFT		197
	//#define BUTTON_MANUAL_FINE_CALIB_RIGHT		198
	#define STRING_MANUAL_FINE_CALIB			11
	#define BUTTON_MANUAL_FINE_CALIB_BACK		204
	#define BUTTON_MANUAL_FINE_CALIB_MENU		205
	#define USERIMAGE_MANUAL_FINE_CALIB			2
#define  FORM_MANUAL_FINE_CALIB_SAVE	64
	#define BUTTON_MANUAL_FINE_CALIB_SAVE_OK		206
	#define BUTTON_MANUAL_FINE_CALIB_SAVE_NOT		207
	
#define FORM_INFO_UI 68	
	#define STRING_INFO_UI_VERSION 44
	#define STRING_INFO_UI_VERSION 49	
#define FORM_INFO_SIGMA 65
	#define STRING_INFO_PRINTINGTIME 48	
#define FORM_ERROR_SCREEN 67
	#define STRING_ERROR_MESSAGE 39	
	#define BUTTON_ERROR_OK 211	
	#define GIF_ERROR 18
#pragma endregion FORMS


#endif 