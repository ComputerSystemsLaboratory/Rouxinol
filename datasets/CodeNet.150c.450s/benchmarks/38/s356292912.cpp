#include<stdio.h>
int main(void){
    int a[3],i,j,s,w,l;
    scanf("%d",&s);
    for(w=0;w<s;w++){
    scanf("%d %d %d",&a[0],&a[1],&a[2]);
    for(i=0;i<2;i++){
        for(j=i+1;j<3;j++){
            if(a[i]<a[j]){
                a[i] = a[i] ^ a[j];
                a[j] = a[i] ^ a[j];
                a[i] = a[i] ^ a[j];
            }
        }
    }
    if(a[0] * a[0] == a[1] * a[1] + a[2] * a[2]){
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    }
    return 0;
}