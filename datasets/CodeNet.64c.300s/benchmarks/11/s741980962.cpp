# include<stdio.h>
int main(void)
{
	int S,h,m,s;
	scanf("%d",&S);
	h=S/3600;
    m=(S%3600)/60;
    S=S%3600;
    s=S%60;
	printf("%d",h);
	printf(":");
	printf("%d",m);
	printf(":");
	printf("%d\n",s);
    return 0;
}
