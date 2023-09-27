#include <bits/stdc++.h>
using namespace std;

int main(void){
	int a0, l;
	while(cin >> a0 >> l, a0+l){
		vector<int> a(20);
		a[0] = a0;
		int i = 0, j = 0;
		while(1){
			vector<int> keta(l);
			int a_ = a[i++];
			for(int k = 0; k < l; ++k){
				keta[k] = a_%10;
				a_ /= 10;
			}
			sort(keta.begin(), keta.end());
			int small=0;
			for(int k = 0; k < l; ++k){
				small *= 10;
				small += keta[k];
			}
			sort(keta.rbegin(), keta.rend());
			int large=0;
			for(int k = 0; k < l; ++k){
				large *= 10;
				large += keta[k];
			}
			a[i] = large - small;
			for(j = 0; j < i-1; ++j){
				if(a[j] == a[i]) break;
			}
			if(a[j] == a[i]) break;
		}
		printf("%d %d %d\n", j, a[i], i-j);
	}
	return 0;
}
