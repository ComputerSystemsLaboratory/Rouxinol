#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	while(1){
		int n, m, p;
		int x[100];
		long sum=0;
		
		scanf(" %d %d %d", &n, &m, &p);
		if(n==0) break;
		for(int i=0; i<n; ++i){
			scanf(" %d", &x[i]);
			sum += x[i];
		}
		sum*=(100-p);
		if(x[m-1]==0)sum=0;	
		else sum/=x[m-1];
		printf("%ld\n", sum);
	}	
	
	return 0;
}