#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> deq;
    ostream_iterator<int> screen(cout, " ");
    deq.push_back(13);
    deq.push_back(40);
    deq.push_back(50);
    deq.push_back(60);

    cout<<"the line is";
    copy(deq.begin(), deq.end(), screen);
    cout<<endl;

    deq.push_front(10);
    deq.push_back(100);

    cout<<"next line is";
    copy(deq.begin(), deq.end(), screen);
    cout<<endl;

    deq.pop_back();
    deq.pop_back();

    cout<<"after removing last 2 elements";
    copy(deq.begin(), deq.end(), screen);
    cout<<endl;


    deq.pop_front();
    deq.pop_front();

    cout<<"after removing 2 front elements";
    copy(deq.begin(), deq.end(), screen);
    cout<<endl;

    deque<int>::iterator ndeq;
    ndeq = deq.begin();
    ++ndeq;
    deq.insert(ndeq, 444);
    cout<<"after inserting 444 :"<<" ";
    copy(deq.begin(), deq.end(), screen);
    cout<<endl;
    return 0;




}
