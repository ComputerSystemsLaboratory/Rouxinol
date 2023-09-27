#include <stdio.h>

struct Node{
    int num;
    Node* parent;
    Node* left;
    Node* right;
};

Node node[25];

int get_root(int n){
    struct Node *nd = &(node[0]);
    while(nd){
        if(nd->parent){
            nd = nd->parent;
        }else{
            return nd->num;
        }
    }
    return -1;
}

void pre_order(int n){
    struct Node *l = node[n].left;
    struct Node *r = node[n].right;

    printf(" %d", node[n].num);
    if(l)
        pre_order(l->num);
    if(r)
        pre_order(r->num);
}

void in_order(int n){
    struct Node *l = node[n].left;
    struct Node *r = node[n].right;

    if(l)
        in_order(l->num);
    printf(" %d", node[n].num);
    if(r)
        in_order(r->num);
}

void post_order(int n){
    struct Node *l = node[n].left;
    struct Node *r = node[n].right;

    if(l)
        post_order(l->num);
    if(r)
        post_order(r->num);
    printf(" %d", node[n].num);
}

void output(int n){
    int root_num = get_root(n);
    printf("Preorder\n");
    pre_order(root_num);
    printf("\n");

    printf("Inorder\n");
    in_order(root_num);
    printf("\n");

    printf("Postorder\n");
    post_order(root_num);
    printf("\n");
}


int main(void){
    int n;
    scanf("%d", &n);

    for(int i; i < n; i++){
        node[i].parent = NULL;
        node[i].left = NULL;
        node[i].right = NULL;
    }

    for(int i = 0; i < n; i++){
        int num, a, b;
        scanf("%d %d %d", &num, &a, &b);
        node[num].num = num;

        if(a != -1){
            node[num].left = &(node[a]);
            node[a].parent = &(node[num]);
        }
        if(b != -1){
            node[num].right = &(node[b]);
            node[b].parent = &(node[num]);
        }
    }

    output(n);
}

