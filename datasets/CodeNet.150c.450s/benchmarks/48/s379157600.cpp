#include<iostream>
#include<algorithm>
#include<numeric>
#include<vector>
#include<set>
#include <math.h>
#include <string>
#define cinf(n,x,y) for(int i=0;i<(n);i++) cin >> x[i]>>y[i];
typedef long long int ll;
const ll INF =1LL << 62;
using namespace std;
int MAX_E=1000010;
ll dp[1000010];
int main(){
    while(1){
        int e; cin >>e;
        if(e==0) break;
        int ans=1e9;
        for(int i=0;i*i*i<=e;i++){
            for(int j=0;j*j<=e-i*i*i;j++){
                ans=min(ans,i+j+(e-i*i*i-j*j));
            }
        }
        cout << ans << endl;
    }
}
