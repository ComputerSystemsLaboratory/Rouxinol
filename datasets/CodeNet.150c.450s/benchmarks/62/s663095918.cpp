#include <cstdio>
int main(void){
    int a[3];
    scanf("%d%d%d",&a[0],&a[1],&a[2]);
    for(int i=0;i<3;i++){
        int min=a[i];
        for(int j=i;j<3;j++){
            if(min>a[j]){
                min=a[j];
                a[j]=a[i];
                a[i]=min;
            }
        }
        
    }
    printf("%d %d %d\n",a[0],a[1],a[2]);
    return 0;
}
