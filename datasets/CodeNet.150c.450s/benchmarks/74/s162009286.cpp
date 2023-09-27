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
	int n,m;
	cin>>n>>m;
	vector<int> c(m),a(n+1);
	rep(i,m){
		cin>>c[i];
	}
	a[0]=0;
	FOR(i,1,n+1){
		int mi=INF;
		rep(j,m){
			if(i-c[j]>=0){
				if(a[i-c[j]]<mi){
					mi=a[i-c[j]];
				}
			}
		}
		a[i]=mi+1;
	}
	cout<<a[n]<<endl;
}