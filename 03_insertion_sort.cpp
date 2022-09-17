#include <iostream>
using namespace std;
class isort
{
    int *a;

public:
    int n;
    void read()
    {
        cout << "Enter the size of the array :\n";
        cin >> n;
        a = new int[n];
        cout << "Enter the elements of the array:\n";
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
    }
    void display()
    {
        cout << "The elements in the array are:\n";
        for (int i = 0; i < n; i++)
        {
            cout<<a[i]<<"\t";
        }
        cout<<endl;
    }
    void sort()
    {
        for(int i = 1;i<n;i++)
        {
            int key = a[i];
            int j = i-1;
            while(key<a[j]&&j>=0)
            {
                a[j+1]=a[j];
                j--;
            }
            a[j+1]=key;
        }
    }
    ~isort()
    {
        delete[] a;
    }
};
int main()
{
    isort a;
    a.read();
    a.display();
    a.sort();
    a.display();
    return 0;
}