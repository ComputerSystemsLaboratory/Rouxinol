#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

struct node{
    int key;
    int parent, left, right;
    node(){ parent=-1; left=-1; right=-1; }
};

vector<node> tree;
int root=-1;

void print_pre(int id)
{
    if(id==-1){ return; }
    printf(" %d", tree[id].key);
    print_pre(tree[id].left);
    print_pre(tree[id].right);
}

void print_in(int id)
{
    if(id==-1){ return; }
    print_in(tree[id].left);
    printf(" %d", tree[id].key);
    print_in(tree[id].right);
}

void insert(int z)
{
    int y=-1;
    int x=root;
    while(x!=-1){
        y=x;
        if(tree[z].key<tree[x].key){
            x=tree[x].left;
        } else{
            x=tree[x].right;
        }
    }
    tree[z].parent=y;
    if(y==-1){
        root=z;
    } else if(tree[z].key<tree[y].key){
        tree[y].left=z;
    } else{
        tree[y].right=z;
    }
}

int main()
{
    int m;
    scanf("%d", &m);
    tree=vector<node>(m);
    int n=0;
    for(int i=0; i<m; i++){
        char buf[8]; scanf("%s", buf);
        if(*buf=='i'){
            int k; scanf("%d", &k);
            tree[n].key=k;
            insert(n);
            n++;
        } else{
            print_in(root);
            printf("\n");
            print_pre(root);
            printf("\n");
        }
    }
    return 0;
}