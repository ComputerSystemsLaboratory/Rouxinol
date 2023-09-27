#include <iostream>
using namespace std;
int ans,n,s;
void solve(int n, int s, int m){
    if(n==0 && s==0){
        ans++;
        return;
    }
    for(int i=m; i<10 && n>0; i++){
        if(s-i>=0) solve(n-1, s-i, i+1);
    }
}


int main(void){
    while(1){
        ans=0;
        cin>>n>>s;
        if(n==0 && s==0) break;
        solve(n,s,0);
        cout<<ans<<endl;
    }
}

