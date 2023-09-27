#include <cstdio>
using namespace std;


int main (void)
{
	int n, x, i, j, k, count, sum;

	while (scanf("%d %d", &n, &x)!=EOF && n!=0 || x!=0){
		count = 0;
		for (i=1; i<=n; i++){
			for (j=i+1; j<=n; j++){
				for (k=j+1; k<=n; k++){
					if (i != j && j != k && k != i){
						sum = i + j + k;
						if (sum == x)
							count++;
					}
				}
			}
		}

		printf("%d\n", count);
	}
	return 0;
}