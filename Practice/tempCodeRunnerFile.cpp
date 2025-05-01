#include <iostream>
using namespace std;

class student
{
    float cgpa;
    int Rollno;
    char grade;

public:
    student() {}
    ~student() {}
    void getdata();

    void showdata();
};
void student::getdata()
{
    cout << "Roll no : ";
    cin >> Rollno;
    cout << "CGPA : ";
    cin >> cgpa;
    cout << "Grade : ";
    cin >> grade;
}
void student::showdata()
{
    cout << "Data :)" << endl;
    cout << "Roll no : " << Rollno << endl;
    cout << "CGPA : " << cgpa << endl;
    cout << "Grade : " << grade << endl;
}
int main()
{
    student s;
    s.getdata();
    s.showdata();
    return 0;
}
