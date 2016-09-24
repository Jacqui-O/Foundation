#include <iostream>
#include <cstdlib>
#include "courseScheduler.h"
using namespace std;


int main(){
  int cnum, snum;
  int i;
  // new list
  List list;
  List2 list2;

  // append courses to the list
  cout << "How many courses are there? Choose from 1-10." << endl;
  cin >> cnum;
  cout << "How many TOTAL students are spread among the classes? " << endl;
  TotalStudents(cnum);
  cin >> snum;
  for (i=1; i<=cnum; i++){
    list.Append(i); // list of classes from 1-cnum
  //  list.Print();

}list.Print();

  for(i=1; i<=snum; i++){
    list2.Append(i); // list of students from 1-snum
    //list2.Print();
  }list2.Print();
  // need to randomly assign snum students to a class

}
