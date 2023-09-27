#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
	int w,n,a,b,ans[50];
	for(int i=0 ; i < 50 ; i++ ){
		ans[i] = i;
	}
	scanf("%d %d", &w, &n);
	for(int i=0 ; i < n ; i++ ){
		scanf("%d,%d", &a, &b );
		swap( ans[a] , ans[b] );
	}
	for(int i=1 ; i <= w ; i++ ){
		printf("%d\n", ans[i] );
	}
}