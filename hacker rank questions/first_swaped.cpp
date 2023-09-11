#include <iostream>
#include <string>
using namespace std;

int main()
{

    string a, b;
    cin >> a,
        cin >> b;
    cout << a.size() << " " << b.size() << endl;
    cout << a + b << endl;
    int swap;
    swap=a[0];
    a[0]=b[0];
    b[0]=swap;
    cout<<a<< " " <<b;
    return 0;
}