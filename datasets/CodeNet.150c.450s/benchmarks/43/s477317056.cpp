#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	while(1){
		int n;
		long a=0, b=0;
		
		
		scanf(" %d", &n);
		if(n==0) break;
		for(int i=0; i<n; ++i){
			int x, y;
			scanf(" %d %d", &x, &y);
			
			if(x>y) a+=x+y;
			else if(x<y) b+=x+y;
			else{
				a+=x; b+=y;
			}
		}
	
		printf("%ld %ld\n", a, b); 
	}

	return 0;
}