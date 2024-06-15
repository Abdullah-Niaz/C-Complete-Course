#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v;
    v.push_back(1);
    v.push_back(2);   
    v.push_back(3);   
    v.push_back(4);   
    v.push_back(5);

    vector<int>::iterator it = v.begin();
    for (int i = 0; i < v.size(); i++)
    {
        cout<< *(it) << " ";   
        it++;
    }
    vector<int>::iterator its = v.end();
    its--;
    cout<<"it: "<<*(its);
    

    
    return 0;
}