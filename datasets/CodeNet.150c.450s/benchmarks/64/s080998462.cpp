#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

bool f(int v, int* a, int n){
	if(v == 0) return true;
	if(v<0 || n==0) return false;
	return f(v-a[n-1], a, n-1)||f(v,a,n-1);
}

int main(){
	int n,m;
	int a[30],v[300];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf(" %d",&a[i]);
	}
	scanf("%d", &m);
	for(int i=0;i<m;i++){
		scanf(" %d", &v[i]);
	}
	for(int i=0;i<m;i++){
		if( f(v[i], a, n) ){
			printf("yes\n");
		} else {
			printf("no\n");
		}
	}
	return 0;
}