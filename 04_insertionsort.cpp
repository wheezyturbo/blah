#include <iostream>
using namespace std;
class insertionsort
{
private:
    int n, *ar;

public:
    int count=0;
    void readar(void)
    {
        cout << "Enter the no of elements in the Array:\n";
        cin >> n;
        ar = new int[n];
        cout << "Enter the elements in the array:\n";
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
    }
    void sort(void)
    {
        int key = 0, j = 0;
        for (int i = 1; i < n; i++)
        {
            key = ar[i];
            j = i - 1;
            for (; j >= 0 && ar[j] > key; j--)
            {
                ar[j + 1] = ar[j];
                count++;
            }
            ar[j + 1] = key;
        }
    }
    void printar(void)
    {
        for (int i = 0; i < n; i++)
        {
            cout << ar[i] << "\t";
        }
        cout << endl;
        delete ar;
    }
};
int main()
{
    insertionsort a;
    a.readar();
    a.sort();
    cout<<"The sorted array is:\n";
    a.printar();
    cout<<"No of comparisons = "<<a.count<<endl;
    return 0;
}