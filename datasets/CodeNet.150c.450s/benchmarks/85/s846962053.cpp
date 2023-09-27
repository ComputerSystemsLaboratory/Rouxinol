#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

ll dp[100][100];
vector<pair<int,int>> matrix(100);


ll kukandp(int i, int j){
    if(dp[i][j]!=INF)return dp[i][j];
    if(j-i==0)dp[i][j]=0;
    if(j-i==1)dp[i][j]=matrix[i].first*matrix[i].second*matrix[j].second;

    if(j-i>1){
        for(int k=i; k<j; k++){
            dp[i][j]=min(dp[i][j], kukandp(i,k)+kukandp(k+1,j)+matrix[i].first*matrix[k].second*matrix[j].second);
        }
    }

    return dp[i][j];
}

int main(){
    int N; cin>>N;
    rep(i,N){
        cin>>matrix[i].first>>matrix[i].second;
    }
    rep(i,100)rep(j,100)dp[i][j]=INF;
    cout<<kukandp(0,N-1)<<endl;
    return 0;
}
