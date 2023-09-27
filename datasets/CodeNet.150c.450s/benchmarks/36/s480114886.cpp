#include <bits/stdc++.h>
using namespace std;

int d, s;

int main() {
	while (scanf("%d",&d) != EOF) {
		s = 0;
		for (int i = d; i <= 600-d; i += d) s += i*i*d;
		printf("%d\n",s);
	}
}
