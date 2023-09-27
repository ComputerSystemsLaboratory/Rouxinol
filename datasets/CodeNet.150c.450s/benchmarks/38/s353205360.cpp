#include <stdio.h>

int main(){
    int N;
    int a,b,c,d;
    int i;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d %d %d",&a,&b,&c);
        if(a<b){
            d = a;
            a = b;
            b = d;
        }
        if(a<c){
            d = a;
            a = c;
            c = d;
        }
        printf((a*a-b*b-c*c) ? "NO\n" : "YES\n");
    }
}