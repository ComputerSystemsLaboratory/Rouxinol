#include<cstdio>
int main(){
    int as=0,bs=0,ins;
    for(int i=0;i<4;i++){
        scanf("%d",&ins);
        as+=ins;
    }
    for(int i=0;i<4;i++){
        scanf("%d",&ins);
        bs+=ins;
    }
    printf("%d\n",as>bs?as:bs);
}