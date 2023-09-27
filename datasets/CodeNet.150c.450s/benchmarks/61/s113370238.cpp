#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	while(1){
		long n, a, b, c, x;
		long frame;
		long y[100];
		
		cin >> n >> a >> b >> c >> x;
		if(n==0) break;
		for(long i=0; i<n; ++i) scanf(" %ld", &y[i]);
		
		frame=0;
		for(long i=0; i<n; ++i){
			
			while(frame<=10000 && y[i]!=x){
				//printf("x=%ld\n", x);
				x=(a*x+b)%c;
				++frame;
			}
			
			if(frame>10000 || i==n-1) break;
			x=(a*x+b)%c;
			++frame; //同時押しはできないので１フレーム進む
		}
		
		if(frame>10000) printf("-1\n");
		else printf("%ld\n", frame);
		
	}
	return 0;
}