#include <iostream>
#include <climits>
#include <queue>

#define INF (INT_MAX/3);

using namespace std;

class Edge{
    public:
        int to;
        int cost;
};

typedef pair<int, int> D_V;


int main(){
    int n;
    int a, b, c;
    while(true){
        cin >> n;
        if(n == 0) break;
        int max_n = 0;
        vector<Edge> edge[46];
        for(int i = 1; i <= n; i++){
            cin >> a >> b >> c;
            max_n = max(max_n, a);
            max_n = max(max_n, b);
            Edge e1, e2;
            e1.to = b;
            e1.cost = c;
            e2.to = a;
            e2.cost = c;
            edge[a].push_back(e1);
            edge[b].push_back(e2);
        }
        int d[46];
        int ans = INF;
        int ans_c;
        int sum;
        priority_queue<D_V, vector<D_V>, greater<D_V> > q;
        for(int s = 0; s <= max_n; s++){
            for(int i = 0; i <= max_n; i++){
                d[i] = INF;
            }
            d[s] = 0;
            
            q.push(D_V(d[s], s));
            
            while(!q.empty()){
                D_V d_v = q.top();
                q.pop();
                int v = d_v.second;

                if(d[v] < d_v.first) continue; 

                for(int i = 0; i < edge[v].size(); i++){
                    Edge e = edge[v][i];
                    if(d[e.to] > d[v] + e.cost){
                        d[e.to] = d[v] + e.cost;
                        q.push(D_V(d[e.to], e.to));
                    }
                }
            }
           
            sum = 0;
            for(int i = 0; i <= max_n; i++){
                sum += d[i];
            }
            if(ans > sum){
                ans = sum;
                ans_c = s;
            }
        }

        cout << ans_c << " " << ans << endl;
    }
    return 0;
}