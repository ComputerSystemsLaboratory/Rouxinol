#include <cstdio>
int main(){
    int chukan, kimatsu, sai;
    
    while (1){
        scanf("%d%d%d", &chukan, &kimatsu, &sai);
        if (chukan == -1 && kimatsu == -1 && sai == -1){
            break;
        }
        if (chukan == -1 || kimatsu == -1){
            printf("F\n");
        }
        else if (chukan + kimatsu >= 80){
            printf("A\n");
        }
        else if (chukan + kimatsu >= 65){
            printf("B\n");
        }
        else if (chukan + kimatsu >= 50){
            printf("C\n");
        }
        else if (chukan + kimatsu >= 30){
            if (sai >= 50){
                printf("C\n");
            }
            else {
                printf("D\n");
            }
        }
        else {
            printf("F\n");
        }
    }
    return 0;
}