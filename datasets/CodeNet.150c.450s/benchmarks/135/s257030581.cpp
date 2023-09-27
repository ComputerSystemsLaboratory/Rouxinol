#include <bits/stdc++.h>
using namespace std;
const int MAX=1510;

int N,M,ans;
int h[MAX],w[MAX],sumh[MAX],sumw[MAX];
vector<int> cnt(MAX*MAX);

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    while(cin >> N >> M,N){
        for (int i=0;i<N;++i){
            cin >> h[i];
            sumh[i+1]=sumh[i]+h[i];
        }
        for (int i=0;i<M;++i){
            cin >> w[i];
            sumw[i+1]=sumw[i]+w[i];
        }
        fill(cnt.begin(),cnt.end(),0);
        for (int i=0;i<=M;++i)
            for (int j=i+1;j<=M;++j)
                ++cnt[sumw[j]-sumw[i]];
        ans=0;
        for (int i=0;i<=N;++i)
            for (int j=i;j<=N;++j)
                ans+=cnt[sumh[j]-sumh[i]];
        cout << ans << '\n';
    }
}
