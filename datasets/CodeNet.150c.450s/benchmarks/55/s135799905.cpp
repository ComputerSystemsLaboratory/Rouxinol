#include<stdio.h>
#include<string.h>
int main(void)
{
	int x,y,n,i;
	int flg;
	char buf[1001];
	
	scanf("%s",buf);
	flg=0;
	
	while(flg==0){
		n=strlen(buf);
		y=0;
		for(i=0;i<n;i++){
		x=buf[i]-'0';
		y+=x;
		}
		if(y!=0){
				printf("%d\n",y);
				scanf("%s",buf);
		}
		else{
			flg=1;
		}
	}	
	return 0;
}	