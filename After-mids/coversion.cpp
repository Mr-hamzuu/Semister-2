// #include <iostream>
// #include <typeinfo>
// using namespace std;

// class second
// {
//     int x;

// public:
//     second(int n)
//     {
//         x = n;
//     }
//     void display()
//     {
//         cout << "The value of x is " << x << endl;
//     }
// };

// // Class to built-in datatype conversion
// class conversion
// {
//     int v;

// public:
//     conversion() {}
//     conversion(int n)
//     {
//         this->v = n;
//     }
//     void display()
//     {
//         cout << "The value of v is " << v << endl;
//     }
//     // Rules of operator for class to built-in datatype conversion
//     // no return type
//     // no argument
//     // no expilicit dattype used with class operator
//     operator int()
//     { // we store obj in integer datatype
//         return v;
//     }

//     // class to class convertion
//     operator second()
//     {
//         second temp(v);
//         return temp;
//     }
// };

// int main()
// {
//     float j = 5.5;
//     int n;
//     n = int(j); // Explicit coversion
//     cout << typeid(j).name() << endl;

//     conversion c = 200;
//     c.display();
//     int built_in;
//     built_in = c;
//     cout << "The value if built-in is " << built_in << endl;

//     second s = c;
//     s.display();
//     return 0;
// }

// practice
// #include <iostream>
// using namespace std;
// class dollar;
// class rupees
// {
//     float n;

// public:
//     rupees() {}
//     rupees(float dollar)
//     {
//         n = dollar * 280;
//     }
//     void display()
//     {
//         cout << "The conversion from dollar to rupees are " << n << endl;
//     }
//     operator dollar();
// };

// class dollar
// {
//     float price;

// public:
//     dollar() {}
//     dollar(float n)
//     {
//         price = n;
//     }
//     void display()
//     {
//         cout << "The amount is " << price << endl;
//     }
//     operator float()
//     {
//         return price;
//     }
//     operator rupees()
//     {
//         rupees r(price);
//         return r;
//     }
// };

// rupees::operator dollar()
// {
//     dollar d(n);
//     return d / 280;
// }

// int main()
// {
//     // user to class
//     float f = 55.4;
//     dollar d(f);
//     d.display();
//     f = d;
//     cout << "The value of n is " << f << endl;

//     // class to user
//     d = f;
//     d.display();

//     // class to class
//     rupees r, t(5);
//     r = d;
//     r.display();

//     d = t;
//     t.display();
//     d.display();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class sample
// {
//     int n;
//     float f;

// public:
//     sample(int c, float s)
//     {
//         n = c;
//         f = s;
//     }
//     operator float()
//     {
//         return n + f;
//     }
// };
// int main()
// {
//     int n = 5;
//     float s = 66;
//     s = static_cast<float>(n);
//     cout << s << endl;
//     sample v(44, 555);
//     s = float(v);
//     cout << s;
//     return 0;
// }

// #include <iostream>
// #include <iomanip>

// using namespace std;

// class twentyfour;
// class tweleve
// {
//     int hrs, min;
//     string period;

// public:
//     tweleve(int h, int m, string s)
//     {
//         this->hrs = h;
//         this->min = m;
//         this->period = s;
//     }
//     void display()
//     {

//         cout << setw(2) << setfill('0') << hrs << " : "
//              << setw(2) << setfill('0') << min
//              << " : " << period << endl;
//     }
//     operator twentyfour();
// };

// class twentyfour
// {
//     int hrs, min, sec;

// public:
//     twentyfour(int h, int m, int s = 00)
//     {
//         this->hrs = h;
//         this->min = m;
//         this->sec = s;
//     }
//     void display()
//     {

