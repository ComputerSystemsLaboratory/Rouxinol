//#define _USE_MATH_DEFINES // for C++
//#include <cmath>
#include <stdio.h>
//#include <vector>

using namespace std;



int main(){
	
	int n;
	int A[100];
	int flag = 1;
	int buf;
	int cnt = 0;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)	scanf("%d", &A[i]);

	while (flag){
		flag = 0;
		for (int j = n - 1; j > 0; j--){
			if (A[j] < A[j - 1]){
				buf = A[j - 1];
				A[j - 1] = A[j];
				A[j] = buf;
				flag = 1;
				cnt++;
			}
		}
	}

	printf("%d", A[0]);
	for (int i = 1; i < n; i++) printf(" %d", A[i]);
	printf("\n%d\n", cnt);

	return 0;
}