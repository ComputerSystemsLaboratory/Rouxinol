#include <iostream>
#include <stdio.h>

int main()
{
    char number[1000];
    while(1) {
        scanf("%s", number);
        if(number[0] == '0') {
            break;
        }
        
        int sum = 0;
        for(int i = 0; number[i] != '\0'; i++) {
            sum += number[i] - '0';
        }
        
        printf("%d\n", sum);
    }
}
