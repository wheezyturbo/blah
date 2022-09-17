#include <iostream>
using namespace std;
class queue
{
    int a[50],n,front,rear;
    public:
    queue()
    {
        cout<<"Enter the size of the queue:\n";
        cin>>n;
        front = -1;
        rear = -1;
    }
    void ins()
    {
        int item;
        if(rear == n-1)
        {
            cout<<"Queue is full!\n";
            return;
        }
        cout<<"Enter the element to be inserted:\n";
        cin>>item;
        a[++rear]=item;
        if(front == -1)
            front = 0;
    }
    int del()
    {
        int item;
        if(front == -1)
        {
            cout<<"Queue is empty!\n";
            return NULL;
        }
        item = a[front];
        if(front == rear)
        {
            front = -1;
            rear = -1;
        }
        else   
            front++;
        return item;
        
    }
    void display()
    {
        if(front == -1)
        {
            cout<<"Queue is empty!\n";
            return;
        }
        cout<<"***Displaying Queue***\n\n";
        for(int i = front;i<=rear;i++)
        {
            cout<<a[i]<<"\t";
        }
        cout<<endl<<endl;
    }

};
int main()
{
    int op,item;
    char ch;
    queue a;
    do
    {
        cout<<"***Menu***\nEnter your choice\n1)Insert\n2)Delete\n3)Display\n";
        cin>>op;
        switch (op)
        {
            case 1:
                a.ins();
                break;
            case 2:
                item = a.del();
                if(item == NULL)
                    break;
                else
                    cout<<item<<" has been removed from the queue\n";
                    break;
            case 3:
                a.display();
                break;
        }
        cout<<"Do you want to continue(y/n)\n";
        cin>>ch;
    } while (ch == 'y'|| ch =='Y');
    
}