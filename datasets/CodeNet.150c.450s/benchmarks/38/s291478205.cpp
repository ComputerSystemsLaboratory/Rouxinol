#include<stdio.h>
int main(){
    int n;
    int a[3];
    int mem;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        mem=0;
        for(int j=0;j<3;j++){
            scanf("%d",&a[j]);
            if(mem<=a[j]){
                mem=a[j];
            }
        }
        if(mem*mem==a[0]*a[0]+a[1]*a[1]+a[2]*a[2]-mem*mem){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}