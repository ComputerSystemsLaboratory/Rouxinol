#include<stdio.h>
int main(void)
{
	int a,s[101],d,f[101],g,i,j;
	for(i=1;i<=100;i++){
		f[i]=i;
		//printf("%d\n",f[i]);
	}
	for(i=1;i<=100;i++){
		s[i]=0;
	}
	while(scanf("%d",&a)!=EOF){
		s[a]++;
	}
	for(i=1;i<=100;i++){
		for(j=i+1;j<=100;j++){
			if(s[i]<s[j]){
				d=f[i];
				f[i]=f[j];
				f[j]=d;
				d=s[i];
				s[i]=s[j];
				s[j]=d;
			}
		}
	}
	printf("%d\n",f[1]);
	for(i=2;i<=100;i++){
		if(s[1]==s[i]){
			printf("%d\n",f[i]);
		}
		if(s[1]<s[i]){
			break;
		}
	}
	return 0;
}