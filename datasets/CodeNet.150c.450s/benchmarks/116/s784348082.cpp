#include <iostream>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int main(int argc, char **argv)
{
	int *a, *a2, m, n, t1, t2;
	
	while(1){
		cin >> n >> m;
		if(n == 0 && m == 0){
			break;
		}
		
		a = (int *)calloc(n-m+1, sizeof(int));
		a2 = (int *)calloc(n, sizeof(int));
		
		for(int i = 0; i < n; i++){
			cin >> t1;
			a2[i] = t1;
		}
		
		for(int i = 0; i < m; i++){
			a[0] += a2[i];
		}
		
		for(int i = 0; i < n-m; i++){
			a[i+1] += (a2[m+i] + a[i] - a2[i]);
		}
		
		sort(a, a+(n-m+1));
		
		cout << a[n-m] << endl;
		
		free(a2);
		free(a);
	}
	
	return 0;
}