#include <iostream>
using namespace std;

void basic_searching ()
{
    int n,h;

   
    cout<<"Enter the size";
    cin>>n;
    int array[n];
    for(int i = 0 ; i<n ; i++)
    {
        cin>>array[i];
    }
    cout<<"Enter the element to search";
    cin>>h;

    for(int j = 0; j<n;j++)
    {
        if(array[j]==h)
        {
            cout<<"Element is at "<< j <<" index of the array";
        }
    }
        
    // int f=0;
    // if (array[f]==h)
    // {
    //     cout<<"Element is at "<< f <<" index of the array";
    //     f++;
        
    // }
    // else{
    //     cout<<"NO SUCH ELEMENT IN ARRAY";
    // }
  
}


void sorting ()
{
    int n;
    cout<<"Enter the size";
    cin>>n;
    int array[n];
    for(int i = 0 ; i<n ; i++)
    {
        cin>>array[i];
    }
    for(int j = 0; j<n;j++)
    {
        if(array[j]>array[j+1])
        {
            int x;
            array[]
        }
    }
}

int main()
{
    int n;
    cout<<"Enter 1 for searching and 2 for sorting ";
    cin>>n;
    basic_searching();
    sorting();
}