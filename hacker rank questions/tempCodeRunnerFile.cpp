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