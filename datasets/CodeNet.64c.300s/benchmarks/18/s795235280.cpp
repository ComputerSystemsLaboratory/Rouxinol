#include "bits/stdc++.h"

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back

int main(){
    int dp[50];
    rep(i,50)dp[i]=0;
    dp[0]=1;
    rep(i,40){
        dp[i+1]+=dp[i];
        dp[i+2]+=dp[i];
        dp[i+3]+=dp[i];
    }
    
    
    int n;
    while(cin>>n){
        if(n==0)break;
        int num = (int)((dp[n]-1)/3650)+1;
        cout<<num<<endl;
    }

}