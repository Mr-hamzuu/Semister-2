#include <iostream>
#include <iomanip>
using namespace std;

class student
{
    int id;
    string name;

public:
    student()
    {
        id = 0;
        name = "";
    }
    void add()
    {
        cout << "Enter ID : ";
        cin >> id;
        cin.ignore();
        cout << "Enter Name : ";
        getline(cin, name);
    }
    void display() const
    {
        cout << "ID :" << id << endl;
        cout << "Name :" << name << endl;
    }
    void update(int i)
    {
        if (i == id)
        {
            cout << "Enter New Name : ";
            cin.ignore();
            getline(cin, name);
        }
    }
    bool remove(int i)
    {
        if (i == id)
        {
            return true;
        }
        return false;
    }
    void search(int i)
    {
        if (i == id)
        {
            cout << "ID :" << id << endl;
            cout << "Name :" << name << endl;
        }
    }
};
int main()
{
    student *s = new student[10];
    int counter = 0;
    int n, c;
    cout << setw(80) << "UNIVERSITY INSTITUTE OF INFORMATION TECHNOLOGY DATABASE " << endl;
    while (true)
    {
        cout << "1.ADD STUDENT RECORD\n2.DELETE STUDENT RECORD\n3.DISPLAY STUDENT RECORD \n4.EDIT STUDENT RECORD\n5.SEARCH STUDENT RECORD\n6.EXIT" << endl;
        cin >> n;
        switch (n)
        {
        case 1:
            cout << "Student " << counter + 1 << endl;
            s[counter].add();
            counter++;
            break;
        case 2:
            cout << "Enter the Id of a student : " << endl;
            cin >> c;
            for (int i = 0; i < counter; i++)
            {
                if (s[i].remove(c))
                {
                    for (int j = i; j < counter - 1; j++)
                    {
                        s[j] = s[j + 1];
                    }
                    counter--;
                    cout<<"Record deleted successfully"<<endl;
                    break;
                }
            }
            break;
        case 3:
            for (int i = 0; i < counter; i++)
            {
                cout << "Student " << i + 1 << endl;
                s[i].display();
            }

            break;
        case 4:
            cout << "Enter the Id of a student for Edit: " << endl;
            cin >> c;
            for (int i = 0; i < counter; i++)
            {
                s[i].update(c);
            }
            break;
        case 5:
            cout << "Enter the Id of a student for Search : " << endl;
            cin >> c;
            for (int i = 0; i < counter; i++)
            {
                s[i].search(c);
            }
            break;
        case 6:
            cout << "Program are successfully exit" << endl;
            delete[] s;
            exit(1);
            break;
        default:
        cout << "Invalid Input" << endl;
            break;
        }
    }

    return 0;
}