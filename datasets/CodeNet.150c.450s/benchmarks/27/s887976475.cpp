#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <list>
#include <map>
#include <set>
#include <string>
#include <cstring>
#include <sstream>
#include <cmath>
#include <functional>
#include <fstream>
#include <cstdlib>
typedef long long ll;
const int MOD = 1e9+7;


#define REP(i, N) for (int i = 0; i < (N); i++)
#define REPP(i, a, b) for (int i = (a); i < (b); i++)
#define ALL(v) (v).begin(), (v).end()
#define RALL(v) (v).rbegin(), (v).rend()
#define VSORT(c) sort((c).begin(),(c).end())
#define SZ(x) ((int)(x).size())
//vvintを作る　マクロで　 #define vvint(N,M) vector<vector<int>>

using namespace std;

// struct tr{
//     int key;
//     int parent;
//     int left;
//     int right;
// };
struct tree{
    int key;
    tree *parent, *left, *right;
};

void assignment(tree &a, tree b){
    a.key = b.key;
    a.parent = b.parent;
    a.left = b.left;
    a.right = b.right;
}

tree *root,*NIL;

void insert(int k){
    tree *y = NIL;
    tree *x = root;
    tree *z;
    z = (tree *)malloc(sizeof(tree));
    z->key = k;
    z-> left = NIL;
    z-> right = NIL;
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
    }else if(z->key < y->key){
        y->left = z;
    }else{
        y->right = z;
    }
}
// void ist(vector<tree> &T, tree z){
//     tree y = {-1,-1,-1,-1};
//     tree x;
//     assignment(x, root);
//     while(x.key != -1){
//         assignment(y,x);
//         if(z.key < x.key){
//             x = T[x.left];
//         }else{
//             x = T[x.right];
//         }
//     }
    
//     z.parent = y.key;
//     if(y.key == -1){
//         assignment(root, z);
//     }else if(z.key < y.key){    
//         y.left = z.key;
//     }else{
//         y.right = z.key;
//     }
// }
void preorder(tree *u){
    if (u == NIL) return;
    cout << " " << u->key;
    preorder(u->left);
    preorder(u->right);
}
void inorder(tree *u){
    if (u == NIL) return;
    inorder(u->left);
    cout << " " << u->key;
    inorder(u->right);
}

int main(){
    
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    
    for(int i = 0; i < n;i++){
        string order;
        cin >> order;
        if(order == "insert"){
            int num;
            cin >> num;
            insert(num);
        }else{
            inorder(root);
            cout << endl;
            preorder(root);
            cout << endl;
        }
    }

    

    return 0;
}
