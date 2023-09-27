#define _CRT_SECURE_NO_WARNINGS
#pragma target("avx")
#pragma optimize("O3")
#pragma optimize("unroll-loops")
#include <algorithm>
#include <bitset>
#include <cassert>
#include <cfloat>
#include <climits>
#include <cmath>
#include <complex>
#include <ctime>
#include <deque>
#include <fstream>
#include <functional>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <list>
#include <map>
#include <memory>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define REP(i,n) for(int i=1;i<=(int)(n);i++)
#define all(V) V.begin(),V.end()
typedef long long lint;
typedef std::pair<lint, lint> P;
constexpr int INF = INT_MAX/2;
constexpr lint LINF = LLONG_MAX/2;
constexpr double eps = 1e-9;
template<class T>
class prique :public std::priority_queue<T, std::vector<T>, std::greater<T>> {};
template <class T, class U>
inline bool chmax(T& lhs, const U& rhs) {
	if (lhs < rhs) {
		lhs = rhs;
		return 1;
	}
	return 0;
}
template <class T, class U>
inline bool chmin(T& lhs, const U& rhs) {
	if (lhs > rhs) {
		lhs = rhs;
		return 1;
	}
	return 0;
}
inline lint gcd(lint a, lint b) {
	while (b) {
		lint c = a;
		a = b; b = c % b;
	}
	return a;
}
inline lint lcm(lint a, lint b) {
	return a / gcd(a, b) * b;
}
bool isprime(lint n) {
	if (n == 1)return false;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0)return false;
	}
	return true;
}
lint mypow(lint a, lint b) {
	if (!b)return 1;
	if (b & 1)return mypow(a, b - 1) * a;
	lint memo = mypow(a, b >> 1);
	return memo * memo;
}
lint modpow(lint a, lint b, lint m) {
	if (!b)return 1;
	if (b & 1)return modpow(a, b - 1, m) * a % m;
	lint memo = modpow(a, b >> 1, m);
	return memo * memo % m;
}
template<typename T>
void printArray(std::vector<T>& vec) {
	rep(i, vec.size() - 1)std::cout << vec[i] << " ";
	std::cout << vec.back() << std::endl;
}
template<typename T>
void printArray(T l, T r) {
	T rprev = r;
	rprev--;
	for (T i = l; i != rprev; i++) {
		std::cout << *i << " ";
	}
	std::cout << *rprev << std::endl;
}
std::string to_string(std::vector<int>& vec) {
	std::string res = "[";
	rep(i, vec.size() - 1)res += std::to_string(vec[i]) + ", ";
	res += std::to_string(vec.back()) + "]";
	return res;
}
class UnionFind {
protected:
	std::vector<int> par, rank, size;
public:
	UnionFind(unsigned int size) {
		par.resize(size); rank.resize(size, 0); this->size.resize(size, 1);
		rep(i, size) {
			par[i] = i;
		}
	}
	int find(int n) {
		if (par[n] == n)return n;
		return par[n] = find(par[n]);
	}
	void unite(int n, int m) {
		n = find(n);
		m = find(m);
		if (n == m)return;
		if (rank[n] < rank[m]) {
			par[n] = m;
			size[m] += size[n];
		}
		else {
			par[m] = n;
			size[n] += size[m];
			if (rank[n] == rank[m])rank[n]++;
		}
	}
	bool same(int n, int m) {
		return find(n) == find(m);
	}
	int getsize(int n) {
		return size[find(n)];
	}
};
class PersistantUnionFind :UnionFind {
	std::vector<P> notparent;
	std::vector<std::vector<std::pair<int, int>>> sizevec;
	int opcount = 0;
public:
	PersistantUnionFind(unsigned int size) :UnionFind(size) {
		notparent.resize(size); sizevec.resize(size);
		rep(i, size) {
			par[i] = i;
			rank[i] = 0;
			sizevec[i].push_back(std::make_pair(-1, 1));
			notparent[i] = std::make_pair(INF, i);
		}
	}
	int find(int n, int t = INF) {
		if (opcount <= t) {
			if (par[n] == n)return n;
			return par[n] = find(par[n]);
		}
		if (notparent[n].first <= t)return find(notparent[n].second, t);
		return n;
	}
	void unite(int n, int m) {
		n = find(n);
		m = find(m);
		if (n == m) {
			opcount++;
			return;
		}
		if (rank[n] < rank[m]) {
			par[n] = m;
			notparent[n] = std::make_pair(opcount, m);
			sizevec[m].emplace_back(opcount, sizevec[m].back().second + sizevec[n].back().second);
		}
		else {
			par[m] = n;
			notparent[m] = std::make_pair(opcount, n);
			sizevec[n].emplace_back(opcount, sizevec[n].back().second + sizevec[m].back().second);
			if (rank[n] == rank[m])rank[n]++;
		}
		opcount++;
	}
	bool same(int n, int m, int t = INF) {
		return find(n, t) == find(m, t);
	}
	int getsize(int n, int t = INF) {
		n = find(n, t);
		auto ite = std::lower_bound(all(sizevec[n]), std::make_pair(t, 0));
		if (ite == sizevec[n].end())ite--;
		if (t < (*ite).first)ite--;
		return (*ite).second;
	}
};
int v,e;
std::vector<std::pair<int,P>> vec;
int main() {
	std::cin>>v>>e;
	rep(i,e){
		int s,t,w;
		std::cin>>s>>t>>w;
		vec.emplace_back(w,std::make_pair(s,t));
	}
	std::sort(all(vec));
	UnionFind uf(v);
	int ans=0;
	rep(i,e){
		if(!uf.same(vec[i].second.first,vec[i].second.second)){
			uf.unite(vec[i].second.first,vec[i].second.second);
			ans+=vec[i].first;
		}
	}
	std::cout<<ans<<std::endl;
	return 0;
}
