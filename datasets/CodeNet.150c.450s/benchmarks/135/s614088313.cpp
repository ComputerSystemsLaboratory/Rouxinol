
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

#define pb push_back
#define dump(x)  cout << " "<< #x << " = " << (x) << endl;
typedef long long ll;
typedef complex<int> P;
const double EPS = 1e-10;
const double PI  = acos(-1.0);


const int dmax = 1500 * 1000 + 10;	//
int a[dmax] = {0};					//

bool solve(){
	int n, m;
	cin>> n>> m;
	if(n==0 && m==0) return false;
	
	vector<int> w(n), h(m);
	for(int i=0;i<n;i++) cin>> w[i];
	for(int i=0;i<m;i++) cin>> h[i];
	
	vector<int> W, H;
	for(int i=0;i<n;i++){
		int x = w[i];
		W.pb(x);
		for(int j=i+1;j<n;j++){
			x += w[j];
			W.pb(x);
		}
	}
	for(int i=0;i<m;i++){
		int x = h[i];
		H.pb(x);
		for(int j=i+1;j<m;j++){
			x += h[j];
			H.pb(x);
		}
	}
	
	int ans = 0;
	memset(a, 0, sizeof(a));
	for(int i=0;i<W.size();i++){
		a[W[i]]++;
	}
	for(int j=0;j<H.size();j++){
		ans += a[H[j]];
	}
	cout<< ans<< endl;
	
	return true;
}

int main(){
	cout.setf(ios::fixed);
	cout.precision(10);
	
	while(solve());
	return 0;
}

 