
#include <string>
#include <vector>
#include <iostream>

class StudentReport
{
private:
    std::string name;
    int student_number;
    std::string subject;
    std::vector<double> marks;
    double average;  
public:
    // Constructor
    StudentReport(std::string name, int stud_num, std::string subject): 
    name(name), student_number(stud_num), subject(subject)
    {} 

    // Class Methods
    void add_mark(double mark);
    std::string get_name();
    std::vector<double> get_marks();
    std::string get_subject();
    double get_average();
    int get_id();


};



void StudentReport::add_mark(double mark)
{
    marks.push_back(mark);

}

std::string StudentReport::get_name()
{
    return this->name;
}
std::string StudentReport::get_subject()
{
    return this->subject;
}


std::vector<double> StudentReport::get_marks()
{
    return this->marks;
}

double StudentReport::get_average()
{
    double average = 0;
    
    for(size_t i =0 ; i < marks.size(); i++)
    {
        average +=  marks[i];
    }
    
    average = average / marks.size();
    
    return average;
    
}

int StudentReport::get_id()
{
    return student_number;
    
    
}






int main()
{

    std::vector<StudentReport> students;
    std::cout << "Enter how many students you want to add " << std::endl;
    int number_of_students;
    std::cin >> number_of_students;
    
    std::cout << "Enter how many grades you want to add " << std::endl;
    int grades_number;
    std::cin >> grades_number;

 
    for (int i = 1; i <= number_of_students; i++)
    {
        std::cout << "Enter student name : " << std::endl; 
       std::string name_of_stud;
       std::cin >>  name_of_stud;
       
       std::cout << "Enter student number : " << std::endl; 
       int stud_num;
       std::cin >>  stud_num;
       
       std::cout << "Enter student subject : " << std::endl; 
       std::string name_of_subject;
       std::cin >>  name_of_subject;

        StudentReport stud = StudentReport(name_of_stud, stud_num, name_of_subject);
        students.push_back(stud);
 
    
    }
    
  for (int i = 0; i < number_of_students; i++)
    {
      for (int m = 1; m <= grades_number; m++)
        {   
           std::cout << "Enter student mark number "<< m << " for " << students[i].get_name() << std::endl; 
           double mark;
           std::cin >> mark;
           students.at(i).add_mark(mark);
        }
 
    
    }
    
    
/* 
 IMPORTANT 
 
Diagram is made only for 3 grades

*/  
    printf("--------------------------------------------------------------------------------------------------\n");
    printf("* Number   * Name      * Subject   * Mark 1         * Mark 2         * Mark 3         * Final Mark *\n");
    printf("---------------------------------------------------------------------------------------------------\n");
       
    for (int i = 0; i < number_of_students; i++)
    {
    std::cout << " " << students[i].get_id()<< "        " << students[i].get_name()<< "        " << students[i].get_subject() << "           ";

    
            std::vector<double> marks =  students[i].get_marks();
          for (size_t m = 0; m < marks.size(); m++)
          {
              
              std::cout << marks[m] << "              ";
              
          }
          
        std::cout << "  " << students[i].get_average(); 
        std::cout << std::endl;
       
    
    }
        

    return 0;
}