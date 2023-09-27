#include <bits/stdc++.h>
#include <tuple>

#define REP(i, n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()
const int INF = 1e9;

using namespace std;

struct node{
    int id, left, right;
    int parent, sibling, degree, depth, height;
};

node n[25];

void pre_search(node v){
    cout << " " << v.id;
    if(v.left != -1)
        pre_search(n[v.left]);
    if(v.right != -1)
        pre_search(n[v.right]);
    return;
}

void in_search(node v){
    if(v.left != -1)
        in_search(n[v.left]);
    cout << " " << v.id;
    if(v.right != -1)
        in_search(n[v.right]);
    return;
}

void pos_search(node v){
    if(v.left != -1)
        pos_search(n[v.left]);
    if(v.right != -1)
        pos_search(n[v.right]);
    cout << " " << v.id;
    return;
}

int main() {
    int v;
    cin >> v;
    REP(i, v){
        n[i].id = i;
        n[i].parent = -1;
        n[i].depth = 0;
        n[i].sibling = -1;
        n[i].degree = 0;
        n[i].height = 0;
    }
    REP(i, v){
        int x, left, right;
        cin >> x >> left >> right;
        n[x].left = left;
        n[x].right = right;
        if(n[x].left != -1){
            n[n[x].left].parent = x;
            n[n[x].left].sibling = right;
            n[x].degree++;
        }
        if(n[x].right != -1){
            n[n[x].right].parent = x;
            n[n[x].right].sibling = left;
            n[x].degree++;
        }
    }

    REP(i, v){
        node x = n[i];
        int count = 0;
        while(x.parent != -1){
            count++;
            n[x.parent].height = max(count, n[x.parent].height);
            x = n[x.parent];
        }
        n[i].depth = count;
    }

    node root;
    REP(i, v){
        if(n[i].depth == 0)
            root = n[i];
    }

    cout << "Preorder" << endl;
    pre_search(root);
    cout << endl << "Inorder" << endl;
    in_search(root);
    cout << endl << "Postorder" << endl;
    pos_search(root);
    cout << endl;

    return 0;
}