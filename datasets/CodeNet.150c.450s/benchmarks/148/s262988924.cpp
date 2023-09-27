#include <stdio.h>
#include <string.h>
int main(){
    int tc;
    scanf("%d", &tc);
    int ac = 0;
    int wa = 0;
    int tle = 0;
    int re = 0;
    int i;
    for( i = 0; i < tc ; i++){
        char verdict[100];
        scanf("%s", verdict);
        int length = strlen(verdict);
        if(verdict[0] == 'A'){
            ac++;
        }
        else if(verdict[0] == 'W'){
            wa++;
        }
        else if(verdict[0] == 'T'){
            tle++;
        }
        else if (verdict[0] == 'R'){
            re++;
        }
    }
    printf("AC x %d\n", ac);
    printf("WA x %d\n", wa);
    printf("TLE x %d\n", tle);
    printf("RE x %d\n", re);
    return 0;
}