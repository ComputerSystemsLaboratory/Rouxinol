#include <iostream>
#include <cstdio>
using namespace std;

int n, s, D, a[30], b[400][30], la[400];
int main()
{
	int i, j, t;
	cin >> D;
	for (i = 0; i < 26; i++) {
		scanf ("%d", &a[i]);
	}
	for (i = 1; i <= D; i++) {
		for (j = 0; j < 26; j++) {
			scanf ("%d", &b[i][j]);
		}
	}
	for (i = 1; i <= D; i++){
		scanf ("%d", &t);
		t--;
		s += b[i][t];
		la[t] = i;
		for (j = 0; j < 26;j++) {
			s -= a[j] * (i - la[j]);
		}
		printf("%d\n", s);
	}
    return 0;
}
