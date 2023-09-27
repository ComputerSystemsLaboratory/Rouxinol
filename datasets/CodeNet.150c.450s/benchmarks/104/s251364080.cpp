#define _CRT_SECURE_NO_WARNINGS
//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;
#define all(c) (c).begin(), (c).end()
#define loop(i,a,b) for(ll i=a; i<ll(b); i++)
#define rep(i,b) loop(i,0,b)
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define mt make_tuple
template<class T> ostream & operator<<(ostream & os, vector<T> const &);
template<int n, class...T> typename enable_if<(n>=sizeof...(T))>::type _ot(ostream &, tuple<T...> const &){}
template<int n, class...T> typename enable_if<(n< sizeof...(T))>::type _ot(ostream & os, tuple<T...> const & t){ os << (n==0?"":" ") << get<n>(t); _ot<n+1>(os, t); }
template<class...T> ostream & operator<<(ostream & os, tuple<T...> const & t){ _ot<0>(os, t); return os; }
template<class T, class U> ostream & operator<<(ostream & os, pair<T,U> const & p){ return os << "(" << p.first << ", " << p.second << ") "; }
template<class T> ostream & operator<<(ostream & os, vector<T> const & v){ rep(i,v.size()) os << v[i] << (i+1==(int)v.size()?"":" "); return os; }
#ifdef DEBUG
#define dump(...) (cerr<<#__VA_ARGS__<<" = "<<mt(__VA_ARGS__)<<" ["<<__LINE__<<"]"<<endl)
#else
#define dump(...)
#endif

int main(){
    int n,w;
    cin >> w >> n;
    int a[100];
    rep(i,w) a[i] = i+1;
    rep(i,n){
        int x,y;
        char c;
        cin >> x >> c >> y;
        swap(a[x-1],a[y-1]);
    }
    rep(i,w) cout << a[i] << endl;
}