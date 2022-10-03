#include<bits/stdc++.h>
using namespace std;

/*
int main()


{
    //creation of a stack with stl
    stack <int> s;

    //push operation
    s.push(2);
    s.push(4);
    //pop operation
    s.pop();

    //printing the elements of stack

    cout<<"the element in stack"<< s.top() << endl;

    if(s.empty())
    {
        cout<<"the stack is empty"<< endl;

    }
    else
    {
        cout<<"stack is not empty"<<endl;
    }

    cout<<"size of stack is"<< s.size() <<endl;

    return 0;
}
*/

class Stack
{
    public:
    int top;
    int *arr;
    int size;

    //behaviour
    Stack(int size)
    {
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if(size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout<<"stack overflow"<<endl;
        }

    }

    void pop()
    {
        if(top >= 0)
        {
            top--;
        }

        else
        {
            cout<<"stack underflow"<<endl;
        }

    }

    int peek()
    {
        if(top >= 0)
        {
            return arr[top];
        }
        else 
        {
            cout<< "stack is empty" << endl;
            return -1;
        }
    }

    bool isempty()
    {
        if(top == -1)
        {
            return true;
        }
        else 
        {
            return false;
        }

    }

};

int main()
{
    Stack st(5);

    st.push(22);
    st.push(43);
    st.push(44);

    cout<< st.peek() <<endl;

    st.pop();
    cout << st.peek() <<endl;
}