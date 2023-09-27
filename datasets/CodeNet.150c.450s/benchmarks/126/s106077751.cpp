/*#include<cstdio>
#include<iostream>
#define MAX_N 100000000

using namespace std;

long long int dp[45][45];

int main(){

   while(1){
        int w,h;
        int i;
        cin>>w>>h;
        if(w==0&&h==0)break;
        for(int i=0;i<45;i++){
            for(int j=0;j<45;j++){
                dp[i][j]=0;
            }
        }
        dp[1][1]=1;
        int n;
        cin>>n;
        int x,y;
        for(i=0;i<n;i++){
            cin>>x>>y;
            dp[x][y]=-1;
        }
        for(int i=1;i<=w;i++){
            for(int j=1;j<=h;j++){
                if(i<=w&&dp[i][j]!=-1){
                    dp[i+1][j]+=dp[i][j];
                }
                if(j<=h&&dp[i][j]!=-1){
                    dp[i][j+1]+=dp[i][j];
                }
               printf("[%d] [%d] %lld\n",i,j,dp[i][j]);
            }
        }
        printf("%d\n",dp[w][h]);
    }
    return 0;
}*/

#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a,b;
    while( cin >> a >> b , a || b ){
            int n, dp[20][20] = {0};
            dp[1][1] = 1;
            cin >> n;
            for(int i=0 ; i < n ; i++ ){
                int x,y; cin >> x >> y;
                dp[y][x] = -1;
            }
                for(int y=1 ; y <= b ; y++ ){
                        for(int x=1 ; x <= a ; x++ ){
                            if( dp[y][x] != -1 ){
                                if( y != 1 && dp[y-1][x] != -1 ){
                                    dp[y][x] += dp[y-1][x];
                            }
                            if( x != 1 && dp[y][x-1] != -1 ){
                                    dp[y][x] += dp[y][x-1];
                            }
                        }
                    }
                }
            cout<<dp[b][a]<<endl;
        }
    }