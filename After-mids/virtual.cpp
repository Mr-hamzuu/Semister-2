
// //pointer to derived class
// #include <iostream>
// using namespace std;

// class base
// {
//     int n;
// public:
//     int v;
//     void setdata()
//     {
//         cout << "Enter the value base class: ";
//         cin >> n;
//     }
//     void getdata()
//     {
//         cout << "The value of base class is " << n << endl;
//     }
// };
// class derived : public base
// {
//     int b;

// public:
//     void setdata()
//     {
//         cout << "Enter the value of derived class: ";
//         cin >> b;
//         cout << "Enter the value of base class: ";
//         cin >> v;
//     }
//     void getdata()
//     {
//         cout << "The value of derived class is " << b << endl;
//         cout << "The value of base class is " << v << endl;
//     }
// };
// int main()
// {
//     base obj_base;
//     base *ptr_base;
//     derived obj_derived;
//     derived *ptr_derived;

//     ptr_base = &obj_derived;
//     ptr_base->setdata();
//     ptr_base->getdata();

//     ptr_derived = &obj_derived;
//     ptr_derived->v = 77;
//     ptr_derived->getdata();

//     return 0;
// }

// virtual class : if we point a base class pointer to a derived class object and we use a virtual function in base class then if we call a getdata function through a base class pointer it will give us a derive class function

// The virtual keyword enables runtime polymorphism in C++. It tells the compiler:
// “This function can be overridden in a derived class, and if it is, call the derived version, even when accessed through a base class pointer or reference.”
// Rules:
// 1) They cannot be static
// 2) They are accessed by obj pointers
// 3) Fuction can be a friend of another class
// 4) A function in Base class might not be use
// 5) If a function is defined in a base class then there is no need to redefined it in a derived class
// #include <iostream>
// using namespace std;

// class base
// {
//     int n;
// public:
//     int v;
//     virtual void setdata()
//     {
//         cout << "Enter the value base class: ";
//         cin >> n;
//     }
//    virtual void getdata()
//     {
//         cout << "The value of base class is " << n << endl;
//     }
// };
// class derived : public base
// {
//     int b;

// public:
//     void setdata()
//     {
//         cout << "Enter the value of derived class: ";
//         cin >> b;
//         cout << "Enter the value of base class: ";
//         cin >> v;
//     }
//     void getdata()
//     {
//         cout << "The value of derived class is " << b << endl;
//         cout << "The value of base class is " << v << endl;
//     }
// };
// int main()
// {
//     base obj_base;
//     base *ptr_base;
//     derived obj_derived;
//     derived *ptr_derived;

//     // now it will call a derived class function
//     ptr_base = &obj_derived;
//     ptr_base->setdata();
//     ptr_base->getdata();

//     return 0;
// }

#include <iostream>
using namespace std;

class myclass
{
public:
    int n;
    // static int count ;
    myclass() { n = 5; }
    int getdata()
    {
        return n;
    }
    void display() {

        cout << "myclass " << n << endl;
    }
};
class parent1 :virtual public myclass
{
public:
    void display() 
    {
        cout << "parent 1" << n << endl;
    }
};
class parent2 :virtual public myclass
{
public:
    void display() 
    {
        cout << "parent 1 " << n << endl;
    }
};
class child : public parent1, public parent2
{
public:
    // void display()
    // {
    //     cout << "Child  " <<myclass::getdata()<<  endl;
    // }
};
// int myclass::count=0;
int main()
{
    child n;
    n.parent2::display();

    return 0;
}