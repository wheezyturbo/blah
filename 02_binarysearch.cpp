#include <iostream>
using namespace std;
class binarysearch
{
private:
    int n, i, *ar, count = 0;

public:
    void readar(void)
    {
        cout << "Enter the no of elements in the array:\n";
        cin >> n;
        ar = new int[n];
        cout << "Enter the no of elements in ascending order:\n";
        for (i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
    }

    void search(void)
    {
        int low, high, mid, item;
        cout << "Enter the item to be searched :\n";
        cin >> item;
        low = 0;
        high = n - 1;
        mid = (low + high) / 2;
        while (low <= high)
        {
            count++;
            if (ar[mid] < item)
                low = mid + 1;
            else if (ar[mid] == item)
            {
                cout << "\nThe number, " << item << " found at Position " << mid + 1 << endl;
                cout << "No of comparisons = " << count << endl;
                break;
            }
            else
                high = mid - 1;
            mid = (low + high) / 2;
        }
        if (low > high)
            cout << "Item not found..." << endl;
        cout << endl;
        delete ar;
    }
};
int main()
{
    binarysearch a;
    a.readar();
    a.search();
    return 0;
}