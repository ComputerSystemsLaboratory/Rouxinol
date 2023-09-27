#include <iostream>
#include <iomanip>
#include <string>
#include <cstdio>
#include <utility>
#include <algorithm>
#include <stack>
#include <queue>
#include <functional>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)
#define all(x)		(x).begin(),(x).end()

typedef long long		ll;
typedef pair<int, int>	P;

//-------------------------------------------
int n,s;
int ans=0;

void dfs(int nnum,int cnt,int sum){
    //cout << "nnum:" << nnum << "\tcnt:" << cnt << "\tsum;" << sum << "\t lastadded:"<<nnum-1 << "\tans:" << ans << endl;
    if(cnt==n){
        if(sum==s){
            ans++;
        }
        return;
    }
    if(nnum<=9){
        dfs(nnum+1,cnt+1,sum+nnum);
        dfs(nnum+1,cnt,sum);
    }
    return;
}

int main(){
    while(1){
        ans = 0;
        cin >> n >> s;
        if(n==0&&s==0) break;
        dfs(0,0,0);
        cout << ans << endl;
    }
    return 0;
}