#include <cstdio>
#include <vector>
using namespace std;

int main(){
	int n, k;
	while(1){
		scanf("%d %d", &n, &k);
		if(n == 0 && k == 0) break;

		vector<int> a;
		for(int i=0; i<n; i++){
			int tmp;
			scanf("%d", &tmp);
			a.push_back(tmp);
		}
		int ans = 0;
		for(int i=0; i<k; i++){
			ans += a[i];
		}
//		printf("%d\n", ans);
		int temp = ans;
		for(int i=0; i+k<n; i++){
			temp -= a[i];
			temp += a[i+k];
			ans = max(ans, temp);
//			printf("%d %d\n", temp, ans);
		}
		printf("%d\n", ans);

	}

	return 0;
}