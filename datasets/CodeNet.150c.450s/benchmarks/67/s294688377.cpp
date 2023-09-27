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

int s[1000 + 1];

void prepare()
{
    s[0] = 0;
    s[1] = 1;

    REP(i, 2, 1001) {
        s[i] = s[i-1] + i;
    }
}

void solve()
{
    int n;

    while (cin >> n, n)
    {
        int res = 0;
        REP(i, 1, 1001) {
            if (s[i] >= n) break;

            if ((n - s[i]) % (i + 1) == 0) res++;
        }

        cout << res <<  endl;
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout.setf(ios::fixed);
    cout.precision(12);
    prepare();
    solve();
}