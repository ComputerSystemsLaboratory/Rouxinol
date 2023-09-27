#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	int n;
	int even[2]={19,20}; //偶数月の日数
	
	scanf(" %d", &n);
	for(int i=0; i<n; ++i){
		long ans=0;
		int y, m, d;
		scanf(" %d %d %d", &y, &m, &d); 
		
		int e=0;
		if(y%3==0) e=1;
		
		if(m%2==0)	ans+=19+e-d+1;	
		else ans+=20-d+1;
		++m;		
		
		while(m<11){
			if(m%2==0)	ans+=19+e;	
			else ans+=20;
			++m;	
		}
		
		for(int j=y+1; j<1000; ++j){
			if(j%3==0) ans+=200;
			else ans+=195;	
		}
		
		printf("%ld\n", ans);
	}	
	
	return 0;
}