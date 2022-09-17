#include <iostream>
using namespace std;
class poly
{
    int coeff[10], exp[10], n;

public:
    void read()
    {
        cout << "Enter the no of terms in the polynomial:\n";
        cin >> n;
        cout << "Enter the polynomial:\n";
        for (int i = 0; i < n; i++)
        {
            cout << "\tEnter the coefficient: ";
            cin >> coeff[i];
            cout << "\tEnter the exponent: ";
            cin >> exp[i];
        }
    }
    void display()
    {
        for (int i = 0; i < n; i++)
        {
            if (exp[i] != 0)
            {
                cout << coeff[i] << " x^" << exp[i];
            }
            else
                cout << coeff[i];
            if (i != n - 1)
                cout << " + ";
        }
        cout << endl;
    }
    poly operator+(poly a)
    {
        poly b;
        int i = 0, j = 0, k = 0;
        while (i < n && j < a.n)
        {
            if (exp[i] == a.exp[j])
            {
                b.coeff[k] = coeff[i] + a.coeff[j];
                b.exp[k] = exp[i];
                i++;
                j++;
            }
            else if (exp[i] > a.exp[j])
            {
                b.coeff[k] = coeff[i];
                b.exp[k] = exp[i];
                i++;
            }
            else
            {
                b.coeff[k] = a.coeff[j];
                b.exp[k] = a.exp[j];
                j++;
            }
            k++;
        }
        while (i < n)
        {
            b.coeff[k] = coeff[i];
            b.exp[k] = exp[i];
            i++;
            k++;
        }
        while (j < a.n)
        {
            b.coeff[k] = a.coeff[j];
            b.exp[k] = a.exp[j];
            j++;
            k++;
        }
        b.n = k;
        return b;
    }
};
int main()
{
    poly a, b, c;
    cout << "Enter the first polynomial:\n";
    a.read();
    cout << "Enter the second polynomial:\n";
    b.read();
    cout<<"The first polynomial:\n";
    a.display();
    cout<<"The second polynomial:\n";
    b.display();
    c = a + b;
    cout << "Sum is :\n";
    c.display();
    return 0;
}