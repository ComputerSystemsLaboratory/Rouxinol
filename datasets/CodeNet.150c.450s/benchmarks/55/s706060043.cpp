#include <stdio.h>


int main(){
    char x[1001];
    int sum;
    
    while (scanf("%s", x) && x[0]!='0'){
        sum=0;
        for (char *p=x; *p != '\0'; p++){
            sum += *p - '0';
        }
        printf("%d\n", sum);
    }

    return 0;
}