#include <iostream>
#include <list>
#include <bitset>
using namespace std;
const int MAX_N = 1e5 + 5;

list<int> adjlist[MAX_N];
int par[MAX_N];
bitset<MAX_N> visited;

int main(){
    int V , E;
    cin >> V >> E;
    for (int i = 0 , a , b ; i < E ; i++){
        cin >> a >> b;
        adjlist[a].push_back(b);
        adjlist[b].push_back(a);
    }

    visited[1] = 1;
    list<int> q = {1};
    while(!q.empty()){
        int now = q.front();
        q.pop_front();
        for (int it : adjlist[now]){
            if (!visited[it]){
                par[it]= now;
                visited[it] = 1;
                q.push_back(it);
            }

        }
    }
    if (visited.count() != V)
        cout << "No\n";
    else{
        cout << "Yes\n";
        for (int i = 2 ; i <= V ; i++)
            cout << par[i] << '\n';
    }
}
