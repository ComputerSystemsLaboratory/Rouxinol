#include<iostream>
using namespace std;
#include<cstring>
#include<cstdio>
#include<cstdlib>
typedef long long ll;
ll f[30000];
ll a[300];
ll w[300];
ll ans = 0;
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
        scanf("%lld%lld",&a[i],&w[i]);
    memset(f,0,sizeof(f));
    for(int i=0;i<n;i++){
        for(int j=m;j>=w[i];j--){
            if(f[j-w[i]]+a[i]>f[j])
                f[j] = f[j-w[i]] + a[i];
            if(f[j]<0x3f3f3f3f)
                ans = max(ans,f[j]);
        }
    }
    cout<<ans<<endl;
    return 0;
}
