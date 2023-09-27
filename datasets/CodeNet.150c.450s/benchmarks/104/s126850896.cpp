#include <cstdio>
#include <iostream>

using namespace std;

void swap(int *x, int *y){
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

int main(){
	int w, n, a, b, p[30];
	cin >> w >> n;
	
	for(int i=0; i<w; ++i)
		p[i]=i+1;
	
	for(int i=0; i<n; ++i){
		scanf(" %d,%d", &a, &b);
		swap(p[a-1], p[b-1]);
	}

	for(int i=0; i<w; ++i)
		printf("%d\n", p[i]);
		 
	return 0;
}