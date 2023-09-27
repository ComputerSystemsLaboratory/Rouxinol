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
int dfs(int n,int x,vector<int> k,vector<vector<int>> v,vector<int> &a,vector<int> &b,int &count);


int main(){
	int n;
	cin>>n;
	vector<vector<int> > v(n);
	vector<int> k(n);
	int x;
	rep(i,n){
		cin>>x;
		cin>>k[i];
		v[i].resize(k[i]);
		rep(j,k[i]){
			cin>>v[i][j];
			v[i][j]--;
		}
	}
	vector<int> a(n),b(n);
	int count=1;
	a[0]=1;
	dfs(n,0,k,v,a,b,count);

	rep(i,n){
		if(a[i]==0){
			count++;
			a[i]=count;
			dfs(n,i,k,v,a,b,count);
		}
	}


	rep(i,n){
		cout<<i+1<<" "<<a[i]<<" "<<b[i]<<endl;
	}

	return 0;
}
int dfs(int n,int x,vector<int> k,vector<vector<int>> v,vector<int> &a,vector<int> &b,int &count){
	/*if(k[x]==0){
		count++;
		a[x]=count;
	}*/
	rep(i,k[x]){
		if(a[v[x][i]]==0){
			count++;
			a[v[x][i]]=count;
			dfs(n,v[x][i],k,v,a,b,count);
		}
		if(i==k[x]-1){
			k[x]=0;
		}
	}
	if(k[x]==0){
		count++;
		b[x]=count;
	}
	return 0;
}