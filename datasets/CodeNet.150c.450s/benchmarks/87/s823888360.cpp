
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
#define REP(i,b) for(size_t i=0;i<(b);i++)
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
vector<ll> sieveOfEratosthenes(int max) {ll prime;double sqrtmax = sqrt(max);vector<ll> primeVec, searchVec;FOR(i, 2, max + 1) searchVec.push_back(i);do{prime = searchVec[0];primeVec.push_back(prime);auto itr = remove_if(beginend(searchVec), [=](ll x)->bool {return x%prime == 0; });searchVec.erase(itr, searchVec.end());} while (prime < sqrtmax);primeVec.reserve(primeVec.size() + searchVec.size());primeVec.insert(primeVec.end(), beginend(searchVec));return primeVec;}
bool isPrime(ll x) {if (x == 2) return true;if (x < 2 || x % 2 == 0) return false;ll i = 3;while (i <= sqrt(x)) {if (x%i == 0) return false;i += 2;}return true;}

int n;
vvi pazle;

int pzdelete(int y) {
	int x = -1;
	int cnt = 0;
	int add = 0;
	REP(i, 5) {
		if (x == -1) x = pazle[y][i];

		if (x == pazle[y][i])cnt++;
		else { x = pazle[y][i]; cnt = 1; }

		if (cnt >= 3) {
			REP(k, cnt) {
				pazle[y][i - k] = 0;
				add = x*cnt;
			}
		}
	}
	return add;
}

void pzdown() {
	REP(i, 5) {
		rREP(k, n) {
			if (pazle[k][i]) continue;
			//0?????£???
			int g = k-1;
			while (g >= 0) { if (pazle[g][i] != 0) { break; } g--; }
			if (g < 0) continue;
			pazle[k][i] = pazle[g][i];
			pazle[g][i] = 0;
		}
	}
}

void pzshow() {
	Foreach(i, pazle) cout << i[0] << " " << i[1] << " " << i[2] << " " << i[3] << " " << i[4] << endl;
}

void solve() {
	ll ans = 0;
	while (1)
	{
		int add = 0;
		REP(i, n) {
			add += pzdelete(i);
		}
		if (add == 0) break;
		ans += add;
		::pzdown();
	}
	out(ans);
	return;
}
int main() {
	while (cin>>n,n)
	{
		pazle.clear();
		pazle.resize(n);
		REP(i, n) {
			vi x(5);
			REP(k, 5)cin >> x[k];
			pazle[i] = x;
		}
		::solve();
	}

	return 0;
}