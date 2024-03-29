#include <iostream>
using namespace std;
class polynomialadd
{
private:
    struct polynomial
    {
        int coeff, exp;
    } p1[10], p2[10], p3[20];
    int n1, n2, n3, i, j, k;

public:
    void readpoly(void)
    {
        cout << "Enter the number of coefficients in the first polynomial:\n";
        cin >> n1;
        cout<<"Enter the Coefficients and Exponents for the first polynomial:\n";
        for (i = 0; i < n1; i++)
        {
            cout<<"Enter the Coefficient:\n";
            cin >> p1[i].coeff;
            cout<<"Enter the Exponent:\n";
            cin>>p1[i].exp;
        }
        cout << "Enter the number of coefficients in the second polynomial:\n";
        cin >> n2;
        cout<<"Enter the Coefficients and Exponents for the first polynomial:\n";
        for (j = 0; j < n2; j++)
        {
            cout<<"Enter the Coefficient:\n";
            cin >> p2[j].coeff;
            cout<<"Enter the Exponent:\n";
            cin>>p2[j].exp;
        }
    }
    void addpoly(void)
    {
        i = 0, j = 0, k = 0;
        while (i < n1 && j < n2)
        {
            if (p1[i].exp == p2[j].exp)
            {
                p3[k].coeff = p1[i].coeff + p2[j].coeff;
                p3[k].exp = p1[i].exp;
                i++;
                j++;
            }
            else if (p1[i].exp > p2[j].exp)
            {
                p3[k].coeff = p1[i].coeff;
                p3[k].exp = p1[i].exp;
                i++;
            }
            else if (p1[i].exp < p2[j].exp)
            {
                p3[k].coeff = p2[j].coeff;
                p3[k].exp = p2[j].exp;
                j++;
            }
            k++;
        }
        while (i < n1)
        {
            p3[k].coeff = p1[i].coeff;
            p3[k].exp = p1[i].exp;
            i++;
            k++;
        }
        while (j < n2)
        {
            p3[k].coeff = p2[j].coeff;
            p3[k].exp = p2[j].exp;
            j++;
            k++;
        }
        n3 = k;
    }
    void printsum(void)
    {
        cout << "The sum of the polynomials = \n";
        for (k = 0; k < n3; k++)
        {
            cout << p3[k].coeff << "x^" << p3[k].exp << " + ";
        }
        cout << 0;
    }
};
int main()
{
    polynomialadd a;
    a.readpoly();
    a.addpoly();
    a.printsum();
}