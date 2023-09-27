#include <iostream>
#include <vector>
#include <queue>
#include <utility>

using namespace std;
int V, E, R, S[500010], T[500010], D[500010]; 
int C[100010]; 
const int Inf = 10000*100000+100;

int main(){
    cin >> V >> E >> R;
    vector<pair<int, int> > tmp(0);
    vector<vector<pair<int, int> > > edges(V+10);
    for(int i = 0; i < E; i++){
        int s, t, d;
        cin >> s >> t >> d;
        edges[s].push_back(make_pair(t, d));
    }
    auto c = [](pair<int, int> &l, pair<int, int> &r){return l.first > r.first;};
    priority_queue<pair <int,int> , vector<pair<int, int> >, decltype(c)> Q(c);
    Q.push(make_pair(0, R));
    for(int i=0;i<V;i++){
        C[i] = Inf;
    }
    C[R] = 0;
    while(!Q.empty()){
        pair<int,int> t = Q.top();
        Q.pop();
        int s = t.second;
        if(C[s] >= t.first){
            for(auto edge : edges[s]){
                if(C[edge.first] > C[s] + edge.second){
                    C[edge.first] = C[s] + edge.second;
                    Q.push(make_pair(C[edge.first],edge.first));
                }
            }
        }
    }
    for(int i = 0; i < V; i++){
        if(C[i] == Inf){
            cout << "INF" << endl;
        }else{
            cout << C[i] << endl;
        }  
    }
}