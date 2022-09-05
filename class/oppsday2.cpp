//encapsulation - wrapping up data member and fucntions i.e information hiding
//fully encapsulated class - all data members are private
//we can make a class read only
//code readability, unit testing


//inheritance = 

#include<bits/stdc++.h>
using namespace std;

class student
{
    private:
    string name;
    int age;
    int height;

    public:
    int getage()
    {
        return this -> age;
    }
};
int main()
{
    student first;

    cout<<"sab sahi chal rha hai"<<endl;
    return 0;
}