#include <bits/stdc++.h>

using namespace std;
const int N = 3e6 + 10;
long long a[N] , avail[N] , b[N] , c[N] , V[N];
int n , q;
int cnt = 0;
void compress(){
    for (int i = 1; i <= n; i++) V[++cnt] = a[i];
    for (int i = 1; i <= q; i++){
        V[++cnt] = b[i];
        V[++cnt] = c[i];
    }
    sort(V + 1,V + cnt + 1);
    for (int i = 1; i <= n; i++) a[i] = lower_bound(V + 1,V + cnt + 1,a[i]) - V;
    for (int i = 1; i <= q; i++){
        b[i] = lower_bound(V + 1,V + 1 + cnt,b[i]) - V;
        c[i] = lower_bound(V + 1,V + 1 + cnt,c[i]) - V;
    }
}   
int main(){
    //freopen("thaythe.inp","r",stdin);
    //freopen("thaythe.out","w",stdout);
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    cin >> q;
    for (int i = 1; i <= q; i++) cin >> b[i] >> c[i];
    compress();
    long long sum = 0;
    for (int i = 1; i <= n; i++){
        sum = sum + V[a[i]];
        avail[a[i]]++;
    }
    for (int i = 1; i <= q; i++){
        if (b[i] != c[i]){
            sum = sum - V[b[i]] * avail[b[i]];
            sum = sum + V[c[i]] * avail[b[i]];
            avail[c[i]] += avail[b[i]];
            avail[b[i]] = 0;
        }
        cout << sum << "\n";
    }
    //for (int i = 1; i <= cnt; i++) cout << V[i] << " ";
    return 0;
}