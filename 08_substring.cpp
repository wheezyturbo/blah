#include <iostream>
#include <string>
using namespace std;
class extractsubstr
{
    private:
    string string,substring;
    public:
    void readstr(void)
    {
        cout<<"Enter the String:\n";
        cin>>string;
    }
    void getsubstr(void)
    {
        int i,n;
        cout<<"Enter the Start Index:\n";
        cin>>i;
        cout<<"Enter the No of Characters:\n";
        cin>>n;
        substring = string.substr(i,n);
        cout<<substring;
    }
};
int main()
{
    extractsubstr a;
    a.readstr();
    a.getsubstr();
    return 0;
}