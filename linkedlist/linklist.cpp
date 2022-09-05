//lisked list is a collection of node
//node contain a data and address of next element


#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node *next;

    node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }

    ~node()
    {
        int value = this -> data;
        //memory free
        if(this -> next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout<<"memory is free for node with data"<< value <<endl;
    }
};


void insertathead(node * &head, int d)
{
    //new node create
    node *temp = new node(d);
    temp ->next = head;
    head = temp;
}

void insertattail(node * &tail, int d)
{
    //new node create
    node *temp = new node(d);
    tail -> next = temp;
    tail = temp;

}

void insertatpostion(node *&head, node * &tail, int position, int d)
{
    //insert at start
    if(position == 1)
    {
        insertathead(head, d);
        return;
    }


    node * temp = head;
    int cnt = 1;

    while(cnt != position - 1)
    {
        temp = temp -> next;
        cnt++;
    }

    //insert at tail
    if(temp -> next == NULL)
    {
        insertattail(tail,d);
        return;
    }
    
    node *nodetoinsert = new node(d);
    nodetoinsert -> next = temp -> next;
    temp -> next = nodetoinsert;
    

}

void deletenode(int position, node * &head)
{
    //deletion of first node
    if(position == 1)
    {
        node *temp =head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;

    }
    else 
    {
        node *curr = head;
        node *prev = NULL;

        int cnt = 1;
        while(cnt  < position)
        {
            prev = curr;
            curr = curr -> next;
            cnt ++;
        }

        prev -> next =curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}


void print(node * &head)
{
    node *temp = head;
    while(temp != NULL)
    {
        cout<< temp -> data << " ";
        temp = temp -> next;
    }
    cout<<endl;
}






int main()
{
    //create a new node
    node *node1 = new node(10);
    //cout<<node1 -> data<<endl;
    //cout<<node1 -> next <<endl;

    //head pointer to node1
    node * head = node1;
    node * tail = node1;
    print(head);

    insertathead(head, 12);
    print(head);

    insertathead(head, 15);
    print(head);

    insertattail(tail, 19);
    print(head);

    insertattail(tail, 24);
    print(head);

    insertatpostion(head,tail, 3,76);
    print(head);

    cout<<head->data<<endl;
    cout<<tail->data<<endl;

    deletenode(3,head);
    print(head);

    return 0;
}