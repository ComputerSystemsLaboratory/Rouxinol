#include <iostream>

using namespace std;

int main()
{
    while(1)
    {
        int h,w;
        cin>>h>>w;if(!h)return 0;
        int n;
        cin>>n;
        bool map[16][16];
        for(int i=0;i<16;++i){
            fill(map[i],map[i]+16,true);
        }
        for(int i=0;i<n;++i){
            int a,b;
            cin>>a>>b;
            map[a-1][b-1]=false;
        }
        long long dp[16][16]={{0}};
        dp[0][0]=1;
        for(int i=0;i<h;++i){
            for(int j=0;j<w;++j){
                if(i>0&&map[i][j]){
                    dp[i][j]+=dp[i-1][j];
                }
                if(j>0&&map[i][j]){
                    dp[i][j]+=dp[i][j-1];
                }
            }
        }
        cout<<dp[h-1][w-1]<<endl;
    }
}