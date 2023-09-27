#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int n,r;
	while(scanf("%d %d",&n,&r),n) {
		vector<int> v;
		for(int i=0;i<n;i++) {
			v.push_back(n-i);
		}
		for(int i=0;i<r;i++) {
			int p,c;
			scanf("%d %d",&p,&c);
			vector<int> a,b;
			for(int j=0;j+1<p;j++) {
				int e=v.front();v.erase(v.begin());
				a.push_back(e);
			}
			for(int j=0;j<c;j++) {
				int e=v.front();v.erase(v.begin());
				b.push_back(e);
			}
			for(int j=p-2;j>=0;j--) {
				v.insert(v.begin(),a[j]);
			}
			for(int j=c-1;j>=0;j--) {
				v.insert(v.begin(),b[j]);
			}
		}
		printf("%d\n",v[0]);
	}
}