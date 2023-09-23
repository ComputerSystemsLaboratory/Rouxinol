#include <cstdio>
#include <vector>
#include <algorithm>
#include <bitset>
#include <iostream>
using namespace std;

bitset<10005> board[10];
int ans;
void DFS(int cur_r,const int r,const int c)
{
    if(cur_r==r){
        int res = 0;
        for(int cc = 0;cc < c;cc++){
            int c_num ,c_cnt=0;
            for(int rr = 0;rr < r;rr++){
                if(board[rr][cc]==1)
                    c_cnt++;
            }
            if(c_cnt > r/2)
                c_num = c_cnt;
            else
                c_num = r - c_cnt;
            res += c_num;
        }
        ans = max(ans,res);
        return ;
    }

    DFS(cur_r+1,r,c);
    board[cur_r].flip();
    DFS(cur_r+1,r,c);
    return ;
}

int main()
{   
    // freopen("in","r",stdin);
    int r,c;
    while(scanf("%d%d",&r,&c)&&(r+c)){
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                int n;
                scanf("%d\n",&n);
                board[i][j] = n;
            }
        }
        ans = 0;
        DFS(0,r,c);
        printf("%d\n",ans);
    }
    return 0;
}