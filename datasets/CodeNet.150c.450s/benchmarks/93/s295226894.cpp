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
//const ll INF = LONG_LONG_MAX / 10;
//const ll INF = 1e15;
const ll MINF = LONG_LONG_MIN;
const int INF = INT_MAX / 10;
#define cmin(x, y) x = min(x, y)
#define cmax(x, y) x = max(x, y)

bool contain(set<char> &s, int a) { return s.find(a) != s.end(); }

//ifstream myfile("C:\\Users\\riku\\Downloads\\0_00.txt");
//ofstream outfile("log.txt");
//outfile << setw(6) << setfill('0') << prefecture << setw(6) << setfill('0') << rank << endl;
// std::cout << std::bitset<8>(9);

typedef pair<char, int> P;

void print_line(vector<P> &line) {
    if (line.size() == 0ll) {
        cout << endl;
        return;
    }
    for (ll i = 0; i < line.size(); i++) {
        cout << line[i].second;
        if (i == line.size() - 1) cout << endl;
        else cout << ' ';
    }
}


typedef priority_queue<long long, vector<long long>, greater<long long> > PQ_ASK;
const int mod = 1000000007;


int merge(vector<P> &a, int left, int mid, int right) {
    int n1 = mid - left;
    int n2 = right - mid;
    vector<P> l(n1 + 1);
    vector<P> r(n2 + 1);

    for (int i = 0; i < n1; i++) {
        l[i] = a[left + i];
    }
    for (int i = 0; i < n2; i++) {
        r[i] = a[mid + i];
    }

    l[n1] = P(' ', INF);
    r[n2] = P(' ', INF);

    int i = 0, j = 0;
    int compare = 0;
    for (int k = left; k < right; k++) {
        compare++;
        if (l[i].second <= r[j].second) {
            a[k] = l[i];
            i++;
        } else {
            a[k] = r[j];
            j++;
        }
    }
    return compare;
}

int merge_sort(vector<P> &a, int left, int right) {
    int compare = 0;
    if (left + 1 < right) {
        int mid = (left + right) / 2;
        compare += merge_sort(a, left, mid);
        compare += merge_sort(a, mid, right);
        compare += merge(a, left, mid, right);
    }
    return compare;
}

int partition(vector<P> &a, int p, int r) {
    P x = a[r];
    int i = p - 1;
    for (int j = p; j < r; j++) {
        if (a[j].second <= x.second) {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[r]);
    return i + 1;
}

void quick_sort(vector<P> &a, int p, int r) {
    if (p < r) {
        int q = partition(a, p, r);
        quick_sort(a, p, q - 1);
        quick_sort(a, q + 1, r);
    }
}

void check_stability(vector<P> &b, vector<P> &c) {
    rep(i, b.size()) {
        if (b[i] != c[i]) {
            cout << "Not stable" << endl;
            return;
        }
    }
    cout << "Stable" << endl;
}

int main() {
    int n;
    cin >> n;

    vector<P> a(n);
    rep(i, n) cin >> a[i].first >> a[i].second;
    vector<P> b = a;
    vector<P> c = a;

    quick_sort(b, 0, n - 1);
    merge_sort(c, 0, n);

    check_stability(b, c);

    rep(i, n) {
        printf("%c %d\n", b[i].first, b[i].second);
    }

}

