#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mp make_pair
#define pb push_back
#define x first
#define y second
#define pii pair<int, int>
#define p3i pair<pii, int>
#define pll pair<ll, ll>
#define p3l pair<pll, ll>
#define lseg L, (L+R)/2, N*2+1
#define rseg (L+R)/2+1, R, N*2+2
#define ub upper_bound
#define lb lower_bound
#define p_q priority_queue
#define MN 1000000009

int n, q;
char a, b;
map<char, char> m;
int main(){
    while(cin >> n)
    {
        m.clear();
        if (n==0) break;
        for (int l=0; l<n; ++l){
            cin >> a >> b;
            m[a]=b;
        }
        cin >> q;
        for (int l=0; l<q; ++l){
            cin >> a;
            if (m.count(a)==0) cout << a;
            else cout << m[a];
        }
        cout << endl;
    }
    return 0;
}