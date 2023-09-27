#include<stdio.h>
#include<string.h>

int main(){
	int n,m,flag=0,i,j;
	char s[256][16],t[16];
	scanf("%d",&n);
	for(i=0;i<n;i++)scanf("%s",s[i]);
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%s",t);
		for(j=0;j<n;j++){
			if(!strcmp(t,s[j])){
				if(!flag){
					printf("Opened by %s\n",t);
					flag=1;
					break;
				}else{
					printf("Closed by %s\n",t);
					flag=0;
					break;
				}
			}
		}
		if(j==n)printf("Unknown %s\n",t);
	}
	return 0;
}