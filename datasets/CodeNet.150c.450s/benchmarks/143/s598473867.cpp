#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
const int N = 2e5 + 1;
int a[N] , avail[N] , b[N] , c[N];
int n , q;
vector <int> V;
void compress(){
    V.push_back(-1);
    for (int i = 1; i <= n; i++) V.push_back(a[i]);
    for (int i = 1; i <= q; i++){
        V.push_back(b[i]);
        V.push_back(c[i]);
    }
    sort(V.begin(),V.end());
    V.resize(unique(V.begin(),V.end()) - V.begin());
    for (int i = 1; i <= n; i++) a[i] = lower_bound(V.begin(),V.end(),a[i]) - V.begin();
    for (int i = 1; i <= q; i++){
        b[i] = lower_bound(V.begin(),V.end(),b[i]) - V.begin();
        c[i] = lower_bound(V.begin(),V.end(),c[i]) - V.begin();
    }
}   
int main(){
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
        sum = sum - 1LL * V[b[i]] * avail[b[i]];
        sum = sum + 1LL * V[c[i]] * avail[b[i]];
        avail[c[i]] += avail[b[i]];
        avail[b[i]] = 0;
        cout << sum << "\n";
    }
    return 0;
}