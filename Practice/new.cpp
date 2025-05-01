// #include<iostream>
// using namespace std;

// class person{
//     string name;
//     int age;
//     public:
//     person(){}
//     person(string name,int age){
//         this->name=name;
//         this->age=age;
//     }
//     void print() {
//         cout<<"Name : "<<name<<endl;
//         cout<<"Age : "<<age<<endl;
//     }
// };
// class patient:public person{
//     string desease;
//     string Medicine;
//     public:
//     patient(){}
//     patient(string name,int age,string d,string m):person(name,age){
//         this->desease=d;
//         this->Medicine=m;
//     }
//     void print(){
//         person::print();
//         cout<<"Desease : "<<desease<<endl;
//         cout<<"Medicine : "<<Medicine<<endl;
//     }
// };
// class Medicarepatient:public patient{
//     string Hospitaln;
//     string wardn;
//     int room_no;
//     public:
//     Medicarepatient(){}
//     Medicarepatient(string name,int age,string d,string m,string h,string w,int n):patient(name,age,d,m){
//         Hospitaln=h;
//         wardn=w;
//         room_no=n;
//     }
//     void print(){
//         patient::print();
//         cout<<"Hospital name : "<<Hospitaln<<endl;
//         cout<<"Ward name : "<<wardn<<endl;
//         cout<<"Room no : "<<room_no<<endl;
//     }
// };
// int main()
// {
//  Medicarepatient m("hamza",20,"corona","panadol","CMH","IT",23);
//  m.print();
//     return 0;
// }

    #include <iostream>
    using namespace std;

    class person
    {
        string name;
        string cnic;
        string address;
        double phone;

    public:
        person(string name = "", string cnic = "", string address = "", double phone)
        {
            this->name = name;
            this->cnic = cnic;
            this->address = address;
            this->phone = phone;
        }
        void setdata(string name = "", string cnic = "", string address = "", double phone)
        {
            this->name = name;
            this->cnic = cnic;
            this->address = address;
            this->phone = phone;
        }
        void display() const
        {
            cout << "Name : " << name << endl;
            cout << "Address : " << address << endl;
            cout << "Phone : " << phone << endl;
            cout << "CNIC : " << cnic << endl;
        }
    };
    class student : public person
    {
        int id;
        string degree;
        string cgpa;

    public:
        student(string name = "", string cnic = "", string address = "", double phone = 0, int id = 0, string d = "", string c = "") : person(name, cnic, address, phone)
        {
            this->id = id;
            this->degree = d;
            this->cgpa = c;
        }
        void setdata(string name = "", string cnic = "", string address = "", double phone = 0, int id = 0, string d = "", string c = "")
        {
            person::setdata(name, cnic, address, phone);
            this->id = id;
            this->degree = d;
            this->cgpa = c;
        }
        void display() const
        {
            cout << "Id : " << id << endl;
            cout << "Degree : " << degree << endl;
            cout << "CGPA : " << cgpa << endl;
        }
        friend void compare(student,student);
    };


    class faculty : public person
    {
        int id;
        string designation;
        string depart;

    public:
        faculty(string name = "", string cnic = "", string address = "", double phone = 0, int id = 0, string d = "", string depart = "") : person(name, cnic, address, phone)
        {
            this->id = id;
            this->designation = d;
            this->depart = depart;
        }
        void setdata(string name = "", string cnic = "", string address = "", double phone = 0, int id = 0, string d = "", string depart = "")
        {
            person::setdata(name, cnic, address, phone);
            this->id = id;
            this->designation = d;
            this->depart = depart;
        }
        void display() const
        {
            cout << "Id : " << id << endl;
            cout << "Designation : " << designation << endl;
            cout << "Department : " << depart << endl;
        }
    };
    class Admin : public person
    {
        int id;
        string role;
        int workinghours;

    public:
        Admin(string name = "", string cnic = "", string address = "", double phone = 0, int id = 0, string role = "", int hours = 0) : person(name, cnic, address, phone)
        {
            this->id = id;
            this->role = role;
            this->workinghours = hours;
        }
        void setdata(string name = "", string cnic = "", string address = "", double phone = 0, int id = 0, string role = "", int hours = 0)
        {
            person::setdata(name, cnic, address, phone);
            this->id = id;
            this->role = role;
            this->workinghours = hours;
        }
        void display() const
        {
            cout << "Id : " << id << endl;
            cout << "Working hours : " << workinghours << endl;
            cout << "Role : " << role << endl;
        }
    };
    class assistant : public student,public faculty
    {
        int id;
        string role;
        int workinghours;

    public:
     
    };
    void compare(student s1 ,student s2){
        
    }


    int main()
    {

        return 0;
    }