
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

// #include <iostream>
// using namespace std;

// template <class T>
// class stack
// {
//     T value[5];
//     int top;

// public:
//     stack()
//     {
//         top = -1;
//     }
//     void push(T n)
//     {
//         value[++top] = n;
//     }
//     T pop()
//     {
//         return value[top--];
//     }
//     void display()
//     {
//         cout<<"The cover index are :"<<top<<endl;
//         for (int i = 0; i <= top; i++)
//         {
//             cout << value[i] << endl;
//         }
//     }
// };
// int main()
// {
//     stack<int> s1;
//     s1.push(45);
//     s1.push(6);
//     s1.push(8);
//     s1.pop();
//     s1.push(19);
//     s1.display();
//     return 0;
// }

// ****************************************************************
// #include <iostream>
// using namespace std;

// template <class T>
// class stack
// {
//     T value[5];
//     int top;

// public:
//     stack()
//     {
//         top = -1;
//     }
//     void push(T n)
//     {
//         if (top >= 5 - 1)
//         {
//             throw full( "Array is full");
//         }

//         value[++top] = n;
//     }
//     T pop()
//     {
//         if (top < 0)
//         {
//             throw empty(top, "Error 404");
//         }

//         return value[top--];
//     }
//     void display();

//     class empty
//     {
//     public:

//         empty(int top, string msg)
//         {
//             cout << "The size of array are : " << top << endl
//                  << msg << endl;
//         }
//     };
//     class full
//     {
//     public:

//         full( string msg)
//         {
//             cout<< msg << endl;
//         }
//     };
// };

// template <class T>
// void stack<T>::display()
// {
//     cout << "The cover index are :" << top << endl;
//     for (int i = 0; i <= top; i++)
//     {
//         cout << value[i] << endl;
//     }
// }

// int main()
// {
//     stack<int> s1;
//     try
//     {

//        s1.pop();
//         s1.push(45);
//         s1.push(6);
//         s1.push(8);
//         s1.push(19);
//         s1.push(999);
//         s1.push(66);
//         s1.display();
//     }
//     catch (stack<int>::empty)
//     {
//     }
//     catch (stack<int>::full)
//     {
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;
// template <class t1=int,class t2=string> // Default template parameter
// class student{
//     t1 id;
//     t2 name;
//     public:
//     student(){}
//     student(t1 i,t2 n){
//         id=i;
//         name=n;
//     }
//     void display(){
//         cout<<"ID : "<<id<<endl<<"Name : "<<name<<endl;
//     }

// };

// class record{
//     student<> s[5];
//     int index;
//     public:
//     record(){index=0;}
//     void add(int i,string n){
//         if (index>4)
//         {
//             throw runtime_error("array is full");
//         }
//         s[index++]=student<>(i,n);
//     }
// void display(){
//     if (index==0)
//     {
//         throw runtime_error("error");
//     }

//     for (int i = 0; i < index; i++)
//     {
//        s[i].display();
//     }

// }

// };
// int main()
// {
//     record c;
//     try
//     {

//         c.add(2,"hamza");
//         c.add(2,"hamza");
//         c.add(6,"hamza");
//         c.add(8,"hamza");
//         c.add(9,"hamza");
//         c.add(9,"hamza");
//         c.display();
//     }
//     catch(runtime_error &e)
//     {
//      cout<<"Exception : "<<e.what()<<endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    string str = "hamza";

    cout << str << endl;
    str.push_back('d');
    cout << str << endl;
    str.pop_back();
    cout << str << endl;
    cout << str.length() << endl;
    // str.resize(45);
    cout << "length : " << str.length() << endl;
    cout << "Capacity : " << str.capacity() << endl;
    // str.shrink_to_fit();
    // cout << str << endl;

    string::iterator i;
    for (i = str.begin(); i != str.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    string::reverse_iterator j;
    for (j = str.rbegin(); j != str.rend(); j++)
    {
        cout << *j << " ";
    }

    return 0;
}