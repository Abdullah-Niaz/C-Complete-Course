#include <bits/stdc++.h>
using namespace std;

int main(){
    priority_queue <int> v;
    v.push(1);
    v.push(2);    
    
    cout<<"Item at Top: " << v.top() <<endl;
    v.pop();
    cout<<"Item at Top: " <<v.top() <<endl;

    return 0;
}
