// Question 1
#include <iostream>
using namespace std;

class person
{
    string name;
    string contact;

public:
    person() {}
    void setdata(string name, string contact)
    {
        this->name = name;
        this->contact = contact;
    }
    void getdata()
    {
        cout << "Name : " << name << endl;
        cout << "Contact : " << contact << endl;
    }
    ~person() {}
};
class goat
{
    int price;
    int day;
    int time;
    person p;

public:
    goat() {}
    void setdata(int price, int day, int time, string name, string contact)
    {
        p.setdata(name, contact);
        this->price = price;
        this->day = day;
        this->time = time;
    }
    void getdata()
    {
        p.getdata();
        cout << "Price : " << price << endl;
        cout << "Day : " << day << endl;
        cout << "Time : " << time << endl;
    }
};
class cow
{
    const int price;
    int day;
    int time;
    person p;

public:
    cow() : price(25000) {}
    void setdata(int day, int time, string name, string contact)
    {
        p.setdata(name, contact);
        this->day = day;
        this->time = time;
    }
    void getdata()
    {
        p.getdata();
        cout << "Price : " << price << endl;
        cout << "Day : " << day << endl;
        cout << "Time : " << time << endl;
    }
};

int main()
{
    goat g[100];
    cow c[100];
    int ccount = 0;
    int gcount = 0;
    int scount = 0; // we want 7 share in each cow
    int n;
    string name, contact;
    int price, day, time;
    bool m[3][13] = {0};
    do
    {

        cout << "1.Goat booking\n2.Cow booking\n3.Display all Goat\n4.Display all Cow\n5.Search Goat\n6.Search Cow\n";
        cin >> n;
        switch (n)
        {
        case 1:
            cin.ignore();
            cout << "Name : ";
            getline(cin, name);
            cout << "Contact : ";
            getline(cin, contact);
            cout << "Time : ";
            cin >> time;
            cout << "Price : ";
            cin >> price;
            cout << "Day : ";
            cin >> day;
            if (day <= 3 && time <= 13)
            {
                cout << "Wrong day and time" << endl;
            }
            else
            {
                g[gcount].setdata(price, day, time, name, contact);
                gcount++;
                m[day][time] = true;
            }
            break;
        case 2:
            cin.ignore();
            cout << "Name : ";
            getline(cin, name);
            cout << "Contact : ";
            getline(cin, contact);
            cout << "Time : ";
            cin >> time;
            cout << "Day : ";
            cin >> day;
            if (m[day][time])
            {
                c[ccount].setdata(day, time, name, contact);
                ccount++;
                m[day][time] = true;
            }
            break;
        case 3:
            for (int i = 0; i < gcount; i++)
            {
                g[i].getdata();
            }
            break;
        case 4:
            exit(1);
        default:
            break;
        }
    } while (true);
    return 0;
}