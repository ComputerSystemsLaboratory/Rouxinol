#include <stdio.h>
#include <string.h>
int main(){
    int N;
    scanf("%d", &N);
    int AC = 0;
    int WA = 0;
    int TLE = 0;
    int RE = 0;
    for(int i = 0; i < N ; i++){
        char verdict[100];
        scanf("%s", verdict);
        int L = strlen(verdict);
        if(verdict[0] == 'A'){
            AC++;
        }
        else if(verdict[0] == 'W'){
            WA++;
        }
        else if(verdict[0] == 'T'){
            TLE++;
        }
        else if (verdict[0] == 'R'){
            RE++;
        }
    }
    printf("AC x %d\n", AC);
    printf("WA x %d\n", WA);
    printf("TLE x %d\n", TLE);
    printf("RE x %d\n", RE);
    return 0;
}