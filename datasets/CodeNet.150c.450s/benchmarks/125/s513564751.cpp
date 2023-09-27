#include <iostream>
#include <vector>
using namespace std;

vector<int> graph[100];
int d[100], f[100];
int visited = 1;

void dfs(int id){
    d[id] = visited++;
    for(int i = 0; i < graph[id].size(); i++)
	{
        if(graph[id][i] != id && !d[graph[id][i]] && !f[graph[id][i]])
		{
			dfs(graph[id][i]);
		}
    }
    f[id] = visited++;
}

int main(){
    int n;
    cin >> n;
    for(int i = 0;i < n;i++)
	{
        int u, k;
        cin >> u >> k;
        for(int j = 0;j < k;j++)
		{
            int v;
            cin >> v;
            graph[u - 1].push_back(v - 1);
        }
    }
    dfs(0);
    for(int i = 0;i < n;i++)
	{
        if(!f[i]) 
		{
			dfs(i);
		}
    }
    for(int i = 0;i < n;i++)
	{
        cout << i + 1 << " " << d[i] << " " << f[i] << endl;
    }
    return 0;
}