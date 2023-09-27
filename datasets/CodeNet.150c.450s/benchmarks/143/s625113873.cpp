#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array


int n, q, ai, bi, c;
int a[100000];
ll ans = 0;

void solve(){
    
    cin >> n;

    for (int i = 0; i < 100000; i++){
        a[i] = 0;
    }
    
    for (int i = 0; i < n; i++)
    {
        cin >> q;
        a[q]++;
        ans += q;
    }
    
    cin >> q;

    int ta;

    for (int i = 0; i < q; i++)
    {
        cin >> ai >> bi;

        ta = a[ai];
        a[ai] = 0;

        a[bi] += ta;
        ans = ans - (ll)ta*ai + (ll)ta*bi;
        cout << ans << endl;

    }
    

}





int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();

}