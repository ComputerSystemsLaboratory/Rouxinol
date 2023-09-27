#include <stdio.h>
int main(){
    int n,l,r;
    char a[1001],temp[1001],c[1001];
    scanf("%s",a);
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",temp);
        if(temp[2]=='p'){
            scanf("%d%d",&l,&r);
            r++;
            scanf("%s",c);
            for(int j=0;j<r-l;j++){
                a[j+l]=c[j];
            }
        }
        if(temp[2]=='v'){
            scanf("%d%d",&l,&r);
            r++;
            for(int j=l;j<r;j++){
                c[j]=a[r+l-j-1];
            }
            for(int j=l;j<r;j++){
                a[j]=c[j];
            }
        }
        if(temp[2]=='i'){
            scanf("%d%d",&l,&r);
            r++;
            for(int j=l;j<r;j++)
                printf("%c",a[j]);
            printf("\n");
        }
    }
}