#include <iostream>
using namespace std;
class cqueueop
{
    private:
        int *cqueue,n,front=-1,rear=-1;
    public:
        void readq(void)
        {
            cout<<"Enter the size of the queue:\n";
            cin>>n;
            cqueue=new int[n];
        }
        void enqueue(void)
        {
            if((front ==0 && rear == n-1) || (front == rear+1))
                cout<<"Queue is full...\n";
            else
            {
                int item;
                cout<<"Enter the element item to be inserted:\n";
                cin>>item;
                if(rear == -1)
                    front = rear = 0;
                else if(rear == n-1)
                    rear = 0;
                else 
                    rear++;
                cqueue[rear]=item;
            }
        }
        void dequeue(void)
        {
            int data;
            if(front == -1)
                cout<<"Queue is empty...\n";
            else
            {
                int data = cqueue[front];
                if(front == rear)
                    front = rear = -1;
                else if(front == n-1)
                    front = 0;
                else 
                    front++;
                cout<<"The item "<<data<<" is removed from the queue...\n";
            }
        }
        void traverse(void)
        {   
            if(rear == -1)
                cout<<"queue is empty...\n";
            else
            {
                int f = front,r = rear;
                cout<<"Queue contents:\n";
                if(f<=r)
                {
                    while(f<=r)
                    {
                        cout<<cqueue[f]<<"\t";
                        f++;
                    }
                    cout<<endl;
                }
                else
                {
                    while(f<=n-1)
                    {
                        cout<<cqueue[f]<<"\t";
                        f++;
                    }
                    f = 0;
                    while(f<=r)
                    {
                        cout<<cqueue[f]<<"\t";
                        f++;              
                    }
                }
                cout<<endl;
            }
        }
};
int main()
{
    cqueueop a;
    a.readq();
    int opt;
    do{
        cout<<"Select the number for your prefered option:\n1. Insert\n2. Delete\n3. Traverse\n4. Exit\n";
        cin>>opt;
        switch(opt)
        {
            case 1:a.enqueue();
            break;
            case 2:a.dequeue();
            break;
            case 3:a.traverse();
            break;
            case 4:cout<<"Terminating...\n";
            break;
            default:cout<<"Enter a valid input!\n";
            break;
        }
    }while(opt!=4);
    return 0;
}