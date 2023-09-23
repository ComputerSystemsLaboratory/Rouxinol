#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

int kousa[17][17],memo[17][17],a,b,n;

int ans(int x,int y){
    int re=0;
    
    if(kousa[x][y])
        return 0;
    
    if(memo[x][y])
        return memo[x][y];
    
    if(x<a)
        re+=ans(x+1,y);
    if(y<b)
        re+=ans(x,y+1);
    
    return re;
}

int main(){
    int xin,yin;
    
    while(1){
    scanf("%d%d%d",&a,&b,&n);
        
    if(a+b==0) break;
    
    for(int i=0;i<17;i++)
        for(int j=0;j<17;j++){
            kousa[i][j]=0;
            memo[i][j]=0;
        }
    
    memo[a][b]=1;
    
    for(int i=0;i<n;i++){
        scanf("%d%d",&xin,&yin);
        kousa[xin][yin]=1;
    }
    
    printf("%d\n",ans(1,1));
    
    }
    return 0;
}