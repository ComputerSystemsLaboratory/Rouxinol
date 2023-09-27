#include <iostream>

using namespace std;

struct node {
    int id;
    int left;
    int right;
};

void print_node(const node& n){
    cout << " " << n.id;
}

void preorder(node* ns, int r){
    print_node(ns[r]);
    if(ns[r].left >= 0){
        preorder(ns, ns[r].left);
    }
    if(ns[r].right >= 0){
        preorder(ns, ns[r].right);
    }
}

void inorder(node* ns, int r){
    if(ns[r].left >= 0){
        inorder(ns, ns[r].left);
    }
    print_node(ns[r]);
    if(ns[r].right >= 0){
        inorder(ns, ns[r].right);
    }
}

void postorder(node* ns, int r){
    if(ns[r].left >= 0){
        postorder(ns, ns[r].left);
    }
    if(ns[r].right >= 0){
        postorder(ns, ns[r].right);
    }
    print_node(ns[r]);
}

int main(){
    int n;
    cin >> n;
    node ts[n];
    auto fs = new bool[n];
    for(int i = 0; i < n; ++i){
        int a, b, c;
        cin >> a >> b >> c;
        node n = node {a, b, c};
        ts[a] = n;
        if(b >= 0){
            fs[b] = true;
        }
        if(c >= 0){
            fs[c] = true;
        }
    }
    int root = -1;
    for(int i = 0; i < n; ++i){
        if(!fs[i]){
            root = i;
            break;
        }
    }
    cout << "Preorder" << endl;
    preorder(ts, root);
    cout << endl;
    cout << "Inorder" << endl;
    inorder(ts, root);
    cout << endl;
    cout << "Postorder" << endl;
    postorder(ts, root);
    cout << endl;
}