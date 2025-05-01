// #include <iostream>
// using namespace std;

// class employee
// {
//     string name[5];
//     string depart[5];
//     int counter1;
  

// public:
//     void count(void)
//     {
//         counter1 = 0;
//     }
//     void setdata();
//     void getdata();
// };

// void employee::setdata()
// {
//     cout << "Enter the name of employee :";
//     cin >> name[counter1];
//     cout << "Enter the depart of employee :";
//     cin >> depart[counter1];
//     counter1++;
// }
// void employee::getdata(){
//     for (int i = 0; i < counter1; i++)
//     {
//         cout<<"Employee "<<i+1<<" : "<<endl;
//         cout<<"Name : "<<name[i]<<endl;
//         cout<<"Department : "<<depart[i]<<endl;
//     }
// }
// int main()
// {
// employee e;
// e.setdata();
// e.setdata();
// e.getdata();
//     return 0;
// }



//Static variable or member
// We use static variable for updating the class values not by 1 object it is updated by any object , It is share by all object
//counter is the static data member of class student
#include<iostream>
using namespace std;

class student{
    int id;
    string name;
    static int counter; //it is by default zero
    public:
    void setdata();
    void getdata();
    static void getcount(void);
};

int student::counter=1;//Static variable :we can update static variable value here

void student::setdata(){
    cout<<"Enter the name of student ";
    cin>>name;
    cout<<"Enter the id of student ";
    cin>>id;
}
void student::getdata(){
    cout<<"Name: "<<name<<endl;
    cout<<"Id  "<<" : "<<id<<endl;
    counter++;
}

// Static function :we use static function for accessing only static variables/data member
void student::getcount(void){
    cout<<"student "<<counter<<endl;
}
int main()
{
    student x,y,z; //These are the variable that share the static variable
    x.getcount();
    x.setdata();
    x.getdata();
    
    x.getcount();
    y.setdata();
    y.getdata();
    
    x.getcount();
    z.setdata();
    z.getdata();

    return 0;
}