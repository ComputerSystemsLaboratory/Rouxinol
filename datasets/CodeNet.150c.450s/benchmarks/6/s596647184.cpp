#include <stdio.h>
using namespace std;
int main(void){
    // Your code here!
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a<b&&b<c){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
}

