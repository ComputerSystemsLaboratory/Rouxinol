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
#include <fstream>
#include <random>
#include <map>
#include <unordered_map>
#define rep(i,n) for(int i=0;i<n;i++)
#define rrep(i,n) for(int i=n-1;i>=0;i--)
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define ll long long
#define INF 1000000001
#define mod 1000000007
#define p pair<int,int>
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
using namespace std;
int POW(int x,int y){return int(pow(double(x),double(y)));}



int main(){
	int q;
	cin>>q;
	vector<string> s0(q),t0(q);
	rep(i,q){
		cin>>s0[i]>>t0[i];
	}
	rep(i,q){

	string s,t;
	s=s0[i];
	t=t0[i];
	vector<vector<int>> a(s.size());
	rep(i,s.size()){
		a[i].resize(t.size());
		rep(j,t.size()){
			if(i==0 && j==0){
				if(s[0]==t[0]) a[0][0]=1;
				else a[0][0]=0;
			}else if(j==0){
				if(s[i]==t[0]) a[i][0]=1;
				else a[i][0]=a[i-1][0];
			}else if(i==0){
				if(s[0]==t[j]) a[0][j]=1;
				else a[0][j]=a[0][j-1];
			}else{
				if(s[i]==t[j]) a[i][j]=a[i-1][j-1]+1;
				else a[i][j]=max(a[i][j-1],a[i-1][j]);
			}
		}
	}
	cout<<a[s.size()-1][t.size()-1]<<endl;
	}
}
