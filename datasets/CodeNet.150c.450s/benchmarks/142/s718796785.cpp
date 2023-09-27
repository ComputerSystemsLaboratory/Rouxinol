#include <stdio.h>
int main ()
{
	int n, k;
	scanf ("%d %d", &n, &k);
	int x[n];
	for (int i = 0; i < n; i++){
		scanf ("%d", &x[i]);
	} 
	
	for (int i = k; i < n; i++){
		if (x[i - k] < x[i]){
			printf ("Yes\n");
		} else {
			printf ("No\n");
		}
	}
return 0;
}