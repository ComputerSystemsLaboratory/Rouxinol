#include <algorithm>
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>
#include <sstream>
#include <vector>
#include <set>
#include <stack>
#include <map>
#include <cmath>
#include <queue>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
using namespace std;
typedef unsigned long long ll;
#define MAX_N 100000
#define INF 100000000000
ll dp[MAX_N];

void init(){
	rep(i,MAX_N){
		dp[i] = INF;
	}
}


int main()
{
	init();
	int n;
	cin>>n;
	ll *a = new ll[n];
	rep(i,n){
		cin>>a[i];
	}
	for(int i = 0; i < n; i++){
		*lower_bound(dp,dp + n,a[i]) = a[i];
	}
	cout<<lower_bound(dp,dp + n,INF) - dp<<endl;
	return 0;
}


