#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>
#include <limits.h>

int main(void){
    int a,b,s,i,n;
    while(scanf("%d%d",&a,&b)!=EOF){
        n=0;
        s=a+b;
        while(s!=0){
            s/=10;
            n++;
        }
        printf("%d\n",n);
    }
    return 0;
}

