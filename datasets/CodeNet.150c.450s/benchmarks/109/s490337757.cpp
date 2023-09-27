#include <bits/stdc++.h>
using namespace std;

int n,s,t,cnt,ans; string S;
vector<pair<int,int>> trains;
vector<int> unit={36000,3600,0,600,60,0,10,1};
multiset<int> waiting;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    while(cin >> n,n){
        trains.clear();
        for (int i=0;i<n;++i){
            for (int j=0;j<2;++j){
                cin >> S; cnt=0;
                for (int k=0;k<8;++k){
                    if (k%3==2) continue;
                    cnt+=(S[k]-'0')*unit[k];
                }
                (!j?s:t)=cnt;
            }
            trains.emplace_back(s,t);
        }
        sort(trains.begin(),trains.end());
        waiting.clear();
        ans=0;
        for (int i=0;i<n;++i){
            auto itr=waiting.upper_bound(trains[i].first);
            if (itr==waiting.begin()) ++ans;
            else {waiting.erase(--itr);}
            waiting.insert(trains[i].second);
        }
        cout << ans << '\n';
    }
}
