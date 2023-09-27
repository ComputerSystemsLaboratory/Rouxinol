#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
//cout << fixed << setprecision(8) << a << endl;
#define Fast_Input ios_base :: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define pb push_back
#define mem(a, b)     memset(a, b, sizeof(a))
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef long long ll;
typedef tree<int,null_type,greater<int>,rb_tree_tag,tree_order_statistics_node_update>ordered_set;
/*sort(v.begin(), v.end(),
     [](const pair<int, int>& x, const pair<int, int>& y)
{
    if (x.first != y.first)
        return x.first < y.first;
    return x.second < y.second;
});
*/
int const fx[]= {+1,+0,-1,+1};
int const fy[]= {-1,+1,+0,+0};
const int inf = numeric_limits<int>::max();
const ll mx=1e5;
const ll mod=1e9+7;
vector<int>v[mx+2];
int vis[mx+5],cost[mx+5];
void BFS(int x)
{
    int i;
    queue<int>q;
    q.push(x);
    vis[x]=1;
    cost[x]=0;
    while(!q.empty())
    {
        x=q.front();
        q.pop();
        for(i=0;i<v[x].size();i++)
        {
            if(!vis[v[x][i]])
            {
                q.push(v[x][i]);
                vis[v[x][i]]=1;
                cost[v[x][i]]=cost[x]+1;
            }
        }
    }
}
int main()
{
    int n,m,i,x,y,c=0;
    cin >> n >> m;
    while(m--)
    {
        cin >> x >> y;
        v[x].pb(y);
        v[y].pb(x);
    }
    BFS(1);
    for(i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    int j;
    for(i=2;i<=n;i++)
    {
        int mini=cost[i],ans;
        for(j=0;j<v[i].size();j++)
        {
            if(cost[v[i][j]]<mini)
            {
                mini=cost[v[i][j]];
                ans=v[i][j];
            }
        }
        cout << ans << endl;
    }
    return 0;
}


