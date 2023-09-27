#include<stdio.h>
int gcd(int x, int y){
    return (x%y>0) ? gcd(y, x%y) : y;
}
int main(){
    int x, y;
    int w;
    scanf("%d %d", &x, &y);
    w = gcd(x, y);
    printf("%d\n", w);
}