#include <bits/stdc++.h>
using namespace std;
const long long INF=1LL << 60;



int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<int> dan(35,0);
    vector<int> dp(35,0);
    int N;
    for(int i=0;i<35;i++){
        int tmp;
        cin>>tmp;
        if(tmp==0){
            N=i;
            break;
        }
        dan[i]=tmp;        
    }
    dp[0]=1;
    for(int i=1;i<31;i++){
        dp[i]+=dp[i-1];
        if(i>1)dp[i]+=dp[i-2];
        if(i>2)dp[i]+=dp[i-3];
    }
    for(int i=0;i<N;i++){
        int tmp=dp[dan[i]]/3650;
        if(dp[dan[i]]%3650!=0) tmp++;
        cout << tmp <<endl;
    }

    return 0;
}
