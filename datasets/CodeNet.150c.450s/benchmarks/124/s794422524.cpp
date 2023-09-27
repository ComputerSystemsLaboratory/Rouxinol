#include <bits/stdc++.h>
using namespace std;

const int MAX=10005;
int state[MAX],N,D[MAX];
vector<pair<int,int>> S[MAX];
priority_queue<pair<int,int>> Q;

void dijkstra(){
    int cnt=1;
    for(int i=0;i<N;i++){
        state[i]=0;
        D[i]=10000000;
    }
    state[0]=1;
    D[0]=0;
    for(int i=0;i<S[0].size();i++){
        Q.push(make_pair(-S[0][i].second,S[0][i].first));
        D[S[0][i].first]=min(D[S[0][i].first],D[0]+S[0][i].second);
    }
    while(1){
        int a=Q.top().second;
            if(state[a]==0){
            Q.pop();
            state[a]=1;
            for(int i=0;i<S[a].size();i++){
                if(state[S[a][i].first]==0){
                    Q.push(make_pair(-(D[a]+S[a][i].second),S[a][i].first));
                    D[S[a][i].first]=min(D[S[a][i].first],D[a]+S[a][i].second);
                }
            }
                cnt++;
        }
        else Q.pop();
        if(cnt==N) break;
    }
    return;
}


int main(){
    
    cin>>N;
    for(int i=0;i<N;i++){
        int l,a;cin>>l>>a;
        for(int j=0;j<a;j++){
            int b,c;cin>>b>>c;
            S[i].push_back(make_pair(b,c));
        }
    }
    dijkstra();
    for(int i=0;i<N;i++){
        cout<<i<<" "<<D[i]<<endl;
    }
}

