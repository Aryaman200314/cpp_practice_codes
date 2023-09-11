#include<iostream>
using namespace std;
int main()
{
    int x = 5 ,  y = 6;
    int* z  = &x;
    cout<<x,y,*z;
    *z = 0;
    cout<<x,y,*z;
    return 0;
}