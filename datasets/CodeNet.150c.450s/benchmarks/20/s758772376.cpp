#include <cstdio>

int main(){
    int S, h, m;
    scanf("%d", &S);   

    h = S / 3600;
    S = S - h * 3600;
    m = S / 60;
    S = S - m *60;

    printf("%d:%d:%d\n", h, m, S);
    return 0;
}