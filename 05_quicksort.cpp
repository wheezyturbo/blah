#include <iostream>
using namespace std;
class quicksort
{
    private:
        int *ar,n;
    public:
        void readar(void)
        {
            cout<<"Enter the no of elements in the array:\n";
            cin>>n;
            ar = new int[n];
            cout<<"Enter the elements of the array:\n";
            for(int i = 0;i<n;i++)
            {
                cin>>ar[i];
            }
        }
        int partition(int low,int high)
        {
            int pivot = ar[high];
            int i = (low-1);
            for(int j = low;j<=high-1;j++)
            {
                if(ar[j]<pivot)
                {
                    i++;
                    swap(ar[i],ar[j]);
                }
            }
            swap(ar[i+1],ar[high]);
            return (i+1);
        }
        void sort()
        {
            sort(0,n-1);
        }
        void sort(int low,int high)
        {
            if(low<high)
            {
                int pi = partition(low,high);
                sort(low,pi-1);
                sort(pi+1,high);
            }
        }
        void printar()
        {
            cout<<"The sorted array is:\n";
            for(int i = 0;i<n;i++)
            {
                cout<<ar[i]<<"\n";
            }
            cout<<endl;
            delete ar;
        }
};
int main()
{
    quicksort a;
    a.readar();
    a.sort();
    a.printar();
}