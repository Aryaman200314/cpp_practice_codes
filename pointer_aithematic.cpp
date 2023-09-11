#include<iostream>
using namespace std;
int main()
{
    int num=0;
    int *ptr = &num;
    cout<<num<<endl;
    cout<<*ptr<<endl;
    cout<<&num<<endl;
    cout<<ptr<<endl;



    cout<<"--------------"<<endl;
    
    
    int a = 5 ;
    int *p = &a;
    cout<<p<<endl;
    cout<<*p<<endl;


    cout<<"----------------"<<endl;
   
    int *x = p;
    cout<<*x<<endl;
    *x = *x +1; 
    cout<<*x<<endl;
    cout<<*p<<endl;
   

}