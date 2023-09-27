#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k,i,ans=0;
    cin >> n >> k;
    while(n!=0 || k!=0){
        int a,sum[1000000],S;
        sum[0]=0;
    
        for(i=0;i<n;++i){
            cin >> a;
            sum[i+1] = sum[i] + a;
        }
    
        for(i=0;i<n-k;++i){
            S=sum[i+k]-sum[i];
            ans = max(ans,S);
        }
    
        cout << ans << endl;
        cin >> n >> k;
    }
}

