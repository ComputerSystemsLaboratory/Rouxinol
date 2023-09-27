#include<cstdio>
#include<cstring>
#include<algorithm>
#include<functional>
using namespace std;
int main(void)
{
	int i,y,x,d;
	int sum; 
	while(scanf("%d",&d)!=EOF) {
		sum=0;
		for(i=0;i<600;i+=d) sum+=(i*i)*d;
		printf("%d\n",sum);
	}
	return 0;
}