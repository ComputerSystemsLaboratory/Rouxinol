#include <iostream>
#include <cstdio>
#define KETAMAX (15)
#define SETMAX (200)
using namespace std;
int main(void){
    
    int a[SETMAX] = {0};
    int b[SETMAX] = {0};
    int keta[SETMAX] = {0};
    int SetCount = 0;
    int ret = 0;
    char Dumy[KETAMAX] = {'\0'};
    
    while(1){
        
        ret = scanf("%d%d",&a[SetCount],&b[SetCount]);
        
        if(ret == EOF){
            break;
        }
        
        keta[SetCount] = sprintf(Dumy,"%d",(a[SetCount] + b[SetCount]));
        SetCount++;
    }
    
    for(int i = 0; i < SetCount; i++){
        printf("%d\n",keta[i]);
    }
    
    return(0);
}