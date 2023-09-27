#include <cstdio>
#include <set>
using namespace std;
#define MAX_N (100010)
int L[MAX_N];
int main()
{
    int n;
    int length = 0;
    scanf("%d", &n);
    for ( int i = 0; i < n; i++ ) {
	int d;
	scanf("%d", &d);

	int *pos = lower_bound( L, L + length, d );

	if ( pos == L + length ) {
	    L[length] = d;
	    length++;
	}
	else {
	    *pos = d;
	}
    }
    
    printf("%d\n", length);

    return 0;
}