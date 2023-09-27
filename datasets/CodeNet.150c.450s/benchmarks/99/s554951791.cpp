#include <bits/stdc++.h>

using namespace std;

#define LOG(...) fprintf(stderr,__VA_ARGS__)
//#define LOG(...)
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);++i)
#define REP(i,n) for(int i=0;i<(int)(n);++i)
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(),(a).rend()
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort(ALL(c))
#define RSORT(c) sort(RALL(c))
#define SZ(a) ((int)(a).size())
#define BIT(x, i) (((x) >> (i)) & 1)

typedef long long ll;
typedef unsigned long long ull;
typedef vector<bool> vb;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vb> vvb;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

const char letters[] = {'i', 'x', 'c', 'm'};

string to_mcxi(int n) {
    stringstream ss;
    int d = 0;
    while (n > 0) {
        int m = n % 10;
        n /= 10;
        if (m > 0) {
            ss << letters[d];
            if (m != 1) {
                ss << m;
            }
        }
        d++;
    }
    string s = ss.str();
    reverse(ALL(s));
    return s;
}

int from_mxci(string s) {
    int n = 0;
    int m = 1;
    REP(i, SZ(s)) {
        if (isdigit(s[i])) {
            m = s[i] - '0';
        } else {
            switch (s[i]) {
            case 'm':
                n += m * 1000;
                break;
            case 'c':
                n += m * 100;
                break;
            case 'x':
                n += m * 10;
                break;
            case 'i':
                n += m * 1;
                break;
            }
            m = 1;
        }
    }
    return n;
}

int main() {
    int n;
    cin >> n;
    REP(i, n) {
        string l, r;
        cin >> l >> r;
        cout << to_mcxi(from_mxci(l) + from_mxci(r)) << endl;
    }
}