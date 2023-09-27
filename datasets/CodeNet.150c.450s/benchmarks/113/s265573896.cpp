#include <stdio.h>
using namespace std;
int main(void){
    // Your code here!
    int i,x;
    i=1;
    while(1){
        scanf("%d",&x);
        if(x == 0)break;
        printf("Case %d: %d\n",i,x);
        i++;
    }
}
