#include <cstdio>
#include <algorithm>
using namespace std;


int a[5];

int main(){
	for (int i = 0; i < 5; i++) {
		scanf("%d", &a[i]);
	}
	sort(a, a + 5);
	for (int i = 4; i >= 0; i--) {
		if (i == 0) {
			printf("%d\n", a[i]);
		}
		else {
			printf("%d ", a[i]);
		}
	}

	return 0;
}