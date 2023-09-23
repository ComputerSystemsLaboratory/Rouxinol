#include<bits/stdc++.h>
using namespace std;
bool f[10][10000];
int H,W;
void change(int h){
    for(int j=0;j<W;j++){
        f[h][j]=!f[h][j];
    }
}
bool solve(){
    scanf("%d%d",&H,&W);
    if(H==0&&W==0)return false;
    for(int i=0;i<H;i++)
        for(int j=0;j<W;j++)
            scanf("%d",&f[i][j]);

    int ma=0;
    for(int S=0;S<(1<<H);S++){
        for(int i=0;i<H;i++)
            if((S>>i)&1)change(i);

        int sum=0;
        for(int j=0;j<W;j++){
            int cnt=0;
            for(int i=0;i<H;i++){
                if(f[i][j])cnt++;
            }
            sum+=max(cnt,H-cnt);
        }
        ma=max(ma,sum);
        for(int i=0;i<H;i++)
            if((S>>i)&1)change(i);
    }
    printf("%d\n",ma);
    return true;
}
int main(){
    while(solve());
}