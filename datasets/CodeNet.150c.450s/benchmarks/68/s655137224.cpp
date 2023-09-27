#include <bits/stdc++.h>
#define MOD 1000000007LL
using namespace std;

typedef long long ll;
typedef pair<int,int> P;

int n;
int a[1001];

int main(void){
	while(1){
		scanf("%d",&n);
		if(n==0)break;
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		sort(a,a+n);
		int res=a[1]-a[0];
		for(int i=1;i<n;i++){
			res=min(res,a[i]-a[i-1]);
		}
		printf("%d\n",res);
	}
	return 0;
}