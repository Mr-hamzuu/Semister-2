#include <iostream>
using namespace std;

class Game
{
    int matrix[3][3];

public:
    void board()
    {
        char c = '1';
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << c;
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

};

class player{
    string name;
    char x;
    public:
    void setdata(){
        cout<<"Enter name : ";
        getline(cin,name);
        cout<<"Enter symbol : ";
        cin>>x;
    }
    
};
int main()
{
    Game g;
    g.board();
    return 0;
}