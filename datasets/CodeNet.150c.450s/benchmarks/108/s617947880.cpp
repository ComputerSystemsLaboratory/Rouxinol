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
	vector<int> k(n),d(n);
	vector<vector<int>> v(n);
	rep(i,n){
		int w;
		cin>>w;
		cin>>k[i];
		v[i].resize(k[i]);
		rep(j,k[i]){
			cin>>v[i][j];
			v[i][j]--;
		}
		d[i]=-1;
	}

	queue<int> q;
	q.push(0);
	d[0]=0;
	while(!q.empty()){
		int x=q.front();
		q.pop();
		rep(i,k[x]){
			if(d[v[x][i]]==-1){
				d[v[x][i]]=d[x]+1;
				q.push(v[x][i]);
			}
		}
	}
	rep(i,n){
		cout<<i+1<<" "<<d[i]<<endl;
	}
}