#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int, int>> v;
    v.push_back({1, 2});
    v.push_back({3, 4});
    v.push_back({5, 6});
    v.push_back({7, 8});
    v.push_back({9, 10});
    v.push_back({19, 20});
    cout << "Value at index 0 , First Value: " << v[5].first << endl;
    cout << "Value at index 0 , Second Value: " << v[5].second << endl;

    return 0;
}