#include<iostream>
#include<cctype>
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
const int n=100+10;
int a[n][n];
int b[n];
int main()
{
//#ifdef DEBUG
//	freopen("in", "r", stdin);
////	freopen("out", "w", stdout);
//#endif
	
	int n,m;scanf("%d%d", &n,&m);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++)
			scanf("%d", &a[i][j]);
	}
	for(int i=1;i<=m;i++){
		scanf("%d", &b[i]);
	}
	for(int i=1;i<=n;i++){
		int sum=0;
		for(int j=1;j<=m;j++){
			sum+=a[i][j]*b[j];
		}
		cout<<sum;
		cout<<endl;
	}
	//insert code above
	return 0;
}
//1_6_d.cc