#include<cstdio>

int main(){
    int a = 1;
    int c = 0;
    scanf("%d", &a);
    while(a){
        c++;
        printf("Case %d: %d\n", c, a);
        scanf("%d", &a);
    }
    return 0;
}