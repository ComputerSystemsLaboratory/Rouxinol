#include <iostream>
#include <stdio.h>
#include <cstring>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
#include <stdlib.h>
#include <queue>
#include <stack>
#include <utility>
#define rep(i,n) for(int i=0;i<n;i++)
#define rrep(i,n) for(int i=n-1;i>=0;i--)
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define ll long long
#define INF 1000000001
#define mod 1000000007
using namespace std;

int main(){
	//cin.tie(0);
	//ios::sync_with_stdio(false);

	int n;
	cin>>n;
	vector<ll> a(n+1);
	a[0]=1;
	a[1]=1;
	rep(i,n-1){
		a[i+2]=a[i+1]+a[i];
	}
	cout<<a[n]<<endl;
}