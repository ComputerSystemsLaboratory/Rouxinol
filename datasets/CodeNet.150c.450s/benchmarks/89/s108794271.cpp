#include<iostream>
#include<cstdio>
#define MAX 1000001
using namespace std;

bool eratos[MAX];

void MakePrimes(){
	for(int i = 0; i < MAX; ++i){
		eratos[i] = true;
	}
	eratos[1] = false;
	for(int i = 2; i < MAX; ++i){
		if( eratos[i] ){
			for(int j = 2; i * j < MAX; ++j){
				eratos[ i * j ] = false;
			}
		}
	}
}

int main(){
	MakePrimes();
	while(true){
		int ans = 0;
		int a,d,n;
		scanf("%d%d%d", &a, &d, &n);
		if( a == 0 && d == 0 && n == 0 ) break;
		for(int i = 0, j = 0; i < n; ++j){
			if( eratos[ a + j * d ] ) ++i;
			if( i == n )
				ans = a + j * d;
		}
		printf("%d\n", ans);
	}
	return 0;
}