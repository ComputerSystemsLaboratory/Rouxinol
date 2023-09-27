#include <bits/stdc++.h>
using namespace std;
int const MN = 100000;
int const INF = 1e9+7;

int dp[MN+1];
vector<int> a;

/*int main(){
    int n;
    cin >> n;

    a.resize(n);
    for(auto &t: a){
        cin >> t;
    }

    fill(dp,dp+MN+1,1);

    int res=0;
    for(int i=0;i<n;i++){
        for(int j=i-1;j>=0;j--){
            if(a[i] > a[j]){
                dp[i] = max(dp[i],dp[j]+1);
            }
        }
        res = max(dp[i],res);
    }

    cout << res << endl;
}*/

int main(){
    int n;
    cin >> n;

    a.resize(n);
    for(auto &t: a){
        cin >> t;
    }

    fill(dp,dp+n,INF);

    for(int i=0; i<n; i++){
        *lower_bound(dp,dp+n,a[i]) = a[i];
    }

    cout << lower_bound(dp,dp+n,INF) - dp << endl;
}