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
	
	int n,aaa;
	cin>>n;
	vector<vector<int>> v(n),c(n);
	vector<int> k(n),ans(n);
	rep(i,n){
		cin>>aaa>>k[i];
		v[i].resize(k[i]);
		c[i].resize(k[i]);
		rep(j,k[i]){
			cin>>v[i][j]>>c[i][j];
		}
		ans[i]=-1;
	}
	ans[0]=0;
	int m=INF,mi,mj;
	rep(aaaa,n-1){
		m=INF;
		rep(i,n){
			if(ans[i]!=-1){
				rep(j,k[i]){
					if(ans[v[i][j]]==-1 && m>ans[i]+c[i][j]){
						m=ans[i]+c[i][j];
						mi=i;
						mj=j;
					}
				}
			}
		}
		ans[v[mi][mj]]=m;
	}
	rep(i,n){
		cout<<i<<" "<<ans[i]<<endl;
	}
	
}