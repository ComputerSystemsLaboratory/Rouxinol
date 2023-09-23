
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <stack>
#include <cctype>
#include <complex>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <cassert>

using namespace std;


int dfs(int n, int s, int k){
	if(n==0 && s==0){
		return 1;
	}
	if(n==0) return 0;
	if(s<0) return 0;			//ココ
	if(k>9 || k>s) return 0;
	int res1 = dfs(n-1, s-k, k+1);
	int res2 = dfs(n, s, k+1);
	return res1 + res2;
}

bool solve(){
	int n,s;
	while(1){
		cin>> n>> s;
		if(n==0 && s==0) break;
		int res = dfs(n,s,0);
		cout<< res<< endl;
	}

	return true;
}

int main(){
	cout.setf(ios::fixed);
	cout.precision(10);
	solve();

	return 0;
}

 