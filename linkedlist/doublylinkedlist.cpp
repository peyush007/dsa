#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node * next;
    node * prev;

    //constructor
    node(int d)
    {
        this -> data = d;
        this -> prev = NULL;
        this -> next= NULL;
    }

    // destructor
    ~node()
    {
        int val = this -> data;
        if(next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout<<"memory is free for the node with data"<< val <<endl;
    }
};

//traversing a linked list
void print(node *head)
{
    node *temp = head;

    while(temp != NULL)
    {
        cout<< temp -> data<<" ";
        temp = temp -> next;

    }
    cout<< endl;

}

//gives lenght of the linked list
int getlenght(node* head)
{
    int len = 0;
    node *temp = head;
    while(temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void insertathead(node * &head,int d)
{
    node *temp = new node(d);
    temp -> next = head;
    head ->prev = temp;
    head = temp;
}

void insertattail(node * &tail, int d)
{
    node *temp = new node(d);
    tail -> next = temp;
    temp -> prev = temp;
    tail = temp;

}

void insertatposition(node * &head, node * &tail, int position, int d)
{
    if(position == 1)
    {
        insertathead(head, d);
        return;
    }

    node *temp = head;
    int cnt = 1;

    while(cnt < position - 1)
    {
        temp = temp -> next;
        cnt++;
    }
    if(temp -> next == NULL)
    {
        insertattail(tail, d);
        return;
    }

    node *nodetoinsert = new node(d);

    nodetoinsert -> next = temp -> next;
    temp -> next -> prev = nodetoinsert;
    temp -> next = nodetoinsert;
    nodetoinsert -> prev = temp;

}

void deletenode(int position, node * &head)
{
    if(position == 1)
    {
        node *temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;
    }

    else 
    {
        
    }
}


int main()
{
    node *node1 = new node(10);
    node *head = node1;
    node *tail = node1;

    print(head);
    cout<< getlenght(head)<< endl;

    insertathead(head , 15);
    print(head);
    insertathead(head , 13);
    print(head);
    insertathead(head , 8);
    print(head);

    insertattail(tail, 45);
    print(head);

    insertattail(tail, 75);
    print(head);

    insertatposition(head , tail, 2, 100);
    print(head);

    insertatposition(head , tail, 8, 300);
    print(head);
}