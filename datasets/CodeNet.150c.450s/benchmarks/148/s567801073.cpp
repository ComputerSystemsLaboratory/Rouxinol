#include <stdio.h>

int main (){

    int n;
    int AC=0, WA=0, TL=0, R=0;
    scanf("%d", &n);

    char str[105];

    while(n--){
        scanf("%s", &str);
        if(str[0]=='A'){
            AC++;
        } else if(str[0]=='W'){
            WA++;
        } else if(str[0]=='T'){
            TL++;
        } else if(str[0]=='R'){
            R++;
        }
    }
    printf("AC x %d\n", AC);
    printf("WA x %d\n", WA);
    printf("TLE x %d\n", TL);
    printf("RE x %d\n", R);



    return 0;
}