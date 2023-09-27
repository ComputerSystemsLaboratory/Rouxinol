/*
"Won't stop untill I'm Phenomenal"
- Phenomenal, EMINEM
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define ff first
#define Shazam ios_base::sync_with_stdio(false);   cin.tie(NULL); cout.tie(NULL);
#define ss second
#define all(c) c.begin(),c.end()
#define endl "\n"
#define test() int t; cin>>t; while(t--)
#define fl(i,a,b) for(int i = a ; i <b ;i++)
#define get(a) fl(i,0,a.size())  cin>>a[i];
#define pra(a) fl(i,0,a.size()) cout<<a[i]<<" ";	cout<<endl;
#define pr(a,n) fl(i,0,n) cout<<a[i]<<" ";	cout<<endl;
const ll INF = 2e18;
const int inf = 2e9;
const int mod1 = 1e9 + 7;



int main(){
    Shazam;
    int n,m; cin>>n>>m;
    vector<vector<int>> g(n+1);
    for(int i = 0 ; i < m; i++){
        int a,b; cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    vector<int> p(n+1);
    vector<int> d(n+1, 1e9);
    set<pair<int,int>> q;
    q.insert({0,1});
    for(int i = 2; i <= n; i++){
        q.insert({INT_MAX,i});
    }
    d[1] = 0;
    d[0] = 0;
    while(!q.empty()){
        int v = q.begin()->ss;
        q.erase(q.begin());
        for(int next : g[v]){
            if(d[next] > d[v] + 1){
                q.erase({d[next],next});
                d[next] = d[v] + 1;
                p[next] = v;
                q.insert({d[next],next});
            }
        }
    }
    if(*max_element(all(d))== INT_MAX) cout<<"No"<<endl;
    else{
        cout<<"Yes"<<endl;
        for(int i = 2; i <=n; i++)
            cout<<p[i]<<endl;
    }
    return 0;
}