#include <stdio.h>

int IsRightTriangle(int a, int b, int c);

int main(void){
    int n, a, b, c;

    scanf("%d", &n);
    for (int i=0; i<n; i++){
        scanf("%d %d %d", &a, &b, &c);
        if (IsRightTriangle(a,b,c)){
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}

int IsRightTriangle(int a, int b, int c){
    if (a*a == b*b + c*c) return 1;
    if (b*b == c*c + a*a) return 1;
    if (c*c == a*a + b*b) return 1;
    return 0;
}