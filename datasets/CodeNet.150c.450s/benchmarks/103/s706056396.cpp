#include <stdio.h>

int makePatterns(int minUsbl, int maxUsbl, int n, int s);

int main(void){
    int n, s;
    
    while(scanf("%d %d",&n, &s), n!=0 || s!=0){
        printf("%d\n", makePatterns(0,9,n,s));
    }
    return 0;
}

int makePatterns(int minUsbl, int maxUsbl, int n, int s){
    int ptns=0;

//    printf("%d - %d:%d,%d\n",minUsbl, maxUsbl, n, s);    
    if (n==0){
        if (s==0){
//            printf("well done\n");
            return 1;
        }else {
//            printf("failed\n");
            return 0;
        }
    }
    if (minUsbl > s) return 0;
    
    for (int i=minUsbl; i<=maxUsbl && i<=s; i++){
        ptns += makePatterns(i+1, maxUsbl, n-1, s-i);
    }
    return ptns;
}