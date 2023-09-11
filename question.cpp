#include <iostream>
#include<bits/stdc++.h>
using namespace std;

struct Double
{
int value;
int fre;
};
bool cmp(Double d1, Double d2)
{
	if (d1.fre != d2.fre)
	{
		return d1.fre > d2.fre;
	}
	if (d1.value != d2.value)
	{
		return d1.value < d2.value;
	}
}
int main() {
	int T;
	// int i;
	int arr[T];
    int fre[69] = {0};
	for (int i = 0 ; i < T; i++)
	{
		cin>>arr[i];
	}
	for (int i = 0 ; i < T ; i++)
    {
        fre[arr[i]]++;
    }
    vector<Double> v;
    for (int i = 0; i<T;i++)
    {
        Double d;
        d.value = arr[i];
        d.fre = fre[arr[i]];
        v.push_back(d);
    }
    sort(v.begin(), v.end(),cmp);
    for (int i = 0 ; i <T ; i++)
    {
        cout << v[i].value<< " ";
    }
    return 0;
}