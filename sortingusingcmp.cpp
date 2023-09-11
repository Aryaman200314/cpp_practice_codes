
#include <bits/stdc++.h>
using namespace std;
struct Triplet                          
{
    int val;
    int fre;
    int idx;
};
bool cmp(Triplet t1, Triplet t2)        
{
    if(t1.fre != t2.fre)                
    {
        return t1.fre < t2.fre;
    }
    if(t1.val != t2.val)
    {
        return t1.val < t2.val;
    }
    return t1.idx < t2.idx;
}
int main()
{
    int n = 5;
    int arr[] = {5, 2, 3, 5, 2};        
    int fre[101] = {0};
    for (int i = 0; i < n;i++)          
    {
        fre[arr[i]]++;
    }
    vector<Triplet> v;                   
    for (int i = 0; i < n;i++)
    {
        Triplet t;                       
        t.val = arr[i];                  
        t.fre = fre[arr[i]];
        t.idx = i;
        v.push_back(t);                  
    }
    sort(v.begin(), v.end(),cmp);        
    for (int i = 0; i < n;i++)
    {
        cout << v[i].val << " ";         
    }
    return 0;
}