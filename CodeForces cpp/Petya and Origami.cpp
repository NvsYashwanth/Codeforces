#include <iostream>
using namespace std;

int main(){
    int n,k,x,y,z,res,a,b,c;
    a=0;
    b=0;
    c=0;

    cin>>n>>k;

    x=n*2;
    y=n*5;
    z=n*8;

    if (x%k!=0){
        a=1;
    }
    if (y%k!=0){
        b=1;
    }
    if (z%k!=0){
        c=1;
    }

    res=x/k+y/k+z/k+a+b+c;


    cout<<res;
    return 0;
}

