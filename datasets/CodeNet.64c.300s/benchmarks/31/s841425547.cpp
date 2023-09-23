#include <cstdio>
using namespace std;

int n;
bool b[31] = { false };

int main(){
	for (int i = 0; i < 28; i++) {
		scanf("%d", &n);
		b[n] = true;
	}
	for (int i = 1; i <= 30; i++) {
		if (!b[i])
			printf("%d\n", i);
	}

	return 0;
}