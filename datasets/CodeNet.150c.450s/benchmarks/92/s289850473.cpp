#include <cstdio>
#include <string>

using namespace std;

int main() {
	long a, b;
	string sum;
	
	while (scanf("%ld %ld", &a, &b) != EOF) {
	    sum = to_string(a + b);
	    
	    printf("%d\n", sum.size());
	}
	
	return 0;
}