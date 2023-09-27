#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
	int a,b,c;
	while(scanf("%d%d%d",&a,&b,&c),a){
		int ret=0;
		for(int i=1;i<c;i++){
			for(int j=1;j<c;j++){
				if(i*(100+a)/100+j*(100+a)/100==c){
					ret=max(ret,i*(100+b)/100+j*(100+b)/100);
				}
			}
		}
		printf("%d\n",ret);
	}
}