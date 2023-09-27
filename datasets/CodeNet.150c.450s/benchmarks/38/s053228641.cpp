#define _CRT_SECURE_NO_WARNINGS
#include<algorithm>
#include<cstdio>

int main(){
	int n, a[3];
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		for(int j = 0; j != 3; ++j )
			scanf("%d", a+j);
		std::sort(a, a + 3);
		puts(a[2] * a[2] == a[0] * a[0] + a[1] * a[1] ? "YES" : "NO");
	}
	return 0;
}