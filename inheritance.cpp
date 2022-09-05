#include<bits/stdc++.h>
using namespace std;
class baseClass
{
public:
    virtual void print();       //virtual using becaouse
    baseClass(int u = 0);

private:
    int x;
};
class derivedClass : public baseClass
{
public:
    void print();
    derivedClass(int u = 0, int v = 0);

private:
    int a;
};
void baseClass::print()
{
    cout << "In baseClass x = " << x << endl;
}
baseClass::baseClass(int u)
{
    x = u;
}
void derivedClass::print()
{
    cout << "In derivedClass ***: ";
    baseClass::print();
    cout << "In derivedClass a = " << a << endl;
}
derivedClass::derivedClass(int u, int v)
    : baseClass(u)
{
    a = v;
}

void callPrint(baseClass &p)
{
    p.print();
}
int main()                   // Line 1
{                            // Line 2
    baseClass one(5);        // Line 3
    derivedClass two(3, 15); // Line 4
    one.print();             // Line 5
    two.print();             // Line 6
    cout << "*** Calling the function "
         << "callPrint ***" << endl; // Line 7
    callPrint(one);                  // Line 8
    callPrint(two);                  // Line 9
    return 0;                        // Line 10
}