// #include <iostream>
// #include <fstream>
// using namespace std;

// const int my_size = 100;
// class person
// {
//     string name;
//     int age;
//     string gender;

// public:
//     person() {}
//     person(string name, string gender, int age)
//     {
//         this->name = name;
//         this->gender = gender;
//         this->age = age;
//     }
//     void setdetails(string name, string gender, int age)
//     {
//         this->name = name;
//         this->gender = gender;
//         this->age = age;
//     }
//     string getname() const
//     {
//         return name;
//     }
//     string getgender() const
//     {
//         return gender;
//     }
//     int getage() const
//     {
//         return age;
//     }
// };
// class patient : protected person
// {
//     string desease;
//     int room;
//     string date;

// public:
//     patient() {}
//     patient(string name, string gender, int age, string desease, int room, string date) : person(name, gender, age)
//     {
//         this->desease = desease;
//         this->room = room;
//         this->date = date;
//     }
//     void setdata(string name, string gender, int age, string desease, int room, string date)
//     {
//         setdetails(name, gender, age);
//         this->desease = desease;
//         this->room = room;
//         this->date = date;
//     }
//     void getdetails() const
//     {
//         cout << "Name : " << getname() << endl;
//         cout << "Age : " << getage() << endl;
//         cout << "Gender : " << getgender() << endl;
//         cout << "Desease : " << desease << endl;
//         cout << "Room no : " << room << endl;
//         cout << "Admission Date : " << date << endl;
//     }
//     void savetofile(){
//         ofstream onfile("patient.txt",ios::app);
//         onfile<<getname()<<","<<getage() <<","<<getgender() <<","<<desease<<","<<room<<","<<date<<endl;
//         onfile.close();
//     }
// };
// class docter : protected person
// {
//     string spcialization;
//     int salary;
//     string shifttime;

// public:
//     docter() {}
//     docter(string name, string gender, int age, string specialization, int salary, string shift) : person(name, gender, age)
//     {
//         this->spcialization = specialization;
//         this->salary = salary;
//         this->shifttime = shift;
//     }
//     void setdata(string name, string gender, int age, string specialization, int salary, string shift)
//     {
//         setdetails(name, gender, age);
//         this->spcialization = specialization;
//         this->salary = salary;
//         this->shifttime = shift;
//     }
//     void getdetails() const
//     {

//         cout << "Name : " << getname() << endl;
//         cout << "Age : " << getage() << endl;
//         cout << "Gender : " << getgender() << endl;
//         cout << "Specialization : " << spcialization << endl;
//         cout << "Salary : " << salary << endl;
//         cout << "Shift time : " << shifttime << endl;
//     }
//     void savetofile(){
//         ofstream onfile("docter.txt",ios::app);
//         onfile<<getname()<<","<<getage()<<","<<getgender() <<","<<spcialization<<","<<salary<<","<<shifttime<<endl;
//         onfile.close();
//     }
// };
// class staff : protected person
// {
//     string depart;
//     string role;

// public:
//     staff() {}
//     staff(string name, string gender, int age, string depart, string role) : person(name, gender, age)
//     {
//         this->depart = depart;
//         this->role = role;
//     }
//     void setdata(string name, string gender, int age, string depart, string role)
//     {
//         setdetails(name, gender, age);
//         this->depart = depart;
//         this->role = role;
//     }
//     void getdetails() const
//     {

//         cout << "Name : " << getname() << endl;
//         cout << "Age : " << getage() << endl;
//         cout << "Gender : " << getgender() << endl;
//         cout << "Role : " << role << endl;
//         cout << "Department : " << depart << endl;
//     }
//     void savetofile(){
//         ofstream onfile("staff.txt",ios::app);
//         onfile<<getname()<<","<<getage()<<","<<getgender()<<","<<role<<","<<depart<<endl;
//         onfile.close();
//     }
// };

