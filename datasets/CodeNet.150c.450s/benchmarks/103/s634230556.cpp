#include <iostream>
#include <algorithm>
#include <cctype>
#include <cstdio>
#include <math.h>
#include <map>
#include <queue>
#include <string>
using namespace std;

int n,s,m[10];

int f(int n,int s,int m){
	if(n==1){
		if(s<m)return 1;
		else return 0;
	}
	int t=0;
	for(int i=0;i<=s&&i<m;i++)t+=f(n-1,s-i,i);
	return t;
}

int main() {
	while(cin>>n>>s){
		if(n+s==0)return 0;
		cout<<f(n,s,10)<<endl;
	}
}