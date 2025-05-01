#include <iostream>
#include <fstream>
using namespace std;

struct student
{
    int id;
    string name;
    int amount;
};

void input(student s[], int size);
void write(student s[], int size);
void Display();
void Delete(student s[], int &size);

int main()
{
    int size = 500, n;
    student s[size];
    while (true)
    {

        cout << "Select an option" << endl;
        cout << "1.Input data" << endl;
        cout << "2.Save in file" << endl;
        cout << "3.Display" << endl;
        cout << "4.Delete" << endl;
        cout << "5.Exit" << endl;
        cin >> n;
        switch (n)
        {
        case 1:
            input(s, size);
            break;
        case 2:
            write(s, size);
            break;
        case 3:
            Display();
            break;
        case 4:
            Delete(s, size);
            break;
        case 5:
            exit(1);
            break;

        default:
            break;
        }
    }

    return 0;
}
void input(student s[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Student " << i + 1 << endl;
        cout << "Id :";
        cin >> s[i].id;
        cout << "Name :";
        cin.ignore();
        getline(cin, s[i].name);
        cout << "Deposit Amount :";
        cin >> s[i].amount;
        while (s[i].amount < 2500)
        {
            cout << "Re Enter the ammout" << endl;
            cin >> s[i].amount;
        }
    }
}
void write(student s[], int size)
{
    ofstream onfile("UIIT-2025.txt", ios::out);
    for (int i = 0; i < size; i++)
    {
        onfile << "Student " << i + 1 << endl;
        onfile << "Name :" << s[i].name << endl;
        onfile << "Id :" << s[i].id << endl;
        onfile << "Deposit Amount :" << s[i].amount << endl;
    }
}
void Display()
{
    ifstream infile("UIIT-2025.txt", ios::in);
    string data;
    while (getline(infile, data))
    {
        cout << data << endl;
    }
}

void Delete(student s[], int &size)
{
    int n;
    cout << "Enter the ID of a student you want to delete";
    cin >> n;
    for (int i = 0; i < size; i++)
    {
        if (s[i].id == n)
        {
            for (int j = n; j < size - 1; j++)
            {
                s[i] = s[i + 1];
            }
            size--;
        }
    }
    cout << "Student deleted successfully" << endl;
    write(s, size);
}

