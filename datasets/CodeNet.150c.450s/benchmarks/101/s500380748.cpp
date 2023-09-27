#include <iostream>
#include <vector>
using namespace std;

#define MAX 100000

int n;
vector<int> elist[MAX];
int group[MAX]; //or bool visited

void dfs(int v,int groupParent){
    group[v] = groupParent;
    for (int i :elist[v]){
        if(group[i] == -1)dfs(i,groupParent);
    }
}

void assignGroup(){
    for (int i = 0; i < n; ++i) group[i] = -1;
    for (int i = 0; i < n; ++i) if(group[i] == -1)dfs(i,i);
}

int main(){
    //freopen("in", "r", stdin);
    int m;
    cin >> n >> m;
    //NOTE : vertex id is 0 ~ n-1
    for (int i = 0; i < m; ++i){
        int s,t;
        cin >> s >> t;
        elist[s].push_back(t);
        elist[t].push_back(s);
    }
    assignGroup();
    int q;
    cin >> q;
    for (int j = 0; j < q; ++j) {
        int s,t;
        cin >> s >> t;
        string result = group[s] == group[t] ? "yes" : "no";
        cout << result << endl;
    }

    return 0;
}