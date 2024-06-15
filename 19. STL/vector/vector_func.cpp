#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v  = {1,2,3,4,5};
    // for (auto it = v.begin() ; it != v.end() ; it++)
    // {
    //     cout<<*(it) <<" ";
    // }
    // cout<<endl;

    // vector<int>::reverse_iterator its = v.rbegin();
    // cout<<*(its);
    // cout<<endl;

    // cout<<v[0] << " " <<endl;

    // cout<<v.back();
    
    // Erase Functions 
    // v.erase(v.begin());
    //  for (auto it = v.begin() ; it != v.end() ; it++)
    // {
    //     cout<<*(it) <<" ";
    // }
    // cout<<endl;
    // v.erase(v.begin() + 1 );

    //  for (auto it = v.begin() ; it != v.end() ; it++)
    // {
    //     cout<<*(it) <<" ";
    // }
    // cout<<endl;
    // v.erase(v.begin() , v.end() );
    //  for (auto it = v.begin() ; it != v.end() ; it++)
    // {
    //     cout<<*(it) <<" ";
    // }
    // cout<<endl;
 
    // Insert Fucntions
    // v.insert(v.begin(),2);
    // v.insert(v.begin() + 1,2);
    // v.insert(v.begin() + 1,2,5);

    // for (auto it = v.begin() ; it != v.end() ; it++)
    // {
    //     cout<<*(it) <<" ";
    // }

    // cout<<"Size of Vector: " << v.size() << endl;

    vector<int> v1 = {1,2,3,4,5};
     for (auto it = v1.begin() ; it != v1.end() ; it++)
    {
        cout<<*(it) <<" ";
    }
    vector<int> v2 = {6,7,8,9,10};
    for (auto it = v2.begin() ; it != v2.end() ; it++)
    {
        cout<<*(it) <<" ";
    }


    v1.swap(v2);
    return 0;
}