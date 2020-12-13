#include <stdio.h>
#include <math.h>
 

float triangle_surface_by_side_and_height(float side, float height);
float rectangle_surface_by_two_sides(float side_one, float side_two);
float triangle_by_three_sides(float side_one, float side_two, float side_three);



float triangle_surface_by_side_and_height(float side, float height) {

   float surfacearea;
 
   surfacearea =  (side * height) / 2;
   
   return surfacearea; 
}

float rectangle_surface_by_two_sides(float side_one, float side_two) {

    float surfacearea;
 
    surfacearea =  side_one * side_two;
   
    return surfacearea; 

}
float triangle_by_three_sides(float side_one, float side_two, float side_three)
{

   

    float surfacearea;
    float perimeter = (side_one + side_two + side_three) / 2;
    
    surfacearea =  sqrt(perimeter * ((perimeter-side_one)) *  ((perimeter-side_two)) * ((perimeter-side_three)));
   
    return surfacearea; 
}
int main()
{


    printf("Enter your choice \n");
    printf("1 - calculate triangle surface by side and height \n");
    printf("2 - calculate rectangle surface by two sides \n");
    printf("3 - calculate triangle by three sides \n");
    
    int choice;
    scanf("%d", &choice);

    while (choice > 3 || choice < 1)
    {
        printf("Please enter valid option from  1 to 3 \n");
        scanf("%d", &choice);

    }

    if (choice == 1)
    {
        float side, height;
        printf("Enter the length of a side \n");
        scanf("%f", &side);
        printf("Enter the height of a side \n");
        scanf("%f", &height);

        printf("Surface area by side and height= %6.2f \n", triangle_surface_by_side_and_height(side, height));

    }
    else if (choice == 2)
    {
        float side_one, side_two;
        printf("Enter the length of a side one \n");
        scanf("%f", &side_one);
        printf("Enter the height of a side two \n");
        scanf("%f", &side_two);
        printf("Surface area by side one and side two = %6.2f \n", rectangle_surface_by_two_sides(side_one, side_two));

    }
    else if (choice == 3)
    {
        float side_one, side_two, side_three;

        printf("Enter the length of a side one \n");
        scanf("%f", &side_one);

        printf("Enter the height of a side two \n");
        scanf("%f", &side_two);

        printf("Enter the height of a side three \n");
        scanf("%f", &side_three);
        
        printf("Surface area  by three sides = %6.2f \n", triangle_by_three_sides(side_one, side_two, side_three));

    }
    





}