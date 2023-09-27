    #include <stdio.h>
     
    int main() {
    	int N, K;
    	scanf ("%d %d", &N, &K);
    	int A[N + 1];	
    	
    	for (int i = 0; i < N; i++) {
    		scanf("%d", &A[i + 1]);
    	}
    	for (int i = K + 1; i <= N; i++) {
    		if ( A[i] > A[i - K]) {
    		    puts("Yes");
    		} else {
    			puts("No");
    		}
    	}
    }