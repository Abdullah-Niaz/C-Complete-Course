#include <bits/stdc++.h>
using namespace std;

int main(){
    // set is unique and sorted 
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    auto it = s.find(4);
    for(const int& elm:s){
        cout<<elm<<" ";
    }
    
    return 0;
}