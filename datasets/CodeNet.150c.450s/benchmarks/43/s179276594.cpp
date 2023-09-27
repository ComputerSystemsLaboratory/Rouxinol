#include<cstdio>
#include<iostream>
int main(){
    int n;
    while(1){
        int a,b,suma=0,sumb=0;
        scanf("%d",&n);
        if(n==0)
            break;
        for(int i=0;i<n;i++){
            scanf("%d%d",&a,&b);
            if(a>b)
                suma+=a+b;
            else if(a<b)
                sumb+=a+b;
            else
                suma+=a,sumb+=b;
        }
        printf("%d %d\n",suma,sumb);
    }
exit:
    return 0;
}