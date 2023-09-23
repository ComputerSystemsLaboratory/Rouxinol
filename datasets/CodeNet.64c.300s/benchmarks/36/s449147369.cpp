#include <stdio.h>

int main(void){
    
    int number[3] = {0};

    scanf("%d %d %d",&number[0],&number[1],&number[2]);
    

    for(int i = 0; i < (3-1) ; i++){
        for(int j = 1; j < 3 ;j++){
            if(number[i] > number[j]){
                int tmp = number[i];
                number[i] = number[j];
                number[j] = tmp;
            }
        }
    }

    for(int k = 0 ; k < 3 ; ){
        printf("%d",number[k]);
        k++;
        if(k >= 3){
            printf("\n");
            break;
        }else{
            printf(" ");
        }
    }    
    
    return 0;
}