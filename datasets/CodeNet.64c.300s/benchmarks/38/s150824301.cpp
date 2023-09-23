#include <cstdio>
#include <algorithm>
using namespace std;


int ip[13];
int c[13];


int main(){
	
	int ds = 0;
	scanf(" %d",&ds);
	
	for(int i=0;i<ds;i++){
		for(int j=1;j<13;j++){
			c[j] = 100;
		}
		c[0] = -1;
		
		for(int j=0;j<10;j++){
			scanf(" %d",&ip[j]);
		}
		
		for(int j=9;j>-1;j--){
			
			for(int k=0;k<11;k++){
				if(c[k]<ip[j]){
					c[k+1] = min(c[k+1],ip[j]);
				}
			}
		}
		int ans = 1;
		while(c[ans]< 50) ans++;
		if(ans<4) printf("YES\n");
		else printf("NO\n");
	
	}
	
	
	return 0;
}