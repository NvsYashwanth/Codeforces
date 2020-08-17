#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,j,k;
    cin>>n;

    j=1;
    k=1;
    vector<char> z;
    vector<int> fibs{1,1};


    for(int i=0;i<n;i++){
        z.push_back('o');
    }

    for(int i=2;i<n+1;i++){
        fibs.push_back(fibs.at(i-1)+fibs.at(i-2));
    }
    while(j!=n+1){
        if(j>fibs.at(k)){
            k++;
        }

        if(j==fibs[k]){
            z.at(j-1)='O';
            k++;
        }

        j+=1;
    }
    

    for(int i=0;i<n;i++){
        cout<<z.at(i);
    }

    return 0;
}