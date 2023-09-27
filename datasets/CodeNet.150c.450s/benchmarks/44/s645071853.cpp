#include<cstdio>
#include<cstring>
#include<algorithm>
#include<functional>
using namespace std;
int main(void)
{
	int i,j,hit,blow,flg[4];
	int a[4],b[4];
	while(scanf("%d %d %d %d",&a[0],&a[1],&a[2],&a[3])!=EOF) {
		scanf("%d %d %d %d",&b[0],&b[1],&b[2],&b[3]);
		for(i=0;i<4;i++) flg[i]=0;
		hit=0; blow=0;
		for(i=0;i<4;i++) {
			if(a[i]==b[i]) {
				hit++;
				flg[i]=1;
			}
		}
		for(i=0;i<4;i++) {
			for(j=0;j<4;j++) {
				if(a[i]==b[j] && flg[i]==0) blow++;
			}
		}
		printf("%d %d\n",hit,blow);
	}
	return 0;
}
	