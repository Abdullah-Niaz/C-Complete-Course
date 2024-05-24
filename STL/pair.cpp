#include <bits/stdc++.h>
using namespace std;

int main()
{

    // pair contains the pair of two hetrogenous elements like this
    // pair(first, second ) pariName;

    pair<string, int> abdullah = {"Abdullah", 20};
    // cout << abdullah.first << endl;
    // cout << abdullah.second << endl;


    // array of pairs
    pair<int, int> arr[3] = {{1,2},{4,5},{7,8}};
    
    // Accessing and printing elements of pairs
    // Accessing the first element of the first pair
    cout << arr[0].first << endl; // Output: 1

    // Accessing the second element of the first pair
    cout << arr[0].second << endl; // Output: 2

    // Accessing the first element of the second pair
    cout << arr[1].first << endl; // Output: 4

    // Accessing the second element of the second pair
    cout << arr[1].second << endl; // Output: 5

    // Accessing the first element of the third pair
    cout << arr[2].first << endl; // Output: 7

    // Accessing the second element of the third pair
    cout << arr[2].second << endl; // Output: 8

    return 0;
}