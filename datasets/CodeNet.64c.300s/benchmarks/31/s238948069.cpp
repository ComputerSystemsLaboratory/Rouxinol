#include<cstdio>
int main(){
    bool is[30];
    for(int i=0;i<30;i++){
        is[i]=true;
    }
    int ins;
    for(int i=0;i<28;i++){
        scanf("%d",&ins);
        is[ins-1]=false;
    }
    for(int i=0;i<30;i++){
        if(is[i])printf("%d\n",i+1);
    }
}