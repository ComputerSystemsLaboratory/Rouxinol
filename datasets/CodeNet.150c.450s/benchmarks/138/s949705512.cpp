#include<cstdio>
#include<cstring>
#include<algorithm>
#include<functional>
using namespace std;
int main(void)
{
	int a,b,x;
	scanf("%d %d",&a,&b);
	if(a>b) swap(a,b);
	while(1){
		x=a%b;
		if(x==0) break;
		a=b;
		b=x;
	}
	printf("%d\n",b);
	return 0;
}