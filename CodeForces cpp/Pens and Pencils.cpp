#include <iostream>
using namespace std;

int main(){
    int t,a,b,c,d,k,x,y;
    cin>>t;

    while(t--){
        cin>>a>>b>>c>>d>>k;
        x=1;
        y=1;
        

        while(x*c<a){
            x=x+1;
        }
        while(y*d<b){
            y=y+1;
        }

        if(x+y<=k){
            cout<<x<<' '<<y<<'\n';
        }
        else{
            cout<<-1<<'\n';
        }
        
    }
    return 0;
}

