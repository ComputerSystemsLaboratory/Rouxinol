#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int main(void){
	int x,y;
	int s;
	int b[100];
    int  a[101][101];
	scanf("%d %d", &x, &y);
	for (int i = 0; i < x; i++){
		for (int j = 0; j < y; j++){
		scanf("%d",&a[i][j]);
		b[j] = 0;
		}
	}

	for (int i = 0; i < x; i++){
		s = 0;
		for (int j = 0; j < y; j++){
			printf("%d ", a[i][j]);
			s = s + a[i][j];
			b[j] = b[j] + a[i][j];
		}
		printf("%d\n", s);
	}
	s = 0;
	for (int i = 0; i < y; i++){
		printf("%d ", b[i]);
		s = s + b[i];
	}
	printf("%d\n", s);

	return 0;
}