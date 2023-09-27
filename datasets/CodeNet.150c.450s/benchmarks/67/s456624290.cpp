
using namespace std;
typedef long long ll;
#include <string>
#include <vector>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <map>
#include <set>

#define out(S) cout<<(S)<<endl;
#define mod(i) ((i)%(ll)(1000000000 + 7))
ll modpow(ll i, ll j) { ll tmp = 1; while (j) { if (j % 2)tmp = mod(tmp*i); i = mod(i*i); j /= 2; }return tmp; }
#define divmod(a,b) (mod(a * modpow((ll)b,(ll)(1e9+5))))
#define For(i,a,b) for(size_t i=(a);i<(b);i++)
#define rFor(i,a,b) for(size_t i=(a)-1;i>=(b);i--)
#define Rep(i,a) for(size_t i=0;i<(a);i++)
#define rRep(i,a) for(size_t i=(a)-1;i>=0;i--)
#define pb(i) push_back(i);
/*#define Foreach(item,collection) for(auto item:collection)*/
using vi = vector<int>;


int main(){
	int N;
	int m;
	vi ans;
	while (cin >> N&&N)
	{
		int m = 0;
		For(n, 1, N / 2 + 2) {
			int sum = 0;
			bool fflag = false;
			For(i, n, N / 2 + 2) {
				sum += i;
				if (i == n + 1) fflag = true;
				if (sum >= N) break;
			}
			if (sum == N&&fflag) m++;
		}
		ans.pb(m);
	}
	for (auto a : ans) out(a);
	return 0;
}