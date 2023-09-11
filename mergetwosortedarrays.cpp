// this is the code for merge process
#include<iostream>
int main()
{
    int m,n,l;
    l = m + n;

    int A[m] = {1,2,3,4};
    int B[n] = {5,6,7,8};
    int C[l] = {};

    int i =0;
    int j =0;
    int k = 0;
    for (;i<m && j <n;)
    {
        if (A[i] < B [j])
        {
            C[k++] = A [i++];
        }
        else {
              C[k++] = B [j++];
        }

        for (;i<m;)
        {
            C[k++] = A[i++];
        }

        for (;j < n; )
        {
            C[k++] = B[j++];
        }
    }
    for(int c = 0 ; c < l ; i++)
    {
        cout << C[i] << "\n";
    }


    return 0;
}