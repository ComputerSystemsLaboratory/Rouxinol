#include <stdio.h>

int judge(int a,int b,int c){
    if((a*a == b*b + c*c) || (b*b == a*a + c*c) || (c*c == a*a + b*b))return 1;
    else return 0;
}

int main(void){
    int n,a,b,c;
    scanf("%d",&n);
    for(int i=0;i < n;i++){
        scanf("%d %d %d",&a,&b,&c);
        if(judge(a,b,c) == 1)printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}