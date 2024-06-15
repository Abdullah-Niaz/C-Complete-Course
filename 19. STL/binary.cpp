#include <bits/stdc++.h>
using namespace std;

int main(){
int A[] = {1, 2, 4, 5, 6, 7};
    int n = sizeof(A) / sizeof(A[0]);
    
    // Perform binary search
    bool re = binary_search(A, A + n, 3);
    
    // Print the result
    if (re) {
        cout << "Element found in the array." << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}