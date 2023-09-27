#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	long n;
	long r[200000];
	
	scanf(" %ld", &n);
	for(long i=0; i<n; ++i) scanf(" %ld", &r[i]);
	
	long maxv=-2000000000;
	long minv=r[0];
	for(long i=1; i<n; ++i){
		maxv=max(maxv, r[i]-minv);
		minv=min(minv, r[i]);	
	}
	
	printf("%ld\n", maxv);
}