#include <cstdio>
int T,a[10];
void solve(){
    for(int i=0;i<(1<<10);i++){
        int pre1=0,pre2=0,flag=1;
        for(int j=0;j<10;j++){
            if((1<<j)&i){
                if(a[j]<pre1){flag=0;break;}
                pre1=a[j];
            }else{
                if(a[j]<pre2){flag=0;break;}
                pre2=a[j];
            }
        }if(flag){puts("YES");return;}
    }puts("NO"); return;
}
int main(){
    scanf("%d",&T);
    while(T--){
        for(int i=0;i<10;i++)scanf("%d",a+i);
        solve();
    }return 0;
}