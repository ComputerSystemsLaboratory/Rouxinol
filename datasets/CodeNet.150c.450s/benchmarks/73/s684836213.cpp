#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < n; i++)
using namespace std;

int n, q, N;
int dat[4*100000];

void init(){
	N = 1;
	while(N < n) N *= 2;
	rep(i,N*2) dat[i] = 0;
}

void add(int x, int y){
	x += N-1;
	dat[x] += y;
	while(x > 0){
		x = (x-1)/2;
		dat[x] += y;
	}
}

int getSum(int a, int b, int t, int r, int l){
	if(a >= l || b <= r) return 0;
	if(a <= r && l <= b) return dat[t];
	return getSum(a,b,t*2+1,r,(r+l)/2)+getSum(a,b,t*2+2,(r+l)/2,l);
}

int main(){
	scanf("%d%d",&n,&q);
	init();
	rep(i,q){
		int com, x, y;
		scanf("%d%d%d",&com,&x,&y);
		if(com == 0){
			x--;
			add(x,y);
		}
		else{
			x--; y--;
			printf("%d\n",getSum(x,y+1,0,0,N));
		}
	}
}