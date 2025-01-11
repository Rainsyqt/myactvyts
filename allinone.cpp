#include <string>
#include<iostream>

 using namespace std;

  int main(){

    string name = "Andreigh";
    char middle = 'I';
    string last = "Espino";
    int age = 19;
    bool boolvalue = true;
    double height = 167.4;
    float weight = 70.4;
    
    cout << "Firstname: " << name << endl;
    cout << "MiddleName: " << middle << endl;
    cout << "LastName: " << last << endl;
    cout << "Age: " << age << endl;
    cout << "Male: " << boolvalue << endl;
    cout << "Height(cm): " << height << endl;
    cout << "Weight(kg): " << weight << endl;
    
    cout << "_____________________" <<endl;
    
    string firstname = "Andreigh";
    string middlename = "I.";
    string lastname = "Espino";

    string full;

    full = firstname +" "+ middlename +" "+ lastname;

    cout << "ACTIVITY 1" <<endl;
    cout << "CONCAT" <<endl;
    cout << "Name:" << full <<endl;

    cout << "_____________________" <<endl;

    string First = " Andreigh ";
    string Middle = "I.";
    string Last = " Espino ";
    string course= " BSCS-";
    int intNum = 1;
 
    string fullname;
 
    fullname = First+Middle+Last;
    
    cout << "ACTIVITY 2" << endl;
    cout << "NAME AND COURSE" << endl;
    cout << "Name:" << fullname <<endl;
    cout << "Course:" << course;
    cout << intNum <<endl;

   cout << "_____________________" <<endl;
   
   int num1 = 3;
   int num2 = 7;
   int results = num1+num2;
   
   cout << "ACTIVITY 3" <<endl;
   cout << "COMBINATION" <<endl;
   cout << "Number1:"  << num1 <<endl;
   cout << "Number2:" << num2 <<endl;
   cout << "Results:" << results <<endl;
   
   cout << "_____________________" <<endl;
   
  int prelim = 90;
  int midterm = 91;
  int prefinal = 94;
  int final = 92;
  int average = prelim+midterm+prefinal+final;
  float divide = 4;
  float result = average/divide;
  
    cout << "ACTIVITY 4" <<endl;
    cout << "Grades" <<endl;
    cout << "Prelim:" << prelim << endl;
    cout << "Midterm:" << midterm << endl;
    cout << "Prefinal:" << prefinal << endl;
    cout << "Final:" << final << endl;   
    cout << "Average:" << result << endl;
  
      
    return 0;
    }