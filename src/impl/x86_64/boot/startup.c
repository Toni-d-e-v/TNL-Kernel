#include "print.h"
//#include "input.c"


void keyboard(void){
    print_set_color(PRINT_COLOR_WHITE, PRINT_COLOR_BLACK);
    print_str("TNL>\n");
    //keyboard input
}

void cpu(void){
    //make cpu bissy
    int c = 1;
    while(1){
        c++;
        //c++ go brrrrr

    }

}


void startup(void)
{
   
   print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK); 
   print_str("Starting Driver!\n");
   int b = 2;

    
   while( b < 2 ) {
       //driver
       print_str("Driver Has STARTED!\n");
      // input();
       

      
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