//         cout << setw(2) << setfill('0') << hrs << " : "
//              << setw(2) << setfill('0') << min << " : "
//              << setw(2) << setfill('0') << sec << endl;
//     }
//     operator tweleve()
//     {
//         int hr12=0;
//         string s;
//         if (sec >= 30)
//         {
//             min++;
//         }
//         if (hrs == 0)
//         {
//             hr12 = 12;
//         }
//         else if (hrs > 12)
//         {
//             hr12 = hrs-12;
//         }
//         else
//         {
//             hr12 = hrs;
//         }
//         if (min >= 60)
//         {
//             hr12++;
//             min=0;
//         }
//         if (hrs < 12)
//         {
//             s = "AM";
//         }
//         else
//         {
//             s = "PM";
//         }
//         return tweleve(hr12, min, s);
//     }
// };
// tweleve::operator twentyfour()
// {
//     int hr24 = 0;
//     int sec = 0;
//     sec = 44;
//     if (period == "PM" && hrs != 12)
//     {
//         hr24 += hrs;
//     }

//     else if (period == "AM" && hrs == 12)
//     {
//         hr24 = 0;
//     }
//     else
//     {
//         hr24 = hrs;
//     }
//     if (sec >= 30)
//     {
//         min++;
//     }
//     if (min >= 60)
//     {
//         hr24++;
//         min=0;
//     }

//     return twentyfour(hr24, min, sec);
// }

// int main()
// {

//     // time();
//     int h, m, sec;

//     cout << "Enter hours : ";
//     cin >> h;
//     cout << "Enter min : ";
//     cin >> m;
//     cout << "Enter sec : ";
//     cin >> sec;
//     if (h>24 || m>59 || sec>59)
//     {
//         return 1;
//     }

//     twentyfour s(h, m, sec);
//     tweleve t = s;
//     s.display();
//     t = s;
//     t.display();

//     return 0;
// }

// #include <iostream>
// #include <iomanip>
// using namespace std;

// class time24;
// class time12
// {
//     int h, m;
//     bool pm;

// public:
//     time12() : h(0), m(0), pm(true) {}
//     time12(int n, int c, bool p)
//     {
//         h = n;
//         m = c;
//         pm = p;
//     }
//     void display() const
//     {
//         cout << setw(2) << setfill('0') << h << " : " << setw(2) << setfill('0') << m;
//         if (pm)
//         {
//             cout << " PM" << endl;
//         }
//         else
//         {
//             cout << " AM" << endl;
//         }
//     }

//     operator time24();
// };
// class time24
// {
//     int hrs, min, sec;

// public:
//     time24() : hrs(0), min(0), sec(0) {}
//     time24(int n, int c, int p)
//     {
//         hrs = n;
//         min = c;
//         sec = p;
//     }
//     void display() const
//     {
//         cout << setw(2) << setfill('0') << hrs << " : " << setw(2) << setfill('0') << min << " : " << setw(2) << setfill('0') << sec << endl;
//     }
//     operator time12()
//     {
//         int h;
//         bool b = false;
//         if (sec > 30)
//         {
//             min++;
//         }
//         if (hrs > 12)
//         {
//             h = hrs - 12;
//             b = true;
//         }
//         if (min > 59)
//         {
//             h++;
//         }
//         if (hrs == 24)
//     {
//         hrs = 0;
//     }
//         return time12(h, min, b);
//     }
// };

// time12::operator time24()
// {
//     int hrs = 0, sec = 0;
//     if (pm)
//     {
//         hrs = h + 12;
//     }
//     else
//     {
//         hrs = h;
//     }
//     if (m >= 60)
//     {
//         hrs++;
//     }

//     return time24(hrs, m, sec);
// }

// int main()
// {
//     time12 s(6, 23, 1);
//     time24 c = s;
//     s.display();
//     c.display();

//     time24 v(23, 34, 56);
//     time12 d = v;
//     v.display();
//     d.display();
//     return 0;
// }

#include <iostream>
using namespace std;

class box
{
    int n;

public:
box(){}
    box(int b)
    {
        n = b;
    }
    box( float &b)
    {
        n = static_cast<int>(b);
    }
    void display()
    {
        cout << n << endl;
    }
    box operator=(const box &b)
    {
        n = b.n + 3;
        return box(n);
    }
    operator int(){
        return n;
    }

};
int main()
{
    int n=45;
    float f;
    f=n;
    cout<<"the value is "<<n<<endl;
    box b(6);
    box c(b);
    c.display();
    box d;
    d = c;
    d.display();
    box v;
    v=f;
    n=d;
    v.display();
    cout<<"the value is "<<n<<endl;

    return 0;
}