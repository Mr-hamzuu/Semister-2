// #include<iostream>
// using namespace std;

// class d{
//     int n;
//     public:
//     d(){
//         cout<<"Constructer"<<endl;
//     }
//     ~d(){
//         cout<<"Destructer"<<endl;
//     }
//     void f(){
//         cout<<"Hello world"<<endl;
//     }
// };
// int main()
// {
//     d v;
//     d *ptr=new d;
//     delete ptr;
//     ptr->f();
//     int *p=new int;
//     *p=23;
//     cout<<*p<<endl;
//     delete p;
//     *p=9;
//     cout<<*p<<endl;
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the size of an array" << endl;
    int size;
    cin >> size;
    int *arr = new int[size];
    // cout<<"Enter the size again ";
    // cin>>size;
    int n;
    while (true)
    {
        cout << "Enter your Choice \n1.Input\n2.display\n3.Average marks\n4.exit" << endl;
        cin >> n;
        switch (n)
        {
        case 1:
            cout << "Enter the values" << endl;
            for (int i = 0; i < size; i++)
            {
                cout << "Value " << i + 1 << " : ";
                cin >> arr[i];
            }
            break;
        case 2:
            cout << "values are :" << endl;
            for (int i = 0; i < size; i++)
            {
                cout << arr[i] << " ";
            }
            break;
        case 3:
            int n;
            cout << "values are :" << endl;
            for (int i = 0; i < size; i++)
            {
                n += arr[i];
            }
            n /= size;
            cout << "Average marks are " << n << endl;
            break;

        case 4:
            exit(1);
            delete[] arr;
        default:
            break;
        }
    }
    return 0;
}

// #include <iostream>

// using namespace std;

// int main() {
//     char team1[20], team2[20], team3[20];
//     int points1, points2, points3;
//     float runRate1, runRate2, runRate3;

//     cout << "Enter Team 1 Name: ";
//     cin >> team1;
//     cout << "Enter Points: ";
//     cin >> points1;
//     cout << "Enter Run Rate: ";
//     cin >> runRate1;

//     cout << "Enter Team 2 Name: ";
//     cin >> team2;
//     cout << "Enter Points: ";
//     cin >> points2;
//     cout << "Enter Run Rate: ";
//     cin >> runRate2;

//     cout << "Enter Team 3 Name: ";
//     cin >> team3;
//     cout << "Enter Points: ";
//     cin >> points3;
//     cout << "Enter Run Rate: ";
//     cin >> runRate3;

//     char bestTeam[20];
//     if (points1 > points2 && points1 > points3) {
//         cout << "Best Team: " << team1 << endl;
//     }
//     else if (points2 > points1 && points2 > points3) {
//         cout << "Best Team: " << team2 << endl;
//     }
//     else if (points3 > points1 && points3 > points2) {
//         cout << "Best Team: " << team3 << endl;
//     }
//     else {
//         if (points1 == points2 && points1 > points3) {
//             cout << "Best Team: ";
//             if (runRate1 > runRate2 )
//             cout<< team1<<endl ;
//             else
//             cout << team2 << endl;
//         }
//         else if (points1 == points3 && points1 > points2) {
//             cout << "Best Team: ";
//             if (runRate1 > runRate3 )
//             cout<< team1<<endl ;
//             else
//             cout << team3 << endl;
//         }
//         else if (points2 == points3 && points2 > points1) {
//             cout << "Best Team: " ;
//             if (runRate1 > runRate3 )
//             cout<< team2<<endl ;
//             else
//             cout << team3 << endl;
//         }
//         else {
//             cout << "All teams have the same points and run rate!" << endl;
//         }
//     }

//     return 0;
// }
