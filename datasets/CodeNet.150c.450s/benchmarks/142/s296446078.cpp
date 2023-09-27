#include <bits/stdc++.h>
#define lli long long int
#define pb(a) push_back(a)
#define forr(a,n) for(lli i=a;i<n;i++)
#define forrr(j,a,n) for(lli j=a;j<n;j++)
#define all(x) x.begin(),x.end()
#define pi2  1.57079632679489661923

using namespace std;
void print(lli a[],lli n){
forr(0,n){cout<<a[i]<<" ";}
cout<<"\n";
}
lli power(lli x){
lli u=0;
while(x%2==0){
    u++;
    x=x/2;
}
return u;
}

lli powM(lli x,lli y,lli m)
{
    if(m==1){return 0;}
    lli ans=1,r=1;
    x%=m;
    while(r>0&&r<=y)
    {
        if(r&y)
        {
            ans*=x;
            ans%=m;
        }
        r<<=1;
        x*=x;
        x%=m;
    }
    return ans;
}
int powm(lli a, lli b) {
	lli res = 1;
	while (b) {
		if (b & 1)
			res = (res * a);
		a = (a * a);
		b >>= 1;
	}
	return res;
}
lli gcd(lli a, lli b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);

}
bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}
/*
vector <lli> adj[100001];
lli vis[100001]={0};
void dfs(lli a){
    vis[a]=1;
    forr(0,adj[a].size()){
    if(vis[adj[a][i]]){continue;}
    else{
        dfs(adj[a][i]);
    }
    }
}
lli level[100001];
void bfs(lli a){
queue <lli> q;
vis[a]=1;
level[a]=0;
q.push(a);
while(!q.empty()){
    lli p=q.front();
    q.pop();
    forr(0,adj[p].size()){
    if(vis[adj[p][i]]==0){
        level[adj[p][i]]=level[p]+1;
        q.push(adj[p][i]);
        vis[adj[p][i]]=1;
    }
    }

}

}

vector <pair<lli,lli> > dj[100001];
lli dist[100001];
vector<lli> ans[100001];
void dijkstra(lli a){
dist[a]=0;
ans[a].pb(a);
multiset<pair<lli,lli> > s;
s.insert({0,a});
while(s.size()!=0){
    lli x=(*s.begin()).second;
    s.erase(s.begin());
    if(vis[x]){continue;}
    vis[x]=1;
    forr(0,dj[x].size()){
    lli e=dj[x][i].first;
    lli we=dj[x][i].second;
    if(dist[x]+we<dist[e]){
        dist[e]=dist[x]+we;
        ans[e].clear();
        ans[e].pb(x);
        s.insert({dist[e],e});
    }
    }
}

}
*/

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
   cout.tie(0);
   //freopen("outpu.txt","w",stdout);
int t1=1;
//cin>>t1;
lli M =1e9+7;
while(t1--){
lli n,k;
cin>>n>>k;
lli a[n];
forr(0,n){cin>>a[i];}
lli p=0;
forr(k,n){
if(a[i]>a[p]){
    cout<<"Yes\n";
}
else{cout<<"No\n";}
p++;
}

}
     return 0;
}
