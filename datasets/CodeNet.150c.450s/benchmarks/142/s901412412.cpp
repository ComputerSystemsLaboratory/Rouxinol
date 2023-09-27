#include "bits/stdc++.h"

using namespace std;

#define all(v)          v.begin(), v.end()
#define pb              push_back
#define sz(x)          (int) (x.size())
#define endl            "\n"
#define isOdd(n)       (n&1)
#define pow(n, m)      (ll)powl(n, m)
#define clr(x, val)     memset(x, val, sizeof(x))
#define EPS 1e-6

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<int> vi;


int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, k; cin >> n >> k;
    int a[n];
    for(auto &i: a) cin >> i;
    int l = 0;
    for(int i = k; i < n; i++){
        cout << (a[i] > a[l++] ? "Yes" : "No") << endl;
    }
    return 0;
}
