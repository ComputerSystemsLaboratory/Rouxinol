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

struct node{
  node *p,*l,*r;
  int val;
};

node* root=NULL;

void insert(node* z){
  node* x=root;
  node* y=NULL;
  while(x!=NULL){
    y=x;
    if(z->val<x->val)x=x->l;
    else x=x->r;
  }
  z->p=y;

  if(y==NULL)root=z;
  else if(z->val<y->val)y->l=z;
  else y->r=z;
}

void dfs1(node* v){
  if(v->l!=NULL)dfs1(v->l);
  cout<<" "<<v->val;
  if(v->r!=NULL)dfs1(v->r);
}

void dfs2(node* v){
  cout<<" "<<v->val;
  if(v->l!=NULL)dfs2(v->l);
  if(v->r!=NULL)dfs2(v->r);
}

int main(){
  int q;
  cin>>q;
  while(q--){
    string s;
    cin>>s;
    if(s=="insert"){
      int v;
      cin>>v;
      node* z=(node *)malloc(sizeof(node));
      z->p=NULL; z->l=NULL; z->r=NULL;
      z->val=v;
      insert(z);
    }else{
      dfs1(root);
      cout<<endl;
      dfs2(root);
      cout<<endl;
    }
  }
	return 0;
}

