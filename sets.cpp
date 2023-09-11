#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> set1;
    set1.insert(1);
    set1.insert(2);
    set<int>::iterator it;
    for (it = set1.begin(); it != set1.end(); it++)
    {
        cout<<*it << " ";
    }
    return 0;
}