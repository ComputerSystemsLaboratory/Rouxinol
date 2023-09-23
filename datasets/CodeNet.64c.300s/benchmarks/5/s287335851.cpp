#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
	int H[10];
	
	for(int i = 0; i < 10; i++){
		scanf("%d", H + i);
	}
	
	sort(H, H + 10);
	
	for(int i = 1; i <= 3; i++){
		printf("%d\n", H[10 - i]);
	}
	
	return 0;
}