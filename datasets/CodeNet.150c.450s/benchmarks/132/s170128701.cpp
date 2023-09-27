#include<stdio.h>
int have[50];
int main(){
	int a,b;
	while(scanf("%d%d",&a,&b),a){
		int where=0;
		int cup=b;
		for(int i=0;i<a;i++)have[i]=0;
		while(1){
			if(cup>0){
				cup--;
				have[where%a]++;
				if(have[where%a]==b){
					printf("%d\n",where%a);
					break;
				}
			}else{
				cup=have[where%a];
				have[where%a]=0;
			}
			where++;
		}
	}
}