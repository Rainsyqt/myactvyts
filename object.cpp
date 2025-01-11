#include<iostream>
using namespace std;

class Person { 
      public:
          string name;
          string middle;
          string lastN;
          int age;
     };
 class house {
      public:
          string c1;
          string c2;  
     };
     
     int main() {
     
        Person person1;
        person1.name = "Andreigh";
        person1.middle = " I.";
        person1.lastN = " Espino";
        person1.age = 20;
        
        house c1;
        c1.c1 = " Modern House";
        c1.c2 = " Black and White theme";
        
        cout << person1.name << person1.middle << person1.lastN << " is " << person1.age << " year old" << endl;
        cout << endl;
        cout << "My dream House is" << c1.c1 << " color" << c1.c2 << endl;
    return 0;
    }         