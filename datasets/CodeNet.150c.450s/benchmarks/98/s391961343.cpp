#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	while(1){
		int n, m;
		int taro=0, hanako=0;
		int t[100], h[100];
		
		scanf(" %d %d", &n ,&m);
		if(n==0 && m==0) break;
		for(int i=0; i<n; ++i){
			scanf(" %d", &t[i]);
			taro+=t[i];
		}
		for(int i=0; i<m; ++i){
			scanf(" %d", &h[i]);
			hanako+=h[i];
		}	
		
		bool flag=false;
		
		int a, b;
		for(int i=0; i<n; ++i){
			for(int j=0; j<m; ++j){
				if(taro-t[i]+h[j] == hanako-h[j]+t[i]){
					flag=true;
					a=i;
					b=j;
					break;	
				}
			}
			if(flag) break;
		}
		
		if(flag) printf("%d %d\n", t[a], h[b]);
		else printf("-1\n");
	}
	return 0;
}