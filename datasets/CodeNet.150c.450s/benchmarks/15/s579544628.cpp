#include <cstdio>
#define MAX_N (10010)
#define MAX_Q (510)
int n;
int q;
int S[MAX_N+1];
int T[MAX_Q];

int linear_search(int d)
{
    int i = 0;
    while ( true ) {
	if (S[i] == d ) break;
	i++;
    }
    return i;
}

int main()
{
    scanf("%d", &n);
    for ( int i = 0; i < n; i++ ) {
	scanf("%d", &S[i]);
    }
    scanf("%d", &q);
    int ans = 0;
    for ( int i = 0; i < q; i++ ) {
	scanf("%d", &T[i]);
	S[n] = T[i];
	int index = linear_search(T[i]);
	if ( index < n ) ans++;
    }

    printf("%d\n", ans);
    return 0;
}