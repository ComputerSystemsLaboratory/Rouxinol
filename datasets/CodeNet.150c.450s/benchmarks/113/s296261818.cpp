#include <stdio.h>

int main(void){
    
    int testCases[10001] = {0};
    int testNum = 0;

    for(int i = 0;i < 10001 ; i++){
        scanf("%d",&testCases[i]);
        if(testCases[i] == 0){
            break;
        }
        testNum++;
    }
    
    for(int i = 0 ; i < testNum ; i++){
        printf("Case %d: %d\n",(i+1),testCases[i]);
    }
    return 0;
}