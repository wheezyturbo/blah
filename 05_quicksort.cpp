#include <iostream>
using namespace std;
class sortq
{
    int *a;
    public:
    int n,count = 0;
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
    int partition(int l,int u)
    {
        int pivot = a[u];
        int i = l-1;
        for(int j = l;j<=u;j++)
        {
            if(a[j]<pivot)//for descending order put if(a[j]>pivot)
            {
                i++;
                int temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        i++;
        int temp = a[i];
        a[i]=a[u];
        a[u]=temp;
        return i;
    }
    void sort(int l,int u)
    {
        if(l<=u)
        {
            int p = partition(l,u);
            sort(l,p-1);
            sort(p+1,u);
        }
    }
    void sort()
    {
        sort(0,n-1);
    }
    ~sortq()
    {
        delete []a;
    }
};
int main()
{
    sortq a;
    a.read();
    a.display();
    a.sort();
    a.display();
    return 0;
}