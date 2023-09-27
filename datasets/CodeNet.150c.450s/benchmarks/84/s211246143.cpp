#include <bits/stdc++.h>
#include <cmath>

using namespace std;
typedef long long ll;
//typedef unsigned long long ll;

//#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep(i, n) for (ll i = 0; i < (n); ++i)
//#define sz(x) ll(x.size())
//typedef pair<ll, int> P;
//typedef pair<ll, ll> P;
//const double INF = 1e10;
const ll INF = LONG_LONG_MAX / 10;
//const ll INF = 1e15;
const ll MINF = LONG_LONG_MIN;
//const int INF = INT_MAX / 10;
#define cmin(x, y) x = min(x, y)
#define cmax(x, y) x = max(x, y)

bool contain(set<char> &s, int a) { return s.find(a) != s.end(); }

//ifstream myfile("C:\\Users\\riku\\Downloads\\0_00.txt");
//ofstream outfile("log.txt");
//outfile << setw(6) << setfill('0') << prefecture << setw(6) << setfill('0') << rank << endl;
// std::cout << std::bitset<8>(9);

void print_line(vector<ll> &line) {
    if (line.size() == 0ll) {
        cout << endl;
        return;
    }
    for (ll i = 0; i < line.size(); i++) {
        cout << line[i];
        if (i == line.size() - 1) cout << endl;
        else cout << ' ';
    }
}


typedef priority_queue<long long, vector<long long>, greater<long long> > PQ_ASK;
const int mod = 1000000007;

typedef pair<ll, ll> P;


ll merge(vector<ll> &a, int left, int mid, int right) {
    int n1 = mid - left;
    int n2 = right - mid;
    vector<ll> l(n1 + 1, 0);
    vector<ll> r(n2 + 1, 0);

    for (int i = 0; i < n1; i++) {
        l[i] = a[left + i];
    }
    for (int i = 0; i < n2; i++) {
        r[i] = a[mid + i];
    }

    l[n1] = INF;
    r[n2] = INF;

    int i = 0, j = 0;
    ll compare = 0;
    for (int k = left; k < right; k++) {
        if (l[i] <= r[j]) {
            a[k] = l[i];
            i++;
        } else {
            a[k] = r[j];
            j++;
            compare += n1 - i;
        }
    }
    return compare;
}

ll merge_sort(vector<ll> &a, int left, int right) {
    ll compare = 0;
    if (left + 1 < right) {
        int mid = (left + right) / 2;
        compare += merge_sort(a, left, mid);
        compare += merge_sort(a, mid, right);
        compare += merge(a, left, mid, right);
    }
    return compare;
}

int main() {
    int n;
    cin >> n;

    vector<ll> a(n);

    rep(i, n) cin >> a[i];

    ll compare = merge_sort(a, 0, n);
    cout << compare << endl;
}

