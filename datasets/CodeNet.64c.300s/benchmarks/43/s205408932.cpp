#include <cstdio>
using namespace std;

int main(){
	int s, sum[2] = { 0 };
	for (int j = 0; j < 2; j++) {
		for (int i = 0; i < 4; i++) {
			scanf("%d", &s);
			sum[j] += s;
		}
	}
	printf("%d\n", sum[0] > sum[1] ? sum[0] : sum[1]);


	return 0;
}