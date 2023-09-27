#include <cstdio>

#define MAX(a, b)((a) < (b) ? (b) : (a))

using namespace std;

int pow32(int base, int exp)
{
    int ret = 1;
    
    while (exp) {
        if ((exp & 1) == 1) ret *= base;
        
        exp >>= 1;
        base *= base;
    }
    
    return ret;
}

void YES()
{
    printf("YES\n");
}

void NO()
{
    printf("NO\n");
}
 
int main() {
	int N;
	int a, b, c;
	int longest;

	scanf("%d", &N);
	
	while (N--) {
	    scanf("%d %d %d", &a, &b, &c);
	    
	    longest = MAX(a, MAX(b, c));
	    
	    if (longest == a) {
	        if (pow32(a, 2) == (pow32(b, 2) + pow32(c, 2))) YES();
	        else NO();
	    } else if (longest == b) {
	        if (pow32(b, 2) == (pow32(a, 2) + pow32(c, 2))) YES();
	        else NO();
	    } else if (longest == c) {
	        if (pow32(c, 2) == (pow32(a, 2) + pow32(b, 2))) YES();
	        else NO();
	    }
	}
	
	return 0;
}