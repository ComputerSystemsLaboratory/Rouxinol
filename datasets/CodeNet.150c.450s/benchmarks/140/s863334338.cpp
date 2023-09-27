#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;
typedef pair<int, int> P;
typedef pair<P, int> Pp;

class UnionFind
{
    int *rank, *parent;
public:
    UnionFind(int n)
    {
        rank = new int[n];
        parent = new int[n];
        for(int i=0;i<n;++i){
            rank[i] = 0;
            parent[i] = i;
        }
    }

    int findSet(int x)
    {
        if(parent[x] != x)
        {
            parent[x] = findSet(parent[x]);
        }
        return parent[x];
    }

    bool same(int x, int y)
    {
        return findSet(x) == findSet(y);
    }

    void unite(int x, int y)
    {
        int root_x = findSet(x);
        int root_y = findSet(y);
        if(rank[root_x] < rank[root_y])
        {
            parent[root_x] = root_y;
        }
        else{
            if(rank[root_x] == rank[root_y])
            {
                ++rank[root_x];
            }
            parent[root_y] = root_x;
        }
    }
};

bool compareEdge(const Pp& e1, const Pp& e2)
{
    return e1.second < e2.second;
}

int craskal(const vector< Pp >& edges, int n)
{
    int count = 0, ans = 0;
    UnionFind UF(n);

    for(Pp e : edges)
    {
        if(!UF.same(e.first.first, e.first.second)){
            ans += e.second;
            UF.unite(e.first.first, e.first.second);
            ++count;
        }
        if(count >= n - 1) break;
    }
    return ans;
}

int main()
{
    int n, m, s, t, w;
    cin >> n >> m;
    vector<Pp> edges;
    for(int i=0;i<m;++i)
    {
        cin >> s >> t >> w;
        edges.push_back(make_pair(
            make_pair(s, t), w
        ));
        edges.push_back(make_pair(
            make_pair(t, s), w
        ));
    }
    sort(edges.begin(), edges.end(), compareEdge);
    cout << craskal(edges, n) << endl;
}

