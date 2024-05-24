#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v;
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // v.push_back(5);
    // v.push_back(6);
    // v.push_back(7);
    for (int i = 0; i < 1000; ++i) {
        v.push_back(rand() * 12);
    }
    
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i] << " ";
    }
    

    return 0;
}