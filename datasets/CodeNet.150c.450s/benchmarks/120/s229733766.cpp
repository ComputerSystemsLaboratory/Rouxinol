#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>

using namespace std;


int slove(int R,int C){
    int uR[10000]={0},uC[10][10000]={0},kei[10000]={0},in,me,ans=0;
    
    for(int i=0;i<R;i++)
        for(int j=0;j<C;j++){
            scanf("%d",&in);
            uR[j]+=in;
            uC[i][j]+=in;
        }
    
    for(int i=0;i<pow(2,R);i++){
        me=0;
        for(int j=0;j<C;j++){
            kei[j]=uR[j];
        }
        
        for(int j=0;j<R;j++){
            if(i & (1<<j)){
                for(int k=0;k<C;k++){
                    if(uC[j][k]){
                        kei[k]--;
                    }else{
                        kei[k]++;
                    }
                }
            }
        }
        for(int j=0;j<C;j++){
            me+=max(kei[j],R-kei[j]);
        }
        ans=max(ans,me);
    }
    
    printf("%d\n",ans);
    
    return 0;
}


int main(){
    int R,C;
    while(1){
        scanf("%d%d",&R,&C);
        if(!(R+C)) break;
        slove(R,C);
    }
    return 0;
}