#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

unordered_map<int, long long> dp;

long long dfs(vector<int>& num, int idx, int now, int target) {
    long long ans=0;

    auto itr=dp.find(idx*100+now);

    if(itr!=dp.end()) return itr->second;

    if((int)num.size()==idx) {
        if(now==target) return 1;
        else return 0;
    }

    if(now+num[idx]<=20) {
        ans+=dfs(num,idx+1,now+num[idx],target);
    }
    if(now-num[idx]>=0) {
        ans+=dfs(num,idx+1,now-num[idx],target);
    }

    return dp[idx*100+now]=ans;
}

int main()
{
    int N;
    int target;
    long long ans=0;

    vector<int> num;

    cin >> N;

    num.resize(N-1);

    for(int i=0; i<N-1; ++i) {
        cin >> num[i];
    }
    cin >> target;

    ans=dfs(num,1,num[0],target);

    cout << ans << endl;

    return 0;
}