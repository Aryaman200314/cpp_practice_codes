#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"Enter the value oa a and b ";
    cin>>a,b;
    int i,c;

    c = 0;
    for(i = 1 ; i <= a; i ++)
    {
    if  ( a%i == 0 )
    c++;
    }
    if (c==2)
    cout<<"a is prime ", a;

    c = 0;
     for(i = 1 ; i <= b; i ++)
    {
    if  ( b%i == 0 )
    c++;
    }
    
    if (c == 2)
    cout<<"b is prime", b;
    return 0;
}