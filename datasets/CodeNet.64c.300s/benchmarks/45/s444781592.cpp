#include <cstdio>
using namespace std;

int main()
{
	int n, m, p;
	int array[200];
	
	while (scanf("%d %d %d", &n, &m, &p), n + m + p){
		int sum = 0;
		for (int i = 0; i < n; i++){
			scanf("%d", &array[i]);
			sum += array[i];
		}
		
		if (array[m - 1] > 0){
			printf("%d\n", sum * (100 - p) / array[m - 1]);
		}
		else {
			puts("0");
		}
	}
	
	return 0;
}