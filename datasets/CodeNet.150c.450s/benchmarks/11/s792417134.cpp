#include <stdio.h>
#include <stdlib.h>

int d[5][16] = {0};

int main(){
    int n;
    
    
    scanf("%d", &n);
    int i;
    for(i = 0; i < n; i++){
        char c, c1;
        int a;
        scanf(" %c %d", &c, &a);
        // printf("%c %d\n", c, a);
        if(c == 'S') d[0][a - 1] = 1;
        else if(c == 'H') d[1][a - 1] = 1;
        else if(c == 'C') d[2][a - 1] = 1;
        else d[3][a - 1] = 1;
    }
    int j;
    char m;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 13; j++){
            if(d[i][j] == 0){
                if(i == 0){
                    m = 'S';
                }else if(i == 1){
                    m = 'H';
                }else if(i == 2){
                    m = 'C';
                }else{
                    m = 'D';
                }
                printf("%c %d\n", m, j + 1);          
            }
        }
    }
    return 0;
}