#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
#define pb push_back
#define all(a) (a).begin(),(a).end()
#define UNIQUE(v) v.erase(unique(all(v)),v.end());
#define fill(a,x) memset(a,x,sizeof(a))
#define zero(a) fill(a,0)
#define minus(a) fill(a,-1)
#define dbg(x) cout << #x"=" << x << endl

struct Node{
  Node* l;
  Node* r;
  Node* p;
  int key;
};

vi num_array;
Node *root;
Node *nil;

void ins(int num){
  Node *n_node;
  n_node=(Node*)malloc(sizeof(Node));
  n_node->key=num;
  n_node->l=NULL;
  n_node->r=NULL;
  Node *x=root;
  Node *y=NULL;
  while(x!=NULL){
    y=x;
    if(x->key < num) x=x->r;
    else x=x->l;
  }
  n_node->p=y;
  if(y==NULL) root = n_node;
  else{
    if(num > y->key) y->r = n_node;
    else y->l = n_node;
  }
}

void array_generator(Node *d){
  if(d==NULL) return;
  if(d->r != NULL){
    num_array.pb(d->r->key);
    array_generator(d->r);
  }
  if(d->l != NULL){
    num_array.pb(d->l->key);
    array_generator(d->l);
  }
}

void del(Node *d){
  array_generator(d);
  if(d->p->l->key == d->key) d->p->l = NULL;
  else d->p->r = NULL;
  free(d);
  rep(i,num_array.size()) ins(num_array[i]);
  num_array.clear();
}

Node* find(Node *p,int num){
  if(p==NULL) return nil;
  if(p->key==num) return p;
  if(p->key < num) find(p->r,num);
  else find(p->l,num);
}

void preorder(Node *p){
  if(p==NULL) return;
  cout << " " << p->key;
  preorder(p->l);
  preorder(p->r);
}

void inorder(Node *p){
  if(p==NULL) return;
  inorder(p->l);
  cout << " " << p->key;
  inorder(p->r);
}

int main(){
  int total,num;
  cin >> total;
  string cmd;
  rep(i,total){
    cin >> cmd;
    if(cmd=="insert"){
      cin >> num;
      ins(num);
    }else if(cmd=="print"){
      inorder(root); cout<<endl;
      preorder(root); cout<<endl;
    }else if(cmd=="find"){
      cin >> num;
      Node *t = find(root,num);
      if(t==nil) cout << "no" << endl;
      else cout << "yes" << endl;
    }else if(cmd=="delete"){
      cin>>num;
      del(find(root,num));
    }
  }
}

