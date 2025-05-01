
// Object Oriented Programming
// There are 4 Concept of OOP
// 1.Encapsulation
// 2.Abstraction
// 3.Inheritance
// 4.Polymorphism

// #include<iostream>
// using namespace std;

// class student{ // The class
//     private:   // Access specifier
//     int marks,rollno; // Attribute (int variable)
//     public:   // Access specifier
//     string name; // Attribute (string variable)

//     void setdata(int student_marks,int student_rollno);   // Method/function declaration

//     void print(){  // Method/function defined inside the class
//         cout<<"Student Data: "<<endl;
//         cout<<"Name : "<<name<<endl;
//         cout<<"Roll no:"<<rollno<<endl;
//         cout<<"Marks : "<<marks<<endl;
//     }
// };

// Method/function definition outside the class
// void student::setdata(int student_marks,int student_rollno ){
//     marks=student_marks;
//     rollno=student_rollno;
// }

// int main()
// {
//     student h;   // Create an object of MyClass
//     Access attributes and set values
//     h.name="Hamza";
//     h.setdata(23,2); // Call the method with an argument
//     h.print(); // Call the method

//     return 0;
// }

// Practice
// #include <iostream>
// using namespace std;

// class prime
// {
// private:
//     int number; // By default it is private

// public:
//     void table();
//     void check()
//     {
//         if (number % 2 == 0)
//         {
//             cout << "The number is Even";
//         }
//         else
//         {
//             cout << "The number is ODD";
//         }
//     }
// };
// void prime::table()
// {
//     cout << "Enter a number : ";
//     cin >> number;
//     for (int i = 1; i < 11; i++)
//     {
//         cout << number << "*" << i << "=" << number * i << endl;
//     }
//     check();
// }
// int main()
// {

//     prime a;

//     a.table();
//     return 0;
// }


#include<iostream>
#include<fstream>
using namespace std;

class annualfunction{
    int id;
    string name;
    int fees;
    public:
    annualfunction(){
        id=0;
        name="";
        fees=0;
    }
    void setdata(){
        cout<<"Enter id:";
        cin>>id;
        cout<<"Name:";
        cin.ignore();
        getline(cin,name);
        cout<<"Fees:";
        cin>>fees;
    }
    void save(){
        ofstream onfile;
        onfile.open("data.txt",ios::app);
        onfile<<id<<"\t"<<name<<"\t"<<fees<<endl;
        onfile.close();
    }
    
};
void display(){
    ifstream infile;
    infile.open("data.txt");
    int i,f;
    string n;
    while (infile>>i>>n>>f)
    {
        cout<<i<<"\t"<<n<<"\t"<<f<<endl;
    }
    
}

int main()
{
annualfunction n[3];
for (int i = 0; i < 3; i++)
{
    n[i].setdata();
    n[i].save();
}
display();

    return 0;
}