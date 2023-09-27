#include<cstdio>
#include<algorithm>
using namespace std;
int n,s,ans;
void solve(int from,int now,int sum){
    if(now==n && sum==s) ans++;
    if(now<n && s-sum>=from*(n-now)){
        for(int i=from;i<=min(9,(s-sum)/(n-now));i++){
            solve(i+1,now+1,sum+i);
        }
    }
}

int main(){
    for(;;){
        scanf("%d%d",&n,&s);
        if(n==0 && s==0) break;
        ans=0;
        solve(0,0,0);
        printf("%d\n",ans);
    }
}