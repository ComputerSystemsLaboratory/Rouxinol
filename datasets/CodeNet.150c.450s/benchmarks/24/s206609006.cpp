#include <bits/stdc++.h>
using namespace std;

const int MAX_N=1e4+10;

int N,M,D,P,ans,d;
vector<pair<int,int>> road(MAX_N);

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    while(cin >> N >> M,N){
        ans=0;
        for (int i=0;i<N;++i){
            cin >> D >> P;
            road[i]={-P,D};
            ans+=D*P;
        }
        sort(road.begin(),road.begin()+N);
        for (int i=0;i<N&&M;++i){
            d=min(M,road[i].second);
            ans+=road[i].first*d;
            M-=d;
        }
        cout << ans << '\n';
    }
}
