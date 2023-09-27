#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void bfs(int v,vector<vector<int>>& vertex, int d[]);

//int depth = 0;

int main(){
    int n;
    cin >> n;
    int num;
    int tmp2;
    int d[n];
    for(int i=0;i<n;i++){
        d[i] = -1;
    }
    vector<vector<int>> vertex;
    vector<int> tmp;
    for(int i=0;i<n;i++){
        cin >> num;
        cin >> num;
        for(int j=0;j<num;j++){
            cin >> tmp2;
            tmp.push_back(tmp2-1);
        }
        vertex.push_back(tmp);
        tmp.clear();
    }
    bfs(0, vertex, d);
    
    for(int i=0;i<n;i++){
        cout << i+1 << " " <<  d[i] << endl;
    }
    return 0;
}

void bfs(int v, vector<vector<int>>& vertex, int d[]){
    queue<int> Q;
    Q.push(v);
    d[v] = 0;
    while(!Q.empty()){
        v = Q.front();
        Q.pop();
        bool flag = false;
        for(int i : vertex[v]){
            if(d[i]==-1){
                d[i] = d[v] + 1;
                Q.push(i);
                flag = true;
            }
        }
    }
}
