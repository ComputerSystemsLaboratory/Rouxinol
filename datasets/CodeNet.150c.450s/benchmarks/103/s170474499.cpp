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
using namespace std;

int ans,sum;
void dfs(int i,int s,int n){
	if(s==sum&&n==0){
		ans++;
		return;
	}
	if(i==10||n==0)return;
	dfs(i+1,s+i,n-1);
	dfs(i+1,s,n);
}

int main(){
	int n;
	while(1){
		cin>>n>>sum;if(!n&&!sum)return 0;
		ans=0;
		dfs(0,0,n);
		cout<<ans<<endl;

	}

	return 0;
}