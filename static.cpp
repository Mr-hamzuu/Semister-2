//Static variable or member
// We use static variable for updating the class values not by 1 object it is updated by any object , It is share by all object
//counter is the static data member of class student
// #include<iostream>
// using namespace std;

// class student{
//     int id;
//     string name;
//     static int counter; //it is by default zero
//     public:
//     void setdata();
//     void getdata();
//     static void getcount(void);
// };

// int student::counter=1;//Static variable :we can update static variable value here

// void student::setdata(){
//     cout<<"Enter the name of student ";
//     cin>>name;
//     cout<<"Enter the id of student ";
//     cin>>id;
// }
// void student::getdata(){
//     cout<<"Name: "<<name<<endl;
//     cout<<"Id  "<<" : "<<id<<endl;
//     counter++;
// }

// // Static function :we use static function for accessing only static variables/data member
// void student::getcount(void){
//     cout<<"student "<<counter<<endl;
// }
// int main()
// {
//     student x,y,z; //These are the variable that share the static variable
//     x.getcount();
//     x.setdata();
//     x.getdata();
    
//     x.getcount();
//     y.setdata();
//     y.getdata();
    
//     x.getcount();
//     z.setdata();
//     z.getdata();

//     return 0;
// }

#include<iostream>
using namespace std;

class student{
    static int count;
    public:
    student(){
        cout<<"I am student "<<count<<endl;
        count++;    
    }
    static int cube(int x){
        return x*x*x;
    }
};
int student::count=1;
int main()
{
    student s1,s2;
    int n;
    // using an object we can access the cube func()
    n=s1.cube(4);
    // without creating an object we can access the cube func()
    n=student::cube(4);
    cout<<n;
    return 0;
}