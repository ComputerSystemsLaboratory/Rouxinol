#include <bits/stdc++.h>
using namespace std;
#define all(a) a.begin(),a.end()
#define rep(i,n) for(int i=0;i<n;i++)
int main(void){
    int n;
    while(cin>>n,n){
        int ans=10000000;
        for(int z=0 ;z*z*z<=n;z++){
            for(int y=0; y*y<=n-z*z*z;y++){
                ans=min(ans, n-z*z*z-y*y+y+z);
            }
        }
        cout<<ans<<endl;
    }
}