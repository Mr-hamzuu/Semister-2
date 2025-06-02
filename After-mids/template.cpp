
// Template Function

// #include <iostream>
// using namespace std;

// template <class Temp>
// int diff(Temp x, Temp y)
// {
//     int z = x - y;
//     return z;
// }

// template <class Temp, class M>
// float mul(Temp x, M y)
// {
//     float z = x * y;
//     return z;
// }
// template <class Temp>
// void add(Temp x, Temp y)
// {
//     char z = x +y;
//     cout <<x<<endl;
//     cout <<y<<endl;

// }
// int main()
// {
//     cout << diff(9, 6) << endl;
//     cout << mul(9, 6.9)<<endl;
//    add('A','B');
//     return 0;
// }

// Template class

#include <iostream>
using namespace std;

template <class T>
class stack
{
    T value[5];
    int top;

public:
    stack()
    {
        top = -1;
    }
    void push(T n)
    {
        value[++top] = n;
    }
    T pop()
    {
        return value[top--];
    }
    void display()
    {
        cout<<"The cover index are :"<<top<<endl;
        for (int i = 0; i <= top; i++)
        {
            cout << value[i] << endl;
        }
    }
};
int main()
{
    stack<int> s1;
    s1.push(45);
    s1.push(6);
    s1.push(8);
    s1.pop();
    s1.push(19);
    s1.display();
    return 0;
}