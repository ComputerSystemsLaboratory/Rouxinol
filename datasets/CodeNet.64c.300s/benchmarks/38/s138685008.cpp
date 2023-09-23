/*
*
*/
#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<string>
#define CLR(ARR,NUM) memset(ARR,NUM,sizeof(ARR))
#define GETNUM(NUM) scanf("%d",&NUM)
#define faster_io() ios_base::sync_with_stdio(false)
using namespace std;
const int MAXN = 20;
int a[MAXN];
bool vaild;
void dfs(int x,int l,int r)
{
	if(x==10){
		vaild=true;
		return;
	}
	if(a[x]>l){
		dfs(x+1,a[x],r);
	}
	if(a[x]>r){
		dfs(x+1,l,a[x]);
	}
}

int main()
{
	int n;
	cin >> n;
	while(n--){
		for(int i=0;i<10;i++){
			GETNUM(a[i]);
		}
		vaild=false;
		dfs(0,0,0);
		if(vaild){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
	return 0;
}