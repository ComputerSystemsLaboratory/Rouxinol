#include <cstdio>
#include <vector>
using namespace std;

int main(){
	int n, k;
	while( scanf("%d %d", &n, &k), n && k ){
		vector<int> data(n);
		for( int i=0; i<n; i++ ){
			scanf("%d", &data[i]);
		}
		int ans = 0;
		int sum = 0;
		for( int i=0; i<k; i++ ) sum += data[i];
		for( int i=k; i<n; i++ ){
			sum += data[i] - data[i-k];
			ans = max(ans, sum);
		}
		printf("%d\n", ans);
	}
}