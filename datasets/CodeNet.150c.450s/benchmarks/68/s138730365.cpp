#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	int a[1001];
	int d;
	
	while (scanf("%d", &n), n != 0){
		d = 1000001;
		for (int i = 0; i < n; i++) scanf("%d", &a[i]);
		
		sort(a, a + n);
		
		for (int i = 1; i < n; i++){
			if (a[i] <= a[i-1]){
				if (a[i-1] - a[i] < d) d = a[i-1] - a[i];
			}
			if (a[i] > a[i-1]){
				if (a[i] - a[i-1] < d) d = a[i] - a[i-1];
			}
		}
		
		printf("%d\n", d);
	}
}