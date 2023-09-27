#include <iostream> // cout, endl, cin
#include <string> // string, to_string, stoi
#include <vector> // vector
#include <algorithm> // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <utility> // pair, make_pair
#include <tuple> // tuple, make_tuple
#include <cstdint> // int64_t, int*_t
#include <cstdio> // printf
#include <map> // map
#include <queue> // queue, priority_queue
#include <set> // set
#include <stack> // stack
#include <deque> // deque
#include <unordered_map> // unordered_map
#include <unordered_set> // unordered_set
#include <bitset> // bitset
#include <cctype> // isupper, islower, isdigit, toupper, tolower


using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
#define all2(a, b) (a).begin(), (a).begin() + (b)
#define debug(vari) cerr << #vari << " = " << (vari) << endl;


int main() {
    int n, k;
    while (1) {
        cin>>n>>k;
        if(n==0){
            break;
        }
        vector<int> a(n);
        rep(i, n)cin >> a[i];
        vector<int> cum(n + 1, 0);
        rep(i, n)cum[i + 1] = cum[i] + a[i];
        ll ans = 0;
        rep(i, n - k) {
            ll cnt = cum[i + k] - cum[i];
            ans = max(ans, cnt);
        }
        cout << ans << endl;
    }

    return 0;
}
