#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
using vll=vector<ll>;
using vi=vector<int>;
using vb=vector<bool>;
using pii=pair<int,int>;

template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}

//pow(llpow,modpow)
template<class T> ll llpow(ll x,T n){ll ans=1;if(x==0)ans=0;while(n){if(n&1)ans*=x;x*=x;n>>=1;}return ans;}
long long modpow(long long a, long long n, long long mod) {long long res = 1;while (n > 0) {if (n & 1) res = res * a % mod;a = a * a % mod;n >>= 1;}return res;}
//最大公約数
template<class T> inline T gcd(T x,T y){if(y==0)return x; else {return gcd(y,x%y);}}
//最小公倍数
template<class T> inline T lcm(T x,T y){return x/gcd(x,y)*y;}
//逆元
long long modinv(long long a, long long m) {long long b = m, u = 1, v = 0;while (b) {long long t = a / b;a -= t * b; swap(a, b);u -= t * v; swap(u, v);}u %= m;if (u < 0) u += m;return u;}

#define rep(i, begin_i, end_i) for (ll i = (ll)begin_i; i < (ll)end_i; i++)

long long INF = 1LL<<60;

typedef struct node {
    ll key;
    struct node *left;
    struct node *right;
    struct node *p;
}Node;

typedef struct BinarySearchTree{
    ll size;
    Node* root;
}Bst;

Bst* Bstinit(){;
    Bst *bst=(Bst *)malloc(sizeof(Bst));
    bst->size=0;
    bst->root=NULL;
    return bst;
}

Node* generate(ll key){
    Node *node=(Node *)malloc(sizeof(Node));
    node->key=key;
    node->left=NULL;
    node->right=NULL;
    node->p=NULL;
    return node;
}

Node* insert(Bst *bst,ll key){
    Node *node=generate(key);
    Node *cmp=bst->root;;
    while(cmp!=NULL){
        ll cmpkey=cmp->key;
        if(cmpkey<=key){
            if(cmp->right==NULL){
                cmp->right=node;
                node->p=cmp;
                break;
            }
            else cmp=cmp->right;
        }
        else {
            if(cmp->left==NULL){
                cmp->left=node;
                node->p=cmp;
                break;
            }
            else cmp=cmp->left;
        }
    }
    if(bst->size==0)bst->root=node;
    bst->size++;
    return node;
}

Node *find(Bst *bst,ll key){
    Node *n=bst->root;
    while(n!=NULL){
        if(n->key<key){
            n=n->right;
        }
        else if(n->key>key){
            n=n->left;
        }
        else{
            return n;
        }
    }
    return NULL;
}
void inorder(Node *n){
    if(n->left!=NULL)inorder(n->left);
    cout<<" "<<n->key;
    if(n->right!=NULL)inorder(n->right);
}

void preorder(Node *n){
    cout<<" "<<n->key;
    if(n->left!=NULL)preorder(n->left);
    if(n->right!=NULL)preorder(n->right);
}

void print(Node* root){
    if(root==NULL)return;
    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
}

int main( ){
    int m;
    cin>>m;
    Bst *bst=Bstinit();
    rep(i,0,m){;
        string cmd;
        cin>>cmd;
        if(cmd=="insert"){
            ll key;
            cin>>key;
            insert(bst,key);
        }
        else if(cmd=="print"){
            print(bst->root);
        }
        else if(cmd=="find"){
            ll key;
            cin>>key;
            if(find(bst,key)!=NULL){
                cout<<"yes"<<endl;
            }
            else {
                cout<<"no"<<endl;
            }
        }
    }
    return 0;
}



