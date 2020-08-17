#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    set <int> myset;
    int n,e;
    cin>>n;
    while(n--){
        cin>>e;
        if(e!=0){
            myset.insert(e);
        }
    }
    cout<<myset.size();
    return 0;
}