    #include<iostream>
    using namespace std;
    int main()
    {   int n;
        cout<<"Enter the size of the array: ";
        cin>>n;
        int a[n];

        for(int i = 0 ; i<n ; i++)
        {
            cin>>a[i];
        }
       
   
        for (int x = 0 ; x < n;x++)
        {
            int l, r;
            l = a[x];
            r = a[n - 1];
            if (l<r)
            {
                l++;
                r--;
            }
            else if(l>r)
            {
               int temp;
               temp = a[x];
                a[x] = r;
                r = temp;
                l++;
                r--;
            }
            else {
                l++;
                r--;
            }

            
        }

        for (int z = 0 ; z < n ; z++)
        {
            cout<<a[z];
        }
        return 0;
    }