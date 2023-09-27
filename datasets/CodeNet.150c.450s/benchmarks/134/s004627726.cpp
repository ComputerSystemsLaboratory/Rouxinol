#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

struct node{
    int parent, left, right;
    node(){ parent=-1; }
};

vector<node> tree;

void print_pre(int id)
{
    printf(" %d", id);
    if(tree[id].left!=-1){
        print_pre(tree[id].left);
    }
    if(tree[id].right!=-1){
        print_pre(tree[id].right);
    }
}

void print_in(int id)
{
    if(tree[id].left!=-1){
        print_in(tree[id].left);
    }
    printf(" %d", id);
    if(tree[id].right!=-1){
        print_in(tree[id].right);
    }
}

void print_post(int id)
{
    if(tree[id].left!=-1){
        print_post(tree[id].left);
    }
    if(tree[id].right!=-1){
        print_post(tree[id].right);
    }
    printf(" %d", id);
}

int main()
{
    int n;
    scanf("%d", &n);
    tree=vector<node>(n);
    for(int i=0; i<n; i++){
        int id; scanf("%d", &id);
        auto it=&tree[id];
        scanf("%d %d", &it->left, &it->right);
        if(it->left!=-1){
            tree[it->left].parent=id;
        }
        if(it->right!=-1){
            tree[it->right].parent=id;
        }
    }

    int root_id;
    for(auto it=tree.begin(); it!=tree.end(); it++){
        if(it->parent==-1){
            root_id=distance(tree.begin(), it);
            break;
        }
    }

    printf("Preorder\n");
    print_pre(root_id);
    printf("\n");
    printf("Inorder\n");
    print_in(root_id);
    printf("\n");
    printf("Postorder\n");
    print_post(root_id);
    printf("\n");

    return 0;
}