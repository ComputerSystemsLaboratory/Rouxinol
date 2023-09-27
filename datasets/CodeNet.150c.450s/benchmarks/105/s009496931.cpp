#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <sstream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cctype>
#include <cstring>
#include <vector>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>
#include <algorithm>
#include <iterator>
#include <bitset>
#include <ctime>
#include<unordered_set>
#include<complex>
#include <cassert>

using namespace std;

#define FOR(i,a,b) for (int i = (a); i < (b); i++)
#define RFOR(i,b,a) for (int i = (b)-1; i >= (a); i--)
#define ITER(it,a) for (__typeof(a.begin()) it = a.begin(); it != a.end(); it++)
#define FILL(a,value) memset(a, value, sizeof(a))

#define SZ(a) (int)a.size()
#define ALL(a) a.begin(), a.end()
#define PB push_back
#define MP make_pair

typedef long long LL;
typedef vector<int> VI;
typedef pair<int, int> PII;

const double PI = acos(-1.0);
const int INF = 1000 * 1000 * 1000 + 7;
const LL LINF = INF * (LL)INF;

const int MAX = 200 + 7;
LL A[MAX];
string s;
int n;

vector<LL> B;
LL getRem(LL a) {
    FOR(i, 0, SZ(B)) {
        if ((B[i] ^ a) < a) a ^= B[i];
    }

    return a;
}

void add(LL a) {
    LL b = getRem(a);
    B.push_back(b);
    sort(ALL(B));
    reverse(ALL(B));
}

void solve() {
    cin >> n;
    FOR(i, 0, n) cin >> A[i];
    cin >> s;
    
    B.clear();
    RFOR(i, n, 0) {
        if (s[i] == '0') {
            add(A[i]);
            continue;
        }

        if (getRem(A[i])) {
            cout << 1 << endl;
            return;
        }
    }

    cout << 0 << endl;
}

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios::sync_with_stdio(false); cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        //cout << "!" << t << endl;
        solve();
    }
}