#include <stdio.h>
#include<string.h>

int main()
{
int a[101][101];
int b[101];
int n,m;
scanf("%d %d",&n,&m);
for(int i=1;i<=n;i++){
	for(int j=1;j<=m;j++){
		scanf("%d",&a[i][j]);
	}
}
for(int i=1;i<=m;i++){
	scanf("%d",&b[i]);
}
for(int i=1;i<=n;i++){
	int ans=0;
	for(int j=1;j<=m;j++){
		ans+=a[i][j]*b[j];
	}
	printf("%d\n",ans);
}
}
