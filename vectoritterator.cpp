#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> intlist;
    intlist.push_back(13);
    intlist.push_back(75);
    intlist.push_back(28);
    intlist.push_back(35);

    cout<<"line 11: list element: ";
    for(int i = 0; i<4 ; i++)
        cout << intlist[i]<<" ";
        cout<<endl;

    for(int i = 0; i<4; i++)
    intlist[i] *= 2;
    cout<<"line 17 : list element";
    for(int i = 0; i<4; i++)
    cout<<intlist[i]<<" ";
    cout<<endl;

    vector<int>::iterator listit;

    cout<<"line 22 : list element:";
    for(listit = intlist.begin(); listit != intlist.end(); ++listit)
    cout<<*listit<<" ";
    cout<<endl;
    
    listit = intlist.begin();
    ++listit;
    ++listit;
    intlist.insert(listit, 80);

    cout<<"line 30 : list elements:";
    for(listit = intlist.begin(); listit != intlist.end(); ++listit)
    cout<<*listit<<" ";
    cout<<endl;
    return 0;
}