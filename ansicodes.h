#ifndef _ANSICODES_H
#define _ANSICODES_H

#include <stdio.h>

#define RESET			    "\033[0m"
#define BOLD			    "\033[1m"
#define FAINT			    "\033[2m"
#define ITALIC			  "\033[3m"
#define UNDERLINE		  "\033[4m"
#define BLINK_S			  "\033[5m"
#define BLINK_R			  "\033[6m"
#define NEGATIVE		  "\033[7m"
#define CONCEAL			  "\033[8m"
#define CROSSED			  "\033[9m"
#define FONT_PRIM		  "\033[10m"
#define FONT_1			  "\033[11m"
#define FONT_2			  "\033[12m"
#define FONT_3			  "\033[13m"
#define FONT_4			  "\033[14m"
#define FONT_5			  "\033[15m"
#define FONT_6			  "\033[16m"
#define FONT_7			  "\033[17m"
#define FONT_8			  "\033[18m"
#define FONT_9			  "\033[19m"
#define FRAKTUR			  "\033[20m"
#define BOLD_OFF		  "\033[21m"
#define NORMAL		    "\033[22m"
#define ITALIC_OFF		"\033[23m"
#define UNDERLINE_OFF	"\033[24m"
#define BLINK_OFF		  "\033[25m"
#define POSITIVE		  "\033[27m"
#define CONCEAL_OFF		"\033[28m"
#define CORSSED_OFF		"\033[29m"
#define FG_BLACK		  "\033[30m"
#define FG_RED			  "\033[31m"
#define FG_GREEN		  "\033[32m"
#define FG_YELLOW		  "\033[33m"
#define FG_BLUE		    "\033[34m"
#define FG_MAGENTA		"\033[35m"
#define FG_CYAN		    "\033[36m"
#define FG_WHITE		  "\033[37m"
static void fg_8b_out(FILE *f, int n) { fprintf(f, "\033[38;5;%dm", n); }
static void fg_24b_out(FILE *f, int r, int g, int b) { fprintf(f, "\033[38;2;%d;%d;%dm", r, g, b); }
#define FG_DEFAULT		"\033[39m"
#define BG_BLACK		  "\033[40m"
#define BG_RED			  "\033[41m"
#define BG_GREEN		  "\033[42m"
#define BG_YELLOW		  "\033[43m"
#define BG_BLUE		    "\033[44m"
#define BG_MAGENTA		"\033[45m"
#define BG_CYAN		    "\033[46m"
#define BG_WHITE		  "\033[47m"
static void bg_8b_out(FILE *f, int n) { fprintf(f, "\033[48;5;%dm", n); }
static void bg_24b_out(FILE *f, int r, int g, int b) { fprintf(f, "\033[48;2;%d;%d;%dm", r, g, b); }
#define BG_DEFAULT		"\033[49m"

#endif
