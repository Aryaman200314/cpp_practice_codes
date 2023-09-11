

#include <iostream>
#include<vector>
using namespace std;

class Solution{
    public:

    int doUnion(int a[], int n, int b[], int m)  {
        //code here
       int count_a = 0;
       int count_b = 0;
       vector<int> return_array;
       if(a[count_a] == b[count_b])
       {
           return_array.push_back(count_a);
           count_a++;
           count_b++;
       }
       else 
       {
           return_array.push_back(count_a);
           return_array.push_back(count_b);
           count_a++;
           count_b++;
       }
       return return_array.size();
       
    }
};



int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
        cout<<"Enter size 1";
      
        cin >> n;
          cout<<"Enter size 2";
        cin>>m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}
