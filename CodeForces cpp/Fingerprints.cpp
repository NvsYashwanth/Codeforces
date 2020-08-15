#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> x,y;
    int n,m,z;
    cin>>n>>m;
    while(n--){
        cin>>z;
        x.push_back(z);
    }
    
    while(m--){
        cin>>z;
        y.push_back(z);
    }

    for(auto i:x){
        for(auto j:y){
            if(i==j){
                cout<<i<<' ';
            }
        }
    }
    return 0;
}

