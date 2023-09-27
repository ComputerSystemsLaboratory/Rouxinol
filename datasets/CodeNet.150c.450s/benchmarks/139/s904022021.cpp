#define _LIBCPP_DEBUG 0
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const long long INF = 1LL << 60;
ll MOD = 1e9+7;

vector<int> Graph[2*100000+1];

vector<bool> visitGraph(2*100000+1,false);
vector<int> ansGraph(2*100000+1, 0);

void bfs(){
    queue<int> q;
    q.push(1);
    visitGraph[1] = true;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (auto v :Graph[u]) {
            if(visitGraph[v]==true) continue;
            visitGraph[v] = true;
            ansGraph[v] = u;
            q.push(v);
        }
    }


}

int main() {

    int N,M; cin>>N>>M;
    int A,B;
    for (int i = 0; i < M; ++i) {
        cin>>A>>B;
        Graph[A].push_back(B);
        Graph[B].push_back(A);
    }

    bfs();

    bool ok = true;
    for (int i = 2; i <= N; ++i) {
        if(ansGraph[i]==0){
            ok = false; break;
        }
    }

    if(!ok){
        cout<<"No"<<endl;
    }else{
        cout<<"Yes"<<endl;

        for (int i = 2; i <= N; ++i) {
            cout<<ansGraph[i]<<endl;
        }

    }

    return 0;
}