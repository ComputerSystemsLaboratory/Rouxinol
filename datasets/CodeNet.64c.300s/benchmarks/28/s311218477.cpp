#include <cstdio>

using namespace std;

int main() {
    int W, H, x, y, r;
    scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);

    if (!(0<=x && x<=W && 0<=y && y<=H))
        return !printf("No\n");

    if (!(x>=r && W-x>=r && y>=r && H-y>=r))
        return !printf("No\n");

    printf("Yes\n");
    return 0;
}