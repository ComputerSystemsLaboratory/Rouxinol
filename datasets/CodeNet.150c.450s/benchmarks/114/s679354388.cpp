#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>


using namespace std;

int P[110];

void init(int N){
    for(int i = 0; i < N; i++) P[i] = i;
}

int root(int a){
    if (P[a] == a) return a;
    return (P[a] = root(P[a]));
}

bool is_same_set(int a, int b){
    return root(a) == root(b);
}

void unite(int a, int b){
    P[root(a)] = root(b);
}

int main(){
    int n; 
    cin >> n; 
    int w;
    init(n);
    vector< pair<int, pair<int, int> > > edges;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> w;
            if (i > j && w != -1) edges.push_back(make_pair(w, make_pair(i, j)));
        }
    }
    sort(edges.begin(),edges.end());
    int sum = 0;
    while(!edges.empty()){
        pair<int, pair<int, int> > edge = edges[0];
        edges.erase(edges.begin());
        int cost = edge.first;
        int src = edge.second.first;
        int dst = edge.second.second;
        //cout << cost << " " << src << " " << dst << endl;
        if (!is_same_set(src, dst)){
            //cout << "unite " << src << " " <<  dst << " cost = " << cost << endl;
            unite(src, dst);
            sum += cost;
        }
    }
    cout << sum << endl;
}