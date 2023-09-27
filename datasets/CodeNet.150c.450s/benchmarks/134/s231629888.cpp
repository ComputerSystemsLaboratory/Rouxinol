#include<vector>

class BinaryTree {
private:
    static const int NIL = -1;
    struct Node {
        int parent, sibling, left, right, degree, depth, height;
        Node() { parent = sibling = left = right = depth = height = NIL; degree = 0; }
    };
    std::vector<Node> T;
    int root;
    int N = T.size();
public:
    BinaryTree(int N) :T(N) { root = NIL; }
    void addNode(int p, int l, int r) {
        T[p].left = l;
        T[p].right = r;
        T[l].parent = T[r].parent = p;
    }
    void makeTree() {
        setRoot();
        //setDepth(root, 0);
        //setHeight(root);
        //setSibling();
    }
    int getDegree(int v) {
        return T[v].degree;
    }
    int getDepth(int v) {
        return T[v].depth;
    }
    int getHeight(int v) {
        return T[v].height;
    }
    int getParent(int v) {
        return T[v].parent;
    }
    std::pair<int, int> getChildren(int v) {
        return { T[v].left, T[v].right };
    }
    int getSibling(int v) {
        return T[v].sibling;
    }
    int getType(int v) {
        if (T[v].parent == NIL) return NIL;
        if (T[v].left == NIL && T[v].right == NIL) return 1;
        else return 0;
    }
    std::vector<int> getInOrder(){
        std::vector<int> S;
        setInOrder(S, root);
        return S;
    }
    std::vector<int> getPostOrder(){
        std::vector<int> S;
        setPostOrder(S, root);
        return S;
    }
    std::vector<int> getPreOrder(){
        std::vector<int> S;
        setPreOrder(S, root);
        return S;
    }
private:
    void setRoot() {
        for (int i = 0; i < N; ++i)
            if (T[i].parent == NIL) root = i;
    }
    void setDepth(int v, int d) {
        if (v == NIL) return;
        T[v].depth = d;
        setDepth(T[v].right, d + 1);
        setDepth(T[v].left, d + 1);
    }
    int setHeight(int v) {
        int h1 = 0, h2 = 0;
        if (T[v].left != NIL) h1 = setHeight(T[v].left) + 1;
        if (T[v].right != NIL) h2 = setHeight(T[v].right) + 1;
        return T[v].height = std::max(h1, h2);
    }
    void setSibling() {
        for (int i = 0; i < N; ++i) {
            if (T[i].parent == NIL) continue;
            if (T[T[i].parent].left != i && T[T[i].parent].left != NIL)
                T[i].sibling = T[T[i].parent].left;
            else if (T[T[i].parent].right != i && T[T[i].parent].right != NIL)
                T[i].sibling = T[T[i].parent].right;
            ++T[T[i].parent].degree;
        }
    }
    void setInOrder(std::vector<int> &S, int v){
        if(v == NIL) return;
        setInOrder(S, T[v].left);
        S.push_back(v);
        setInOrder(S, T[v].right);
    }
    void setPostOrder(std::vector<int> &S, int v){
        if(v == NIL) return;
        setPostOrder(S, T[v].left);
        setPostOrder(S, T[v].right);
        S.push_back(v);
    }
    void setPreOrder(std::vector<int> &S, int v){
        if(v == NIL) return;
        S.push_back(v);
        setPreOrder(S, T[v].left);
        setPreOrder(S, T[v].right);
    }
};
#include<iostream>
using namespace std;
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    BinaryTree T(n);
    for(int i=0;i<n;++i){
        int id, left, right;
        cin>>id>>left>>right;
        T.addNode(id,left,right);
    }
    T.makeTree();
    std::vector<int> v = T.getPreOrder();
    cout<<"Preorder"<<endl;
    for(auto a:v) cout<<" "<<a;
    v = T.getInOrder();
    cout<<endl<<"Inorder"<<endl;
    for(auto a:v) cout<<" "<<a;
    v = T.getPostOrder();
    cout<<endl<<"Postorder"<<endl;
    for(auto a:v) cout<<" "<<a;
    cout<<endl;
}