#include<cstdio>

int main(int argc, char const *argv[])
{
    int a, b;
    while(scanf("%d %d", &a, &b) != EOF){
        int c = a+b;
        int cnt = 0;
        while(c!=0){
            c /= 10;
            cnt++;
        }
        printf("%d\n", cnt);
    }
    return 0;
}

