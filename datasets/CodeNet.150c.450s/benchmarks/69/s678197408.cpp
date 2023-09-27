#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<set>
#include<string>
#include<stack>
#include<cstdio>
using namespace std;

#define rep(i,x) for(int i=0;i<x;i++)
#define rep1(i,x) for(int i=1;i<=x;i++)
#define sor(v) sort(v.begin(),v.end())
#define min_3(a,b,c) min(a,min(b,c))
#define max_3(a,b,c) max(a,max(b,c))

const int INF=1000000000;
const int dre_4[4][2]={{1,0},{0,1},{-1,0},{0,-1}};
const int dre_8[8][2]={{1,0},{1,1},{0,1},{-1,1},{-1,0},{-1,-1},{0,-1},{1,-1}};

int main(){
	int n;
	cin>>n;
	
	rep(i,n){
		int a[12];
		rep(j,10)cin>>a[j];
		
		int b=0,c=0;
		bool ret=true;
		rep(j,10){
			if(a[j]>b)b=a[j];
			else if(a[j]>c)c=a[j];
			else ret=false;
		}
		
		if(ret)cout<<"YES\n";
		else cout<<"NO\n";
	}
}