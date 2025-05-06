// #include <iostream>
// using namespace std;

// class base
// {
//     int n;

// public:
//     base()
//     {
//         n = 0;
//     }
//     int display()
//     {
//         return n;
//     }
//     void setdata(int v)
//     {
//         n = v;
//     }

//     // Unary Operater overloading
//     void operator++()
//     {
//         ++n;
//     }
//     void operator++(int)
//     {
//         n++;
//     }

//     // Binary Operater overloading
//     base operator+(base b)
//     {
//         base c;
//         c.n = n + b.n;
//         return c;
//     }
//     base operator-(base b)
//     {
//         base c;
//         c.n = n - b.n;
//         return c;
//     }
//     base operator*(base b)
//     {
//         base c;
//         c.n = n * b.n;
//         return c;
//     }
// };
// int main()
// {
//     base a, b, c;
//     a.setdata(4);
//     ++a;
//     b.setdata(7);
//     b++;

//     cout << "The value of \'a\' is " << a.display() << endl;
//     cout << "The value of \'b\' is " << b.display() << endl;

//     c = a + b; // The + is an Operater of 'a' object and b is the argument
//     cout << "The Sum of \'a\' and \'b\' is " << c.display() << endl;

//     c = a - b;
//     cout << "The Difference between \'a\' and \'b\' is " << c.display() << endl;

//     c = a * b;
//     cout << "The Multiplication of \'a\' and \'b\' is " << c.display() << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class complex
// {
//     int x, y;

// public:
//     void setdata()
//     {
//         cout << "Enter real number : ";
//         cin >> x;
//         cout << "Enter imaginary number : ";
//         cin >> y;
//     }
//     void getdata()
//     {
//         cout << "The values are " << x << "+" << y << "i" << endl;
//     }

//     complex operator+(complex b)
//     {
//         complex c;
//         c.x = x + b.x;
//         c.y = y + b.y;
//         return c;
//     }
// };

// int main()
// {
//     complex a, b, c;
//     a.setdata();
//     a.getdata();

//     cout << endl;

//     b.setdata();
//     b.getdata();

//     cout << endl;
//     c = a + b;

//     c.getdata();
//     return 0;
// }


#include<iostream>
using namespace std;

class op{
    int marks;
    public:
    op(int n){
        marks=n;
    }
    void display(){
        cout<<"The marks are "<<marks<<endl;
    }
    void operator ++(){
        ++marks;
    }
    void operator ++(int){
        marks++;
    }
    void operator --(){
        --marks;
    }
    void operator --(int){
        marks--;
    }
};
int main()
{
    op m(100);
    m.display();
    m++;
    
    m.display();

    ++m;
    m.display();

    --m;
    m.display();
    m--;
    m.display();
    return 0;
}