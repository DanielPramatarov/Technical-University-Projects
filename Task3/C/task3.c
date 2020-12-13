#include <stdio.h>





int main()
{


    int array_x[1000] = {0,};
    int array_y[1000] = {0,};
    int counter = 0;
    
   for (size_t x = 0; x < 100; x++)
   {
       for (size_t y = 0; y < 100; y++)
       {
            if (8*x - 9*y == 3)
             {
                
                array_x[counter] = x;
                array_y[counter] = y;
                counter++;           
           }
         }
    }

   for (size_t i = 0; i < 1000; i++)
   {
       if (array_x[i] == 0)
       {
          break;
       }
       
        printf("8 * %d - 9 * %d = 3  \n",array_y[i], array_x[i]);
   }
   
      return 0;

}