#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,res;
    res=0;
    string s;
    cin>>n;
    cin>>s;


    for(auto i:s){
        if(i=='-'){
            res--;
        }
        else{
            res++;
        }
        if(res<0){
            res++;
        }
    }

    cout<<res;
    return 0;
}