// int main()
// {
//     docter d[my_size];
//     patient p[my_size];
//     staff s[my_size];
//     int n;
//     int pcount = 0, dcount = 0, scount = 0;
//     do
//     {
//         cout << "1.Add Docter\n2.Add Staff\n3.Add Patient\n4.Display All Docters\n5.Display All Patient\n6.Display All Staff\n7.Exit\n";
//         cin >> n;
//         switch (n)
//         {
//         case 1:
//             if (dcount < my_size && dcount >= 0)
//             {
//                 string name, gender, specialization, shift;
//                 int age, salary;
//                 cin.ignore();
//                 cout << "Enter Name : ";
//                 getline(cin, name);
//                 cout << "Enter Gender : ";
//                 getline(cin, gender);
//                 cout << "Enter Specialization : ";
//                 getline(cin, specialization);
//                 cout << "Enter Shift : ";
//                 getline(cin, shift);
//                 cout << "Enter Age : ";
//                 cin >> age;
//                 cout << "Enter Salary : ";
//                 cin >> salary;
//                 d[dcount] = docter(name, gender, age, specialization, salary, shift);
//                 d[dcount].savetofile();
//                 dcount++;
//                 cout<<"Docter added and saved successfully"<<endl;
//             }
//             else
//             {
//                 cout << "Database is full" << endl;
//             }
//             break;
//             case 2:
//             if (scount < my_size && scount >= 0)
//             {
//                 string name, gender, depart, role;
//                 int age;
//                 cin.ignore();
//                 cout << "Enter Name : ";
//                 getline(cin, name);
//                 cout << "Enter Gender : ";
//                 getline(cin, gender);
//                 cout << "Enter Department : ";
//                 getline(cin, depart);
//                 cout << "Enter Role : ";
//                 getline(cin, role);
//                 cout << "Enter Age : ";
//                 cin >> age;
//                 s[scount] = staff(name, gender, age, depart, role);
//                 s[scount].savetofile();
//                 scount++;
//                 cout<<"Staff added and saved successfully"<<endl;
//             }
//             else
//             {
//                 cout << "Database is full" << endl;
//             }
//             break;
//             case 3:
//             if (pcount < my_size && pcount >= 0)
//             {
//                 string name, gender, desease, date;
//                 int age, room;
//                 cin.ignore();
//                 cout << "Enter Name : ";
//                 getline(cin, name);
//                 cout << "Enter Gender : ";
//                 getline(cin, gender);
//                 cout << "Enter Desease : ";
//                 getline(cin, desease);
//                 cout << "Enter Admission date : ";
//                 getline(cin, date);
//                 cout << "Enter Age : ";
//                 cin >> age;
//                 cout << "Enter room no : ";
//                 cin >> room;
//                 p[pcount] = patient(name, gender, age, desease, room, date);
//                 p[pcount].savetofile();
//                 pcount++;
//                 cout<<"Patient added and saved successfully"<<endl;
//             }
//             else
//             {
//                 cout << "Database is full" << endl;
//             }
//             break;
//         case 4:
//             for (int i = 0; i < dcount; i++)
//             {
//                 cout << "Docter " << i + 1 << " :)" << endl;
//                 d[i].getdetails();
//                 cout<<endl;
//             }
//             break;
//             case 5:
//             for (int i = 0; i < pcount; i++)
//             {
//                 cout << "Patient " << i + 1 << " :)" << endl;
//                 p[i].getdetails();
//                 cout<<endl;
//             }
//             break;
//             case 6:
//             for (int i = 0; i < scount; i++)
//             {
//                 cout << "Staff Member " << i + 1 << " :)" << endl;
//                 s[i].getdetails();
//                 cout<<endl;
//             }
//             break;
//         case 7:
//             exit(1);
//             break;
//         default:
//             cout << "Invalid input... Try Again" << endl;
//             break;
//         }

//     } while (true);
//     return 0;
// }




#include<iostream>
using namespace std;

class counter{
    static int n;
    public:
    counter(){
        n++;
    }
    void show(){
        cout<<"No of OBJ are "<<n<<endl;
    }
};
int counter::n=0;
int main()
{
    counter c,v,b;
    c.show();
    return 0;
}