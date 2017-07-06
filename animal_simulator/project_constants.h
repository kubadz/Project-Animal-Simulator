#pragma once
//macros used in project (names abbreviations on the end)
//dimensions of main application structure's windows and buttons are responsive to dimentions of some main parts pointed by /*M*/

/*GENERAL*/
#define TRUE 1
#define FALSE 0
/*MAIN WINDOW*/
/*M*/#define MAIN_WINDOW_WIDTH 960
/*M*/#define MAIN_WINDOW_HEIGHT 540
/*STATIC WINDOWS*/ // static means here that type of content in the window doesn't change, however the items in this content can change (e.g. active events window is always in the right top corner, but single events in this window can change)
/*M*/#define ACTIVE_EVENTS_WINDOW_WIDTH 400
/*M*/#define ACTIVE_EVENTS_WINDOW_HEIGHT 140
#define ACTIVE_EVENTS_WINDOW_TLCX 0
#define ACTIVE_EVENTS_WINDOW_TLCY 0
/*M*/#define NEEDS_BARS_WINDOW_WIDTH 480
#define NEEDS_BARS_WINDOW_HEIGHT ACTIVE_EVENTS_WINDOW_HEIGHT
#define NEEDS_BARS_WINDOW_TLCX ACTIVE_EVENTS_WINDOW_WIDTH
#define NEEDS_BARS_WINDOW_TLCY 0
/*CHARACTER / SHOP / GAME / FOOD / DRINK WINDOW*/
/*M*/#define	ACTIVE_WINDOW_WIDTH 800
/*M*/#define ACTIVE_WINDOW_HEIGHT 280
#define ACTIVE_WINDOW_TLCX (MAIN_WINDOW_WIDTH - ACTIVE_WINDOW_WIDTH)
#define ACTIVE_WINDOW_TLCY ACTIVE_EVENTS_WINDOW_HEIGHT
/*STATIC BUTTONS*/
#define SHOP_B_WIDTH (MAIN_WINDOW_WIDTH - ACTIVE_WINDOW_WIDTH)
#define SHOP_B_HEIGHT (ACTIVE_WINDOW_HEIGHT/2)
#define SHOP_B_TLCX 0
#define SHOP_B_TLCY ACTIVE_WINDOW_TLCY
#define GAMES_B_WIDTH SHOP_B_WIDTH
#define GAMES_B_HEIGHT SHOP_B_HEIGHT
#define GAMES_B_TLCX 0
#define GAMES_B_TLCY (SHOP_B_TLCY + SHOP_B_HEIGHT)
#define EXIT_B_WIDTH (MAIN_WINDOW_WIDTH - ACTIVE_EVENTS_WINDOW_WIDTH - NEEDS_BARS_WINDOW_WIDTH)
#define EXIT_B_HEIGHT (ACTIVE_EVENTS_WINDOW_HEIGHT/2)
#define SAVE_B_WIDTH EXIT_B_WIDTH
#define SAVE_B_HEIGHT (ACTIVE_EVENTS_WINDOW_HEIGHT/2)
/*TEXT EVENTS WINDOW*/
#define TEXT_EVENTS_WINDOW_WIDTH MAIN_WINDOW_WIDTH
#define TEXT_EVENTS_WINDOW_HEIGHT (MAIN_WINDOW_HEIGHT - ACTIVE_EVENTS_WINDOW_HEIGHT - ACTIVE_WINDOW_HEIGHT)
#define TEXT_EVENTS_WINDOW_TLCX 0
#define TEXT_EVENTS_WINDOW_TLCY (MAIN_WINDOW_HEIGHT - TEXT_EVENTS_WINDOW_HEIGHT)

//#define SLEEP_B_WIDTH 
//#define SLEEP_B_HEIGHT 
//#define FOOD_B_WIDTH 
//#define FOOD_B_HEIGHT 
//#define DRINKS_B_WIDTH 
//#define DRINKS_B_HEIGHT 
//#define TOY_B_WIDTH 
//#define TOY_B_HEIGHT 

/*
	names abbreviations:
b - button
TLC - top left corner


*/