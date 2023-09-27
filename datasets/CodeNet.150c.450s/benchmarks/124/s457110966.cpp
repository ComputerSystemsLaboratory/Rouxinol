#include<bits/stdc++.h>
using namespace std;
#define M 1000000007
#define ff first.first
#define fs first.second
#define sf second.first
#define ss second.second
typedef pair<int,int> P;
typedef pair<P,P> PP;

int main(void)
{
	int i,j,k,u,n,flg[10001],v,c,sum,ky[10001],t,min,g;
	PP ke[10001];
	scanf("%d",&n);
	sum=0;
	for(i=0;i<n;i++) ky[i]=M,flg[i]=0;
	ky[0]=0;
	for(i=0;i<n;i++){
		scanf("%d%d",&u,&k);
		for(j=sum;j<k+sum;j++){
			scanf("%d%d",&v,&c);
			ke[j].ff=u , ke[j].fs=v , ke[j].sf=c;
		}
		sum+=k;
	}
	sort(ke,ke+sum);
	//for(i=0;i<sum;i++) printf("ke[%d].ff=%d ke[%d].fs=%d ke[%d].sf=%d\n",i,ke[i].ff,i,ke[i].fs,i,ke[i].sf);
	for(i=0;i<sum;i++){
		/*min=M;
		for(j=0;j<sum;j++) if(flg[j]==0&&min>ky[j]) g=j,min=j;
		flg[g]=1;
		if(min==M) break;*/
		for(j=0;j<sum;j++){
			t=ky[ke[j].ff]+ke[j].sf;
			if(ky[ke[j].fs]>t) ky[ke[j].fs]=t;
		}
	}
	for(i=0;i<n;i++) printf("%d %d\n",i,ky[i]);
	return 0;
}
