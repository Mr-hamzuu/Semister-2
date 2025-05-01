// #include<iostream>
// using namespace std;

// class complex{
//     double a;
//     double b;
//     public:
//     complex(){
//         a=0;
//         b=0;
//     };
//     complex(double x,double y){
//         a=x;
//         b=y;
//     };
//     void adding(complex x,complex y){
//         a=x.a+y.a;
//         b=x.b+y.b;
//     }
//     void subtract(complex x,complex y){
//         a=x.a-y.a;
//         b=x.b-y.b;
//     }
//     void display(){
//         cout<<"Complex values are "<<a<<" + "<<b<<"i"<<endl;
//     }

// };
// int main()
// {
//     complex value1(3,5);
//     complex value2(6,2);
//     value1.display();
//     value2.display();

//     complex value;
//     value.adding(value1,value2);
//     value.display();

//     value.subtract(value1,value2);
//     value.display();

//     return 0;
// }

// Toll Plaza car passing
//  #include <iostream>
//  #include <conio.h>
//  using namespace std;

// class toll
// {
//     unsigned int car;
//     double balance;

// public:
//     toll() : car(0), balance(0) {};
//     void payingcar()
//     {
//         car++;
//         balance += 0.5;
//     }
//     void notpaying()
//     {
//         car++;
//     }
//     void display() const
//     {
//         cout << "The Total car passed :" << car << endl;
//         cout << "The Total Balance are :" << balance << endl;
//     }
// };
// int main()
// {
//     toll a;
//     cout << "1.Paying car \n2.Not paying car\n3.Display" << endl;
//     char key;
//     while (true)
//     {
//         key = _getch();

//         if (key == 27)
//         {
//             break;
//         }

//         else if (key == 'N' || key == 'n')
//         {
//             a.notpaying();
//             cout << "Not Paying car added" << endl;
//         }

//         else if (key == 'P' || key == 'p')
//         {
//             a.payingcar();
//             cout << "Paying car added" << endl;
//         }
//     }
// cout<<"\nFinal report : "<<endl;
// a.display();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Time
// {
//     int hours;
//     int min;
//     int sec;

// public:
//     Time() : hours(0), min(0), sec(0) {};
//     Time(int hours, int min, int sec)
//     {
//         this->hours = hours;
//         this->min = min;
//         this->sec = sec;
//     }
//     void display() const
//     {
//         cout << hours << ":" << min << ":" << sec << endl;
//     }
//     void add(Time x, Time y)
//     {

//         hours = x.hours + y.hours;
//         min = x.min + y.min;
//         sec = x.sec + y.sec;
//     }
// };
// int main()
// {
//    const Time t1(3, 44, 55);
//     t1.display();
//     const Time t2(2, 22, 33);
//     t2.display();
//     Time t;
//     t.add(t1, t2);
//     t.display();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class student
// {
//     string name;
//     int rollno;
//     float marks[3];

// public:
//     float avg;
//     student() {}
//     student(string name, int roll, float marks[])
//     {
//         avg = 0;
//         this->name = name;
//         this->rollno = roll;
//         for (int i = 0; i < 3; i++)
//         {
//             this->marks[i] = marks[i];
//         }
//     }
//     void calculate()
//     {
//         for (int i = 0; i < 3; i++)
//         {
//             avg += marks[i];
//         }
//         avg /= 3;
//     }
//     void grade();
//     void display();
// };
// void student::grade()
// {
//     if (avg >= 90)
//     {
//         cout << "Grade : A" << endl;
//     }
//     else if (avg >= 60 && avg < 90)
//     {
//         cout << "Grade : B" << endl;
//     }
//     else if (avg >= 50 && avg < 60)
//     {
//         cout << "Grade : C" << endl;
//     }
//     else
//     {
//         cout << "Fail" << endl;
//     }
// }
// void student::display()
// {
//     cout << "Name : " << name << endl;
//     cout << "Roll no : " << rollno << endl;
//     cout << "Marks : " << endl;
//     for (int i = 0; i < 3; i++)
//     {
//         cout << "Subject " << i + 1 << " : " << marks[i] << endl;
//     }
//     grade();
//     cout << "The Avg marks are " << avg << endl;
// }
// int main()
// {
//     string n = "HAmza";
//     float num[] = {77, 28, 65};
//     student s(n, 34, num);
//     s.calculate();
//     s.display();

//     return 0;
// }

// #include <iostream>
// #include <fstream>
// using namespace std;

// class library
// {
//     string title;
//     bool availability;
//     string auther;
//     int price;

// public:
//     library() {}
//     library(string title, string auther, int price)
//     {
//         this->title = title;
//         this->auther = auther;
//         availability = true;
//         this->price = price;
//     }
//     void issuebook()
//     {
//         if (availability)
//         {
//             cout << "The book is successfully issued " << endl;
//             availability = false;
//         }
//         else
//         {
//             cout << "Not available";
//         }
//     }
//     void returnbook()
//     {
//         cout << "The Book is successfully returned" << endl;
//         availability = true;
//     }
//     void display() const
//     {
//         cout << "Title : " << title << endl;
//         cout << "Auther : " << auther << endl;
//         if (availability)
//         {
//             cout << "Availaible : Yes" << endl;
//         }
//         else
//         {
//             cout << "Availaible : No" << endl;
//         }
//     }
//     void store() const
//     {
//         ofstream onfile;
//         onfile.open("data.txt",ios::app);
//         if (!onfile)
//         {
//             cout << "Error" << endl;
//         }
//         else
//         {
//             onfile << title << ":" << auther << ":";

