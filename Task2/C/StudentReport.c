#include <stdio.h>



struct student  
{  
    int student_number;
    char name[30]; 
    char subject[20]; 
    float marks[100];

    float average;  
};



int main()
{



    struct student students[5];  
    
    for (int i=0; i<5; i++)
    {
        int student_number;
        printf("Enter student number  \n");
        scanf("%d",&students[i].student_number); 

        char name_of_student[50]; 
        printf("Enter name of student with student number : %d \n", students[i].student_number);
        scanf("%s",&students[i].name);

        char name_of_subject[20];
        printf("Enter Subject of %s  \n", students[i].name);
        scanf("%s",&students[i].subject); 

      


        for (int m = 0; m < 3; m++)
        {
            printf("Enter  mark %d to %s's marks  \n", m, students[i].name);
            scanf("%f",&students[i].marks[m]); 

        }
        
        float sum = 0;
        float average = 0;

        for (size_t d = 0; d < 3; d++)
        {
           
            sum += students[i].marks[d];
            average = sum / 3;
        }
        students[i].average = average;





    }
    printf("--------------------------------------------------------------------------------------------------\n");
    printf("* Number * Name      * Subject   * Mark 1         * Mark 2         * Mark 3         * Final Mark *\n");
    printf("--------------------------------------------------------------------------\n");
    for (int i = 0; i < 5; i++)
    {
        printf("* %d     * %s    * %s ", students[i].student_number, students[i].name ,students[i].subject );   
        for (int g = 0; g < 3; g++)
        {
            printf("     * %f  ", students[i].marks[g] );   
        }
     
        printf("     * %f   * \n", students[i].average);
    }
    
    printf("--------------------------------------------------------------------------------------------------\n");


}