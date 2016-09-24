#include <iostream>
#include <cstdlib>
using namespace std;

class node{
public:
  // Member function declaration
  int snum;
  int addStudent(int, int); // return snum for particular class?

  // get rid of this snum, cause nothing happens to it
//  int snum; // holds up to 20 students with id nums ranging from 1-200
  int * id; // no brackets []
};

//class arcs{
 // create an arc between classes that share a student
//};
// Member function definition
int node::addStudent(int x, int y){  // x is snum, y is cnum
  int i;
  snum = x;
  id = new int[snum]; // initialize array

  for(i=0; i<x; i++){
    if(y == 10){
      id[i] = rand() % 200;

  //    cout << "Students ID number: " << id[i] << endl;
  // return id; // return inside the for loop, or outside?
        }

    else if(y == 9){
      id[i] = rand() % 180;
//      cout << "Students ID number: " << id[i] << endl;
        }

    else if (y == 8){
      id[i] = rand() % 160;
//      cout << "Students ID number: " << id[i] << endl;
        }

    else if (y == 7){
      id[i] = rand() % 140;
//      cout << "Students ID number: " << id[i] << endl;
        }

    else if (y == 6){
      id[i] = rand() % 120;
//      cout << "Students ID number: " << id[i] << endl;
        }

    else if (y == 5){
      id[i] = rand() % 100;
//      cout << "Students ID number: " << id[i] << endl;
        }

    else if (y == 4){
      id[i] = rand() % 80;
  //    cout << "Students ID number: " << id[i] << endl;
        }

    else if (y == 3){
      id[i] = rand() % 60;
//      cout << "Students ID number: " << id[i] << endl;
        }

    else if (y == 2){
      id[i] = rand() % 40;
  //    cout << "Students ID number: " << id[i] << endl;

        }

    else{
      id[i] = rand() % 20;
  //    cout << "Students ID number: " << id[i] << endl;
        }
      //  return snum; // snum
  }
   return snum;
} // End member function

/* Begin Main */
int main(){
  int cnum; // number of courses
  int i, j; // counter
  int snum; // num of students in any given class
  int temp;

  cout << "How many courses are there? Choose a number from 1-10: " << endl;
  cin >> cnum;
  if(cnum >10 || cnum < 1){
    cout << "ERROR. You much choose between 1-10" << endl;
  }
  else{
    node myNode[cnum]; // creating instance of the class as an array

    for (i = 1; i <= cnum; i++){
      cout << "How many students in class " << i << "? Must choose between 1-20." << endl;
      cin >> snum;
  //    cout << " Class " << i << "  Total students : " << myNode->snum << endl;
      if(snum > 20 || snum < 1){
        cout << "ERROR.  Must choose between 1-20. " << endl;
      }
      else{
          temp = myNode[i].addStudent(snum, cnum); // Maybe here i should return num of students for myNode[i].
          cout << "Total num of students : " << temp << endl; // temp contains total num of students for current class
          // how to get total num of students for next class?
          // need to save each iteration of myNode[i] and compare
          cout << "Class: " << i << endl;

           for (j = 0; j < snum; j++){

             cout <<"  Student: " << myNode[i].id[j] << endl;

              //for(k=0; k< newSnum; k++)
              //compare myNode[i].id[j] to myNode[i+1].id[k] // how to access newSnum?

           } // end nested for

      } // end nested else

    } // End for loop



  } // End master else
return 0;
}
