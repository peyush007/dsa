
//inline function are used to reduce the function calls overhead

//when we call a incline function the function is automatically replaced by its body

#include<bits/stdc++.h>
using namespace std;

inline int getmax(int &a,int &b)
{
    return (a>b) ? a : b;
    //body of the function

}

int main()
{
    int a = 1, b = 2;
    int ans = 0;

    ans = getmax(a , b);
    cout<<ans<<endl;

    a += 3;
    b += 1;

    ans = getmax(a,b);
    cout<<ans<<endl;

    return 0;
}