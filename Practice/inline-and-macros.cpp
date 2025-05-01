// #include<iostream>
// using namespace std;

//  #define hello(x) cout<<"Hello world"<<x<<endl;

// inline int e(int n){
//     cout<<"Hello world "<<n<<endl;
//     return n;
// }
// int main()
// {
//     hello(4);
//     return 0;
// }

// Question # 1
// #include <iostream>
// using namespace std;

// class age
// {
//     int ali;
//     int ahmed;

// public:
//     age()
//     {
//         ali = 0;
//         ahmed = 0;
//     }
//     void beforeupdate() const
//     {
//         cout << "Ali age : " << ali << endl;
//         cout << "Ahmed age : " << ahmed << endl;
//     }
//     void update()
//     {
//         ali = 30;
//         ahmed = 29;
//         cout << "The age of Ali is " << ali << endl;
//         cout << "The age of Ahmed is " << ahmed << endl;
//     }
// ~age(){
//     cout<<"Destructer call"<<endl;
// }
// };
// int main()
// {
//     age a;
//     a.beforeupdate();
//     a.update();

//     return 0;
// }
// question # 2

// #include <iostream>
// using namespace std;

// class line
// {
//     double length;
// public:
//     double len(double l);
//     void showdata();
// };

// double line::len(double l)
// {
//     length = l;
//     return length;
// }
// void line::showdata(){
//     cout<<"length : "<<length<<endl;
// }
// int main()
// {
//     line l;
//     l.len(10.8);
//     l.showdata();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class serial
// {
//     static int count;
//     int serial_no;

// public:
//     serial()
//     {
//         count++;
//     }
//     void input()
//     {
//         cout << "Enter serial no : ";
//         cin >> serial_no;
//     }
//     void display()
//     {
//         cout << "object Count : " << count << endl;
//         cout << "Serial no :" << serial_no << endl;
//     }
//     ~serial()
//     {
//         cout << "Destructer for object with serial no "<<serial_no << endl;
//     }
// };
// int serial::count = 0;
// int main()
// {
//     serial s1;
//     s1.input();
//     s1.display();
//     serial s2;
//     s2.input();
//     s2.display();
//     return 0;
// }

// Assignment 2
// #include<iostream>
// using namespace std;

// class hospital{
//     string name;
//     string address;
//     public:
//     hospital(){}
//     hospital(string name,string a){
//         this->name=name;
//         this->address=a;
//     }
//     void display(){
//         cout<<"Name of Hospital : "<<name<<endl;
//         cout<<"Address : "<<address<<endl;
//     }
//     ~hospital(){
//         cout<<"Destructer for Hospital"<<endl;
//     }
// };
// class docter{
// int id;
// string name;
// string specialization;
// hospital h;
// public:
//     docter(string name,string a,int id,string n,string sp):h(name,a){
//         this->id= id;
//         this->name=n;
//         this->specialization=sp;
//     }
//     void display() {
//         h.display();
//         cout<<"Id : "<<id<<endl;
//         cout<<"Name : "<<name<<endl;
//         cout<<"Specialization : "<<specialization<<endl;
//     }
//     ~docter(){
//         cout<<"Destructer for docter"<<endl;
//     }
// };
// int main()
// {
//     docter d("CMH","Saddar,Rawalpindi",1044,"Hamza","Cardiology");
//     d.display();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class hospital{
//     string name;
//     string address;
//     public:
//     hospital(){}
//     hospital(string name,string a){
//         this->name=name;
//         this->address=a;
//     }
//     void display(){
//         cout<<"Name of Hospital : "<<name<<endl;
//         cout<<"Address : "<<address<<endl;
//     }
//     ~hospital(){
//         cout<<"Destructer call for Hospital"<<endl;
//     }
// };
// class docter{
// int id;
// string name;
// string specialization;
// hospital *h;
// public:
//     docter(hospital* d,int id,string n,string sp):h(d){
//         this->id= id;
//         this->name=n;
//         this->specialization=sp;
//     }
//     void display() {
//         h->display();
//         cout<<"Id : "<<id<<endl;
//         cout<<"Name : "<<name<<endl;
//         cout<<"Specialization : "<<specialization<<endl;
//     }
//     ~docter(){
//         cout<<"Destructer call for docter"<<endl;
//     }
// };
// int main()
// {
//     hospital h("CMH","Saddar");
//     h.display();
//     docter *d= new docter(&h,1044,"Hamza","Cardiology");
//     d->display();
//    delete d;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class gameCompany
// {
//     string name;
//     int year;

// public:
//     gameCompany(string a, int b)
//     {
//         name = a;
//         year = b;
//     }
//     void display()
//     {
//         cout << "Name of company is " << name<<endl;
//         cout << "Year of establishment is " << year<<endl;
//     }
//     ~gameCompany()
//     {
//         cout << "Destructor call for gameCompnay"<<endl;
//     }
// };
// class Game{
// string name;
// int price;
// gameCompany g;
// public:

// Game(string s , int  b, string x,int y ):g(s,b)
// {
// name=x;
// price=b;
// }
// void display()
// {
//     g.display();
//     cout<<"Name of game is "<<name<<endl;
//     cout<<"price of game is : "<<price<<endl;
// }
// ~Game()
//     {
//         cout << "Destructor call for Game"<<endl;
//     }
// };

//     int main()
// {
// Game g1("EA sports",2024,"Assassin Creed ",200000);
// g1.display();
//     return 0;
// }



// #include <iostream>
// using namespace std;
// class gameCompany
// {
//     string name;
//     int year;

// public:
//     gameCompany(string a, int b)
//     {
//         name = a;
//         year = b;
//     }
//     void display()
//     {
//         cout << "Name of company is " << name << endl;
//         cout << "Year of establishment is " << year << endl;
//     }
//     ~gameCompany()
//     {
//         cout << "Destructor call for gameCompnay" << endl;
//     }
// };
// class Game
// {
//     string name;
//     int price;
//     gameCompany *g;

// public:
//     Game(gameCompany *s, string x, int b) : g(s)
//     {
//         name = x;
//         price = b;
//     }
//     void display()
//     {
//         g->display();
//         cout << "Name of game is " << name << endl;
//         cout << "price of game is : " << price << endl;
//     }
//     ~Game()
//     {
//         cout << "Destructor call for Game" << endl;
//     }
// };

// int main()
// {
//     gameCompany g("EA sports", 2024);
//     Game *g1 = new Game(&g, "Assassin Creed ", 200000);
//     g1->display();
//     delete g1;
//     return 0;
// }