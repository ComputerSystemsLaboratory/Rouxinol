#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define MAX 100000

struct node{
    // parent　親ノード
    // left 左の子ノード
    // right 右の子ノード
    int parent = -1;
    int left = -1;
    int right = -1;
};

vector<node> tree(MAX);

void preorder(int id, int depth){
    cout << " " <<  id;
    if(tree.at(id).left != -1){
        preorder(tree.at(id).left, depth + 1);
    }
    if(tree.at(id).right != -1){
        preorder(tree.at(id).right, depth + 1);
    }
}

void inorder(int id, int depth){
    if(tree.at(id).left != -1){
        inorder(tree.at(id).left, depth + 1);
    }
    cout << " " << id;
    if(tree.at(id).right != -1){
        inorder(tree.at(id).right, depth + 1);
    }
}

void postorder(int id, int depth){
    if(tree.at(id).left != -1){
        postorder(tree.at(id).left, depth + 1);
    }
    if(tree.at(id).right != -1){
        postorder(tree.at(id).right, depth + 1);
    }
    cout << " " << id;
}

int main(){
    int n; cin >> n;

    rep(i, n){
        int id;
        int left_child_index;
        int right_child_index;
        cin >> id >> left_child_index >> right_child_index;
        tree.at(id).left = left_child_index;
        tree.at(id).right = right_child_index;

        if(left_child_index != -1){
            tree.at(left_child_index).parent = id;
        }
        if(right_child_index != -1){
            tree.at(right_child_index).parent = id;
        }
    }

    // ルートノードを探す
    int root_index;
    rep(i, n){
        if(tree.at(i).parent == -1){
            root_index = i;
            break;
        }
    }
    
    int depth = 0;
    // depth first searchによって各ノードの深さを計算
    cout << "Preorder" << endl;
    preorder(root_index, depth);
    cout << endl;

    cout << "Inorder" << endl;
    inorder(root_index, depth);
    cout << endl;

    cout << "Postorder" << endl;
    postorder(root_index, depth);
    cout << endl;

    return 0;
}
