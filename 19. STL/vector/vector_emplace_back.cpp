#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v;
    // v.emplace_back(1);
    // v.emplace_back(2);
    // v.emplace_back(3);
    // v.emplace_back(4);
    for (int i = 0; i < 1000; i++)
    {
        v.emplace_back(rand() * 10);
    }
    

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i] << " ";
    }
    
    return 0;
}