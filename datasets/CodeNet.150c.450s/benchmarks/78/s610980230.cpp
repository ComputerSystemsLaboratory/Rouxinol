#include <iostream>
#include <algorithm>
#include <cassert>
#include <cctype>
#include <complex>
#include <cstdio>
#include <map>
#include <math.h>
#include <queue>
#include <set>
#include <string>
#include <vector>
using namespace std;

int p[200],q[50];

int f(int n,int m,int c){
	if(c==4&&n>0)return 5;
	if(n<10)return min(c+n/4+n%4,5);
	int rec=5,i=0;
	while(p[i]<n/(4-c))i++;
	for(i;p[i]<=m;i++)rec=min(rec,f(n-p[i],min(p[i],n-p[i]),c+1));
	return rec;
}

int g(int n,int m,int c,int *M){
	if(c==*M)return *M;
	if(n<165)return c+n/35+n%35;
	int i=44;
	while(q[i]>m)i--;
	for(i;i>0;i--){
		*M=min(*M,g(n-q[i],min(q[i],n-q[i]),c+1,M));
	}
	return *M;
}

int main(){
	for(int i=0;(i+1)*(i+2)*(i+3)/6<=1000000;i++)p[i]=(i+1)*(i+2)*(i+3)/6;
	for(int i=0;(4*i+1)*(4*i+2)*(4*i+3)/6<=1000000;i++)q[i]=(4*i+1)*(4*i+2)*(4*i+3)/6;
	int N;
	while(cin>>N){
		if(!N)return 0;
		int ans=9999;
		cout<<f(N,N,0)<<" "<<g(N,N,0,&ans)<<endl;
	}
}