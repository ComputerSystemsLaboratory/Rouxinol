#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


struct Node{
    ll key;
    Node *parent,*left,*right;
};


struct Tree{
    Node *nil,*root;

    void init(){
        root=nil;
    }

    void add(ll key){
        Node *newnode;
        Node *p;
        newnode = (Node*)malloc(sizeof(Node));

        newnode->key = key;
        newnode->parent = newnode->right = newnode->left = nil;

        Node *pa = find_parent(key);
        if(pa == nil){
            root = newnode;
        }else if(key < pa->key){
            pa->left = newnode;
        }else{
            pa->right = newnode;
        }
    }

    Node *find_parent(int key){
        Node *pa=nil;
        Node *loc=root;
        while(loc != nil){
            pa = loc;
            if(key < loc->key){
                loc = loc->left;
            }else{
                loc = loc->right;
            }
        }
        return pa;
    }

    Node *find_x(int x){
        Node *p=root;
        bool flg = false;
        while(p != nil){
            if(x == p->key){
                flg = true;
                break;
            }else if(x < p->key){
                p = p->left;
            }else{
                p = p->right;
            }
        }
        return p;
    }

    void del(int k){
        return;
    }


    void print_in(Node *r){
        if(r==nil)return;
        print_in(r->left);
        cout << " " << r->key;
        print_in(r->right);
    }

    void print_pre(Node *r){
        if(r==nil)return;
        cout << " " << r->key;
        print_pre(r->left);
        print_pre(r->right);
    }
    void print(){
        print_in(root);
        cout << endl;
        print_pre(root);
        cout << endl;
    }
};


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    Tree tree;
    tree.init();
    int n;
    cin >> n;
    string s;
    int k;
    for(int i=0;i<n;i++){
        cin >> s;
        if(s=="insert"){
            cin >> k;
            tree.add(k);
        }else if(s=="find"){
            cin >> k;
            Node *p = tree.find_x(k);
            if(p != tree.nil)cout << "yes\n";
            else cout << "no\n";
        }else if(s=="delete"){
            cin >> k;
            tree.del(k);
        }else{
            tree.print();
        }
    }
    return 0;
}

