#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#define INF (1<<29)

using namespace std;

struct Treap{

  struct node_t{
    int val;
    node_t *lch,*rch;
    int pri,cnt,mini,sum;
    
    node_t(int v,double p):val(v),pri(p),cnt(1),mini(v),sum(v){
      lch=rch=NULL;
    }
  };

  node_t *root;
  Treap():root(NULL){}
  
  int count(node_t *t){return !t?0:t->cnt;}
  int sum(node_t *t){return !t?0:t->sum;}
  int mini(node_t *t){return !t?INF:t->mini;}
  
  node_t *update(node_t *t){
    t->cnt=count(t->lch)+count(t->rch)+1;
    t->sum=sum(t->lch)+sum(t->rch)+t->val;
    t->mini=min(min(mini(t->lch),mini(t->rch)),t->val);
    return t;
  }
  
  node_t *merge(node_t *l, node_t *r){
    if(!l || !r)return l?l:r;
    
    if(l->pri > r->pri){
      l->rch=merge(l->rch,r);
      return update(l);
    } else {
      r->lch=merge(l,r->lch);
      return update(r);
    }
  }
  
  pair<node_t *,node_t *> split(node_t *t,int k){
    if(!t)return make_pair((node_t *)NULL,(node_t *)NULL);
    
    if(k<=count(t->lch)){
      pair<node_t *,node_t *>s=split(t->lch,k);
      t->lch=s.second;
      return make_pair(s.first,update(t));
    } else {
      pair<node_t *,node_t *>s=split(t->rch,k-count(t->lch)-1);
      t->rch=s.first;
      return make_pair(update(t),s.second);
    }
  }
  
  node_t *insert(node_t *t,int k,int val,int pri){
    pair<node_t *,node_t *>s=split(t,k);
    t=merge(s.first, new node_t(val,pri));
    t=merge(t,s.second);
    return update(t);
  }
  
  node_t *erase(node_t *t,int k){
    pair<node_t *,node_t *>s1,s2;

    s2=split(t,k+1);
    s1=split(s2.first,k);
    //s1=split(t,k-1);
    //s2=split(s1.second,k);
    t=merge(s1.first,s2.second);

    return update(t);
    return update((t=merge(s1.first,s2.second)));
  }
  
  node_t *find(node_t *t, int k){
    int c = count(t->lch);
    if(k < c) return find(t->lch, k);
    if(k == c) return t;
    return find(t->rch, k - c - 1);
  }
  
  void insert(int k,int val){ root=insert(root,k,val,rand()); }
  void erase(int k){ root=erase(root,k); }
  node_t *find(int k){ return find(root,k); }
  
  void add(int k,int v){
    node_t *a=find(k);
    int tmp=a->val;
    erase(k);
    insert(k,tmp+v);
  }
  
  int rangeMinimumQuery(int l,int r,node_t *t){
    int sz=count(t);
    if(r<=0 || sz<=l)return INF;
    if(l<=0 && sz<=r)return mini(t);
    
    int cnt=count(t->lch),res=INF;
    int resl=rangeMinimumQuery(l,r,t->lch);
    int resr=rangeMinimumQuery(l-cnt-1,r-cnt-1,t->rch);
    res=min(resl,resr);
    if(l<=cnt && cnt<r)res=min(res,t->val);
    return res;
  }
  
  int rangeSumQuery(int l,int r,node_t *t){
    int sz=count(t);
    if(r<=0 || sz<=l)return 0;
    if(l<=0 && sz<=r)return sum(t);
    
    int cnt=count(t->lch),res=0;
    res+=rangeSumQuery(l,r,t->lch);
    res+=rangeSumQuery(l-cnt-1,r-cnt-1,t->rch);
    if(l<=cnt && cnt<r)res+=t->val;
    return res;
  }
  
  int rangeMinimumQuery(int l,int r){
    return rangeMinimumQuery(l,r,root);
  }
  
  int rangeSumQuery(int l,int r){
    return rangeSumQuery(l,r,root);
  }
};

int main(void){
  
  srand(time(NULL));
  
  int n,q;
  Treap t;
  
  cin >> n >> q;
  for(int i=0;i<=n;i++)t.insert(i,0);
  
  int com,x,y;
  for(int i=0;i<q;i++){
    cin >> com >> x >> y;

    x--;
    if(com==0)t.add(x,y);
    else if(com==1)cout << t.rangeSumQuery(x,y) << endl;
  }
  
  return 0;
}