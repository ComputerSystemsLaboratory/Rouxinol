#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;
typedef pair<int, int>P;

int main() {
	vector<P>v;
	for (int i = 2; i <= 500; i++) {
		for (int j = 1; j < i; j++) {
			v.push_back(P(i*i + j*j, j));
		}
	}
	sort(v.begin(), v.end());
	int h, w;
	while (scanf("%d%d", &h, &w), h) {
		auto p = upper_bound(v.begin(), v.end(), P(h*h + w*w, h));
		int i = p->second;
		printf("%d %d\n", i, (int)sqrt(p->first - i*i));
	}
}