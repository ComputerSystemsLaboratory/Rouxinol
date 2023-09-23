#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <cstring>
bool table[12][10005];
using namespace std;
int r,c;
int ans;
int ji(){
    int op=0;
    for(int j=1;j<=c;j++){
        int a=0,b=0;
        for(int i=1;i<=r;i++){
            if(table[i][j]) a++;
            else b++;
        }
        op+=(a>b?a:b);
    }
    return op;
}
void br(int now){
    if(now>r){
        int bi=ji();
        ans=ans>bi?ans:bi;
        return ;
    }
    br(now+1);
    for(int i=1;i<=c;i++)
        if(table[now][i]) table[now][i]=false;
        else table[now][i]=true;
    br(now+1);
    for(int i=1;i<=c;i++)
        if(table[now][i]) table[now][i]=false;
        else table[now][i]=true;
}
int main(void){
    while(cin>>r>>c){
        if(0==r&&0==c) break;
        memset(table,0,sizeof(table));
        ans=-1000000;
        for(int i=1;i<=r;i++)
            for(int j=1;j<=c;j++){
                cin>>table[i][j];
            }
        br(1);
        cout<<ans<<endl;
    }
    return 0;
}