#define _USE_MATH_DEFINES
#include<stdio.h>
#include<string>
#include<iostream>
#include<cctype>
#include<cstdio>
#include<vector>
#include<stack>
#include<queue>
#include <algorithm>
#include<math.h>
#include<set>
#include<map>
#include<iomanip>

//#include<bits/stdc++.h>



using namespace std;




int main() {
	
	int n;
	cin>>n;
	vector<vector<int>>t(n,vector<int>(0));
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		for(int j=0;j<b;j++){
			int x;
			cin>>x;x--;t[i].push_back(x);
		}
	}
	queue<int>r;
	r.push(0);
	int g[105]={1000000};
	for(int i=0;i<n;i++){
		g[i]=10000000;
	}
	g[0]=0;
	set<int>p;
	p.insert(0);
	bool f[105]={};
	while(r.size()||p.size()<n){
		if(!r.size()){
			for(int i=0;i<n;i++){
				if(g[i]==10000000){
					g[i]=-1;
					p.insert(i);
					//r.push(i);
				}
			}
		}
		else{
		int v=r.front();
		for(int i=0;i<t[v].size();i++){
			if(!f[t[v][i]]){
				f[t[v][i]]=1;
			r.push(t[v][i]);
			p.insert(t[v][i]);
			g[t[v][i]]=min(g[t[v][i]],g[v]+1);
			}
			
		}
		r.pop();
		
		}
	}
	for(int i=0;i<n;i++)
		cout<<i+1<<" "<<g[i]<<endl;

	
	return 0;
}


	