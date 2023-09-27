#include <cstdio>
#include <algorithm>
using namespace std;
typedef long long int ll;
int main(){
	int n,k;
	while(1){
		scanf("%d %d",&n,&k);
		if(n==0)	return 0;
		int a[n];
		for(int i=0;i<n;i++)	scanf("%d",&a[i]);
		ll bgs=0,temp=0;
		for(int i=0;i<k;i++)	temp+=a[i];
		bgs=temp;
		for(int i=1;i<=n-k;i++){
			temp=temp-a[i-1]+a[i+k-1];
			bgs=max(bgs,temp);
		}
		printf("%lld\n",bgs);
	}
}