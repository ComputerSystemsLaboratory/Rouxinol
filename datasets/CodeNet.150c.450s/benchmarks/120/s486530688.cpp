#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
typedef long long ll;

int r,c,d[10][10000];

int check(int a,int data[10][10000]){
	if(a==r){
		int res=0;
		for(int i=0;i<c;i++){
			int x=0;
			for(int j=0;j<r;j++) x+=data[j][i];
			res+=min(x,r-x);
		}
		return res;
	}
	int d1[10][10000],d2[10][10000];
	for(int i=0;i<r;i++) for(int j=0;j<c;j++) d1[i][j]=d2[i][j]=data[i][j];
	for(int i=0;i<c;i++) d2[a][i]=(d2[a][i]+1)&1;
	return min(check(a+1,d1),check(a+1,d2));
}

int main(){
	while(scanf("%d%d",&r,&c),r){
		for(int i=0;i<r;i++) for(int j=0;j<c;j++) scanf("%d",&d[i][j]);
		printf("%d\n",r*c-check(0,d));
	}
}