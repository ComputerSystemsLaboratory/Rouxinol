#include <stdio.h>
#include <algorithm>
using namespace std;

int seki[30];

int main(){
	int buf;
	int ans[2];
	for (int a = 0; a < 28; a++){
		scanf("%d", &buf);
		seki[buf - 1] = 1;
	}
	for (int a = 0; a < 30; a++){
		if (seki[a] == 0){
			ans[0] = a + 1;
			break;
		}
	}
	for (int a = ans[0]; a < 30; a++){
		if (seki[a] == 0){
			ans[1] = a + 1;
			break;
		}
	}
	printf("%d\n%d\n", ans[0], ans[1]);
	return 0;
}