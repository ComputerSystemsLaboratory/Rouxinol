#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char W[201],Wbuf[201];
	int h;
	int n,i,j,k;
	
	while(1)
	{
		scanf("%s\n%d",W,&n);
		if(W[0]=='-') break;
		for(i=0;i<n;i++) 
		{
			scanf("%d",&h);
			for(j=h;W[j]!='\0';j++) Wbuf[j-h]=W[j];
			for(k=0;k<h;k++) Wbuf[j-h+k]=W[k];
			for(j=0;W[j]!='\0';j++) W[j]=Wbuf[j];
		}
		printf("%s\n",W);
	}
  return 0;
}
