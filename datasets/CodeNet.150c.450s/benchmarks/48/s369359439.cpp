#include<cstdio>

#define MIN(X,Y) ((X<Y)?(X):(Y))

int trrt(int x) {
    int a,b;
    a=-1000;
    b=10000;
    while(b-a>1) {
        int m = (a+b)/2;
        if(m*m*m > x)
            b = m;
        else
            a = m;
    }
    return b;
}
int sqrt(int x) {
    int a,b;
    a=0;
    b=10000;
    while(b-a>1) {
        int m = (a+b)/2;
        if(m*m > x)
            b = m;
        else
            a = m;
    }
    return b;
}

int main(void) {
    while(true) {
        int e,res=1e6;
        scanf("%d", &e);
        if(!e) break;

        int zmax = trrt(e)*2;
        for(int z=0; z<zmax; z++) {
            int ymax = sqrt(e-z*z*z)*2;
            for(int y=0; y<ymax; y++) {
                int x = e - y*y - z*z*z;
                if(x<0) continue;

                res = MIN(x+y+z, res);
            }
        }

        printf("%d\n", res);
    }
    return 0;
}