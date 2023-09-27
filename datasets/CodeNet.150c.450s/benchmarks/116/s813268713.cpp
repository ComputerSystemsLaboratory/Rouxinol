#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

int main(void){
	int n, k, t, m;
	while(true){
		scanf("%d %d", &n, &k);

		if(n == 0 && k == 0) return 0;

		vector<int> a;

		for(int i = 0;i < n;++i){
			scanf("%d", &t);
			a.push_back(t);
		}

		m = 0;
		for(int i = 0;i < n-k;++i){
			t = 0;
			for(int j = 0;j < k;++j){
				t += a[i+j];
			}
			m = max(m, t);
		}

		printf("%d\n", m);
	}
}
