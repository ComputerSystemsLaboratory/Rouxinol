#include<cstdio>
#include<iostream>
int main(){
    int ap,bp,A=0,B=0;
    for(int i=0;i<4;i++){
        scanf("%d",&ap);
        A+=ap;
    }

    for(int i=0;i<4;i++){
        scanf("%d",&bp);
        B+=bp;
    }
    if(A>B)
        printf("%d\n",A);
    else
        printf("%d\n",B);
    return 0;
}