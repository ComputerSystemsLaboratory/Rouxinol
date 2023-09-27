#include<cstdio>
#include<iostream>
#include<algorithm>
#include<utility>
#include<vector>
#include<queue>
#include<functional>
#include<map>
#include<set>
#include<cstring>
#include<string>
#include<stack>
#include<stdlib.h>
#include<math.h>
using namespace std;
//#define int long long
typedef pair<int, int> pii;
typedef pair<int, char> pic;
typedef priority_queue<pii, vector<pii>, greater<pii> > RPQ;
#define mk make_pair
#define INF (1 << 30)
#define INFL (1ll << 60ll)
#define mod 1000000007
typedef struct node * nodept;

struct node{
    int key = -1;
    node *par;
    node *right;
    node *left;
};

nodept nil, root;

void init(){
    nil = (nodept)malloc(sizeof(node));
    nil->par = nil;
    nil->left = nil;
    nil->right = nil;
    
    root = nil;
}

void insert(int key){
    nodept z;
    z = (nodept)malloc(sizeof(node));
    z->key = key;
    z->par = nil;
    z->right = nil;
    z->left = nil;
    
    nodept y = nil;
    nodept x = root;

    while(x != nil){
        y = x;
        if(z->key < x->key){
            x = x->left;
        }
        else {
            x = x->right;
        }
    }

    z->par = y;

    if(y == nil){
        root = z;
    }
    else if(z->key < y->key){
        y->left = z;
    }
    else {
        y->right = z;
    }
}

void indfs(nodept v){
    if(v == nil)return;
    if(v->left != nil){
        indfs(v->left);
    }
    printf(" %d", v->key);
    if(v->right != nil){
        indfs(v->right);
    }
}

void predfs(nodept v){
    if(v == nil)return;
    printf(" %d", v->key);
    if(v->left != nil){
        predfs(v->left);
    }
    if(v->right != nil){
        predfs(v->right);
    }
}

signed main(){
    int M;
    cin >> M;
    init();
    for(int i = 0; i < M; i++){
        char query[10];
        cin >> query;
        if(query[0] == 'i'){
            int key;
            cin >> key;
            insert(key);
        }
        else {
            indfs(root);
            printf("\n");
            predfs(root);
            printf("\n");
        }
    }


    return 0;
}

/*



*/
