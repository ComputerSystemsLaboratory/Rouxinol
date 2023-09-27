#include<cstdio>
#include<cstring>
#include<algorithm>
#include<functional>
using namespace std;
int main(void)
{
	int n,date[3],i;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		scanf("%d %d %d",&date[0],&date[1],&date[2]);
		sort(date,date+3);
		if(date[2]*date[2]==(date[0]*date[0])+(date[1]*date[1])) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
		
	