#include <string>
#include <map>
#include <iostream>



int main()
{


    std::map<int,int> result;
    
   for (size_t x = 0; x < 100; x++)
   {
       for (size_t y = 0; y < 100; y++)
       {
            if (8*x - 9*y == 3)
             {
               
                result[x] = y;
              

            
           }
     }
       
      
       
   }
    std::map<int,int>::iterator it = result.begin();        

    for (; it != result.end(); it++)
    {
        std::cout << "X = " << it->first << " " <<  "Y = "   << it->second << std::endl;
        std::cout << "8 * " <<  it->first  << " - " << " 9 * " <<  it->second    << " = " << " 3"<< std::endl;
    }
    

   


    return 0;
}