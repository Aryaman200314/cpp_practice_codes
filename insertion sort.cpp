#include<iostream>
int main()
{
    int n;
    int arr[n];
    for(int i = 1 ; i < n ; i++)
    {
        int j;
        j = i;
        while (j > 0 && arr[j] < arr[j-1])
        {
            //swap
            j--;
        }

    }
}