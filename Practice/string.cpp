// #include <iostream>
// using namespace std;

// int main()
// {
    // at()
    // empty()
    // substr()
    // find()
    // erase()
    // capacity()
    // resize()

    // obj.length()--->
    // compare() OR  s1=s2
    // replace()
    // append()
    // insert()

    // string s1 = "Hamza";
    // string s2 = "Khan";
    // cout << s1.compare(s2) << endl;
    // cout << s1.replace(1, 3, "ume") << endl;
    // cout << s1.append(s2) << endl;
    // cout << s1.at(2) << endl;
    // cout << s1.empty() << endl;
    // cout << s1.find("a") << endl;
    // cout << s1.size() << endl;
    // s1.resize(12);
    // cout << s1.size() << endl;
//     int count = 0;
//     string s3;
//     for (int i = 0; i < s1.length(); i++)
//     {
//         cout << "The index of 'a' in that string are " << s1.find('a') << endl;
//         count = s1.find('a');
//     }
//     s3=s1.substr(count);
//     cout<<s3<<endl;
   
//     return 0;
// }


#include<iostream>
using namespace std;

int main()
{
    string n="Hamza";
    char c='a';
    int pos=0;
    int v=0;
    while (true)
    {
       int index=n.find(c,pos);
       if (index==-1)break;
      cout<<"Found at index "<<index<<endl;
       v++;
       pos=index+1;
    }
    cout<<"Total occurance "<<c<<" : "<<v<<endl;
    
    return 0;
}