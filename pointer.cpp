#include <bits/stdc++.h>
using namespace std;
int main()
/*
{
    int *p;
    int num1 = 5;
    int num2 = 8;

    p = &num1;

    cout<<"address of num 1 is"<< &num1 <<" "<< p<<endl;

    cout<<"number that is stored in pointer"<< num1 << " " << *p<<endl;

    *p = 10;
    cout<<"after storing 10 at p"<<num1<<" "<< *p<<endl;

    p = &num2;
    cout<<"after storing address of num2 on pointer p "<< p <<" "<< &num2<<endl;

    cout<<"now the values that are stored in pointer"<< *p << " "<< num2<<endl;

    *p = 2*(*p);
    cout<<"value after this operation"<< *p << " "<< num2<<endl;

}*/

/*
{

    int *p;
    p = new int;
    *p = 10;
    cout<<*p<<endl;
    p = new int;
    *p = 15;
    cout<<*p;

}
*/


/*
{                // Line 4
    int *p;      // Line 5
    int *q;      // Line 6
    p = new int; // Line 7
    *p = 34;     // Line 8
    cout << "Line 9: p = " << p
         << ", *p = " << *p << endl; // Line 9
    q = p;                           // Line 10
    cout << "Line 11: q = " << q
         << ", *q = " << *q << endl; // Line 11
    *q = 45;                         // Line 12
    cout << "Line 13: p = " << p
         << ", *p = " << *p << endl; // Line 13
    cout << "Line 14: q = " << q
         << ", *q = " << *q << endl; // Line 14
    p = new int;                     // Line 15
    *p = 18;                         // Line 16
    cout << "Line 17: p = " << p
         << ", *p = " << *p << endl; // Line 17
    cout << "Line 18: q = " << q
         << ", *q = " << *q << endl; // Line 18
    delete q;                        // Line 19
    q = NULL;                        // Line 20
    q = new int;                     // Line 21
    *q = 62;                         // Line 22
    cout << "Line 23: p = " << p
         << ", *p = " << *p << endl; // Line 23
    cout << "Line 24: q = " << q
         << ", *q = " << *q << endl; // Line 24
    return 0;                        // Line 25
}

*/