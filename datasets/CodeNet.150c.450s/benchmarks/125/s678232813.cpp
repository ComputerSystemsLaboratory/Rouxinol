#include <iostream>
#include <vector>

using namespace std;

int tim = 0;
vector<vector<int>> to;
vector<bool> reached;
vector<int> d;
vector<int> f;



void dfs(int point);

int main()
{
    int n;
    cin >> n;
    to.resize(n+1);
    for(int i = 1; i <= n; i++){
        int m;
        cin >> m;
        cin >> m;
        to[i].resize(m);
        for(int j = 0; j < m; j++){
            cin >> to[i][j];
        }
    }
    
    reached.resize(n+1);
    d.resize(n+1);
    f.resize(n+1);

    for(int i = 1; i <=n; i++){
        if(!reached[i]){
            dfs(i);
        }
    }

    for(int i = 1; i <= n; i++){
        cout << i << " " << d[i] << " " << f[i] << endl;
    }

    return 0;
}

void dfs(int point)
{
    tim++;
    reached[point] = true;
    d[point] = tim;

    for(int i = 0; i < to[point].size(); i++){
        if(!reached[to[point][i]]){
            dfs(to[point][i]);
        }
    }
    tim++;
    f[point] = tim;    

}