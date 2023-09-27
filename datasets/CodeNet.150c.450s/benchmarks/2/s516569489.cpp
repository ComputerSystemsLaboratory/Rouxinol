#include<cstdio>
int a[100000];
int partition(int *a,int p,int r){
    int x=a[r];
    int i=p-1;
    for(int j=p;j<r;j++){
        if(a[j]<=x){
            i++;
            int tmp=a[i]; a[i]=a[j]; a[j]=tmp;
        }
    }
    int tmp=a[i+1]; a[i+1]=a[r]; a[r]=tmp;
    return i+1;
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int q=partition(a,0,n-1);
    for(int i=0;i<q;i++){
        printf("%d ",a[i]);
    }
    printf("[%d]",a[q]);
    for(int i=q+1;i<n;i++){
        printf(" %d",a[i]);
    }
    printf("\n");
    return 0;
}
