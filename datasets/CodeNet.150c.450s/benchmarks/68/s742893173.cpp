#include <bits/stdc++.h>
using namespace std;

const int MAX=1e7+10;

int n,ans;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    while(cin >> n,n){
        vector<int> a(n);
        for (int i=0;i<n;++i) cin >> a[i];
        ans=MAX;
        for (int i=0;i<n;++i)
            for (int j=i+1;j<n;++j)
                ans=min(ans,abs(a[i]-a[j]));
        cout << ans << endl;
    }
}
