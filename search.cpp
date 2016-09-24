/**
 * A sample code of search a node with a given value in a linked list,
 * and return the pointer of that node if it exists.
 * OUTLINE: traverse the linked list and compare the given value with
 * each node, and return the pointer of the node  when they turn out
 * to be the same in value.
 */

#include <iostream>
#include <cstddef>

using std::cout;
using std::endl;

/*
 A linked list is a list constructed using pointers. It is not fixed in
 size and could grow and shrink while the program is running.

 A typical defination of list nodes contains at least two parts, both the
 content or date of each element and the pointer to the next element,
 which is shown in the figure below.

 +---------+
 |  Data   | -----> holds the data of this element in the list.
 +---------+
 | pointer | -----> is a pointer to the next element in the list.
 +---------+

 ***Attention***:
 The pointer holds the address of the next element, not the address of the
 data in the next element, even though they are the same in value sometimes.
 And It should be set to NULL while acting as the last node of the list.


 Implementation of the single linked list:
 +---------+    --->+---------+    --->+---------+
 |  Data   |    |   |  Data   |    |   |  Data   |
 +---------+    |   +---------+    |   +---------+
 | pointer |-----   | pointer |-----   | pointer |
 +---------+        +---------+        +---------+
 */


/* definition of the list node class */
class Node
{
    friend class LinkedList;
private:
    int _value; /* data, can be any data type, but use integer for easiness */
    Node *_pNext; /* pointer to the next node */

public:
    /* Constructors with No Arguments */
    Node(void)
    : _pNext(NULL)
    { }

    /* Constructors with a given value */
    Node(int val)
    : _value(val), _pNext(NULL)
    { }

    /* Constructors with a given value and a link of the next node */
    Node(int val, Node* next)
    : _value(val), _pNext(next)
    {}

    /* Getters */
    int getValue(void)
    { return _value; }

    Node* getNext(void)
    { return _pNext; }
};

/* definition of the linked list class */
class LinkedList
{
private:
    /* pointer of head node */
    Node *_pHead;
    /* pointer of tail node */
    Node *_pTail;

public:
    /* Constructors with a given value of a list node */
    LinkedList(int val);
    /* Destructor */
    ~LinkedList(void);

    /* Function to append a node to the end of a linked list */
    void tailAppend(int val);

    /* Function to search a node with a given value,
     and if succeeded return the node */
    Node* search(int val);
};

LinkedList::LinkedList(int val)
{
    /* Create a new node, acting as both the head and tail node */
    _pHead = new Node(val);
    _pTail = _pHead;
}

LinkedList::~LinkedList()
{
    /*
     * Leave it empty temporarily.
     * It will be described in detail in the example "How to delete a linkedlist".
     */
}

void LinkedList::tailAppend(int val)
{
    /* The list is empty? */
    if (_pHead == NULL) {
        /* the same to create a new list with a given value */
        _pTail = _pHead = new Node(val);
    }
    else
    {
        /* Append the new node to the tail */
        _pTail->_pNext = new Node(val);
        /* Update the tail pointer */
        _pTail = _pTail->_pNext;
    }
}

Node* LinkedList::search(int val)
{
    Node* pNode = _pHead;

    /* traverse the list */
    while (pNode != NULL) {
        /* Target! */
        if(pNode->_value == val)
        {
            return pNode;
        }
        /* move to the next one */
        pNode = pNode->_pNext;
    }
    return NULL;
}

int main(int argc, const char * argv[])
{
    /* Create a list with only one node */
    LinkedList list(1);
    /* Append 3 nodes to the end of the list */
    list.tailAppend(2);
    list.tailAppend(3);
    list.tailAppend(4);

    cout << "This list includes 4 nodes with values: 1 2 3 4" << endl;
    cout << endl;

    Node* node;
    /* Search the node with value 3 */
    cout << "Searching a node with value 3" << endl;
    node = list.search(3);
    /* output the result */
    if (node != NULL)
        cout << "Result: Find the node with value " << node->getValue() << endl;

    else
        cout << "Result: Cannot find the node with value 3" << endl;
    cout << endl;

    /* Search the node with value 5 */
    cout << "Searching a node with value 5" << endl;
    node = list.search(5);
    /* output the result */
    if (node != NULL)
        cout << "Result: Find the node with value " << node->getValue() << endl;

    else
        cout << "Result: Cannot find the node with value 5" << endl;

    return 0;
}
