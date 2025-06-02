
// We use a pointer in Singleton so that we can control when the object is created, make sure it stays in memory, and ensure only one object is ever made.

// Rules of Singleton:
// :) Constructor is private – so no one can create objects directly.
// :)You give a public function (like getInstance()) that gives access to the only object.
// #include <iostream>
// using namespace std;

// class singleton
// {
// private:
//     static singleton *ptrobj;
//     string name;
//     singleton(string n)
//     {
//         name = n;
//         cout << "Object is created" << endl;
//     }

// public:
//     static singleton *check(string n)
//     {
//         if (ptrobj == nullptr)
//         {
//             ptrobj = new singleton(n);
//         }
//         return ptrobj;
//     }
//     void msg(string s)
//     {

//         // cout << "The values of ptrobj is "<<ptrobj << endl;
//         cout << name << endl;
//         cout << s << endl;
//     }
//     singleton(singleton &) = delete;
//     singleton &operator=(const singleton &) = delete;
// };
// singleton *singleton::ptrobj = nullptr;
// int main()
// {
//     singleton *s = singleton::check("fsociety");
//     s->msg("hamza");
//     cout << sizeof(s);
//     singleton *s3 = singleton::check("hamza");

//     if (s == s3)
//         cout << "Same pointers" << endl;
//     else
//         cout << "Different pointers" << endl;
//     return 0;
// }

#include <iostream>
using namespace std;

class logger
{
    static logger *lg;
    static int count;
    logger()
    {
        cout << "obj created" << endl;
    }

public:
    static logger* getinstance()
    {
        if (lg == nullptr)
        {
            lg = new logger();
        }
        return lg;
    }
    void log(string m)
    {
        cout << m << endl;
        count++;
    }
    static int getcount()
    {
        return count;
    }
    static void destroy()
    {
        if (lg != nullptr)
        {
            delete lg;
            lg = nullptr;
        }
    }

    ~logger()
    {
        cout << "Obj destroyed successfully" << endl;
    }
    logger(const logger &) = delete;
    logger& operator=(const logger &) = delete;
};
logger *logger::lg = 0;
int logger::count = 0;
int main()
{
    logger *l = logger::getinstance();
    l->log("hello");
    l->log("fsociety");
    l->log("world");
    cout << "Message logged : " << l->getcount() << endl;
    logger::getinstance()->log("linux");
   logger::destroy();
    return 0;
}