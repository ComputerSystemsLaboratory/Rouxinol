#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#define MAX_L (1010)
using namespace std;

int q;
int dp[2][MAX_L];

int main()
{
    scanf("%d", &q);


    for ( int i = 0; i < q; i++ ) {
	string a, b;
	char str[MAX_L];
	scanf("%s", str);
	a = str;
	scanf("%s", str);
	b = str;	
	memset(dp, 0, 2 * MAX_L * sizeof(int));
	
	for ( int j = 1; j <= a.length(); j++ ) {
	    for ( int k = 1; k <= b.length(); k++ ) {
		if ( a[j-1] == b[k-1] ) {
		    dp[j%2][k] = dp[(j-1)%2][k-1] + 1;
		}
		else {
		    dp[j%2][k] = max(dp[(j-1)%2][k], dp[j%2][k-1]);
		}
	    }
	}
	printf("%d\n", dp[(a.length())%2][b.length()]);
    }

    return 0;
}