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


void solve()
{
    int n;
    cin >> n;
    cin.ignore();

    rep(i, n) {
        string str;
        unordered_set<string> s;

        getline(cin, str);
        s.insert(str);

        for(int i=1; i < str.length(); i++) {
            string prev = str.substr(0, i), latt = str.substr(i, str.length()- i);
            string rprev = string(prev.rbegin(), prev.rend()), rlatt = string(latt.rbegin(), latt.rend());
            s.insert({
                    prev + rlatt,
                    rlatt + prev,
                    rprev + latt,
                    latt + rprev,
                    rprev + rlatt,
                    rlatt + rprev,
                    latt + prev,
            });
        }

        cout << s.size() << endl;
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout.setf(ios::fixed);
    cout.precision(12);
    solve();
}