#include <iostream>
using namespace std;
class queueop
{
    private:
        int *queue,n,front=-1,rear=-1;
    public:
        void readq(void)
        {
            cout<<"Enter the size of the queue:\n";
            cin>>n;
            queue=new int[n];
        }
        void enqueue(void)
        {
            int item;
            if(rear == n-1)
                cout<<"Queue is full...\n";
            else
            {
                if(front ==-1)
                    front = 0;
                cout<<"Enter the item to be inserted:\n";
                cin>>item;
                rear++;
                queue[rear]=item;
            }
        }
        void dequeue(void)
        {
            int data;
            if(front == -1)
                cout<<"Queue is empty...\n";        
            else 
            {
                data = queue[front];
                if(front == rear)
                    front = rear = -1;
                else 
                    front++;
                cout<<"The item "<<data<<" is removed from the queue\n";
            }
        }
        void traverse(void)
        {   
            if(rear == -1)
                cout<<"queue is empty...\n";
            else
            {
                cout<<"Queue contents:\n";
                for(int i = front;i<=rear;i++)
                    cout<<queue[i]<<"\t";
                cout<<endl;
            }
        }
};
int main()
{
    queueop a;
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