#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
	int n[5];
	scanf("%d%d%d%d%d", n+0, n+1, n+2, n+3, n+4);
	sort(n, n+5);
	printf("%d %d %d %d %d\n", n[4], n[3], n[2], n[1], n[0]);
	return 0;
}