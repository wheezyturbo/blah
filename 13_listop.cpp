#include <iostream>
using namespace std;
class singlylinkedlist
{
    private:
        struct node
        {
            int data;
            struct node *link;
        };
    public:
        struct node *head =NULL;
        void displaylist(void)
        {
            struct node *ptr = head;
            cout<<"\n[ ";
            while(ptr!=NULL)
            {
                cout<<ptr->data;
                ptr = ptr->link;
            }
            cout<<" ]"<<endl;
        }
        void insert(void)
        {
            int item;
            struct node * ptr = new struct node;
            cout<<"Enter the item to be inserted:\n";
            cin>>item;
            struct node *temp;
            temp->data = item;
            temp->link = NULL;
            ptr = head;
            if(ptr = NULL)
            {
                head = temp;
                displaylist();
            }
            else
            {
                while(ptr->link!=NULL)
                {
                    ptr = ptr->link;
                }
                ptr->link = temp;
            }
        }
};
int main()
{
    singlylinkedlist a;
    int opt;
    do
    {
        cout<<"Select the appropriate option:\n1. Display List\n2. Insert items\n3. Quit\n";
        cin>>opt;
        switch(opt)
        {
            case 1: a.displaylist();
            break;
            case 2: a.insert();
            break;
            case 3: cout<<"Terminating...\n";
            break;
            default: cout<<"Enter a valid option...\n";
        }
    } while (opt!=3);
    return 0;
}
