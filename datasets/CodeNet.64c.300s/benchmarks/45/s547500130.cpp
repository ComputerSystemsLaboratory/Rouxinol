#include <bits/stdc++.h>
using namespace std;
#define reps(i,j,k) for(int i=j;i<k;++i)
#define rep(i,j) reps(i,0,j)
int main(){
	int n, m, s;
	while (true){
		cin >> n >> m >> s;
		if (n + m + s == 0)break;
		int p;
		int sum = 0;
		int g = -1;
		rep(i, n){
			scanf("%d", &p);
			if (i == m - 1){
				g = p;
			}
			sum += p;
		}
		if (g == 0){
			puts("0");
		}
		else{
			int res = sum * (100 - s) / g;
			cout << res << "\n";
		}
	}
	return 0;
}