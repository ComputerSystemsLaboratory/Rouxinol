#include <stdio.h>

int main(void){

    int mountain[10] = {0};
    int i=0;
    int j=0;
    int k=0;
    int count=0;
    int m1=0;
    int m2=0;
    int m3=0;
    
    for(i=0; i<10; i++){
        scanf("%d", &j);
        mountain[i] = j;
    }
    
    for(i=0; i<10; i++){
        j=mountain[i];
        while(k<10){
            if(j < mountain[k]){
                count++;
            }
            k++;
        }
        switch(count){
            case 0:
                m1=j;
                break;
            case 1:
                m2=j;
                break;
            case 2:
                m3=j;
                break;
            default:
                break;
        }
        k=0;
        count=0;
    }
    printf("%d\n", m1);
    printf("%d\n", m2);
    printf("%d\n", m3);
    
    return 0;
}