#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int n,m,l,r;
    vector<char> z;
    char c1,c2;
    string s;
    cin>>n>>m;
    cin>>s; 
    for(auto i:s){
        z.push_back(i);
    }
    for(int i=0;i<m;i++){
        cin>>l>>r>>c1>>c2;

        for(int j=l-1;j<r;j++){
            if(z[j]==c1){
                z[j]=c2;
            }
        }
    }
    for(auto i:z){
        cout<<i;
    }
    return 0;
}

