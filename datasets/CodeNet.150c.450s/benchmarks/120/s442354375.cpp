#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <set>
#include <queue>
#include <utility>
using namespace std;
int a[10][10000];
int b[10][10000];
int main() {
	int R,C;
	while(scanf("%d %d",&R,&C),R|C) {
		for(int i=0;i<R;i++) {
			for(int j=0;j<C;j++) {
				scanf("%d",&a[i][j]);
			}
		}
		int ans=0;
		for(int bit=0;bit<(1<<R);bit++) {
			memcpy(b,a,sizeof(a));
			for(int i=0;i<R;i++) {
				if(bit&(1<<i)) {
					for(int j=0;j<C;j++) b[i][j]^=1;
				}
			}
			int sum=0;
			for(int i=0;i<C;i++) {
				int x=0;
				for(int j=0;j<R;j++) {
					x+=b[j][i];
				}
				sum+=max(x,R-x);
			}
			ans=max(ans,sum);
		}
		printf("%d\n",ans);
	}
}