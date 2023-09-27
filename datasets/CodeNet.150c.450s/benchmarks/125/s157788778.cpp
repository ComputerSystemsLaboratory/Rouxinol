#define _USE_MATH_DEFINES
#include<stdio.h>
#include<string>
#include<iostream>
#include<cctype>
#include<cstdio>
#include<vector>
#include<stack>
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
		int x,r;cin>>r>>x;
		for(int j=0;j<x;j++){
			int w;cin>>w;w--;t[i].push_back(w);
			//t[w].push_back(i);
		}
		sort(t[i].begin(),t[i].end());
	}/*
	for(int i=0;i<n;i++){
		sort(t[i].begin(),t[i].end());
		for(int j=0;j<t[i].size();j++)cout<<t[i][j];
		cout<<endl;
	}
	*/
	stack<int>S;
	bool F[105]={};
	S.push(0);
	int p=1;
	F[0]=1;
	vector<int>G(n),H(n);
	int g=1;
	G[0]=1;
	
	while(S.size()||p<n){
		g++;
		if(!S.size()){
			
			for(int i=1;i<n;i++)
				if(!F[i]){
					F[i]=1;
					S.push(i);
					G[i]=g;
					p++;
					break;
				}
			//	cout<<t[S.top()].size();
			//break;
				

		}
		else{
		
		//cout<<p;
		int v=S.top();
		int a=-1;
		for(int i=0;i<t[v].size();i++){
			if(!F[t[v][i]]){
				a=t[v][i];break;
			}
			//if(v==2)cout<<t[v][i]<<"&"<<F[i];
		}
		//cout<<a;
		//if(v==2&&a==-1)break;
		if(a==-1){
			H[S.top()]=g;
			S.pop();
			
			
		}
		else{
			//cout<<"%"<<a<<endl;
			F[a]=1;
			G[a]=g;
			S.push(a);
			p++;
		}
		}
	}
	/*for(int i=0;i<t[S.top()].size();i++)
		cout<<t[S.top()][i];
	cout<<"#"<<t[S.top()][1];
	*/
	for(int i=0;i<n;i++){
		cout<<i+1<<" "<<G[i]<<" "<<H[i]<<endl;
	}
	

	
	return 0;
}


	