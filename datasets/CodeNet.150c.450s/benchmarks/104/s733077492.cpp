#include<cstdio>
#include<cstring>
#include<algorithm>
#include<functional>
using namespace std;
int main(void)
{
	int w,n,i;
	int a[31],b[31],suu[31];
	scanf("%d",&w);
	scanf("%d",&n);
	for(i=1;i<=w;i++) suu[i]=i;
	for(i=1;i<=n;i++){
		scanf("%d,%d",&a[i],&b[i]);
	}
	for(i=1;i<=n;i++) swap(suu[a[i]],suu[b[i]]);
	for(i=1;i<=w;i++) printf("%d\n",suu[i]);
	return 0;
}