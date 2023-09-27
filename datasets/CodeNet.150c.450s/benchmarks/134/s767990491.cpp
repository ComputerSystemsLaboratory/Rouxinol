#include <cstdio>
#include <algorithm>
using namespace std;

struct Node
{
    int par,left,right;
};

Node G[26];

void dfs(int n, int i)
{
    if(i == 0)printf(" %d", n);
    if(G[n].left != -1){
        dfs(G[n].left, i);    
    }
    if(i == 1)printf(" %d", n);
    if(G[n].right != -1){
        dfs(G[n].right, i);
    }
    if(i == 2)printf(" %d", n);
}

int main()
{
    int n,id,left,right;
    scanf("%d", &n);
    
    for(int i = 0; i < n; ++i){
        G[i].par = -1;
    }
    
    for(int i = 0; i < n; ++i){
        scanf("%d%d%d", &id, &left, &right);
        G[id].left = left;
        G[id].right = right;
        if(left != -1)G[left].par = id;
        if(right != -1)G[right].par = id;
    }
    
    int root;
    for(int i = 0; i < n; ++i){
        if(G[i].par == -1){
            root = i;
            break;
        }
    }
    puts("Preorder");
    dfs(root, 0);
    puts("");
    
    puts("Inorder");
    dfs(root, 1);
    puts("");
    
    puts("Postorder");
    dfs(root, 2);
    puts("");
}