// #include<iostream>
// using namespace std;

// class destructer{
//     public:
//     destructer(){
//         cout<<"This is Constructer "<<endl;
//     }
//     ~destructer(){
        
//         cout<<"This is destructer "<<endl;
//     }
// };

// int main()
// {
//     destructer d;
//     if (true)
//     {
//         destructer g;
//     }
    
    
//     return 0;
// }

#include<iostream>
using namespace std;

class des{
    int n;
    public:
    des(){
        cout<<"Hello world"<<endl;
    }
    ~des(){
        cout<<"Goodbye world"<<endl;
    } 
};
int main()
{
    des n;
    return 0;
}