#include <stdio.h>
#include <utility>
#define MAX_N 100

int a,b;

int gcd(int,int);

int main(void){
    scanf("%d %d",&a,&b);
    if( a < b) std::swap(a,b);
    printf("%d\n",gcd(a,b));
    return 0;
}

int gcd(int a,int b){
    if(b == 0){ return a;}
    else{return gcd(b, a%b);}
    
}