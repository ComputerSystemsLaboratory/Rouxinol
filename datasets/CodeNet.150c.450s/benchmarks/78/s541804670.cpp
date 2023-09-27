
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


const int MAXN = 1e6;
int ans[MAXN], ans2[MAXN];

vector<int> v, v2;
void f(vector<int> &v, int ans[]){
	for(int i=0;i<MAXN;i++){
		ans[i] = i;
	}
	for(int i=1;i<v.size();i++){
		for(int j=v[i];j<MAXN;j++){
			ans[j] = min(ans[j], ans[j - v[i]] + 1);
		}
	}
	return;
}
void ini(){
	for(int i=1;i<MAXN;i++){
		int a = i * (i+1) * (i+2) / 6;
		if(a > MAXN) break;
		v.pb(a);
		if(a%2) v2.pb(a);
	}
	f(v, ans);
	f(v2, ans2);
	return;
}

bool solve(int n){
	
	cout<< ans[n]<< " "<< ans2[n]<< endl;
	return true;
}

int main(){
	cout.setf(ios::fixed);
	cout.precision(10);
	
	ini();
	int n;
	while(cin>> n, n) solve(n);
	return 0;
}

 