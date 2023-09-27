#include <algorithm>
#include <functional>
#include <iostream>
using namespace std;

int main(void){
	int a[5];
	int i;

	for(i=0; i<5; i++){
		scanf("%d", &a[i]);
	}
	sort(a, a+5, greater<int>());
	for(i=0; i<4; i++){
		printf("%d ", a[i]);
	}
	printf("%d\n", a[4]);

	return 0;
}