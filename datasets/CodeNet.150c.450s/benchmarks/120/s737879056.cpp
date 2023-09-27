#include<cstdio>
#include<cstring>
#include<queue>
#include<iostream>
#include<algorithm>
#include<string>
#include<map>
#include<set>
#include<vector>
#include<stack> 
#include<bitset>
#include<iterator>
using namespace std;


int n,m;
bitset<11111> maps[11];
int ans;


void dfs(int line){
    if(line == n){
        int tmp = 0;
        for(int i = 0 ; i < m ; i ++){
            int rownum = 0;
            for(int j = 0 ; j < n ; j ++){
                if(maps[j][i]) rownum++;
            }
            rownum = max(rownum,n-rownum);
            tmp += rownum;
        }
        ans = max(ans,tmp);
        return ;
    }
    maps[line].flip();
    dfs(line+1);
    maps[line].flip();
    dfs(line+1);

}

int main(){    
    
    while(scanf("%d%d",&n,&m) != EOF && n+m){
        ans = -1;
        for(int i = 0 ; i < n ; i ++){
            for(int j = 0 ; j < m ; j ++){
                int x;
                scanf("%d",&x);
                maps[i][j] = x;
            }
        }    
        dfs(0);
        printf("%d\n",ans);
    }
    return 0;
}