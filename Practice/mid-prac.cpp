// #include<iostream>
// using namespace std;

// class bank{
//     int accountno;
//     double balance;
//     public:
//     bank(){
//         accountno=0;
//         balance=0.0;
//     }
//     void setdata(int accountno,double balance){
//         this->accountno=accountno;
//         this->balance=balance;
//     }
//     int account(){
//         return accountno;
//     }
//     double balanc(){
//         return balance;
//     }
//     void deposit(double d){
//         balance+=d;
//     }
//     void withdraw(double d){
//         if (d<=balance)
//         {
//             balance-=d;
//         }
//         else {
//             cout<<"Your account has insufficiant balance"<<endl;
//         }

//     }
//     void display()const{
//         cout<<"Account no : "<<accountno<<endl;
//         cout<<"Balance : "<<balance<<endl;
//     }
//     ~bank(){}
// };

// class checkaccount:public bank{
//     double minimum;
//     double interest;
//     double services;
//     public:
//     checkaccount(){
//         minimum=0;
//         services=0;
//     }
//     void set(double x,double y,double z,int account,double balance){
//         minimum=x;
//         services=y;
//         interest=z;
//         bank::setdata(account,balance);
//     }
//     void min(){
//         if (balanc()<minimum)
//         {
//             cout<<"Your account has insufficiant balance"<<endl;
//         }
//         else{
//             cout<<"Great! Your account has sufficiant balance to withdraw"<<endl;
//         }
//     }
//     double interes(){
//         return interest;
//     }
//     bool check(){
//             if (balanc()<minimum)
//             {
//                return false;
//             }
//             else{
//                 return true;
//             }
//     }

//     void withdraw(double n){
//         bool x=check();
//         if(x){
//             bank::withdraw(n);

//         }
//         else{
//             cout<<"Insufficiant balance"<<endl;
//         }
//     }
//     void display(){
//         bank::display();
//         cout<<"Interest : "<<interest<<endl;
//         cout<<"services : "<<services<<endl;
//     }
// };
// class savingaccount:public bank{
//     double interest;
//     double services;
//     public:
//     savingaccount(){
//         services=0;
//     }
//     void set(double y,double z,int account,double balance){
//         services=y;
//         interest=z;
//         bank::setdata(account,balance);
//     }
//    void post(){
//     cout<<"The interest rate is "<<interest<<endl;
//    }
//     double interes(){
//         return interest;
//     }

//     void withdraw(double n){
//         if(n<=balanc()){
//             bank::withdraw(n);
//         }
//         else{
//             cout<<"Insufficiant balance"<<endl;
//         }
//     }
//     void display(){
//         bank::display();
//         cout<<"Interest : "<<interest<<endl;
//         cout<<"services : "<<services<<endl;
//     }
// };

// int main()
// {
//     checkaccount c;
//     c.set(200,300,400,500,60000);
//     c.display();
//     c.deposit(3000);
//     c.display();
//     c.withdraw(5000);
//     c.display();

//     savingaccount s;
//     s.set(34,454,23232,40000);
//     s.display();
//     s.deposit(34878);
//     s.display();
//     s.withdraw(3787);
//     s.display();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class parent1{
//     double feet;
//     double inch;
// public:
// parent1(){}
// parent1(double f,double i){
//     feet=f;
//     inch=i;
// }

// void display(){
//     cout<<feet<<"\'-"<<inch<<"\""<<endl;
// }
// };

// int main()
// {
//     parent1 p(9,3.4);
//     p.display();
//     parent1 p2;
//     p2=p;
//     p2.display();

//     return 0;
// }

// #include<iostream>
// using namespace std;

// class department{
//     string name;
//     public:
//     department(string n):name(n){}
//     void display()const{
//         cout<<"Department : "<<name<<endl;
//     }
// };

// class person{
//     string name;
//     int age;
//     public:
//     person(string n,int a){
//         name=n;
//         age=a;
//     }
//     void display()const{
//         cout<<"Name : "<<name<<endl;
//         cout<<"Age : "<<age<<endl;
//     }
// };
// class student:public person{
//     int* studentid;
//     float* gpa;
//     static int counter;
//     department *d;
// public:
// student(string name,int age,int s,float f,department* dept):person(name,age),d(dept){
//     studentid=new int(s);
//     gpa=new float(f);
//     counter++;
// }
// void display()const{
//     person::display();
//     cout<<"Student id : "<<*studentid<<endl;
//     cout<<"Gpa : "<<*gpa<<endl;
// }
// ~student(){
//     delete gpa;
//     delete studentid;
// }
// };
// int student::counter=0;

