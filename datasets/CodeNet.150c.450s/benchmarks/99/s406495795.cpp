/* vim:set foldmethod=marker: */
#include <bits/stdc++.h>
using namespace std;

//{{{
#define all(x) (x).begin(),(x).end()
#define REP(i,a,b) for(int i=(int)(a); i<(int)(b); i++)
#define RREP(i,a,b) for(int i=(int)(a); i>=b; i--)
#define rep(i,n) REP(i,0,n)
#define rrep(i,n) RREP(i,n,0)
#define pb(x) push_back(x)
#define mp(x,y) make_pair((x),(y))

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<pii> vp;

#define dump(x) (cerr << #x << "=" << x << endl)
template<class T> ostream& osContainer(ostream& os,T c) { os<<'[';for(decltype(c.begin()) it=c.begin();it!=c.end();it++)os<<*it<<',';os<<']';return os; }
template<class T> ostream& operator<<(ostream& os,const vector<T>& v) { return osContainer(os,v); }
template<class T> ostream& operator<<(ostream& os,const set<T>& s) { return osContainer(os,s); }
template<class T> ostream& operator<<(ostream& os,const multiset<T>& s) { return osContainer(os,s); }
template<class T,class S> ostream& operator<<(ostream& os,const map<T,S>& m) { return osContainer(os,m); }
template<class T,class S> ostream& operator<<(ostream& os,const multimap<T,S>& m) { return osContainer(os,m); }
template<class T1,class T2>
ostream& operator<<(ostream& os, const pair<T1,T2>& p){ os << '(' << p.first << ',' << p.second << ')'; return os; }

const int dx[] = {0,1,0,-1};
const int dy[] = {1,0,-1,0};
//}}}

const char unit[] = {'i', 'x', 'c', 'm'};

int decode(string s)
{
    int sum = 0;

    for(int i=0, d=1; i<4; i++, d*=10) {
        auto p = s.find(unit[i]);
        if (p == 0) {
            sum += d;
        } else if (p != string::npos) {
            char c = s[p-1];
            if (isdigit(c)) {
                sum += (c - '0') * d;
            } else {
                sum += d;
            }
        }
    }

    return sum;
}

string encode(int n)
{
    stringstream ss;

    for(int i=1000, idx=3; i >= 1; i/=10, idx--) {
        int d = n/i;
        if (d != 0) {
            if (d > 1) {
                ss << d;
            }

            ss << unit[idx];
        }
        n%=i;
    }

    return ss.str();
}

void solve()
{
    int n;
    cin >> n;

    rep(i, n) {
        string s1, s2;
        cin >> s1 >> s2;

        cout << encode(decode(s1) + decode(s2)) << endl;
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout.setf(ios::fixed);
    cout.precision(12);
    solve();
}