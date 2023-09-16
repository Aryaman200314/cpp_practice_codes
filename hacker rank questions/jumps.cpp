//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution
{
public:
    int minJumps(int arr[], int n)
    {
        // Your code here
        int jumps = 1;
        int mrp = arr[0];
        int njl = arr[0];
        if (arr[0] == 0)
        {
            return -1;
        }
        else if (n <= 1)
        {
            return 0;
        }
        int i = 1;
        while (i < n)
        {
            if (i == n - 1)
                return jumps;
            mrp = max(mrp, i + arr[i]);
            njl--;

            if (njl == 0)
            {
                jumps++;
                if (mrp == i)
                {
                    return -1;
                }
                njl = mrp - i;
            }
        }
        i++;
        return 0;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, j;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)

            cin >> arr[i];
        Solution obj;
        cout << obj.minJumps(arr, n) << endl;
    }
    return 0;
}

// } Driver Code Ends