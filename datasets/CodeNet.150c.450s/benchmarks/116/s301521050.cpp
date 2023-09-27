#include <iostream>
using namespace std;

#define loop(i,a,b) for(int i=(a); i<(int)(b); i++)
#define rep(i,b) loop(i,0,b)

int a[100000];
int n,k;

int main(){
    while(cin>>n>>k, n|k){
        rep(i,n) cin>>a[i];
        int ans=0;
        rep(i,k) ans+=a[i];
        int t=ans;
        rep(i,n-k){
            t-=a[i]; t+=a[i+k];
            ans=max(t,ans);
        }
        cout<<ans<<endl;
    }
}