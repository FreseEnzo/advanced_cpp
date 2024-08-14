#include <iostream>

using namespace std;

class MyClass
{
    public: // Acess specifier 
    int a;
    float b; // Attributes
    string c;
};

int main()
{
    MyClass obj;
    obj.a = 24;
    obj.a++;
    cout<< obj.a << endl;
    return 0;
}