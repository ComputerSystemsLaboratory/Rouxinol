#include <cstdio>
#include <iostream>
#include <utility>
using namespace std;

int main(){
	while(1){
		int n, d[10000], p[10000];
		long m, ans=0;
		
		//入力
		scanf(" %d %ld", &n, &m);
		if(n==0) break;	
		for(int i=0; i<n; ++i){
			scanf(" %d %d", &d[i], &p[i]);
			ans += d[i]*p[i];
		 }
		//期待値の最も高いところから順に護衛
		for(int i=0; i<n; ++i){
			for(int j=i; j<n; ++j){
				if(p[i]<p[j]){
					swap(p[i], p[j]);
					swap(d[i], d[j]);	
				}
			}
		}
				
		for(int i=0; i<n; ++i){
			if(m>=d[i]){
				m -= d[i];	
				ans -= d[i]*p[i]; 
			}
			else{
				ans -= m*p[i];	
				break;
			}
		} 
		printf("%ld\n", ans);	
	}
	return 0;
}