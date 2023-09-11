#include <iostream>
#include <string>
using namespace std;

int main() {
	
  string a,b;
  cin>>a,
  cin>>b;
  cout<<a.size()<<" "<<b.size()<<endl;
  cout<<a+b<<endl;
  for (int i = a.length()-1; i>=0; i--)
  {
    cout<<a[i];
    
  }
  cout<<"\n";
   for (int i = b.length()-1; i>=0; i--)
  {
    cout<<b[i];
  }
    return 0;
}