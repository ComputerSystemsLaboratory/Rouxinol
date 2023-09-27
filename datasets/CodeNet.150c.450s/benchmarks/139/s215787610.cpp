    #include<bits/stdc++.h>
    using namespace std;
    #define ll  unsigned long long
    #define ld  long double
    #define endl '\n'
    #define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    const ll MOD = 998244353;
    const double PI = 3.141592653589793238463;
    const int MAXN = 200005;
    int n,m;
    vector<int>v[MAXN];
    bool vis[MAXN];
    map<int,int> ma;
    vector<int> ans1;
    bool flag=0;
    void bfs(int a)
    {
        memset(vis,0,sizeof vis);
        queue<pair<int,int>> q;
        q.push({a,0});
        ma[a]=0;
        vis[a]=1;
        while(!q.empty())
        {
            int cur=q.front().first;
            int dep=q.front().second;
            q.pop();
            for(int i=0; i<v[cur].size(); i++)
            {
                if(!vis[v[cur][i]])
                {
                    ma[v[cur][i]]=dep+1;
                    vis[v[cur][i]]=1;
                    q.push({v[cur][i],dep+1});
                }
            }
        }


    }
    int main()
    {
        FAST

        cin>>n>>m;
        for(int i=0; i<m; i++)
        {
            int a,b;
            cin>>a>>b;
            v[a].push_back(b);
            v[b].push_back(a);
        }
        for(int i=1;i<=n;i++){
            ma[i]=1e9;
        }
       bfs(1);
       for(int i=2;i<=n;i++){
        int mn=1e8;
        int temp=-1;
        for(int j=0;j<v[i].size();j++){
            if(ma[v[i][j]]<mn){
                mn=ma[v[i][j]];
                temp=v[i][j];
            }
        }
        if(temp==-1)
            return cout<<"No",0;
        else{
            ans1.push_back(temp);
        }
       }
        cout<<"Yes"<<endl;
        for(int i=0; i<ans1.size(); i++)
            cout<<ans1[i]<<endl;


        return 0;
    }
