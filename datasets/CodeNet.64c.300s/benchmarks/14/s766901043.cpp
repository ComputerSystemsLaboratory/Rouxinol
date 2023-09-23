#include<cstdio>
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

#define reps(i,f,n) for(int i=f;i<int(n);i++)
#define rep(i,n) reps(i,0,n)

int main(){
	int a,b;
	cin>>a>>b;
	
	if(a<b)puts("a < b");
	if(a>b)puts("a > b");
	if(a==b)puts("a == b");
}