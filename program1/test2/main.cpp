
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
#include "classes.cpp"

int main(){
  std::string str;
  int i;
  node course[10]; // max of 10 courses

  while(cin >> str){
    if(i < 10){ // no more than 10 classes

        if(str.compare(0,7,"Student")!=0){
            cout << str << endl;
            i++; // increment classes
            // create new class Course
            // Prints the class first
            }
        else{
          // need to isolate the number associated with student
          // then pass that isolated number as a substring to addStudent
        //    cout << str << endl;  //works
            course[i].addStudent(str);
            // node.addStudent(str);

            // create new class Students and assign to course
          }   // Prints the students for that class
    } // end if no more than 20 classes

  }
return 0;

}
