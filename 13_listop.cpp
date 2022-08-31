#include <iostream>
using namespace std;
class node
{
private:
    int data;
    node *link;
    node *head;

public:
    node()
    {
        head = NULL;
        data = 0;
        link = NULL;
    }
    void insertnode()
    {
        node *temp = new node;
        cout << "Enter the item to be inserted:\n";
        cin >> temp->data;
        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            node *ptr = head;
            while (ptr->link != NULL)
            {
                ptr = ptr->link;
            }
            ptr->link = temp;
        }
    }
    void printll(void)
    {
        node *ptr = head;
        if (head == NULL)
        {
            cout << "List empty:\n";
        }
        else
        {
            cout << "[ ";
            while (ptr != NULL)
            {
                cout << ptr->data << " ";
                ptr = ptr->link;
            }
            cout << "]" << endl;
        }
    }
    void deleteitem(void)
    {
        int x;
        cout << "Enter the item to be deleted:\n";
        cin >> x;
        deleteNode(&head, x);
    }
    void deleteNode(node **head, int item)
    {
        node *ptr = *head;
        node *prev = NULL;

        if (ptr != NULL && ptr->data == item)
        {
            *head = ptr->link;
            delete ptr;       
            return;
        }
        else
        {
            while (ptr != NULL && ptr->data != item)
            {
                prev = ptr;
                ptr = ptr->link;
            }
            if (ptr == NULL)
                return;

            prev->link = ptr->link;
            delete ptr;
        }
    }
};
int main()
{
    node a;
    int opt;
    do
    {
        cout << "Enter the option \n1. Insert\n2. Traverse \n3. Delete\n4. Exit\n";
        cin >> opt;
        switch (opt)
        {
        case 1:
            a.insertnode();
            break;
        case 2:
            a.printll();
            break;
        case 3:
            a.deleteitem();
            break;
        case 4:
            cout << "Terminating...\n";
            break;
        default:
            cout << "Enter a valid option...\n";
        }
    } while (opt != 4);
    return 0;
}
