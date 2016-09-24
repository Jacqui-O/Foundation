#include <iostream>
#include <string>

using namespace std;

class Variables
{
    public:
        Variables()
        {
          Items = new string[10];
          //  Items = new int[10];
        }

~Variables()
        {
            delete Items;
        }


       string* Items;

        //int* Items;
};

int main()
{
    int i;
    Variables VO;

    string plrname;

    cout << "What is your name?" << endl;
    cin >> plrname;

    cout << "enter stuff" << endl;
    for(i=0; i<5; i++){
      cin >> VO.Items[i];

      cout << VO.Items[i] << endl;
    }

}
