#include<stdio.h>
#include<string>
#include<stdlib.h>
#include<math.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<string.h>
#include<map>
#include<queue>

using namespace std;

typedef pair<int,int> pii;

#define rep(i,j) for(int i=0;i<(j);i++)
#define reps(i,j,k) for(int i=j;i<=k;i++)
#define in(i,j,k) ((i)>=(j)&&(i)<=(k))


int main(){
	int n;
	double x[4],y[4],t;
	scanf("%d",&n);
	rep(j,n){
		rep(i,4)scanf("%lf%lf",x+i,y+i);
		rep(i,2){
			x[i]=x[i*2]-x[i*2+1];
			y[i]=y[i*2]-y[i*2+1];
		}
		puts(x[0]*y[1]-y[0]*x[1]==0?"YES":"NO");
	}
	return 0;
}