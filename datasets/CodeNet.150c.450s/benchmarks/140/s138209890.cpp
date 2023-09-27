#include <bits/stdc++.h>
using namespace std;

struct edge{
    int to,cost;
    edge(){
        to = 0; cost = 0;
    }
    edge(int t,int c){
        to = t;
        cost = c;
    }
};

int n;
vector<pair<int,int> > G[100001];
bool visited[100001];
long long int d[100001];

const long long int INF = 1000000000000;

long long int  prim(){

    priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > que;

    long long int res = 0;

    fill(d,d+n,INF);
    fill(visited,visited+n,false);

    que.push(make_pair(0,0));

    while(!que.empty()){
        pair<int,int> p = que.top(); que.pop();

        int v = p.second, cst = p.first;
        if(visited[v]){
            continue;
        }
        visited[v] = true;
        res += cst;
        for(int i=0; i<G[v].size(); i++){
            //edge e = G[v][i];
            //que.push(make_pair(e.to, e.cost));
            que.push(make_pair(G[v][i].first, G[v][i].second));
        }

    }

    return res;

}

int main() {

    cin >> n;

    int ed;

    cin >> ed;

    int a, b, c;

    for (int i = 0; i < ed; i++) {
        scanf(" %d %d %d", &a, &b, &c);
        //G[a].push_back(edge(b, c));
        G[a].push_back(make_pair(c, b));
        G[b].push_back(make_pair(c, a));
    }

    cout << prim() << endl;

    return 0;
}