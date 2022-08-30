#include <iostream>

using namespace std;
class lsearch
{
private:
    int n, *ar, i, item;

public:
    void readar(void)
    {
        cout << "Enter the number of elements in the array:\n";
        cin >> n;
        ar = new int[n];
        cout << "Enter the elements in the array:\n";
        for (i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
    }
    void search(void)
    {
        cout << "Enter the item to be searched:\n";
        cin >> item;
        for (i = 0; i < n; i++)
        {
            if (ar[i] == item)
            {
                cout << "The item " << item << " is found at " << endl;
                cout << "No of comparisons: " << i + 1 << endl;
                break;
            }
        }
        if (i >= n)
            cout << "Item not found..." << endl;
        delete ar;
    }
};
int main()
{
    lsearch a;
    a.readar();
    a.search();
    return 0;
}