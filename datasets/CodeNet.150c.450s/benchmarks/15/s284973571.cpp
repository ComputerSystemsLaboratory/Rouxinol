#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n,q,a,c=0,i,j;
	vector<int> S;
	scanf("%d",&n);
	S.resize(n);
	for(i=0; i<n; ++i) {
		scanf("%d",&S[i]);
	}
	sort(S.begin(),S.end());
	scanf("%d",&q);
	for(j=0; j<q; ++j) {
		i=0;
		scanf("%d",&a);
		while(i<n) {
			if(S[i]>a) break;
			if(S[i]==a) {
				++c;
				break;
			}
			++i;
		}
	}
	printf("%d\n",c);
	return 0;
}