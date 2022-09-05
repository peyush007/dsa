#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node * next;

    //constructor
    node(int d)
    {
        this -> data = d;
        this -> next = NULL;
    }

    ~node()
    {
        int value = this -> data;
        if(this -> next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout<<"memory is free for node with data"<< value <<endl;
    }
    
};

void insertnode(node *&tail, int element,  int d)
{
    //assuming that the element is present in the linked list

    //the list is empty
    if(tail == NULL)
    {
        node *newnode = new node(d);
        tail = newnode;
        newnode -> next = newnode;
    }

    else
    {
        //non empty list
        node *curr = tail;
        while(curr -> data != element)
        {
            curr = curr -> next;
        }

        node *temp = new node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
    }
}


void deletenode(node *& tail, int value)
{
    if(tail == NULL)
    {
        cout<< " list is empty please check again" << endl;
        return;
    }
    else 
    {
        //non empty list

        node *prev = NULL;
        node *curr = prev -> next;

        while(curr -> data != value)
        {
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;
        if(curr == prev)
        {
            tail = NULL;
        }
        else if(tail == curr)
        {
            tail = prev;
        }
        curr -> next = NULL;
        delete curr;
    }

}

void print(node *tail)
{
    node *temp = tail;

    do
    {
        cout<<tail -> data << " ";
        tail = tail -> next;
    }
    while(tail != temp);
    cout<<endl;
}



int main()
{
    node *tail = NULL;
    insertnode(tail, 5 , 3);
    print(tail);
 
    insertnode(tail, 3 , 5);
    print(tail);

    insertnode(tail, 5 , 7);
    print(tail);

    insertnode(tail, 7 , 9);
    print(tail);

    insertnode(tail, 5 , 6);
    print(tail);

    insertnode(tail, 3 , 4);
    print(tail);

    deletenode(tail, 3);
    print(tail);

    return 0;
}