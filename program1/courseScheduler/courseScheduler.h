#include <iostream>
using namespace std;
class students{
  public:
      int snum; // total num of students
      students * next; // points to the next course
      students(){};

      void SetData(int aData){
        snum = aData;
      };

      void SetNext(students *aNext){
        next = aNext;
      };

      int Data(){
        return snum;
      };

      students* Next(){
        return next;
      };

};

class List2{
  public:
    students *head;
    List2(){
      head = NULL;
    };

    void Print();
    void Append(int snum);

};

void List2::Print() { // prints list of TOTAL students s1, s2...sn

    // Temp pointer
    students *tmp = head;

    // No nodes
    if ( tmp == NULL ) {
    cout << "EMPTY" << endl;
    return;
    }

    // One node in the list
    if ( tmp->Next() == NULL ) {
    cout << tmp->Data();
    cout << " --> ";
    cout << "NULL" << endl;
    }
    else {
    // Parse and print the list
    do {
        cout << "Student: " << tmp->Data(); // added course
        cout << " --> ";
        tmp = tmp->Next();
    }
    while ( tmp != NULL );

    cout << "NULL" << endl;
    }
}

void List2::Append(int snum) {

    // Create a new student
    students* newNode = new students();
    newNode->SetData(snum);
    newNode->SetNext(NULL);

    // Create a temp pointer
    students *tmp = head;

    if ( tmp != NULL ) {
    // Nodes already present in the list
    // Parse to end of list
    while ( tmp->Next() != NULL ) {
        tmp = tmp->Next();
    }

    // Point the last node to the new node
    tmp->SetNext(newNode);
    }
    else {
    // First node in the list
    head = newNode;
    }
}

class courseNum{  // Nodes
public: // making all public, rather that after *next
      int cnum; // course number
      courseNum * next; // points to the next course
      courseNum(){};

      void SetData(int aData){
        cnum = aData;
      };

      void SetNext(courseNum *aNext){
        next = aNext;
      };

      int Data(){
        return cnum;
      };

      courseNum* Next(){
        return next;
      };

};

class List{
public:
  courseNum *head;
  List(){
    head = NULL;
  };

  void Print();
  void Append(int cnum);

};

void List::Print() { // prints list of courses c1, c2...cn

    // Temp pointer
    courseNum *tmp = head;

    // No nodes
    if ( tmp == NULL ) {
    cout << "EMPTY" << endl;
    return;
    }

    // One node in the list
    if ( tmp->Next() == NULL ) {
    cout << tmp->Data();
    cout << " --> ";
    cout << "NULL" << endl;
    }
    else {
    // Parse and print the list
    do {
        cout << "Course: " << tmp->Data(); // added course
        cout << " --> ";
        tmp = tmp->Next();
    }
    while ( tmp != NULL );

    cout << "NULL" << endl;
    }
}

void List::Append(int cnum) {

    // Create a new node
    courseNum* newNode = new courseNum();
    newNode->SetData(cnum);
    newNode->SetNext(NULL);

    // Create a temp pointer
    courseNum *tmp = head;

    if ( tmp != NULL ) {
    // Nodes already present in the list
    // Parse to end of list
    while ( tmp->Next() != NULL ) {
        tmp = tmp->Next();
    }

    // Point the last node to the new node
    tmp->SetNext(newNode);
    }
    else {
    // First node in the list
    head = newNode;
    }
}

void TotalStudents(int cnum){
  if(cnum ==1){
    cout << "1 class. The number cannot exeed 20." << endl;
  }
  else if(cnum == 2){
    cout << "2 classes. The number cannot exeed 40." << endl;
  }
  else if(cnum ==3){
    cout << "3 classes. The number cannot exeed 60." << endl;
  }
  else if(cnum ==4){}
  else if(cnum ==5){}
  else if(cnum ==6){}
  else if(cnum ==7){}
  else if(cnum ==8){}
  else if(cnum ==3){}
  else{
    cout << "10 classes. The number cannot exeed 200." << endl;
  }
}
/* Edges are the same as arcs. */
//class edges{

// create links?
//};
