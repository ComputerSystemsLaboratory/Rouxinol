#include <cstdio>

int linearSearch(int *S, int key, int n){
	int i, count;
	count = 0;
	for(i=0;i<n;i++){
		if(S[i] == key){
			count ++;
			break;
		}
	}
	return count;
}


int main(void){
	int i,n,q, key, count;
	int *S;
	count = 0;
	scanf("%d", &n);
	S = new int[n];
	for (i=0; i<n; i++){
		scanf("%d", &S[i]);
	}
	
	scanf("%d", &q);
	for (i=0;i<q;i++){
		scanf("%d", &key);
		count += linearSearch(S, key, n);
	}

	printf("%d\n", count);

	return 0;
}