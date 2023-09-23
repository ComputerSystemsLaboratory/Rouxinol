#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    bool correct = true;
    if(a >= b || b>=c || a>=c)
        correct = false;
    if (!correct){
        printf("No\n");
    } else{
         printf("Yes\n");
    }

    return 0;
}
