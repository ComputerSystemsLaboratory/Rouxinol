#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <string>
#include <sstream>
#include <complex>
#include <vector>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>
#define rep(i, n) for(int i = 0;i < n;i++)
#define repb(i, n) for(int i = n;i >= 0;i--)
#define reps(i, m, n) for(int i = m;i < n;i++)
#define repsb(i, m, n) for(int i = m;i >= n;i--)
#define SORT(v, n) sort(v, v+n);
#define VSORT(v) sort(v.begin(), v.end());
#define llong long long
#define pb(a) push_back(a)
#define INF 999999999
using namespace std;

int total_day(int y,int m,int d){
	int day=0;

	for(int i=1; i < y; i++){
		for(int j=1; j<=10; j++){
			if(i%3==0||j%2==1) day+=20;
			else day+=19;
		}
	}
	for(int j=1; j < m; j++){
		if(y%3==0||j%2==1) day+=20;
		else day+=19;
	}
	day+=d;

	return day;
}
int main(){
	int n,a;
	cin>>n;
	int y[100],m[100],d[100];
	rep(i,n){
		cin>>y[i]>>m[i]>>d[i];
	}
	rep(i,n){
		a=total_day(1000,1,1)-total_day(y[i],m[i],d[i]);
		cout<<a<<endl;

	}

	return 0;
}
