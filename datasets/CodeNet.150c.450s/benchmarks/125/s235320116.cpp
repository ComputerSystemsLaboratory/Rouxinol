#include <iostream>
#include <vector>
#include <string>

using namespace std;

int n;
vector<vector<int>> g; 
int timeT = 0;
vector<int> d, f;
 
void dfs(int node){
    timeT++;

    if(d[node] == 0){
        d[node] = timeT;
    }

    for(auto next : g[node]){
        if(d[next] == 0){
            dfs(next);
        }
    }
    
    timeT++;
    if(f[node] == 0){
        f[node] = timeT;
    }
    return;
}
    
int main(){
    
    cin >> n;

    d.assign(n + 1, 0);
    f.assign(n + 1, 0);

    g.assign(n + 1, vector<int>());

    for(int i = 0; i < n; i++)
    {
        int nod, numOut;
        cin  >> nod >> numOut;
        for(int j = 0; j < numOut; j++)
        {
            int temp;
            cin >> temp;
            g[nod].push_back(temp);
        }
    }
    
    for(int i = 1; i <= n; i++)
    {
        if(d[i] == 0){
            dfs(i);
        }
    }

    for(int i = 1; i <= n; i++)
    {
        cout << i << " " << d[i] << " " << f[i] << endl;
    }
    

    return 0;
}