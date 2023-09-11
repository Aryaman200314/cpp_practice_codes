#include<iostream>
using namespace std;
int main()
{
    int x = 9 ;
    int* y = &x;
    cout<< *y;  // this is printing the value that is stored in that memorry location that is stored in y
    cout<< " \n"; // ^ this is also called as derefrencing 
    cout<< y;   // this is printing the add that is stored in y 
    return 0;
}