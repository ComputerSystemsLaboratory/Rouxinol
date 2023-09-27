#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <map>
#include <deque>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <list>
#include <unordered_map>


#define NIL -1
#define MAX 10000
using namespace std;

struct Node{
    int parent, left, right;
};
struct Node v[MAX];

void preParse(int u){
    if(u == NIL){
        return;
    }
    cout << " " << u;
    preParse(v[u].left);
    preParse(v[u].right);
}

void inParse(int u){
    if(u == NIL){
        return;
    }
    inParse(v[u].left);
    cout << " " << u;
    inParse(v[u].right);
}

void postParse(int u){
    if (u==NIL){
        return;
    }
    postParse(v[u].left);
    postParse(v[u].right);
    cout << " " << u;
}

int main() {
    
    int n;
    cin >> n;
    for (int i= 0;i<n;i++){
        v[i].parent = NIL;
    }
    for (int i=0;i<n;i++){
        int a,l,r;
        cin >> a >> l >> r;
        v[a].left = l;
        v[a].right = r;
        v[l].parent = a;
        v[r].parent = a;
    }
    int root;
    for (int i=0;i<n;i++){
        if(v[i].parent == NIL){
            root = i;
            break;
        }
    }
  
    cout << "Preorder" << endl;
    preParse(root);
    cout << endl;
    cout << "Inorder" << endl;
    inParse(root);
    cout << endl;
    cout << "Postorder" << endl;
    postParse(root);
    cout << endl;

}
