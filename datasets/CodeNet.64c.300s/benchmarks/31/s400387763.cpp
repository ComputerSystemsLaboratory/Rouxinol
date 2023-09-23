#include <cstdio>
using namespace std;

int main(){
	int a[28];
	int b[30] = {};
	for (int i = 0; i < 28; i++){
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < 30; i++){
		for (int j = 0; j < 28; j++){
			if (i + 1 == a[j]){
				b[i] = 1;
			}
		}
	}
	for (int i = 0; i < 30; i++){
		if (b[i] == 0){
			printf("%d\n", i + 1);
		}
	}

	return 0;
}