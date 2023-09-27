#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<sstream>
#define INF 0x9f9f9f9f

using namespace std;
const int maxn=200+10; 
int a[maxn];
int ccc[20];
typedef long long ll;
ll map1[maxn][maxn];
int main(){



	ll n,m;
	cin>>n>>m;

	for(ll i=0;i<n;i++)
		for(ll j=0;j<n;j++)
			if(i==j)map1[i][j]=0;
			else
				map1[i][j]=INF;

	int a,b,c;

	for(ll i=0;i<m;i++){
		cin>>a>>b>>c;
		map1[a][b]=c;
	}


	for(ll k=0;k<n;k++){
		for(ll i=0;i<n;i++){
			for(ll j=0;j<n;j++){
				if(!(map1[i][k]==INF||map1[k][j]==INF)&&map1[i][j]>map1[i][k]+map1[k][j])
					map1[i][j]=map1[i][k]+map1[k][j];
			}
		}
	}

	ll judge=1;
	for(ll i=0;i<n;i++){
		if(map1[i][i]!=0){
			judge=0;
			break;
		}
	}



	if(judge==1){
	for(ll i=0;i<n;i++){
		for(ll j=0;j<n;j++){

			if(map1[i][j]==INF)
				{
					if(j==n-1)printf("INF");
					else printf("INF ");
			}
			else
				{
					if(j==n-1)printf("%lld",map1[i][j]);
					else
						printf("%lld ",map1[i][j]);
			}
		}
		printf("\n");
	}
	}
	else
		puts("NEGATIVE CYCLE");



	//cout<<INF<<endl;


	return 0;
}
