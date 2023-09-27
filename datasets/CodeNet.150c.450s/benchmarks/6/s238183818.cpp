#include<stdio.h>
#include<stdbool.h>
int main(void){
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    printf(a<b&&b<c ? "Yes\n" : "No\n");
    return 0;
}
