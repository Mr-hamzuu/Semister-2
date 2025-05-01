
//  Base class
// class base{
//     int n1;
//     float n2;
// };
// Derive class Syntax
// class {{derive class name}}:{{Visiblity mod}} {{base class}}
// {
// class member/method/etc....
// };
// Note : Default visibility mode is private
// 1. Private visibilty mode: Public member of a base class becomes private member of derived class
// 2. Public visibilty mode: Public visibily of a base class becomes public member of derived class
// 3. Private member are never inherited

// 1. Public Inheritance
// 🔹 Inherits public and protected members as they are.
// 🔹 Private members of the base class are not inherited directly but can be accessed through public/protected functions.
// class Parent {
//     public:
//         int a;
//     protected:
//         int b;
//     private:
//         int c;
//     };

//     class Child : public Parent {
//         // 'a' remains public
//         // 'b' remains protected
//         // 'c' is inaccessible
//     };

// 2. Protected Inheritance
// 🔹 Public members of the base class become protected in the derived class.
// 🔹 Protected members remain protected.
// 🔹 Private members remain inaccessible.
// class Child : protected Parent {
// 'a' becomes protected
// 'b' remains protected
// 'c' is inaccessible
// };
// 3. Private Inheritance
// 🔹 Both public and protected members of the base class become private in the derived class.
// 🔹 Private members of the base class remain inaccessible.
// class Child : private Parent {
// 'a' becomes private
// 'b' becomes private
// 'c' is inaccessible
// };

// #include <iostream>
// using namespace std;
// class base
// {
//     int marks;
// public:
//     string name;
//     int id;
// };
// class derived : public base
// {
// public:
//     derived(int n, string name)
//     {
//         id = n;
//         this->name = name;
//     }
//     void display()
//     {
//         cout << id << endl;
//         cout << name << endl;
//     }
// };
// int main()
// {
//     derived n(2, "Hamza");
//     n.display();
//     cout << n.name;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class base{
// int x;
// string name;
// protected:
// base(){
//     x=6;
//     name="hamza";
//     cout<<"Base constructer "<<endl;
// }
// int xdata(){
//     cout<<"-->";
//     return x;
// }
// string ndata(){
//     cout<<"-->";
//     return name;
// }
// };
// class derived:private base{
//     int v;
//     public:
//     derived(){v=7;}
//     void getdata(){
//         cout<<"x = "<<xdata()<<endl;
//         cout<<"name = "<<ndata()<<endl;
//     }
// };
// int main()
// {
//     derived n;
//     n.getdata();

//     return 0;
// }

// #include<iostream>
// using namespace std;

// class base{
//     protected:
//     int id;
//     string name;
//     double salary;
//     public:
//     base(int x,string name,double salary){
//         id=x;
//         this->name=name;
//         this->salary=salary;
//     }
//     void display(){
//         cout<<"id = "<<id<<endl;
//         cout<<"Name = "<<name<<endl;
//         cout<<"Salary = "<<salary<<endl;
//     }
//     float bonus(){
//         return salary*0.05;
//     }
// };
// class derived:public base{
//     int teamsize;
//     string department;
// public:
//     derived(int id,string name,double salary,int ts,string dp):base(id,name,salary),teamsize(ts),department(dp){}
//     float calculatebonus(){
//         return salary*(0.10+0.02*teamsize);
//     }
//     void displaydetails(){
//         display();
//         cout<<"Teamsize : "<<teamsize<<"\nDepartment : "<<department<<endl;
//     }

// };
// int main()
// {
//     base v(1,"Umer",3000);
//     derived n(22,"Hamza",2500,1,"SE");
//     cout<<"Base Details : "<<endl;
//     v.display();
//     cout<<"Bonus : "<<v.bonus()<<endl;
//     n.display();
//     cout<<"Derived detail : "<<endl;
//     n.displaydetails();
//     cout<<"Bonus : "<<n.calculatebonus()<<endl;

//     cout<<"Bonus : "<<n.bonus();
//     return 0;
// }

// Multiple inheritance
// #include <iostream>
// using namespace std;

// class A
// {
//     int x;

// public:
// A(){
//     cout<<"Constructer 1"<<endl;
// }
// void getdata()
// {
//     cout << "X = ";
//     cin >> x;
// }
// void showdata()
// {
//     cout << "X = "<<x<<endl;
// }
// };
// class B:public A
// {
//     int y;

//     public:
//     B(){
//         cout<<"Constructer 2"<<endl;
//     }
//     void getdata()
//     {
//         A::getdata();
//         cout << "y = ";
//         cin >> y;
//     }
//     void showdata()
//     {
//         A::showdata();
//         cout << "y = "<<y<<endl;
//     }
// };
// class C:public B{
//     int z;
//     public:
//     C(){
//         cout<<"Constructer 3"<<endl;
//     }
//     void getdata()
//     {
//         B::getdata();
//         cout << "z = ";
//         cin >> z;
//     }
//     void showdata()
//     {
//         B::showdata();
//         cout << "z = "<<z;
//     }

// };
// int main()
// {
// C n;
// n.getdata();
// n.showdata();
//     return 0;
// }