// class professor:public person{
//     float salary;
//     department* d;
//     public:
//     professor(string name,int age,float s,department* d):person(name,age),d(d){
//         salary=s;
//     }
//     void display()const{
//         person::display();
//         cout<<"Salary "<<salary<<endl;
//     }
// };
// class university{
//     student* s[2];
//     professor* p[2];
//     int scount=0;
//     int pcount=0;
//     public:
//     void addstudent(student* st){
//         if (scount<2)
//         {
//             s[scount++]=st;
//         }
//     }
//     void addprofessor(professor* pr){
//         if (pcount<2)
//         {
//             p[pcount++]=pr;
//         }
//     }
//     void displayall(){
//         for (int i = 0; i < pcount; i++)
//         {
//             p[i]->display();
//         }
//         for (int i = 0; i < scount; i++)
//         {
//             s[i]->display();
//         }
//     }
// };
// int main()
// {
//     department d("SE");
//     student* s1=new student("Hamza",20,33,3.2,&d);
//     professor* p1=new professor("Kashif",37,83,&d);
//     university u;
//     u.addstudent(s1);
//     u.addprofessor(p1);
//     u.displayall();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class A;
// class B{
//     public:
//    void display(A v);
// };
// class A{
//     int x,y;
//     public:
//     A(int a,int b){
//         x=a;
//         y=b;
//     }
//     friend void B::display(A v);
// };
// void B::display(A v){
//     cout<<"X : "<<v.x<<endl;
//     cout<<"X : "<<v.y<<endl;
// }
// int main()
// {
//     A c(3,7);
//     B b;
//     b.display(c);
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class icecream{
//     string flavour,waffles,topping;
//     int price;
//     public:
//     icecream(){}
//     icecream(string f,string w,string t){
//         flavour=f;
//         waffles=w;
//         topping=t;
//         price=300;
//         if (topping!="None")
//         {
//             price+=100;
//         }
//     }
//     void display()const{
//         cout<<"flavour : "<<flavour<<"\nwaffles : "<<waffles<<"\ntopping : "<<topping<<endl;
//     }
//     int getprice(){
//         return price;
//     }
// };
// int main()
// {
//     icecream ice[25];
//     int icount=0;
//    char ch;
//    do
//    {
//     string flavor,waffels,topping;
//     cout<<"Enter flavor : ";
//     cin>>flavor;
//     cout<<"Enter waffles : ";
//     cin>>waffels;
//     cout<<"Enter topping : ";
//     cin>>topping;
//     ice[icount++]=icecream(flavor,waffels,topping);
//     cout<<"Do you want to add more Icecream "<<endl;
//     cin>>ch;
//    } while (ch=='Y'&&icount<25);

//    int total=0;
//    cout<<"Your Order "<<endl;
//    for (int i = 0; i < icount; i++)
//    {
//     ice[i].display();
//     total+=ice[i].getprice();
//    }
//    cout<<"Total price is "<<total<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class teacher;
// class student
// {
//     int id;
//     string name;
//     int marks;

// public:
// student(){}
//     student(int i, string n, int m)
//     {
//         id = i;
//         name = n;
//         marks = m;
//     }
//     void display()
//     {
//         cout << "Id : " << id << endl;
//         cout << "Name : " << name << endl;
//         cout << "Marks : " << marks << endl;
//     }
//     friend class teacher;
// };

// class teacher
// {
// public:
//     void update(student s[],int id,int c)
//     {
//         for (int i = 0; i < c; i++)
//         {
//             if (id==s[i].id)
//             {
//                 cout<<"Enter new name : "<<endl;
//                 cin>>s[i].name;
//                 cout<<"Enter new marks : "<<endl;
//                 cin>>s[i].marks;
//             }
            
//         }

//     }
//     void addstudent(student s[],int &c){
//         if (c<2)
//         {
            
//             cout<<"Enter name : ";
//             cin >> s[c].name;
//             cout<<"Enter id : ";
//         cin >> s[c].id;
//         cout<<"Enter Marks : ";
//         cin >> s[c].marks;
//         cout<<"Student add successfully"<<endl;
//     }
//     else{
//         cout<<"Database is full"<<endl;
//     }
//     }
//     void deletestudent(student s[],int id,int &c){
//         for (int i = 0; i < c; i++)
//         {
//             if (id=s[i].id)
//             {
//                 for (int j = i; j < c-1; j++)
//                 {
//                     s[j]=s[j+1];
//                 }
                
//                 c--;
//                 cout<<"Customer deleted sucessfully"<<endl;
//                 return;
//             }
//         }
        
//         if (c<2)
//         {
            
//             cout<<"Enter name : ";
//             cin >> s[c].name;
//             cout<<"Enter id : ";
//         cin >> s[c].id;
//         cout<<"Enter Marks : ";
//         cin >> s[c].marks;
//         cout<<"Student add successfully"<<endl;
//     }
//     else{
//         cout<<"Database is full"<<endl;
//     }
//     }
//     void display(student s[],int c)
//     {
//         for (int i = 0; i < c; i++)
//         {
//             s[i].display();
//         }
        
//     }
// };
// int main()
// {
// student s[2];
// int c=0;
// teacher t;
// int n;
// do
// {
//     cout<<"1.Add student \n 2.delete student\n3.view student\n4.exit"<<endl;
//     cin>>n;
//     switch (n)
//     {
//     case 1:
//         t.addstudent(s,c);
//         c++;
//         break;
//     case 2:
//     int id;
//     cout<<"Enter id "<<endl;
//     cin>>id;
//         t.deletestudent(s,id,c);
//         c++;
//         break;
//     case 3:
//         t.display(s,c);
//         c++;
//         break;
    
//     default:
//         break;
//     }
// } while (true);

//     return 0;
// }



// #include <iostream>
// using namespace std;

// class subway
// {
//     string bread, filling, extras;
//     int price;

// public:
//     subway() {}
//     subway(string b, string f, string e)
//     {
//         bread = b;
//         price =0;
//         if (bread != "none")
//         {
//             price += 200;
//         }
//         filling = f;
//         if (filling != "none")
//         {
//             price += 300;
//         }

//         extras = e;
//         if (extras != "none")
//         {
//             price += 100;
//         }
//     }
//     void display()
//     {
//         cout << "Bread Type : " << bread << endl;
//         cout << "Filling : " << filling << endl;
//         cout << "Extras : " << extras << endl;
//     }
//     int getprice()
//     {
//         return price;
//     }
// };

// int main()
// {
//     subway s[10];
//     int scount = 0;
//     char ch;
//     do
//     {
//         string bread, filling, extras;
//         cout << "Enter bread ";
//         cin >> bread;
//         cout << "Enter filling ";
//         cin >> filling;
//         cout << "Enter extras ";
//         cin >> extras;
//         s[scount++] = subway(bread, filling, extras);
//         cout << "Do you want to continue : ";
//         cin >> ch;
//     } while (ch == 'y' && scount < 10);

//     int total=0;
//     for (int i = 0; i < scount; i++)
//     {
//         s[i].display();
//         total+=s[i].getprice();
//     }
//     cout<<"Total bill is : "<<total<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;

// class gta3{
//     string title;
//     string stime;
//     string etime;
//     protected:
//    static float score;
//     public:
//     gta3(){}
//     gta3(string t,string st,string et){
//         title=t;
//         stime=st;
//         etime=et;
//     }
//     void display(){
//         cout<<"Title : "<<title<<endl;
//         cout<<"start Time : "<<stime<<endl;
//         cout<<"End time : "<<etime<<endl;
//     }
//     void addscore(int n){
//         score+=n;
//     }
//    static float getscore(){
//         return score;
//     }


// };
// class stealcar:public gta3{
//     int car;
//     public:
//     stealcar(string t,string st,string et):gta3(t,st,et){}
//     void steal(){
//         int n;
//         cout<<"Enter the no of cars you steal: ";
//         cin>>n;
//         float v=n*500;
//         cout<<"The score is "<<v<<endl;
//         addscore(v);
//     }
// };
// class robcar:public gta3{
//     int car;
//     public:
//     robcar(string t,string st,string et):gta3(t,st,et){}
//     void rob(){
//         int n;
//         cout<<"Enter the no of cars you rob: ";
//         cin>>n;
//         float v=n*700;
//         cout<<"The score is "<<v<<endl;
//        addscore(v);
//     }
// };
// class police:public gta3{
//     int car;
//     public:
//     police(string t,string st,string et):gta3(t,st,et){}
//     void escape(){
//         float n;
//         cout<<"Enter the no of time you escape : ";
//         cin>>n;
//         float v=(n/5)*1000;
//         cout<<"The score is "<<v<<endl;
//         addscore(v);
//     }
// };
// float gta3::score=0;
// int main()
// {
//     gta3 g("GTA","5:00","6:00");

//     police p("GTA","5:00","6:00");
//     p.escape();
//     p.display();
  

//     stealcar s("GTA","5:00","6:00");
//     s.steal();
//     s.display();

//     robcar r("GTA","5:00","6:00");
//     r.rob();
//     r.display();

//     cout<<"Total final score is : "<<gta3::getscore()<<endl;
//     return 0;
// }


