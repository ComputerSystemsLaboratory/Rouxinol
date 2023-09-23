#include<cstdio>
int ks[6]={500,100,50,10,5,1};
int main(){
    for(;;){
        int ins;
        scanf("%d",&ins);
        if(ins==0)break;
        ins=1000-ins;
        int ans=0;
        for(int i=0;i<6;i++){
            ans+=ins/ks[i];
            ins-=ks[i]*(ins/ks[i]);
        }
        printf("%d\n",ans);
    }
}