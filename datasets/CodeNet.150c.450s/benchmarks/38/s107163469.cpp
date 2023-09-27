#include<stdio.h>
/*複数のデータセットに対して、各々が直角三角形か
どうか判定する*/
void right_triangle(int x, int y, int z);

int main(void)
{
    int n;//nはデータセットの個数
    scanf("%d", &n);
    for ( int i = 0; i <n ; ++i){
    int a, b, c;//a,b,cは辺の長さ
    scanf("%d %d %d", &a, &b, &c);
    right_triangle(a , b, c);
    }
    return 0;
}    

void right_triangle( int x, int y, int z)
{
    x *= x;
    y *= y;
    z *= z;
    if (x == y + z|| y == z + x|| z == x + y){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
}