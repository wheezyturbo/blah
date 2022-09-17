#include <iostream>
using namespace std;
class linear
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
    void search()
    {
        int item, i;
        int comp=0; // for storing no of comparisons
        cout << "Enter the item to be searched:\n";
        cin >> item;
        for (i = 0; i < n; i++)
        {
            comp++;
            if (a[i] == item)
            {
                cout << item << " found! at index " << i << "\n";
                cout << "No of comparisons : " << comp << endl;
                return;
            }
        }
        if (i == n)
        {
            cout << item << " is not found in the array!\n";
        }
    }
    ~linear()
    {
        delete []a;
    }
};
int main()
{
    linear a;
    a.read();
    a.search();
    return 0;
}