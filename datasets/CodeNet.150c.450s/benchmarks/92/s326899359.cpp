#include<cstdio>
#include<cstring>
using namespace std;
int main(void)
{
	int a,b,x,cnt,len;
	char y[10000];
	while(scanf("%d %d",&a,&b)!=EOF){
		x=a+b;
		cnt=0;
		while(x>0){
			x=x/10;
			cnt++;
		}
		printf("%d\n",cnt);
		
	}
	return 0;
}