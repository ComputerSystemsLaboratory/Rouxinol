#include<cstdio>
int c[10001]={};
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int a;
        scanf("%d",&a);
        c[a]++;
    }
    for(int i=0;i<10000;i++){
        for(int j=0;j<c[i];j++){
            printf("%d%c",i,(n==1)?'\n':' ');
            n--;
        }
    }
    return 0;
}
