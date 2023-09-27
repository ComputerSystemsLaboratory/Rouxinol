#include <cstdio>

using namespace std;
 
int main() {
	int n;
	int i, j, k, m;
	int counter;
	
	while (scanf("%d", &n) != EOF) {
	    counter = 0;
	    
	    for (i = 0; i < 10; i++) {
	        for (j = 0; j < 10; j++) {
	            for (k = 0; k < 10; k++) {
	                for (m = 0; m < 10; m++) {
	                    if ((i + j + k + m) == n) counter++;
	                }
	            }
	        }
	    }
	    
	    printf("%d\n", counter);
	}
	
	return 0;
}