#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
	int n[5];
	
	for(int i = 0; i < 5; i++){
		scanf("%d", &n[i]);
	}
	
	sort(n,n+5);
	reverse(n, n+5);
	
	for(int i = 0; i < 4; i++){
		printf("%d ", n[i]);
	}
	
	printf("%d\n", n[4]);
	
	return(0);
}