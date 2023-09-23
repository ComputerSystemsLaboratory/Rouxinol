#include <stdio.h>
#include<string.h>

int main()
{
    int u =1;
int a[101][101];
int b[101][u];//指定する必要なし 指定しても大丈夫みたい　
int n,m;
scanf("%d %d",&n,&m);
for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
		scanf("%d",&a[i][j]);
	}
}
for(int i=0;i<m;i++){
	scanf("%d",&b[i][1]);//行列一つ一つで分ける！！
}
for(int i=0;i<n;i++){
	int ans=0;
	for(int j=0;j<m;j++){
		ans+=a[i][j]*b[j][1];//計算と読み取りは別にする！
	}
	printf("%d\n",ans);
}
return 0;
}
