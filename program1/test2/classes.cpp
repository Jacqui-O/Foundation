/* Nodes (classes), arcs */
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class node{
  public:
    string courseName;
    string student[20]; // up to 20 students
    void addStudent(string);

};


void node::addStudent(string s[]){
  student = s; // student is a *?
  cout << student << endl;

}
