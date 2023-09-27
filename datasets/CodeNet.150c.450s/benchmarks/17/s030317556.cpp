#include <stdio.h>
#include <algorithm>
using namespace std;

int main(void)
{
	int a[5], n, i;
	
	for(i = 0; i < 5; i++){
		scanf("%d", &a[i]);
	}
	
	sort(a, a+5);
	
	for (i = 0; i < 5; i++){
		
		printf("%d", a[4 - i]);
		if (i != 4){
			printf(" ");
		}
	}
	printf("\n");
	
	return(0);
}
	