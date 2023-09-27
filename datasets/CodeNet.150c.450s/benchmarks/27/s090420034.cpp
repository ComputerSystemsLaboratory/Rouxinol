#include <bits/stdc++.h>
#define int long long
#define rep(i,n) for(int i=0;i<n;i++)
#define Rep(i,a,b) for(int i=a;i<b;i++)
#define REP(i,a,b) for(int i=a;i<=b;i++)
#define rev(i,n) for(int i=n-1;i>=0;i--)
#define vi vector<int>
#define pb push_back
#define pi pair<int,int>
#define vp vector<pair<int,int> >
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;

struct Node{
    int k;
    Node *p,*l,*r;
};

Node *root;

void insert(int k){
    Node *y=NULL;
    Node *x=root;
    Node *z;
    z=(Node*)malloc(sizeof(Node));
    z->k=k;
    z->l=NULL;
    z->r=NULL;
    while(x!=NULL){
        y=x;
        if(z->k<x->k){
            x=x->l;
        }
        else{
            x=x->r;
        }
    }
    z->p=y;
    if(y==NULL){
        root=z;
    }
    else if(z->k<y->k){
        y->l=z;
    }
    else{
        y->r=z;
    }
}

void inorder(Node* v){
    if(v==NULL)return;
    inorder(v->l);
    cout<<" "<<v->k;
    inorder(v->r);
}

void preorder(Node* v){
    if(v==NULL)return;
    cout<<" "<<v->k;
    preorder(v->l);
    preorder(v->r);
}

signed main(){
    int n;
    cin>>n;
   rep(i,n){
       string s;
       cin>>s;
       if(s=="insert"){
           int k;
           cin>>k;
           insert(k);
       }
       else{
           inorder(root);
           cout<<endl;
           preorder(root);
           cout<<endl;
       }
   }
    return 0;
}
