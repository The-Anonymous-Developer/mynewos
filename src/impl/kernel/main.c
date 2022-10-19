#include "print.h"

void kernel_main() {
     print_clear();
     print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);
     print_str("Kernel Loaded, Version A01");
     print_newline();
     print_str("Welcone to Unnamed OS.");
     print_newline();
     print_str("This version was compiled on: 18 October 2022");
     print_newline();
     print_str("VERSION: CLOSED ALPHA TESTING || BUILD 01A1");
}