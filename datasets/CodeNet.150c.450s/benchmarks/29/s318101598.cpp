#include <stdio.h> // C++???????????????
#include <string.h> // c++???????????????
#include <math.h> // c++???????????????
#include <iostream>
#include <string>
#include <list>
#include <stack>
#include <queue>
#include <map>
#include <algorithm>
using namespace std;

typedef long long int lli;

list<lli> lis;

int main(void) {
	int n;
	list<lli>::iterator p;

	char a[20];
	lli x;
	scanf("%d", &n);

	while (n--) {
		scanf("%s", a);
		if (a[0] == 'i') {
			scanf("%lld", &x);
			lis.push_front(x);
		}
		else if (a[0] == 'd') {
			if (strlen(a) > 6 && a[6] == 'F') {
				lis.pop_front();
			}
			else if (strlen(a) > 8 && a[6] == 'L') {
				lis.pop_back();
			}
			else {
				scanf("%lld", &x);
				for (p = lis.begin(); p != lis.end(); p++) {
					if (*p == x) {
						lis.erase(p);
						break;
					}
				}
			}
		}
	}
	bool f=false;
	for (p = lis.begin(); p != lis.end(); p++) {
		if (f) printf(" ");
		printf("%lld", *p);
		f = true;
	}
	printf("\n");
	return 0;
}