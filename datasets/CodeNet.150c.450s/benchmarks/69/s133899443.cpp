#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(;a--;){
        int b[10];
        for(int i=0;i<10;i++)scanf("%d",b+i);
        bool ans=false;
        for(int i=0;i<1024;i++){
            int maxa=0;
            int maxb=0;
            bool val=true;
            for(int j=0;j<10;j++){
                if(i&1<<j){
                    if(maxa<b[j])maxa=b[j];
                    else val=false;
                }else{
                    if(maxb<b[j])maxb=b[j];
                    else val=false;
                }
            }
            if(val)ans=true;
        }
        printf(ans?"YES\n":"NO\n");
    }
}
