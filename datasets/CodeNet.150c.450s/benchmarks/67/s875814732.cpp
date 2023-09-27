#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	while(1){
		int n, ans=0;
		
		scanf(" %d", &n);
		if(n==0) break;
		
		for(int i=2; i<n; ++i){ //連続する正の数の個数(n未満は明らか)
			if(i%2==0){ //偶数個
				int q=n/i;
				int w=i/2;
				if(q-w+1>=1 && n%i==w) ++ans;
			}
			else{ //奇数個
				if(n%i != 0) continue;
				else{
					int q=n/i;
					int w=i/2;
					if(q-w>=1) ++ans;
				}
			}
		}	
	
		printf("%d\n", ans);
	}
	return 0;
}