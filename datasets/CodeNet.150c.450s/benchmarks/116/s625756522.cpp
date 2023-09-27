#include<bits/stdc++.h>
using namespace std;
#define F(i,s,e) for(int i=s;i<e;++i)

int main(){
    long n,k;
    while(cin >> n >> k && (n!=0 && k!=0)){
        long a[n],s[n];
        F(i,0,n){
            cin >> a[i];
        }
        s[0]=a[0];
        F(i,1,n){
            s[i]=s[i-1]+a[i];
        }
        long ans=0;
        F(i,0,n-k){
            ans=max(ans,s[i+k]-s[i]);
        }
        cout << ans << endl;
    }
    return 0;
}
