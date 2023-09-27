#include <bits/stdc++.h>
#define MEM 100006
#define sanic ios_base::sync_with_stdio(0)
#define pb push_back
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pii;
const ll MOD = 1e9+7;
ll n,m,sum;
ll c[MEM];
string s;
int main()
{
    sanic; cin.tie(0);
    cin >> n;
    for(int i=0; i<n; i++){
        ll q;
        cin >> q;
        c[q]++;
        sum += q;
    }
    cin >> m;
    while(m--){
        ll q1, q2;
        cin >> q1 >> q2;
        sum -= q1*c[q1];
        //cout << sum <<' ';
        sum += q2*c[q1];
        c[q2] += c[q1];
        //cout << sum << ' ';

        c[q1] = 0;
        cout << sum << '\n';
    }
}
