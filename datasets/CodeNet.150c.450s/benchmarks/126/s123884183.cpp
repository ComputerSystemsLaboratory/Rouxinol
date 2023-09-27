#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int dp[2][1000005];
int main(){
    int w,h,n;
    while(cin>>w>>h,w||h){
        cin>>n;
        fill(dp[0],dp[0]+2000010,0);
        vector<vector<int> >V(h+1);
        while(n--){
            int x,y;
            cin>>x>>y;
            V[y].push_back(x);
        }
        dp[1][1]=1;
        for(int i=1;i<=h;i++){
            for(int j=1;j<=w;j++){
                for(int k=0;k<V[i].size();k++)
                    if(V[i][k]==j){
                        dp[i&1][j]=0;
                        break;
                    }
                //dp[i&1][j]%=100000;
                dp[i&1][j+1]+=dp[i&1][j];
                dp[(i+1)&1][j]+=dp[i&1][j];
                dp[(i&1)][j]=0;

            }

        }
        cout<<dp[(h+1)&1][w]<<endl;
    }
}