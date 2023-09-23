#include<cstdio>
using namespace std;
int main()
{
	int n,a,flg[31],i;
	for(i=1;i<=30;i++)	flg[i]=0;
	for(i=0;i<28;i++){
		scanf("%d",&a);
		flg[a]=1;
	}
	for(i=1;i<=30;i++){
		if(flg[i]!=1){
			printf("%d\n",i);
		}
	}
	return 0;
}
