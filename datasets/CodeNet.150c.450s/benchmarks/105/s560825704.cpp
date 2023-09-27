#include <bits/stdc++.h>

const double PI = 3.14159265358979323846;
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
#define rep(i, n) for (int i = 0; i < (n); ++i)
//#define rep(i, n) for (ll i = 0; i < (n); ++i)
//typedef pair<ll, ll> P;
typedef pair<ll, ll> P;
const ll INF = 10e17;
#define cmin(x, y) x = min(x, y)
#define cmax(x, y) x = max(x, y)
#define ret() return 0;

std::istream &operator>>(std::istream &in, set<int> &o) {
    ll a;
    in >> a;
    o.insert(a);
    return in;
}

std::istream &operator>>(std::istream &in, queue<int> &o) {
    ll a;
    in >> a;
    o.push(a);
    return in;
}

bool contain(set<int> &s, int a) { return s.find(a) != s.end(); }

//ifstream myfile("C:\\Users\\riku\\Downloads\\0_00.txt");
//ofstream outfile("log.txt");
//outfile << setw(6) << setfill('0') << prefecture << setw(6) << setfill('0') << rank << endl;
// std::cout << std::bitset<8>(9);

//const ll mod = 1e10;
typedef priority_queue<P, vector<P>, greater<P> > PQ_ASK;

bool solve(vector<ll> &v, string &s) {
    vector<ll> b;
    int n = v.size();
    rep(i, n) {
        ll a = v[i];
        for (auto x : b) cmin(a, a ^ x);
        if (a) {
            if (s[i] == '1') {
                return false;
            }
            b.push_back(a);
        }
    }
    return true;
}

int main() {

    int t;
    cin >> t;

    rep(_, t) {
        int n;
        cin >> n;

        vector<ll> v(n);
        rep(i, n) cin >> v[i];

        string s;
        cin >> s;

        reverse(v.begin(), v.end());
        reverse(s.begin(), s.end());

        bool b = solve(v, s);
        cout << (b ? 0 : 1) << endl;

    }


}
