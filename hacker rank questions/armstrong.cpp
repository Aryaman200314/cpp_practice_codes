#include<iostream>
using namespace std;
int main()
{
    int n,num;
    int sum;
    int count=0;
    cout<<"Enter a number ";
    cin>>n;
    num=n;
    while (num!=0)
    {
        
        num = num/10;
        count++;
        
    }
    cout<<count;
    while (num!=0)
    {
        int store = num%10;
         sum = sum + (store * store * store);
        num=num/10;
    }
    cout<<sum;
    if (num==sum)
    {
        cout<<"this is an armstrong number ";
    }
    else 
    {
        cout<<"not an armstrong number ";
    }
    return 0;
}