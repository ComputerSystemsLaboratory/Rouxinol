#include<cstdio>
#include<cstring>
#include<algorithm>
#include<functional>
using namespace std;
int main(void)
{
	int i,j,n,hanako=0,taro=0;
	char t[101],h[101];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s %s",t,h);
		if(strcmp(t,h)<0) hanako+=3;
		else if(strcmp(t,h)>0) taro+=3;
		else if(strcmp(t,h)==0) {
			hanako++;
			taro++;
		}
	}
	printf("%d %d\n",taro,hanako);
	return 0;
}