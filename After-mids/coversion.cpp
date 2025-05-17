#include <iostream>
#include <typeinfo>
using namespace std;

class second
{
    int x;

public:
    second(int n)
    {
        x = n;
    }
    void display()
    {
        cout << "The value of x is " << x << endl;
    }
};

// Class to built-in datatype conversion
class conversion
{
    int v;

public:
    conversion() {}
    conversion(int n)
    {
        this->v = n;
    }
    void display()
    {
        cout << "The value of v is " << v << endl;
    }
    // Rules of operator for class to built-in datatype conversion
    // no return type
    // no argument
    // no expilicit dattype used with class operator
    operator int()
    { // we store obj in integer datatype
        return v;
    }

    // class to class convertion
    operator second()
    {
        second temp(v);
        return temp;
    }
};

int main()
{
    float j = 5.5;
    int n;
    n = int(j); // Explicit coversion
    cout << typeid(j).name() << endl;

    conversion c = 200;
    c.display();
    int built_in;
    built_in = c;
    cout << "The value if built-in is " << built_in << endl;

    second s = c;
    s.display();
    return 0;
}