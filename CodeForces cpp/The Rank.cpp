#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int,int> d;
    int rank,n,s,w,x,y,z,i;
    cin>>n;
    rank=1;
    i=1;
    while(n--){
        cin>>w>>x>>y>>z;
        s=w+x+y+z;
        if(i!=1 and s>d.at(1)){
            rank++;
        }
        d[i]=s;
        i++;
    }

    cout<<rank;
    return 0;
}

