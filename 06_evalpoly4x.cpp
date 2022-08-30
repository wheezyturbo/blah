#include <iostream>
#include <cmath>
using namespace std;
class eval4x
{
    private:
        int n,value;
        struct poly
        {
            int coeff;
            int exp;
        }p1[20];
    public:
        void readpoly(void)
        {
            cout<<"Enter the no of terms in the polynomial:\n";
            cin>>n;
            cout<<"Enter the Coefficient and Exponent:\n";
            for(int i = 0;i<n;i++)
            {
                cout<<"Enter the Coefficient:\n";
                cin>>p1[i].coeff;
                cout<<"Enter the Exponent:\n";
                cin>>p1[i].exp;
            }

        }
        void eval(void)
        {
            int sum=0,x;
            cout<<"Enter the value of x for evaluating:\n";
            cin>>x;
            for(int i = 0;i<n;i++)
            {
                sum +=p1[i].coeff*pow(x,p1[i].exp);
            }
            cout<<"Answer = "<<sum<<endl;
        }
};
int main()
{
    eval4x a;
    a.readpoly();
    a.eval();
    return 0;
}