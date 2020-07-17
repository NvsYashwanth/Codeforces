#include <iostream>
using namespace std;
const int N=1000;

void solve(){
        int n;
        int p[N];
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>p[i];
        }

        for(int i=1;i<n-1;i++){
            if(p[i]>p[i-1] && p[i]>p[i+1]){
   
                cout<<"YES"<<endl;
                cout<<i<<" "<<i+1<<" "<<i+2<<endl;
                return;
            }
        }

        cout<<"NO"<<endl;

}
int main(){
    int tests;
    cin>>tests;
    while(tests){
        solve();
        tests--;
    }
}