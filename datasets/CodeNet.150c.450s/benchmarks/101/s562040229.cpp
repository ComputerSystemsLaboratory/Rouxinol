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
	int n,m;
	cin>>n>>m;
	vector<int> d(n);
	vector<vector<int>> g(n);
	int a,b;
	rep(i,m){
		//cin>>a[i]>>b[i];
		scanf("%d %d",&a,&b);
		g[a].push_back(b);
		g[b].push_back(a);
	}
	int q;
	cin>>q;
	vector<int> s(q),t(q);
	rep(i,q){
		//cin>>s[i]>>t[i];
		scanf("%d %d",&s[i],&t[i]);
	}
	rep(i,n){
		d[i]=0;
	}
	int check=1;
	int i=1;//???
	int i2=0;//???????????°
	while(check){
		stack<int> st;
		st.push(i2);
		d[i2]=i;
		while(!st.empty()){
			int x=st.top();
			st.pop();
			rep(j,g[x].size()){
				if(d[g[x][j]]==0){
					st.push(g[x][j]);
					d[g[x][j]]=i;
				}
			}
		}
		check=0;
		rep(j,n){
			if(d[j]==0){
				check=1;
				i++;
				i2=j;
				break;
			}
		}
	}

	rep(i,q){
		if(d[s[i]]==d[t[i]]){
			printf("yes\n");
		}else{
			printf("no\n");
		}
	}



	
}