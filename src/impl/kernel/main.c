#include "print.h"
#include "kernel.h"

void kernel_main() {
    print_clear();
    print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);
    print_str("Welcome to TNL Tunix not Linux 64-bit kernel!\n");
    print_str("Kernel will be used to just run commands to computer!\n");
     print_str("Version 0.0.2\n");
    print_char('\n');
    print_set_color(PRINT_COLOR_WHITE, PRINT_COLOR_BLACK);
    startup();
    print_char('\n');
   
    


}
