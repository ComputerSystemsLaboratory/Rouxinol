#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int main() {
	int m, f, r;
	while (cin >> m >> f >> r, ~m || ~f || ~r) {
		if (!~m || !~f)puts("F");
		else if (m + f >= 80)puts("A");
		else if (m + f >= 65)puts("B");
		else if (m + f >= 50)puts("C");
		else if (m + f >= 30) {
			if (r >= 50)puts("C");
			else puts("D");
		}
		else puts("F");
	}
}