#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
#define loop(i,x,n) for(int i=x;i<n;i++)
#define pb push_back
#define int long long
#define MAX 10000
#define NIL -1
using namespace std;
const int INF=1000000007;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

struct node{
  int p,l,r;
};
struct node T[MAX];
int n;

void preParse(int u){
  if(u==NIL) return ;
  printf(" %d", u);
  preParse(T[u].l);
  preParse(T[u].r);
}

void inParse(int u){
  if(u==NIL)return ;
  inParse(T[u].l);
  printf(" %d", u);
  inParse(T[u].r);
}
void postParse(int u){
  if(u==NIL)return ;
  postParse(T[u].l);
  postParse(T[u].r);
  printf(" %d", u);
}

signed main(){
    int v,l,r,root=0;
    cin>>n;
    rep(i,n)T[i].p=NIL;
    rep(i,n){
      cin>>v>>l>>r;
      T[v].l=l;
      T[v].r=r;
      if(l!=NIL)T[l].p=v;
      if(r!=NIL)T[r].p=v;
    }
    rep(i,n)if(T[i].p==NIL)root=i;
    cout<<"Preorder"<<endl;
    preParse(root);
    cout<<endl;
    cout<<"Inorder"<<endl;
    inParse(root);
    cout<<endl;
    cout<<"Postorder"<<endl;
    postParse(root);
    cout<<endl;
  return 0;
}