#include<cstdio>
#include<algorithm>
#include<cstdlib>
#include<iostream>
#include<cstring>

using namespace std;

int main(void){
	int x,y,s;
	while(1){
		int res=0;
		scanf("%d %d %d",&x,&y,&s);
		if(x+y+s==0)break;
		for(int i=1;i<s;i++){
			for(int j=1;j<s;j++){
				if(i*(100+x)/100+j*(100+x)/100!=s)continue;
				res=max(res,i*(100+y)/100+j*(100+y)/100);
			}
		}
		printf("%d\n",res);
	}
	return 0;
}