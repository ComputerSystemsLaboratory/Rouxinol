#include<stdio.h>

int a;
int b;
int c;
int chukan;

int main(){
    scanf("%d %d %d", &a, &b, &c);
    if(a > b){
        chukan = b;
        b = a;
        a = chukan;
    }
    if(b > c){
        chukan = c;
        c = b;
        b = chukan;
    }
    if(a > b){
        chukan = b;
        b = a;
        a = chukan;
    }
    printf("%d %d %d\n", a, b, c);
    return 0;
}
        