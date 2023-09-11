#include<iostream>
using namespace std;
int main()
{
    int a=3;
    int *b = &a;
    cout<<b<<endl;
    cout<<*b<<endl;
    cout<<&a<<endl;

    // **c is know as pointer to pointer variable that will store the address of the 
    // variable that is already storing address of another variable
   int **c = &b;
   cout<<c;
   cout<<**c;
}