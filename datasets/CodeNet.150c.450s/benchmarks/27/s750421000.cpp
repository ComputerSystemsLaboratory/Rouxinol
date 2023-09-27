#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <utility>
#include <functional>
#include <map>
#include <set>
#include <queue>
#include <list>
#define rep(i,n) for(int i=0;i<(n);i++)
#define REP(i,a,b) for(int i=int(a);i<int(b);++i)
#define crep(i) for(char i='a';i<='z';i++)
#define psortsecond(A,N) sort(A,A+N,[](const pii &a, const pii &b){return a.second<b.second;});
#define psortfirst(A,N) sort(A,A+N,[](const pii &a, const pii &b){return a.first<b.first;});
#define All(x) (x).begin(),(x).end()
int ctoi(const char c){
  if('0' <= c && c <= '9') return (c-'0');
  return -1;
}
using namespace std;
using pii  = pair<int,int>;
long long gcd(long long a, long long b){return (b == 0 ? a : gcd(b, a%b));}
long long lcm(long long a, long long b){return a*b/gcd(a,b);}
typedef long long ll;
#define MOD 1000000007
#define EPS 10e-8


struct Node{
	int key;
    Node *right, *left,*parent;
};

Node *root, *NIL;

void insert(int k){
    Node  *y = NIL;
    Node  *x = root;
    Node  *z;

    z = (Node *)malloc(sizeof(Node));
    z -> key = k;
    z -> left = NIL;
    z -> right = NIL;

    while( x!=NIL ) {
        y = x;
        if(z->key < x->key){
            x = x->left;
        }
        else{
            x = x->right;
        }
    }
    z->parent =y;
    if(y==NIL){
        root = z;
    }
    else{
        if (z->key < y->key){
            y->left = z;
        }
        else{
            y->right = z;
        }
    }
}

void inorder(Node *u){
    if(u==NIL){
        return;
    }
    inorder(u->left);
    cout <<" "<< u->key ;
    inorder(u->right);
}

void preorder(Node *u){
    if(u==NIL){
        return;
    }
    cout <<" "<< u->key ;
    preorder(u->left);
    preorder(u->right);
}

void pastorder(Node *u){
    if(u==NIL){
        return;
    }
    pastorder(u->left);
    pastorder(u->right);
    cout <<" "<< u->key ;
}

int main(){
	int N,X;
    string S;
    cin >> N;
    rep(i,N){
        cin >> S;
        if(S[0]=='i'){
            cin >> X;
            insert(X);
        }
        if(S[0]=='p'){
            inorder(root);
            cout << endl;
            preorder(root);
            cout << endl;
        }
    }
}

