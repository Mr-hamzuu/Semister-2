// #include <iostream>
// using namespace std;

// class car
// {

//     public:
//     string brand;
//     string model;
//     int year;
//     void displayinfo()
//     {
//         cout << "Brand :" <<brand<<endl;
//         cout << "model :" <<model<<endl;
//         cout << "year :" <<year<<endl;
//     }
// };
// int main()
// {car c;
//     c.brand="Toyota";
//     c.model="bugatti";
//     c.year=2008;
//     c.displayinfo();

//     return 0;
// }

// Balance transfer
// #include <iostream>
// using namespace std;
// class Bank
// {
// private:
//     int number;
//     float balance;

// public:
//     friend void transfer(Bank &from, Bank &to, float amount);
//     Bank(int num, int balance)
//     {
//         this->number = num;
//         this->balance = balance;
//     }
//     void display()
//     {
//         cout << "Account number : " << number << endl;
//         cout << "Balance : " << balance << endl;
//     }
//     friend void check(Bank account);
// };
//     void transfer(Bank &from, Bank &to, float amount)
//     {
//         from.balance -= amount;
//         to.balance += amount;
//         cout << "The amount is sucessfully transfered" << endl;
//     }
//     void check(Bank account)
//     {
//         cout << "Account number : " << account.number << endl;
//         cout << "Balance :" << account.balance << endl;
//     }
//     int main()
//     {
//         Bank from(2345565, 10000), to(456556, 2000);
//         transfer(from, to, 2000);
//         check(to);

//         return 0;
//     }

// #include<iostream>
// using namespace std;

// class INT{
//     int n;
//     public:
//     INT(){
//         n=0;
//     }
//     INT(int v){
//         n=v;
//     }
//     void display(){
//         cout<<"Value is :"<<n<<endl;
//     }
//     INT add(INT other){
//         return INT(n+other.n);
//     }

// };
// int main()
// {
//     INT n(10);
//     INT c(20);
//     INT v=n.add(c);
//     v.display();

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Book
// {
//     int id;
//     string title;
//     string auther;

// public:
//     Book()
//     {
//         id = 0;
//         title = "";
//         auther = "";
//     }
//     void getdata(int id, string title, string auther)
//     {
//         this->id = id;
//         this->title = title;
//         this->auther = auther;
//     }
//     void display()
//     {
//         cout << "Book id:" << id << endl;
//         cout << "Title :" << title << endl;
//         cout << "Auther :" << auther << endl;
//     }
// };
// class member
// {
//     int id;
//     string name;

// public:
//     void getdata(int id, string name)
//     {
//         this->id = id;
//         this->name = name;
//     }
//     void display()
//     {
//         cout << "ID :" << id << endl;
//         cout << "Name :" << name << endl;
//     }
// };
// class library
// {
//     Book book[2];
//     member people[2];
//     int bookcount, count;

// public:
//     library()
//     {
//         bookcount = 0;
//         count = 0;
//     }
//     void addbook()
//     {
//         if (bookcount >= 2)
//         {
//             cout << "Library is full" << endl;
//         }
//         else
//         {
//             int id;
//             string title, auther;
//             cout << "Enter the Book Details :" << endl;
//             cout << "ID :";
//             cin >> id;
//             cout << "Title :";
//             cin.ignore();
//             getline(cin, title);
//             cout << "Auther :";
//             getline(cin, auther);
//             book[bookcount].getdata(id, title, auther);
//             bookcount++;
//         }
//     }
//     void addpeople()
//     {
//         int id;
//         string name;
//         cout << "Enter ID :";
//         cin >> id;
//         cout << "Enter Your Name :";
//         cin.ignore();
//         getline(cin, name);
//         people[count].getdata(id, name);
//         count++;
//     }
//     void displaybooks()
//     {
//         for (int i = 0; i < bookcount; i++)
//         {
//             book[i].display();
//         }
//     }
//     void displaymembers()
//     {
//         for (int i = 0; i < count; i++)
//         {
//             people[i].display();
//         }
//     }
// };
// int main()
// {
//     library l;
//     int c;
//     do
//     {
//         cout << "Select an option" << endl;
//         cout << "1.Add books \n2.Display books\n3.Add people\n4.Display member\n";
//         cin >> c;
//         switch (c)
//         {
//         case 1:
//             l.addbook();

//             break;
//         case 2:
//             l.displaybooks();
//             break;
//         case 3:
//             l.addpeople();
//             break;
//         case 4:
//             l.displaymembers();
//             break;
// case 5:
// exit(1);
//         default:
//             break;
//         }
//     } while (true);

//     return 0;
// }



// #include<iostream>
// using namespace std;

// class student{
//     int age;
//     string name;
// int grades[5];
// public:

// student(int age,string name,int grade[]){
// this->name=name;
// this->age=age;
//     for (int i = 0; i < 5; i++)
//     {
//         this->grades[i]=grade[i];
//     }
// }
// void display(){
//     cout<<"Name : "<<name<<endl;
//     cout<<"Age : "<<age<<endl;
//     for (int i = 0; i < 5; i++)
//     {
//         cout<<"Subject "<<i+1<<" = "<<grades[i]<<endl;
//     }
    
// }
// };
// int main()
// {
//     int grades[]={23,34,45,6,6};
//     student s1(20,"Hamza",grades);
//     student s2(s1); // both are same if we write it like this s2=s1 or s2(s1)
//     s2.display();
//     return 0;
// }

// #include<iostream>
// #include <string>
// using namespace std;
// string createPhoneNumber(const int arr [10]){
//   string n="(";
//   for(int i=0;i<10;i++){
    
//     if(i==3){
//       n+=") ";
//     }
//   else  if(i==6){
//       n+="-";
//     }
//     n+=to_string(arr[i]);
//   }
//   return n;
// }
// int main(){
//      int arr[10]={0,1,2,3,4,5,6,7,8,9};
//     string n;
//     n=createPhoneNumber(arr);
//     cout<<n;
    
// }

