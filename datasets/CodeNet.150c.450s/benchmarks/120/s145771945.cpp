#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <map>
#include <queue>
#include <cstdlib>
#include <algorithm>
#include <iterator>
#include <stack>
typedef long long int lli;
using namespace std;
 
int ans;
 
int count(vector<vector<int> > vvi,vector<int> flag){
    int cnt=0;
    for(int i=0; i<vvi.size(); ++i){
        if(flag[i]==1){
            for(int j=0; j<vvi[i].size(); ++j){
                if(vvi[i][j]==1) vvi[i][j]=0;
                else if(vvi[i][j]==0) vvi[i][j]=1;
            }
        }
    }
    for(int i=0; i<vvi[0].size(); ++i){
        int b=0;
        for(int j=0; j<vvi.size(); ++j){
            if(vvi[j][i]==1) ++b;
        }
        if(b>vvi.size()-b) cnt+=b;
        else cnt+=vvi.size()-b;
    }
    return cnt;
}
 
void solve(vector<vector<int> > vvi,vector<int> flag,int k){
    if(k==flag.size()){
        ans=max(ans,count(vvi,flag));
        return;
    }
    flag[k]=0;
    solve(vvi,flag,k+1);
    flag[k]=1;
    solve(vvi,flag,k+1);
}
 
int main(){
    int C,R;
    while(cin >> R >> C&&C!=0&&R!=0){
        vector<vector<int> > osenbei(R,vector<int>(C));
        vector<int> flag(R);
        ans=0;
        for(int i=0; i<R; ++i){
            for(int j=0; j<C; ++j){
                cin >> osenbei[i][j];
            }
        }
        solve(osenbei,flag,0);
        cout << ans << "\n";
    }
    return 0;
}