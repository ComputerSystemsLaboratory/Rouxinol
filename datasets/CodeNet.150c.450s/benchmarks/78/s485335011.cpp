#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <queue>
#include <vector>
#include <functional>
#include <map>
#include <set>
#include <cmath>
#include <string>
#define SIZE 200005
#define INF 1000000005LL

using namespace std;
typedef long long int ll;
typedef pair <int,int> P;
static const int N = 1000005;

int n;
ll K;
int dp[N],dpo[N];
ll pollock[N],oollock[N];
ll pmax,omax;
int cmax;
int a;

int pol()
{
	scanf("%d",&n);
	if(n==0)return -1;
	if(cmax>=n){
		a = dpo[n];
		return dp[n];
	}
	while(pollock[pmax]<=n){
		pmax++;
		pollock[pmax] = pmax*(pmax+1)*(pmax+2)/6;
		if(pollock[pmax]%2==1){
			omax++;
			oollock[omax]=pollock[pmax];
		}
	}
	int k=1,j=1,s=1,f=1;
	for(int i=cmax+1;i<=n;i++){
		while(pollock[j]<=i)j++;
		int minv = 9;
		for(int c=1;c<j;c++){
			minv = min(minv,dp[i-pollock[c]]+1);
		}
		dp[i] = minv;

		while(oollock[k]<=i&&k<=omax){
			k++;
		}
		minv = 99;
		int c;
		for(c=1;c<k;c++){
			minv = min(minv,dpo[i-oollock[c]]+1);
		}
		dpo[i] = minv;
		//printf("(%d:%d)",i,k);
	}
	cmax=n;
	a = dpo[n];
	return dp[n];
}
int main(){
	pmax=0;
	cmax=omax=0;
	dp[0]=0;
	dpo[0]=0;
	pollock[0]=oollock[0]=0;
	while(1){
		int p = pol();
		if(p==-1)return 0;
		printf("%d %d\n",p,a);
	}
}

