#include <stdio.h>
using namespace std;
int main(void){
    // Your code here!
    int S,h,m,s;
    scanf("%d",&S);
    h=S/3600;
    m=(S%3600)/60;
    s=(S%3600)%60;
    printf("%d:%d:%d\n",h,m,s);
}

