#include <stdio.h>
#include <stdbool.h>

bool judgeRectTriangle(int , int , int);

int main(void)
{
    int edge1, edge2, edge3;

    scanf("%d", &edge1);//問題文読み間違えたので最初のデータを捨てます。

    while (scanf("%d%d%d", &edge1, &edge2, &edge3) != EOF) {
        if (judgeRectTriangle(edge1, edge2, edge3) ){
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}

bool judgeRectTriangle(int x, int y, int z)
{
    if (x * x + y * y == z * z || y * y + z * z == x * x || z * z + x * x == y * y) {
        return true;
    } else {
        return false;
    }
}