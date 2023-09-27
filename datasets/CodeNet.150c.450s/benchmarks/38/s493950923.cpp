#include <iostream>
#include <cstdio>
#define NMAX (1000)
using namespace std;
int main(void){
    
    int N = 0;
    int a=0;
    int b=0;
    int c=0;

    //N??°?????\???
    scanf("%d",&N);
    
    //N?????°???????????????a,b,c???????????????
    for(int Ncount = 0; Ncount < N; Ncount++){
        scanf("%d %d %d",&a,&b,&c);
        if( ((a*a) + (b*b))  == (c*c) ){ 
            printf("YES\n"); 
        }else if( (b*b) + (c*c)  == (a*a) ){
            printf("YES\n"); 
        }else if( (c*c) + (a*a)  == (b*b) ){ 
            printf("YES\n"); 
        }else{ 
            printf("NO\n"); 
        }
    }
}