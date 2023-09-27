#include <iostream>
#include <vector>
#include <string>

using namespace std;

const int NIL = -1;

struct Node {
    int left, right;
    
    Node(int left, int right):left(left), right(right){}
    
};

struct Tree {
    int n; // number of nodes
    vector<int> parent; //parent
    vector<Node> nodes;
    vector<int> depth; //depth
    vector<int> height;
    
    Tree(int n): n(n) {
       parent.assign(n, -2);
       depth.assign(n, 0);
       nodes.assign(n, Node(NIL, NIL));
       height.assign(n, 0);
    }
    
    void addNode(int u, int left, int right) {
        nodes[u].left = left;
        nodes[u].right = right;
        if (left != -1) {
            parent[left] = u;
        }
        if (right != -1) {
            parent[right] = u;
        }
    }
    
    
    void preorder(int u, vector<int>& result) {
        if (u == -1) {
            return;
        }
        Node node = nodes[u];
        result.push_back(u);
        preorder(node.left, result);
        preorder(node.right, result);  
    }
    
    void inorder(int u, vector<int>& result) {
        if (u == -1) {
            return;
        }
        Node node = nodes[u];
        inorder(node.left, result);
        result.push_back(u);
        inorder(node.right, result);  
    }
    
    void postorder(int u, vector<int>& result) {
        if (u == -1) {
            return;
        }
        Node node = nodes[u];
        postorder(node.left, result);
        postorder(node.right, result);
        result.push_back(u);
    }
      
    void printResult(vector<int> result) {
        for (int i = 0; i < result.size(); i++) {
            cout << " " << result[i];
        }
        cout << endl;
    }

 
    void solve() {
        int root = -1;
        for (int i = 0; i < n; i++) {
            if (parent[i] == -2) {
                root = i;
                break;
            }
        }
        
        vector<int> result;
        
        cout << "Preorder" << endl;
        preorder(root, result);
        printResult(result);
        
        result.clear();
        cout << "Inorder" << endl;
        inorder(root, result);
        printResult(result);
        
        result.clear();
        cout << "Postorder" << endl;
        postorder(root, result);
        printResult(result);
       
    }
};

int main() {
    int n;
    cin >> n;
    Tree tree(n);
    for (int i = 0; i < n; i++) {
        int u, l, r;
        cin >> u >> l >> r;
        tree.addNode(u, l, r);   
    }
    tree.solve();
    
    return 0;
}