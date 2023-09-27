#include <iostream>
#include <cstdio>

using namespace std;

int main() {

	int i, w, n, a, b, x[31];

	cin >> w;
	cin >> n;
	for(i=1; i<=w; i++) {
		x[i]=i;
	}


	for(i=1; i<=n; i++) {
		scanf("%d,%d", &a, &b);
		int t=x[a];
		x[a]=x[b];
		x[b]=t;
	}

	for(i=1; i<=w; i++) {
		cout << x[i] << endl;
	}

	return 0;

}