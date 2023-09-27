#include <stdio.h>
using namespace std;
int main(void){
    int S;
    int h;
    int m;
    int s;
    scanf("%d",&S);
   
    h=S/3600;
    S=S%3600;
    m=S/60;
    s=S%60;
    printf("%d:%d:%d\n",h,m,s); 
    
}




