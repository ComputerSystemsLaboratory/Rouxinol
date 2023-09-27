#include<cstdio>
#include<algorithm>
using namespace std;

int w, h, x, y, r;

int main() {
	//freopen("test.txt", "r", stdin);
	int i, j;
	while (~scanf("%d%d%d%d%d", &w, &h, &x, &y,&r)) {
		bool flag = true;
		if (x < r || y < r) flag = false;
		else if (x > w || y > h) flag = false;
		else if (w - x < r || h - y < r) flag = false;
		printf("%s\n", flag ? "Yes" : "No");
	}
	return 0;
}