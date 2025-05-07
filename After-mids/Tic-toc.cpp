#include <iostream>
using namespace std;

class Game
{
    char matrix[3][3];

public:
    void board()
    {
        char c = '1';
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                matrix[i][j] = c;
                cout << matrix[i][j];
                c++;
                if (j == 0 || j == 1)
                {
                    cout << " | ";
                }
            }
            cout << endl;
            if (i == 0 || i == 1)
            {
                cout << "----------";
            }

            cout << endl;
        }
    }
    void display()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << matrix[i][j];
                if (j == 0 || j == 1)
                {
                    cout << " | ";
                }
            }
            cout << endl;
            if (i == 0 || i == 1)
            {
                cout << "----------";
            }

            cout << endl;
        }
    }
    bool position(char c, char symbol)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (c == matrix[i][j])
                {
                    matrix[i][j] = symbol;
                    return true;
                }
            }
        }
        return false;
    }
    bool check(char s)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if ((matrix[0][j] == s && matrix[1][j] == s && matrix[2][j] == s) || (matrix[j][0] == s && matrix[j][1] == s && matrix[j][2] == s))
                {
                    return true;
                }
            }
        }
        bool diagonalcheck = true;
        bool antidiagonalcheck = true;
        for (int i = 0; i < 3; i++)
        {
            if (matrix[i][i] != s)
            {
                diagonalcheck = false;
            }
            if (matrix[i][2 - i] != s)
            {
                antidiagonalcheck = false;
            }
        }
        return diagonalcheck || antidiagonalcheck;
    }
};

class player
{
    string name1, name2;
    Game g;
    char symbol1, symbol2;
    char box1, box2;

public:
    void setdata()
    {
        cout << "Enter Player 1 name : ";
        getline(cin, name1);
        cout << "Enter Player 1 symbol : ";
        cin >> symbol1;
        cout << "Enter Player 2 name : ";
        cin.ignore();
        getline(cin, name2);
        cout << "Enter Player 2 symbol : ";
        cin >> symbol2;
        g.board();
    }
    void select1()
    {
        cout << "Enter Player 1 move : ";
        cin >> box1;
        if (box1 < '1' || box1 > '9')
        {
            cout << "Invalid Position" << endl;
            select1();
        }
        if (g.position(box1, symbol1))
        {
            cout << "Successfully moved" << endl;
            if (g.check(symbol1))
            {
                cout << ":) Congratulations The Winner is " << name1 << endl;
                exit(1);
            }
        }
        else
        {
            cout << "Box is already reserved by " << name2 << endl;
            cout << "Try again :)" << endl;
            select1();
        }

        g.display();
    }
    void select2()
    {

        cout << "Enter Player 2 move : ";
        cin >> box2;
        if (box2 < '1' || box2 > '9')
        {
            cout << "Invalid Position" << endl;
            select2();
        }
        if (g.position(box2, symbol2))
        {
            cout << "Successfully moved" << endl;
            if (g.check(symbol2))
            {
                cout << ":) Congratulations The Winner is " << name2 << endl;
                exit(1);
            }
        }
        else
        {
            cout << "Box is already reserved by " << name1 << endl;
            cout << "Try again :)" << endl;
            select2();
        }
        g.display();
    }
};
int main()
{
    player p;
    p.setdata();
    while (true)
    {
        p.select1();
        p.select2();
    }

    return 0;
}