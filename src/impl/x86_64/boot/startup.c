#include "print.h"

#include <time.h>


void startup(void)
{
   print_str("starting up\n");
   int a = 10;
    //code
    print_str("Creating kernel ID\n");
    print_str(rand());




    //endcode
   while( a < 1000000 ) {
       //count for break
      
      
      a++;
   }
   if(a == 1000000){
       print_set_color(PRINT_COLOR_GREEN, PRINT_COLOR_BLACK);
       print_str("Kernel has started without any errors\n");
   }else{
       print_set_color(PRINT_COLOR_RED, PRINT_COLOR_BLACK);
       print_str("KERNAL HAS FAILD TO START!");
   }


}   

