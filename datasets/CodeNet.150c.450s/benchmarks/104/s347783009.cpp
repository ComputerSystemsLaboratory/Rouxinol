#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
	int array[50];
	int w,n,a,b;

	for(int i=0 ; i<50 ; i++){
		array[i] = i;
	}
	
	scanf("%d", &w);
	scanf("%d", &n);
	for(int i=0 ; i<n ; i++){
		scanf("%d,%d", &a, &b);
		swap( array[a] , array[b] );
	}
	for(int i=1 ; i<=w ; i++){
		printf("%d\n", array[i]);
	}
}