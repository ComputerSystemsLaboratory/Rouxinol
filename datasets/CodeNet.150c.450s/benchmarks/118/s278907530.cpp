#include<cstdio>

int ymd2d(int y, int m, int d) {
    int res=0;
    y--, m--; d--;
    res += y/3*((20+19)*5*2+20*10);
    res += (y%3)*(20+19)*5;
    switch(y%3) {
        case 0:
        case 1:
            res += m/2*(20+19);
            res += (m%2)*20;
            break;
        case 2:
            res += m*20;
            break;
    }
    res += d;

    return res;
}

int main(void) {
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        int y,m,d;
        scanf("%d%d%d", &y, &m, &d);
        printf("%d\n", ymd2d(1000,1,1) - ymd2d(y,m,d));
    }
    return 0;

}