#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int n,m;
	int s[200];
	while(scanf("%d %d",&n,&m),n) {
		int sum_t=0,sum_h=0;
		for(int i=0;i<n;i++) {
			scanf("%d",&s[i]);
			sum_t+=s[i];
		}
		for(int i=0;i<m;i++) {
			scanf("%d",&s[i+n]);
			sum_h+=s[i+n];
		}
		int sum=1<<30,a,b;
		for(int i=0;i<n;i++) {
			for(int j=0;j<m;j++) {
				if(sum_h-sum_t==2*(s[j+n]-s[i])) {
					if(sum>(s[j+n]+s[i])) {
						sum=s[j+n]+s[i];
						a=i,b=j;
					}
				}
			}
		}
		if(sum==1<<30) {
			printf("-1\n");
		}else {
			printf("%d %d\n",s[a],s[b+n]);
		}
	}
}