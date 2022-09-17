#include <iostream>
using namespace std;
class stack
{  
    int a[50],n,top;
    public:
    stack()
    {
        cout<<"Enter the size of the stack:\n";
        cin>>n;
        top = -1;
    }
    void push(int item)
    {
        if(top == n-1)
        {
            cout<<"Stack Overflow!\n";
            return;
        }
        a[++top]=item;
        cout<<item<<" pushed into the stack\n";
    }
    int pop()
    {
        int data;
        if(top == -1)
        {
            cout<<"Stack underflow!\n";
            return NULL;
        }
        data = a[top];
        top--;
        return data;
    }
    void display()
    {
        if(top == -1)
        {
            cout<<"Stack is empty!\n";
            return;
        }
        cout<<"***DISPLAYING STACK***\n\n";
        for(int i = top;i>=0;i--)
        {
            cout<<a[i]<<"\t";
        }
        cout<<endl<<endl;
    }
};
int main()
{
    stack a;
    int op,n;
    char ch;
    do
    {
        cout<<"***MENU***\nEnter your choice\n1)Push\n2)Pop\n3)Display\n";
        cin>>op;
        switch (op)
        {
        case 1:cout<<"Enter the item to be pushed in to the stack:\n";
            cin>>n;
            a.push(n);
            break;
        case 2:
            int item;
            item = a.pop();
            if(item == NULL)
            {
                cout<<"Stack Empty!\n";
                break;
            } 
            cout<<item<<" Was popped from the stack\n";
            break;
        case 3:
            a.display();
            break;
        
        default:
            break;
        }
        cout<<"Do you want to continue (y/n):\n";
        cin>>ch;
    } while (ch == 'y' || ch == 'Y');
    return 0;
}