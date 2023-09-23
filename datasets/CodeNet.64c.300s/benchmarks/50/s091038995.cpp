#include <cstdio>
#define DEBUG(d,n) {for (int i = 0; i < n; i++) {\
                        if (i != n-1)   printf("%d ", d[i]);\
                        else            printf("%d", d[i]);\
                    }   printf("\n");}
#define SWAP(d,a,b) {	int t = d[a];\
						d[a] = d[b];\
						d[b] = t;}
const int MAX = 100;

void bubbleSort(int d[], int len) {
	int lps = 0;
	for (int i = 0; i < len; i++) {
		for (int j = len-1; j > i; j--) {
			if (d[j] < d[j-1]) {
				SWAP(d, j, j-1);
				lps++;	// swap operations
			}
			// number of loop operations
		}
	}
	DEBUG(d, len);
	printf("%d\n", lps);
}

int main() {
    int n, d[MAX];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &d[i]);
     
    bubbleSort(d, n);
     
    //DEBUG(d,n); // display final step <- fixed PE
    return 0;
}