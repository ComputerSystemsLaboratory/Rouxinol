#include <stdio.h>

int main(void){
    int a,b;
    int sum,i;
    
    while(scanf("%d %d", &a, &b) != EOF){
        i = 0;
        sum = a + b;
        while(sum > 0){
            sum /= 10;
            i++;
        }
        
        printf("%d\n", i);
    }
    return 0;

}

//Ctrl???d??§??\????????????