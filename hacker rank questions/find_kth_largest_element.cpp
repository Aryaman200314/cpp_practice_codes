#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int kthlargestelement()
{   
    vector<int> nums;
    char continnue_type='y';

    while (continnue_type == 'y' || continnue_type == 'Y')
    {
    for(int i = 0 ; ; i++)
    {   

       int n,c=0;
        cout<<"Enter the number want to enter in the array at index number: " <<c << endl;
        cin>>n;
        nums.push_back(n);
        c ++;

        cout<<"Do you want to continue adding elemnets in tha array(y/n)";
        cin>>continnue_type;
    }
    }
        vector<int> nums_sorted;
        sort(nums.begin(), nums.end());
        int k;
        cout<<"Enter the kth biggest number want to search: ";
        cin>>k;
        cout<<nums[nums.size()-k];
}

int main()
{
    kthlargestelement();
}