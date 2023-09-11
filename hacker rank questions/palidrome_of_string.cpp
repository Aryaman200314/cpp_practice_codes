#include <iostream>
using namespace std;

void palidrome()
{
    string a;
    string reverse;
    cout<<"Enter the string data";
    cin>>a;
    for (int i = a.length()-1 ;i>=0 ;i--)
    {
        reverse += a[i]; 
        //cout<<reverse;
    }
    cout<<reverse<<endl;
    if (reverse==a)
    {
        cout<<"This is a palidrome";
    }
    else {
        cout<<"Not a palidrome";
    }

}

int main()
{
    palidrome();
}