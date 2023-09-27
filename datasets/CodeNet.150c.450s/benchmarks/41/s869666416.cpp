#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll i,j,k,l;
    ll v,e;
    cin >> v >> e;
    vector<vector<ll>> graph(v, vector<ll>(v, 1e18));
    for(i = 0;i < v;++i){
        graph.at(i).at(i) = 0;
    }
    for(i = 0;i < e;++i){
        ll s,t,d;
        cin >> s >> t >> d;
        graph.at(s).at(t) = d;
    }
    bool flag = true;
    for(l = 0;l < 2;++l){
        for(k = 0;k < v;++k){
            for(i = 0;i < v;++i){
                for(j = 0;j < v;++j){
                    ll cost = graph.at(i).at(k) + graph.at(k).at(j);
                    if(cost < graph.at(i).at(j)){
                        if(l == 1){
                            flag = false;
                        }else{
                            graph.at(i).at(j) = cost;
                        }
                    }
                }
            }
        }
    }
    if(flag){
        for(i = 0;i < v;++i){
            for(j = 0;j < v;++j){
                ll cost = graph.at(i).at(j);
                if(j != v-1){
                    if(cost >= 1e13){
                        cout << "INF" << " ";
                    }else{
                        cout << cost << " ";
                    }
                }else{
                    if(cost >= 1e12){
                        cout << "INF" << endl;
                    }else{
                        cout << cost << endl;
                    }
                }
            }
        }
    }else{
        cout << "NEGATIVE CYCLE" << endl;
    }

    return 0;
}
