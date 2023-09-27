#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    char charr[1001] = {};
    int result;
    
    while(1){        
        scanf("%s",charr);
        if(charr[0] == '0') { break; }
        
        result = 0;
        for (int i=0; charr[i] != '\0'; i++){
            result += charr[i] - '0';
        }
        printf("%d\n", result);
    }
    return 0;
}