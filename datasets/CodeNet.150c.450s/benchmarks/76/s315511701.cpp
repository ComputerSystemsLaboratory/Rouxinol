#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<string>
#include<iomanip>
#include<cstdio>

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)   FOR(i,0,n)
#define MOD 1000000007
#define MAXS(x,y) (x = max(x,y))
#define MINS(x,y) (x = min(x,y))

using namespace std;

typedef long long int ll;

const ll INF=(ll)1e18;

vector<int> pre, in, post;

int N;
int pos = 0;


struct Node {
  int key;
  Node *parent, *left, *right;
};

Node *root = NULL;

void insert(int v){
  Node *y = NULL;
  Node *x = root;
  Node *z = (Node *)malloc(sizeof(Node));

  z->key = v;
  z->left = NULL;
  z->right = NULL;

  while(x != NULL){
    y = x;
    if(x->key > z->key){
      x = x->left;
    }else{
      x = x->right;
    }
  }

  z->parent = y;
  if(y == NULL){
    root = z;
  }else if(z->key < y->key){
    y->left = z;
  }else{
    y->right = z;
  }
}

Node *find(int v){
  Node *y = NULL;
  Node *x = root;

  while(x != NULL){
    y = x;
    if(x->key == v){
      return x;
    }else if(x->key > v){
      x = x->left;
    }else{
      x = x->right;
    }
  }
  return x;
}

void printIn(Node *p){
  if(p == NULL)return;
  printIn(p->left);
  cout << " " << p->key;
  printIn(p->right);
}

void printPre(Node *p){
  if(p == NULL)return;
  cout << " " << p->key;
  printPre(p->left);
  printPre(p->right);
}


int main(){
  cin >> N;
  string cmd;


  REP(i,N){
    cin >> cmd;

    if(cmd == "insert"){
      int v;
      cin >> v;
      insert(v);
    }else if(cmd == "find"){
      int v; 
      cin >> v;
      if(find(v) == NULL){
        cout << "no" << endl;
      }else{
        cout << "yes" << endl;
      }
    }else{
      printIn(root);
      cout << endl;
      printPre(root);
      cout << endl;
    }
  }
}

