#include <cstdio>


int main(){
    int W, H, x, y, r;
	scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);
if ((0 <= x - r && x + r <= W) && (0 <= y - r && y + r <= H)) printf("Yes\n");
else printf("No\n");
    return 0;
}
