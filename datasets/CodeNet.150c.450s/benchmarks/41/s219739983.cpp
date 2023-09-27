#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;
const ll INF = ll(1) << 54;
typedef pair<int, int> P;

void solve(vector< vector<ll> >& d)
{
    int n = d.size();
    for(int k=0;k<n;++k)
    {
        for(int j=0;j<n;++j)
        {
            if(d[k][j] >= INF) continue;
            for(int i=0;i<n;++i)
            {
                if(d[i][k] >= INF) continue;
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }
    }
}

bool is_negative_cycle(const vector< vector<ll> >& d)
{
    int n = d.size();
    for(int i=0;i<n;++i)
    {
        if(d[i][i] < 0) return true;
    }
    return false;
}

int main()
{
    int N, M, s, t, d;
    cin >> N >> M;
    vector< vector<ll> > graph(N, vector<ll>(N, INF));
    for(int i=0;i<N;++i) graph[i][i] = 0;
    for(int i=0;i<M;++i)
    {
        cin >> s >> t >> d;
        graph[s][t] = d;
    }

    solve(graph);
    if(is_negative_cycle(graph))
    {
        cout << "NEGATIVE CYCLE" << endl;
    }
    else
    {
        for(int i=0;i<N;++i)
        {
            for(int j=0;j<N;++j)
            {
                if(j) cout << " ";
                if(graph[i][j] == INF) cout << "INF";
                else cout << graph[i][j];
            }
            cout << endl;
        }
    }
}

