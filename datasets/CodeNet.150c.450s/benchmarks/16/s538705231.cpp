#include <iostream>
#include <string>
#include <vector>
#include <algorithm> 
#include <utility> 
#include <tuple> 
#include <cstdint> 
#include <cstdio> 
#include <map> 
#include <queue> 
#include <set> 
#include <stack> 
#include <deque> 
#include <unordered_map> 
#include <unordered_set> 
#include <bitset> 
#include <cctype> 
#include <cmath>
#include <iomanip>
#include <ctype.h>
#include <numeric>
#include <iterator>

using namespace std;
using ll = long long;
using vi = vector<int>;
using vvi = vector<vi >;
using vl = vector<ll>;
using vvl = vector<vl >;
using pairi = pair<int, int>;
using pairl = pair<ll, ll>;

#define TR ","
#define TS " "
#define rep(i,N) for(ll i=0;i<(ll)N;++i)
#define rpt(i,a,b) for(ll i=a;i<(ll)b;++i)
#define all(v) v.begin(), v.end()
#define IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

ll gcd(ll a, ll b) {
    if (a < b) swap(a, b);
    if (b == 0) return a;
    return gcd(b, a % b);
}

ll lcm(ll x, ll y) {
    return x / gcd(x, y) * y;
}

ll waz = 76543217;

void printVector(const vector<int>& vec) {
    for (int value : vec) {
        cout << value << " ";
    }
    cout << endl;
}

int main()
{
    IO;

    stack<int> S1;
    stack<pair<int, int> > S2;
    string str;
    cin >> str;
    char ch;
    int sum = 0;
    for (int i = 0; i<str.size(); i++) {
        ch = str[i];
        if (ch == '\\') S1.push(i);
        else if (ch == '/' && S1.size() > 0) {
            int j = S1.top(); S1.pop();
            sum += i - j;
            int a = i - j;
            while ( S2.size() > 0 && S2.top().first > j) {
                a += S2.top().second; S2.pop();
            }
            S2.push(make_pair(j, a));
        }
    }

    vi ans;
    while (S2.size() > 0) {
        ans.push_back(S2.top().second); S2.pop();
    }
    reverse(all(ans));
    cout << sum << endl;
    cout << ans.size();
    for (int i = 0; i < ans.size(); ++i) {
        cout << " ";
        cout << ans[i];
    }
    cout << endl;
}
