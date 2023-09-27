#include<cstdio>
int main(){
    int w,n;
    scanf("%d%d",&w,&n);
    int *ar=new int[w];
    for(int i=0;i<w;i++){
        ar[i]=i+1;
    }
    for(int i=0;i<n;i++){
        int a,b,t;
        scanf("%d,%d",&a,&b);
        t=ar[a-1];
        ar[a-1]=ar[b-1];
        ar[b-1]=t;
    }
    for(int i=0;i<w;i++){
        printf("%d\n",ar[i]);
    }
}