//Vol0 0013
#include<stdio.h>
int main()
{
	int n,buf[128]={0},i=0;
	while(!(scanf("%d",&n)==EOF)){
		if(n==0){
			if(i!=0){
				i--;
			}
			printf("%d\n",buf[i]);
			buf[i]=0;
		}else{
			buf[i]=n;
			i++;
		}
	}
	return 0;
}