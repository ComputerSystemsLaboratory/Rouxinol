#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
//#define ll long long
template<class T> bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T> bool chmin(T &a, const T &b) { if (a>b) { a=b; return 1; } return 0; }
#define rep(i, n) REP(i, 0, n)
#define rep_rev(i, n) for (int (i) = (int)(n) - 1 ; (i) >= 0 ; --(i))
#define ALL(v) v.begin(), v.end()
#define MSG(a) cout << #a << " " << a << endl;
#define REP(i, x, n) for(int i = x; i < n; i++)
#define all(x) (x).begin(),(x).end()
ll t1,t2,t3;
const ll mod = 1000000007;
const int INF = 1e9;
const ll INFLONG = 1e18;


struct Node{
    ll key;
    struct Node *left, *right, *parent;
};
Node *root,*NIL;

void preorder(Node * node){
  if(node == NIL){
    return;
  }
  cout << " " << node->key;
  preorder(node->left);
  preorder(node->right);

}
void inorder(Node * node){
  if(node == NIL){
    return;
  }
  inorder(node->left);
  cout << " " << node->key;
  inorder(node->right);
}
void print(){
  inorder(root);
  cout << endl;
  preorder(root);
  cout << endl;
}

bool find(Node* node,ll k){
  if(node == NIL){
    return false;
  }
  if(node->key == k){
    return true;
  }else if(node->key > k){
    return find(node->left,k);
  }else{
    return find(node->right,k);
  }
}

void insert(ll k){
  Node *y = NIL;
  Node *x = root;
  Node *z;

  z = (Node *)malloc(sizeof(Node));
  z->key = k;
  z->left = NIL;
  z->right = NIL;

  while(x != NIL){
    y = x;
    if(z->key < x->key){
      x = x->left;
    }else{
      x = x->right;
    }
  }
  z->parent = y;
  if(y == NIL){
    root = z;
  }else{
    if(z->key < y->key){
      y->left = z;
    }else{
      y->right = z;
    }
  }
}
int main(){
  ll n;
  cin >> n;
  string str;
  rep(i,n){
    cin >> str;
    if(str == "insert") {
      cin >> t1;
      insert(t1);
    }else if(str == "find"){
      cin >> t1;
      if(find(root,t1)){
        cout << "yes" << endl;
      }else{
        cout << "no" << endl;
      }
    }else{
      print();
    }
  }
}
