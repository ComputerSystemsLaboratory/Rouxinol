#include <stdio.h>
#include <string.h>

int main(){
    int n, ac=0, wa=0, tle=0, re=0;
    scanf("%d", &n);
    char input[5];
    for(int i=0;i<n;i++){
        scanf("%s", input);
        
        if(strcmp(input,"AC")==0){
            ++ac;
        } else if(strcmp(input,"WA")==0){
            ++wa;
        } else if(strcmp(input,"TLE")==0){
            ++tle;
        } else if(strcmp(input,"RE")==0){
            ++re;
         }
    }
    printf("AC x %d\n", ac);
    printf("WA x %d\n", wa);
    printf("TLE x %d\n", tle);
    printf("RE x %d\n", re);
    return 0;
}
