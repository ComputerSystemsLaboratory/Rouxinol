#include <bits/stdc++.h>
using namespace std;
#define int         long long
#define mp          make_pair
#define pb          push_back
#define pii         pair<int,int>
#define vi          vector<int>
// #define vb          vector<bool>
// #define vc          vector<char>
#define vii         vector<pii>
//#define mi          map<int,int>
//#define mii         map<pii,int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (int)x.size()
// #define ub(x)       upper_bound(x)
// #define lb(x)       lower_bound(x)
#define endl        '\n'
#define file        freopen("b1.in","r",stdin);freopen("output.txt","w",stdout)
#define fastio      ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
// #define N            1e5+5
#define PRIME           1000000007
#define MAX         50000
#define mem0(a)     memset(a,0,sizeof(a))
#define prec        cout<<std::setprecision(9)<<std::fixed
#define forn(i,a,b)  for(int i=a;i<b;i++)
#define pi          3.14159265358979323
int i,j,k;
// int n;
// const int N=1e6+5;
// vector<bool> prime(N);
// void sieve(){
//     for(int i=0;i<=N;i++)prime[i]=true;
//     prime[0]=prime[1]=false;
//     for(int i=2;i*i<=N;i++){
//         if(prime[i] and i*i<=N){
//             for(int j=i*i;j<=N;j+=i){
//                 prime[j]=false;
//             }
//         }
//     }
// }
// const bool cmp(pii a,pii b){
//     return a.F-a.S>b.F-b.S;
// }
const int N=1e4+5;
int ans[N];
void f(){
    for(i=1;i<=105;i++){
        for(j=1;j<=100;j++){
            for(k=1;k<=100;k++){
                int v=i*i+j*j+k*k+i*j+j*k+k*i;
                if(v<N)ans[v]++;
            }
        }
    }
}
void Anon_mouS(){
    int n;
    f();
    cin>>n;
    for(i=1;i<=n;i++)cout<<ans[i]<<endl;
}
int32_t main(){
    fastio;
    int q=1;
    // sieve();
    // cin>>q;
    for(int it=1;it<=q;it++){
        // cout<<"Case #"<<it<<": ";
        Anon_mouS();
    }
    return 0;   
}