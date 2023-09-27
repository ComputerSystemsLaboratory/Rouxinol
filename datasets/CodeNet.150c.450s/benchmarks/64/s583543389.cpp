#include <cstdio>
#include <iostream>
using namespace std;

int n, a[20];

bool solve(int x, int y){ //???x???????????¨???,?????????y
	if(y==0) return true;
	
	if(x==n) return false;
	
	bool ret = solve(x+1, y) || solve(x+1, y-a[x]);
	return ret;
}

int main(){
	scanf(" %d", &n);
	for(int i=0; i<n; ++i) scanf(" %d", &a[i]);
	
	int q;
	scanf(" %d", &q);
	for(int i=0; i<q; ++i){
		int m;
		scanf(" %d", &m);
	
		if(solve(0, m)) printf("yes\n");
		else printf("no\n");
	}
	
}