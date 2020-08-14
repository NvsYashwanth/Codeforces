#include <iostream>
using namespace std;

int main(){
    int n,leaders,c,rem;
    cin>>n;
    leaders=1;
    c=0;
    while(leaders!=n){
        rem=n-leaders;
        if(rem%leaders==0){
            c+=1;
        }
        leaders+=1;
    }
    cout<<c;
    return 0;
}

