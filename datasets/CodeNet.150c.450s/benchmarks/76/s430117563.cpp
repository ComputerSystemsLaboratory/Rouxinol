#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;
//#define NIL -1


struct Node {
    int key;
    Node *right,*left,*parent;
    };

Node *root,*NIL;

void insert(int k){
    Node *y=NIL;
    Node *x=root;
    Node *z;

    z=(Node *)malloc(sizeof(Node));
    z->key=k;
    z->left=NIL;
    z->right=NIL;

    while(x!=NIL){
        y=x; 
        if(z->key < x->key){
            x=x->left;
        }else{
            x=x->right;
        }
    }
    z->parent=y;
    if(y==NIL){
        root=z;
    }else{
        if(z->key < y->key){
            y->left=z;
        }else{
            y->right=z;
        }
    }
}
/*Node* find(Node *u,int k){
    while(u!=NIL&&k!=u->key){
        if(k<u->key)u=u->left;
        else u=u->right;
    }
    return u;
}*/
bool find(int k){
    Node* x=root;
    int a=0;
    bool judge=false;
    while(x!=NIL){
        if(x->key==k){
            judge=true;
            break;
        }
        else if(x->key<k){
            //if(a==2) break;
           // a=1;
            x=x->right;

        }else if(x->key>k){
            //if(a==1)break;
            x=x->left;
            //a=2;
        }
    }
    return judge;
}

void preorder(Node* u){
    if(u==NIL)return;
    cout<<" "<<u->key;
    preorder(u->left);
    preorder(u->right);
}
void inorder(Node *u){
    if(u==NIL)return;
    inorder(u->left);
    cout<<" "<<u->key;
    inorder(u->right);
}

int main(){
    int m;
    cin>>m;
    string s;
    int k;
    rep(i,m){
        cin>>s;
        if(s=="insert"){
            cin>>k;
            insert(k);
        }else if(s=="find"){
            cin>>k;
            /*Node* t=find(root,k);
            if(t!=NIL)cout<<"yes"<<endl;
            else cout<<"no"<<endl;*/
            if(find(k))cout<<"yes"<<endl;
            else cout<<"no"<<endl;
        }
        else if(s=="print"){
            inorder(root);
            cout<<endl;
            preorder(root);
            cout<<endl;
        }
    
    }
        return 0;
}

    
