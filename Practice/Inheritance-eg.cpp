// #include <iostream>
// using namespace std;

// class baseacount
// {
// protected:
//     double balance;

// public:
//     baseacount(double n = 0.0)
//     {
//         balance = n;
//         if (balance <= 0.0)
//         {
//             cout << "Error! insufficiant balance" << endl;
//         }
//     }
//     double deposit(double amount)
//     {
//         return balance += amount;
//     }
//     bool witdraw(double amount)
//     {
//         if (amount > balance && balance <= 0.0)
//         {
//             cout << "Debit amount exceeded account balance." << endl;
//             return false;
//         }
//         else
//         {
//             balance -= amount;
//             return true;
//         }
//     }
//     double getbalance() const
//     {
//         return balance;
//     }
// };
// class saving : public baseacount
// {
//     double interest;

// public:
//     saving() {}
//     saving(double initial ,double rate) : baseacount(initial), interest(rate) {}
//     double calculateinterest() const
//     {
//         return balance * (interest / 100);
//     }
// };
// class checkaccount : public baseacount
// {
//     double transactionfee;

// public:
//     checkaccount(double initial, double fee) : baseacount(initial), transactionfee(fee) {}
//     void credit(double amount)
//     {
//         baseacount::deposit(amount);
//         balance -= transactionfee;
//     }
// };
// int main()
// {
//     cout << "Testing baseaccount" << endl;
//     baseacount b(10000);
//     cout << "Deposit" << b.deposit(2000) << endl;
//     cout << "check" << b.getbalance() << endl;
//     b.witdraw(4000);
//     cout << "witdraw" << b.getbalance() << endl;
//     cout<<"Base account is suceessfully checked"<<endl<<endl;

//     cout<<"Testing Saving acount"<<endl;
//     saving s(1000,5);
//     cout<<"deposit amount "<<s.getbalance()<<endl;
//     cout<<"interest rate : "<<s.calculateinterest()<<endl;
//     cout<<"After interest "<<s.getbalance()<<endl<<endl;

//     cout<<"Testing check acount"<<endl;
//     checkaccount c(30000,20);
//     cout<<"deposit amount "<<c.getbalance()<<endl;
//     c.credit(2000);
//     cout<<"Fees "<<c.getbalance()<<endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class book
// {
//     string title, auther;
//     int ISBN;

// public:
//     book() {}
//     book(string title, string auther, int isbn)
//     {
//         this->title = title;
//         this->auther = auther;
//         this->ISBN = isbn;
//     }
//     void displaydetails()
//     {
//         cout << "Title : " << title << "\nAuther : " << auther << "\nISBN : " << ISBN << endl;
//     }
// };
// class printed : public book
// {
//     int numpage;

// public:
//     printed() {}
//     printed(string title, string auther, int isbn, int numpage) : book(title, auther, isbn)
//     {
//         this->numpage = numpage;
//     }
//     void displaydetails()
//     {
//     book::
//         displaydetails();
//         cout << "Numpage : " << numpage << endl;
//     }
// };
// class ebook : public book
// {
//     float filesize;

// public:
//     ebook() {}
//     ebook(string title, string auther, int isbn, float filesize) : book(title, auther, isbn)
//     {
//         this->filesize = filesize;
//     }
//     void displaydetails()
//     {
//     book::
//         displaydetails();
//         cout << "Filesize : " << filesize << endl;
//     }
// };
// class borrow : public printed
// {
//     string name;
//     string duedate;

// public:
//     borrow() {}
//     borrow(string title, string auther, int isbn, int numpage, string name, string date) : printed(title, auther, isbn, numpage)
//     {
//         this->name = name;
//         this->duedate = date;
//     }
//     void displaydetails()
//     {
//     printed::
//         displaydetails();
//         cout << "Borrow name : " << name << endl;
//         cout << "Due date : " << duedate << endl;
//     }
// };
// int main()
// {
//     printed n("The legend", "Hamza", 34354, 300);
//     n.displaydetails();
//     cout<<endl;
//     ebook v("lion","john",6000,15.4);
//     v.displaydetails();
//     cout<<endl;
//     borrow b("Red Dead Redemption","Marston",3400,700,"Hamza","12-2-2004");
//     b.displaydetails();

//     return 0;
// }


#include<iostream>
using namespace std;

class base{
    int n;
    public:
    base(int a){
        n=a;
        cout<<"base 1 class"<<endl;
    }
    void print(){
        cout<<"base 1 data "<<n<<endl;
    }
};
class base2{
    int y;
    public:
    base2(int v){
        y=v;
        cout<<"base 2 class"<<endl;
    }
    void print2(){
        cout<<"base 2 data "<<y<<endl;
    }
};
class derived:public base,public base2{
    int derived1;
    int derived2;
    public:
    derived(int a,int b,int c,int d):base(a),base2(b) {
        derived1=c;
        derived2=d;
        cout<<"derived class"<<endl;
    }
    void print3(){
        cout<<"derived 1 data "<<derived1<<endl;
        cout<<"derived 2 data "<<derived2<<endl;
    }
};
int main()
{
    derived n(2,3,4,5);
    
    return 0;
}