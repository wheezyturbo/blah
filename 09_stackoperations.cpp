#include <iostream>
using namespace std;
class stackop
{
private:
    int n, *stack, top = -1;

public:
    void readstack(void)
    {
        cout << "Enter the no of elements in the stack:\n";
        cin >> n;
        stack = new int[n];
    }
    void push(void)
    {
        int val;
        if (top >= n - 1)
            cout << "Stack Overflow...\n\n";
        else
        {
            top++;
            cout << "Enter the item to be pushed into the stack:\n";
            cin >> val;
            stack[top] = val;
            cout << "The item " << val << " has been pushed into the stack...\n\n";
        }
    }
    void pop(void)
    {
        if (top <= -1)
            cout << "Stack Underflow...\n\n";
        else
        {
            cout << "The item " << stack[top] << " has been popped from the stack...\n\n";
            top--;
        }
    }
    void traverse(void)
    {
        cout << "Stack :\n";
        if (top == -1)
        {
            cout << "Stack Empty...\n\n";
        }
        else
        {
            for (int i = 0; i <= top; i++)
            {
                cout << stack[i] << "\t";
            }
            cout << "\n\n";
        }
    }
};
int main()
{
    stackop a;
    int opt;
    a.readstack();
    do
    {
        cout << "Enter the number for the corresponding operation to perform:\n1. Push\n2. Pop\n3. Traverse\n4. Exit\n";
        cin >> opt;
        if (opt == 1)
            a.push();
        else if (opt == 2)
            a.pop();
        else if (opt == 3)
            a.traverse();
        else if (opt == 4)
        {
            cout << "Terminating...\n";
        }
        else
            cout << "Enter a valid input and try again\n\n";
    } while (opt != 4);
}