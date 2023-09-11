#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool myCmp(int a , int b){
	return a>b;
}
int main()
{
vector<int> v = {-9,11,0,3,-4,3,-7};
 sort (v.begin(),v.end());
 for (int i =0 ; i < v.size() ; i++)
 {
 	cout << v[i] << " ";
 }
 return 0;
}