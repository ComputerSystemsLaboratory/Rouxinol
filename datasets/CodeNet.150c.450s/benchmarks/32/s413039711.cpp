
#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int nmin,nmax,m,temp,n;
	int p[200];

	start:

	scanf("%d %d %d", &m,&nmin,&nmax);

	n = nmin;

	if (m == 0) {
		goto finish;
	}

	for (int i = 0; i < m; i++) {
		cin >> p[i];
	}

	for (int i = 0; i < m-1; i++) {
		for (int j = i+1; j < m; j++) {
			if (p[i] < p[j]) {
				temp = p[i];
				p[i] = p[j];
				p[j] = temp;
			}
		}
	}

	for (int i = nmin-1; i <= nmax-1; i++) {
		if (p[n-1]-p[n] <= p[i] - p[i + 1]) {
			n = i+1;
		}
	}
	
	cout << n << endl;

	n = 0;

	goto start;

	finish:

	return 0;
}
