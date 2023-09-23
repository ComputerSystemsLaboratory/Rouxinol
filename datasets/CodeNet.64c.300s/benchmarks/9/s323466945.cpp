#include <cstdio>

using namespace std;
 
int main() {
	int n;
	long base = 100000;
	float interest = 0.05f;
	long roundNum;

	scanf("%d", &n);
	
	while (n--) {
	    base = base * (1 + interest);
	    roundNum = base % 1000;
	    
	    if (roundNum != 0) base += (1000 - roundNum);
	}
	
	printf("%ld\n", base);
	
	return 0;
}