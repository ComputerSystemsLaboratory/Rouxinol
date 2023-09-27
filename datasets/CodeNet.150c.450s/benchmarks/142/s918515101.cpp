#include <bits/stdc++.h>
using namespace std;
#define M 1000000007
#define U 998244353
#define N 1000005
#define int long long
#define sz(c) (int)c.size()
#define fr first
#define ll long long 
#define sc second
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define all(a) (a).begin(),(a).end()
#define rep(i,a,n) for(int i=a ; i<n ; i++)
#define r0 return 0;
#define endl '\n'
#define INF (int)1e15

/* Debug Begins */ 
# define trace(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); \
  stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
string to_string(char c) { return "'" + string(1, c) + "'";}
string to_string(string s) { return '"' + s + '"';}
string to_string(bool f) { if(f) return "True"; else return "False";}
string to_string(const char* s) { return to_string((string) s);}
template<typename A> string to_string(A);
template<typename A, typename B> string to_string(pair<A, B> p){
  return "(" + to_string(p.first) + ": " + to_string(p.second) + ")";}
template<typename A> string to_string(A v) {bool f = false; string r = "{"; 
  for (auto x: v) {if (f) r += ", "; r += to_string(x); f = true;} return r += "}";}
template<typename A> string to_string(vector<vector<A>> v) {string r; 
  for (auto x: v) r += "\n" + to_string(x); return r;}
int Nerr;
template<typename A> string to_string(A *p) {return to_string(vector<A>(p, p + Nerr));}
void err(istream_iterator<string>) { cerr << endl; }
template<typename T,typename... Args> void err(istream_iterator<string> it, T a, Args... args) {
  cerr << *it << " = " << to_string(a) << "; "; err(++it, args...); }
template<typename T> void kek(T ans) {cout << ans << endl; exit(0);}
#define Lu(...) [&] (auto &&u) { return __VA_ARGS__; }
#define Luv(...) [&] (auto &&u, auto &&v) { return __VA_ARGS__; }
/***************************************************************/



signed main()
{
	ios_base::sync_with_stdio(0);
	int TESTS=1;
	// cin>>TESTS;
	while(TESTS--)
	{   
		int n,k;
		cin >> n >> k;
		vector<int> a(n+1);
		rep(i,1,n+1) cin >> a[i];
		vector<string> ans;
		rep(i,k+1,n+1){
			if(a[i] > a[i-k]) ans.pb("Yes");
			else ans.pb("No");
		}
		for(auto j : ans) cout << j << endl;
	}
}