//             if (availability)
//             {
//                 onfile << "Yes:";
//             }
//             else
//             {
//                 onfile << "No:";
//             }
//             onfile << price << endl<<endl;
//         }
//         onfile.close();
//     }
//     void read() const
//     {
//         ifstream infile;
//         infile.open("data.txt");
//         if (!infile)
//         {
//             cout << "Error" << endl;
//         }
//         else
//         {
//             string t;
//             string a;
//             int v;
//             while (getline(infile, t) && getline(infile, a) )
//             {

//                 cout << t << a  << endl;
//             }
//         }
//     }
// };
// int main()
// {
//     const library books1("The army", "David", 300);
//     books1.store();
//     books1.read();

//    const library books2("The fouj", "hamza", 500);
//     books2.store();
//     books2.read();

//    const library books3("The dan", "abbas", 200);
//     books3.store();
//     books3.read();

//     return 0;
// }

#include <iostream>
#include <fstream>
using namespace std;

class Data
{
    int id, age;
    string name, depart;
    float gpa;

public:
    void addstudent()
    {
        ofstream onfile;
        onfile.open("Details.txt", ios::app);
        cout << "Id : ";
        cin >> id;
        cout << "Name : ";
        cin.ignore();
        getline(cin, name);
        cout << "Department : ";
        getline(cin, depart);
        cout << "Gpa : ";
        cin >> gpa;
        onfile << id << "|" << name << "|" << depart << "|" << gpa << endl;
        onfile.close();
    }
    void Display() const
    {
        ifstream infile;
        int i;
        float g;
        string n, d;

        infile.open("Details.txt");
        while (infile >> i)
        {
            infile.ignore();
            getline(infile, n, '|');
            getline(infile, d, '|');
            infile >> g;
            infile.ignore();
            cout << "ID : " << i << " | " << "Name : " << n << " | " << "Department : " << d << " | " << "GPA : " << g << endl;
        }
        infile.close();
    }
    void search(int id)
    {
        if (this->id == id)
        {
            cout << "Id : " << this->id << endl;
            cout << "Name : " << name << endl;
            cout << "Department : " << depart << endl;
            cout << "Gpa" << gpa << endl;
        }
    }
    void update(int searchID)
    {
        ifstream infile("Details.txt"); 
        ofstream newfile("student.txt"); 

        if (!infile || !newfile)
        {
            cout << "Error in file opening" << endl;
            return;
        }

        int fileID;
        string fileName, fileDept;
        float fileGPA;
        bool found = false;

        while (infile >> fileID)
        {
            infile.ignore();
            getline(infile, fileName, '|');
            getline(infile, fileDept, '|');
            infile >> fileGPA;
            infile.ignore();

            if (fileID == searchID)
            {
                found = true;
                cout << "Enter new details for ID " << searchID << endl;
                cout << "New Name: ";
                cin.ignore(); 
                getline(cin, fileName);
                cout << "New Department: ";
                getline(cin, fileDept);
                cout << "New GPA: ";
                cin >> fileGPA;
            }

            newfile << fileID << "|" << fileName << "|" << fileDept << "|" << fileGPA << endl;
        }

        infile.close();
        newfile.close();

        remove("Details.txt");
        rename("student.txt", "Details.txt");

        if (found)
            cout << "Record successfully updated!" << endl;
        else
            cout << "Student not found!" << endl;
    }

    void Delete(string id)
    {
        ofstream newfile;
        newfile.open("student.txt");
        ifstream infile("Details.txt");
        string i, n, d, g;
        bool found = false;
        if (!newfile || !infile)
        {
            cout << "Error in file opening" << endl;
        }
        else
        {
            while (getline(infile, i, '|') && getline(infile, n, '|') && getline(infile, d, '|') && getline(infile, g, '|'))
            {
                if (id != i)
                {
                    newfile << i << " | " << n << " | " << d << " | " << g << endl;
                }
                else
                {
                    found = true;
                }
            }
        }
        infile.close();
        newfile.close();
        remove("Details.txt");
        rename("student.txt", "Details.txt");
        if (found)
        {
            cout << "Record is sucessfully deleted" << endl;
        }
        else
        {
            cout << "Student is not found\n";
        }
    }
};
class student
{
    Data s[50];
    int count;

public:
    student()
    {
        count = 0;
    }

    void add()
    {
        if (count >= 50)
        {
            cout << "Database is Full" << endl;
        }
        else
        {
            s[count].addstudent();
            count++;
        }
    }
    void show()
    {
        s[0].Display();
    }
    void search()
    {
        int id;
        cout << "Enter id : ";
        cin >> id;
        for (int i = 0; i < count; i++)
        {
            s[i].search(id);
        }
    }
    void update()
    {
        int id;
        cout << "Enter student id you want to update the data : ";
        cin >> id;
        s[0].update(id);
    }
    void Delete()
    {
        string id;
        cout << "Enter id : ";
        cin >> id;
        for (int i = 0; i < count; i++)
        {
            s[i].Delete(id);
        }
    }
};
int main()
{
    student s;
    int choice;
    while (true)
    {
        cout << "1.Add student\n2.Display\n3.Search\n4.Update\n5.Delete\n6.Exit\nEnter your choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            s.add();
            break;
        case 2:
            s.show();
            break;
        case 3:
            s.search();
            break;
        case 4:
            s.update();
            break;
        case 5:
            s.Delete();
            break;
        case 6:
            exit(1);
            break;

        default:
            break;
        }
    }

    return 0;
}