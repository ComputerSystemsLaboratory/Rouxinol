/*
* Filename:    aoj0033.cpp
* Desciption:  DFS
* Created:     2016-03-02
* Author:      JIngwei Xu [mail:xu_jingwei@outlook.com]
*
*/
#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<cstring>
#define INT_MAX 2<<30
using namespace std;
//typedef long long ll;
int a[10],n;
int used[10];
bool ans=false;
bool check(){
	int ss=0;
	for (int i = 0; i < 10; i += 1)
	{
		if(used[i]==0){ss=a[i];break;}
	}
	if(ss==0)return true;
	for (int i = 0; i < 10; i += 1)
	{
		if(used[i]==0){
			if(a[i]<ss)return false;
			else ss=a[i];
		}
	}
	return true;
}
void dfs(int k,int rec){
	if(k==10){
		if(check())ans=true;
		return;
	}
	if(ans)return;
	if(a[k]>rec){
		used[k]=1;
		dfs(k+1,a[k]);
		if(ans)return;
		used[k]=0;
		dfs(k+1,rec);
		if(ans)return;
	}
	else{
		used[k]=0;
		dfs(k+1,rec);
	}
}
int main()
{
	scanf("%d",&n);
	for (int i = 0; i < n; i += 1)
	{
		for (int j = 0; j < 10; j += 1)
		{
			scanf("%d",&a[j]);
		}
		ans=false;
		for (int i = 0; i < 10; i += 1)
		{
			memset(used,0,sizeof(used));
			used[i]=1;
			dfs(i+1,a[i]);
			if(ans)break;
		}
		
		
		if(ans)printf("YES\n");
		else printf("NO\n");
		
	}
	return 0;
}