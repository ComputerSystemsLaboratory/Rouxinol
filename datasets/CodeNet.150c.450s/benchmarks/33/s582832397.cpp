#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	while(1){
		int x, y, s;
		int ans=0;
		
		scanf(" %d %d %d", &x,&y, &s);
		if(x==0) break;
		for(int i=1; i<s; ++i){//税抜き
			int p1=i*(100+x)/100;
						
			for(int j=s; j>0; --j){//税抜き
				int p2=j*(100+x)/100;
				if(p1+p2==s){
					int tmp=i*(100+y)/100 + j*(100+y)/100;		
					if(tmp>ans) ans=tmp;
					break;
				}
			}
		}
		
		printf("%d\n", ans);
	}
	return 0;
}