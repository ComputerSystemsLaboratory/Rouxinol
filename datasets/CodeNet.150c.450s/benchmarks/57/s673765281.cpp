#include <iostream>
#include <utility>
#include <cstdio>
#include <cmath>

using namespace std;
int main(){
    int a,b;
    char op;
    while(1){
        scanf("%d %c %d",&a,&op,&b);
        if(op=='?')
            break;
        else if(op=='+')
            printf("%d\n",a+b);
        else if(op=='-')
            printf("%d\n",a-b);
        else if(op=='*')
            printf("%d\n",a*b);
        else if(op=='/')
            printf("%d\n",a/b);
        else
            printf("Not Desined\n");
    }
}