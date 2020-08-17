#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,ec=0,oc=0,ek=0,ok=0,e;
    cin>>n>>m;


    for(int i=0;i<n;i++){
        cin>>e;
        if(e%2==0){
            ec+=1;
        }
        else{
            oc+=1;
        }

    }

    for(int i=0;i<m;i++){
        cin>>e;
        if(e%2==0){
            ek+=1;
        }
        else{
            ok+=1;
        }
    }

    cout<<min(ek,oc)+min(ec,ok);
    return 0;
}