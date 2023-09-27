#include<cstdio>
#include<queue>
#define NIL (-1)

using namespace std;

struct node{
    int parent;
    int left;
    int right;
    int key;
};

node tree[500001];
int treesize;
int root = NIL;

void pre(int id){
    if(id == -1)
        return;
    printf(" %d",tree[id].key);
    if(tree[id].left >= 0)
        pre(tree[id].left);
    if(tree[id].right >= 0)
        pre(tree[id].right);
}

void in(int id){
    if(id == -1)
        return;
    if(tree[id].left >= 0)
        in(tree[id].left);
    printf(" %d",tree[id].key);
    if(tree[id].right >= 0)
        in(tree[id].right);
    
}


void insert(int key){
    int y = NIL;
    int x = root;
    while(x != NIL){
        y = x;
        if(key < tree[x].key)
            x = tree[x].left;
        else
            x = tree[x].right;
    }
    tree[treesize].parent = y;

    if(y == NIL)
        root = treesize;
    else if(key < tree[y].key)
        tree[y].left = treesize;
    else
        tree[y].right = treesize;
    tree[treesize].left = NIL;tree[treesize].right = NIL;tree[treesize].key = key;

    treesize++;
        
}


int main(void){
    int n;
    scanf("%d",&n);

    for(int i = 0;i < n;i++){
        char s[20];
        scanf("%s",s);

        if(s[0] == 'i'){
            int key;
            scanf("%d",&key);
            insert(key);
        }else{
            in(root);
            printf("\n");
            pre(root);
            printf("\n");
        }
    }

    return 0;
}