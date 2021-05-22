#include "print.h"
//#include "input.c"


void keyboard(void){
    print_set_color(PRINT_COLOR_WHITE, PRINT_COLOR_BLACK);
    print_str("COMMANDS\n");
    print_set_color(PRINT_COLOR_RED, PRINT_COLOR_BLACK);
    print_str("Do not spam commands it can overload system!\n");
    print_set_color(PRINT_COLOR_WHITE, PRINT_COLOR_BLACK);
    print_str("1. 'T' = test command\n");
    print_str("1. 'H' = help command\n");
    print_str("2. 'S' = test2\n");
   
    //keyboard input
}
void full(void){
    print_set_color(PRINT_COLOR_RED, PRINT_COLOR_RED);
    print_str("                                                                               .\n");  
    print_set_color(PRINT_COLOR_WHITE, PRINT_COLOR_BLACK);
} 

    




void startup(void)
{
   
   print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK); 
   print_str("Starting Driver!\n");
   int b = 2;

    
   while( b < 2 ) {
       //driver
      
       print_str("Driver Has STARTED!\n");

       

      
      b++;
   }
   if(b == 2){
       print_set_color(PRINT_COLOR_GREEN, PRINT_COLOR_BLACK);
       print_str("Driver Has STARTED!\n");
   }
   if(b > 2){
       print_set_color(PRINT_COLOR_RED, PRINT_COLOR_BLACK);
       print_str("Driver Has NOT STARTED!\n");

   }
      print_str("Starting up\n");
   int a = 2;




    //endcode
   while( a < 2 ) {
       //count for break
       
      
      a++;
   }
   if(a == 2){
       print_set_color(PRINT_COLOR_GREEN, PRINT_COLOR_BLACK);
       print_str("KERNEL has started without any issues!\n");
   }
   if(a < 2){
       print_set_color(PRINT_COLOR_RED, PRINT_COLOR_BLACK);
       print_str("KERNAL HAS FAILD TO START!\n");
       print_str("ERROR:STARTUP WONT RUN!\n");
   }
   if(a > 2){
       print_set_color(PRINT_COLOR_RED, PRINT_COLOR_BLACK);
       print_str("KERNAL PANIC!\n");
       print_str("ERROR:STARTUP RUNNING MORE THEN ONCE!\n");
   }
   if(a == 0){
       print_set_color(PRINT_COLOR_RED, PRINT_COLOR_BLACK);
       print_str("KERNAL PANIC!\n");
   }if(b == 2 && a == 2) {
       keyboard();

    }
   


}




