#include <cstdio>

using namespace std;

int main() {
    long NUM = 1000000;
    long n;
	long counter = 0;
	bool primeNum[NUM + 10];

	long i, ii, j, len = NUM + 10;
	
	primeNum[0] = primeNum[1] = false;
	for (i = 2; i < len; i++) primeNum[i] = true;
	
	ii = 4;
    for(i = 2; ii < NUM;) {
        if (primeNum[i]) {
            for (j = ii; j < NUM; j += i) {
                primeNum[j] = false;
            }
        }
        
        i++;
        ii = i * i;
    }
    
    while (scanf("%ld", &n) != EOF) {
        counter = 0;
        
        for (i = 0; i <= n; i++) {
            if (primeNum[i]) counter++;
        }
        
        printf("%ld\n", counter);
    }

    return 0;
}