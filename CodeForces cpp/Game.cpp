#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int l,r,n,i,state,e,z;
    cin>>n;
    vector<int> x;
    l=0;
    r=n-1;
    i=1;
    state=1;
    z=n;
    while(n--)
    {   
        cin>>e;
        x.push_back(e);
    }
    
    sort(x.begin(),x.end());

    while(i<z){
        if(state==1){
            r--;
            state=0;
        }
        else{
            l++;
            state=1;
        }
        i++;
    }
    cout<<x.at(l);
    return 0;
}

