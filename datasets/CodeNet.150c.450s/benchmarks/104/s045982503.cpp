#include <cstdio>

void swap(int array[], int a, int b){
	int c = array[a];
	array[a] = array[b];
	array[b] = c;
}

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
		swap( array , a , b );
	}
	for(int i=1 ; i<=w ; i++){
		printf("%d\n", array[i]);
	}
}