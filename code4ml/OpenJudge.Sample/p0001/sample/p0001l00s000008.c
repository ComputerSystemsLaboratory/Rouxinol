#include<stdio.h>

int main(void){
    int a[200] = {0}, b[200] = {0};
    int count[200] = {0};
    int i;
    for(i = 0; scanf("%d", &a[i]) != EOF; i++){
        scanf("%d", &b[i]);
        int sum = a[i] + b[i];
        do{
            sum /= 10;
            count[i]++;
        }while(sum);
    }
    for(i = 0; count[i]; i++)
    printf("%d\n", count[i]);
    return 0;
}