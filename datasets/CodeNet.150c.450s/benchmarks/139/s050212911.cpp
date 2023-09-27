//doaremon,squirtle is love
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define fast                            ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ff                              first
#define ss                              second
#define max3(a,b,c)                     max(a,max(b,c))
#define min3(a,b,c)                     min(a,min(b,c))
#define testcase                        while(tc--)
#define in(x)                           ll x;cin>>x;
#define inst(str)                       string str;cin>>str;
#define out(x)                          cout<<x<<endl;//to print (-1)
#define inputarray(arr,n)               ll arr[n]; for(int i=0;i<n;i++) cin>>arr[i];
#define copinarray(arr,brr,n)           ll arr[n];ll brr[n]; for(int i=0;i<n;i++){cin>>arr[i];brr[i]=arr[i];}
#define inputarray1(arr,n)              ll arr[n+1]; arr[0]=0; fr(i,1,n) cin>>arr[i];
#define readv(vect,n)                   vector<int> vect(n); for(auto &i:vect) cin>>i;
#define lol                             cout<<"************\n";
#define deb(a)                          cout<<" :: "<<#a<<" = "<<a<<endl
#define deb2(a,b)                       cout<<" :: "<<#a<<" = "<<a<<" :: "<<#b<<" = "<<b<<endl
#define deb3(a,b,c)                     cout<<" :: "<<#a<<" = "<<a<<" :: "<<#b<<" = "<<b<<" :: "<<#c<<" = "<<c<<endl
#define amin(a,b)                       if(b<a) swap(a,b);
#define amax(a,b)                       if(b>a) swap(a,b);
#define three(a,b,c)                    int arr[3];arr[0]=a;arr[1]=b;arr[2]=c;sort(arr,arr+3);a=arr[0];b=arr[1];c=arr[2];
#define setbits(x)                      __builtin_popcountll(x)
#define zrobits(x)                      __builtin_ctzll(x)
#define pb                              push_back
#define mkp                             make_pair
#define all(v)                          (v).begin(),(v).end()
#define pii                             pair<int, int>
#define vi                              vector<int>
#define vpi                             vector<pair<int,int>>
#define Fill(vect,val)                  fill(vect.begin(),vect.end(),val)
#define ub                              upper_bound // '>'
#define lb                              lower_bound // '>='
#define len(arr)                        ((sizeof(arr))/(sizeof(arr[0])))
#define sz(x)                           ((long long)x.size())
#define make_unique(arr)                arr.erase(unique(arr.begin(),arr.end()),arr.end()) //Makes a sorted array unique
#define int                             long long
#define frf                             for(ll i=0;i<n;i++)
#define frr                             for(ll i=n-1;i>=0;i--)
#define fr(a,b,c)                       for(ll a=b; a<=c; a++)
#define rf(a,b,c)                       for(ll a=b;a>=c;a--)
#define rep(a,b,c)                      for(ll a=b; a<c; a++)
#define updiv(a,b)                      (ceil)((a)*(1.0)/(b))
#define printarray(arr)                 cout<<"PRINT ARRAY"<<endl; rep(i,0,len(arr)) cout<<arr[i]<<" "; cout<<endl;
#define printvector(vect)               cout<<"PRINT VECTOR"<<endl; for(auto x:vect) cout<<x<<" "; cout<<endl;
#define rev(x)                          reverse(all(x))
#define gcd(m,n)                        __gcd(m, n)
#define set_mat(arr,rows,columns,val)   for(ll i=0;i<rows;i++) for(ll j=0;j<columns;j++) arr[i][j]=val;
#define take_mat(arr,rows,columns)      for(ll i=0;i<rows;i++) for(ll j=0;j<columns;j++) cin>>arr[i][j];
#define print_mat(arr,rows,columns)     for(ll i=0;i<rows;i++) {for(ll j=0;j<columns;j++) cout<<arr[i][j]<<" "; cout<<endl;}
#define ps(n,points)                    cout<<fixed<<setprecision(points)<<n<<endl
#define dist(it,vect)                   distance(vect.begin(),it)
#define pq                              priority_queue<int>
#define pqa                             priority_queue<int,vector<int>,greater<int>>
#define M                               1000000007
#define mod                             998244353
#define endl                            '\n'
#define negmod(x,m)                     ((x)%(m)+(m))%(m)
//LLONG_MAX, ULLONG_MAX INT_MAX
//erase,count,find,make_unique in vector
typedef long long ll;
typedef unsigned long long ull;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
ull countBits(ull n){ull count=0;while(n){count++;n>>=1;}return count;} 
void cc()
{
    fast
#ifndef ONLINE_JUDGE
    if(fopen("input.txt","r"))
    {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    }
#endif
}
template<class T> ostream& operator<<(ostream &os, vector<T> vect) {
    os<<"PRINT VECTOR\n";
    for(auto x:vect) os <<x<< " ";
    return os << "";
}
template<class T> ostream& operator<<(ostream &os, set<T> S){
    os << "{ ";
    for(auto x:S) os<<x<<" ";
    return os<<"}";
}
template<class L, class R> ostream& operator<<(ostream &os, pair<L,R> p) {
    return os << "(" << p.ff << "," << p.ss << ")";
}
template<class L, class R> ostream& operator<<(ostream &os, map<L,R> mp) {
    os << "PRINT MAP\n";
    for(auto pp:mp) os<<"("<<pp.ff<<":"<<pp.ss<<")\n";
    return os<<"";
}
int binpow(int a, int b) 
{
    int res = 1;
    while(b>0) 
    {
        if(b&1)
        res=res*a;
        a=a*a;
        b>>=1;
    }
    return res;
}
bool second_sort(const pii & lhs , const pii & rhs)
{
    pii a,b;
    a.ff=lhs.ss;
    a.ss=lhs.ff;
    b.ff=rhs.ss;
    b.ss=rhs.ff;
    return a<b;
}
bool scomp(pii a,pii b)
{
  if(a.ss==b.ss)
  return (a.ff<b.ff);
  else
  {
  return (a.ss>b.ss);
  }
}

int32_t main()
{
 
  cc();
  int tc=1;
  // cin>>tc;
  testcase
  {
  	in(n)in(m)
  	vector<vi> arr(n+1);
  	int a,b;
  	fr(i,1,m)
  	{
  		cin>>a>>b;
  		arr[a].pb(b);
  		arr[b].pb(a);
  	}
  		int cur;
  		vi DIST(n+1);
  		Fill(DIST,LLONG_MAX);
  		DIST[1]=0;
  		queue<int> q;
  		vi par(n+1);
  		for(auto x:arr[1])
  		{
  			q.push(x);
  			DIST[x]=1;
  			par[x]=1;
  		}
  		    while(!q.empty())
  		    {
  		        cur=q.front();
  		        for(auto x:arr[cur])
  		        {
					if(DIST[cur]+1<DIST[x])
  		            {    
  		                DIST[x]=DIST[cur]+1;
  		                par[x]=cur;
  		            	q.push(x);
  		            }
  		        }
  		        q.pop();
  		    }
  		    bool f=1;
  		    for(int i=2;i<=n;i++)
  		    	{
  		    		if(par[i]==LLONG_MAX)
  		    			{f=0;break;}
  		    	}
  		    	if(f==0)
  		    		out("No")
  		    	else
  		    	{
  		    		out("Yes")
  		    		for(int i=2;i<=n;i++)
  		    		{
  		    			cout<<par[i]<<endl;
  		    		}
  		    	}
  }
return 0;
}