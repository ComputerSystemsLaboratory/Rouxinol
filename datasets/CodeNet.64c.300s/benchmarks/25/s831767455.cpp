#include<stdio.h>
int main(void)
{
	int a[5],s[5],d,f,g,i,j;
	while(scanf("%d %d %d %d %d %d %d %d",&a[1],&a[2],&a[3],&a[4],&s[1],&s[2],&s[3],&s[4])!=EOF){
	d=0;
	f=0;
	for(i=1;i<=4;i++){
		if(a[i]==s[i]){
			d++;
		}
		if(a[i]!=s[i]){
			j=1;
			while(j<5){
				if(a[i]==s[j]){
					f++;
				}
				j++;
			}
		}
	}
	printf("%d %d\n",d,f);
	}
	return 0;
}