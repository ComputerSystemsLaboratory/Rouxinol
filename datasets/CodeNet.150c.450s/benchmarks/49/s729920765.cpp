#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	while(1){
		int n, s[100];
		int ans=0;
		
		scanf(" %d", &n);	
		if(n==0) break;
		for(int i=0; i<n; ++i) scanf(" %d", &s[i]);
		sort(s, s+n);
		
		for(int i=1; i<n-1; ++i) ans+=s[i];
		
		printf("%d\n", ans/(n-2));
	}
	return 0;
}