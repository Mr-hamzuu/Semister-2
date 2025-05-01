// #include <iostream>
// using namespace std;

// class C
// {
//     int i;

// public:
//     void setdata(int n)
//     {
//         i = n;
//     }
//     void getdata()
//     {
//         cout << i << endl;
//     }
// };
// int main()
// {
//     // int *arr = new int[3];
//     // arr[0] = 1;
//     // arr[1] = 3;
//     // arr[2] = 5;
//     // delete[] arr;
//     // for (int i = 0; i < 3; i++)
//     // {
//     //     cout << arr[i] << endl;
//     // }

//     // C *v = new C;
//     // (*v).setdata(3);
//     // (*v).getdata();
//     // instead of we write this (*v).getdata();
//     // cpp give us better option that is v->getdata() v is a pointer and it is dereferncing the obj function


//     // C *m = new C[3];
//     // m->setdata(0);
//     // m->getdata();

//     // we can increment array like this in pointer using manual method
//     // (m + 1)->setdata(1);
//     // (m + 1)->getdata();

//     // (m + 2)->setdata(2);
//     // (m + 2)->getdata();
    
//     // delete[] m;

//     C *ptr=new C[4];
// cout<<sizeof(*ptr);
//     C *tempptr=ptr;
//     for (int i = 0; i < 4; i++)
//     {
//         int n;
//         cout<<"Enter the value for "<<i+1<<" object : ";
//         cin>>n;
//         // we have two methods 
//         // 1. ptr->setdata(n);
//         // 2. ptr[i].setdata(n); this is the saffest method using dynamic memory
//         ptr->setdata(n);
//         ptr++;
//         ptr[i].setdata(n);
//     }
//     for (int i = 0; i < 4; i++)
//     {
//         cout<<"The value of Object "<<i+1 <<" is : ";
//         tempptr->getdata();
//         tempptr++;
//         tempptr[i].getdata();
//     }
    
    
//     return 0;
// }


