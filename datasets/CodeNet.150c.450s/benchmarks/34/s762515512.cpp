#include <cstdio>
#include <algorithm>
#define MAX 31
using namespace std;

int main(){
	int n, array[MAX];
	fill(array, array + MAX, 0);
	array[0] = 1;
	array[1] = 2;
	array[2] = 4;
	for(int i = 3; i <= 30; i++) array[i] = array[i - 1] + array[i - 2] + array[i - 3];
	
	while(scanf("%d", &n)){
		if(n == 0) break;
		printf("%d\n", array[n - 1] / 10 / 365 + 1);
	}
	return 0;
}