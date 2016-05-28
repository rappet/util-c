// Test for ansicodes.h
// (c)rappet 2016 https://github.com/rappet/util-c
#include <stdio.h>
#include "ansicodes.h"

void check_modifiers() {
  puts("You have to manually check:");
  puts("Your terminal can not display all of them correctly.");
  putchar(10);
  puts(BOLD      "bold" RESET);
  puts(FAINT     "faint" RESET);
  puts(ITALIC    "italic" RESET);
  puts(UNDERLINE "underline" RESET);
  puts(BLINK_S   "slow blink" RESET); // does not work in gnome-terminal
  puts(BLINK_R   "fast blink" RESET); // does not work on all tested terminals
  puts(NEGATIVE  "negative" RESET);
  puts(CONCEAL   "conceal" RESET); // does not work in konsole
  puts(CROSSED   "crossed" RESET); // does not work in konsole
  putchar(10);
}
void check_fonts() {
  puts("Fonts:");
  puts(FONT_PRIM "primary font" RESET);
  puts(FONT_1 "Font 1" RESET);
  puts(FONT_2 "Font 2" RESET);
  puts(FONT_3 "Font 3" RESET);
  puts(FONT_4 "Font 4" RESET);
  puts(FONT_5 "Font 5" RESET);
  puts(FONT_6 "Font 6" RESET);
  puts(FONT_7 "Font 7" RESET);
  puts(FONT_8 "Font 8" RESET);
  puts(FONT_9 "Font 9" RESET);
  puts(FRAKTUR "fraktur" RESET); // does not work
  puts(FONT_PRIM);
}
void check_colors() {
  int i;
  puts("Colors:");
  puts(FG_BLACK   "black" RESET);
  puts(FG_BLUE    "blue" RESET);
  puts(FG_GREEN   "green" RESET);
  puts(FG_RED     "red" RESET);
  puts(FG_YELLOW  "yellow" RESET);
  puts(FG_MAGENTA "magenta" RESET);
  puts(FG_CYAN    "cyan" RESET);
  puts(FG_WHITE   "white" RESET);
  puts(FG_DEFAULT "default" RESET);
  puts(BG_BLACK   "black" RESET);
  puts(BG_RED     "red" RESET);
  puts(BG_GREEN   "green" RESET);
  puts(BG_YELLOW  "yellow" RESET);
  puts(BG_BLUE    "blue" RESET);
  puts(BG_MAGENTA "magenta" RESET);
  puts(BG_CYAN    "cyan" RESET);

  puts(BG_WHITE   "white" RESET);
  puts(BG_DEFAULT "default" RESET);
  putchar(10);

  puts("All 8bit colors:");
  for(i=0; i<256; ++i) {
    fg_8b_out(stdout, i);
    bg_8b_out(stdout, i);
    putchar('$');
    if((i%36 == 15 && i>30) || i==15)
      puts(RESET);
  }
  puts(RESET);

  puts("All 24bit colors (linux terminal no support, xterm rounds to 8bit colors):");
  for(i=0; i<256; ++i) {
    fg_24b_out(stdout, i, 255-i, 0);
    bg_24b_out(stdout, i, 255-i, 0);
    putchar('$');
    if(i%64 == 63)
      puts(RESET);
  }
  for(i=0; i<256; ++i) {
    fg_24b_out(stdout, 255, i, 0);
    bg_24b_out(stdout, 255, i, 0);
    putchar('$');
    if(i%64 == 63)
      puts(RESET);
  }
  puts(RESET);
}
int main() {
  check_modifiers();
  check_fonts();
  check_colors();
}
