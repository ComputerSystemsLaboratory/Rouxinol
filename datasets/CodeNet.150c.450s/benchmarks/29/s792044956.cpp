#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> P;

#define fi first
#define se second
#define repl(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define rep(i,n) repl(i,0,n)
#define each(itr,v) for(auto itr:v)
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define dbg(x) cout<<#x"="<<x<<endl
#define mmax(x,y) (x>y?x:y)
#define mmin(x,y) (x<y?x:y)
#define maxch(x,y) x=mmax(x,y)
#define minch(x,y) x=mmin(x,y)
#define uni(x) x.erase(unique(all(x)),x.end())
#define exist(x,y) (find(all(x),y)!=x.end())
#define bcnt __builtin_popcount

#define INF INT_MAX/3

struct node
{
  node* nxt;
  node* prv;
  int val;
};

int idx=0;
node resorce[2000000];

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  node* start=&resorce[idx++];
  node* end=&resorce[idx++];
  start->nxt=end; start->prv=NULL;
  start->val=-1;
  end->prv=start; end->nxt=NULL;
  end->val=-1;

  int q;
  cin>>q;
  while(q--){
    string com;
    int x;
    cin>>com;
    if(com=="insert"){
      cin>>x;
      node* crt=&resorce[idx++];
      crt->val=x;
      crt->nxt=start->nxt;
      crt->prv=start;
      start->nxt=crt;
      crt->nxt->prv=crt;
    }else if(com=="delete"){
      cin>>x;
      node* crt=start;
      while(crt!=end&&crt->val!=x)crt=crt->nxt;
      if(crt==end)continue;
      node* prev=crt->prv;
      node* next=crt->nxt;
      prev->nxt=next;
      next->prv=prev;
    }else if(com=="deleteFirst"){
      node* crt=start->nxt;
      start->nxt=crt->nxt;
      crt->nxt->prv=start;
    }else if(com=="deleteLast"){
      node* crt=end->prv;
      end->prv=crt->prv;
      crt->prv->nxt=end;
    }
  }
  vector<ll> res;
  node* crt=start->nxt;
  while(crt!=end){
    res.push_back(crt->val);
    crt=crt->nxt;
  }
  cout<<res[0];
  repl(i,1,res.size()){
    cout<<" "<<res[i];
  }
  cout<<endl;
	return 0;
}