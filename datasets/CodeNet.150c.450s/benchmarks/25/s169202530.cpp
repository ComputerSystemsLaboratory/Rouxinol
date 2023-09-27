#include <stdio.h>

int main (){
    char str[1210];
    int alpha[40] = {};

    for(int i=0; scanf("%c",&str[i]) != EOF; i++){
        for(int j = 65;j<=90;j++){
            if(str[i] == j || str[i] == j + 32){
                alpha[j-65] += 1;
            }
        }
    }
    for(int k = 0; k <= 25; k++){
        printf("%c : %d\n",k + 97, alpha[k]);
    }

}
