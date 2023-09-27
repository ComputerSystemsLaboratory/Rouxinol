#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<map>
#include<queue>
#include<set>
#include<stack>
#include<cctype>
#include<cstring>
#include<utility>
const int inf=0x7fffffff;
typedef long long int ll;
using namespace std;
int a[105][105];
int b[105][105];
int main()
{
#ifdef DEBUG
	freopen("in", "r", stdin);
//	freopen("out", "w", stdout);
#endif
	int n,m,l;
	scanf("%d%d%d", &n,&m,&l);
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=l;j++){
			scanf("%d", &b[i][j]);
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=l;j++){
			ll sum=0;
			for(int k=1;k<=m;k++){
				sum+=a[i][k]*b[k][j];
			}
			printf("%lld",sum);
			if(j!=l)printf(" ");
		}
		printf("\n");
	}

	
	//insert code
	return 0;
}
//1_7_d.cc