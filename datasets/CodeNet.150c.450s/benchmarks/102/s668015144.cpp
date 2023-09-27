#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<climits>
#include<iostream>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
#include<list>
#include<map>
#include<set>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
#define pb push_back
int dy[]={0, 0, 1, -1, 0};
int dx[]={1, -1, 0, 0, 0};
  
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)
char room[100][100];
bool fin[100][100];
int w,h;

int dfs(int i,int j){
    int sum = 1;
 
    fin[i][j] = false;
 
    for(int k = 0;k < 4;k++){
        int ii = i + dy[k];int jj = j + dx[k];
        if(ii >= 0 && ii < h && jj >= 0 && jj < w && fin[ii][jj] && room[ii][jj] == '.')
            sum += dfs(ii,jj);
    }
    return sum;
}
 
int main(){
    while(1){
        scanf("%d%d",&w,&h);
 
        if(w == 0 && h == 0)
            break;
 
        for(int i = 0;i < h;i++)
            scanf("%s",&room[i][0]);
 
        for(int i = 0;i < h;i++)
            for(int j = 0;j < w;j++)
                fin[i][j] = true;
 
        for(int i = 0;i < h;i++){
            for(int j = 0;j < w;j++){
                if(room[i][j] == '@')
                    printf("%d\n",dfs(i,j));
            }
        }
    }
    return 0;
}