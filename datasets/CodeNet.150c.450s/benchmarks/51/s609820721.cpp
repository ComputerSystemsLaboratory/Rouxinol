#include<cstdio>
#include<iostream>
int main(){
    int nc;
    int student[31]={0};
    for(int i=0;i<28;i++){
        scanf("%d",&nc);
        student[nc]=1;
    }
    for(int i=1;i<31;i++){
        if(student[i]==0)
            printf("%d\n",i);
    }
    return 0;
}