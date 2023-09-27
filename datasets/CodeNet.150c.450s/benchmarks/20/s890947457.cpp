#include <bits/stdc++.h>
using namespace std;


int main()
{
	int S;
	scanf("%d", &S);

	int h = S/3600;
	int m = S%3600/60;
	int s = S % 3600 % 60;
	printf("%d:%d:%d\n",h,m,s);
}
