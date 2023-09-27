#include <bits/stdc++.h>
using namespace std;

string to_string(const string& s) { return '"' + s + '"';}
string to_string(const char* s) { return to_string((string) s);}
string to_string(bool b) { return (b ? "true" : "false");}
template <typename A, typename B>
string to_string(pair<A, B>p){return "("+to_string(p.first)+","+to_string(p.second)+")";}
template <typename A>
string to_string(A v) {
  bool first = true; string res = "{";
  for (const auto &x : v) {
	if (!first) res += ", ";
	first = false;
	res += to_string(x);
  }
  return res+'}';
}
void debug_out() { cerr << endl; }
template <typename Head, typename... Tail>
void debug_out(Head H, Tail... T) { cerr << " " << to_string(H); debug_out(T...);}
#ifdef LOCAL
#define debug(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)
#else
#define debug(...) false
#endif

#define sz(x) (int)((x).size())
#define forn(i,n) for (int i=0; i < n; i++)
#define forse(i,s,e) for (int i=s; i < e; i++)
#define pb push_back
#define fi first
#define se second
#define all(vec) vec.begin(), vec.end()
#define time() ((double)clock() / CLOCKS_PER_SEC)

typedef unsigned long long ull;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

double PI=3.141592653589793;

const int bmx=61;

void upd(vector<ll> &cur,vector<ll> &vals){
	for(auto &i:cur){
		for(int b=bmx-1;b>=0;b--){
			if(i&(1ll<<b)){
				if(vals[b]==-1){
					for(int ind=b-1;ind>=0;ind--){
						if(vals[ind]!=-1) i^=vals[ind];
					}
					vals[b]=i;
					forse(ind,b+1,bmx){
						if(vals[ind]!=-1&&(vals[ind]&(1ll<<b))){
							vals[ind]^=i;
						}
					}
					break;
				}else{
					i^=vals[b];
				}
			}
		}
	}
}

void solve(){
	int n;
	string s;
	cin >> n;
	vector<ll> a(n);
	forn(i,n){
		cin >> a[i];
	}
	cin >> s;

	vector<ll> vals(bmx,-1);
	for(int i=n-1;i>=0;){
		int j=i;
		vector<ll> cur;
		while(j>=0&&s[j]==s[i]){
			cur.pb(a[j]);
			j--;
		}
		if(s[i]=='0') upd(cur,vals);
		else{
			for(auto &i:cur){
				for(int ind=bmx-1;ind>=0;ind--){
					if(vals[ind]!=-1&&i&(1ll<<ind)) i^=vals[ind];	
				}
				if(i!=0){
					cout << "1\n";
					return;
				}
			}
		}
		
		i=j;
	}
	cout << "0\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); 
	int T=1;
	cin >> T;
	forse(c,1,T+1){
	//	cout << "Case #" << cid << ": ";
		solve();
	}
}
