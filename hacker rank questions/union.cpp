

#include <iostream>
#include<vector>

using namespace std;

class Solution{
    public:

 

int doUnion(int a[], int n, int b[], int m) {
    set<int> unionSet; // Use a set to store unique elements in the union

    for (int i = 0; i < n; i++) {
        unionSet.insert(a[i]);
    }

    for (int i = 0; i < m; i++) {
        unionSet.insert(b[i]);
    }

    return unionSet.size(); // Return the size of the set, which represents the union count
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
