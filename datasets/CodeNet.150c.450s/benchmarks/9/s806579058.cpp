#include<stdio.h>
#include<string.h>
int main(void)
{
	int n,h,i,j,s,z,k,len;
	char a[201],b[201];
	while(1){
		scanf("%s",a);
		if(a[0]=='-')break;
		len=strlen(a);
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d",&h);
			s=len-h;
			for(j=0;j<h;j++){
				b[s]=a[j];
				s++;
			}
			s=0;
			for(j=h;j<len;j++){
				b[s]=a[j];
				s++;
			}
			for(j=0;j<len;j++){
				a[j]=b[j];
			}
		}
		printf("%s\n",a);
	}
	return 0;
}