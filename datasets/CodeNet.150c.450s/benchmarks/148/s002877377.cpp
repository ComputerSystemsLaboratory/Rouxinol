#include <stdio.h>

int main(){

    int AC=0;
    int TLE=0;
    int WA=0;
    int RE=0;
    int brpKali;
    scanf("%d", &brpKali);
    char inputan[brpKali][100];
    for(int i=0;i<brpKali;i++){
        scanf("%s", inputan[i]);    //AC, TLE, AC, AC, WA ,TLE

    }
    for(int j=0;j<brpKali;j++){
        if(inputan[j][0]=='A'){
            AC++;
        }
        else if(inputan[j][0]=='W'){
            WA++;
        }
        else if(inputan[j][0]=='T'){
            TLE++;
        }
        else if(inputan[j][0]=='R'){
            RE++;
        }

    }
printf("AC x %d\nWA x %d\nTLE x %d\nRE x %d\n", AC, WA, TLE, RE);




    return 0;
}