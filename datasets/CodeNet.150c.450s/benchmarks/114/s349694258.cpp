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
	
	int n;
	cin>>n;
	vector<vector<int>> a(n);
	rep(i,n){
		a[i].resize(n);
		rep(j,n){
			cin>>a[i][j];
			if(a[i][j]==-1)a[i][j]=INF;
		}
	}
	vector<int> t(n);
	rep(i,n){
		t[i]=0;
	}
	t[0]=1;
	int ans=0;
	rep(ii,n-1){
		int m=100000;
		int pm;
		rep(i,n){
			rep(j,n){
				if(t[i]==1 && t[j]==0 && m>a[i][j]){
					m=a[i][j];
					pm=j;
				}
			}
		}
		t[pm]=1;
		ans+=m;
	}
	cout<<ans<<endl;
	
}