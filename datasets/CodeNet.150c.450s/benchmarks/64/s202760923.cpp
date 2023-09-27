/**
filename:5_A-Exhaustive_Search.c
created on 21.9.2015 by charis
edited on 21.9.2015 by charis
*/

#include<cstdio>
/*
int n;
int S[10000];
int r;

void solve(int i, int A[], int m){
	if(i == n) {
		int s = 0;
		for(int k=0; k<n; k++) {	
			if( S[k] == 1) s += A[k] ;
			if (s == m) r=1 ;
		}
		if (s != m) r!= 0;
	}
	else {
		solve(i + 1, A, m) ;
		S[i] = 1 ;
		solve(i + 1, A, m) ;
		S[i] = 0 ;
	}
}
          time over
*/
int n;

int solve(int i, int A[], int m, int res){
	if(res == m) return 1 ;
	if (i >= n) return 0 ;
	
	res = solve(i+1, A, m, res) || solve(i+1, A, m, res + A[i]);
	
	return res ;
}

int main(){
	int q, m;
	scanf("%d", &n) ;
	int A[n] ;
	for (int i=0; i<n; i++) scanf("%d", &A[i]) ;
	
	scanf("%d", &q) ;
	for (int j=0; j<q; j++){
		scanf("%d", &m) ;
		int i=0, res=0;
		if(solve(i, A, m, res)) {
			printf("yes\n") ;
		}
		else printf("no\n") ;
	}
	
	return 0;
}