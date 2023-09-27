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
int v,e,s,t,d;
lint dist[110][110];
int main() {
	std::cin>>v>>e;
	rep(i,v)rep(j,v)dist[i][j]=LINF;
	rep(i,v)dist[i][i]=0;
	rep(i,e){
		std::cin>>s>>t>>d;
		dist[s][t]=d;
	}
	rep(k,v){
		rep(i,v){
			rep(j,v)chmin(dist[i][j],dist[i][k]+dist[k][j]);
		}
	}
	rep(i,v){
		rep(j,v){
			rep(k,v){
				if(dist[i][j]>dist[i][k]+dist[k][j]){
					puts("NEGATIVE CYCLE");
					return 0;
				}
			}
		}
	}
	rep(i,v){
		rep(j,v-1){
			if(dist[i][j]<=1e10)std::cout<<dist[i][j]<<" ";
			else std::cout<<"INF ";
		}
		if(dist[i][v-1]<=1e10)std::cout<<dist[i][v-1]<<std::endl;
		else puts("INF");
	}
	return 0;
}
