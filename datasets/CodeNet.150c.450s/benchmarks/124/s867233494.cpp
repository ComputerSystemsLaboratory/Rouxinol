#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<tuple>
#include<climits>
#include<queue>
using namespace std;
#define int long long
vector<double> dijk(vector<tuple<int,int,double>> edge_list, int start){
        const int DJMAX = INT_MAX;
        set<int> node_list;
        for(auto edge : edge_list){
                node_list.insert(get<0>(edge));
                node_list.insert(get<1>(edge));
        }
        int nodenum = *node_list.rbegin()+1;
        vector<vector<double>> cost_map(nodenum, vector<double>(nodenum, DJMAX));
        for(auto edge : edge_list){
                cost_map[get<0>(edge)][get<1>(edge)] = get<2>(edge);
        }
        vector<double> cost(nodenum,DJMAX);
        cost[start] = 0;
        vector<int> visited(nodenum,0);
        priority_queue<pair<int,int>> que;
        que.push(pair<double,int>(0,start));
        while(!que.empty()){
                int s = que.top().second;
                que.pop();
                visited[s] = 1;
                for(int j=0;j<nodenum;j++){
                        if(visited[j]==1) continue;
                        double nc = cost[s]+cost_map[s][j];
                        if(nc<cost[j]){
                                cost[j] = nc;
                                que.push(pair<double,int>(-cost[j],j));
                        }
                }
        }
        return cost;
}
signed main(){
        int n;
        cin >> n;
        vector<tuple<int, int, double>> edges;
        for(int i=0;i<n;i++){
                int vs, vn;
                cin >> vs >> vn;
                for(int j=0;j<vn;j++){
                        int vt,c;
                        cin >> vt >> c;
                        edges.push_back(tuple<int,int,double>(vs,vt,c));
                }
        }
        auto ans = dijk(edges, 0);
        for(int i=0;i<n;i++){
                cout << i << " " << ans[i] << endl;
        }
        return 0;
}