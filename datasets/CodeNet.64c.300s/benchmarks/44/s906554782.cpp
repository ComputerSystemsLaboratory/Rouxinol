#include <bits/stdc++.h>
#define INF 1e9 + 5
using namespace std;
const int maxn = 15;
const int maxm = 50;
int mp[maxn][maxn];
int a[maxm],b[maxm],c[maxm];
int n,m;

void init()
{
	for(int i = 0;i <= n;i++)
	for(int j = 0;j <= n;j++)
	if(i == j) mp[i][j] = 0;
	else       mp[i][j] = INF;
}

void floyd()
{
	for(int k = 0;k <= n;k++)
	for(int i = 0;i <= n;i++)
	for(int j = 0;j <= n;j++)
	mp[i][j] = min(mp[i][j],mp[i][k] + mp[k][j]);
}

int main()
{
	while(scanf("%d",&m) != EOF && m){
		n = 0;
		for(int i = 0;i < m;i++){
			scanf("%d %d %d",&a[i],&b[i],&c[i]);
			n = max(n,max(a[i],b[i]));
		}
		init();
		for(int i = 0;i < m;i++){
			mp[a[i]][b[i]] = min(mp[a[i]][b[i]],c[i]);
			mp[b[i]][a[i]] = min(mp[b[i]][a[i]],c[i]);
		}
		floyd();
		int minsum,nowsum,pos;
		minsum = nowsum = INF;
		for(int i = 0;i <= n;i++){
			nowsum = 0;
			for(int j = 0;j <= n;j++){
				nowsum += mp[i][j];
			}
			if(minsum > nowsum){
				minsum = nowsum;
				pos = i;
			}
		}
		printf("%d %d\n",pos,minsum);
	}
	return 0;
}