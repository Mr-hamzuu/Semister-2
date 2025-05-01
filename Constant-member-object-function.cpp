
// Constant Member :
// 1.Constant data members must be initialized at the time of object creation.
// 2.it is inialized through the constructer and direct
// #include<iostream>
// using namespace std;
// class constant
// {
// private:
//     const int data;
//     string name;
// public:
//     constant(int value,string name):data(value),name(name){} //We initialize it like this
//     void display(){
//         cout<<"The value is "<<data<<endl;
//         cout<<"The name is "<<name<<endl;
//     }
// };

// int main()
// {
//     constant c(5,"Hamza");
//     c.display();
//     return 0;
// }



// **************************************************************************************************
// Constant member function:
// 1.A constant member function is a function that guarantees it will not modify the state of the object on which it is called.
// 2.It is declared by adding the const keyword after the function's parameter list.
// 3.A constant member function can only call other constant member functions.
// 4.It cannot modify any non-mutable member variables of the class.
// 5.It is used to enforce read-only access to the object's state.

// #include<iostream>
// using namespace std;

// class func{
//     int data;
//     public:
//     void set(int value){
//         data=value;
//     }
//     void get() const{
//         cout<<"Not accesible data member for updating value:) "<<data;
//     }
// };
// int main()
// {
//     func f;
//     f.set(7);
//     f.get();
    
//     return 0;
// }


// constant object :
// 1.A constant object is an object whose state cannot be modified after initialization.
// 2.It is declared using the const keyword.
// 3.A constant object can only call constant member functions.
// 4.It cannot call non-constant member functions, as they might modify the object's state.
// 5.A constant object can only call constant member function and a constant member function cannot modify the data member.... so if we use constant object then we have to use all the things constant
// #include<iostream>
// using namespace std;

// class obj{
//     int i;
//     public:
//     obj(int v){
//         i=v;
//     }
//     void get(){
//         cout<<"value is "<<i;
//     }
//     void display() const{
        
//         cout<<"value is "<<i;
//     }
// };
// int main()
// {
//     const obj b(4);
//     // b.get(); Not allowed
//     b.display();
//     return 0;
// }


// Practice
#include<iostream>
using namespace std;

class Book{
    string title;
    string auther;
    bool isavailaible;
    public:
    Book(){};
    Book(string title,string auther ){
        this->title=title;
        this->auther=auther;
        this->isavailaible=true;
    }
    void borrow(){
        if (isavailaible)
        {
            isavailaible=false;
            cout<<"Book Borrorwed :"<<title<<endl;
        }
        else{
            cout<<"Book Not Available :"<<title<<endl;

        }
        
    }
    void display()const{
        cout<<"Title :"<<title<<endl;
        cout<<"Auther :"<<auther<<endl;
        if (isavailaible)
        {
            cout<<"Available : Yes"<<endl;
        }
        else{
            cout<<"Available : No"<<endl;
        }
    }
    void returmbook(){
        isavailaible=true;
        cout<<"Book returned "<<endl;
    }

};


int main()
{
    Book book("Syntax family","Hamza");
    book.display();

    book.borrow();
    book.display();
    
    book.returmbook();
    book.display();
    return 0;
}