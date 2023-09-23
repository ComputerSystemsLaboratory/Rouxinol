#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int a, b, x[4], y[4];
		
	while( scanf(" %d %d %d %d %d %d %d %d", &x[0], &x[1], &x[2], &x[3], &y[0], &y[1], &y[2], &y[3]) != EOF ){
		int  hit=0, blow=0; 
	
		for(int i=0; i<4; ++i){
			for(int j=0; j<4; ++j){
				if(x[i]==y[j]){
					if(i==j) ++hit;
					else ++blow;
				}
			}
		}
	
		printf("%d %d\n", hit, blow);
	}
	
	return 0;
}