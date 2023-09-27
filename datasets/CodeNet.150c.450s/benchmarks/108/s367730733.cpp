#include<iostream>
#include<vector>
#include<queue>
using namespace std;

enum Status {WHITE, GRAY, BLACK};

queue<int> que;
Status *status;
int *dist;
vector<vector<int> > a;
int n;

int main(){
        cin>>n;
        a = vector<vector<int> >(n, vector<int>());
        status = new Status[n];
        dist = new int[n];

        int m, k, r;
        for(int i=0;i<n;i++){
                cin>>r;
                cin>>m;
                for(int j=0;j<m;j++){
                        cin>>k;
                        a[r-1].emplace_back(k-1);
                }
        }
        for(int i=0;i<n;i++) status[i] = WHITE;
        for(int i=0;i<n;i++) dist[i] = -1;

        que.push(0);
        dist[0] = 0;
        while(!que.empty()){
                int v = que.front(); que.pop();
                if(status[v]==BLACK) continue;
                for(int i=0;i<a[v].size();i++){
                        if(status[a[v][i]]==WHITE){
                                dist[a[v][i]] = dist[v]+1;
                                status[a[v][i]] = GRAY;
                                que.push(a[v][i]);
                        }
                }
                status[v] = BLACK;
        }

        for(int i=0;i<n;i++){
                cout<<i+1<<" "<<dist[i]<<endl;
        }
        return 0;
}
