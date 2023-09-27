#include <bits/stdc++.h>
using namespace std;
int a, b;
int main() {
	while(~scanf("%d%d", &a, &b)) {
		printf("%d\n", to_string(a + b).size());
	}
}