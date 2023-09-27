#include <iostream>
#include <vector>
using namespace std;

#define INF 1e+9

int dp[100000];
int n;
vector<int> a;

void solve(){
    fill(dp, dp+n, INF);
    for (int i=0; i<n; i++) {
        *lower_bound(dp, dp+n, a[i])=a[i];
    }
    cout<<lower_bound(dp, dp+n, INF)-dp<<endl;
}

int main(){
    cin>>n;
    a.resize(n);
    for (int i=0; i<n; i++) cin>>a[i];
    solve();
    return 0;
}