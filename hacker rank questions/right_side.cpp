#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int a[n];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int partitionIndex = 0;  // Index to partition negative and positive numbers

    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            // If the current element is negative, swap it with the element at the partition index
            swap(a[i], a[partitionIndex]);
            partitionIndex++;  // Move the partition index to the right
        }
    }

    cout << "Partitioned Array: ";  
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
