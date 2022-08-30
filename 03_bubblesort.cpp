#include <iostream>
using namespace std;
class bubblesort
{
private:
    int n, *ar,count = 0;

public:
    void readar(void)
    {
        cout << "Enter the no of elements in the array :\n";
        cin >> n;
        ar = new int[n];
        cout << "Enter the elements of the array:\n";
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
    }
    void sort(void)
    {
        int i, j;
        for (i = 0; i < n - 1; i++)
            for (j = 0; j < n - i - 1; j++)
                if (ar[j] > ar[j + 1])
                {
                    swap(ar[j], ar[j + 1]);
                    count++;
                    //no of comparisons = no of comparisons? or no of times swapped?
                }
    }
    void printar(void)
    {
        cout<<"The sorted array is :\n";
        for(int i = 0;i < n;i++)
        {
            cout<<ar[i]<<"\t";
        }
        cout<<"\nNo of comparisons "<<count<<endl;
        delete ar;
    }
};
int main()
{
    bubblesort a;
    a.readar();
    a.sort();
    a.printar();
    return 0;
}