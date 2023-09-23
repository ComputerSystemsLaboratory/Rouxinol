#include<stdio.h>
using namespace std;
int x,y,z = 0;

int main() {
	scanf("%d %d", &x, &y);
	while (1) {
	if (x == 0 && y == 0) {
			break;
		}
		if (x > y) {
			z = x;
			x = y;
			y = z;
		}
		printf("%d %d\n", x, y);
		scanf("%d %d", &x, &y);
	}
}
