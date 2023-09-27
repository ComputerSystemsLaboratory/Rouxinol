#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define mp make_pair
#define pb push_back
#define lp(i,s,f) for(ll i = s; i < ll(f); i++)
#define inF freopen("input.in", "r", stdin);
#define outF freopen("output.in", "w", stdout);
#define endl '\n'
#define MOD 1000000007
#define mm(arr) memset(arr, 0, sizeof(arr))
#define int ll

int32_t main(){
    FAST
    int n; cin >> n;
    int sum = 0;
    map<int, int> has;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        has[a]++;
        sum += a;
    }
    int q; cin >> q;
    while(q--){
        int a, b; cin >> a >> b;
        sum -= has[a]*a;
        sum += b*has[a];
        has[b] += has[a];
        has[a] = 0;
        cout << sum << endl;
    }

    return 0;
}
