#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int main(void){
	int x,y,z;
	long long s;
	long long a[101][101];
    long long b[101][101];
	scanf("%d %d %d", &x, &y,&z);
	for (int i = 0; i < x; i++){
		for (int j = 0; j < y; j++){
		scanf("%lld",&a[i][j]);
		}
	}
	for (int i = 0; i < y; i++){
		for (int j = 0; j < z; j++){
			scanf("%lld", &b[i][j]);
		}
	}

	for (int i = 0; i < x; i++){
		for (int j = 0; j < z; j++){
			s = 0;
			for (int k = 0; k < y; k++){
				s = s + (a[i][k] * b[k][j]);
			}
			if(j<z-1)printf("%lld ", s);
			else printf("%lld\n", s);
		}
	}

	return 0;
}