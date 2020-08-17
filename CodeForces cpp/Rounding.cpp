#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n%10>5){
        n=n-n%10+10;
    }
    else{
        n=n-n%10;
    }
    cout<<n;
    return 0;
}