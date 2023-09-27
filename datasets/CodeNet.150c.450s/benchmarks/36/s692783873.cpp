#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
	while(true) {
		int d;
		if(scanf("%d", &d)<1)break;
		int sum = 0;
		for(int i = 0; i < 600; i+=d) {
			sum += i*i*d;
		}
		printf("%d\n", sum);
	}
	return 0;
}