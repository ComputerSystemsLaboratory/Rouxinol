#include <bits/stdc++.h>
#include <tuple>

#define REP(i, n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()
const int INF = 1e9;

using namespace std;

class node{
public:
    node(){
        key = 0;
        parent = NULL;
        left = NULL;
        right = NULL;
    }

    node(int i, node* p, node* l, node* r){
        key = i;
        parent = p;
        left = l;
        right = r;
    }

    int key;
    node* parent;
    node* left;
    node* right;
};

node* root = NULL;

void pre_search(node* v){
    cout << " " << v->key;
    if(v->left != NULL)
        pre_search(v->left);
    if(v->right != NULL)
        pre_search(v->right);
    return;
}

void in_search(node* v){
    if(v->left != NULL)
        in_search(v->left);
    cout << " " << v->key;
    if(v->right != NULL)
        in_search(v->right);
    return;
}

void search(int key, node* v){
    if(v == NULL){
        cout << "no" << endl;
        return;
    }
    if(v->key == key){
        cout << "yes" << endl;
        return;
    }
    if(v->key > key){
        search(key, v->left);
    } else
        search(key, v->right);
    return;
}

void insert(int key){
    if(root == NULL){
        root = new node(key, NULL, NULL, NULL);
        return;
    }
    node* y = NULL;
    node* x = root;
    while(x != NULL){
        y = x;
        if(key < x->key)
            x = x->left;
        else
            x = x->right;
    }
    node* add = new node(key, y, NULL, NULL);
    if(key < y->key)
        y->left = add;
    else
        y->right = add;
    return;
}

int main() {
    int k;
    string order;
    int num;
    cin >> k;
    REP(i, k){
        cin >> order;
        if(order == "insert"){
            cin >> num;
            insert(num);
        } else if (order == "print"){
            in_search(root);
            cout << endl;
            pre_search(root);
            cout << endl;
        } else if (order == "find"){
            cin >> num;
            search(num, root);
        }
    }
    return 0;
}