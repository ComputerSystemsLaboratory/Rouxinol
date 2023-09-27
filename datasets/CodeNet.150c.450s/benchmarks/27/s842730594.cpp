#include<bits/stdc++.h>
using namespace std;

class node{
    int key;
    node *left;
    node *right;

    public:
    node();

    node(int);
    node* Insert(node *,int);
    void inorderprint(node *);
    void preorderprint(node *);
};

vector<int> print;

node::node() : key(0),left(NULL),right(NULL){}

node::node(int v){
    key = v;
    left = right = NULL;
}

node* node::Insert(node *root,int value){
    if(!root){
        return new node(value);
    }
    if(value>root->key){
        root->right = Insert(root->right,value);
    }else{
        root->left = Insert(root->left,value);
    }

    return root;
}

void node::inorderprint(node *root){
    if(!root) return;
    inorderprint(root->left);
    print.push_back(root->key);
    inorderprint(root->right);
}
void node::preorderprint(node *root){
    if(!root) return;
    print.push_back(root->key);
    preorderprint(root->left);
    preorderprint(root->right);
}
int main(){
    int n;cin >> n;
    node t,*root = NULL;
    for(int i=0;i<n;i++){
        string s;cin >> s;
        if(i==0){
            int value;cin >> value;
            root = t.Insert(root,value);
            continue;
        }
        if(s[0]=='p'){
            print.clear();
            t.inorderprint(root);
            for(int pr=0;pr<print.size();pr++){
                cout << " ";
                cout << print[pr];
                if(pr==print.size()-1) cout << endl;
            }
            print.clear();
            t.preorderprint(root);
            for(int pr=0;pr<print.size();pr++){
                cout << " ";
                cout << print[pr];
                if(pr==print.size()-1) cout << endl;
            }
        }else{
            int value;cin >> value;
            t.Insert(root,value);
        }
    }
    
    return 0;
}
