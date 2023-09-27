#include <cstdio>

int main()
{
    int m,f,r;
    while(1){
        scanf("%d %d %d", &m, &f, &r);
        if(m == -1 && f == -1 && r == -1) break;
        if(m == -1 || f == -1)
            printf("F\n");
        else if(m + f < 30)
            printf("F\n");
        else if(m + f >= 30 && m + f < 50){
            if(r < 50) printf("D\n");
            else printf("C\n");
        }
        else if(m + f >= 50 && m + f < 65)
            printf("C\n");
        else if(m + f >= 65 && m + f < 80)
            printf("B\n");
        else printf("A\n");
    }
    return 0;
}