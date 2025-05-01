// Question 1
// #include <iostream>
// using namespace std;

// class student
// {
//     float cgpa;
//     int Rollno;
//     char grade;

// public:
//     student() {}
//     ~student() {}
//     void getdata()
//     {
//         cout << "Roll no : ";
//         cin >> Rollno;
//         cout << "CGPA : ";
//         cin >> cgpa;
//         cout << "Grade : ";
//         cin >> grade;
//     }
//     void showdata()
//     {
//         cout << "Data :)" << endl;
//         cout << "Roll no : " << Rollno << endl;
//         cout << "CGPA : " << cgpa << endl;
//         cout << "Grade : " << grade << endl;
//     }
// };
// int main()
// {
//     student s;
//     s.getdata();
//     s.showdata();
//     return 0;
// }

// Question 2
// #include <iostream>
// using namespace std;

// class student
// {
//     float cgpa;
//     int Rollno;
//     char grade;

// public:
//     student() {}
//     ~student() {}
//     void getdata();

//     void showdata();
// };
// void student::getdata()
// {
//     cout << "Roll no : ";
//     cin >> Rollno;
//     cout << "CGPA : ";
//     cin >> cgpa;
//     cout << "Grade : ";
//     cin >> grade;
// }
// void student::showdata()
// {
//     cout << "Data :)" << endl;
//     cout << "Roll no : " << Rollno << endl;
//     cout << "CGPA : " << cgpa << endl;
//     cout << "Grade : " << grade << endl;
// }
// int main()
// {
//     student s;
//     s.getdata();
//     s.showdata();
//     return 0;
// }

// Question 3
// #include <iostream>
// using namespace std;

// class student
// {
//     float cgpa;
//     int Rollno;
//     char grade;

// public:
//     student() {}
//     ~student() {}
//     void getdata();

//     void showdata();
// };

// void student::getdata()
// {
//     cout << "Roll no : ";
//     cin >> Rollno;
//     cout << "CGPA : ";
//     cin >> cgpa;
//     cout << "Grade : ";
//     cin >> grade;
// }
// void student::showdata()
// {
//     cout << "Data :)" << endl;
//     cout << "Roll no : " << Rollno << endl;
//     cout << "CGPA : " << cgpa << endl;
//     cout << "Grade : " << grade << endl;
// }
// int main()
// {
//     student s[3];

//     for (int i = 0; i < 3; i++)
//     {
//         s[i].getdata();
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         cout<<"Student "<<i+1<<" : "<<endl;
//         s[i].showdata();
//     }
//     return 0;
// }