// Example of multilevel inheritance
// #include <iostream>
// #include <cmath>
// using namespace std;

// class simplecal
// {
// protected:
//     int x, y, op;
//     void select(int n, int y, int z);
//     int sum(int x, int y);
//     int mul(int x, int y);
//     int sub(int x, int y);
//     int di(int x, int y);

// };
// void simplecal::select(int n, int y, int z)
// {
//     switch (z)
//     {
//     case 1:

//         cout << "The sum of 2 numbers are" << sum(n, y);
//         break;
//     case 2:
//         cout << "The sub of 2 numbers are" << sub(n, y);

//         break;
//     case 3:
//         cout << "The mul of 2 numbers are" << mul(n, y);
//         break;
//     case 4:
//         cout << "The division of 2 numbers are" << di(n, y);
//         break;
//     }
// }
// int simplecal::sum(int x, int y)
// {
//     return x + y;
// }
// int simplecal::sub(int x, int y)
// {
//     return x - y;
// }
// int simplecal::mul(int x, int y)
// {
//     return x * y;
// }
// int simplecal::di(int x, int y)
// {
//     return x / y;
// }

// class scientific
// {
// protected:
// void select(int n, int y, int z)
// {
//     switch (z)
//     {
//     case 1:

//         cout << "The sum of 2 cos numbers are" << cos(n)+cos(y);
//         break;
//     case 2:
//         cout << "The sub of 2 sin numbers are" << sin(n)-sin(y);

//         break;
//     case 3:
//         cout << "The mul of 2 tan numbers are" << tan(n)*tan(y);
//         break;

//     }
// }

// };

// class child:protected simplecal, protected scientific{
//     int x,y,z,c;
//     public :
//     void getdata()
//     {
//         cout << "Enter x value : ";
//         cin >> x;
//         cout << "Enter y value : ";
//         cin >> y;
//         cout << "Enter operation : ";
//         cin >> z;

//         cout<<"Which calcullater you want to use \n1.simple\n2.scientific"<<endl;
//         cin>> c;
//         if (c==1)
//         {
//             simplecal::select(x,y,z);
//         }
//         else if(c==2){
//             scientific::select(x,y,z);
//         }
//         else{
//             cout<<"Error"<<endl;
//         }

//     }
// };
// int main()
// {
// child c;
// c.getdata();
//     return 0;
// }
// Multiple inheritance**********************************************************
// #include<iostream>
// using namespace std;

// class A{
//     int x;
//     public:
//     A(){
//         cout<<"I am constructer A "<<endl;
//     }
//     void getdata(){
//         cin>>x;
//     }
//     void display(){
//         cout<<" x = "<<x<<endl;
//     }
// };
// class B{
//     int y;
//     public:
//     B(){
//         cout<<"I am constructer B "<<endl;
//     }
//     void getdata(){
//         cin>>y;
//     }
//     void display(){
//         cout<<" x = "<<y<<endl;
//     }
// };
// class C:public A,public B{
//     int z;
//     public:
//     C(){
//         cout<<"I am constructer C "<<endl;
//     }
//     void getdata(){
//         A::getdata();
//         B::getdata();
//         cin>>z;
//     }
//     void display(){
//         A::display();
//         B::display();
//         cout<<" x = "<<z<<endl;
//     }
// };
// int main()
// {
//     C n;
//     n.getdata();
//     n.display();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Grandfather
// {
// public:
//     string name;
//     Grandfather()
//     {
//         cout << "I am Grandfather " << endl;
//     }
//     void getdata()
//     {
//         cout << "My name is ";
//         cin >> name;
//     }
// };
// class parent1 :virtual public Grandfather
// {
// public:
//     parent1()
//     {
//         cout << "I am parent1 " << endl;
//     }
// };
// class parent2:virtual public Grandfather{
// public:
// parent2(){
//     cout<<"I am parent2 "<<endl;
// }
// void showdata(){

//     cout<<"My father name is "<<name<<endl;

// }
// };
// class child:public parent1, public parent2{
//     public:
//    child(){
//     cout<<"I am child"<<endl;
//    }

// };
// int main()
// {
// child c;
// c.getdata();
// c.showdata();

//     return 0;
// }

// #include<iostream>
// using namespace std;

// class myclass{
//     int n;
//     int y;
//     public :
//     myclass(){}
//     myclass(int x,int z){
//         n=x;
//         y=z;
//     }
//     myclass(myclass &m){
//         n=m.n;
//         y=m.y;

//     }
//     void display(){
//         cout<<"Value of n "<<n<<" and y is "<<y<<endl;
//     }
// };
// int main()
// {
//     myclass m(34,65);
//     m.display();
//     myclass m2(m);
//     m2.display();
//     return 0;
// }

#include <iostream>
using namespace std;

class derived;
class base
{
    int x, y;

public:
    base()
    {
        x = 4;
        y = 7;
    }
    friend class derived;
};
class derived
{
public:
    void display(base a)
    {
        cout << "The value of x is " << a.x << endl;
        cout << "The value of y is " << a.y << endl;
    }
};
int main()
{
    base b;
    derived d;
    d.display(b);
    return 0;
}