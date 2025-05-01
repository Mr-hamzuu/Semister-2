// ***************************************Constructer *******************************
// 1.Contructer is special member function with same name as of class.
// 2.It is use to inialize  the object of its class.
// 3.IT is automaticaly invoked(call or execute) whenever an object is created
// 4.IT cannot have return value or return type
// 5.We cannot refer to their address
// There are three concept of constructer
// 1.Non-parametarized
// 2.Parametarized
// 3.Copy
// #include <iostream>
// using namespace std;

// class teacher
// {
// private:
//     int salary;

// public:
//     string name;
//     string subject;

//     // 1.Non-parametarized
//     //  teacher(){
//     //      name="hamza";
//     //      subject="PF";
//     //      salary=30000;
//     //      cout<<"Name :"<<name<<endl;
//     //      cout<<"Subject :"<<subject<<endl;
//     //      cout<<"Salary :"<<salary<<endl;
//     //  }

//     // 2.Parametarized
//     teacher(string name, string subject, int salary)
//     {
//         // For accessing the properties of object we use this pointer(this->) .it is a special pointer that point to the current object
//         this->name = name;
//         this->subject = subject;
//         this->salary = salary;
//     }

//     void getinfo()
//     {
//         cout << "Name :" << name << endl;
//         cout << "Subject :" << subject << endl;
//         cout << "Salary :" << salary << endl;
//     }

//     // 3.Copy Constructer
        // if we dont create a copy constructer then the compiler use its copy constructer
//     teacher(teacher &obj){
//         cout<<"I am a custom constructer"<<endl;
//         this->name=obj.name;
//         this->subject=obj.subject;
//         this->salary=obj.salary;
//     }
// };
// int main()
// {
//     // 1. by default it call constructer
//     // teacher t1;
//     // 2.Parametarized
//     //---> implicit Call:
//     teacher t("Saqib", "pf", 30000);
//     t.getinfo();
//     //--->Explicit call:
//     teacher f=teacher("Kashif", "OOP", 400000);
//     f.getinfo();

//     // teacher t2(f);
//     // t2.getinfo();
//     return 0;
// }

// // Practice***************************************************************************************
// #include<iostream>
// using namespace std;

// class bank{
//     private:
//     double balance;
//     public:
//     string name;
//     string number;
//     bank(string name,string number,double balance){
//         this->name=name;
//         this->number=number;
//         this->balance=balance;
//     }
//     void deposit(double amount){
//         balance+=amount;
//         display();
//     }
//     void widraw(double amount){
//         if (balance>=0 && amount<=balance)
//         {
//             balance-=amount;
//         }
//         else{
//             cout<<"insufficiant balance"<<endl;
//         }
//         display();
//     }
//     void display(){
//         cout<<"The balance is "<<balance<<endl;
//     }
//     void detail(){
//         cout<<"Name :"<<name<<endl;
//         cout<<"Account number :"<<number<<endl;
//         cout<<"Balance :"<<balance<<endl;
//     }
// };
// int main()
// {
//     bank b("Hamza","3456534",50000);
//     b.deposit(2000);
//     b.widraw(3000);
//     b.detail();
//     return 0;
// }

// practice*********************************************************************
// #include<iostream>
// using namespace std;

// class c1{
//     int a=4;
//     int b=7;
//     public:
//     c1();
// };
// c1 ::c1(){
//     cout<<"The sum is "<<a+b;
// }
// int main()
// {
//     c1 c1;
//     return 0;
// }

// *******************************************************************************
// #include<iostream>
// #include<math.h>
// using namespace std;

// class point{
//     float x,y;
//     public:
//     point(int a,int b){
//         x=a;
//         y=b;
//     }
//     void display(){
//         cout<<"x = "<<x<<" , y = "<<y<<endl;
//     }
//     friend int distance(point ,point);
// };
// int distance(point x,point y){
//     float z=sqrt(pow(y.x-x.x,2)+pow(y.y-x.y,2));
//     return z;
// }
// int main()
// {
//     point x(6,3);
//     x.display();
//     point y(5,1);
//     y.display();
//     float z;
//     z=distance(x,y);
// cout<<"The distance between 2 Points are : "<<z;
//     return 0;
// }

// *********************************************************************************************************
// #include <iostream>
// using namespace std;

