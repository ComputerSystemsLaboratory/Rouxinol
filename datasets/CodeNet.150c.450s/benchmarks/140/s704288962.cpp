#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(i = 0;i < n;++i)
#define all(v) v.begin(), v.end()
using ll = long long;

int main()
{
    ll i,j;
    
    ll v,e;
    cin >> v >> e;
    
    vector<vector<pair<ll,ll>>> graph(v); //グラフ(重み、行き先)
    for(i = 0;i < e;++i){
        ll s,t,w;
        cin >> s >> t >> w;
        graph.at(s).emplace_back(w,t);
        graph.at(t).emplace_back(w,s);
    }
    ll ans = 0; //最小全域木の重さ
    priority_queue<pair<ll,ll>> pq; //優先度付きキュー
    vector<bool> visit(v,false); //連結管理
    ll top = 0; //探索開始点
    visit.at(top) = true;
    for(i = 0;i < graph.at(top).size();++i){ //詰め込む
        ll w = graph.at(top).at(i).first;
        ll g = graph.at(top).at(i).second;
        pq.emplace(-w,g);
    }
    ll remain = v-1; //探索管理(残頂点数)
    while(remain){
        ll w = -pq.top().first;
        ll now = pq.top().second;
        pq.pop();
        if(visit.at(now)) continue; //訪問済みは除く
        visit.at(now) = true;
        --remain;
        ans += w; //重み追加
        for(i = 0;i < graph.at(now).size();++i){
            ll nw = graph.at(now).at(i).first;
            ll next = graph.at(now).at(i).second;
            if(!visit.at(next)) pq.emplace(-nw, next);
        }
    }

    cout << ans << endl;
    return 0;
}
