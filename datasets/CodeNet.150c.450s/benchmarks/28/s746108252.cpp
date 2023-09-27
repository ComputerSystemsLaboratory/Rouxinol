#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <string>
#include <cstdlib>
#define rep(i,o,u) for(int i = o;i < u; i++)
typedef long long ll;
using namespace std;   
ll w[100010];
int check(ll p,int n,int k){
	int i = 0;
	rep(j, 0, k){
		ll sum = 0;
		while (sum + w[i] <= p){
			sum += w[i++];
			if (i == n) return n;
		}
	}
	return i;
}
ll solve(int n,int k){
	ll left = 0;
	ll right = 10000 * 100000;
	ll mid;
	while (left + 1 < right){
		mid = (left + right) / 2;
		int v = check(mid, n, k);
		if (v >= n) right = mid;
		else left = mid;
	}
	return right;
}
int main(){
	int n,k;
	cin >> n >> k;
	rep(i, 0, n){ cin >> w[i]; }
	cout << solve(n, k) << endl;
	return 0;
}