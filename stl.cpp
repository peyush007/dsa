 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
    vector<int> intlist;

    intlist.push_back(30);
    intlist.push_back(60);
    intlist.push_back(90);
    intlist.push_back(120);

    cout<<"first line is";
    for(int i=0;i<4;i++)
    cout<<intlist[i]<<" ";
    cout<<endl;

    for(int i=0 ; i<4; i++)
    intlist[i]*= 2;

    cout<<"next line is";
    for(int i=0;i<4;i++)
    cout<<intlist[i]<<" ";
    cout<<endl;

    vector<int>::iterator listit;

    cout<<"next line is";
    for(listit = intlist.begin(); listit != intlist.end(); listit++)
    cout<<*listit<<" ";
    cout<<endl;

    listit= intlist.begin();
    listit++;
    listit++;
    intlist.insert(listit, 80);
    cout<<"next line is";
    for(listit = intlist.begin(); listit != intlist.end(); listit++)
    cout<<*listit <<" ";
    cout<<endl;
    return 0;

 }