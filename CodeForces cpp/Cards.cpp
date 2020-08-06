#include <iostream>
using namespace std;

int main(){
    int n,t;
    string s;
    int nz(0),no(0);
    cin>>n>>s;

    for(auto i:s){
        if(i=='z'){
            nz+=1;
        }
    }

    no=(n-(nz*4))/3;

    t=no+nz;
    if(t>=1){
        for(int i=0;i<no;i++){
            cout<<1<<" ";

        }
        for(int i=0;i<nz;i++){
            cout<<0<<" ";
        }
    }
    else{
        cout<<0<<endl;
    }
    cout<<endl;

    return 0;

}