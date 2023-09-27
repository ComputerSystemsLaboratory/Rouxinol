#include <cstdio>
using namespace std;

int main() {
	int n,ans=0,prime[1000000];
	prime[0]=0;
	prime[1]=0;
	for(int i=2;i<1000000;++i){ prime[i]=1; }
	for(int i=2;i<1000000;++i){
		if(prime[i]==1) {
			++ans;
			if(i<1000) for(int j=i*i;j<1000000;j+=i) prime[j]=0;
		}
		prime[i]=ans;
	}
	while(scanf("%d",&n) != EOF) { printf("%d\n",prime[n]); }
	return 0;
}