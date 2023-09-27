#include<bits/stdc++.h>
#define rep(i,n) for(int i=0; i<n; i++)
#define INF 1000000
using namespace std;
int main(){
    vector<int> vec(101);
    rep(i,101) vec[i] = 0;
    int n,tmp=0;
    vector<int> ans;
    while(cin >> n){
        vec[n]++;
    }
    rep(i,vec.size()){
        if(tmp <= vec[i]) tmp = vec[i];
    }
    rep(i,vec.size()){
        if(tmp == vec[i]) ans.push_back(i);
    }
    sort(ans.begin(),ans.end());
    rep(i,ans.size()) cout << ans[i] << endl;
    return 0;
}
