#include<stdio.h>
#include<string.h>
int main(void)
{
	int s,d,f,h,i,j;
	char a[5000];
	while(1){
		s=0;
		d=0;
		scanf("%s",a);
		h=strlen(a);
		if(a[0]=='0')	break;
		for(i=0;i<h;i++){
			d=a[i]-'0';
			//printf("%d\n",d);
			s+=d;
		}
		printf("%d\n",s);
	}
	return 0;
}