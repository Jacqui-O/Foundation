#include <iostream>
#include <cstdlib>
using namespace std;

class node{
public:
  // Member function declaration
  void addStudent(int, int);
  int snum; // holds up to 20 students with id nums ranging from 1-200
//  int id[20];  // new; Need to create here instead of inside function
};

//class arcs{
 // create an arc between classes that share a student
//};
// Member function definition
void node::addStudent(int x, int y){  // x is snum, y is cnum
  int i;
  snum = x;
//  id[20]; // new
  int id[20];
  for(i=0; i<snum; i++){
    if(y == 10){
      id[i] = rand() % 200;
      cout << "Students ID number: " << id[i] << endl;

    }

    else if(y == 9){
      id[i] = rand() % 180;
      cout << "Students ID number: " << id[i] << endl;}

    else if (y == 8){
      id[i] = rand() % 160;
      cout << "Students ID number: " << id[i] << endl;}

    else if (y == 7){
      id[i] = rand() % 140;
      cout << "Students ID number: " << id[i] << endl;}

    else if (y == 6){
      id[i] = rand() % 120;
      cout << "Students ID number: " << id[i] << endl;}

    else if (y == 5){
      id[i] = rand() % 100;
      cout << "Students ID number: " << id[i] << endl;}

    else if (y == 4){
      id[i] = rand() % 80;
      cout << "Students ID number: " << id[i] << endl;}

    else if (y == 3){
      id[i] = rand() % 60;
      cout << "Students ID number: " << id[i] << endl;}

    else if (y == 2){
      id[i] = rand() % 40;
      cout << "Students ID number: " << id[i] << endl;}

    else{
      id[i] = rand() % 20;
      cout << "Students ID number: " << id[i] << endl;}
  }
  // return id;
} // End member function

/* Begin Main */
int main(){
  int cnum; // number of courses
  int i, j; // counter
  int snum; // num of students in any given class

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
      if(snum > 20 || snum < 1){
        cout << "ERROR.  Must choose between 1-20. " << endl;
      }
      else{
          myNode[i].addStudent(snum, cnum);
          // need to save each iteration of myNode[i] and compare

      }
    }
  }
return 0;
}
