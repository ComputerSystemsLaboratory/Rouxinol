#include <cstdio>

void bubleSort(int a[],int n){
    int i, j, tmp;
    for(i=0; i <n-1; i++){
        for(j=0; j <n-1; j++){
            if(a[j]>a[j+1]){
                tmp=a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }   
        }
    }
}

int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);   
    int ary[3]={a,b,c};
    bubleSort(ary,3);
    printf("%d %d %d\n",ary[0], ary[1], ary[2]);
    return 0;
}