#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	while(1){
		int n, p=1000, ans=0, i=0;
		int m[6]={500, 100, 50, 10, 5, 1};
		
		scanf(" %d", &n);
		if(n==0) break;
	
		p-=n;
		for(int i=0; i<6; ++i){
			if(p>=m[i]){
				int t=p/m[i];
				ans+=t;
				p-=m[i]*t;
			}			
		}
	
		printf("%d\n", ans);
	}

	return 0;
}