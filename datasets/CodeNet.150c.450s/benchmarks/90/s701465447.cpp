#include<cstdio>
int main(){
    int a[100];
    int s,m=0;
    for(int i=0;i<100;i++){
        a[i]=0;
    }
    while(~scanf("%d",&s)){
        a[s-1]++;
        if(m<a[s-1]) m=a[s-1];
    }
    for(int i=0;i<100;i++){
        if(a[i]==m) printf("%d\n",i+1);
    }
}