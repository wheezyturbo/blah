#include <iostream>
using namespace std;
class bubble
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
        for(int i = 0;i<n-1;i++)
        {
            for(int j = 0;j<n-i-1;j++)
            {
                if(a[j+1]<a[j])
                {
                    int temp = a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
    }
    ~bubble()
    {
        delete []a;
    }
};
int main()
{
    bubble a;
    a.read();
    a.display();
    a.sort();
    a.display();
    return 0;
}