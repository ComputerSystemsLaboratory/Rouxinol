#include<cstdio>
#include<queue>

using namespace std;

struct node{
    int parent;
    int left;
    int right;
    int sibling;
    int degree;
    int depth;
    int height;
};

node tree[25];

queue<int> anspre,ansin,anspost;

void pre(int id){
    anspre.push(id);
    if(tree[id].left >= 0)
        pre(tree[id].left);
    if(tree[id].right >= 0)
        pre(tree[id].right);
}

void in(int id){
    if(tree[id].left >= 0)
        in(tree[id].left);
    ansin.push(id);
    if(tree[id].right >= 0)
        in(tree[id].right);
    
}

void post(int id){
    if(tree[id].left >= 0)
        post(tree[id].left);
    if(tree[id].right >= 0)
        post(tree[id].right);
    anspost.push(id);
}


int main(void){
    int n;
    scanf("%d",&n);

    for(int i = 0;i < n;i++){
        tree[i].sibling = -1;
        tree[i].degree = 0;
        tree[i].parent = -1;
    }
    for(int i = 0;i < n;i++){
        int id,left,right;
        scanf("%d%d%d",&id,&left,&right);
        tree[id].left = left;
        tree[id].right = right;
        if(left >= 0){
            tree[left].parent = id;
            tree[id].degree++;
        }
        if(right >= 0){
            tree[right].parent = id;
            tree[id].degree++;
        }
        if(left >= 0 && right >= 0){
            tree[left].sibling = right;tree[right].sibling = left;
        }
    }
    int root;
    for(int i = 0;i < n;i++)
        if(tree[i].parent == -1){
            root =  i;
            break;
        }

    pre(root);
    in(root);
    post(root);
    printf("Preorder\n ");
    for(int i = 0;i < n;i++){
        printf("%d",anspre.front());
        anspre.pop();
        if(i < n - 1)
            printf(" ");
    }
    printf("\nInorder\n ");
    for(int i = 0;i < n;i++){
        printf("%d",ansin.front());
        ansin.pop();
        if(i < n - 1)
            printf(" ");
    }
    printf("\nPostorder\n ");
    for(int i = 0;i < n;i++){
        printf("%d",anspost.front());
        anspost.pop();
        if(i < n - 1)
            printf(" ");
    }
    printf("\n");
    
    


    return 0;
}