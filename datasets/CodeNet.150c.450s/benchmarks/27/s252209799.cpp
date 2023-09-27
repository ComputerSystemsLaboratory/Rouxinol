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

  Node *root = NULL;

  REP(i,N){
    cin >> cmd;

    

    if(cmd == "insert"){
      Node *y = NULL;
      Node *x = root;
      Node *z = (Node *)malloc(sizeof(Node));

      int v;
      cin >> v;
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

    }else{
      printIn(root);
      cout << endl;
      printPre(root);
      cout << endl;
    }
    
  }


}

