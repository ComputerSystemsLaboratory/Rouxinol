#include"bits/stdc++.h"
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
using namespace std;

int p[200];
int main(){
	int m, nmin, nmax;
	while (scanf("%d%d%d", &m, &nmin, &nmax), m){
		int n, Max = 0;
		for (int i = 0; i < m; i++)
			scanf("%d", &p[i]);
		sort(p, p + m, greater<>());
		for (int i = nmin; i <= nmax; i++){
			if (p[i - 1] - p[i]>=Max){
				Max = p[i - 1] - p[i];
				n = i;
			}
		}
		printf("%d\n", n);
	}
	return 0;
}