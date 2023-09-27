#include <iostream>
#include <climits>
#include <numeric>
#include <cassert>
#include <algorithm>
#include <queue>
#include <map>
#include <stack>
#include <set>
#include <vector>
#include <array>
#include <memory>

#define IN(a,b) (a.find(b) != a.end())
#define p(a,b) make_pair(a,b)
#define readVec(a) for (int __i = 0; __i<(int)a.size();__i++){cin>>a[__i];}

// jimjam

template<typename T>
void pMin(T &a, T b) {if (b<a){a=b;}}
template<typename T>
void pMax(T &a, T b) {if (b>a){a=b;}}
template<typename T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& c);
template<typename A, typename B>
std::ostream& operator<<(std::ostream& os, const std::pair<A,B>& c) {std::cout << "(" << c.first << ", " << c.second << ")";return os;}
template<typename T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& c) {
	if (c.size() == 0) {os << "{}"; return os;}
	os << "{" << c[0];
	for (int64_t i = 1; i < (int)c.size(); i++) {os <<", "<<c[i];}
	os << "}";
	return os;
}

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	vector<string> v = {
		"AC",
		"WA",
		"TLE",
		"RE"
	};

	map<string,int> cnt;
	for (string s: v) cnt[s]=0;
	for (int i = 0; i < n; i++) {
		string s; cin >> s;
		cnt[s]++;
	}
	for (string s: v) {
		cout << s << " x " << cnt[s] << endl;
	}

	return 0;
}


