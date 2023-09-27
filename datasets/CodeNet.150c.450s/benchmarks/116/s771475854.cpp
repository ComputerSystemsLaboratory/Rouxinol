#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    while(true){
        cin>>n>>k;
        if(n==0)break;
        vector<int> a(n+1,0);
        for (int i = 1; i <= n; ++i) {
            cin>>a[i];
            a[i]+=a[i-1];
        }
        int ans=0;
        for (int i = 0; i+k < n; ++i) {
            ans=max(ans,a[i+k]-a[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}
