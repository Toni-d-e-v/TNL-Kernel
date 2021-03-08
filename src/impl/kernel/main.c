#include "print.h"


void kernel_main() {
    print_clear();
    print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);
    print_str("Welcome to TNL 64-bit kernel!\n");
    print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);
    print_str("    (>---<)\n ");
    print_str("  ,'     `.\n ");
    print_str(" /  q   p  \\ \n ");
    print_str("(  >(_Y_)<  )\n ");
    print_str(" >-' `-' `-<-. \n ");
    print_str("Version 0.0.3\n");
    print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);
    print_str("Use this at your own RISK! GPL License.\n");
    startup();

}
