#include <cstdio>

typedef struct tree_{
    int parent;
    int left;
    int right;
}tree;

void preorder(tree *node, int id){
    printf(" %d",id);
    if(node[id].left!=-1){
        preorder(node, node[id].left);
    }
    if(node[id].right!=-1){
        preorder(node, node[id].right);
    }
}

void inorder(tree *node, int id){
    if(node[id].left!=-1){
        inorder(node, node[id].left);
    }
    printf(" %d",id);
    if(node[id].right!=-1){
        inorder(node, node[id].right);
    }
}

void postorder(tree *node, int id){
    if(node[id].left!=-1){
        postorder(node, node[id].left);
    }
    if(node[id].right!=-1){
        postorder(node, node[id].right);
    }
    printf(" %d",id);
}

int main(){
    int i, n, id, l, r;

    scanf("%d",&n);

    tree node_[n+1];
    tree *node = node_+1;

    for(i=0;i<n;i++)node[i].parent = -1;

    for(i=0;i<n;i++){
        scanf("%d %d %d",&id,&l,&r);
        node[id].left = l;
        node[id].right = r;
        node[l].parent = id;
        node[r].parent = id;
    }

    for(i=0;i<n;i++)if(node[i].parent==-1)break;
    if(i==n)return -1;
    int root = i;

    printf("Preorder\n");
    preorder(node, root);
    printf("\n");

    printf("Inorder\n");
    inorder(node, root);
    printf("\n");

    printf("Postorder\n");
    postorder(node, root);
    printf("\n");

    return 0;
}

