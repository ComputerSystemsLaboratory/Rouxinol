#include <cstdio>
#include <string.h>
using namespace std;

int main (void)
{
	int ta=0, ha=0, i, n;
	char t[101], h[101];

	scanf("%d", &n);

	for (i=0; i<n; i++){
		scanf("%s %s", t, h);
		if (strcmp(t, h) < 0)
			ha += 3;
		else if (strcmp(t, h) > 0)
			ta += 3;
		else{
			ta++;
			ha++;
		}
	}

	printf("%d %d\n", ta, ha);
	return 0;
}