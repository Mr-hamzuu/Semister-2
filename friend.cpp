

// Friend function:
// A friend function is a non-member function that can access private and protected members of a class.
// #include<iostream>
// using namespace std;

// class student{
//     int id;
//     string name;
//     float marks;
//     public:
//     friend student calculate(student s1,student s2);//friend function
//     void setdata(int id,string name,float marks){
//         this->id=id;
//         this->name=name;
//         this->marks=marks;
//     }
//     void display(){
//         cout<<"ID : "<<id<<endl;
//         cout<<"Name : "<<name<<endl;
//         cout<<"Marks : "<<marks<<endl;
//     }
// };
// student calculate(student s1,student s2){
//     student sum;
//     sum.id=2;
//     sum.name="total";
//     sum.marks=s1.marks+s2.marks;
//   return sum;
// }
// int main()
// {
//     student s1,s2,sum;
//     s1.setdata(32,"hamza",56);
//     s1.display();

//     s2.setdata(4,"Abbas",78);
//     s2.display();

//     sum=calculate(s1,s2);
//     sum.display();

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class ractangle
// {
// private:
//     int length;
//     int width;

// public:
//     ractangle(int length, int width)
//     {
//         this->length = length;
//         this->width = width;
//     }
//     void display()
//     {
//         cout << "length : " << length << endl;
//         cout << "width : " << width << endl;
//     }
//     friend void calculate(ractangle r);
// };
// void calculate(ractangle r)
// {
//     cout << "The Area is " << r.length * r.width;
// }
// int main()
// {
//     ractangle r(2, 5);
//     r.display();
//     calculate(r);

//     return 0;
// }

// Friend function in different classes******************************************************************
// #include <iostream>
// using namespace std;
// class divide;
// class sum
// {
// public:
//     int s(divide x);
//     friend class divide;
// };
// class divide
// {
//     int a;
//     int b;

// public:
//     divide(int x, int y)
//     {
//         a = x;
//         b = y;
//     }
//     friend int sum::s(divide x);
// };
// int sum::s(divide x)
// {
//     return x.a / x.b;
// }
// int main()
// {
//     sum a;
//     divide y(4, 2);
//     int f = a.s(y);
//     cout << "The division is " << f;
//     return 0;
// }

// Individually declaring function as friend
// #include <iostream>
// using namespace std;
// class book;
// class librarian
// {
// public:
//     friend void display(book[]);
// };
// class book
// {
//     int bookid;
//     string title;
//     float price;

// public:
//     void setdata(int a, string b, float c)
//     {
//         bookid = a;
//         title =  b;
//         price = c;
//     }
//     friend void display(book[]);
// };
// void display(book a[])
// {
//     for (int i = 0; i < 3; i++)
//     {
//         cout << "Book id : " << a[i].bookid << endl;
//         cout << "Title : " << a[i].title << endl;
//         cout << "Price : " << a[i].price << endl;
//     }
// }
// int main()
// {
//     book a[3];
//     int id;
//     string name;
//     float price;
//     for (int i = 0; i < 3; i++)
//     {
//         cout<<"Enter the book id :";
//         cin>>id;
//         cout<<"Enter the book title:";
//         cin.ignore();
//         getline(cin,name);
//         cout<<"Enter the book Price:";
//         cin>>price;
//         a[i].setdata(id,name,price);
//     }

//     display(a);
//     return 0;
// }

// *****************************************************************************************************
// Friend class :Instead of individually creating a friend function we use friend class for giving access to the entire class
// #include<iostream>
// using namespace std;
// class secretdiary;

