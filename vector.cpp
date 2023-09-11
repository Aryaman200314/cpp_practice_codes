#include<iostream>
#include<vector>

using namespace std;

void Print(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i];
    }
    cout<<endl;
}
int main()
{
    vector<int> vec;
    int size;
    int e;
    cout<<"Enter the size of the vector.";
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the elemets to add in the vector \n";
        cin>>e;
        vec.push_back(e);
       
    }
    Print(vec);
    return 0;
}