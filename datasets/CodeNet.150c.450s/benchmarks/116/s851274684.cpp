#include <cstdio>
#include <cstring>
#define max(a,b) ((a)>=(b)?(a):(b))
int BIT[100001],n,k;
int sum(int i) {
	int s=0;
	while(i>0) {
		s+=BIT[i];
		i-=i&-i;
	}
	return s;
}
void add(int i,int x) {
	while(i<=n) {
		BIT[i]+=x;
		i+=i&-i;
	}
}
int main() {
	while(scanf("%d %d",&n,&k),n|k) {
		memset(BIT,0,sizeof(BIT));
		for(int i=1;i<=n;i++) {
			int a;
			scanf("%d",&a);
			add(i,a);
		}
		int mx=-1000000000;
		for(int i=1;i<=(n-k+1);i++) {
			mx=max(mx,sum(i+k-1)-sum(i-1));
		}
		printf("%d\n",mx);
	}
}