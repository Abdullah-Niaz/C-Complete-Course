#include <bits/stdc++.h>
using namespace std;

int main(){
    // pair<string,int> pair_name = {"Abdullah",20};
    // pair_name.first  = "Omer";
    // pair_name.second  = 20;
    // cout<<pair_name.first<<endl;   
    // cout<<pair_name.second<<endl; 

    vector<int> v;
    v.push_back(1);  
    v.push_back(2);  
    v.push_back(3);  
    v.push_back(4);

    v.emplace_back(5);
    v.emplace_back(6);
    v.emplace_back(7);
    
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
      
    
    return 0;
}