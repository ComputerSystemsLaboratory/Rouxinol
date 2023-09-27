#include<cstdio>
int main(){ 
    int n;
    scanf("%d",&n);
    int m=100000;
    for(int i=0;i<n;i++){
        int d=int(m*0.05);
        d%1000>0?d=d/1000*1000+1000:d=d/1000*1000;
        m+=d;
    }
    printf("%d\n",m);
}