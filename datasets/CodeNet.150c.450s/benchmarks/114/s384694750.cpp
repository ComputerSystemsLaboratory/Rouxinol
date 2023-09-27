#include <iostream>
#include <vector>

using namespace std;
const int INF = 1001001001;

int prim(vector< vector<int> > cost)
{
    vector<int> V(1, 0), T(cost.size());
    for(int i=0;i<cost.size();++i) T[i] = i;
    T[0] = INF;
    int mini, minj, min_cost, ans=0;
    while(V.size() < cost.size())
    {
        min_cost = INF;
        for(int i : V){
            for(int j : T)
            {
                if(j == INF) continue;
                if(cost[i][j] < min_cost)
                {
                    mini = i;
                    minj = j;
                    min_cost = cost[i][j];
                }
            }
        }
        V.push_back(minj);
        T[minj] = INF;
        cost[mini][minj] = cost[minj][mini] = INF;
        ans += min_cost;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int> > cost(n, vector<int>(n));

    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n;++j)
        {
            cin >> cost[i][j];
            if(cost[i][j] == -1) cost[i][j] = INF;
        }
    }

    cout << prim(cost) << endl;
}

