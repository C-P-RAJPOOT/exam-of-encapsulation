#include<iostream>
using namespace std;
class Encapsulation
{
    public:
    int a=10;
    void show()
    {

        cout<<"valuen of a is \n"<<a;

    }


};
int main()
{
    Encapsulation obj;
    obj.show();
    return 0;
}

