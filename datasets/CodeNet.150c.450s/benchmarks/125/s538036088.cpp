#include<iostream>
#include<vector>
#include<stack>
using namespace std;

enum Status {WHITE, GRAY, BLACK};

stack<int> stc;
Status *status;
int *discovered, *finished;
bool *visited;
vector<vector<int> > a;
int n, timer;

void dfs(int i){
        if(status[i]==BLACK) return;
        if(status[i]==WHITE){
                discovered[i] = ++timer;
                status[i] = GRAY;
        }

        if(visited[i]) return;
        visited[i] = true;
        stc.push(i);

        for(int j=0;j<a[i].size();j++) dfs(a[i][j]);

        if(status[i]==GRAY){
                finished[i] = ++timer;
                status[i] = BLACK;
        }
        stc.pop();
}

int main(){

        cin>>n;
        a = vector<vector<int> >(n, vector<int>());
        status = new Status[n];
        discovered = new int[n];
        finished = new int[n];
        visited = new bool[n];

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
        for(int i=0;i<n;i++) visited[i] = false;

        timer = 0;
        for(int i=0;i<n;i++)
                dfs(i);

        for(int i=0;i<n;i++){
                cout<<i+1<<" "<<discovered[i]<<" "<<finished[i]<<endl;
        }
        return 0;
}


