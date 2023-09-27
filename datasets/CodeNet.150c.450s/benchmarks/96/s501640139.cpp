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
//

char button[10][6] = {
    "",
    ".,!? ",
    "abc",
    "def",
    "ghi",
    "jkl",
    "mno",
    "pqrs",
    "tuv",
    "wxyz"
};

void solve()
{
    int n;

    cin >> n;
    cin.ignore();

    rep(i, n) {
        int idx = 0;
        char c;
        string str;
        getline(cin, str);

        while( idx < str.length() ) {
            int cnt = 0;
            c = str[idx];

            while(str[idx] != '0') {
                cnt++;
                idx++;
            }

            if (c != '0') {
                int len = strlen(button[c - '0']);
                cout << button[c - '0'][(cnt - 1) % len];
            }

            cnt = 0;
            while(str[idx] == '0') {
                idx++;
            }

        }

        cout << endl;
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout.setf(ios::fixed);
    cout.precision(12);
    solve();
}