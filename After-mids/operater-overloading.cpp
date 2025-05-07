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

#include <iostream>
using namespace std;

class op
{
    int marks;
    int arr[4];

public:
    op() {}
    op(int n)
    {
        marks = n;
    }
    void display()
    {
        cout << "The marks are " << marks << endl;
    }
    void operator++()
    {
        ++marks;
    }
    void operator++(int)
    {
        marks++;
    }
    void operator--()
    {
        --marks;
    }
    void operator--(int)
    {
        marks--;
    }
    op operator+(op b)
    {
        op c;
        c.marks = marks + b.marks;
        return c;
    }
    op operator*(op b)
    {
        op c;
        c.marks = marks * b.marks;
        return c;
    }
    op operator/(op b)
    {
        op c;
        c.marks = marks / b.marks;
        return c;
    }
    void operator>=(op b)
    {
        if (marks >= b.marks)
        {
            cout << "true";
        }
        cout << "false";
    }
    int &operator[](int index)
    {
        return arr[index];
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

    op n(200), o;
    o = m + n;
    o.display();

    o = m * n;
    o.display();

    o = m / n;
    o.display();
    m >= n;

    cout << endl;
    op arr;
    for (int i = 0; i < 4; i++)
    {
        arr[i] = i + 1;
    }

    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}