#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,k,n,y,i,c=0;
    cin>>t;
    while(t--)
    {
        c=0;
        cin>>x>>k>>n>>y;
        for(i=0;i<x;i++)
        {
            n=(n+k)%x;
            if(n==y)
            c++;

        }
        if(c==0)
        cout<<"no"<<endl;
        else
        cout<<"yes"<<endl;

    }
    return 0;
}