// class library
// {
//     int id;
//     string title;
//     string auther;
//     int price;
//     bool available;

// public:
//     library()
//     {
//         this->id = 0;
//         this->title = "";
//         this->auther = "";
//         this->price = 0;
//         this->available = false;
//     };
//     void addbook(int id, string title, string auther, int price, int available)
//     {
//         this->id = id;
//         this->title = title;
//         this->auther = auther;
//         this->price = price;
//         if (available == 1)
//         {
//             this->available = true;
//         }
//     }
//     friend void search(library x[], int size, int id);
// };
// void search(library x[], int size, int id)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (x[i].id == id)
//         {
//             cout << "ID : " << x[i].id<<endl;
//             cout << "Title : " << x[i].title<<endl;
//             cout << "Auther : " << x[i].auther<<endl;
//             cout << "Price : " << x[i].price<<endl;
//             cout << "Avalaibilty : " << x[i].available<<endl;
//         }
//     }
// }
// int main()
// {
//     int size, id, price;
//     string title, auther;
//     int available;
//     cout << "Enter the Number of books You want to store in library:";
//     cin >> size;
//     library books[size];

//     int n;
//     while (true)
//     {
//         cout << "1.Add books" << endl;
//         cout << "2.Search" << endl;
//         cout << "3.Exit" << endl;
//         cin >> n;
//         switch (n)
//         {
//         case 1:
//             for (int i = 0; i < size; i++)
//             {
//                 cout << "Book "<< i+1<<" :" << endl;
//                 cout << "ID :";
//                 cin >> id;
//                 cout << "Title :";
//                 cin.ignore();
//                 getline(cin, title);
//                 cout << "Auther :";
//                 getline(cin, auther);
//                 cout << "Price :";
//                 cin >> price;
//                 cout << "Available (0/1) :";
//                 cin >> available;
//                 books[i].addbook(id, title, auther, price, available);
//                 cout<<"Data sucessfully saved"<<endl;
//             }
//             break;
//         case 2:
//             cout << "Enter the Bookid you want to search :";
//             int l;
//             cin >> l;
//             search(books, size, l);
//             break;
//         case 3:
//             exit(1);
//         default:
//             break;
//         }

//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class C
// {
//     int data;

// public:
//     C()
//     {
//         data = 0;
//     };
//     C(int num, int n)
//     {
//         data = num * n;
//     }

//     // Copy constructer
//     // C(C &num){
//     //     cout<<"hello world"<<endl;
//     //     data=num.data;
//     // }
//     void display()
//     {
//         cout << "The value is " << data << endl;
//     }
// };
// int main()
// {
//     C v(4, 2), d, x;
//     v.display();
//     d.display();
//     x.display();
//     C c(v);//using copy constructer
//     c.display();

//     x = v;
//     x.display();

//     return 0;
// }

// Constructer to Constructer
// #include<iostream>
// using namespace std;

// class constr{
//     int i;
//     public:
//     constr():constr(5){
//         cout<<"I am constructer 1"<<endl;
//     }
//     constr(int n){
//         i=n;
//         cout<<"I am constructer 2"<<endl;
//     }
    
// };
// int main()
// {
//     constr n;
    
//     return 0;
// }


// #include<iostream>
// using namespace std;

// class v{
//     int n;
//     int s;
//     public:
//     static int b;
//     v(int d=5,int c=8){
//         n=d;
//         s=c;
//         cout<<"N = "<<n<<" S = "<<s<<endl;
//     }
//     static void display(){
//         cout<<b<<endl;
//     }
// };
// int v::b;
// int main()
// {
//     v c(3);
//     c.display();
//     return 0;
// }

#include<iostream>
using namespace std;
class parent{
    public:
    int x=45;
    parent(){
        cout<<"Parent no argument constructer"<<endl;
    }
    parent(int x){
        cout<<"Parent 1 argument constructer"<<endl;
        
    }
};
class child:public parent
{
    public:
    child(){
        cout<<"child no argument constructer"<<endl;
        cout<<x;
    }
    child(int y){
        cout<<"child 1 argument constructer"<<endl;
    }
};
int main()
{
    // child n(3);
    parent n(5);
    n.x;
    child c;
   
    return 0;
}