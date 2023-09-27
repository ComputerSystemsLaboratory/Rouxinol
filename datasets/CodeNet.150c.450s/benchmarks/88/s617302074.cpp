#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	while(1){	
		int h, w; //h<w
		
		scanf(" %d %d", &h, &w);
		if(h==0) break;
		
		int r=h*h+w*w;
		int p=20000;
		int a, b;
		
		for(int i=1; i<=100; ++i){
			int j=i+1;
			while(i*i+j*j<r) ++j;
			//printf(" %d %d\n", i, j);
			if(i*i+j*j==r){
				if(i<=h) ++j;	
			}
			
			int tmp=i*i+j*j;
			if(tmp<p){
				p=tmp;
				a=i;
				b=j;
			}
		}
		
		printf("%d %d\n", a, b);
	}
	return 0;
}