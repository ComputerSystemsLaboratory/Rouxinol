#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <stdio.h>
#define rep(i,o,u) for(int i = o;i <= u; i++)
typedef unsigned long long ll;
using namespace std;
int a[21];
int n,q,m;
bool solve(int i, int m){
	if(m == 0) return true;
	if(m < 0) return false;
	if(i > n) return false;
	bool res = solve(i+1,m) || solve(i+1,m-a[i]);
	return res;
}

int main(){
	cin >> n;
	rep(i,1,n) cin >> a[i];
	cin >> q;
	while(q--){
		cin >> m;
		if(solve(1,m)) cout << "yes" << endl;
		else cout << "no" << endl;
	}
	return 0;
}