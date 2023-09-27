#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
	int a[5];
	
	for(int i=0; i<5; ++i)
		scanf("%d", &a[i]);
	sort(a, a+5, greater<int>());
	
	for(int i=0; i<5; ++i){
		printf("%d",a[i]);
		if(i<4) printf(" ");
	}
	printf("\n");
	
	return 0;
}