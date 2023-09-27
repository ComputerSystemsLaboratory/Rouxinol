#include <stdio.h>

int main (){
	int n, k;
	scanf ("%d %d", &n, &k);
	int arr[n];
	for (int i = 0; i < n; i++){
		scanf ("%d", &arr[i]);
		if (i >= k){
//			printf ("Nilai Semester ke-i: %d\n", arr[i]);
//			printf ("Nilai Semester ke0(i - k) : %d\n", arr[i - k]);
			arr[i] > arr[i - k] ? puts("Yes") : puts("No");
		}
	}
	
	
	
	return 0;
}