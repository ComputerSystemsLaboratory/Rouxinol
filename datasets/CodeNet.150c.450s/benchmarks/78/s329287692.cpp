
#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <tuple>
#include <set>
#include <stack>
#include <queue>


using namespace std;
using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using pii = pair<int, int>;
using vpii = vector<pii>;
using pci = pair<char, int>;
using vpci = vector<pci>;
#define out(S) cout<<(S)<<endl;
#define REP(i,b) for(int i=0;i<(b);i++)
#define rREP(i,b) for(int i=(b)-1;i>=0;i--)
#define FOR(i,a,b) for(size_t i=(a);i<(b);i++)
#define rFOR(i,a,b) for(int i=(a)-1;i>=(b);i--)
#define Foreach(item,collection) for(auto item:collection)
#define mod(i) ((i) % (ll)(1e9 + 7))
ll modpow(ll i, ll j) { ll tmp = 1; while (j) { if (j % 2)tmp = mod(tmp*i); i = mod(i*i); j /= 2; }return tmp; }
#define divmod(a,b) (mod(a * modpow((ll)b,(ll)(1e9 + 5))))
#define Yes out("Yes")
#define No out("No")
#define NO out("NO")
#define YES out("YES")
#define INF 1e10;
#define ShowAll(collection) for(auto i:collection){out(i);}
#define IfOut(condition,text) if((condition)){out(text);return 0;}
#define IfeOut(condition,itext,etext) if(condition){out(itext);return 0;}else{out(etext);return 0;}
#define Select(collection,condition,result) Foreach(i,collection){result+=condition;}
#define GetAuto(_N,vect) {cin>>_N;vect.resize(_N);REP(i,_N){cin>>vect[i];}}
#define beginend(vec) (vec).begin(),(vec).end()
#define pb(item) push_back(item)
#define removeAll(vec,deleg) auto itr=remove_if(beginend(vec),deleg);vec.erase(itr,vec.end());
void removeAt(string& s, int index) { s.erase(index, 1); }
template<typename T> void removeAt(vector<T>& v, int index) { v.erase(v.begin() + index); }
ll manhattanDistance(ll x1, ll y1, ll x2, ll y2) { return (abs(x2 - x1) + abs(y2 - y1)); }
vector<ll> sieveOfEratosthenes(int max) { ll prime; double sqrtmax = sqrt(max); vector<ll> primeVec, searchVec; FOR(i, 2, max + 1) searchVec.push_back(i); do { prime = searchVec[0]; primeVec.push_back(prime); auto itr = remove_if(beginend(searchVec), [=](ll x)->bool {return x%prime == 0; }); searchVec.erase(itr, searchVec.end()); } while (prime < sqrtmax); primeVec.reserve(primeVec.size() + searchVec.size()); primeVec.insert(primeVec.end(), beginend(searchVec)); return primeVec; }
bool isPrime(ll x) { if (x == 2) return true; if (x < 2 || x % 2 == 0) return false; ll i = 3; while (i <= sqrt(x)) { if (x%i == 0) return false; i += 2; }return true; }


vi dp, odddp;
int main() {
	int N;
	int p = 4;
	REP(i, 1000001) {
		dp.pb(i);
		odddp.pb(i);
	}
	int n = 3;
	while (p<=1000000)
	{
		for (int i = 0; i+p <=1000000; i++)
		{
			dp[i + p] = min(dp[i + p], dp[i] + 1);
		}
		if (p % 2 == 1) {
			for (int i = 0; i + p <= 1000000; i++)
			{
				odddp[i + p] = min(odddp[i + p], odddp[i] + 1);
			}
		}

		p = n*(n + 1)*(n + 2) / 6;
		n++;
	}

	

	while (cin>>N,N)
	{
		cout << dp[N] << " " << odddp[N] << endl;
	}

	return 0;
}