#include<functional>
#include<algorithm>
#include<iostream>
#include<utility>
#include<string>
#include<vector>
#include<cmath>
#include<stack>
#include<queue>
#include<deque>
#include<map>
#define rep(i,n) for(int i=0;i<n;i++)
#define loop(i,x,n) for(int i=x;i<n;i++)
#define all(v) (v).begin(),(v).end()
#define pf push_front
#define pb push_back
#define int long long
using namespace std;
const int INF=1000000007;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

int inf=pow(2,31)-1;
int size=1;
vector<int> tree;

void init(int n){
  while(size<n){
    size*=2;
  }
  tree.assign(size*2,0);
}

/*void update(int m,int x){
  tree[m+=size]=x;
  while(m/=2){
    tree[m]=min(tree[m*2],tree[m*2+1]);
  }
}

int find(int l,int r){
  l+=size,r+=size;
  int al=inf,ar=inf;
  for(;l<r;l/=2,r/=2){
    if(l%2==1)al=min(tree[l++],al);
    if(r%2==1)ar=min(tree[--r],ar);
  }
  return min(al,ar);
  }*/

void add(int i,int x){
  tree[i+=size]+=x;
  while(i/=2){
    tree[i]=tree[i*2]+tree[i*2+1];
  }
}

int getSum(int l,int r){
  l+=size,r+=size;
  int sl=0,sr=0;
  for(;l<r;l/=2,r/=2){
    if(l%2==1)sl+=tree[l++];
    if(r%2==1)sr+=tree[--r];
  }
  return sl+sr;
}

signed main(){
  int n,q;
  cin>>n>>q;
  init(n);
  rep(i,q){
    int com,x,y;
    cin>>com>>x>>y;
    if(com){
      x--;
      cout<<getSum(x,y)<<endl;
    }else{
      x--;
      add(x,y);
    }
  }
  return 0;
}