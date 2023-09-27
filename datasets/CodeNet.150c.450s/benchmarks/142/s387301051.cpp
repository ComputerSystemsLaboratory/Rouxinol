#include <bits/stdc++.h>
using namespace std;
#define FOR(i,o,n) for(long long i = o;i<n;i++)
#define oneforall ios::sync_with_stdio(false);cin.tie(0);
#define all(v) (v).begin(),(v).end()
#define ini(...) int __VA_ARGS__; in(__VA_ARGS__)
#define inl(...) long long __VA_ARGS__; in(__VA_ARGS__)
#define ins(...) string __VA_ARGS__; in(__VA_ARGS__)
#define int long long 
const long long inf=1e18;
void in(){} template <typename T,class... U> void in(T &t,U &...u){ cin >> t; in(u...);}
void out(){cout << "\n";} template <typename T,class... U> void out(const T &t,const U &...u){ cout << t; if(sizeof...(u)) cout << " "; out(u...);}
typedef vector<int> vi;
typedef vector<long long> vl;
typedef long long ll;
typedef vector<pair<long, long > > vpll;
typedef vector<pair<int, int > > vpii;
#define FORR(x,arr) for(auto& x:arr)
#define ZERO(a) memset(a,0,sizeof(a))





//3111111111111111111111111111111
	

	void solve(){
		
		
		ini(n);
		ini(x);
		int tmp[n];
		FOR(i,0,n){
			in(tmp[i]);
		}
		int tmp1= 1;
		FOR(i,0,x){
			tmp1*=tmp[i];
		}
		int tmpx = tmp[0];
		FOR(i,x,n){
			// out((tmp1/tmpx)*tmp[i],tmp1);
			if(tmp[i]>tmp[i-x])out("Yes");
			else out("No");
			tmp1/=tmpx;
			tmp1*=tmp[i];
			tmpx = tmp[i-x+1];
		}
		

		
		


			
			
			


				
		


		
		
		
		

		


		
		
	}



	



















int32_t main() {
	oneforall
	oneforall
	oneforall
	oneforall
	oneforall
	oneforall
	oneforall
	oneforall
	oneforall
	oneforall
	oneforall
	oneforall
	oneforall 
	oneforall

	solve();
	


	return 0;
}
