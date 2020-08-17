#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> a,b;
    int n,m,e;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>e;
        a.push_back(e);
    }
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>e;
        b.push_back(e);
    }
    cout<<*max_element(a.begin(),a.end())<<' '<<*max_element(b.begin(),b.end());
    return 0;
}

