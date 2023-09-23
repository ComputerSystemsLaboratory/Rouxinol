#include<stdio.h>

int main(){
    int x,y;
    char op;
    while(scanf("%d %c %d",&x,&op,&y) && op !='?'){
        if(op == '+'){
            printf("%d\n",x+y);
        } else if(op == '-'){
            printf("%d\n",x-y);
        } else if(op == '*'){
            printf("%d\n",x*y);
        } else if(op == '/'){
            printf("%d\n",x/y);
        }
    }
    return 0;
}
