#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
constexpr int di[] = { 0, 1, 0, -1 }, dj[] = { 1, 0, -1, 0 };
#define rep(i, n) for (int i = 0; i < n; i++)
#define repr(i, n) for (int i = n; i >= 0; i--)
#define SORT(v) sort((v).begin(), (v).end())
#define SORTR(v) sort((v).rbegin(), (v).rend())
#define all(v) (v).begin(), (v).end()
#define MAX 10000
#define vmax 10000
#define sentinel 2000000000
constexpr long long int inf = 1000000000000;
constexpr long long int rinf = -(INT64_MAX);
//cout<<fixed<<setprecision(20);cin.tie(0);ios::sync_with_stdio(false);

struct node{
    int key;
    node *parent,*left,*right;
};

node *root,*NIL;

void insert(int k){
    node *y=NIL;
    node *x=root;
    node *z;

    z=(node*)malloc(sizeof(node));
    z->key=k;
    z->left=NIL;
    z->right=NIL;

    while(x!=NIL){
        y=x;
        if(z->key<x->key){
            x=x->left;
        }else{
            x=x->right;
        }
    }

    z->parent=y;

    if(y==NIL){
        root=z;
    }else{
        if(z->key<y->key){
            y->left=z;
        }else{
            y->right=z;
        }
    }
}

node *find(node *u,int k){
    while(u!=NIL&&u->key!=k){
        if(k<u->key){
            u=u->left;
        }else{
            u=u->right;
        }
    }
    return u;

}

void preorder(node *u){
    if(u==NIL) return;
    printf(" %d",u->key);
    preorder(u->left);
    preorder(u->right);
}

void inorder(node *u){
    if(u==NIL) return;
    inorder(u->left);
    printf(" %d",u->key);
    inorder(u->right);
}

int main() {
    int n,x;
    string s;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        cin>>s;
        if(s=="insert"){
            scanf("%d",&x);
            insert(x);
        }else if(s=="find"){
            scanf("%d",&x);
            node *t=find(root,x);
            if(t!=NIL){
                printf("yes\n");
            }else{
                printf("no\n");
            }
        }else if(s=="print"){
            inorder(root);
            printf("\n");
            preorder(root);
            printf("\n");
        }
    }
    return 0;
}




