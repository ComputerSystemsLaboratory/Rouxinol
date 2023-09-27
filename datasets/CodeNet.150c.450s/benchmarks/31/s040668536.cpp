#include <cstdio>
#include <queue>
#include <algorithm>

#define rep(i, n) for(int i = 0; i < n; ++i)

using namespace std;

int n;
int x[200000];
int y[200000 - 1];

int main(){
	scanf("%d", &n);
	rep(i, n){
		scanf("%d", x + i);
	}
	for(int i = n - 2; i >= 0; --i){
		y[i] = x[i + 1] - x[i];
		x[i] = max(x[i], x[i + 1]);
	}
	printf("%d\n", *max_element(y, y + n - 1));
	return 0;
}