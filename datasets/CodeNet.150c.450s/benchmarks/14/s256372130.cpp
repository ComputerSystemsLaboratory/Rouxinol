#include <cstdio>

int main(){
    int n;
    scanf("%d",&n);
    for(int x = 1;x <= n;x++){
    int a = x / 10;
    int b = x / 100;
    int c = x / 1000;
        if(x % 3 == 0){printf(" %d",x);}
        else if(a ==3 || b == 3 || c == 3){printf(" %d",x);}
        else if(x % 10 == 3 || a % 10 == 3 || b % 10 == 3 || c % 10 == 3){printf(" %d",x);}
    }
            printf("\n");
return 0;
}
