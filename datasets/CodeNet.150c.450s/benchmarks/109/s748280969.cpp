#include <bits/stdc++.h>
using namespace std;

bool solve(){
    int n;
    cin >> n;
    if(n == 0) return true;
    vector<pair<string,int> > ls;
    for(int i=0;i<n;i++){
        string s, t;
        cin >> s >> t;
        ls.emplace_back(make_pair(s,1));
        ls.emplace_back(make_pair(t,-1));
    }
    sort(ls.begin(), ls.end());
    int cnt = 0, ans = 0;
    for(auto p : ls){
        cnt += p.second;
        ans = max(ans, cnt);
    }
    cout << ans << endl;
    return false;
}

int main(){
    while(!solve());
    return 0;
}
