#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {

	int n;
	scanf("%d", &n);

	int point_taro = 0;
	int point_hanako = 0;

	for (int i = 0; i < n; i++) {
		char taro[101], hanako[101];
		scanf("%s", taro);
		scanf("%s", hanako);

		int flag = strcmp(taro, hanako);
		
		if (flag > 0) {
			point_taro += 3;
		}
		else if (flag < 0) {
			point_hanako += 3;
		}
		else {
			point_taro += 1;
			point_hanako += 1;
		}
	}

	printf("%d %d\n", point_taro, point_hanako);

	return 0;
}