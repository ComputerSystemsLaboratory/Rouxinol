#include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp> 
//using namespace __gnu_pbds;
using namespace std;

#define F first
#define S second
#define pb push_back
#define powerof2 ()
#define mp make_pair
#define pi acos(-1)
using ll = long long;
const ll M = 1000000007;
const ll M1= 998244353;
const int height=40;
using vl = vector<ll>;
using pll =  pair<ll,ll>;
//typedef tree<pair<int,int>,null_type,less<pair<int,int>>,rb_tree_tag, tree_order_statistics_node_update> is;

ll power(ll x,ll y){
	if(y==0)
		return 1;
	ll res=power(x,y/2);
	res=(res*res);
	if(y&1)
		res=(res*x);
	return res;
}

ll powermod(ll x,ll y,ll mod){
	if(y==0)
		return 1;
	ll res=powermod(x,y/2,mod);
	res=(res*res)%mod;
	if(y&1)
		res=(res*x)%mod;
	return res;
}
/*int n,m2;char s[101];
char mat[501][501];
map<pair<int,int>,vector<pair<int,int>>> m,m1;

void dfs(int i,int j,int in,pair<int,int> p)
{
	int i1=i,j1=j;
	if(s[in]=='\0')
		return;
	if(s[in]=='L')
		j1--;
	else if(s[in]=='R')
		j1++;
	else if(s[in]=='U')
		i1--;
	else
		i1++;
	if(i1<=0||j1<=0||i1>n||j1>m2||mat[i1][j1]=='#')
        {
        	i1=i;
        	j1=j;
        }
        in++;
        m[p].pb({i1,j1});
        dfs(i1,j1,in,p);
}

void dfs1(int i,int j,int co,set<pair<int,int>> &st,pair<int,int> p){
	if(st.find({i,j})!=st.end())
	{
		m1[p].pb({i,j});
		return;
	}
	//if(co!=0){
	m1[p].pb({i,j});
	st.insert({i,j});
	co++;
	pair<int,int> p1=m[{i,j}][m[{i,j}].size()-1];
	dfs1(p1.F,p1.S,co,st,p);
}*/
/*int n,m;
vector<vector<pair<int,int>>> gr;
vector<int> visi;
void dfsgr(int c,int x,vector<ll> &v,int &co)
{
	visi[c]=1;
	v.pb(c);co++;
	for(int i=0;i<gr[c].size();i++)
	{
		if(visi[gr[c][i].F]==0&&gr[c][i].S!=x)
		{
			dfsgr(gr[c][i].F,x,v,co);
		}
	}
}*/

/*string lsfp(string &s)
{
	//cout<<s<<endl;
	int i=0,j=s.size()-1;
	while(i<j)
	{
		if(s[i]==s[j])
		{

			int st=i,en=j;
			//cout<<i<<" "<<j<<endl;
			while(st<en)
			{
				if(s[st]!=s[en])
					break;
				st++;
				en--;
			}
			//cout<<st<<" "<<en<<endl;

			if(s[st]!=s[en]){
				i=0;j--;}
			else
			{
				//cout<<st<<" "<<en<<endl;
				string ans="";
				for(;i<=j;i++)
					ans.pb(s[i]);
				return ans;
			}
		}
		else
			j--;
	}
	string te="";te.pb(s[0]);
	return te;
}*/
/*map<pair<int,int>,ll> m;int fp;
ll solve1(int p,int in)
{
	if(in==n&&p!=0)
		return -(ll)1e18;
	if(p==0)
		return 0;
	if(m[{in,fp-p}]!=0)
		return m[{in,fp-p}];
	ll s=0,ma=solve1(p,in+1);
	for(int i=0;i<min(k,p);i++)
	{
		s+=v[in][i];
		ll va=solve1(p-i-1,in+1);
		ma=max(ma,s+va);
	}
	m[{in,fp-p}]=ma;
	return ma;
}*/
ll findxor(ll a)
{
	switch(a & 3) // n % 4  
    { 
    case 0: return a;     // if n is multiple of 4 
    case 1: return 1;     // If n % 4 gives remainder 1   
    case 2: return a + 1; // If n % 4 gives remainder 2     
    case 3: return 0;     // If n % 4 gives remainder 3   
    } 
    return -1;
}
/*ll binarysearch(ll va)
{
	ll n=1;
	ll l=va+1,u=n;
	ll st=num.order_of_key(va);
	while(l+1<u)
	{
		m=(l+u)/2;
		ll in=num.order_of_key(m);
		if(in-st==m-va)
		{
			l=m;
		}
		else
		{
            u=m;
		}
	}
	if(num1.find(l)==num1.end())
		return l;
	return u;
}*/
// vector<vector<pair<int, int>>> adj;

// void dijkstra(int s, vector<int> & d) {
//     int n = adj.size();n++;
//     d.assign(n, (int)1e9);
//     //p.assign(n, -1);

//     d[s] = 0;
//     set<pair<int, int>> q;
//     q.insert({0, s});
//     while (!q.empty()) {
//         int v = q.begin()->second;
//         q.erase(q.begin());

//         for (auto edge : adj[v]) {
//             int to = edge.first;
//             int len = edge.second;

//             if (d[v] + len < d[to]) {
//                 q.erase({d[to], to});
//                 d[to] = d[v] + len;
//                 //p[to] = v;
//                 q.insert({d[to], to});
//             }
//         }
//     }
// }

// int n;vector<pair<int,int>> v;
// int satisfy(int m)
// {
// 	for(int i=0;i<n;i++)
// 	{
// 		if(v[i].S==1 && m<1900)
// 			return 1;
// 		if(v[i].S==2 && m>=1900)
// 			return 2;
// 		m+=v[i].F;
// 	}
// 	return 3;
// }
/*int dfs(int c,int p)
{
    visi[c]=1;
    int va=v[c];
    if(va==p||visi[va]==1)
    return va;
    return dfs(va,c);
}*/
// int n,coun=1;
// vector<int> entr,exi;
// vector<vector<int>> tre;
// vector<int> travel;
// void dfs(int c,int p){
// 	entr[c]=coun;
// 	coun++;
// 	travel.pb(c);
// 	for(int i=0;i<tre[c].size();i++)
// 	{
// 	    if(tre[c][i]!=p)
// 	    {
// 	        dfs(tre[c][i],c);
// 	    }
// 	}
// 	exi[c]=coun;
// }
// int n,m,k;
// vector<vector<int>> visi;
// vector<vector<char>> v;
// int dfs(int i,int j)
// {
//     if(i<0||j<0||i>=n||j>=m)
//     return -(int)1e6;
//     if(v[i][j]=='*'||visi[i][j]==1)
//     return 0;
//     visi[i][j]=1;
//     return 1+dfs(i-1,j)+dfs(i,j-1)+dfs(i+1,j)+dfs(i,j+1);
// }
// void dfs1(int i,int j)
// {
//     if(i<0||j<0||i>=n||j>=m||v[i][j]=='*')
//     return;
//     v[i][j]='*';
//     dfs1(i-1,j);
//     dfs1(i+1,j);
//     dfs1(i,j-1);
//     dfs1(i,j+1);
// }




void solve(){
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=k;i<n;i++)
		if(a[i]>a[i-k])
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;

}
int main(){


	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    int t=1;
    //cin>>t;
    

    for(int i=1;i<=t;i++)
    {//cout<<"Case #"<<i<<": ";
    solve();
	//cout<<1<<endl;
	}
    return 0;
}