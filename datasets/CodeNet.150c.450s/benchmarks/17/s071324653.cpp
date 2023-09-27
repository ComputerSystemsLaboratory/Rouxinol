#include<cstdio>
#include<string>
using namespace std;

void swap(int *x,int *y){

    int tmp;
    
    tmp=*x;
    *x=*y;
    *y=tmp;
    return;
}

int main(void){
    
    int a[5];
    
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    
    for(int i=0;i<4;i++){
        for(int j=0;j<4-i;j++){
            if(a[j]<a[j+1]) swap(&a[j],&a[j+1]);
        }
    }
    for(int i=0;i<5;i++){
        if(i!=4) printf("%d ",a[i]);
        else printf("%d",a[i]);
    }
    printf("\n");
    return 0;
}