// class person{
//     string name;
//     int age;
//     public:
//     person(int a,string b){
//         age=a;
//         name=b;
//     }
//     void display(){
//         cout<<"Name :"<<name<<endl;
//         cout<<"Age :"<<age<<endl;
//     }
//     friend class secretdiary;
// };
// class secretdiary{
//     string diaryentry;
//     public:
//     void writeentry(string a){
//         diaryentry=a;
//     }
//     void showentry(){
//         cout<<"The diary entry is "<<diaryentry<<endl;
//     }
//     void access(person b){
//         cout<<"Accessing private Details "<<endl;
//         cout<<"Name :"<<b.name<<endl;
//         cout<<"Age :"<<b.age<<endl;
//     }
// };
// int main()
// {
//     person per(20,"Hamza");
//     per.display();
//     secretdiary secret;
//     secret.writeentry("You know my name Not my Story....:)");
//     secret.showentry();
//     secret.access(per);
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class result;
// class student{
//     int rollno;
//     string name;
//     int marks[3];
//     public:
//     void input(){
//         cout<<"Enter the Name : ";
//         getline(cin,name);
//         cout<<"Enter the Roll no : ";
//         cin>>rollno;
//         cout<<"Enter the Student Marks : "<<endl;
//         for (int i = 0; i < 3; i++)
//         {
//             cout<<"Subject "<<i+1<<" : ";
//             cin>>marks[i];
//         }
//     }
//     friend class result;
// };
// class result{
//     public:
//     void display(student a){
//         cout<<"Name : "<<a.name<<endl;
//         cout<<"Roll no : "<<a.rollno<<endl;
//         cout<<"Student Marks : "<<endl;
//         for (int i = 0; i < 3; i++)
//         {
//             cout<<"Subject "<<i+1<<" : "<<a.marks[i]<<endl;
//         }
//     }
// };
// int main()
// {
//     student s;
//     s.input();
//     result r;
//     r.display(s);
//     return 0;
// }

// Example of Friend function
// #include<iostream>
// using namespace std;
// class y;
// class x{
//     int data;
//     public:
//     void setdata(int value){
//         data=value;
//     }
//     friend void add(x,y);
// };
// class y{
//     int num;
//     public:
//     void setdata(int value){
//         num=value;
//     }
//     friend void add(x,y);
// };
// void add(x a,y b){
// cout<<"The sum is : "<<a.data+b.num;
// }
// int main()
// {
//     x a;
//     a.setdata(3);
//     y b;
//     b.setdata(4);
//     add(a,b);

//     return 0;
// }

// #include<iostream>
// using namespace std;

// class C2;
// class C1{
//     int value;
//     public:
//     void setdata(int a){
//         this->value=a;
//     }
//     void display(void){
//         cout<<value<<endl;
//     }
//     friend void swap(C1&,C2&);
// };
// class C2{
//     int value2;
//     public:
//     void setdata(int a){
//         this->value2=a;
//     }
//     void display(void){
//         cout<<value2<<endl;
//     }
//     friend void swap(C1&,C2&);
// };
// void swap(C1 &a,C2 &b){
//     int temp;
//     temp =a.value;
//     a.value=b.value2;
//     b.value2=temp;
// }
// int main()
// {
//     C1 x;
//     x.setdata(4);
//     cout<<"The value of x Before swaping is : ";
//     x.display();
//     C2 y;
//     y.setdata(6);
//     cout<<"The value of y Before swaping is : ";
//     y.display();
//     swap(x,y);
//     cout<<"The value of x after swaping is : ";
//     x.display();
//     cout<<"The value of y after swaping is : ";
//     y.display();

//     return 0;
// }

#include <iostream>
using namespace std;
class B;
class A
{
    int a;
    int b;

public:
    A()
    {
        a = 4, b = 6;
    }
    friend void display(A x, B y);
    void hello(B x);
};
class B
{
    int c, d;

public:
B()
    {
        c = 5, d = 9;
    }
    friend void display(A x, B y);
    friend void A::hello(B x);
    
};
void A:: hello(B x)
{
    cout << "Hello world "<<x.c<<x.d << endl;
}
void display(A x, B y)
{
    cout << "The value of A is " << x.a << endl;
    cout << "The value of B is " << x.b << endl;
    cout << "The value of C is " << y.c << endl;
    cout << "The value of D is " << y.d << endl;
}

int main()
{
    A x, y;
    B m, n;
    display(x, n);
    x.hello(m);

    return 0;
}