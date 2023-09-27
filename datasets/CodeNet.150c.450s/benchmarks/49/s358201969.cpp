#include <cstdio>
#include <algorithm>

#define rep(i, n) for(int i = 0; i < (n); ++i)

using namespace std;

int n;
int s[1000];

int main(){
	while(scanf("%d", &n), n){
		rep(i, n){
			scanf("%d", &s[i]);
		}
		int t = 0;
		rep(i, n){
			t += s[i];
		}
		int a = *min_element(s, s + n);
		int b = *max_element(s, s + n);
		printf("%d\n", (t - a - b) / (n - 2));
	}
	return 0;
}