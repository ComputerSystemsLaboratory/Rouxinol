#include<cstdio>
using namespace std;
int main(void)
{
	int n,risi,gou,i,x;
	scanf("%d",&n);
	x=100000;
	for(i=0;i<n;i++){
		x=x*1.05;
		if(x%1000!=0){
			x=x+1000-(x%1000);
		}
	}
	printf("%d\n",x);
	return 0;
}