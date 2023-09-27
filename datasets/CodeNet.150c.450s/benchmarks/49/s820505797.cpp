#include <cstdio>
#include <algorithm>
using namespace std;
int main() {
	int n;
	while(scanf("%d",&n),n) {
		int s,sum=0,min_s=1<<30,max_s=0;
		for(int i=0;i<n;i++) {
			scanf("%d",&s);
			sum+=s;
			min_s=min(min_s,s);
			max_s=max(max_s,s);
		}
		printf("%d\n",(sum-min_s-max_s)/(n-2));
	}
}