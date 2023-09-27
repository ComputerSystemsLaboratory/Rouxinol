#include <cstdio>
#include <vector>
using namespace std;

int main() {
	int n;
	vector<int> a;
	scanf("%d",&n);
	a.resize(n);
	for(int i=0;i<n;++i) {
		scanf("%d",&a[i]);
	}
	for(auto x=a.rbegin(); x!=(--a.rend()); ++x) {
		printf("%d ",*x);
	}
	printf("%d\n",a[0]);
	return 0;
}