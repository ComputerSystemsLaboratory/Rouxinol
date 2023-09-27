#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <stack>
#include <queue>
#include <cctype>
#include <complex>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <functional>
#include <cassert>
#include <iomanip>

using namespace std;

#define all(x) (x).begin(), (x).end
#define rall(x) (x).rbegin(), (x).rend()
typedef long long ll;
typedef complex<int> P;
typedef pair<int, int> pii;
const double EPS = 1e-10;
const double PI = acos(-1.0);
template <class F, class T> void convert(const F &f, T &t){	stringstream ss; ss << f; ss >> t;}



int f(int a, int x){
	return (int)(a * (100+x) / 100);
}

bool solve(){
	int x, y, s;
	cin>> x>> y>> s;
	if(x==0 && y==0 && s==0) return false;

	vector<int> h(s);
	for(int i=1;i<s;++i){
		int a = 1;
		while(f(a, x) <= i) ++a;
		--a;
		if(f(a, x) == i) h[i] = a;
	}

	int ans = 0;
	for(int i=1;i<s;++i) ans = max(ans, f(h[i], y) + f(h[s-i], y));
	cout<< ans<< endl;
	return true;
}

int main(){
	cout.setf(ios::fixed); cout.precision(10);
	while(solve());
	return 0;
}