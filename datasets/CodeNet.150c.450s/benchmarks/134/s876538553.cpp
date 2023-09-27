#include<cstdio>
#include<vector>
enum order{
    preorder=0,
    inorder=1,
    postorder=2,
};
class BinaryTree{
private:
    int numVertex;
    int *parent, *left, *right;
public:
    BinaryTree(int v);
    ~BinaryTree();
    void init();
    void dfs(int v,order flag);
    std::vector<int> root();
};
BinaryTree::BinaryTree(int v){
    numVertex=v;
    parent = new int[v];
    left = new int[v];
    right = new int[v];
    for(int i=0;i<v;i++){
        parent[i]=-1;
        left[i]=-1;
        right[i]=-1;
    }
}
BinaryTree::~BinaryTree(){
    //delete[] parent;
    //delete[] left;
    //delete[] right;
}
void BinaryTree::init(){
    for(int i=0;i<numVertex;i++){
        int id,l,r;
        scanf("%d%d%d",&id,&l,&r);
        parent[l]=id;
        parent[r]=id;
        left[id]=l;
        right[id]=r;
    }
}
std::vector<int> BinaryTree::root(){
    std::vector<int> vec;
    for(int i=0;i<numVertex;i++){
        if(parent[i]==-1)vec.push_back(i);
    }
    return vec;
}
void BinaryTree::dfs(int v,order flag){
    if(v>=0){
        if(flag==preorder)printf(" %d",v);
        dfs(left[v],flag);
        if(flag==inorder)printf(" %d",v);
        dfs(right[v],flag);
        if(flag==postorder)printf(" %d",v);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    BinaryTree t(n);
    t.init();
    std::vector<int> v=t.root();
    printf("Preorder\n");
    t.dfs(v[0],preorder);
    printf("\nInorder\n");
    t.dfs(v[0],inorder);
    printf("\nPostorder\n");
    t.dfs(v[0],postorder);
    printf("\n");
    return 0;
}
