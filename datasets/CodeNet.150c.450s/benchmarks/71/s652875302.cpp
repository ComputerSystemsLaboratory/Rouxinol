#include<cstdio>
#include<cstring>
#include<algorithm>
#include<functional>
using namespace std;
int main(void)
{
	int i,j,k,l,n,cnt;
	while(scanf("%d",&n)!=EOF) {
		cnt=0;
		for(i=0;i<=9;i++) {
			for(j=0;j<=9;j++) {
				for(k=0;k<=9;k++) {
					for(l=0;l<=9;l++) {
						if(i+j+k+l==n) {
							cnt++;
						}
					}
				}
			}
		}
		printf("%d\n",cnt);
	}
	return 0;
}