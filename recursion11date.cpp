#include<iostream>
using namespace std;
int cnt =0;
void func(int* arr, int N , int remSum, int i )
{
	if (i==N)
	{
		if (reSum == 0)
		cnt++;
		return;
	}
	func(arr, N, remSUm - arr[i], i+1);
	func(arr, N , remSum, i+1);
	
}
int main()
{
	int N , sum;
	cin>> N >> sum;
	int arr[N];
	for(int i =0 ; i <N ; i++);
	cin >> arr[i];
	func(arr, N, sum, 0 );
	cout << cnt;
	return 0;
}
