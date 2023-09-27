#include <cstdio>

int main(){
    int n;
    scanf("%d",&n);
    for(int i = 1;i <= n;i++){
            if(i % 3 == 0){
               printf(" %d",i);
               continue;
            } //iが３の倍数かどうか
            if(i % 10 == 3){
                printf(" %d",i);
                continue;
            } //iの10の位が3かどうか
            for(int x = i;x != 0;x /= 10)
            if(x % 10 == 3||x == 3){
                printf(" %d",i);
                break;
        } //iのm(>=2)の位が３かどうか
    };
    printf("\n");
    return 0;
}
