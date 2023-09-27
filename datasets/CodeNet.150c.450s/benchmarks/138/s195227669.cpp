#include<cstdio>

int gcd(int x, int y) {
    if(!y) return x;
    return gcd(y, x%y);
}

int main(void) {
    int x,y;
    scanf("%d%d",&x,&y);
    printf("%d\n",gcd(x,y));
    return 0;
}