/*     *******************Bismillahir Rahmanir Rahim************************
                          MD. ASFAKUL GHANI!
                          *ProMAGFAT*!
 SECRET_warning :)->FAT   CSE-25!
                          JAHANGIRNAGAR UNIVERSITY!
                          Dhaka,Bangladesh!
*/

#include <bits/stdc++.h>
#include <set>
using namespace std;

#define           fasterIO ios_base::sync_with_stdio(false);cin.tie(NULL)
#define           Im int main()
#define           ll long long
#define           sc scanf
#define           pf printf
#define           rn0 return 0
#define           rn return
#define           f0(i,n) for(ll i=0;i<n;i++)
#define           f1(i,n) for(ll i=1;i<=n;i++)
#define           f2(i,n) for(ll i=n-1;i>=0;i--)
#define           pi 2*acos(0.0)
#define           modulo 1000003
#define           dd double
#define           PI 3.14159265358979
#define           pi 2*acos(0.0)
#define           p_b push_back
#define           ps push

/*
ll for_binarySearch(ll a,ll b,ll aa[],ll x){while(a<=b){ll mid=(a+b)/2;if(aa[mid]==x) return 1;else if(aa[mid] > x) b=mid-1;else a=mid+1;}return -1;}
ll for_gcd(ll a,ll b){if(a==0) return b;else return for_gcd(b%a,a);}
ll for_prime(ll x){for (ll i=2;i*i<=x;i++){if(x%i==0) return 0;}return 1;}
void for_swap(char *x,char *y){char temp;temp=*x;*x=*y;*y=temp;}
ll for_big_mod(ll b,ll p,ll m){if(p==0) return 1;else if(p%2==0){ll k=for_big_mod(b,p/2,m);return (k*k)%m;}else return ((b%m)*(for_big_mod(b,p-1,m)))%m;}
ll for_josephus(ll n,ll k){if(n==1) return 1;return (for_josephus(n-1,k)+k-1)%n+1;}
ll for_gcdExtended(ll a,ll b,ll *x,ll *y){if(a==0){*x=0;*y=1;return b;}ll x1,y1;ll gcd=for_gcdExtended(b%a,a,&x1,&y1);*x=y1-(b/a)*x1;*y=x1;return gcd;}
*/

void debug1()
{
    cout << "***" << endl;
}

void debug11(ll n)
{
    cout << n << endl;
}

#define ipair pair <ll,ll>
#define inf 12345678912345
ll n,m,p;
vector <ipair> v1[101010];
pair <ll,ipair> pp[101010];
vector <ll> dis;

void FAT_dj(ll src)
{
    priority_queue <ipair, vector<ipair>, greater<ipair> > pq;
    pq.ps(make_pair(0,src));
    dis[src] = 0;
    while (!pq.empty()){
        ll u = pq.top().second;
        pq.pop();
        vector <ipair> ::iterator it;
        for (it = v1[u].begin(); it != v1[u].end(); it += 1){
            ll v = (*it).first;
            ll w = (*it).second;
            if (dis[v] > dis[u] + w){
                dis[v] = dis[u] + w;
                pq.ps(make_pair(dis[v],v));
            }
        }
    }
}

void FAT_Ncycle(ll src)
{
    dis[src] = 0;
    for (ll i = 0; i < n; i += 1){
        if (src == i) continue;
        for (ll j = 0; j < m; j += 1){
            ll w = pp[j].first;
            ll u = pp[j].second.first;
            ll v = pp[j].second.second;
            if (dis[u] + w < dis[v] && dis[u] != inf){
                dis[v] = dis[u] + w;
            }
        }
    }
}

Im
{
    /*#ifdef FAT
       freopen("input.txt","w",stdin);
    #endif // FAT*/

    //fasterIO;

    cin>>n>>m;

    for (ll i = 0; i < m; i += 1){
        ll u,v,w;
        cin>>u>>v>>w;
        v1[u].p_b(make_pair(v,w));
        pp[i] = make_pair(w,make_pair(u,v));
        //v1[v].p_b(make_pair(u,w));
    }

    for (ll k = 0; k < n; k += 1){
    for (ll i = 0; i <= n; i += 1) dis.p_b(inf);

    FAT_Ncycle(k);
    if (k==0){
    for (ll i = 0; i < m; i += 1){
        ll w = pp[i].first;
        ll u = pp[i].second.first;
        ll v = pp[i].second.second;
        if (dis[u] != inf && dis[u] + w < dis[v]){
            cout << "NEGATIVE CYCLE" << endl;
            rn0;
        }
    }
    }
    if (dis[0] == inf) cout << "INF";
    else cout << dis[0];
    for (ll i = 1; i < n; i += 1){
        if (dis[i] == inf) cout << " " << "INF";
        else cout << " " << dis[i];
    }
    cout << endl;
    dis.clear();
    }

    for (ll i = 0; i < n; i += 1) v1[i].clear();

   // main();

    rn0;
}