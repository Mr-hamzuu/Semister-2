#include <iostream>
using namespace std;

template <class t, class t2 = float>
class parent
{
    t n;
    t2 m;

public:
    parent(t x, t2 y)
    {
        n = x;
        m = y;
    }
    t getdata()
    {
        return n;
    }
    t2 getdata2()
    {
        return m;
    }
    void add(t, t2);
};
template <class t, class t2>
void parent<t, t2>::add(t n, t2 m)
{
    cout << n + m << endl;
}
int main()
{
    parent<int> n(55, 45.3);
    cout << n.getdata() << endl;
    cout << n.getdata2() << endl;
    n.add(55, 34.34);
    return 0;
}