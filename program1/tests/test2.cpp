#include <iostream>
#include <cstdlib>
using namespace std;

void numCourses(int snum){
  cout << "How many courses are there?" << endl;
  if(snum <=20){
    cout << "You must have at least 1 course" << endl;
  }
  else if(snum >20 && snum >=40){
    cout << "You must have at least 2 courses" << endl;
  }
  else if(snum >40 && snum >=60){
    cout << "You must have at least 3 courses" << endl;
  }
  else if(snum >60 && snum >=80){
    cout << "You must have at least 4 courses" << endl;
  }
  else if(snum >80 && snum >=100){
    cout << "You must have at least 5 courses" << endl;
  }
  else if(snum >100 && snum >=120){
    cout << "You must have at least 6 courses" << endl;
  }
  else if(snum >120 && snum >=140){
    cout << "You must have at least 7 courses" << endl;
  }


}

class students{
public:
  // Member function declaration
  //int cnum; // number of courses
  void assignCourse(int cnum); // return snum for particular class?

  int * courseId;
};

//class arcs{
 // create an arc between classes that share a student
//};
// Member function definition
void  students::assignCourse(int cnum){  // eg 4 classes
// first, randomize max num of classes any student may have 1-cnum
// then
    int count, i, j;
    count = rand() % cnum + 1; // number of courses for first student
    courseId = new int[count];
    for(i=0; i<count; i++){
      courseId[i] = rand() % cnum + 1;

      cout << " course : " << courseId[i] ;
    }


//  courseId = rand() % cnum + 1;  // associate a course ID with student
//  return courseId;

} // End member function

/* Begin Main */
int main(){
  int cnum; // number of courses
  int i, j; // counter
  int snum; // num of TOTAl students
  //int *cid; // course id associated with student


  cout << "How many students are there? Choose a number from 1-200: " << endl;
  cin >> snum;
  if(snum >200 || snum < 1){
    cout << "ERROR. You much choose between 1-200" << endl;
  }
  else{
    students id[snum]; // creating instance of the students as array
    numCourses(snum);
    cin >> cnum;

    for (i = 1; i <= snum; i++){
          cout << endl;
          cout << "Student: " << i << endl;
          id[i].assignCourse(cnum); // Randomly assign a course 1-cnum to each student





    } // End for loop



  } // End master else
return 0;
}
