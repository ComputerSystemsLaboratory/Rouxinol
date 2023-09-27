#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    0<=a<=100;
    0<=b<=100;
    0<=c<=100;
    scanf("%d %d %d\n",&a,&b,&c);
    if(a < b && b < c){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}    
