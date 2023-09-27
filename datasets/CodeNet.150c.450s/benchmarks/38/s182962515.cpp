#include<cstdio>
#include<algorithm>
int main(void)
{
	int a,s,d,f,g,h,i,j;
	scanf("%d",&f);
	for(i=0;i<f;i++){
		scanf("%d %d %d",&a,&s,&d);
		if(a*a==s*s+d*d||d*d==s*s+a*a||s*s==d*d+a*a)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}