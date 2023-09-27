#include <bits/stdc++.h>
#define MOD 1000000007LL
using namespace std;

typedef long long ll;
typedef pair<int,int> P;

int m,nmin,nmax;
int p[100001];

int main(void){
	while(1){
		scanf("%d%d%d",&m,&nmin,&nmax);
		if(m==0 && nmin==0 && nmax==0)break;
		for(int i=1;i<=m;i++){
			scanf("%d",&p[i]);
		}
		sort(p,p+m+1);
		int val=-1,res=-1;
		for(int i=nmin;i<=nmax;i++){
			if(p[m-i+1]-p[m-i]>=val){
				res=i;
				val=p[m-i+1]-p[m-i];
			}
		}
		printf("%d\n",res);
	}
	return 0;
}