#include <iostream>
#include <vector>
using namespace std;

void step(vector<vector<int> >& edges, vector<int>& node_class, int node, int cls)
{
    if(node_class[node] != -1) return;
    node_class[node] = cls;
    for(int e : edges[node])
    {
        if(node_class[e] == -1) step(edges, node_class, e, cls);
    }
}

void cls_init(vector<int>& node_class)
{
    for(vector<int>::size_type i=0;i<node_class.size();++i)
        node_class[i] = -1;
}

void dfs(vector<vector<int> >& edges, vector<int>& node_class)
{
    int cls = 0;
    cls_init(node_class);
    for(vector<int>::size_type i=0;i<edges.size();++i)
    {
        if(node_class[i] == -1) step(edges, node_class, i, cls++);
    }
}

int main()
{
    int n, m, s, t;
    cin >> n >> m;
    vector< vector<int> > edges(n);
    vector<int> node_class(n);
    for(int i=0;i<m;++i)
    {
        cin >> s >> t;
        edges[s].push_back(t);
        edges[t].push_back(s);
    }
    dfs(edges, node_class);
    int q;
    cin >> q;
    for(int i=0;i<q;++i)
    {
        cin >> s >> t;
        if(
            node_class[s] == node_class[t]
            && node_class[s] != -1
            && node_class[t] != -1
        ){ 
            cout << "yes";
        }
        else cout << "no";
        cout << endl;
    }
}

