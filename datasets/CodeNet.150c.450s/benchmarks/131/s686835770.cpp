#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;

long calc(long p, int d){
	int q[6], r[6];
	
	for(int i=0; i<d; ++i){
		q[d-i-1]=p%10;
		r[d-i-1]=p%10;	
		p /= 10;
	}
	sort(r, r+d, greater<int>());
	sort(q, q+d);
	
	long mx=0, mn=0, t=1;
	
	for(int i=d-1; i>=0; --i){
		mx += r[i]*t;
		mn += q[i]*t;
		t *= 10;
	}
	//printf("%ld - %ld", mx, mn);
	return mx-mn;
}

int main(){
	while(1){
		long a[1000];
		int digit;
		
		scanf(" %ld %d", &a[0], &digit);
		if(digit==0) break;
		
		int i=0, j=0;
		while(1){
			a[i+1]=calc(a[i], digit);
			++i;
			//printf("a[%d]=%ld\n", i, a[i]);
			
			bool ok=true;
			for(j=0; j<i; ++j){
				if(a[i] == a[j]){
					ok=false;
					break;
				}
			}
			if(!ok) break;
		}
		
		printf("%d %ld %d\n",j, a[i], i-j);
	}
	return 0;
}