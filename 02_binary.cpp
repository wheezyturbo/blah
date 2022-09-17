#include <iostream>
using namespace std;
class binary
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
    void sort()
    {
        for(int i = 0;i<n-1;i++)
        {
            for(int j = i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    int temp = a[j];
                    a[j]=a[i];
                    a[i]=temp;
                }
            }
        }
    }
    void search()
    {
        int item, comp = 0;
        cout << "Enter the item to be searched:\n";
        cin >> item;
        int start = 0, end = n - 1;
        while (start <= end)
        {
            comp++;
            int mid = (start + end) / 2;
            if (a[mid] == item)
            {
                cout << item << " is found "<< endl;
                cout<<"no of comparisons : "<<comp<<endl;
                return;
            }
            if (item < a[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        cout<<item<<" is not found in the array!\n";
    }
    ~binary()
    {
        delete []a;
    }
};
int main()
{
    binary a;
    a.read();
    a.sort();
    a.search();
    return 0;
}