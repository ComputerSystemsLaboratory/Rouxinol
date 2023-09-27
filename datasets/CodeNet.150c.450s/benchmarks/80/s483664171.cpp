#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
	int a[2];
	for(int i = 0; i < 2; i++){
		a[i] = 0;
		for(int j = 0; j < 4; j++){
			int t; scanf("%d", &t);
			a[i] += t;
		}
	}
	printf("%d\n", max(a[0],a[1]));
}