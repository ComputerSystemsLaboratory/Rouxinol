#include<cstdio>
#include<cstring>
#include<algorithm>
#include<functional>
using namespace std;
int flg[1000000];
int main(void)
{
	int n,i,j,cnt;
	while(scanf("%d",&n)!=EOF){
		for(i=2;i<=n;i++) flg[i]=1;
		for(i=2;i*i<=n;i++){
			if(flg[i]==1){
				for(j=2;i*j<=n;j++){
					flg[i*j]=0;
				}
			}
		}
		cnt=0;
		for(i=2;i<=n;i++){
			if(flg[i]==1) cnt++;
		}
		printf("%d\n",cnt);
	}
	return 0;
}
		