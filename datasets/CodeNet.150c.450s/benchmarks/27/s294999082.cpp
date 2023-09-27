#include<iostream>
#include<string>
using namespace std;

struct Node{
        int key;
        Node *parent, *left, *right;
};

static Node *root;

void insert(int v, Node *t){
        if(!root) {
                Node *a = new Node();
                a->key = v;
                a->parent = NULL;
                a->left = NULL;
                a->right = NULL;
                root = a;
        }else if(v<=t->key){
                if(!t->left) {
                        Node *a = new Node();
                        a->key = v;
                        a->parent = t;
                        a->left = NULL;
                        a->right = NULL;
                        t->left = a;
                }else{
                        insert(v, t->left);
                }
        }else{
                if(!t->right) {
                        Node *a = new Node();
                        a->key = v;
                        a->parent = t;
                        a->left = NULL;
                        a->right = NULL;
                        t->right = a;
                }else{
                        insert(v, t->right);
                }
        }
}
void print_preorder(Node *i){
        if(!i) return;
        cout<<" "<<i->key;
        print_preorder(i->left);
        print_preorder(i->right);
}

void print_inorder(Node *i){
        if(!i) return;
        print_inorder(i->left);
        cout<<" "<<i->key;
        print_inorder(i->right);
}

int main(){
        int n,v;
        string s;
        cin>>n;
        root = NULL;
        for(int i=0;i<n;i++){
                cin>>s;
                if(s=="insert") {
                        cin>>v;
                        insert(v,root);
                }else if(s=="print"){
                        print_inorder(root);
                        cout<<endl;
                        print_preorder(root);
                        cout<<endl;
                }
        }
        return 0;
}

