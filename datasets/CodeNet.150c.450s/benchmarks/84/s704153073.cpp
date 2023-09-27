#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using vec=vector<ll>;
using mat=vector<vec>;
#define For(i,a,b) for(i=a;i<b;i++)
#define rep(i,N) For(i,0,N)
#define rep1(i,N) For(i,1,N)
#define all(v) (v).begin(),(v).end()
#define allr(v) (v).rbegin(),(v).rend()
#define vsort(v) sort(all(v))
#define vrsort(v) sort(allr(v))
#define mod 1000000007
#define endl "\n"
#define output(v) do{bool f=0;for(auto i:v){cout<<(f?" ":"")<<i;f=1;}cout<<endl;}while(0)
using datas=pair<ll,ll>;
using tdata=pair<ll,datas>;

long mmid(long a,long b,long c){return a<b?(b<c?b:max(a,c)):(b>c?b:min(a,c));}

ll modinv(ll a) {
  ll b=mod,u=1,v=0,t;
  while(b){
    t=a/b;
    a-=t*b; swap(a,b);
    u-=t*v; swap(u,v);
  }
  return (u+mod)%mod;
}

ll moddevide(ll a,ll b){return (a*modinv(b))%mod;}

ll modncr(ll n,ll r){
  ll i,plus=1;
  rep(i,r){
    plus=(plus*(n-i))%mod;
    plus=moddevide(plus,i+1);
  }
  return plus;
}

ll modncrlistp[200000],modncrlistm[200000];

ll modncrs(ll n,ll r){
  ll i,j;
  if(modncrlistp[n]==0){
    for(i=n;i>=0;i--){
      if(modncrlistp[i])break;
    }
    if(i<0){
      modncrlistp[0]=1;
      rep1(i,n+1){
        modncrlistp[i]=(modncrlistp[i-1]*i)%mod;
      }
    }else{
      For(j,i+1,n+1){
        modncrlistp[j]=(modncrlistp[j-1]*j)%mod;
      }
    }
  }
  if(modncrlistm[n]==0){
    for(i=n;i>=0;i--){
      if(modncrlistm[i])break;
    }
    if(i<0){
      modncrlistm[0]=1;
      rep1(i,n+1){
        modncrlistm[i]=(modncrlistm[i-1]*modinv(i))%mod;
      }
    }else{
      For(j,i+1,n+1)modncrlistm[j]=(modncrlistm[j-1]*modinv(j))%mod;
    }
  }
  return (((modncrlistp[n]*modncrlistm[r])%mod)*modncrlistm[n-r])%mod;
}

ll euclidean_gcd(ll a, ll b) {
  if(a<b) return euclidean_gcd(b, a);
  ll r;
  while ((r=a%b)){a=b;b=r;}
  return b;
}

ll countdigits(ll n){
  ll ans=0;
  while(n){n/=10;ans++;}
  return ans;
}

ll sumdigits(ll n){
  ll ans=0;
  while(n){ans+=n%10;n/=10;}
  return ans;
}

void printmap(vector<ll>& a,ll H,ll W){
  ll i,j;
  For(i,0,H+2){
    For(j,0,W+2){cout<<a[i*(W+2)+j];}
    cout<<endl;
  }
}
void inputmap(vector<ll>& a,ll H,ll W){
  ll i,j;
  string ss;
  For(i,1,H+1){
    cin>>ss;
    For(j,1,W+1){
      if(ss[j-1]=='#'){
        a[i*(W+2)+j]=1;
      }else{
        a[i*(W+2)+j]=0;
      }
    }
  }
}
ll lpow(ll a,ll b){
  ll i,res=1;
  rep(i,b){
    res*=a;
  }
  return res;
}

struct sumsegtree{
  ll N;
  vec tree;
  sumsegtree(ll K){
    N=1;
    while(N<K)N*=2;
    tree.resize(2*N-1,0);
  }
  void input(ll i,ll a){
    i+=N-1;
    tree[i]+=a;
    while(i){
      i=(i-1)/2;
      tree[i]=tree[i*2+1]+tree[i*2+2];
    }
  }
  ll res(ll a,ll b,ll k,ll l,ll r){
    if(r<0)r=N;
    if(r<=a||b<=l)return 0;
    if(a<=l&&r<=b)return tree[k];
    ll vl=res(a,b,2*k+1,l,(l+r)/2);
    ll vr=res(a,b,2*k+2,(l+r)/2,r);
    return vl+vr;
  }
  ll q(ll a,ll b){
    return res(a,b,0,0,-1);
  }
  void prt(){
    output(tree);
  }
};
int main(){
  ll N,i,ans=0;
  cin>>N;
  vector<datas> v(N);
  rep(i,N){
    cin>>v[i].first;
    v[i].second=i;
  }
  vsort(v);
  sumsegtree p(N);
  rep(i,N){
    p.input(v[i].second,1);
    ans+=v[i].second-p.q(0,v[i].second+1)+1;
  }
  cout<<ans<<endl;
  return 0;
}
