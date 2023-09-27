#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	int n;
	scanf(" %d", &n);
	for(int i=0; i<n; ++i){
		int b[10];
		for(int j=0; j<10; ++j) scanf(" %d", &b[j]);
		
		bool ans=false;
		//bitloopで全探索
		for(long j=(1<<10)-1; j>=0; --j){
			int left[11], right[11];
			int x=1, y=1;
			left[0]=right[0]=0;
			//printf("%ld\n", j);
			
			bool flag=true;
			
			for(int k=0; k<10; ++k){
				if( (j>>k)&1 ){ //右に入れる
					if(left[x-1] < b[k]) left[x++]=b[k];
					else flag=false;
				}
				else{
					if(right[y-1] < b[k]) right[y++]=b[k];
					else flag=false;
				}
				if(!flag) break;			
			}
			
			if(flag){
				ans=true;
				break;
			}
		}
		
	if(ans) printf("YES\n");
	else printf("NO\n");
	}
}