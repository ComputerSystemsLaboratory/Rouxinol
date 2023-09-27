#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
using namespace std;
 
#define loop(i,a,b) for(int i=(a); i<int(b); i++)
#define rep(i,b) loop(i,0,b)
#define all(c) (c).begin(), (c).end()
typedef long long ll;
typedef vector<ll> vi;

int main(){
    int n;
    while(cin>>n){
        n--;
        vi v(n);
        rep(i,n){
            cin>>v[i];
        }
        int x; cin>>x;
        // rep(i,n){
        //     cout<<v[i]<<" ";
        // }
        // cout<<endl;
        vi dp(21);
        dp[v[0]]=1;
        loop(i,1,n){
            vi dp2(21);
            rep(j,21){
                if(0<=j+v[i]&&j+v[i]<=20)dp2[j+v[i]]+=dp[j];
                if(0<=j-v[i]&&j-v[i]<=20)dp2[j-v[i]]+=dp[j];
            }
            // rep(i,dp2.size()){
            //     cout<<dp[i]<<" ";
            // }
            // cout<<endl;
            swap(dp2,dp);
        }
    
        cout<<dp[x]<<endl;
    }
}