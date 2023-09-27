#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
	int a[5], i, b[5], x, y;
	while (~scanf ("%d", a))
	{
		int has[10] = {0};
		has[a[0]] = 1;
		for (i = 1; i < 4; i++) scanf ("%d", a+i), has[a[i]] = 1;
		for (i = 0; i < 4; i++) scanf ("%d", b+i);
		x = y = 0;
		for (i = 0; i < 4; i++) if (a[i] == b[i]) ++x;
		for (i = 0; i < 4; i++) if (has[b[i]]) ++y;
		printf ("%d %d\n", x, y-x);
	}
	return 0;
}